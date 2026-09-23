#include "hydrothunder_funcs.82.h"

DEFINE_REX_FUNC(sub_82125360) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x827935f4
	ctx.lr = 0x82125380;
	__imp__XamLoaderGetLaunchDataSize(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82125418
	if (!ctx.cr0.eq) goto loc_82125418;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82125bc8
	ctx.lr = 0x82125394;
	sub_82125BC8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82125c20
	ctx.lr = 0x821253A0;
	sub_82125C20(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82125c98
	ctx.lr = 0x821253B0;
	sub_82125C98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82793604
	ctx.lr = 0x821253B8;
	__imp__XamLoaderGetLaunchData(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82125410
	if (!ctx.cr0.eq) goto loc_82125410;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8215d3f0
	ctx.lr = 0x821253C8;
	sub_8215D3F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82125c98
	ctx.lr = 0x821253D8;
	sub_82125C98(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x8215d448
	ctx.lr = 0x821253EC;
	sub_8215D448(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// beq 0x8212540c
	if (ctx.cr0.eq) goto loc_8212540C;
	// bl 0x82125438
	ctx.lr = 0x821253FC;
	sub_82125438(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8269d1b8
	ctx.lr = 0x82125404;
	sub_8269D1B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8212541c
	goto loc_8212541C;
loc_8212540C:
	// bl 0x82125438
	ctx.lr = 0x82125410;
	sub_82125438(ctx, base);
loc_82125410:
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8269d1b8
	ctx.lr = 0x82125418;
	sub_8269D1B8(ctx, base);
loc_82125418:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8212541C:
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

DEFINE_REX_FUNC(sub_8212C530) {
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
	// addi r11,r11,-23528
	ctx.r11.s64 = ctx.r11.s64 + -23528;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8212c55c
	if (ctx.cr0.eq) goto loc_8212C55C;
	// bl 0x8269ce98
	ctx.lr = 0x8212C55C;
	sub_8269CE98(ctx, base);
loc_8212C55C:
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

DEFINE_REX_FUNC(sub_8212EEF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8212EEF8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,6044(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6044);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212EF1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r10,156(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 156);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,6044(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6044);
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
	ctx.lr = 0x8212EF4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x8212f060
	if (ctx.cr6.lt) goto loc_8212F060;
	// lis r28,-32106
	r28.s64 = -2104098816;
	// lis r29,-32106
	r29.s64 = -2104098816;
loc_8212EF5C:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bge cr6,0x8212f060
	if (!ctx.cr6.lt) goto loc_8212F060;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// lwz r10,156(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 156);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8212f060
	if (ctx.cr6.eq) goto loc_8212F060;
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212EF94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212EFA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8212f00c
	if (ctx.cr0.eq) goto loc_8212F00C;
	// lwz r3,6120(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212efcc
	if (ctx.cr6.eq) goto loc_8212EFCC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212EFCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212EFCC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212f0a8
	ctx.lr = 0x8212EFD4;
	sub_8212F0A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212f1c8
	ctx.lr = 0x8212EFDC;
	sub_8212F1C8(ctx, base);
	// lwz r3,6120(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212eff8
	if (ctx.cr6.eq) goto loc_8212EFF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212EFF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212EFF8:
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212F00C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212F00C:
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212F020;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6044(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6044);
	// lwz r4,152(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212F038;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6044(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6044);
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
	ctx.lr = 0x8212F058;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x8212ef5c
	if (!ctx.cr6.lt) goto loc_8212EF5C;
loc_8212F060:
	// lwz r3,6044(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6044);
	// lwz r4,152(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212F078;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6044(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6044);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212F08C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8213B670) {
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
	// bl 0x82120d70
	ctx.lr = 0x8213B690;
	sub_82120D70(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// addi r4,r30,28
	ctx.r4.s64 = r30.s64 + 28;
	// bl 0x82120d70
	ctx.lr = 0x8213B69C;
	sub_82120D70(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// addi r4,r30,56
	ctx.r4.s64 = r30.s64 + 56;
	// bl 0x82120d70
	ctx.lr = 0x8213B6A8;
	sub_82120D70(ctx, base);
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8213E7E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8213E7F0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r31,r3,12
	r31.s64 = ctx.r3.s64 + 12;
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8213e824
	goto loc_8213E824;
loc_8213E80C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x8213f6d0
	ctx.lr = 0x8213E818;
	sub_8213F6D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x8213E824;
	sub_8269CE98(ctx, base);
loc_8213E824:
	// lbz r11,25(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 25);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213e80c
	if (ctx.cr0.eq) goto loc_8213E80C;
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
	ctx.lr = 0x8213E858;
	sub_8269CE98(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,-17236
	ctx.r11.s64 = ctx.r11.s64 + -17236;
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// beq 0x8213e874
	if (ctx.cr0.eq) goto loc_8213E874;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8213E874;
	sub_8269CE98(ctx, base);
loc_8213E874:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82144B38) {
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
	// addi r11,r11,-14796
	ctx.r11.s64 = ctx.r11.s64 + -14796;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82144b64
	if (ctx.cr0.eq) goto loc_82144B64;
	// bl 0x8269ce98
	ctx.lr = 0x82144B64;
	sub_8269CE98(ctx, base);
loc_82144B64:
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

DEFINE_REX_FUNC(sub_82147140) {
	REX_FUNC_PROLOGUE();
	// b 0x82147f18
	sub_82147F18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82147428) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82147430;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,-14008
	ctx.r11.s64 = ctx.r11.s64 + -14008;
	// addi r10,r10,-13908
	ctx.r10.s64 = ctx.r10.s64 + -13908;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
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
	ctx.lr = 0x8214746C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6044(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6044);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82147484;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6044(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6044);
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214749C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// li r29,0
	r29.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// stw r29,80(r31)
	REX_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x821474dc
	if (ctx.cr6.eq) goto loc_821474DC;
loc_821474C4:
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x821474CC;
	sub_8269CE98(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821474c4
	if (!ctx.cr6.eq) goto loc_821474C4;
loc_821474DC:
	// lwz r3,76(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 76);
	// bl 0x8269ce98
	ctx.lr = 0x821474E4;
	sub_8269CE98(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// stw r29,68(r31)
	REX_STORE_U32(r31.u32 + 68, r29.u32);
	// beq cr6,0x82147520
	if (ctx.cr6.eq) goto loc_82147520;
loc_82147508:
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x82147510;
	sub_8269CE98(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82147508
	if (!ctx.cr6.eq) goto loc_82147508;
loc_82147520:
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// bl 0x8269ce98
	ctx.lr = 0x82147528;
	sub_8269CE98(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,-14028
	ctx.r11.s64 = ctx.r11.s64 + -14028;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8214F698) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8214F6A0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120600
	ctx.lr = 0x8214F6B0;
	sub_82120600(ctx, base);
	// addi r30,r31,20
	r30.s64 = r31.s64 + 20;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821501a8
	ctx.lr = 0x8214F6C4;
	sub_821501A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8214F6D4;
	sub_82120AC0(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8214f6fc
	if (ctx.cr6.eq) goto loc_8214F6FC;
	// lwz r3,40(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 40);
	// bl 0x821357c8
	ctx.lr = 0x8214F6EC;
	sub_821357C8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8214fde8
	ctx.lr = 0x8214F6FC;
	sub_8214FDE8(ctx, base);
loc_8214F6FC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82151A88) {
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
	ctx.lr = 0x82151A90;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r31,r3,16
	r31.s64 = ctx.r3.s64 + 16;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82151b88
	if (!ctx.cr6.gt) goto loc_82151B88;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82151AB0:
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82151ad4
	if (ctx.cr6.eq) goto loc_82151AD4;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82151ab0
	if (ctx.cr6.lt) goto loc_82151AB0;
	// b 0x82151b88
	goto loc_82151B88;
loc_82151AD4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82151ae8
	if (ctx.cr6.lt) goto loc_82151AE8;
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82151b00
	if (!ctx.cr6.gt) goto loc_82151B00;
loc_82151AE8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-25320
	ctx.r4.s64 = ctx.r11.s64 + -25320;
	// addi r3,r10,-23616
	ctx.r3.s64 = ctx.r10.s64 + -23616;
	// li r5,81
	ctx.r5.s64 = 81;
	// bl 0x821231d0
	ctx.lr = 0x82151B00;
	sub_821231D0(ctx, base);
loc_82151B00:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r9,r30,r9
	ctx.r9.u64 = ctx.r9.u64 - r30.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x82151B24;
	sub_826A1E70(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r28,4(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r28,-1
	r30.s64 = r28.s64 + -1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82151b84
	if (!ctx.cr6.gt) goto loc_82151B84;
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
	// bgt cr6,0x82151b50
	if (ctx.cr6.gt) goto loc_82151B50;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82151B50:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82151b84
	if (!ctx.cr6.gt) goto loc_82151B84;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269d1d0
	ctx.lr = 0x82151B64;
	sub_8269D1D0(ctx, base);
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82151B74;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x82151B7C;
	sub_8269D1B8(ctx, base);
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
loc_82151B84:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
loc_82151B88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8215A000) {
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
	ctx.lr = 0x8215A008;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,6116(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215a1a4
	if (ctx.cr6.eq) goto loc_8215A1A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215A030;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8215a1a4
	if (ctx.cr0.eq) goto loc_8215A1A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215A04C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-7636
	ctx.r4.s64 = ctx.r11.s64 + -7636;
	// bl 0x82125d00
	ctx.lr = 0x8215A058;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8215a1a4
	if (!ctx.cr0.eq) goto loc_8215A1A4;
	// lis r26,-32106
	r26.s64 = -2104098816;
	// lwz r4,40(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 40);
	// lwz r3,6044(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6044);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215A07C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215A090;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r9,16(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r8,12(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 12);
	// li r11,60
	ctx.r11.s64 = 60;
	// addi r4,r10,-7624
	ctx.r4.s64 = ctx.r10.s64 + -7624;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// divw r5,r9,r11
	ctx.r5.u64 = uint32_t((ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8215A0C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-7608
	ctx.r4.s64 = ctx.r11.s64 + -7608;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215A0DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r30,12(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8215a18c
	if (ctx.cr6.eq) goto loc_8215A18C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r27,r11,-7584
	r27.s64 = ctx.r11.s64 + -7584;
loc_8215A0F4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x8215A104;
	sub_82120AC0(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8215a118
	if (ctx.cr6.lt) goto loc_8215A118;
	// lwz r28,0(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x8215a11c
	goto loc_8215A11C;
loc_8215A118:
	// mr r28,r30
	r28.u64 = r30.u64;
loc_8215A11C:
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// b 0x8215a134
	goto loc_8215A134;
loc_8215A124:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82170f90
	ctx.lr = 0x8215A130;
	sub_82170F90(ctx, base);
	// lbzu r11,1(r28)
	ea = 1 + r28.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r28.u32 = ea;
loc_8215A134:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8215a124
	if (!ctx.cr0.eq) goto loc_8215A124;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8215a150
	if (!ctx.cr6.lt) goto loc_8215A150;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
loc_8215A150:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,56(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 56);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215A16C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x8215A17C;
	sub_82120AC0(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// addi r30,r30,60
	r30.s64 = r30.s64 + 60;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8215a0f4
	if (!ctx.cr6.eq) goto loc_8215A0F4;
loc_8215A18C:
	// lwz r3,6044(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6044);
	// lwz r4,40(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215A1A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215A1A4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82167B60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82167B68;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r10,r10,23876
	ctx.r10.s64 = ctx.r10.s64 + 23876;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r3,6044(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6044);
	// lwz r4,-24(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + -24);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82167B9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-24(r29)
	REX_STORE_U32(r29.u32 + -24, ctx.r11.u32);
	// addi r30,r31,84
	r30.s64 = r31.s64 + 84;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwz r29,4(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r28,r29
	r28.u64 = r29.u64;
	// lbz r11,165(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 165);
	// b 0x82167bec
	goto loc_82167BEC;
loc_82167BBC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 8);
	// bl 0x82169af8
	ctx.lr = 0x82167BC8;
	sub_82169AF8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,12
	ctx.r3.s64 = r29.s64 + 12;
	// lwz r28,0(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x82120ac0
	ctx.lr = 0x82167BDC;
	sub_82120AC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82167BE4;
	sub_8269CE98(ctx, base);
	// lbz r11,165(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 165);
	// mr r29,r28
	r29.u64 = r28.u64;
loc_82167BEC:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82167bbc
	if (ctx.cr0.eq) goto loc_82167BBC;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x8269ce98
	ctx.lr = 0x82167C1C;
	sub_8269CE98(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x821697a0
	ctx.lr = 0x82167C24;
	sub_821697A0(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x8215f0f0
	ctx.lr = 0x82167C2C;
	sub_8215F0F0(ctx, base);
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r4,r31,28
	ctx.r4.s64 = r31.s64 + 28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82120cc8
	ctx.lr = 0x82167C40;
	sub_82120CC8(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x8269ce98
	ctx.lr = 0x82167C48;
	sub_8269CE98(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8216bb58
	ctx.lr = 0x82167C50;
	sub_8216BB58(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8216FC10) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8216fc28
	if (!ctx.cr6.lt) goto loc_8216FC28;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8216FC28:
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
}

DEFINE_REX_FUNC(sub_82170EA8) {
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
	ctx.lr = 0x82170EB0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,26620
	r28.s64 = ctx.r11.s64 + 26620;
	// bne cr6,0x82170ee4
	if (!ctx.cr6.eq) goto loc_82170EE4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,26648
	ctx.r3.s64 = ctx.r11.s64 + 26648;
	// li r5,139
	ctx.r5.s64 = 139;
	// bl 0x821231d0
	ctx.lr = 0x82170EE4;
	sub_821231D0(ctx, base);
loc_82170EE4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x82170f00
	if (!ctx.cr6.eq) goto loc_82170F00;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,26676
	ctx.r3.s64 = ctx.r11.s64 + 26676;
	// li r5,140
	ctx.r5.s64 = 140;
	// bl 0x821231d0
	ctx.lr = 0x82170F00;
	sub_821231D0(ctx, base);
loc_82170F00:
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// mr r31,r26
	r31.u64 = r26.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// beq cr6,0x82170f68
	if (ctx.cr6.eq) goto loc_82170F68;
	// addi r5,r27,-2
	ctx.r5.s64 = r27.s64 + -2;
loc_82170F18:
	// lbzx r11,r6,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + r29.u32);
	// add r3,r6,r29
	ctx.r3.u64 = ctx.r6.u64 + r29.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82170f68
	if (ctx.cr0.eq) goto loc_82170F68;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82170d90
	ctx.lr = 0x82170F30;
	sub_82170D90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82170f54
	if (ctx.cr0.eq) goto loc_82170F54;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// add r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 + ctx.r6.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// sthu r11,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r5.u32 = ea;
	// blt cr6,0x82170f18
	if (ctx.cr6.lt) goto loc_82170F18;
	// b 0x82170f68
	goto loc_82170F68;
loc_82170F54:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,26708
	ctx.r3.s64 = ctx.r11.s64 + 26708;
	// li r5,151
	ctx.r5.s64 = 151;
	// bl 0x821231d0
	ctx.lr = 0x82170F68;
	sub_821231D0(ctx, base);
loc_82170F68:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// blt cr6,0x82170f78
	if (ctx.cr6.lt) goto loc_82170F78;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_82170F78:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sthx r26,r11,r27
	REX_STORE_U16(ctx.r11.u32 + r27.u32, r26.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821780E8) {
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
	// addi r30,r3,96
	r30.s64 = ctx.r3.s64 + 96;
	// addi r11,r11,28292
	ctx.r11.s64 = ctx.r11.s64 + 28292;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8215f0f0
	ctx.lr = 0x82178118;
	sub_8215F0F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82178120;
	sub_8215F0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125e40
	ctx.lr = 0x82178128;
	sub_82125E40(ctx, base);
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

DEFINE_REX_FUNC(sub_8217A390) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8217A398;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8217a3ec
	if (ctx.cr6.gt) goto loc_8217A3EC;
	// addi r9,r5,8
	ctx.r9.s64 = ctx.r5.s64 + 8;
	// mulli r9,r9,3
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(3));
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8217a3ec
	if (ctx.cr6.gt) goto loc_8217A3EC;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8269cc20
	ctx.lr = 0x8217A3D0;
	sub_8269CC20(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// stb r10,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// b 0x8217a42c
	goto loc_8217A42C;
loc_8217A3EC:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r28,r11,-20
	r28.s64 = ctx.r11.s64 + -20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bl 0x8217a250
	ctx.lr = 0x8217A404;
	sub_8217A250(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x826a1e70
	ctx.lr = 0x8217A418;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, ctx.xer);
	// beq cr6,0x8217a42c
	if (ctx.cr6.eq) goto loc_8217A42C;
	// bl 0x8269d6a0
	ctx.lr = 0x8217A42C;
	sub_8269D6A0(ctx, base);
loc_8217A42C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8217E490) {
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
	ctx.lr = 0x8217E498;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// bl 0x8217a4b8
	ctx.lr = 0x8217E4B0;
	sub_8217A4B8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8217d058
	ctx.lr = 0x8217E4C0;
	sub_8217D058(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8217e4ec
	if (ctx.cr6.eq) goto loc_8217E4EC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8217cef0
	ctx.lr = 0x8217E4DC;
	sub_8217CEF0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_8217E4EC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8217e5a0
	if (ctx.cr6.eq) goto loc_8217E5A0;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217e5a0
	if (ctx.cr0.eq) goto loc_8217E5A0;
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// bne cr6,0x8217e5a0
	if (!ctx.cr6.eq) goto loc_8217E5A0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r31,r29,1
	r31.s64 = r29.s64 + 1;
	// bl 0x8217a390
	ctx.lr = 0x8217E524;
	sub_8217A390(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8217e564
	if (ctx.cr6.eq) goto loc_8217E564;
loc_8217E52C:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb. r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8217e55c
	if (ctx.cr0.eq) goto loc_8217E55C;
	// cmpwi cr6,r10,62
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 62, ctx.xer);
	// beq cr6,0x8217e55c
	if (ctx.cr6.eq) goto loc_8217E55C;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8217a438
	ctx.lr = 0x8217E554;
	sub_8217A438(ctx, base);
	// addic. r31,r31,1
	ctx.xer.ca = r31.u32 > 4294967294;
	r31.s64 = r31.s64 + 1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8217e52c
	if (!ctx.cr0.eq) goto loc_8217E52C;
loc_8217E55C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8217e584
	if (!ctx.cr6.eq) goto loc_8217E584;
loc_8217E564:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8217e584
	if (ctx.cr6.eq) goto loc_8217E584;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8217daf0
	ctx.lr = 0x8217E584;
	sub_8217DAF0(ctx, base);
loc_8217E584:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bne cr6,0x8217e598
	if (!ctx.cr6.eq) goto loc_8217E598;
	// addi r3,r31,1
	ctx.r3.s64 = r31.s64 + 1;
	// b 0x8217e5c4
	goto loc_8217E5C4;
loc_8217E598:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8217e5c4
	goto loc_8217E5C4;
loc_8217E5A0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8217e5c0
	if (ctx.cr6.eq) goto loc_8217E5C0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8217daf0
	ctx.lr = 0x8217E5C0;
	sub_8217DAF0(ctx, base);
loc_8217E5C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8217E5C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821897C8) {
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
	// addi r11,r11,-32704
	ctx.r11.s64 = ctx.r11.s64 + -32704;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821d3be0
	ctx.lr = 0x821897F4;
	sub_821D3BE0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82189804
	if (ctx.cr0.eq) goto loc_82189804;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82189804;
	sub_8269CE98(ctx, base);
loc_82189804:
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

DEFINE_REX_FUNC(sub_8218B980) {
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
	ctx.lr = 0x8218B988;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x826a2ca0
	ctx.lr = 0x8218B990;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,164(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,92(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 92);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r24,0
	r24.s64 = 0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// addi r28,r11,32
	r28.s64 = ctx.r11.s64 + 32;
	// add r22,r10,r3
	r22.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r30,r11,16
	r30.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8218bb44
	if (!ctx.cr6.gt) goto loc_8218BB44;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// li r23,0
	r23.s64 = 0;
	// lfs f26,-19392(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19392);
	f26.f64 = double(temp.f32);
	// lfs f31,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f31.f64 = double(temp.f32);
loc_8218B9E4:
	// lwz r11,100(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 100);
	// lwz r10,104(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 104);
	// lwzx r11,r23,r11
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8218bb20
	if (!ctx.cr6.eq) goto loc_8218BB20;
	// lfs f0,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f13,212(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,208(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 208);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f13,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f11,f13,f10
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmadds f2,f13,f9,f12
	ctx.f2.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, ctx.f12.f64)));
	// fmsubs f1,f0,f9,f11
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, -ctx.f11.f64)));
	// bl 0x8218aa80
	ctx.lr = 0x8218BA38;
	sub_8218AA80(ctx, base);
	// lfs f0,224(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,12(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 12);
	// fdivs f0,f26,f0
	ctx.f0.f64 = double(float(f26.f64 / ctx.f0.f64));
	// rlwinm r25,r3,6,0,25
	r25.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + r25.u64;
	// fmuls f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// bge cr6,0x8218bb20
	if (!ctx.cr6.lt) goto loc_8218BB20;
	// lfs f0,228(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f26,f0
	ctx.f0.f64 = double(float(f26.f64 / ctx.f0.f64));
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// bge cr6,0x8218bb20
	if (!ctx.cr6.lt) goto loc_8218BB20;
	// lfs f0,232(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// fmr f27,f31
	f27.f64 = f31.f64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8218ba90
	if (!ctx.cr6.gt) goto loc_8218BA90;
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - f31.f64));
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fdivs f27,f13,f0
	f27.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_8218BA90:
	// lfs f0,236(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// fmr f30,f31
	f30.f64 = f31.f64;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8218baac
	if (!ctx.cr6.gt) goto loc_8218BAAC;
	// fsubs f13,f12,f31
	ctx.f13.f64 = double(float(ctx.f12.f64 - f31.f64));
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fdivs f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_8218BAAC:
	// lfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f29.f64 = double(temp.f32);
	// lfs f28,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f28.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x8218ca70
	ctx.lr = 0x8218BAC0;
	sub_8218CA70(ctx, base);
	// fmuls f0,f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f27.f64));
	// lfs f13,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// fmuls f29,f0,f30
	f29.f64 = double(float(ctx.f0.f64 * f30.f64));
	// fadds f0,f13,f29
	ctx.f0.f64 = double(float(ctx.f13.f64 + f29.f64));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r27,r11,r31
	r27.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + r25.u64;
	// bl 0x8218ca70
	ctx.lr = 0x8218BAF8;
	sub_8218CA70(ctx, base);
	// fmuls f0,f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f27.f64));
	// lfd f12,0(r27)
	ctx.f12.u64 = REX_LOAD_U64(r27.u32 + 0);
	// lfd f13,136(r31)
	ctx.f13.u64 = REX_LOAD_U64(r31.u32 + 136);
	// fsub f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 - ctx.f12.f64;
	// lfs f12,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f0,f0,f30,f29
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, f30.f64, -f29.f64)));
	// fdiv f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 / ctx.f13.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
loc_8218BB20:
	// lwz r11,96(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 96);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// cmpw cr6,r24,r10
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8218b9e4
	if (ctx.cr6.lt) goto loc_8218B9E4;
loc_8218BB44:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x826a2cec
	ctx.lr = 0x8218BB50;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82197610) {
	REX_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82197688) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82197690;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lbz r29,33(r31)
	r29.u64 = REX_LOAD_U8(r31.u32 + 33);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// bl 0x8215f2d0
	ctx.lr = 0x821976B4;
	sub_8215F2D0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821976CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8219B618) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,89(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 89);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8219b630
	if (ctx.cr0.eq) goto loc_8219B630;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8219b69c
	goto loc_8219B69C;
loc_8219B630:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,89(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 89);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8219b67c
	if (!ctx.cr0.eq) goto loc_8219B67C;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8219b650
	goto loc_8219B650;
loc_8219B648:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_8219B650:
	// lbz r9,89(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 89);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8219b648
	if (ctx.cr0.eq) goto loc_8219B648;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_8219B664:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8219b68c
	if (!ctx.cr6.eq) goto loc_8219B68C;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_8219B67C:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,89(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 89);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8219b664
	if (ctx.cr0.eq) goto loc_8219B664;
loc_8219B68C:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,89(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 89);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_8219B69C:
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219E308) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f11,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,236(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A0810) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,-28448
	ctx.r11.s64 = ctx.r11.s64 + -28448;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A1718) {
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
	// addi r3,r3,112
	ctx.r3.s64 = ctx.r3.s64 + 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x821A1744;
	sub_82120AC0(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x821A1754;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-31272
	ctx.r11.s64 = ctx.r11.s64 + -31272;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x82195c58
	ctx.lr = 0x821A1768;
	sub_82195C58(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a1778
	if (ctx.cr0.eq) goto loc_821A1778;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821A1778;
	sub_8269CE98(ctx, base);
loc_821A1778:
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

DEFINE_REX_FUNC(sub_821A4048) {
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
	ctx.lr = 0x821A4050;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x821613d8
	ctx.lr = 0x821A406C;
	sub_821613D8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821613d8
	ctx.lr = 0x821A407C;
	sub_821613D8(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mulli r10,r29,12
	ctx.r10.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(12));
	// lwz r27,88(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,1552
	ctx.r11.s64 = ctx.r11.s64 + 1552;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821a40b0
	goto loc_821A40B0;
loc_821A409C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, ctx.xer);
	// beq cr6,0x821a41a4
	if (ctx.cr6.eq) goto loc_821A41A4;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_821A40B0:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821a409c
	if (!ctx.cr6.eq) goto loc_821A409C;
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82400810
	ctx.lr = 0x821A40C8;
	sub_82400810(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A40DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x821613d8
	ctx.lr = 0x821A40EC;
	sub_821613D8(ctx, base);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821A40F4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a41c8
	if (ctx.cr0.eq) goto loc_821A41C8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,-26272
	ctx.r11.s64 = ctx.r11.s64 + -26272;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-26264
	ctx.r10.s64 = ctx.r10.s64 + -26264;
	// addi r9,r9,-26448
	ctx.r9.s64 = ctx.r9.s64 + -26448;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,-26448
	ctx.r11.s64 = ctx.r11.s64 + -26448;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r9,r8,-26448
	ctx.r9.s64 = ctx.r8.s64 + -26448;
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// addi r7,r11,-26360
	ctx.r7.s64 = ctx.r11.s64 + -26360;
	// stwx r9,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stwx r7,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r7.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r10,r10,-44
	ctx.r10.s64 = ctx.r10.s64 + -44;
	// stw r10,-4(r8)
	REX_STORE_U32(ctx.r8.u32 + -4, ctx.r10.u32);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
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
	// b 0x821a41cc
	goto loc_821A41CC;
loc_821A41A4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82161448
	ctx.lr = 0x821A41B0;
	sub_82161448(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x821a4264
	goto loc_821A4264;
loc_821A41C8:
	// li r31,0
	r31.s64 = 0;
loc_821A41CC:
	// stw r27,16(r31)
	REX_STORE_U32(r31.u32 + 16, r27.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lwz r11,6092(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6092);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// bne cr6,0x821a4214
	if (!ctx.cr6.eq) goto loc_821A4214;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A4208;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x822c95e8
	ctx.lr = 0x821A420C;
	sub_822C95E8(ctx, base);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// b 0x821a4238
	goto loc_821A4238;
loc_821A4214:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// bne cr6,0x821a4238
	if (!ctx.cr6.eq) goto loc_821A4238;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A4230;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x822c9240
	ctx.lr = 0x821A4234;
	sub_822C9240(ctx, base);
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
loc_821A4238:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A424C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// bl 0x823ffeb8
	ctx.lr = 0x821A4254;
	sub_823FFEB8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82124e10
	ctx.lr = 0x821A4260;
	sub_82124E10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_821A4264:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821B1610) {
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
	ctx.lr = 0x821B1618;
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// mr r31,r27
	r31.u64 = r27.u64;
	// bl 0x82178268
	ctx.lr = 0x821B1634;
	sub_82178268(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r10,r10,-22988
	ctx.r10.s64 = ctx.r10.s64 + -22988;
	// lfs f13,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r28,116
	r30.s64 = r28.s64 + 116;
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// lfs f0,228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,224(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,116(r28)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r28.u32 + 116, temp.u32);
	// stfs f0,120(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 120, temp.u32);
	// stfs f0,124(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 124, temp.u32);
	// stfs f13,128(r28)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r28.u32 + 128, temp.u32);
	// stfs f13,132(r28)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r28.u32 + 132, temp.u32);
	// stfs f12,136(r28)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r28.u32 + 136, temp.u32);
	// stfs f12,140(r28)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r28.u32 + 140, temp.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B1684;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b16b4
	if (ctx.cr0.eq) goto loc_821B16B4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r11,-23100
	ctx.r4.s64 = ctx.r11.s64 + -23100;
	// bl 0x82120600
	ctx.lr = 0x821B169C;
	sub_82120600(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r31,1
	r31.s64 = 1;
	// bl 0x82196ba8
	ctx.lr = 0x821B16B0;
	sub_82196BA8(ctx, base);
	// b 0x821b16b8
	goto loc_821B16B8;
loc_821B16B4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821B16B8:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r29,r28,80
	r29.s64 = r28.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821B16CC;
	sub_82145710(ctx, base);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b16e8
	if (ctx.cr0.eq) goto loc_821B16E8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// rlwinm r31,r31,0,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821B16E8;
	sub_82120AC0(ctx, base);
loc_821B16E8:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B16F0;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821b1720
	if (ctx.cr0.eq) goto loc_821B1720;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-23092
	ctx.r4.s64 = ctx.r11.s64 + -23092;
	// bl 0x82120600
	ctx.lr = 0x821B1708;
	sub_82120600(ctx, base);
	// addi r5,r28,120
	ctx.r5.s64 = r28.s64 + 120;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r31,r31,2
	r31.u64 = r31.u64 | 2;
	// bl 0x82196ba8
	ctx.lr = 0x821B171C;
	sub_82196BA8(ctx, base);
	// b 0x821b1724
	goto loc_821B1724;
loc_821B1720:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821B1724:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821B1734;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b1750
	if (ctx.cr0.eq) goto loc_821B1750;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// rlwinm r31,r31,0,31,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x821B1750;
	sub_82120AC0(ctx, base);
loc_821B1750:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B1758;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821b1788
	if (ctx.cr0.eq) goto loc_821B1788;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-23080
	ctx.r4.s64 = ctx.r11.s64 + -23080;
	// bl 0x82120600
	ctx.lr = 0x821B1770;
	sub_82120600(ctx, base);
	// addi r5,r28,124
	ctx.r5.s64 = r28.s64 + 124;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r31,r31,4
	r31.u64 = r31.u64 | 4;
	// bl 0x82196ba8
	ctx.lr = 0x821B1784;
	sub_82196BA8(ctx, base);
	// b 0x821b178c
	goto loc_821B178C;
loc_821B1788:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821B178C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821B179C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b17b8
	if (ctx.cr0.eq) goto loc_821B17B8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwinm r31,r31,0,30,28
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x821B17B8;
	sub_82120AC0(ctx, base);
loc_821B17B8:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B17C0;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821b17f0
	if (ctx.cr0.eq) goto loc_821B17F0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-23068
	ctx.r4.s64 = ctx.r11.s64 + -23068;
	// bl 0x82120600
	ctx.lr = 0x821B17D8;
	sub_82120600(ctx, base);
	// addi r5,r28,128
	ctx.r5.s64 = r28.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r31,r31,8
	r31.u64 = r31.u64 | 8;
	// bl 0x82196ba8
	ctx.lr = 0x821B17EC;
	sub_82196BA8(ctx, base);
	// b 0x821b17f4
	goto loc_821B17F4;
loc_821B17F0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821B17F4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821B1804;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b1820
	if (ctx.cr0.eq) goto loc_821B1820;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r31,0,29,27
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x821B1820;
	sub_82120AC0(ctx, base);
loc_821B1820:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B1828;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821b1858
	if (ctx.cr0.eq) goto loc_821B1858;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-23048
	ctx.r4.s64 = ctx.r11.s64 + -23048;
	// bl 0x82120600
	ctx.lr = 0x821B1840;
	sub_82120600(ctx, base);
	// addi r5,r28,132
	ctx.r5.s64 = r28.s64 + 132;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r31,r31,16
	r31.u64 = r31.u64 | 16;
	// bl 0x82196ba8
	ctx.lr = 0x821B1854;
	sub_82196BA8(ctx, base);
	// b 0x821b185c
	goto loc_821B185C;
loc_821B1858:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821B185C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821B186C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b1888
	if (ctx.cr0.eq) goto loc_821B1888;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r31,r31,0,28,26
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x821B1888;
	sub_82120AC0(ctx, base);
loc_821B1888:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B1890;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821b18c0
	if (ctx.cr0.eq) goto loc_821B18C0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-23024
	ctx.r4.s64 = ctx.r11.s64 + -23024;
	// bl 0x82120600
	ctx.lr = 0x821B18A8;
	sub_82120600(ctx, base);
	// addi r5,r28,136
	ctx.r5.s64 = r28.s64 + 136;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r31,r31,32
	r31.u64 = r31.u64 | 32;
	// bl 0x82196ba8
	ctx.lr = 0x821B18BC;
	sub_82196BA8(ctx, base);
	// b 0x821b18c4
	goto loc_821B18C4;
loc_821B18C0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821B18C4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821B18D4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b18f0
	if (ctx.cr0.eq) goto loc_821B18F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r31,r31,0,27,25
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// bl 0x82120ac0
	ctx.lr = 0x821B18F0;
	sub_82120AC0(ctx, base);
loc_821B18F0:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B18F8;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821b1928
	if (ctx.cr0.eq) goto loc_821B1928;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-23008
	ctx.r4.s64 = ctx.r11.s64 + -23008;
	// bl 0x82120600
	ctx.lr = 0x821B1910;
	sub_82120600(ctx, base);
	// addi r5,r28,140
	ctx.r5.s64 = r28.s64 + 140;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r31,r31,64
	r31.u64 = r31.u64 | 64;
	// bl 0x82196ba8
	ctx.lr = 0x821B1924;
	sub_82196BA8(ctx, base);
	// b 0x821b192c
	goto loc_821B192C;
loc_821B1928:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821B192C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821B193C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b1958
	if (ctx.cr0.eq) goto loc_821B1958;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r31,r31,0,26,24
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// bl 0x82120ac0
	ctx.lr = 0x821B1958;
	sub_82120AC0(ctx, base);
loc_821B1958:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x822f6280
	ctx.lr = 0x821B1960;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821b199c
	if (ctx.cr0.eq) goto loc_821B199C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,-23196
	ctx.r4.s64 = ctx.r11.s64 + -23196;
	// bl 0x82120600
	ctx.lr = 0x821B1978;
	sub_82120600(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r31,r31,128
	r31.u64 = r31.u64 | 128;
	// bl 0x821911f8
	ctx.lr = 0x821B1988;
	sub_821911F8(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// addi r10,r10,-23192
	ctx.r10.s64 = ctx.r10.s64 + -23192;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x821b19a0
	goto loc_821B19A0;
loc_821B199C:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_821B19A0:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821B19B0;
	sub_82145710(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// bl 0x8269ce98
	ctx.lr = 0x821B19BC;
	sub_8269CE98(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821B19C4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b19f0
	if (ctx.cr0.eq) goto loc_821B19F0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r28,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,6896
	ctx.r10.s64 = ctx.r10.s64 + 6896;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821b19f4
	goto loc_821B19F4;
loc_821B19F0:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_821B19F4:
	// rlwinm. r10,r31,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
	// stb r27,33(r30)
	REX_STORE_U8(r30.u32 + 33, r27.u8);
	// beq 0x821b1a14
	if (ctx.cr0.eq) goto loc_821B1A14;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82120ac0
	ctx.lr = 0x821B1A14;
	sub_82120AC0(ctx, base);
loc_821B1A14:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x821B1A1C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b1a3c
	if (ctx.cr0.eq) goto loc_821B1A3C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821dc550
	ctx.lr = 0x821B1A34;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821b1a40
	goto loc_821B1A40;
loc_821B1A3C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_821B1A40:
	// stw r4,112(r28)
	REX_STORE_U32(r28.u32 + 112, ctx.r4.u32);
	// addi r3,r28,96
	ctx.r3.s64 = r28.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x821B1A4C;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821B1A54;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821b1ac8
	if (ctx.cr0.eq) goto loc_821B1AC8;
	// stw r27,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, r27.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// addi r4,r11,-22996
	ctx.r4.s64 = ctx.r11.s64 + -22996;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821B1A78;
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
	ctx.lr = 0x821B1A8C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b1ab8
	if (ctx.cr0.eq) goto loc_821B1AB8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r28,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-15424
	ctx.r11.s64 = ctx.r11.s64 + -15424;
	// addi r10,r10,5504
	ctx.r10.s64 = ctx.r10.s64 + 5504;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821b1abc
	goto loc_821B1ABC;
loc_821B1AB8:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_821B1ABC:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x821b1acc
	goto loc_821B1ACC;
loc_821B1AC8:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_821B1ACC:
	// lwz r11,112(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821B1AE4;
	sub_82264568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821D6428) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,6096(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6096);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,12(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D6470;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,6092(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6092);
	// lwz r9,60(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// lwz r8,56(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r7,52(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r6,44(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,244(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D64A4;
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

DEFINE_REX_FUNC(sub_821DA658) {
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
	ctx.lr = 0x821DA660;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,268(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
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
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821da6a8
	if (ctx.cr6.eq) goto loc_821DA6A8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,11320
	ctx.r4.s64 = ctx.r11.s64 + 11320;
	// addi r3,r10,11432
	ctx.r3.s64 = ctx.r10.s64 + 11432;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x821231d0
	ctx.lr = 0x821DA6A8;
	sub_821231D0(ctx, base);
loc_821DA6A8:
	// lwz r30,32(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r25,r11,-25252
	r25.s64 = ctx.r11.s64 + -25252;
	// addi r24,r10,-25320
	r24.s64 = ctx.r10.s64 + -25320;
	// lwz r11,100(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821da6d8
	if (ctx.cr6.gt) goto loc_821DA6D8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x821231d0
	ctx.lr = 0x821DA6D8;
	sub_821231D0(ctx, base);
loc_821DA6D8:
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 96);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// stw r9,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r9.u32);
	// lwz r30,32(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821da71c
	if (ctx.cr6.gt) goto loc_821DA71C;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x821231d0
	ctx.lr = 0x821DA71C;
	sub_821231D0(ctx, base);
loc_821DA71C:
	// lwz r11,108(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 108);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,260(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// divw r11,r11,r10
	ctx.r11.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// stw r11,0(r21)
	REX_STORE_U32(r21.u32 + 0, ctx.r11.u32);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r7,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r7.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_821DF3A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821DF3A8;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82126320
	ctx.lr = 0x821DF3C8;
	sub_82126320(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821262a8
	ctx.lr = 0x821DF3D4;
	sub_821262A8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82126320
	ctx.lr = 0x821DF3DC;
	sub_82126320(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821262a8
	ctx.lr = 0x821DF3E8;
	sub_821262A8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821deda0
	ctx.lr = 0x821DF3F4;
	sub_821DEDA0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821deda0
	ctx.lr = 0x821DF400;
	sub_821DEDA0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821df1d8
	ctx.lr = 0x821DF414;
	sub_821DF1D8(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821def40
	ctx.lr = 0x821DF420;
	sub_821DEF40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// bl 0x821264e8
	ctx.lr = 0x821DF42C;
	sub_821264E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821E31F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821E31F8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r5,36(r4)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x821e3310
	ctx.lr = 0x821E320C;
	sub_821E3310(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821e3264
	if (ctx.cr0.eq) goto loc_821E3264;
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// addi r9,r1,72
	ctx.r9.s64 = ctx.r1.s64 + 72;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821E3228:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x821e3228
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E3228;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e324c
	if (ctx.cr6.eq) goto loc_821E324C;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821884b0
	ctx.lr = 0x821E324C;
	sub_821884B0(ctx, base);
loc_821E324C:
	// lfs f0,140(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stfs f0,20(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 20, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d5c80
	ctx.lr = 0x821E3264;
	sub_821D5C80(ctx, base);
loc_821E3264:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821E7AC0) {
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
	ctx.lr = 0x821E7AC8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x821e7af0
	if (!ctx.cr6.eq) goto loc_821E7AF0;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x821e7d38
	if (ctx.cr6.eq) goto loc_821E7D38;
loc_821E7AF0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e78e8
	ctx.lr = 0x821E7AF8;
	sub_821E78E8(ctx, base);
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// lis r10,1023
	ctx.r10.s64 = 67043328;
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// li r27,-1
	r27.s64 = -1;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// ori r28,r10,65535
	r28.u64 = ctx.r10.u64 | 65535;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// rlwinm r3,r11,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// ble cr6,0x821e7b3c
	if (!ctx.cr6.gt) goto loc_821E7B3C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821E7B3C:
	// bl 0x822f6338
	ctx.lr = 0x821E7B40;
	sub_822F6338(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// rlwinm r3,r11,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// ble cr6,0x821e7b5c
	if (!ctx.cr6.gt) goto loc_821E7B5C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821E7B5C:
	// bl 0x822f6338
	ctx.lr = 0x821E7B60;
	sub_822F6338(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// rlwinm r3,r11,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// ble cr6,0x821e7b7c
	if (!ctx.cr6.gt) goto loc_821E7B7C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821E7B7C:
	// bl 0x822f6338
	ctx.lr = 0x821E7B80;
	sub_822F6338(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r28,0
	r28.s64 = 0;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821e7bec
	if (!ctx.cr6.gt) goto loc_821E7BEC;
	// li r30,0
	r30.s64 = 0;
	// li r29,0
	r29.s64 = 0;
loc_821E7BA0:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + ctx.r11.u64;
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x821ec898
	ctx.lr = 0x821E7BB8;
	sub_821EC898(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x82126320
	ctx.lr = 0x821E7BC4;
	sub_82126320(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x82126320
	ctx.lr = 0x821E7BD0;
	sub_82126320(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,48
	r29.s64 = r29.s64 + 48;
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821e7ba0
	if (ctx.cr6.lt) goto loc_821E7BA0;
loc_821E7BEC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r9,r31,48
	ctx.r9.s64 = r31.s64 + 48;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r9,r11,96
	ctx.r9.s64 = ctx.r11.s64 + 96;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// ld r9,96(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 96);
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lfs f0,15048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r10,256
	ctx.r8.s64 = ctx.r10.s64 + 256;
	// addi r6,r10,256
	ctx.r6.s64 = ctx.r10.s64 + 256;
	// addi r5,r10,256
	ctx.r5.s64 = ctx.r10.s64 + 256;
	// std r9,48(r31)
	REX_STORE_U64(r31.u32 + 48, ctx.r9.u64);
	// addi r4,r10,256
	ctx.r4.s64 = ctx.r10.s64 + 256;
	// ld r9,104(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// std r9,56(r31)
	REX_STORE_U64(r31.u32 + 56, ctx.r9.u64);
	// ld r9,112(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 112);
	// std r9,64(r31)
	REX_STORE_U64(r31.u32 + 64, ctx.r9.u64);
	// ld r9,120(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 120);
	// std r9,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r9.u64);
	// lfs f4,96(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// lfs f12,100(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,112(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,64(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,116(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,68(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 68);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,104(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,56(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// lfs f13,48(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f4,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f11,120(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f4,72(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 72);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsubs f9,f8,f7
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fsubs f8,f6,f5
	ctx.f8.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsubs f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fneg f8,f8
	ctx.f8.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
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
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
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
	// rlwinm r7,r11,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// fsubs f11,f11,f4
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f4.f64));
	// rlwinm r3,r9,27,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r11,r11,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// or r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 | ctx.r9.u64;
	// lfsx f7,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f6,r6,r9
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsel f13,f7,f10,f13
	ctx.f13.f64 = ctx.f7.f64 >= 0.0 ? ctx.f10.f64 : ctx.f13.f64;
	// fsel f12,f6,f9,f12
	ctx.f12.f64 = ctx.f6.f64 >= 0.0 ? ctx.f9.f64 : ctx.f12.f64;
	// fsubs f10,f11,f8
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fsubs f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
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
	// rlwinm r8,r11,27,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// rlwinm r7,r9,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r11,r11,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// lfsx f10,r5,r11
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f9,r4,r9
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsel f11,f10,f11,f8
	ctx.f11.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f8.f64;
	// fsel f13,f9,f13,f12
	ctx.f13.f64 = ctx.f9.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fsubs f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
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
	// lfsx f0,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsel f0,f0,f13,f11
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f11.f64;
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
loc_821E7D38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82208480) {
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
	// b 0x822084a0
	goto loc_822084A0;
loc_82208498:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822082a0
	ctx.lr = 0x822084A0;
	sub_822082A0(ctx, base);
loc_822084A0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82208498
	if (!ctx.cr6.eq) goto loc_82208498;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822084f4
	if (ctx.cr6.eq) goto loc_822084F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822084D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822084E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822084f4
	if (ctx.cr0.eq) goto loc_822084F4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_822084F4:
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

DEFINE_REX_FUNC(sub_8220C330) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14332
	ctx.r3.s64 = ctx.r11.s64 + -14332;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220C490) {
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
	ctx.lr = 0x8220C498;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r3,6280(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6280);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220C4BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8220c56c
	if (!ctx.cr0.gt) goto loc_8220C56C;
	// addi r29,r29,572
	r29.s64 = r29.s64 + 572;
loc_8220C4C8:
	// lwz r3,6280(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6280);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220C4E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8226a468
	ctx.lr = 0x8220C4EC;
	sub_8226A468(ctx, base);
	// lwz r3,6280(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6280);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220C504;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220C520;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82120780
	ctx.lr = 0x8220C528;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8220c54c
	if (!ctx.cr0.eq) goto loc_8220C54C;
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// stw r31,52(r29)
	REX_STORE_U32(r29.u32 + 52, r31.u32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,60(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 60, temp.u32);
loc_8220C54C:
	// lwz r3,6280(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6280);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220C564;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8220c4c8
	if (ctx.cr6.lt) goto loc_8220C4C8;
loc_8220C56C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822136B8) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca4
	ctx.lr = 0x822136C0;
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,132(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 132);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r3,144
	r30.s64 = ctx.r3.s64 + 144;
	// addi r29,r3,252
	r29.s64 = ctx.r3.s64 + 252;
	// addi r24,r3,160
	r24.s64 = ctx.r3.s64 + 160;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f30,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f30.f64 = double(temp.f32);
	// addi r23,r3,268
	r23.s64 = ctx.r3.s64 + 268;
	// lfs f31,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f31.f64 = double(temp.f32);
	// li r28,4
	r28.s64 = 4;
	// lis r25,-32106
	r25.s64 = -2104098816;
	// addi r27,r10,-28356
	r27.s64 = ctx.r10.s64 + -28356;
	// addi r26,r11,-28368
	r26.s64 = ctx.r11.s64 + -28368;
loc_82213708:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lfs f12,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// lfs f11,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822139c0
	ctx.lr = 0x82213744;
	sub_822139C0(ctx, base);
	// lwz r3,6140(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 6140);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221375C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82213770
	if (ctx.cr6.lt) goto loc_82213770;
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82213774
	goto loc_82213774;
loc_82213770:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_82213774:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lfs f12,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// lfs f11,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x822139c0
	ctx.lr = 0x822137AC;
	sub_822139C0(ctx, base);
	// lfs f0,140(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// fadds f31,f31,f0
	f31.f64 = double(float(f31.f64 + ctx.f0.f64));
	// bne 0x82213708
	if (!ctx.cr0.eq) goto loc_82213708;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-96(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82221FF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82222000;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32106
	r31.s64 = -2104098816;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r3,6288(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6288);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82222024;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82222044
	if (ctx.cr0.eq) goto loc_82222044;
	// lwz r3,6288(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6288);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82222040;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82222044:
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r30,4(r29)
	REX_STORE_U8(r29.u32 + 4, r30.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82226270) {
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
	ctx.lr = 0x82226284;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82226294
	if (ctx.cr0.eq) goto loc_82226294;
	// bl 0x82227b10
	ctx.lr = 0x82226290;
	sub_82227B10(ctx, base);
	// b 0x82226298
	goto loc_82226298;
loc_82226294:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82226298:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82227680) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82227688;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,684(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 684);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x822276A8;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,16176
	ctx.r4.s64 = ctx.r11.s64 + 16176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x822276BC;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x822276C0;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x822276CC;
	sub_8215F2D0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,23228
	ctx.r4.s64 = ctx.r11.s64 + 23228;
	// bl 0x8215f338
	ctx.lr = 0x822276D8;
	sub_8215F338(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
loc_822276E0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822276f8
	if (!ctx.cr6.eq) goto loc_822276F8;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x822276fc
	goto loc_822276FC;
loc_822276F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822276FC:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82227778
	if (!ctx.cr6.lt) goto loc_82227778;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f530
	ctx.lr = 0x82227710;
	sub_8215F530(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x82227720;
	sub_8215F2D0(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82227724;
	sub_8215F990(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x82227744;
	sub_8216B6A8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,112(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x82227750;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
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
	ctx.lr = 0x82227770;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x822276e0
	goto loc_822276E0;
loc_82227778:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8222ABF8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13724
	ctx.r3.s64 = ctx.r11.s64 + -13724;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222AEB0) {
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
	ctx.lr = 0x8222AEC4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222aed4
	if (ctx.cr0.eq) goto loc_8222AED4;
	// bl 0x8222acc0
	ctx.lr = 0x8222AED0;
	sub_8222ACC0(ctx, base);
	// b 0x8222aed8
	goto loc_8222AED8;
loc_8222AED4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222AED8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222C280) {
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
	ctx.lr = 0x8222C288;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2ca8
	ctx.lr = 0x8222C290;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,384(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 384);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8222c444
	if (ctx.cr6.eq) goto loc_8222C444;
	// addi r4,r3,124
	ctx.r4.s64 = ctx.r3.s64 + 124;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c3de8
	ctx.lr = 0x8222C2B0;
	sub_821C3DE8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r10,-8
	ctx.r8.s64 = ctx.r10.s64 + -8;
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8222C2C8:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r8)
	ea = 8 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x8222c2c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222C2C8;
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// addi r3,r30,44
	ctx.r3.s64 = r30.s64 + 44;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222C2E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821884b0
	ctx.lr = 0x8222C310;
	sub_821884B0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8216ab58
	ctx.lr = 0x8222C318;
	sub_8216AB58(ctx, base);
	// lwz r11,384(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 384);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8222c444
	if (!ctx.cr6.gt) goto loc_8222C444;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// lfs f31,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	f31.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f30,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	f30.f64 = double(temp.f32);
	// lfs f29,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	f29.f64 = double(temp.f32);
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f28,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f28.f64 = double(temp.f32);
loc_8222C344:
	// lwz r11,392(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 392);
	// lwzx r31,r29,r11
	r31.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 240);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8222c438
	if (!ctx.cr6.eq) goto loc_8222C438;
	// ld r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 64);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r9,r31,64
	ctx.r9.s64 = r31.s64 + 64;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// ld r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 72);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x823fbd18
	ctx.lr = 0x8222C380;
	sub_823FBD18(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// ld r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// bgt cr6,0x8222c438
	if (ctx.cr6.gt) goto loc_8222C438;
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// bge cr6,0x8222c438
	if (!ctx.cr6.lt) goto loc_8222C438;
	// lfs f0,328(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lfs f13,324(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 324);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,320(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 320);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f13,f30,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f30.f64, ctx.f0.f64)));
	// fmadds f0,f12,f29,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, f29.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8222c438
	if (!ctx.cr6.lt) goto loc_8222C438;
	// lfs f13,352(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 352);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,432
	ctx.r11.s64 = r31.s64 + 432;
	// lfs f0,28(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f13,368(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,372(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 372);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,376(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 376);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,432(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 432);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,436(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 436);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,440(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 440);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f29,f0
	ctx.f7.f64 = double(float(f29.f64 * ctx.f0.f64));
	// fmuls f6,f30,f0
	ctx.f6.f64 = double(float(f30.f64 * ctx.f0.f64));
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 * ctx.f0.f64));
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f13,432(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 432, temp.u32);
	// fadds f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f13,436(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 436, temp.u32);
	// fadds f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f0,440(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 440, temp.u32);
loc_8222C438:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x8222c344
	if (!ctx.cr0.eq) goto loc_8222C344;
loc_8222C444:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2cf4
	ctx.lr = 0x8222C450;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8223DDA8) {
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
	// li r3,3896
	ctx.r3.s64 = 3896;
	// bl 0x822f6280
	ctx.lr = 0x8223DDBC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8223ddcc
	if (ctx.cr0.eq) goto loc_8223DDCC;
	// bl 0x8223dde0
	ctx.lr = 0x8223DDC8;
	sub_8223DDE0(ctx, base);
	// b 0x8223ddd0
	goto loc_8223DDD0;
loc_8223DDCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223DDD0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82240488) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,64
	ctx.r3.s64 = 64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x822404BC;
	sub_8269D1D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x822404C8;
	sub_8269D1B8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82241A40) {
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
	ctx.lr = 0x82241A48;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32106
	r28.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r3,6284(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82241A70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6284(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 6284);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r10,3880(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3880);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r31,r10,r9
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r11,44(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82241A98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r3,r31,r3
	ctx.r3.u64 = ctx.r3.u64 - r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8226d1e0
	ctx.lr = 0x82241AAC;
	sub_8226D1E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822450A0) {
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
	ctx.lr = 0x822450B4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822450c4
	if (ctx.cr0.eq) goto loc_822450C4;
	// bl 0x822450d8
	ctx.lr = 0x822450C0;
	sub_822450D8(ctx, base);
	// b 0x822450c8
	goto loc_822450C8;
loc_822450C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822450C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822463E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822463E8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82178268
	ctx.lr = 0x822463F8;
	sub_82178268(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,-15388
	ctx.r11.s64 = ctx.r11.s64 + -15388;
	// stw r29,112(r31)
	REX_STORE_U32(r31.u32 + 112, r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r29,116(r31)
	REX_STORE_U8(r31.u32 + 116, r29.u8);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x82120ac0
	ctx.lr = 0x82246420;
	sub_82120AC0(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x82246428;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82246448
	if (ctx.cr0.eq) goto loc_82246448;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x82246440;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8224644c
	goto loc_8224644C;
loc_82246448:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_8224644C:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x82246458;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x82246460;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822464d4
	if (ctx.cr0.eq) goto loc_822464D4;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-22996
	ctx.r4.s64 = ctx.r11.s64 + -22996;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x82246484;
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
	ctx.lr = 0x82246498;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822464c4
	if (ctx.cr0.eq) goto loc_822464C4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r11,r11,-15424
	ctx.r11.s64 = ctx.r11.s64 + -15424;
	// addi r10,r10,26336
	ctx.r10.s64 = ctx.r10.s64 + 26336;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x822464c8
	goto loc_822464C8;
loc_822464C4:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_822464C8:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x822464d8
	goto loc_822464D8;
loc_822464D4:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_822464D8:
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
	ctx.lr = 0x822464F0;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x822464F8;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82246530
	if (ctx.cr0.eq) goto loc_82246530;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-15416
	ctx.r4.s64 = ctx.r11.s64 + -15416;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x8224651C;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,-23824
	ctx.r11.s64 = ctx.r11.s64 + -23824;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x82246534
	goto loc_82246534;
loc_82246530:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_82246534:
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
	ctx.lr = 0x8224654C;
	sub_82264568(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x82246554;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82246580
	if (ctx.cr0.eq) goto loc_82246580;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,26112
	ctx.r10.s64 = ctx.r10.s64 + 26112;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82246584
	goto loc_82246584;
loc_82246580:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82246584:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r5,r11,-27088
	ctx.r5.s64 = ctx.r11.s64 + -27088;
	// bl 0x8216be80
	ctx.lr = 0x82246594;
	sub_8216BE80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82252D90) {
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
	// lwz r10,128(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 128);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82252460
	ctx.lr = 0x82252DC0;
	sub_82252460(ctx, base);
	// addi r11,r31,704
	ctx.r11.s64 = r31.s64 + 704;
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,704(r31)
	REX_STORE_U64(r31.u32 + 704, ctx.r11.u64);
	// ld r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// std r11,712(r31)
	REX_STORE_U64(r31.u32 + 712, ctx.r11.u64);
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

DEFINE_REX_FUNC(sub_82254610) {
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
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82254658
	if (!ctx.cr6.eq) goto loc_82254658;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r3,104(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r6,r11,-11368
	ctx.r6.s64 = ctx.r11.s64 + -11368;
	// addi r5,r10,-11480
	ctx.r5.s64 = ctx.r10.s64 + -11480;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82288100
	ctx.lr = 0x82254650;
	sub_82288100(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822546fc
	goto loc_822546FC;
loc_82254658:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x8225468c
	if (!ctx.cr6.eq) goto loc_8225468C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r3,104(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r6,r11,-11340
	ctx.r6.s64 = ctx.r11.s64 + -11340;
	// addi r5,r10,-26948
	ctx.r5.s64 = ctx.r10.s64 + -26948;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82288100
	ctx.lr = 0x82254684;
	sub_82288100(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x822546fc
	goto loc_822546FC;
loc_8225468C:
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x822546a0
	if (!ctx.cr6.eq) goto loc_822546A0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r5,r10,-26948
	ctx.r5.s64 = ctx.r10.s64 + -26948;
	// b 0x822546dc
	goto loc_822546DC;
loc_822546A0:
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// bne cr6,0x822546d4
	if (!ctx.cr6.eq) goto loc_822546D4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r3,104(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r6,r11,-11288
	ctx.r6.s64 = ctx.r11.s64 + -11288;
	// addi r5,r10,-26948
	ctx.r5.s64 = ctx.r10.s64 + -26948;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82288100
	ctx.lr = 0x822546CC;
	sub_82288100(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x822546fc
	goto loc_822546FC;
loc_822546D4:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r5,r10,-26252
	ctx.r5.s64 = ctx.r10.s64 + -26252;
loc_822546DC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r3,104(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,-11312
	ctx.r6.s64 = ctx.r11.s64 + -11312;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82288100
	ctx.lr = 0x822546F8;
	sub_82288100(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
loc_822546FC:
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82258688) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,-7216
	ctx.r11.s64 = ctx.r11.s64 + -7216;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x822586c0
	if (ctx.cr6.eq) goto loc_822586C0;
	// bl 0x822586f8
	ctx.lr = 0x822586C0;
	sub_822586F8(ctx, base);
loc_822586C0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,30860
	ctx.r11.s64 = ctx.r11.s64 + 30860;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x822586dc
	if (ctx.cr0.eq) goto loc_822586DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822586DC;
	sub_8269CE98(ctx, base);
loc_822586DC:
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

DEFINE_REX_FUNC(sub_8225F1C0) {
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
	ctx.lr = 0x8225F1C8;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,1
	r22.s64 = 1;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stb r22,1620(r3)
	REX_STORE_U8(ctx.r3.u32 + 1620, r22.u8);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r30,r11,-27048
	r30.s64 = ctx.r11.s64 + -27048;
	// stb r22,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, r22.u8);
	// addi r31,r10,1624
	r31.s64 = ctx.r10.s64 + 1624;
	// li r28,0
	r28.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// bl 0x8215f338
	ctx.lr = 0x8225F208;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r23,r11,-8108
	r23.s64 = ctx.r11.s64 + -8108;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8215f338
	ctx.lr = 0x8225F218;
	sub_8215F338(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r28
	r27.u64 = r28.u64;
loc_8225F220:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8225f244
	if (!ctx.cr6.eq) goto loc_8225F244;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x8225f248
	goto loc_8225F248;
loc_8225F244:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_8225F248:
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8225f290
	if (!ctx.cr6.lt) goto loc_8225F290;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8225F25C;
	sub_8215F1B0(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8225F260;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120d70
	ctx.lr = 0x8225F26C;
	sub_82120D70(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223db98
	ctx.lr = 0x8225F278;
	sub_8223DB98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x8225F288;
	sub_82120AC0(ctx, base);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// b 0x8225f220
	goto loc_8225F220;
loc_8225F290:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x8225F29C;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r25,r11,-9416
	r25.s64 = ctx.r11.s64 + -9416;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8215f338
	ctx.lr = 0x8225F2AC;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x8225F2B0;
	sub_8215F990(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x8225F2C0;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-8092
	ctx.r4.s64 = ctx.r11.s64 + -8092;
	// bl 0x8215f338
	ctx.lr = 0x8225F2CC;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x8225F2D0;
	sub_8215F990(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bgt cr6,0x8225f2e8
	if (ctx.cr6.gt) goto loc_8225F2E8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8225f404
	if (!ctx.cr6.gt) goto loc_8225F404;
loc_8225F2E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x8225F2F8;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r27,r29,192
	r27.s64 = r29.s64 + 192;
	// addi r26,r11,17480
	r26.s64 = ctx.r11.s64 + 17480;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82125d00
	ctx.lr = 0x8225F310;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225f330
	if (!ctx.cr0.eq) goto loc_8225F330;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,23068
	ctx.r4.s64 = ctx.r11.s64 + 23068;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120c08
	ctx.lr = 0x8225F32C;
	sub_82120C08(ctx, base);
	// b 0x8225f358
	goto loc_8225F358;
loc_8225F330:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,32388
	ctx.r4.s64 = ctx.r11.s64 + 32388;
	// bl 0x8215f338
	ctx.lr = 0x8225F340;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8225F344;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120b20
	ctx.lr = 0x8225F358;
	sub_82120B20(ctx, base);
loc_8225F358:
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x822f6280
	ctx.lr = 0x8225F360;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225f370
	if (ctx.cr0.eq) goto loc_8225F370;
	// bl 0x8226e490
	ctx.lr = 0x8225F36C;
	sub_8226E490(ctx, base);
	// b 0x8225f374
	goto loc_8225F374;
loc_8225F370:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8225F374:
	// stw r3,1600(r29)
	REX_STORE_U32(r29.u32 + 1600, ctx.r3.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82125d00
	ctx.lr = 0x8225F384;
	sub_82125D00(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r27,r11,27,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x8221c260
	ctx.lr = 0x8225F398;
	sub_8221C260(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// lwz r3,1600(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 1600);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// bl 0x8226ed28
	ctx.lr = 0x8225F3B8;
	sub_8226ED28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x8225F3C4;
	sub_8215F670(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8215f670
	ctx.lr = 0x8225F3CC;
	sub_8215F670(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8225F3D4;
	sub_8215F0F0(ctx, base);
	// stw r22,0(r29)
	REX_STORE_U32(r29.u32 + 0, r22.u32);
	// stw r28,8(r29)
	REX_STORE_U32(r29.u32 + 8, r28.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x8225F3E8;
	sub_8215F670(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8215f670
	ctx.lr = 0x8225F3F0;
	sub_8215F670(ctx, base);
	// bl 0x8215f0f0
	ctx.lr = 0x8225F3F4;
	sub_8215F0F0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x8225F404;
	sub_82120AC0(ctx, base);
loc_8225F404:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8221c1e8
	ctx.lr = 0x8225F40C;
	sub_8221C1E8(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_8226C728) {
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
	ctx.lr = 0x8226C730;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r11,16568
	r29.s64 = ctx.r11.s64 + 16568;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x82120600
	ctx.lr = 0x8226C754;
	sub_82120600(ctx, base);
	// lis r28,-32106
	r28.s64 = -2104098816;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,6256(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6256);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226C77C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8226C790;
	sub_82120AC0(ctx, base);
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226c860
	if (ctx.cr0.eq) goto loc_8226C860;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120600
	ctx.lr = 0x8226C7A4;
	sub_82120600(ctx, base);
	// lwz r3,6256(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6256);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226C7CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8226C7E0;
	sub_82120AC0(ctx, base);
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226c860
	if (ctx.cr0.eq) goto loc_8226C860;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,-16680
	ctx.r4.s64 = ctx.r11.s64 + -16680;
	// bl 0x8215f670
	ctx.lr = 0x8226C7FC;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226C804;
	sub_8215F0F0(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// stw r31,8(r30)
	REX_STORE_U32(r30.u32 + 8, r31.u32);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,88(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8226c858
	if (ctx.cr6.gt) goto loc_8226C858;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r11,-7928
	r30.s64 = ctx.r11.s64 + -7928;
loc_8226C828:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226C834;
	sub_8215F670(ctx, base);
	// bl 0x8215f270
	ctx.lr = 0x8226C838;
	sub_8215F270(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226C840;
	sub_8215F0F0(ctx, base);
	// stw r31,8(r28)
	REX_STORE_U32(r28.u32 + 8, r31.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stw r29,0(r28)
	REX_STORE_U32(r28.u32 + 0, r29.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8226c828
	if (!ctx.cr6.gt) goto loc_8226C828;
loc_8226C858:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8226c864
	goto loc_8226C864;
loc_8226C860:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226C864:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82274B70) {
	REX_FUNC_PROLOGUE();
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82274EF0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8216abd8
	ctx.lr = 0x82274F10;
	sub_8216ABD8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r30,656(r31)
	REX_STORE_U32(r31.u32 + 656, r30.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// lis r7,-32126
	ctx.r7.s64 = -2105409536;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f13,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f13,676(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 676, temp.u32);
	// stfs f0,672(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 672, temp.u32);
	// stfs f0,680(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 680, temp.u32);
	// lfs f11,812(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 812);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,692(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 692, temp.u32);
	// lfs f12,164(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 996);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,528(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 528);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,668(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 668);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,228(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 228);
	ctx.f8.f64 = double(temp.f32);
	// stfs f13,688(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 688, temp.u32);
	// stfs f10,696(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 696, temp.u32);
	// stfs f9,704(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 704, temp.u32);
	// stfs f12,708(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 708, temp.u32);
	// stfs f8,712(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 712, temp.u32);
	// lfs f11,216(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 216);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,724(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 724, temp.u32);
	// lfs f13,-19392(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -19392);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,720(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 720, temp.u32);
	// stfs f13,728(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 728, temp.u32);
	// lfs f11,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,736(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 736, temp.u32);
	// stfs f12,740(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 740, temp.u32);
	// stfs f11,744(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 744, temp.u32);
	// stfs f0,752(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 752, temp.u32);
	// stfs f13,756(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 756, temp.u32);
	// stfs f13,760(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 760, temp.u32);
	// stw r11,768(r31)
	REX_STORE_U32(r31.u32 + 768, ctx.r11.u32);
	// stfs f0,784(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 784, temp.u32);
	// stfs f0,788(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 788, temp.u32);
	// stfs f0,792(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 792, temp.u32);
	// stfs f0,800(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 800, temp.u32);
	// stfs f0,804(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 804, temp.u32);
	// stfs f0,808(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 808, temp.u32);
	// stb r6,816(r31)
	REX_STORE_U8(r31.u32 + 816, ctx.r6.u8);
	// stfs f0,820(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 820, temp.u32);
	// stb r11,824(r31)
	REX_STORE_U8(r31.u32 + 824, ctx.r11.u8);
	// stfs f0,828(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 828, temp.u32);
	// stfs f0,840(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 840, temp.u32);
	// stfs f0,836(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 836, temp.u32);
	// stfs f0,832(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 832, temp.u32);
	// lfs f3,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f0,848(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 848, temp.u32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// stfs f0,852(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 852, temp.u32);
	// stfs f0,856(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 856, temp.u32);
	// stfs f3,860(r31)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r31.u32 + 860, temp.u32);
	// stfs f0,864(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 864, temp.u32);
	// stfs f0,868(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 868, temp.u32);
	// stfs f3,872(r31)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r31.u32 + 872, temp.u32);
	// lfs f4,44(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,912(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 912);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8216ad88
	ctx.lr = 0x82275010;
	sub_8216AD88(ctx, base);
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

DEFINE_REX_FUNC(sub_82281FD8) {
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
	ctx.lr = 0x82281FE0;
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r20,r3,72
	r20.s64 = ctx.r3.s64 + 72;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r21,0
	r21.s64 = 0;
loc_82282004:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r21,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r21.u32);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8228201c
	if (ctx.cr6.lt) goto loc_8228201C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82282020
	goto loc_82282020;
loc_8228201C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82282020:
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stb r21,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r21.u8);
	// bdnz 0x82282004
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82282004;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r4,r10,-13316
	ctx.r4.s64 = ctx.r10.s64 + -13316;
	// lwz r3,460(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 460);
	// bl 0x821fd140
	ctx.lr = 0x82282040;
	sub_821FD140(ctx, base);
	// stb r3,70(r31)
	REX_STORE_U8(r31.u32 + 70, ctx.r3.u8);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,1148
	ctx.r4.s64 = ctx.r11.s64 + 1148;
	// bl 0x8215f338
	ctx.lr = 0x82282054;
	sub_8215F338(ctx, base);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// bl 0x8215fb50
	ctx.lr = 0x8228205C;
	sub_8215FB50(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,1168
	ctx.r4.s64 = ctx.r11.s64 + 1168;
	// bl 0x8215f338
	ctx.lr = 0x8228206C;
	sub_8215F338(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// bl 0x8215fb50
	ctx.lr = 0x82282074;
	sub_8215FB50(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,1188
	ctx.r4.s64 = ctx.r11.s64 + 1188;
	// bl 0x8215f338
	ctx.lr = 0x82282084;
	sub_8215F338(ctx, base);
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// bl 0x8215fb50
	ctx.lr = 0x8228208C;
	sub_8215FB50(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,1208
	ctx.r4.s64 = ctx.r11.s64 + 1208;
	// bl 0x8215f338
	ctx.lr = 0x8228209C;
	sub_8215F338(ctx, base);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// bl 0x8215fb50
	ctx.lr = 0x822820A4;
	sub_8215FB50(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,1220
	ctx.r4.s64 = ctx.r11.s64 + 1220;
	// bl 0x8215f338
	ctx.lr = 0x822820B4;
	sub_8215F338(ctx, base);
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// bl 0x8215fb50
	ctx.lr = 0x822820BC;
	sub_8215FB50(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,1244
	ctx.r4.s64 = ctx.r11.s64 + 1244;
	// bl 0x8215f338
	ctx.lr = 0x822820CC;
	sub_8215F338(ctx, base);
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// bl 0x8215fb50
	ctx.lr = 0x822820D4;
	sub_8215FB50(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,1268
	ctx.r4.s64 = ctx.r11.s64 + 1268;
	// bl 0x8215f338
	ctx.lr = 0x822820E4;
	sub_8215F338(ctx, base);
	// addi r4,r31,28
	ctx.r4.s64 = r31.s64 + 28;
	// bl 0x8215fb50
	ctx.lr = 0x822820EC;
	sub_8215FB50(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,1284
	ctx.r4.s64 = ctx.r11.s64 + 1284;
	// bl 0x8215f338
	ctx.lr = 0x822820FC;
	sub_8215F338(ctx, base);
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// bl 0x8215fb50
	ctx.lr = 0x82282104;
	sub_8215FB50(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,1304
	ctx.r4.s64 = ctx.r11.s64 + 1304;
	// bl 0x8215f338
	ctx.lr = 0x82282114;
	sub_8215F338(ctx, base);
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// bl 0x8215fb50
	ctx.lr = 0x8228211C;
	sub_8215FB50(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,1328
	ctx.r4.s64 = ctx.r11.s64 + 1328;
	// bl 0x8215f338
	ctx.lr = 0x8228212C;
	sub_8215F338(ctx, base);
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// bl 0x8215fb50
	ctx.lr = 0x82282134;
	sub_8215FB50(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,-23796
	ctx.r4.s64 = ctx.r11.s64 + -23796;
	// bl 0x8215f338
	ctx.lr = 0x82282144;
	sub_8215F338(ctx, base);
	// lbz r11,70(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 70);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82282160
	if (ctx.cr0.eq) goto loc_82282160;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-23184
	ctx.r4.s64 = ctx.r11.s64 + -23184;
	// b 0x822821b8
	goto loc_822821B8;
loc_82282160:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r4,r10,-13156
	ctx.r4.s64 = ctx.r10.s64 + -13156;
	// lwz r3,460(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 460);
	// bl 0x821fd140
	ctx.lr = 0x82282174;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82282188
	if (ctx.cr0.eq) goto loc_82282188;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,1036
	ctx.r4.s64 = ctx.r11.s64 + 1036;
	// b 0x822821b8
	goto loc_822821B8;
loc_82282188:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r4,r10,-13064
	ctx.r4.s64 = ctx.r10.s64 + -13064;
	// lwz r3,460(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 460);
	// bl 0x821fd140
	ctx.lr = 0x8228219C;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822821b0
	if (ctx.cr0.eq) goto loc_822821B0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,1048
	ctx.r4.s64 = ctx.r11.s64 + 1048;
	// b 0x822821b8
	goto loc_822821B8;
loc_822821B0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,22752
	ctx.r4.s64 = ctx.r11.s64 + 22752;
loc_822821B8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x822821C0;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,1352
	ctx.r4.s64 = ctx.r11.s64 + 1352;
	// bl 0x8215f338
	ctx.lr = 0x822821D0;
	sub_8215F338(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x8215fba8
	ctx.lr = 0x822821D8;
	sub_8215FBA8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,1364
	ctx.r4.s64 = ctx.r11.s64 + 1364;
	// bl 0x8215f338
	ctx.lr = 0x822821E8;
	sub_8215F338(ctx, base);
	// addi r4,r31,184
	ctx.r4.s64 = r31.s64 + 184;
	// bl 0x8215fba8
	ctx.lr = 0x822821F0;
	sub_8215FBA8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,1376
	ctx.r4.s64 = ctx.r11.s64 + 1376;
	// bl 0x8215f338
	ctx.lr = 0x82282200;
	sub_8215F338(ctx, base);
	// addi r4,r31,100
	ctx.r4.s64 = r31.s64 + 100;
	// bl 0x8215fba8
	ctx.lr = 0x82282208;
	sub_8215FBA8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,1388
	ctx.r4.s64 = ctx.r11.s64 + 1388;
	// bl 0x8215f338
	ctx.lr = 0x82282218;
	sub_8215F338(ctx, base);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// bl 0x8215fba8
	ctx.lr = 0x82282220;
	sub_8215FBA8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,1400
	ctx.r4.s64 = ctx.r11.s64 + 1400;
	// bl 0x8215f338
	ctx.lr = 0x82282230;
	sub_8215F338(ctx, base);
	// addi r4,r31,156
	ctx.r4.s64 = r31.s64 + 156;
	// bl 0x8215fba8
	ctx.lr = 0x82282238;
	sub_8215FBA8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r29,r21
	r29.u64 = r21.u64;
	// stw r21,48(r31)
	REX_STORE_U32(r31.u32 + 48, r21.u32);
	// addi r28,r11,1416
	r28.s64 = ctx.r11.s64 + 1416;
loc_82282248:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8215f338
	ctx.lr = 0x82282254;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82282278
	if (!ctx.cr6.eq) goto loc_82282278;
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
	// b 0x8228227c
	goto loc_8228227C;
loc_82282278:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_8228227C:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822822dc
	if (!ctx.cr6.lt) goto loc_822822DC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8215f338
	ctx.lr = 0x82282290;
	sub_8215F338(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82282298;
	sub_8215F1B0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8215fb50
	ctx.lr = 0x822822A0;
	sub_8215FB50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822822d4
	if (ctx.cr0.eq) goto loc_822822D4;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r30,r31,44
	r30.s64 = r31.s64 + 44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8212fcf0
	ctx.lr = 0x822822BC;
	sub_8212FCF0(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x8228ca78
	ctx.lr = 0x822822CC;
	sub_8228CA78(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
loc_822822D4:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x82282248
	goto loc_82282248;
loc_822822DC:
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stw r21,60(r31)
	REX_STORE_U32(r31.u32 + 60, r21.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r25,r21
	r25.u64 = r21.u64;
	// lfs f31,15048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	f31.f64 = double(temp.f32);
	// addi r23,r11,1452
	r23.s64 = ctx.r11.s64 + 1452;
	// addi r22,r10,1436
	r22.s64 = ctx.r10.s64 + 1436;
	// addi r26,r9,1428
	r26.s64 = ctx.r9.s64 + 1428;
loc_82282304:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8215f338
	ctx.lr = 0x82282310;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82282334
	if (!ctx.cr6.eq) goto loc_82282334;
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
	// b 0x82282338
	goto loc_82282338;
loc_82282334:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_82282338:
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82282440
	if (!ctx.cr6.lt) goto loc_82282440;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x8215f338
	ctx.lr = 0x82282364;
	sub_8215F338(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8228236C;
	sub_8215F1B0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8215f338
	ctx.lr = 0x82282374;
	sub_8215F338(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82166f38
	ctx.lr = 0x8228237C;
	sub_82166F38(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8215f338
	ctx.lr = 0x82282388;
	sub_8215F338(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82282390;
	sub_8215F1B0(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8215f338
	ctx.lr = 0x82282398;
	sub_8215F338(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82166f38
	ctx.lr = 0x822823A0;
	sub_82166F38(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// addi r30,r31,56
	r30.s64 = r31.s64 + 56;
	// lwz r27,60(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 60);
	// addi r29,r27,1
	r29.s64 = r27.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82282404
	if (!ctx.cr6.gt) goto loc_82282404;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(r28.s32, r29.s32, ctx.xer);
	// bgt cr6,0x822823d0
	if (ctx.cr6.gt) goto loc_822823D0;
	// mr r28,r29
	r28.u64 = r29.u64;
loc_822823D0:
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82282404
	if (!ctx.cr6.gt) goto loc_82282404;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r28,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x8269d1d0
	ctx.lr = 0x822823E4;
	sub_8269D1D0(ctx, base);
	// rlwinm r5,r27,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x822823F4;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x822823FC;
	sub_8269D1B8(ctx, base);
	// stw r19,0(r30)
	REX_STORE_U32(r30.u32 + 0, r19.u32);
	// stw r28,8(r30)
	REX_STORE_U32(r30.u32 + 8, r28.u32);
loc_82282404:
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// addi r4,r29,-1
	ctx.r4.s64 = r29.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82283740
	ctx.lr = 0x82282414;
	sub_82283740(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// ld r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// std r10,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// std r9,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// std r8,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r8.u64);
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// b 0x82282304
	goto loc_82282304;
loc_82282440:
	// addi r3,r31,264
	ctx.r3.s64 = r31.s64 + 264;
	// lwz r4,60(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 60);
	// bl 0x822834a0
	ctx.lr = 0x8228244C;
	sub_822834A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822824b0
	if (ctx.cr0.eq) goto loc_822824B0;
	// addi r28,r31,212
	r28.s64 = r31.s64 + 212;
	// li r30,5
	r30.s64 = 5;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_82282468:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821ea168
	ctx.lr = 0x82282474;
	sub_821EA168(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x82282468
	if (!ctx.cr0.eq) goto loc_82282468;
	// lwz r11,20(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82282494
	if (ctx.cr6.lt) goto loc_82282494;
	// lwz r4,0(r20)
	ctx.r4.u64 = REX_LOAD_U32(r20.u32 + 0);
	// b 0x82282498
	goto loc_82282498;
loc_82282494:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
loc_82282498:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821ea0e0
	ctx.lr = 0x822824A0;
	sub_821EA0E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822824b0
	if (ctx.cr0.eq) goto loc_822824B0;
	// lwz r3,216(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 216);
	// bl 0x822fbe20
	ctx.lr = 0x822824B0;
	sub_822FBE20(ctx, base);
loc_822824B0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_822A4B60) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,5996
	ctx.r3.s64 = ctx.r11.s64 + 5996;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A4CB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f10,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f10,f10,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f0.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x822a4d10
	if (ctx.cr6.eq) goto loc_822A4D10;
	// fdivs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// lfs f10,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bge cr6,0x822a4d00
	if (!ctx.cr6.lt) goto loc_822A4D00;
	// fneg f0,f11
	ctx.f0.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// b 0x822a4d04
	goto loc_822A4D04;
loc_822A4D00:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
loc_822A4D04:
	// lfs f13,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// b 0x822a4d2c
	goto loc_822A4D2C;
loc_822A4D10:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822a4d28
	if (!ctx.cr6.lt) goto loc_822A4D28;
	// fneg f0,f11
	ctx.f0.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// b 0x822a4d2c
	goto loc_822A4D2C;
loc_822A4D28:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
loc_822A4D2C:
	// stfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A8158) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A8508) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r4,176(r3)
	REX_STORE_U32(ctx.r3.u32 + 176, ctx.r4.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r31,r10,6720
	r31.s64 = ctx.r10.s64 + 6720;
	// addi r10,r3,192
	ctx.r10.s64 = ctx.r3.s64 + 192;
	// stw r11,152(r3)
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// stw r11,156(r3)
	REX_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// addi r4,r3,320
	ctx.r4.s64 = ctx.r3.s64 + 320;
	// stw r11,160(r3)
	REX_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r11,164(r3)
	REX_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// addi r11,r3,256
	ctx.r11.s64 = ctx.r3.s64 + 256;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// addi r30,r5,16
	r30.s64 = ctx.r5.s64 + 16;
	// ld r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// std r10,192(r3)
	REX_STORE_U64(ctx.r3.u32 + 192, ctx.r10.u64);
	// addi r31,r6,16
	r31.s64 = ctx.r6.s64 + 16;
	// ld r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// addi r10,r7,16
	ctx.r10.s64 = ctx.r7.s64 + 16;
	// std r11,200(r3)
	REX_STORE_U64(ctx.r3.u32 + 200, ctx.r11.u64);
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// ld r11,16(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 16);
	// std r11,208(r3)
	REX_STORE_U64(ctx.r3.u32 + 208, ctx.r11.u64);
	// ld r11,24(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 24);
	// std r11,216(r3)
	REX_STORE_U64(ctx.r3.u32 + 216, ctx.r11.u64);
	// ld r11,32(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 32);
	// std r11,224(r3)
	REX_STORE_U64(ctx.r3.u32 + 224, ctx.r11.u64);
	// ld r11,40(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 40);
	// std r11,232(r3)
	REX_STORE_U64(ctx.r3.u32 + 232, ctx.r11.u64);
	// lwz r11,48(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 48);
	// stw r11,240(r3)
	REX_STORE_U32(ctx.r3.u32 + 240, ctx.r11.u32);
	// lwz r11,52(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 52);
	// stw r11,244(r3)
	REX_STORE_U32(ctx.r3.u32 + 244, ctx.r11.u32);
	// lwz r11,56(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 56);
	// stw r11,248(r3)
	REX_STORE_U32(ctx.r3.u32 + 248, ctx.r11.u32);
	// lwz r11,60(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// stw r11,252(r3)
	REX_STORE_U32(ctx.r3.u32 + 252, ctx.r11.u32);
	// ld r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// std r11,256(r3)
	REX_STORE_U64(ctx.r3.u32 + 256, ctx.r11.u64);
	// ld r11,8(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// std r11,264(r3)
	REX_STORE_U64(ctx.r3.u32 + 264, ctx.r11.u64);
	// ld r11,16(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 16);
	// std r11,272(r3)
	REX_STORE_U64(ctx.r3.u32 + 272, ctx.r11.u64);
	// ld r11,24(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 24);
	// std r11,280(r3)
	REX_STORE_U64(ctx.r3.u32 + 280, ctx.r11.u64);
	// ld r11,32(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 32);
	// std r11,288(r3)
	REX_STORE_U64(ctx.r3.u32 + 288, ctx.r11.u64);
	// ld r11,40(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 40);
	// std r11,296(r3)
	REX_STORE_U64(ctx.r3.u32 + 296, ctx.r11.u64);
	// lwz r11,48(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 48);
	// stw r11,304(r3)
	REX_STORE_U32(ctx.r3.u32 + 304, ctx.r11.u32);
	// lwz r11,52(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 52);
	// stw r11,308(r3)
	REX_STORE_U32(ctx.r3.u32 + 308, ctx.r11.u32);
	// lwz r11,56(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 56);
	// stw r11,312(r3)
	REX_STORE_U32(ctx.r3.u32 + 312, ctx.r11.u32);
	// lwz r11,60(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 60);
	// stw r11,316(r3)
	REX_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// ld r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// std r11,320(r3)
	REX_STORE_U64(ctx.r3.u32 + 320, ctx.r11.u64);
	// ld r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// std r11,328(r3)
	REX_STORE_U64(ctx.r3.u32 + 328, ctx.r11.u64);
	// ld r11,16(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 16);
	// std r11,336(r3)
	REX_STORE_U64(ctx.r3.u32 + 336, ctx.r11.u64);
	// ld r11,24(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 24);
	// std r11,344(r3)
	REX_STORE_U64(ctx.r3.u32 + 344, ctx.r11.u64);
	// ld r11,32(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 32);
	// std r11,352(r3)
	REX_STORE_U64(ctx.r3.u32 + 352, ctx.r11.u64);
	// ld r11,40(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 40);
	// std r11,360(r3)
	REX_STORE_U64(ctx.r3.u32 + 360, ctx.r11.u64);
	// lwz r11,48(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 48);
	// stw r11,368(r3)
	REX_STORE_U32(ctx.r3.u32 + 368, ctx.r11.u32);
	// lwz r11,52(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 52);
	// stw r11,372(r3)
	REX_STORE_U32(ctx.r3.u32 + 372, ctx.r11.u32);
	// lwz r11,56(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 56);
	// stw r11,376(r3)
	REX_STORE_U32(ctx.r3.u32 + 376, ctx.r11.u32);
	// lwz r11,60(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 60);
	// stw r11,380(r3)
	REX_STORE_U32(ctx.r3.u32 + 380, ctx.r11.u32);
	// stb r8,384(r3)
	REX_STORE_U8(ctx.r3.u32 + 384, ctx.r8.u8);
	// stw r9,388(r3)
	REX_STORE_U32(ctx.r3.u32 + 388, ctx.r9.u32);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B9090) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca4
	ctx.lr = 0x822B9098;
	// stfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f29.u64);
	// stfd f30,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// lfs f0,48(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lis r31,-32243
	r31.s64 = -2113077248;
	// lfs f13,64(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// addi r28,r1,-160
	r28.s64 = ctx.r1.s64 + -160;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,68(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,52(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lfs f10,72(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f11,56(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lwz r5,240(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 240);
	// lfs f0,15048(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f13,-160(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stfs f11,-152(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f12,-156(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// lwz r30,240(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 240);
	// stfs f0,-148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -148, temp.u32);
	// ld r26,8(r28)
	r26.u64 = REX_LOAD_U64(r28.u32 + 8);
	// ld r28,0(r28)
	r28.u64 = REX_LOAD_U64(r28.u32 + 0);
	// stfs f0,-132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// std r28,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, r28.u64);
	// addi r27,r1,-144
	r27.s64 = ctx.r1.s64 + -144;
	// std r26,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, r26.u64);
	// lfs f10,68(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,72(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 72);
	ctx.f8.f64 = double(temp.f32);
	// addi r28,r5,-2
	r28.s64 = ctx.r5.s64 + -2;
	// lfs f11,36(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lfs f9,40(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lwz r31,92(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lfs f12,64(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// addi r26,r5,16592
	r26.s64 = ctx.r5.s64 + 16592;
	// lfs f13,32(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f11,-140(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// fsubs f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// stfs f13,-144(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// stfs f9,-136(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// ld r5,8(r27)
	ctx.r5.u64 = REX_LOAD_U64(r27.u32 + 8);
	// ld r27,0(r27)
	r27.u64 = REX_LOAD_U64(r27.u32 + 0);
	// addic r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	// std r5,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r5.u64);
	// addi r30,r30,-2
	r30.s64 = r30.s64 + -2;
	// std r27,0(r31)
	REX_STORE_U64(r31.u32 + 0, r27.u64);
	// lfs f11,68(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,72(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// subfe r28,r28,r28
	temp.u8 = (~r28.u32 + r28.u32 < ~r28.u32) | (~r28.u32 + r28.u32 + ctx.xer.ca < ctx.xer.ca);
	r28.u64 = ~r28.u64 + r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lfs f12,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addic r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	// lfs f9,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// and r5,r28,r11
	ctx.r5.u64 = r28.u64 & ctx.r11.u64;
	// lfs f8,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// subfe r30,r30,r30
	temp.u8 = (~r30.u32 + r30.u32 < ~r30.u32) | (~r30.u32 + r30.u32 + ctx.xer.ca < ctx.xer.ca);
	r30.u64 = ~r30.u64 + r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lfs f7,64(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmuls f4,f12,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f10,12(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f11,f9
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// stfs f10,0(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmsubs f12,f12,f11,f6
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f11.f64, -ctx.f6.f64)));
	// stfs f0,-132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// addi r11,r6,64
	ctx.r11.s64 = ctx.r6.s64 + 64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// and r10,r30,r29
	ctx.r10.u64 = r30.u64 & r29.u64;
	// fmsubs f11,f7,f9,f4
	ctx.f11.f64 = double(float(std::fma(ctx.f7.f64, ctx.f9.f64, -ctx.f4.f64)));
	// fmsubs f13,f13,f8,f5
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f8.f64, -ctx.f5.f64)));
	// beq cr6,0x822b9238
	if (ctx.cr6.eq) goto loc_822B9238;
	// lfs f9,276(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 276);
	ctx.f9.f64 = double(temp.f32);
	// addi r30,r5,272
	r30.s64 = ctx.r5.s64 + 272;
	// lfs f8,292(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 292);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f7,308(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 308);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// lfs f7,280(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 280);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,296(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 296);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,312(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 312);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,272(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 272);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,288(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 288);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,304(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 304);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,608(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 608);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,612(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 612);
	f31.f64 = double(temp.f32);
	// fmadds f9,f7,f12,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f9.f64)));
	// lfs f7,616(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 616);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f8,f6,f12,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f8.f64)));
	// fmadds f12,f5,f12,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f11.f64)));
	// fmadds f11,f4,f13,f9
	ctx.f11.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f9.f64)));
	// fmadds f9,f13,f3,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f13.f64, ctx.f3.f64, ctx.f8.f64)));
	// fmadds f13,f13,f2,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f2.f64, ctx.f12.f64)));
	// fmuls f12,f1,f11
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// stfs f12,-144(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// fmuls f12,f31,f9
	ctx.f12.f64 = double(float(f31.f64 * ctx.f9.f64));
	// stfs f12,-140(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f13,-136(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// b 0x822b9244
	goto loc_822B9244;
loc_822B9238:
	// stfs f0,-144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// stfs f0,-140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// stfs f0,-136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
loc_822B9244:
	// addi r30,r1,-144
	r30.s64 = ctx.r1.s64 + -144;
	// addi r29,r3,48
	r29.s64 = ctx.r3.s64 + 48;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ld r28,0(r30)
	r28.u64 = REX_LOAD_U64(r30.u32 + 0);
	// ld r30,8(r30)
	r30.u64 = REX_LOAD_U64(r30.u32 + 8);
	// stfs f0,-132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// std r28,48(r3)
	REX_STORE_U64(ctx.r3.u32 + 48, r28.u64);
	// std r30,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, r30.u64);
	// lfs f11,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmuls f4,f12,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f5,f11,f9
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmsubs f12,f12,f11,f6
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f11.f64, -ctx.f6.f64)));
	// fmsubs f11,f9,f7,f4
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f7.f64, -ctx.f4.f64)));
	// fmsubs f13,f13,f8,f5
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f8.f64, -ctx.f5.f64)));
	// beq cr6,0x822b9318
	if (ctx.cr6.eq) goto loc_822B9318;
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f9,276(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 276);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,292(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 292);
	ctx.f8.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f7,308(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 308);
	ctx.f7.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f6,280(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 280);
	ctx.f6.f64 = double(temp.f32);
	// addi r30,r10,272
	r30.s64 = ctx.r10.s64 + 272;
	// lfs f5,296(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 296);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,312(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 312);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,272(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 272);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,288(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 288);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,304(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 304);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,608(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 608);
	f31.f64 = double(temp.f32);
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f30,612(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 612);
	f30.f64 = double(temp.f32);
	// fmuls f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// lfs f29,616(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 616);
	f29.f64 = double(temp.f32);
	// fmuls f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmadds f9,f6,f12,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f9.f64)));
	// fmadds f8,f5,f12,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f8.f64)));
	// fmadds f12,f4,f12,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f4.f64, ctx.f12.f64, ctx.f11.f64)));
	// fmadds f11,f13,f3,f9
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f3.f64, ctx.f9.f64)));
	// fmadds f9,f13,f2,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f13.f64, ctx.f2.f64, ctx.f8.f64)));
	// fmadds f13,f1,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, ctx.f12.f64)));
	// fmuls f12,f11,f31
	ctx.f12.f64 = double(float(ctx.f11.f64 * f31.f64));
	// stfs f12,-144(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// fmuls f12,f30,f9
	ctx.f12.f64 = double(float(f30.f64 * ctx.f9.f64));
	// stfs f12,-140(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// fmuls f13,f29,f13
	ctx.f13.f64 = double(float(f29.f64 * ctx.f13.f64));
	// stfs f13,-136(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// b 0x822b9324
	goto loc_822B9324;
loc_822B9318:
	// stfs f0,-144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// stfs f0,-140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// stfs f0,-136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
loc_822B9324:
	// addi r30,r1,-144
	r30.s64 = ctx.r1.s64 + -144;
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
	// addi r28,r3,64
	r28.s64 = ctx.r3.s64 + 64;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ld r27,0(r30)
	r27.u64 = REX_LOAD_U64(r30.u32 + 0);
	// ld r30,8(r30)
	r30.u64 = REX_LOAD_U64(r30.u32 + 8);
	// std r27,64(r3)
	REX_STORE_U64(ctx.r3.u32 + 64, r27.u64);
	// std r30,72(r3)
	REX_STORE_U64(ctx.r3.u32 + 72, r30.u64);
	// beq cr6,0x822b939c
	if (ctx.cr6.eq) goto loc_822B939C;
	// lfs f12,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f8,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// lfs f4,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f6,f4
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	f31.f64 = double(temp.f32);
	// lfs f30,352(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 352);
	f30.f64 = double(temp.f32);
	// fmsubs f9,f6,f7,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f6.f64, ctx.f7.f64, -ctx.f9.f64)));
	// fmsubs f12,f12,f4,f5
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f4.f64, -ctx.f5.f64)));
	// fmsubs f11,f8,f11,f2
	ctx.f11.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, -ctx.f2.f64)));
	// fmuls f9,f9,f3
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmadds f12,f12,f1,f9
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f1.f64, ctx.f9.f64)));
	// fmadds f12,f11,f31,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, f31.f64, ctx.f12.f64)));
	// fadds f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 + f30.f64));
loc_822B939C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b9400
	if (ctx.cr6.eq) goto loc_822B9400;
	// lfs f13,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f9,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fneg f9,f9
	ctx.f9.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// lfs f8,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fneg f8,f8
	ctx.f8.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// lfs f6,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,352(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 352);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f13,f11
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f31,f6,f9
	f31.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fmuls f30,f8,f7
	f30.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmsubs f9,f7,f9,f1
	ctx.f9.f64 = double(float(std::fma(ctx.f7.f64, ctx.f9.f64, -ctx.f1.f64)));
	// fmsubs f11,f8,f11,f31
	ctx.f11.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, -f31.f64)));
	// fmsubs f13,f13,f6,f30
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f6.f64, -f30.f64)));
	// fmuls f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmadds f13,f13,f4,f9
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f4.f64, ctx.f9.f64)));
	// fmadds f13,f11,f3,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f3.f64, ctx.f13.f64)));
	// fadds f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
loc_822B9400:
	// fadds f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f0,-132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// addi r25,r1,-144
	r25.s64 = ctx.r1.s64 + -144;
	// stfs f0,-148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -148, temp.u32);
	// addi r24,r1,-160
	r24.s64 = ctx.r1.s64 + -160;
	// addi r30,r3,16
	r30.s64 = ctx.r3.s64 + 16;
	// addi r27,r3,32
	r27.s64 = ctx.r3.s64 + 32;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// fdivs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// stfs f13,92(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// ld r23,0(r11)
	r23.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r23,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, r23.u64);
	// ld r23,8(r11)
	r23.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r23,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, r23.u64);
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f6,f12,f11
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f11,f10,f11,f7
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, -ctx.f7.f64)));
	// stfs f11,-140(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// fmuls f11,f10,f13
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmsubs f13,f8,f13,f6
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, -ctx.f6.f64)));
	// stfs f13,-144(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// fmsubs f13,f12,f9,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f9.f64, -ctx.f11.f64)));
	// stfs f13,-136(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// ld r23,8(r25)
	r23.u64 = REX_LOAD_U64(r25.u32 + 8);
	// ld r25,0(r25)
	r25.u64 = REX_LOAD_U64(r25.u32 + 0);
	// stfs f0,-132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// std r25,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, r25.u64);
	// std r23,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, r23.u64);
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fneg f8,f8
	ctx.f8.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f11,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmuls f6,f12,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmsubs f12,f12,f10,f7
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f7.f64)));
	// stfs f12,-152(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// fmuls f12,f11,f10
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmsubs f13,f11,f13,f6
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, -ctx.f6.f64)));
	// stfs f13,-160(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// fmsubs f13,f9,f8,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f8.f64, -ctx.f12.f64)));
	// stfs f13,-156(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// ld r25,8(r24)
	r25.u64 = REX_LOAD_U64(r24.u32 + 8);
	// std r25,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, r25.u64);
	// ld r25,0(r24)
	r25.u64 = REX_LOAD_U64(r24.u32 + 0);
	// std r25,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, r25.u64);
	// beq cr6,0x822b953c
	if (ctx.cr6.eq) goto loc_822B953C;
	// lfs f12,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,344(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 344);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f11,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,340(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 340);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,336(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 336);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f4,320(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 320);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,324(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 324);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,328(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 328);
	ctx.f2.f64 = double(temp.f32);
	// fmsubs f13,f10,f13,f6
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, -ctx.f6.f64)));
	// fmsubs f12,f7,f12,f8
	ctx.f12.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, -ctx.f8.f64)));
	// fmsubs f11,f9,f11,f5
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, -ctx.f5.f64)));
	// fadds f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f13,-144(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// fadds f12,f2,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f12,-136(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// fadds f13,f3,f11
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// stfs f13,-140(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// b 0x822b9548
	goto loc_822B9548;
loc_822B953C:
	// stfs f0,-144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// stfs f0,-140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// stfs f0,-136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
loc_822B9548:
	// addi r4,r1,-144
	ctx.r4.s64 = ctx.r1.s64 + -144;
	// addi r24,r1,-160
	r24.s64 = ctx.r1.s64 + -160;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ld r25,0(r4)
	r25.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// ld r4,8(r4)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// stfs f0,-132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// std r25,0(r24)
	REX_STORE_U64(r24.u32 + 0, r25.u64);
	// std r4,8(r24)
	REX_STORE_U64(r24.u32 + 8, ctx.r4.u64);
	// addi r4,r1,-144
	ctx.r4.s64 = ctx.r1.s64 + -144;
	// beq cr6,0x822b95c8
	if (ctx.cr6.eq) goto loc_822B95C8;
	// lfs f12,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,344(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 344);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f11,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,340(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 340);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,336(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 336);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f4,320(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 320);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,324(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 324);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,328(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 328);
	ctx.f2.f64 = double(temp.f32);
	// fmsubs f13,f10,f13,f6
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, -ctx.f6.f64)));
	// fmsubs f12,f7,f12,f8
	ctx.f12.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, -ctx.f8.f64)));
	// fmsubs f11,f9,f11,f5
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, -ctx.f5.f64)));
	// fadds f13,f4,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// stfs f13,-144(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// fadds f12,f2,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f12,-136(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// fadds f13,f3,f11
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// stfs f13,-140(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// b 0x822b95d4
	goto loc_822B95D4;
loc_822B95C8:
	// stfs f0,-144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// stfs f0,-140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// stfs f0,-136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
loc_822B95D4:
	// ld r31,8(r4)
	r31.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// addi r25,r1,-128
	r25.s64 = ctx.r1.s64 + -128;
	// ld r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// lfs f11,-152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -152);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-156(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -156);
	ctx.f13.f64 = double(temp.f32);
	// addi r24,r1,-144
	r24.s64 = ctx.r1.s64 + -144;
	// lfs f12,-160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -160);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,-132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// std r31,8(r25)
	REX_STORE_U64(r25.u32 + 8, r31.u64);
	// std r4,0(r25)
	REX_STORE_U64(r25.u32 + 0, ctx.r4.u64);
	// lfs f9,-124(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -124);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f13,-140(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// lfs f10,-120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -120);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f10,-128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f12,-144(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// stfs f11,-136(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// ld r4,8(r24)
	ctx.r4.u64 = REX_LOAD_U64(r24.u32 + 8);
	// ld r31,0(r24)
	r31.u64 = REX_LOAD_U64(r24.u32 + 0);
	// std r31,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, r31.u64);
	// std r4,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,80(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,52(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// fadds f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// lfs f8,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f12,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,84(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,88(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// lwz r11,144(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 144);
	// lwz r8,64(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 64);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// fmadds f13,f12,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f11.f64, ctx.f13.f64)));
	// fmadds f13,f10,f9,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f9.f64, ctx.f13.f64)));
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// bgt cr6,0x822b9694
	if (ctx.cr6.gt) goto loc_822B9694;
	// lfs f13,88(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fneg f6,f13
	ctx.f6.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// bgt cr6,0x822b9698
	if (ctx.cr6.gt) goto loc_822B9698;
loc_822B9694:
	// fmr f6,f0
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f0.f64;
loc_822B9698:
	// lwz r11,60(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 60);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b986c
	if (ctx.cr0.eq) goto loc_822B986C;
	// lfs f13,112(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lfs f12,56(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f13,84(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// beq cr6,0x822b9784
	if (ctx.cr6.eq) goto loc_822B9784;
	// lfs f12,352(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 352);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// lfs f10,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f9,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f12,368(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 368);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,372(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 372);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,376(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 376);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f11,f8,f10
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f10,f7,f9
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// beq cr6,0x822b9784
	if (ctx.cr6.eq) goto loc_822B9784;
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,580(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 580);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f8,584(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 584);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f7,576(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 576);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r5,576
	ctx.r11.s64 = ctx.r5.s64 + 576;
	// addi r11,r5,592
	ctx.r11.s64 = ctx.r5.s64 + 592;
	// fadds f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// stfs f11,580(r5)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r5.u32 + 580, temp.u32);
	// fadds f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// stfs f12,576(r5)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r5.u32 + 576, temp.u32);
	// fadds f11,f10,f8
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// stfs f11,584(r5)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r5.u32 + 584, temp.u32);
	// lfs f8,592(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 592);
	ctx.f8.f64 = double(temp.f32);
	// lfs f4,616(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 616);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f10,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f3,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f9,596(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 596);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,612(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 612);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,608(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 608);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f12,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// lfs f7,600(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 600);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f11,f3,f11
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fadds f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f12,600(r5)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r5.u32 + 600, temp.u32);
	// fadds f12,f9,f11
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f12,596(r5)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r5.u32 + 596, temp.u32);
	// fadds f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f13,592(r5)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r5.u32 + 592, temp.u32);
loc_822B9784:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b9870
	if (ctx.cr6.eq) goto loc_822B9870;
	// lfs f13,352(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 352);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f11,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f7,f12,f13
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f13,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f13,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f11,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f4,368(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 368);
	ctx.f4.f64 = double(temp.f32);
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f3,372(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 372);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,376(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 376);
	ctx.f2.f64 = double(temp.f32);
	// lfs f13,84(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmuls f9,f9,f4
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fmuls f8,f3,f8
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// fmuls f7,f2,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// beq cr6,0x822b9870
	if (ctx.cr6.eq) goto loc_822B9870;
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f4,576(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 576);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f3,584(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 584);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f2,580(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 580);
	ctx.f2.f64 = double(temp.f32);
	// addi r11,r10,576
	ctx.r11.s64 = ctx.r10.s64 + 576;
	// addi r11,r10,592
	ctx.r11.s64 = ctx.r10.s64 + 592;
	// fadds f9,f4,f9
	ctx.f9.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// stfs f9,576(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 576, temp.u32);
	// fadds f9,f7,f3
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// stfs f9,584(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 584, temp.u32);
	// fadds f9,f8,f2
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// stfs f9,580(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 580, temp.u32);
	// lfs f3,600(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 600);
	ctx.f3.f64 = double(temp.f32);
	// lfs f9,616(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 616);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,608(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 608);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f7,612(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 612);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f13,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f7,592(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 592);
	ctx.f7.f64 = double(temp.f32);
	// lfs f4,596(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 596);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fadds f11,f10,f3
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// stfs f11,600(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 600, temp.u32);
	// fadds f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// stfs f12,592(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 592, temp.u32);
	// fadds f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f13,596(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 596, temp.u32);
	// b 0x822b9870
	goto loc_822B9870;
loc_822B986C:
	// stfs f0,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
loc_822B9870:
	// stfs f0,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822b9884
	if (ctx.cr6.eq) goto loc_822B9884;
	// addi r9,r5,320
	ctx.r9.s64 = ctx.r5.s64 + 320;
	// b 0x822b9898
	goto loc_822B9898;
loc_822B9884:
	// stfs f0,-144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// addi r9,r1,-144
	ctx.r9.s64 = ctx.r1.s64 + -144;
	// stfs f0,-140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// stfs f0,-136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// stfs f0,-132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -132, temp.u32);
loc_822B9898:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822b98a8
	if (ctx.cr6.eq) goto loc_822B98A8;
	// addi r11,r5,336
	ctx.r11.s64 = ctx.r5.s64 + 336;
	// b 0x822b98bc
	goto loc_822B98BC;
loc_822B98A8:
	// stfs f0,-160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// addi r11,r1,-160
	ctx.r11.s64 = ctx.r1.s64 + -160;
	// stfs f0,-156(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// stfs f0,-152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// stfs f0,-148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -148, temp.u32);
loc_822B98BC:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f12,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f9,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f4,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f11,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f3,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f10,f9,f8,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f8.f64, ctx.f10.f64)));
	// fmadds f10,f7,f13,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f10,f4,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f4.f64, ctx.f12.f64, ctx.f10.f64)));
	// fmadds f10,f11,f3,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f11.f64, ctx.f3.f64, ctx.f10.f64)));
	// fmadds f10,f2,f1,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f2.f64, ctx.f1.f64, ctx.f10.f64)));
	// beq cr6,0x822b9914
	if (ctx.cr6.eq) goto loc_822B9914;
	// addi r9,r10,320
	ctx.r9.s64 = ctx.r10.s64 + 320;
	// b 0x822b9928
	goto loc_822B9928;
loc_822B9914:
	// stfs f0,-144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// addi r9,r1,-144
	ctx.r9.s64 = ctx.r1.s64 + -144;
	// stfs f0,-140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// stfs f0,-136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// stfs f0,-132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -132, temp.u32);
loc_822B9928:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b9938
	if (ctx.cr6.eq) goto loc_822B9938;
	// addi r11,r10,336
	ctx.r11.s64 = ctx.r10.s64 + 336;
	// b 0x822b994c
	goto loc_822B994C;
loc_822B9938:
	// stfs f0,-160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// addi r11,r1,-160
	ctx.r11.s64 = ctx.r1.s64 + -160;
	// stfs f0,-156(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// stfs f0,-152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// stfs f0,-148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -148, temp.u32);
loc_822B994C:
	// lfs f9,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lwz r10,44(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f8,8(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f4,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	f31.f64 = double(temp.f32);
	// lfs f13,8(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 / f31.f64));
	// lfs f30,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f30.f64 = double(temp.f32);
	// lfs f31,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	f31.f64 = double(temp.f32);
	// fmsubs f9,f8,f7,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f7.f64, -ctx.f9.f64)));
	// lfs f8,32(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,92(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fnmsubs f12,f4,f12,f9
	ctx.f12.f64 = double(float(-std::fma(ctx.f4.f64, ctx.f12.f64, -ctx.f9.f64)));
	// fmuls f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fmadds f12,f3,f2,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f3.f64, ctx.f2.f64, ctx.f12.f64)));
	// fmuls f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fnmsubs f12,f11,f1,f12
	ctx.f12.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f1.f64, -ctx.f12.f64)));
	// fmadds f12,f30,f31,f12
	ctx.f12.f64 = double(float(std::fma(f30.f64, f31.f64, ctx.f12.f64)));
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fsubs f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// fmuls f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// beq cr6,0x822b99d8
	if (ctx.cr6.eq) goto loc_822B99D8;
	// lfs f11,48(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f5,f11
	ctx.cr6.compare(ctx.f5.f64, ctx.f11.f64);
	// bgt cr6,0x822b99d8
	if (ctx.cr6.gt) goto loc_822B99D8;
	// stfs f12,116(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f13,132(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// b 0x822b99e4
	goto loc_822B99E4;
loc_822B99D8:
	// fadds f13,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,116(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 132, temp.u32);
loc_822B99E4:
	// lfs f13,1084(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 1084);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f13,128(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// lfd f29,-104(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82308DC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82308DD0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82308dec
	if (!ctx.cr6.eq) goto loc_82308DEC;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82308f64
	goto loc_82308F64;
loc_82308DEC:
	// lwz r11,172(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 172);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82308e04
	if (ctx.cr6.eq) goto loc_82308E04;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82308e08
	goto loc_82308E08;
loc_82308E04:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82308E08:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82308e2c
	if (ctx.cr6.eq) goto loc_82308E2C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82308e20
	if (ctx.cr6.eq) goto loc_82308E20;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82308e24
	goto loc_82308E24;
loc_82308E20:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82308E24:
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// b 0x82308e30
	goto loc_82308E30;
loc_82308E2C:
	// lwz r11,168(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 168);
loc_82308E30:
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82308ee4
	if (ctx.cr6.eq) goto loc_82308EE4;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,4900
	ctx.r5.s64 = ctx.r10.s64 + 4900;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// li r6,1364
	ctx.r6.s64 = 1364;
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x82308E64;
	sub_82330A38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82308e78
	if (ctx.cr0.eq) goto loc_82308E78;
	// bl 0x823dc718
	ctx.lr = 0x82308E70;
	sub_823DC718(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82308e7c
	goto loc_82308E7C;
loc_82308E78:
	// li r31,0
	r31.s64 = 0;
loc_82308E7C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82308e8c
	if (!ctx.cr6.eq) goto loc_82308E8C;
loc_82308E84:
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x82308f64
	goto loc_82308F64;
loc_82308E8C:
	// lwz r11,172(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82308ea0
	if (ctx.cr6.eq) goto loc_82308EA0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82308ea4
	goto loc_82308EA4;
loc_82308EA0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82308EA4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82308ec8
	if (ctx.cr6.eq) goto loc_82308EC8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82308ebc
	if (ctx.cr6.eq) goto loc_82308EBC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82308ec0
	goto loc_82308EC0;
loc_82308EBC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82308EC0:
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// b 0x82308ecc
	goto loc_82308ECC;
loc_82308EC8:
	// lwz r11,168(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 168);
loc_82308ECC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,64(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8230ed30
	ctx.lr = 0x82308EDC;
	sub_8230ED30(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82308e84
	if (ctx.cr0.eq) goto loc_82308E84;
loc_82308EE4:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lhz r10,100(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 100);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r4,-3
	ctx.r4.s64 = -3;
	// rlwinm r5,r10,0,27,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	// lwz r3,-10820(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -10820);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,244(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82308F10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82308f64
	if (!ctx.cr0.eq) goto loc_82308F64;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// stw r31,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, r31.u32);
	// lwz r3,312(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 312);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82308F40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82308f64
	if (!ctx.cr0.eq) goto loc_82308F64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822fc958
	ctx.lr = 0x82308F54;
	sub_822FC958(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82308f64
	if (!ctx.cr0.eq) goto loc_82308F64;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_82308F64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82314160) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82314550) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82314574
	if (ctx.cr6.eq) goto loc_82314574;
	// bl 0x823295a8
	ctx.lr = 0x8231456C;
	sub_823295A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82314578
	if (!ctx.cr0.eq) goto loc_82314578;
loc_82314574:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82314578:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823157A8) {
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
	// std r5,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r5.u64);
	// addi r30,r3,16
	r30.s64 = ctx.r3.s64 + 16;
	// std r4,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r4.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// std r6,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, ctx.r6.u64);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,8(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823157E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82315914
	if (!ctx.cr0.eq) goto loc_82315914;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82315910
	if (ctx.cr6.eq) goto loc_82315910;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82315814;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82315914
	if (!ctx.cr0.eq) goto loc_82315914;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82315830
	if (!ctx.cr0.eq) goto loc_82315830;
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823158bc
	if (ctx.cr0.eq) goto loc_823158BC;
loc_82315830:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231584C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82315914
	if (!ctx.cr0.eq) goto loc_82315914;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ld r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 40);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82315878;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,3992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3992);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f13,3720(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823158a8
	if (ctx.cr6.lt) goto loc_823158A8;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_823158A8:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8233ede0
	ctx.lr = 0x823158B4;
	sub_8233EDE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82315914
	if (!ctx.cr0.eq) goto loc_82315914;
loc_823158BC:
	// ld r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 40);
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 24);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8233ec00
	ctx.lr = 0x823158E0;
	sub_8233EC00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82315914
	if (!ctx.cr0.eq) goto loc_82315914;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823158FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8233ea78
	ctx.lr = 0x82315908;
	sub_8233EA78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82315914
	if (!ctx.cr0.eq) goto loc_82315914;
loc_82315910:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82315914:
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

DEFINE_REX_FUNC(sub_82322B50) {
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
	// b 0x82322b90
	goto loc_82322B90;
loc_82322B70:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bne cr6,0x82322b80
	if (!ctx.cr6.eq) goto loc_82322B80;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82322B80:
	// bl 0x8232be90
	ctx.lr = 0x82322B84;
	sub_8232BE90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82322b9c
	if (!ctx.cr0.eq) goto loc_82322B9C;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82322B90:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x82322b70
	if (!ctx.cr6.eq) goto loc_82322B70;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82322B9C:
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

DEFINE_REX_FUNC(sub_823260B0) {
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
	ctx.lr = 0x823260B8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,12(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r27,r3,12
	r27.s64 = ctx.r3.s64 + 12;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(r28.u32, r27.u32, ctx.xer);
	// beq cr6,0x823261bc
	if (ctx.cr6.eq) goto loc_823261BC;
	// lis r23,-32126
	r23.s64 = -2105409536;
loc_823260DC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// bne cr6,0x823260ec
	if (!ctx.cr6.eq) goto loc_823260EC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823260EC:
	// lwz r30,52(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// addi r29,r11,52
	r29.s64 = ctx.r11.s64 + 52;
	// b 0x823261a8
	goto loc_823261A8;
loc_823260F8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r31,r30,-4
	r31.s64 = r30.s64 + -4;
	// bne cr6,0x82326108
	if (!ctx.cr6.eq) goto loc_82326108;
	// li r31,0
	r31.s64 = 0;
loc_82326108:
	// lwz r3,-10820(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + -10820);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,248(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82326128;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823261c0
	if (!ctx.cr0.eq) goto loc_823261C0;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823261a4
	if (ctx.cr0.eq) goto loc_823261A4;
	// lwz r9,4(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 4);
	// lwz r11,172(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82326154
	if (ctx.cr6.eq) goto loc_82326154;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82326158
	goto loc_82326158;
loc_82326154:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82326158:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8232617c
	if (ctx.cr6.eq) goto loc_8232617C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82326170
	if (ctx.cr6.eq) goto loc_82326170;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82326174
	goto loc_82326174;
loc_82326170:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82326174:
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// b 0x82326180
	goto loc_82326180;
loc_8232617C:
	// lwz r11,168(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 168);
loc_82326180:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r9,168(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 168);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r10,r10,148
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(148));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,64(r9)
	REX_STORE_U32(ctx.r9.u32 + 64, ctx.r11.u32);
loc_823261A4:
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_823261A8:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x823260f8
	if (!ctx.cr6.eq) goto loc_823260F8;
	// lwz r28,0(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(r28.u32, r27.u32, ctx.xer);
	// bne cr6,0x823260dc
	if (!ctx.cr6.eq) goto loc_823260DC;
loc_823261BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823261C0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8232D4D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8232D4D8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8232d4f4
	if (!ctx.cr6.eq) goto loc_8232D4F4;
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x8232d580
	goto loc_8232D580;
loc_8232D4F4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8232d504
	if (ctx.cr6.eq) goto loc_8232D504;
	// lwz r31,0(r5)
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// b 0x8232d508
	goto loc_8232D508;
loc_8232D504:
	// li r31,0
	r31.s64 = 0;
loc_8232D508:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232D524;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232d580
	if (!ctx.cr0.eq) goto loc_8232D580;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8232d574
	if (ctx.cr6.eq) goto loc_8232D574;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,5848(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 5848);
	// and. r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8232d55c
	if (!ctx.cr0.eq) goto loc_8232D55C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r10,5852(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 5852);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8232d560
	if (ctx.cr0.eq) goto loc_8232D560;
loc_8232D55C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8232D560:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232d574
	if (ctx.cr0.eq) goto loc_8232D574;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U64(r29.u32 + 8);
	// bl 0x823161a8
	ctx.lr = 0x8232D574;
	sub_823161A8(ctx, base);
loc_8232D574:
	// ld r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U64(r29.u32 + 8);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82316710
	ctx.lr = 0x8232D580;
	sub_82316710(ctx, base);
loc_8232D580:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823316D8) {
	REX_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
loc_823316DC:
	// lbz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// blt cr6,0x823316fc
	if (ctx.cr6.lt) goto loc_823316FC;
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// bgt cr6,0x823316fc
	if (ctx.cr6.gt) goto loc_823316FC;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
loc_823316FC:
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// blt cr6,0x82331720
	if (ctx.cr6.lt) goto loc_82331720;
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// bgt cr6,0x82331720
	if (ctx.cr6.gt) goto loc_82331720;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
loc_82331720:
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82331748
	if (ctx.cr6.eq) goto loc_82331748;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82331748
	if (!ctx.cr6.eq) goto loc_82331748;
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x823316dc
	if (ctx.cr6.lt) goto loc_823316DC;
loc_82331748:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8233C9A8) {
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
	// lbz r11,21(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 21);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233c9dc
	if (ctx.cr6.eq) goto loc_8233C9DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823379a8
	ctx.lr = 0x8233C9D4;
	sub_823379A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233ca58
	if (!ctx.cr6.eq) goto loc_8233CA58;
loc_8233C9DC:
	// lwz r3,1176(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1176);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ca00
	if (ctx.cr6.eq) goto loc_8233CA00;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233C9FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,1176(r31)
	REX_STORE_U32(r31.u32 + 1176, r30.u32);
loc_8233CA00:
	// addi r3,r31,24564
	ctx.r3.s64 = r31.s64 + 24564;
	// bl 0x82353bb8
	ctx.lr = 0x8233CA08;
	sub_82353BB8(ctx, base);
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// addi r5,r9,8872
	ctx.r5.s64 = ctx.r9.s64 + 8872;
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// li r6,4429
	ctx.r6.s64 = 4429;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// lwz r11,1012(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8233CA54;
	sub_82330D00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233CA58:
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

DEFINE_REX_FUNC(sub_82340348) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82340350;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,388(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 388);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82340384
	if (ctx.cr6.eq) goto loc_82340384;
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82340384
	if (ctx.cr6.eq) goto loc_82340384;
	// bl 0x8233e908
	ctx.lr = 0x82340378;
	sub_8233E908(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,388(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 388);
	// bl 0x8233e950
	ctx.lr = 0x82340384;
	sub_8233E950(ctx, base);
loc_82340384:
	// lwz r9,344(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 344);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,360(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 360);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,392(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 392);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r7,r10,r9
	ctx.r7.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// stw r11,356(r31)
	REX_STORE_U32(r31.u32 + 356, ctx.r11.u32);
	// stw r11,348(r31)
	REX_STORE_U32(r31.u32 + 348, ctx.r11.u32);
	// rlwinm r6,r8,0,24,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// mullw r30,r7,r9
	r30.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r6,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r6.u32);
	// stw r30,364(r31)
	REX_STORE_U32(r31.u32 + 364, r30.u32);
	// stw r30,368(r31)
	REX_STORE_U32(r31.u32 + 368, r30.u32);
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// subf r11,r30,r10
	ctx.r11.u64 = ctx.r10.u64 - r30.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x823403D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82340408
	if (ctx.cr6.eq) goto loc_82340408;
	// lwz r11,22000(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 22000);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82340408
	if (ctx.cr6.eq) goto loc_82340408;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82340408;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82340408:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823496F8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb0
	ctx.lr = 0x82349700;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x826a2ca8
	ctx.lr = 0x82349708;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f31,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f31.f64 = double(temp.f32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8234973C;
	sub_826A2E60(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x8234974c
	if (!ctx.cr6.eq) goto loc_8234974C;
	// mr r27,r29
	r27.u64 = r29.u64;
loc_8234974C:
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r27,90
	ctx.r3.s64 = r27.s64 + 90;
	// bl 0x823ef5f0
	ctx.lr = 0x8234975C;
	sub_823EF5F0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82349780
	if (!ctx.cr6.eq) goto loc_82349780;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,100(r27)
	REX_STORE_U16(r27.u32 + 100, ctx.r11.u16);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x826a2cf4
	ctx.lr = 0x8234977C;
	// b 0x826a1d00
	return;
loc_82349780:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823497d0
	if (ctx.cr6.eq) goto loc_823497D0;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82349790:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x823497a0
	if (!ctx.cr6.lt) goto loc_823497A0;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_823497A0:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfsx f13,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823497b8
	if (!ctx.cr6.gt) goto loc_823497B8;
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
loc_823497B8:
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// subfc r10,r26,r11
	ctx.xer.ca = ctx.r11.u32 >= r26.u32;
	ctx.r10.u64 = ctx.r11.u64 - r26.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r7,r11
	r31.u64 = ctx.r7.u64 & ctx.r11.u64;
	// bdnz 0x82349790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82349790;
loc_823497D0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r31,0
	r31.s64 = 0;
	// lfs f30,3720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	f30.f64 = double(temp.f32);
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
	// lfs f31,5644(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 5644);
	f31.f64 = double(temp.f32);
	// lfs f28,3704(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	f28.f64 = double(temp.f32);
	// lfs f29,9652(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 9652);
	f29.f64 = double(temp.f32);
loc_823497F8:
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f29
	ctx.cr6.compare(ctx.f1.f64, f29.f64);
	// bgt cr6,0x8234980c
	if (ctx.cr6.gt) goto loc_8234980C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82349858
	goto loc_82349858;
loc_8234980C:
	// fcmpu cr6,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f28.f64);
	// ble cr6,0x8234981c
	if (!ctx.cr6.gt) goto loc_8234981C;
	// li r9,31
	ctx.r9.s64 = 31;
	// b 0x82349858
	goto loc_82349858;
loc_8234981C:
	// bl 0x826a1830
	ctx.lr = 0x82349820;
	sub_826A1830(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fnmsubs f13,f0,f31,f30
	ctx.f13.f64 = double(float(-std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lhz r11,94(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// ble cr6,0x82349848
	if (!ctx.cr6.gt) goto loc_82349848;
	// li r11,30
	ctx.r11.s64 = 30;
	// b 0x82349854
	goto loc_82349854;
loc_82349848:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82349854
	if (!ctx.cr6.lt) goto loc_82349854;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82349854:
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
loc_82349858:
	// rlwinm r11,r31,29,27,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 29) & 0x1F;
	// clrlwi r10,r31,29
	ctx.r10.u64 = r31.u32 & 0x7;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// ble cr6,0x82349870
	if (!ctx.cr6.gt) goto loc_82349870;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82349870:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// ble cr6,0x82349880
	if (!ctx.cr6.gt) goto loc_82349880;
	// li r11,8
	ctx.r11.s64 = 8;
loc_82349880:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// subf r11,r11,r27
	ctx.r11.u64 = r27.u64 - ctx.r11.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r31,r31,5
	r31.s64 = r31.s64 + 5;
	// slw r7,r9,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lhz r6,98(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 98);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r31,80
	ctx.cr6.compare<uint32_t>(r31.u32, 80, ctx.xer);
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// sth r5,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r5.u16);
	// lbz r10,81(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stb r3,98(r11)
	REX_STORE_U8(ctx.r11.u32 + 98, ctx.r3.u8);
	// stb r10,99(r11)
	REX_STORE_U8(ctx.r11.u32 + 99, ctx.r10.u8);
	// blt cr6,0x823497f8
	if (ctx.cr6.lt) goto loc_823497F8;
	// sth r26,100(r27)
	REX_STORE_U16(r27.u32 + 100, r26.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x826a2cf4
	ctx.lr = 0x823498D4;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82354E00) {
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
	ctx.lr = 0x82354E08;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lis r26,-32129
	r26.s64 = -2105606144;
	// addi r27,r11,9888
	r27.s64 = ctx.r11.s64 + 9888;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82354ebc
	if (ctx.cr6.eq) goto loc_82354EBC;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r30
	r28.u64 = r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82354e98
	if (!ctx.cr6.gt) goto loc_82354E98;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82354E40:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82354e84
	if (ctx.cr6.eq) goto loc_82354E84;
	// lwz r10,1216(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1216);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,256(r10)
	REX_STORE_U32(ctx.r10.u32 + 256, r30.u32);
	// lwz r9,1216(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1216);
	// stw r30,212(r9)
	REX_STORE_U32(ctx.r9.u32 + 212, r30.u32);
	// lwz r8,1216(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 1216);
	// stw r30,64(r8)
	REX_STORE_U32(ctx.r8.u32 + 64, r30.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwzx r3,r29,r7
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + ctx.r7.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,20(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82354E84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82354E84:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82354e40
	if (ctx.cr6.lt) goto loc_82354E40;
loc_82354E98:
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r6,343
	ctx.r6.s64 = 343;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82354EB4;
	sub_82330D00(ctx, base);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
loc_82354EBC:
	// lwz r4,272(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 272);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82354ee4
	if (ctx.cr6.eq) goto loc_82354EE4;
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,350
	ctx.r6.s64 = 350;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82354EE0;
	sub_82330D00(ctx, base);
	// stw r30,272(r31)
	REX_STORE_U32(r31.u32 + 272, r30.u32);
loc_82354EE4:
	// lwz r4,276(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 276);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82354f0c
	if (ctx.cr6.eq) goto loc_82354F0C;
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lis r7,48
	ctx.r7.s64 = 3145728;
	// li r6,357
	ctx.r6.s64 = 357;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82354F08;
	sub_82330D00(ctx, base);
	// stw r30,276(r31)
	REX_STORE_U32(r31.u32 + 276, r30.u32);
loc_82354F0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8235C0A8) {
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
	ctx.lr = 0x8235C0B0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r3,24
	r30.s64 = ctx.r3.s64 + 24;
	// mr r27,r25
	r27.u64 = r25.u64;
	// li r26,1
	r26.s64 = 1;
loc_8235C0CC:
	// lwz r31,-4(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + -4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8235c120
	if (ctx.cr6.eq) goto loc_8235C120;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8235c108
	if (ctx.cr6.eq) goto loc_8235C108;
	// lbz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235c120
	if (!ctx.cr6.eq) goto loc_8235C120;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823498d8
	ctx.lr = 0x8235C0F8;
	sub_823498D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235c190
	if (!ctx.cr6.eq) goto loc_8235C190;
	// stb r26,40(r31)
	REX_STORE_U8(r31.u32 + 40, r26.u8);
	// b 0x8235c120
	goto loc_8235C120;
loc_8235C108:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823498d8
	ctx.lr = 0x8235C114;
	sub_823498D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235c190
	if (!ctx.cr6.eq) goto loc_8235C190;
	// stb r25,40(r31)
	REX_STORE_U8(r31.u32 + 40, r25.u8);
loc_8235C120:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235c17c
	if (ctx.cr6.eq) goto loc_8235C17C;
	// lwz r11,548(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 548);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 304);
	// mulli r6,r10,84
	ctx.r6.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(84));
	// bl 0x82331a00
	ctx.lr = 0x8235C148;
	sub_82331A00(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r8,76(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8235c17c
	if (ctx.cr6.eq) goto loc_8235C17C;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,76(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8235C174;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235c190
	if (!ctx.cr6.eq) goto loc_8235C190;
loc_8235C17C:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,132
	r30.s64 = r30.s64 + 132;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(r27.s32, 4, ctx.xer);
	// blt cr6,0x8235c0cc
	if (ctx.cr6.lt) goto loc_8235C0CC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8235C190:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82362190) {
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
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-10000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -10000, ctx.xer);
	// bge cr6,0x823621b8
	if (!ctx.cr6.lt) goto loc_823621B8;
	// li r11,-10000
	ctx.r11.s64 = -10000;
	// b 0x823621c4
	goto loc_823621C4;
loc_823621B8:
	// cmpwi cr6,r11,2000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2000, ctx.xer);
	// ble cr6,0x823621c8
	if (!ctx.cr6.gt) goto loc_823621C8;
	// li r11,2000
	ctx.r11.s64 = 2000;
loc_823621C4:
	// stw r11,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
loc_823621C8:
	// lwz r11,1768(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,28(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,9000(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 9000);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lfs f13,8516(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8516);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lfd f1,10608(r8)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r8.u32 + 10608);
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f2,f9,f13
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// bl 0x8269f778
	ctx.lr = 0x82362218;
	sub_8269F778(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lwz r11,1032(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1032);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f12,3716(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 3716);
	ctx.f12.f64 = double(temp.f32);
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// ble cr6,0x8236224c
	if (!ctx.cr6.gt) goto loc_8236224C;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r10,r31,816
	ctx.r10.s64 = r31.s64 + 816;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82362240:
	// lfsu f13,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// bdnz 0x82362240
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82362240;
loc_8236224C:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfs f13,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82362288
	if (ctx.cr6.eq) goto loc_82362288;
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fdivs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fadds f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82362294
	if (!ctx.cr6.gt) goto loc_82362294;
loc_82362288:
	// fsqrts f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// b 0x82362298
	goto loc_82362298;
loc_82362294:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
loc_82362298:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfd f13,11216(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 11216);
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,972(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 972, temp.u32);
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

DEFINE_REX_FUNC(sub_8236D420) {
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
	// beq cr6,0x8236d470
	if (ctx.cr6.eq) goto loc_8236D470;
	// lbz r11,308(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236d498
	if (!ctx.cr6.eq) goto loc_8236D498;
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236d468
	if (ctx.cr6.eq) goto loc_8236D468;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// lwz r6,336(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 336);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82331a00
	ctx.lr = 0x8236D468;
	sub_82331A00(ctx, base);
loc_8236D468:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8236d494
	goto loc_8236D494;
loc_8236D470:
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236d490
	if (ctx.cr6.eq) goto loc_8236D490;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// lwz r6,336(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 336);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82331a00
	ctx.lr = 0x8236D490;
	sub_82331A00(ctx, base);
loc_8236D490:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8236D494:
	// stb r11,308(r31)
	REX_STORE_U8(r31.u32 + 308, ctx.r11.u8);
loc_8236D498:
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

DEFINE_REX_FUNC(sub_823722D8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x823722e8
	if (!ctx.cr6.eq) goto loc_823722E8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823722E8:
	// b 0x82372220
	sub_82372220(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823736D8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb4
	ctx.lr = 0x823736E0;
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f29.u64);
	// stfd f30,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823737fc
	if (ctx.cr6.eq) goto loc_823737FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f29,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f29.f64 = double(temp.f32);
	// lfs f31,8616(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8616);
	f31.f64 = double(temp.f32);
	// lfs f30,9000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 9000);
	f30.f64 = double(temp.f32);
loc_82373724:
	// lfs f13,312(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 312);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,316(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82373744
	if (!ctx.cr6.eq) goto loc_82373744;
	// lfs f12,320(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 320);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,324(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 324);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// beq cr6,0x82373814
	if (ctx.cr6.eq) goto loc_82373814;
loc_82373744:
	// lfs f12,320(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 320);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fmadds f11,f12,f30,f31
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, f30.f64, f31.f64)));
	// bge cr6,0x82373768
	if (!ctx.cr6.lt) goto loc_82373768;
	// fadds f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 + f29.f64));
	// stfs f13,312(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 312, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82373784
	if (ctx.cr6.lt) goto loc_82373784;
	// b 0x82373780
	goto loc_82373780;
loc_82373768:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82373784
	if (!ctx.cr6.gt) goto loc_82373784;
	// fsubs f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 - f29.f64));
	// stfs f13,312(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 312, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82373784
	if (ctx.cr6.gt) goto loc_82373784;
loc_82373780:
	// stfs f0,312(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 312, temp.u32);
loc_82373784:
	// lfs f0,324(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x823737a4
	if (!ctx.cr6.lt) goto loc_823737A4;
	// fadds f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f13,320(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 320, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x823737c0
	if (ctx.cr6.lt) goto loc_823737C0;
	// b 0x823737bc
	goto loc_823737BC;
loc_823737A4:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x823737c0
	if (!ctx.cr6.gt) goto loc_823737C0;
	// fsubs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f13,320(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 320, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x823737c0
	if (ctx.cr6.gt) goto loc_823737C0;
loc_823737BC:
	// stfs f0,320(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 320, temp.u32);
loc_823737C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f2,320(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 320);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,312(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 312);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823733c0
	ctx.lr = 0x823737D0;
	sub_823733C0(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823723c0
	ctx.lr = 0x823737E8;
	sub_823723C0(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// bne 0x82373724
	if (!ctx.cr0.eq) goto loc_82373724;
loc_823737FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
loc_82373814:
	// li r11,1
	ctx.r11.s64 = 1;
	// lhz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 36);
	// slw r11,r11,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r30.u8 & 0x3F));
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82373848
	if (!ctx.cr6.eq) goto loc_82373848;
loc_82373830:
	// mullw r11,r28,r30
	ctx.r11.s64 = int64_t(r28.s32) * int64_t(r30.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x82373844;
	sub_823EF2F8(ctx, base);
	// b 0x823737fc
	goto loc_823737FC;
loc_82373848:
	// lfs f0,328(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82373830
	if (!ctx.cr6.lt) goto loc_82373830;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// bge cr6,0x823738a0
	if (!ctx.cr6.lt) goto loc_823738A0;
	// mullw r11,r28,r30
	ctx.r11.s64 = int64_t(r28.s32) * int64_t(r30.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x82373870;
	sub_823EF5F0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x823737fc
	if (!ctx.cr6.gt) goto loc_823737FC;
	// addi r11,r31,340
	ctx.r11.s64 = r31.s64 + 340;
	// rlwinm r10,r30,2,2,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x3FFFFFFC;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823737fc
	if (ctx.cr6.eq) goto loc_823737FC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82373894:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82373894
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82373894;
	// b 0x823737fc
	goto loc_823737FC;
loc_823738A0:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823723c0
	ctx.lr = 0x823738B8;
	sub_823723C0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8238DDC8) {
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
	ctx.lr = 0x8238DDD0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// lwz r21,260(r11)
	r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// lwz r22,4348(r10)
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + 4348);
	// lwz r11,256(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq cr6,0x8238df30
	if (ctx.cr6.eq) goto loc_8238DF30;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x8238df30
	if (ctx.cr6.gt) goto loc_8238DF30;
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-8672
	ctx.r12.s64 = ctx.r12.s64 + -8672;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8238DE90;
	case 1:
		goto loc_8238DE50;
	case 2:
		goto loc_8238DE58;
	case 3:
		goto loc_8238DE60;
	case 4:
		goto loc_8238DE68;
	case 5:
		goto loc_8238DE68;
	case 6:
		goto loc_8238DE90;
	case 7:
		goto loc_8238DE90;
	case 8:
		goto loc_8238DE90;
	case 9:
		goto loc_8238DE90;
	case 10:
		goto loc_8238DE90;
	case 11:
		goto loc_8238DE90;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8238DE50:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8238de6c
	goto loc_8238DE6C;
loc_8238DE58:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x8238de6c
	goto loc_8238DE6C;
loc_8238DE60:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x8238de6c
	goto loc_8238DE6C;
loc_8238DE68:
	// li r11,32
	ctx.r11.s64 = 32;
loc_8238DE6C:
	// li r10,0
	ctx.r10.s64 = 0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldimi r10,r20,3,29
	ctx.r10.u64 = (__builtin_rotateleft64(r20.u64, 3) & 0x7FFFFFFF8) | (ctx.r10.u64 & 0xFFFFFFF800000007);
	// tdllei r11,0
	if (ctx.r11.s64 == 0ll || ctx.r11.u64 < 0ull) ppc_trap(ctx, base, 0);
	// divdu r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 ? ctx.r10.u64 / ctx.r11.u64 : 0;
	// twllei r21,0
	if (r21.s32 == 0 || r21.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// divwu r26,r11,r21
	r26.u64 = uint32_t(r21.u32 ? ctx.r11.u32 / r21.u32 : 0);
	// b 0x8238df34
	goto loc_8238DF34;
loc_8238DE90:
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-8536
	ctx.r12.s64 = ctx.r12.s64 + -8536;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8238DF20;
	case 1:
		goto loc_8238DF30;
	case 2:
		goto loc_8238DF30;
	case 3:
		goto loc_8238DF30;
	case 4:
		goto loc_8238DF30;
	case 5:
		goto loc_8238DF30;
	case 6:
		goto loc_8238DED8;
	case 7:
		goto loc_8238DEEC;
	case 8:
		goto loc_8238DF04;
	case 9:
		goto loc_8238DF18;
	case 10:
		goto loc_8238DF18;
	case 11:
		goto loc_8238DF18;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8238DED8:
	// mulli r11,r20,14
	ctx.r11.s64 = static_cast<int64_t>(r20.u64 * static_cast<uint64_t>(14));
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// twllei r21,0
	if (r21.s32 == 0 || r21.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r26,r11,r21
	r26.u64 = uint32_t(r21.u32 ? ctx.r11.u32 / r21.u32 : 0);
	// b 0x8238df34
	goto loc_8238DF34;
loc_8238DEEC:
	// rlwinm r11,r20,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 6) & 0xFFFFFFC0;
	// li r10,36
	ctx.r10.s64 = 36;
	// twllei r21,0
	if (r21.s32 == 0 || r21.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r11,r10
	ctx.r11.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// divwu r26,r11,r21
	r26.u64 = uint32_t(r21.u32 ? ctx.r11.u32 / r21.u32 : 0);
	// b 0x8238df34
	goto loc_8238DF34;
loc_8238DF04:
	// mulli r11,r20,28
	ctx.r11.s64 = static_cast<int64_t>(r20.u64 * static_cast<uint64_t>(28));
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// twllei r21,0
	if (r21.s32 == 0 || r21.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r26,r11,r21
	r26.u64 = uint32_t(r21.u32 ? ctx.r11.u32 / r21.u32 : 0);
	// b 0x8238df34
	goto loc_8238DF34;
loc_8238DF18:
	// mr r26,r20
	r26.u64 = r20.u64;
	// b 0x8238df34
	goto loc_8238DF34;
loc_8238DF20:
	// li r11,0
	ctx.r11.s64 = 0;
	// twllei r21,0
	if (r21.s32 == 0 || r21.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r26,r11,r21
	r26.u64 = uint32_t(r21.u32 ? ctx.r11.u32 / r21.u32 : 0);
	// b 0x8238df34
	goto loc_8238DF34;
loc_8238DF30:
	// lwz r26,80(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8238DF34:
	// lbz r11,2164(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 2164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238e150
	if (ctx.cr6.eq) goto loc_8238E150;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2144(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8238e150
	if (ctx.cr6.eq) goto loc_8238E150;
	// lwz r28,1252(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 1252);
	// li r29,0
	r29.s64 = 0;
	// mr r25,r19
	r25.u64 = r19.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8238e14c
	if (ctx.cr6.eq) goto loc_8238E14C;
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r23,14
	r23.s64 = 14;
	// li r24,28
	r24.s64 = 28;
loc_8238DF74:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8238df9c
	if (!ctx.cr6.eq) goto loc_8238DF9C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8238d8f0
	ctx.lr = 0x8238DF88;
	sub_8238D8F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238e160
	if (!ctx.cr6.eq) goto loc_8238E160;
	// lwz r11,1256(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1256);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// b 0x8238dfa0
	goto loc_8238DFA0;
loc_8238DF9C:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_8238DFA0:
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + r29.u64;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// ble cr6,0x8238dfb0
	if (!ctx.cr6.gt) goto loc_8238DFB0;
	// subf r11,r29,r26
	ctx.r11.u64 = r26.u64 - r29.u64;
loc_8238DFB0:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8233e7e0
	ctx.lr = 0x8238DFBC;
	sub_8233E7E0(ctx, base);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x8238e004
	if (ctx.cr6.eq) goto loc_8238E004;
	// lwz r3,524(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 524);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1000
	ctx.r6.s64 = 1000;
	// lwz r8,1264(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 1264);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238DFEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238e168
	if (!ctx.cr6.eq) goto loc_8238E168;
	// lwz r11,1264(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1264);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1264(r27)
	REX_STORE_U32(r27.u32 + 1264, ctx.r11.u32);
loc_8238E004:
	// lwz r11,32(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 32);
	// lwz r11,256(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x8238e12c
	if (ctx.cr6.gt) goto loc_8238E12C;
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-8148
	ctx.r12.s64 = ctx.r12.s64 + -8148;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8238E090;
	case 1:
		goto loc_8238E05C;
	case 2:
		goto loc_8238E064;
	case 3:
		goto loc_8238E06C;
	case 4:
		goto loc_8238E074;
	case 5:
		goto loc_8238E074;
	case 6:
		goto loc_8238E090;
	case 7:
		goto loc_8238E090;
	case 8:
		goto loc_8238E090;
	case 9:
		goto loc_8238E090;
	case 10:
		goto loc_8238E090;
	case 11:
		goto loc_8238E090;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8238E05C:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8238e078
	goto loc_8238E078;
loc_8238E064:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x8238e078
	goto loc_8238E078;
loc_8238E06C:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x8238e078
	goto loc_8238E078;
loc_8238E074:
	// li r11,32
	ctx.r11.s64 = 32;
loc_8238E078:
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// mulld r7,r9,r8
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * ctx.r8.u64);
	// rldicl r6,r7,61,3
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// b 0x8238e128
	goto loc_8238E128;
loc_8238E090:
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-8024
	ctx.r12.s64 = ctx.r12.s64 + -8024;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8238E124;
	case 1:
		goto loc_8238E12C;
	case 2:
		goto loc_8238E12C;
	case 3:
		goto loc_8238E12C;
	case 4:
		goto loc_8238E12C;
	case 5:
		goto loc_8238E12C;
	case 6:
		goto loc_8238E0D8;
	case 7:
		goto loc_8238E0EC;
	case 8:
		goto loc_8238E108;
	case 9:
		goto loc_8238E11C;
	case 10:
		goto loc_8238E11C;
	case 11:
		goto loc_8238E11C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8238E0D8:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,13
	ctx.r10.s64 = ctx.r11.s64 + 13;
	// divwu r9,r10,r23
	ctx.r9.u64 = uint32_t(r23.u32 ? ctx.r10.u32 / r23.u32 : 0);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x8238e128
	goto loc_8238E128;
loc_8238E0EC:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,63
	ctx.r10.s64 = ctx.r11.s64 + 63;
	// rlwinm r11,r10,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x8238e128
	goto loc_8238E128;
loc_8238E108:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,27
	ctx.r10.s64 = ctx.r11.s64 + 27;
	// divwu r9,r10,r24
	ctx.r9.u64 = uint32_t(r24.u32 ? ctx.r10.u32 / r24.u32 : 0);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x8238e128
	goto loc_8238E128;
loc_8238E11C:
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8238e12c
	goto loc_8238E12C;
loc_8238E124:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8238E128:
	// mullw r30,r11,r21
	r30.s64 = int64_t(ctx.r11.s32) * int64_t(r21.s32);
loc_8238E12C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8233e820
	ctx.lr = 0x8238E134;
	sub_8233E820(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r25,r30,r25
	r25.u64 = r30.u64 + r25.u64;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// subf r28,r11,r28
	r28.u64 = r28.u64 - ctx.r11.u64;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(r29.u32, r26.u32, ctx.xer);
	// blt cr6,0x8238df74
	if (ctx.cr6.lt) goto loc_8238DF74;
loc_8238E14C:
	// stw r28,1252(r27)
	REX_STORE_U32(r27.u32 + 1252, r28.u32);
loc_8238E150:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x8238e15c
	if (ctx.cr6.eq) goto loc_8238E15C;
	// stw r20,0(r18)
	REX_STORE_U32(r18.u32 + 0, r20.u32);
loc_8238E15C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8238E160:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce0
	return;
loc_8238E168:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8233e820
	ctx.lr = 0x8238E170;
	sub_8233E820(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_823A9B20) {
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
	// addi r31,r11,17032
	r31.s64 = ctx.r11.s64 + 17032;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823A9B48;
	sub_823EF5F0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,21748
	ctx.r4.s64 = ctx.r10.s64 + 21748;
	// bl 0x82331480
	ctx.lr = 0x823A9B58;
	sub_82331480(ctx, base);
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// lis r9,-32195
	ctx.r9.s64 = -2109931520;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r10,r10,-27648
	ctx.r10.s64 = ctx.r10.s64 + -27648;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// addi r9,r9,6488
	ctx.r9.s64 = ctx.r9.s64 + 6488;
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// lis r4,-32195
	ctx.r4.s64 = -2109931520;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lis r5,-32197
	ctx.r5.s64 = -2110062592;
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// lis r6,-32197
	ctx.r6.s64 = -2110062592;
	// addi r11,r4,6488
	ctx.r11.s64 = ctx.r4.s64 + 6488;
	// addi r10,r5,-25848
	ctx.r10.s64 = ctx.r5.s64 + -25848;
	// addi r9,r6,-27568
	ctx.r9.s64 = ctx.r6.s64 + -27568;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// lis r7,-32195
	ctx.r7.s64 = -2109931520;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r9,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r7,6488
	ctx.r9.s64 = ctx.r7.s64 + 6488;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// lis r8,-32195
	ctx.r8.s64 = -2109931520;
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// stw r9,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r9.u32);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// addi r11,r8,6488
	ctx.r11.s64 = ctx.r8.s64 + 6488;
	// li r9,1224
	ctx.r9.s64 = 1224;
	// stw r10,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_823ADA70) {
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
	// bl 0x8239bd28
	ctx.lr = 0x823ADA88;
	sub_8239BD28(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22176
	ctx.r9.s64 = ctx.r10.s64 + 22176;
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r11,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r11.u32);
	// stw r11,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_823AFC88) {
	REX_FUNC_PROLOGUE();
	// lwz r11,364(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 364);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823afcb8
	if (ctx.cr6.eq) goto loc_823AFCB8;
	// lwz r10,360(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 360);
	// lwz r9,280(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 280);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823afcb8
	if (ctx.cr6.lt) goto loc_823AFCB8;
	// lwz r11,284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823afcbc
	if (ctx.cr6.eq) goto loc_823AFCBC;
loc_823AFCB8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823AFCBC:
	// stb r11,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823B2610) {
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
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// lwz r11,-26716(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -26716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823b2640
	if (!ctx.cr6.gt) goto loc_823B2640;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,-26716(r10)
	REX_STORE_U32(ctx.r10.u32 + -26716, ctx.r11.u32);
	// bne 0x823b2640
	if (!ctx.cr0.eq) goto loc_823B2640;
	// bl 0x8264ce48
	ctx.lr = 0x823B263C;
	sub_8264CE48(ctx, base);
	// bl 0x8264c7e8
	ctx.lr = 0x823B2640;
	sub_8264C7E8(ctx, base);
loc_823B2640:
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

DEFINE_REX_FUNC(sub_823BAF10) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addic. r10,r3,724
	ctx.xer.ca = ctx.r3.u32 > 4294966571;
	ctx.r10.s64 = ctx.r3.s64 + 724;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f31.f64 = double(temp.f32);
	// beq 0x823baf88
	if (ctx.cr0.eq) goto loc_823BAF88;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r9,r3,884
	ctx.r9.s64 = ctx.r3.s64 + 884;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823BAF44:
	// lwz r11,-160(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823baf80
	if (ctx.cr6.eq) goto loc_823BAF80;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823baf80
	if (!ctx.cr6.gt) goto loc_823BAF80;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823BAF64:
	// lwz r8,-160(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + -160);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfsx f31,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x823baf64
	if (ctx.cr6.lt) goto loc_823BAF64;
loc_823BAF80:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x823baf44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BAF44;
loc_823BAF88:
	// lwz r11,1212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1212);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823bafb8
	if (!ctx.cr6.gt) goto loc_823BAFB8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823BAF9C:
	// lwz r9,1084(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1084);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfsx f31,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// lwz r8,1212(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1212);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823baf9c
	if (ctx.cr6.lt) goto loc_823BAF9C;
loc_823BAFB8:
	// lwz r11,1356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1356);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823bafe8
	if (!ctx.cr6.gt) goto loc_823BAFE8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823BAFCC:
	// lwz r9,1296(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1296);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfsx f31,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,1356(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1356);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823bafcc
	if (ctx.cr6.lt) goto loc_823BAFCC;
loc_823BAFE8:
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r9,r31,1420
	ctx.r9.s64 = r31.s64 + 1420;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823BAFF4:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823bb024
	if (!ctx.cr6.gt) goto loc_823BB024;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823BB008:
	// lwz r8,-24(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + -24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfsx f31,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x823bb008
	if (ctx.cr6.lt) goto loc_823BB008;
loc_823BB024:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x823baff4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BAFF4;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r3,500(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 500);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ef5f0
	ctx.lr = 0x823BB03C;
	sub_823EF5F0(ctx, base);
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,504(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 504);
	// bl 0x823ef5f0
	ctx.lr = 0x823BB04C;
	sub_823EF5F0(ctx, base);
	// stfs f31,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// stfs f31,40(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f31,68(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823C8588) {
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
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r30,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x8234d160
	ctx.lr = 0x823C85B4;
	sub_8234D160(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823c861c
	if (!ctx.cr6.eq) goto loc_823C861C;
	// lwz r11,452(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 452);
	// lwz r10,1064(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1064);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823c85f0
	if (ctx.cr6.eq) goto loc_823C85F0;
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r9,1064(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1064);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,32(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823C85F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823C85F0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stb r30,460(r31)
	REX_STORE_U8(r31.u32 + 460, r30.u8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r31,4(r31)
	REX_STORE_U32(r31.u32 + 4, r31.u32);
	// stw r31,0(r31)
	REX_STORE_U32(r31.u32 + 0, r31.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stb r30,16(r31)
	REX_STORE_U8(r31.u32 + 16, r30.u8);
loc_823C861C:
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

DEFINE_REX_FUNC(sub_823C9308) {
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
	ctx.lr = 0x823C9310;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lwz r10,224(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823c933c
	if (ctx.cr6.gt) goto loc_823C933C;
	// lwz r11,228(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823c9450
	if (!ctx.cr6.gt) goto loc_823C9450;
loc_823C933C:
	// li r30,64
	r30.s64 = 64;
	// li r28,0
	r28.s64 = 0;
loc_823C9344:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823c9368
	if (ctx.cr6.eq) goto loc_823C9368;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x8269d770
	ctx.lr = 0x823C9360;
	sub_8269D770(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stwx r28,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r28.u32);
loc_823C9368:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r29,r30,3520
	r29.s64 = r30.s64 + 3520;
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823c9398
	if (ctx.cr6.eq) goto loc_823C9398;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8269d770
	ctx.lr = 0x823C9384;
	sub_8269D770(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r28,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, r28.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stwx r28,r29,r10
	REX_STORE_U32(r29.u32 + ctx.r10.u32, r28.u32);
loc_823C9398:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r30,96
	ctx.cr6.compare<uint32_t>(r30.u32, 96, ctx.xer);
	// blt cr6,0x823c9344
	if (ctx.cr6.lt) goto loc_823C9344;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x823c9440
	if (ctx.cr6.eq) goto loc_823C9440;
	// addi r27,r25,4
	r27.s64 = r25.s64 + 4;
	// li r30,96
	r30.s64 = 96;
	// li r26,-1
	r26.s64 = -1;
loc_823C93B8:
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(r27.u32, 4, ctx.xer);
	// blt cr6,0x823c945c
	if (ctx.cr6.lt) goto loc_823C945C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x823c93d0
	if (!ctx.cr6.eq) goto loc_823C93D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823c93e4
	goto loc_823C93E4;
loc_823C93D0:
	// divwu r11,r26,r27
	ctx.r11.u64 = uint32_t(r27.u32 ? r26.u32 / r27.u32 : 0);
	// twllei r27,0
	if (r27.s32 == 0 || r27.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x823c945c
	if (ctx.cr6.lt) goto loc_823C945C;
	// rlwinm r3,r27,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_823C93E4:
	// bl 0x8269d6a8
	ctx.lr = 0x823C93E8;
	sub_8269D6A8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823c945c
	if (ctx.cr6.eq) goto loc_823C945C;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ef5f0
	ctx.lr = 0x823C9400;
	sub_823EF5F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r10,r29,16
	ctx.r10.s64 = r29.s64 + 16;
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + ctx.r11.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r10,-32(r9)
	REX_STORE_U32(ctx.r9.u32 + -32, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r10,r30,r11
	ctx.r10.u64 = r30.u64 + ctx.r11.u64;
	// add r5,r30,r11
	ctx.r5.u64 = r30.u64 + ctx.r11.u64;
	// addi r4,r10,3488
	ctx.r4.s64 = ctx.r10.s64 + 3488;
	// bl 0x823dec90
	ctx.lr = 0x823C9428;
	sub_823DEC90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c945c
	if (ctx.cr6.eq) goto loc_823C945C;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(r28.u32, r24.u32, ctx.xer);
	// blt cr6,0x823c93b8
	if (ctx.cr6.lt) goto loc_823C93B8;
loc_823C9440:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r25,224(r11)
	REX_STORE_U32(ctx.r11.u32 + 224, r25.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r24,228(r10)
	REX_STORE_U32(ctx.r10.u32 + 228, r24.u32);
loc_823C9450:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_823C945C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_823D00C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823D00D0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 88);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823d00f4
	if (ctx.cr6.eq) goto loc_823D00F4;
	// li r3,-131
	ctx.r3.s64 = -131;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823D00F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d0140
	if (ctx.cr6.eq) goto loc_823D0140;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823cfd10
	ctx.lr = 0x823D0114;
	sub_823CFD10(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823d0134
	if (ctx.cr6.eq) goto loc_823D0134;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ce8e0
	ctx.lr = 0x823D0134;
	sub_823CE8E0(ctx, base);
loc_823D0134:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823D0140:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823D2338) {
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
	ctx.lr = 0x823D2340;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823d2360
	if (!ctx.cr6.eq) goto loc_823D2360;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d04
	return;
loc_823D2360:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d2468
	if (ctx.cr6.eq) goto loc_823D2468;
	// lwz r11,68(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 68);
	// li r28,0
	r28.s64 = 0;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d2384
	if (ctx.cr6.eq) goto loc_823D2384;
	// li r28,1
	r28.s64 = 1;
loc_823D2384:
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d2394
	if (ctx.cr6.eq) goto loc_823D2394;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_823D2394:
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d23a4
	if (ctx.cr6.eq) goto loc_823D23A4;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_823D23A4:
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d23b4
	if (ctx.cr6.eq) goto loc_823D23B4;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_823D23B4:
	// li r31,0
	r31.s64 = 0;
	// li r27,16
	r27.s64 = 16;
loc_823D23BC:
	// lwz r11,68(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 68);
	// slw r10,r27,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (r27.u32 << (r31.u8 & 0x3F));
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823d242c
	if (!ctx.cr6.eq) goto loc_823D242C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x823d23e0
	if (!ctx.cr6.eq) goto loc_823D23E0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x823d242c
	if (ctx.cr6.eq) goto loc_823D242C;
loc_823D23E0:
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,22444
	ctx.r3.s64 = ctx.r11.s64 + 22444;
	// lwz r5,56(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x8235adb0
	ctx.lr = 0x823D2400;
	sub_8235ADB0(ctx, base);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,22444
	ctx.r3.s64 = ctx.r11.s64 + 22444;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r5,56(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 56);
	// bl 0x8235ae80
	ctx.lr = 0x823D2428;
	sub_8235AE80(ctx, base);
	// b 0x823d245c
	goto loc_823D245C;
loc_823D242C:
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,22444
	ctx.r3.s64 = ctx.r11.s64 + 22444;
	// lwz r5,56(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x8235ae80
	ctx.lr = 0x823D244C;
	sub_8235AE80(ctx, base);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// bgt cr6,0x823d245c
	if (ctx.cr6.gt) goto loc_823D245C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823d246c
	if (!ctx.cr6.eq) goto loc_823D246C;
loc_823D245C:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// blt cr6,0x823d23bc
	if (ctx.cr6.lt) goto loc_823D23BC;
loc_823D2468:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823D246C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823DA2E8) {
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
	ctx.lr = 0x823DA2F0;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2ca4
	ctx.lr = 0x823DA2F8;
	// addi r31,r1,-336
	r31.s64 = ctx.r1.s64 + -336;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r8,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r8.u32);
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// stw r9,404(r31)
	REX_STORE_U32(r31.u32 + 404, ctx.r9.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r8,36(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r15,r4
	r15.u64 = ctx.r4.u64;
	// stw r3,356(r31)
	REX_STORE_U32(r31.u32 + 356, ctx.r3.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r5,372(r31)
	REX_STORE_U32(r31.u32 + 372, ctx.r5.u32);
	// stw r6,380(r31)
	REX_STORE_U32(r31.u32 + 380, ctx.r6.u32);
	// lwz r24,16(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// stw r7,388(r31)
	REX_STORE_U32(r31.u32 + 388, ctx.r7.u32);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// stw r9,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r9.u32);
	// stw r8,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r8.u32);
	// beq cr6,0x823da350
	if (ctx.cr6.eq) goto loc_823DA350;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// b 0x823da354
	goto loc_823DA354;
loc_823DA350:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823DA354:
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 20);
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mullw r5,r6,r24
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(r24.s32);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r3,r4
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r4.u64);
	// rlwinm r12,r3,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x826a2d14
	ctx.lr = 0x823DA380;
	sub_826A2D14(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// stw r28,80(r31)
	REX_STORE_U32(r31.u32 + 80, r28.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r17,r1,80
	r17.s64 = ctx.r1.s64 + 80;
	// ble cr6,0x823dae88
	if (!ctx.cr6.gt) goto loc_823DAE88;
	// lwz r11,428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 428);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f27,3716(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3716);
	f27.f64 = double(temp.f32);
	// lfs f28,11252(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 11252);
	f28.f64 = double(temp.f32);
	// lfd f30,-30976(r11)
	f30.u64 = REX_LOAD_U64(ctx.r11.u32 + -30976);
	// lfs f29,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	f29.f64 = double(temp.f32);
	// b 0x823da3e8
	goto loc_823DA3E8;
loc_823DA3D4:
	// lwz r29,356(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 356);
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r27,404(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 404);
	// lwz r28,80(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r30,88(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 88);
loc_823DA3E8:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r16,436(r31)
	r16.u64 = REX_LOAD_U32(r31.u32 + 436);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r22,52(r29)
	r22.u64 = REX_LOAD_U32(r29.u32 + 52);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r20,r10
	r20.s64 = ctx.r10.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// subf r25,r20,r11
	r25.u64 = ctx.r11.u64 - r20.u64;
	// bl 0x823db0c8
	ctx.lr = 0x823DA41C;
	sub_823DB0C8(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x823da430
	if (ctx.cr6.eq) goto loc_823DA430;
	// subf r28,r3,r28
	r28.u64 = r28.u64 - ctx.r3.u64;
	// stw r28,80(r31)
	REX_STORE_U32(r31.u32 + 80, r28.u32);
loc_823DA430:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// subf r10,r18,r10
	ctx.r10.u64 = ctx.r10.u64 - r18.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// addi r21,r10,-1
	r21.s64 = ctx.r10.s64 + -1;
	// ble cr6,0x823da450
	if (!ctx.cr6.gt) goto loc_823DA450;
	// li r11,3
	ctx.r11.s64 = 3;
loc_823DA450:
	// rlwinm r23,r30,2,0,29
	r23.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r10,r28,1
	ctx.r10.u64 = __builtin_rotateleft32(r28.u32, 1);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// divw r10,r28,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(r28.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? r28.s32 / ctx.r11.s32 : 0);
	// lwzx r9,r23,r27
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + r27.u32);
	// andc r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// addi r11,r21,1
	ctx.r11.s64 = r21.s64 + 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823da484
	if (ctx.cr6.lt) goto loc_823DA484;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823DA484:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// and r29,r10,r11
	r29.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x823e8310
	ctx.lr = 0x823DA49C;
	sub_823E8310(ctx, base);
	// rlwinm r9,r25,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r8,r3,40
	ctx.xer.ca = ctx.r3.u32 <= 40;
	ctx.r8.u64 = static_cast<uint64_t>(40) - ctx.r3.u64;
	// subfic r7,r9,2
	ctx.xer.ca = ctx.r9.u32 <= 2;
	ctx.r7.u64 = static_cast<uint64_t>(2) - ctx.r9.u64;
	// rlwinm r10,r25,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 5) & 0xFFFFFFE0;
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + r29.u64;
	// addi r5,r10,-32
	ctx.r5.s64 = ctx.r10.s64 + -32;
	// rotlwi r11,r6,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// srawi r10,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	ctx.r10.s64 = r29.s32 >> 4;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// divw r11,r6,r5
	ctx.r11.u64 = uint32_t((ctx.r5.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r5.s32 == -1)) ? ctx.r6.s32 / ctx.r5.s32 : 0);
	// andc r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ~ctx.r4.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r3,-1
	if (ctx.r3.s32 == -1 || ctx.r3.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823da4e4
	if (!ctx.cr6.gt) goto loc_823DA4E4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823DA4E4:
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// ble cr6,0x823da4f4
	if (!ctx.cr6.gt) goto loc_823DA4F4;
	// li r19,14
	r19.s64 = 14;
	// b 0x823da500
	goto loc_823DA500;
loc_823DA4F4:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r19,r10,r11
	r19.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_823DA500:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// slw r11,r11,r19
	ctx.r11.u64 = r19.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r19.u8 & 0x3F));
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e8310
	ctx.lr = 0x823DA518;
	sub_823E8310(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x823da53c
	if (ctx.cr6.eq) goto loc_823DA53C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x823d95e8
	ctx.lr = 0x823DA530;
	sub_823D95E8(ctx, base);
	// subfic r11,r19,14
	ctx.xer.ca = r19.u32 <= 14;
	ctx.r11.u64 = static_cast<uint64_t>(14) - r19.u64;
	// slw. r10,r3,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823da54c
	if (!ctx.cr0.eq) goto loc_823DA54C;
loc_823DA53C:
	// li r14,32767
	r14.s64 = 32767;
	// li r16,0
	r16.s64 = 0;
	// li r11,-10000
	ctx.r11.s64 = -10000;
	// b 0x823da67c
	goto loc_823DA67C;
loc_823DA54C:
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// bne cr6,0x823da564
	if (!ctx.cr6.eq) goto loc_823DA564;
	// li r14,0
	r14.s64 = 0;
	// li r16,32767
	r16.s64 = 32767;
	// li r11,10000
	ctx.r11.s64 = 10000;
	// b 0x823da67c
	goto loc_823DA67C;
loc_823DA564:
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mullw r11,r9,r9
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// addi r8,r11,4096
	ctx.r8.s64 = ctx.r11.s64 + 4096;
	// srawi r11,r8,13
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 13;
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x823da580
	if (!ctx.cr6.gt) goto loc_823DA580;
	// li r11,32767
	ctx.r11.s64 = 32767;
loc_823DA580:
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mulli r8,r9,626
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(626));
	// subfic r7,r8,16384
	ctx.xer.ca = ctx.r8.u32 <= 16384;
	ctx.r7.u64 = static_cast<uint64_t>(16384) - ctx.r8.u64;
	// srawi r11,r7,15
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 15;
	// addi r6,r11,8277
	ctx.r6.s64 = ctx.r11.s64 + 8277;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// mullw r11,r4,r9
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// addi r3,r11,16384
	ctx.r3.s64 = ctx.r11.s64 + 16384;
	// srawi r11,r3,15
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 15;
	// addi r11,r11,-7651
	ctx.r11.s64 = ctx.r11.s64 + -7651;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// mullw r11,r7,r9
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// addi r6,r11,16384
	ctx.r6.s64 = ctx.r11.s64 + 16384;
	// srawi r5,r6,15
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 15;
	// subf r11,r9,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r9.u64;
	// addi r4,r11,32767
	ctx.r4.s64 = ctx.r11.s64 + 32767;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmpwi cr6,r11,32766
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32766, ctx.xer);
	// ble cr6,0x823da5d0
	if (!ctx.cr6.gt) goto loc_823DA5D0;
	// li r11,32766
	ctx.r11.s64 = 32766;
loc_823DA5D0:
	// subfic r10,r10,16384
	ctx.xer.ca = ctx.r10.u32 <= 16384;
	ctx.r10.u64 = static_cast<uint64_t>(16384) - ctx.r10.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// extsh r14,r8
	r14.s64 = ctx.r8.s16;
	// mullw r11,r7,r7
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// addi r5,r11,4096
	ctx.r5.s64 = ctx.r11.s64 + 4096;
	// srawi r11,r5,13
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1FFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 13;
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x823da5f8
	if (!ctx.cr6.gt) goto loc_823DA5F8;
	// li r11,32767
	ctx.r11.s64 = 32767;
loc_823DA5F8:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mulli r9,r10,626
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(626));
	// subfic r8,r9,16384
	ctx.xer.ca = ctx.r9.u32 <= 16384;
	ctx.r8.u64 = static_cast<uint64_t>(16384) - ctx.r9.u64;
	// srawi r11,r8,15
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 15;
	// addi r7,r11,8277
	ctx.r7.s64 = ctx.r11.s64 + 8277;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// mullw r11,r5,r10
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// addi r4,r11,16384
	ctx.r4.s64 = ctx.r11.s64 + 16384;
	// srawi r11,r4,15
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 15;
	// addi r3,r11,-7651
	ctx.r3.s64 = ctx.r11.s64 + -7651;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// addi r8,r11,16384
	ctx.r8.s64 = ctx.r11.s64 + 16384;
	// srawi r7,r8,15
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 15;
	// subf r11,r10,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r10.u64;
	// addi r6,r11,32767
	ctx.r6.s64 = ctx.r11.s64 + 32767;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// cmpwi cr6,r11,32766
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32766, ctx.xer);
	// ble cr6,0x823da648
	if (!ctx.cr6.gt) goto loc_823DA648;
	// li r11,32766
	ctx.r11.s64 = 32766;
loc_823DA648:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// extsh r16,r11
	r16.s64 = ctx.r11.s16;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x823e8310
	ctx.lr = 0x823DA65C;
	sub_823E8310(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x823e8310
	ctx.lr = 0x823DA66C;
	sub_823E8310(ctx, base);
	// subf r9,r3,r30
	ctx.r9.u64 = r30.u64 - ctx.r3.u64;
	// addi r8,r25,-1
	ctx.r8.s64 = r25.s64 + -1;
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
loc_823DA67C:
	// srawi r9,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	ctx.r9.s64 = r26.s32 >> 1;
	// subf r10,r26,r29
	ctx.r10.u64 = r29.u64 - r26.u64;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// subf r7,r8,r29
	ctx.r7.u64 = r29.u64 - ctx.r8.u64;
	// subf r6,r11,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r11.u64;
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// addze r11,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823da6a4
	if (!ctx.cr6.gt) goto loc_823DA6A4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823DA6A4:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwzx r7,r23,r22
	ctx.r7.u64 = REX_LOAD_U32(r23.u32 + r22.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// li r9,127
	ctx.r9.s64 = 127;
	// subf r6,r11,r29
	ctx.r6.u64 = r29.u64 - ctx.r11.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// subf r6,r26,r6
	ctx.r6.u64 = ctx.r6.u64 - r26.u64;
loc_823DA6CC:
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r5,r7
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r7.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823da6f0
	if (ctx.cr6.lt) goto loc_823DA6F0;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// b 0x823da6f4
	goto loc_823DA6F4;
loc_823DA6F0:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_823DA6F4:
	// bdnz 0x823da6cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DA6CC;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// lhzx r4,r8,r7
	ctx.r4.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// lhzx r3,r5,r7
	ctx.r3.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r7.u32);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// subf r4,r8,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r8.u64;
	// subf r3,r11,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r11.u64;
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x823da728
	if (!ctx.cr6.gt) goto loc_823DA728;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
loc_823DA728:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,127
	ctx.r9.s64 = 127;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823DA738:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r8,r7
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x823da75c
	if (ctx.cr6.lt) goto loc_823DA75C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x823da760
	goto loc_823DA760;
loc_823DA75C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_823DA760:
	// bdnz 0x823da738
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DA738;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// lhzx r5,r11,r7
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// lhzx r4,r8,r7
	ctx.r4.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// subf r8,r3,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r3.u64;
	// subf r7,r6,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r6.u64;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x823da794
	if (!ctx.cr6.gt) goto loc_823DA794;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
loc_823DA794:
	// lwzx r11,r23,r22
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + r22.u32);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r27,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lhzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// subf. r8,r11,r21
	ctx.r8.u64 = r21.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x823da824
	if (!ctx.cr0.lt) goto loc_823DA824;
loc_823DA7C0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bgt cr6,0x823da7d0
	if (ctx.cr6.gt) goto loc_823DA7D0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x823da824
	if (!ctx.cr6.gt) goto loc_823DA824;
loc_823DA7D0:
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r11,r23,r22
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + r22.u32);
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(r27.s32, r28.s32, ctx.xer);
	// ble cr6,0x823da7fc
	if (!ctx.cr6.gt) goto loc_823DA7FC;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// lhzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r9,r27,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// b 0x823da814
	goto loc_823DA814;
loc_823DA7FC:
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// lhzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
loc_823DA814:
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// subf. r8,r11,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt 0x823da7c0
	if (ctx.cr0.lt) goto loc_823DA7C0;
loc_823DA824:
	// extsw r11,r25
	ctx.r11.s64 = r25.s32;
	// lwz r10,404(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 404);
	// lwz r9,80(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 80);
	// std r11,120(r31)
	REX_STORE_U64(r31.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r26,356(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 356);
	// lwzx r11,r23,r10
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + ctx.r10.u32);
	// fsqrts f31,f13
	f31.f64 = double(float(sqrt(ctx.f13.f64)));
	// lwz r23,380(r31)
	r23.u64 = REX_LOAD_U32(r31.u32 + 380);
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + r18.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// add r29,r11,r9
	r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r29,80(r31)
	REX_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x823da8d4
	if (ctx.cr6.eq) goto loc_823DA8D4;
	// lwz r11,28(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 28);
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(r20.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823da8d4
	if (!ctx.cr6.lt) goto loc_823DA8D4;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r10.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r20,r5
	ctx.cr6.compare<int32_t>(r20.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x823da8d4
	if (!ctx.cr6.eq) goto loc_823DA8D4;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// blt cr6,0x823da8b8
	if (ctx.cr6.lt) goto loc_823DA8B8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,436(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 436);
	// bl 0x823d9548
	ctx.lr = 0x823DA8A8;
	sub_823D9548(ctx, base);
	// addi r11,r29,16
	ctx.r11.s64 = r29.s64 + 16;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x823da8c8
	if (ctx.cr6.eq) goto loc_823DA8C8;
loc_823DA8B8:
	// lwz r11,388(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 388);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f28,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// b 0x823da8d4
	goto loc_823DA8D4;
loc_823DA8C8:
	// lwz r11,388(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 388);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f27,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
loc_823DA8D4:
	// lwz r11,28(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 28);
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(r20.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823da8ec
	if (ctx.cr6.lt) goto loc_823DA8EC;
	// lwz r10,420(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 420);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823da8f4
	if (!ctx.cr6.eq) goto loc_823DA8F4;
loc_823DA8EC:
	// add. r10,r28,r27
	ctx.r10.u64 = r28.u64 + r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt 0x823da940
	if (ctx.cr0.gt) goto loc_823DA940;
loc_823DA8F4:
	// stw r27,112(r31)
	REX_STORE_U32(r31.u32 + 112, r27.u32);
	// mullw r30,r20,r24
	r30.s64 = int64_t(r20.s32) * int64_t(r24.s32);
	// stw r28,116(r31)
	REX_STORE_U32(r31.u32 + 116, r28.u32);
	// lwz r8,372(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 372);
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r3,356(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 356);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// add r29,r11,r8
	r29.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// addi r6,r31,112
	ctx.r6.s64 = r31.s64 + 112;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// add r4,r11,r15
	ctx.r4.u64 = ctx.r11.u64 + r15.u64;
	// bl 0x823e9568
	ctx.lr = 0x823DA930;
	sub_823E9568(ctx, base);
	// mullw r4,r25,r24
	ctx.r4.s64 = int64_t(r25.s32) * int64_t(r24.s32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823d9d00
	ctx.lr = 0x823DA93C;
	sub_823D9D00(ctx, base);
	// b 0x823daacc
	goto loc_823DAACC;
loc_823DA940:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x823daa90
	if (ctx.cr6.eq) goto loc_823DAA90;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(r20.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823daa90
	if (!ctx.cr6.lt) goto loc_823DAA90;
	// lwz r26,372(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 372);
	// cntlzw r11,r19
	ctx.r11.u64 = r19.u32 == 0 ? 32 : __builtin_clz(r19.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,88(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 88);
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r5,396(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 396);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,356(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 356);
	// bl 0x823d9ae0
	ctx.lr = 0x823DA974;
	sub_823D9AE0(ctx, base);
	// mullw r30,r20,r24
	r30.s64 = int64_t(r20.s32) * int64_t(r24.s32);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// add r29,r11,r26
	r29.u64 = ctx.r11.u64 + r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823e9368
	ctx.lr = 0x823DA994;
	sub_823E9368(ctx, base);
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x823e9368
	ctx.lr = 0x823DA9A8;
	sub_823E9368(ctx, base);
	// mullw r4,r25,r24
	ctx.r4.s64 = int64_t(r25.s32) * int64_t(r24.s32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823d9d00
	ctx.lr = 0x823DA9B4;
	sub_823D9D00(ctx, base);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// mullw r9,r10,r24
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r24.s32);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823daacc
	if (!ctx.cr6.lt) goto loc_823DAACC;
	// subf r10,r30,r9
	ctx.r10.u64 = ctx.r9.u64 - r30.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x823daa50
	if (ctx.cr6.lt) goto loc_823DAA50;
	// subf r10,r30,r9
	ctx.r10.u64 = ctx.r9.u64 - r30.u64;
	// lwz r7,84(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 84);
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r10,-4
	ctx.r6.s64 = ctx.r10.s64 + -4;
	// add r10,r8,r26
	ctx.r10.u64 = ctx.r8.u64 + r26.u64;
	// rlwinm r6,r6,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r6,1
	ctx.r8.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lwz r8,388(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 388);
loc_823DAA08:
	// lfsx f0,r7,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfsx f10,r7,r8
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f8,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,8(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfsx f7,r7,r8
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// lfs f5,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// stfs f6,12(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfsx f4,r7,r8
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// stfsu f3,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823daa08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DAA08;
	// b 0x823daa54
	goto loc_823DAA54;
loc_823DAA50:
	// lwz r8,388(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 388);
loc_823DAA54:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823daacc
	if (!ctx.cr6.lt) goto loc_823DAACC;
	// subf r7,r11,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lwz r6,84(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 84);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r26
	ctx.r11.u64 = ctx.r10.u64 + r26.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823DAA78:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r9,r8
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823daa78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DAA78;
	// b 0x823daacc
	goto loc_823DAACC;
loc_823DAA90:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// mullw r30,r20,r24
	r30.s64 = int64_t(r20.s32) * int64_t(r24.s32);
	// mullw r11,r11,r24
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r24.s32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823daacc
	if (!ctx.cr6.lt) goto loc_823DAACC;
	// lwz r9,372(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 372);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// beq 0x823daacc
	if (ctx.cr0.eq) goto loc_823DAACC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823DAAC4:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823daac4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DAAC4;
loc_823DAACC:
	// rlwinm r29,r30,2,0,29
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r23,r25,r24
	r23.s64 = int64_t(r25.s32) * int64_t(r24.s32);
	// add r26,r29,r15
	r26.u64 = r29.u64 + r15.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823d9d00
	ctx.lr = 0x823DAAE4;
	sub_823D9D00(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x823dab0c
	if (!ctx.cr6.gt) goto loc_823DAB0C;
	// lwz r11,372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 372);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r7,436(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 436);
	// add r6,r29,r11
	ctx.r6.u64 = r29.u64 + ctx.r11.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823e9308
	ctx.lr = 0x823DAB08;
	sub_823E9308(ctx, base);
	// b 0x823dab34
	goto loc_823DAB34;
loc_823DAB0C:
	// add r10,r30,r25
	ctx.r10.u64 = r30.u64 + r25.u64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823dab34
	if (!ctx.cr6.lt) goto loc_823DAB34;
	// lwz r9,372(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 372);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r30,r10
	ctx.r8.u64 = ctx.r10.u64 - r30.u64;
	// add r3,r11,r15
	ctx.r3.u64 = ctx.r11.u64 + r15.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a22f8
	ctx.lr = 0x823DAB34;
	sub_826A22F8(ctx, base);
loc_823DAB34:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// add r27,r30,r25
	r27.u64 = r30.u64 + r25.u64;
	// ble cr6,0x823dab64
	if (!ctx.cr6.gt) goto loc_823DAB64;
	// lwz r10,372(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 372);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r7,436(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 436);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r15
	ctx.r3.u64 = ctx.r11.u64 + r15.u64;
	// bl 0x823e9308
	ctx.lr = 0x823DAB60;
	sub_823E9308(ctx, base);
	// b 0x823dab98
	goto loc_823DAB98;
loc_823DAB64:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// mullw r11,r11,r24
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r24.s32);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823dab98
	if (!ctx.cr6.lt) goto loc_823DAB98;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r11,r27,r11
	ctx.r11.u64 = ctx.r11.u64 - r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r15
	ctx.r10.u64 = ctx.r10.u64 + r15.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// beq 0x823dab98
	if (ctx.cr0.eq) goto loc_823DAB98;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823DAB90:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823dab90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DAB90;
loc_823DAB98:
	// extsw r9,r16
	ctx.r9.s64 = r16.s32;
	// extsw r11,r14
	ctx.r11.s64 = r14.s32;
	// std r9,136(r31)
	REX_STORE_U64(r31.u32 + 136, ctx.r9.u64);
	// lfd f13,136(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(r31.u32 + 136);
	// std r11,128(r31)
	REX_STORE_U64(r31.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r31)
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 128);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// li r10,0
	ctx.r10.s64 = 0;
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// fmul f10,f12,f30
	ctx.f10.f64 = ctx.f12.f64 * f30.f64;
	// fmul f9,f11,f30
	ctx.f9.f64 = ctx.f11.f64 * f30.f64;
	// frsp f13,f10
	ctx.f13.f64 = double(float(ctx.f10.f64));
	// frsp f12,f9
	ctx.f12.f64 = double(float(ctx.f9.f64));
	// ble cr6,0x823dacf8
	if (!ctx.cr6.gt) goto loc_823DACF8;
	// li r29,0
	r29.s64 = 0;
loc_823DABD8:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(r25.s32, 4, ctx.xer);
	// blt cr6,0x823dac98
	if (ctx.cr6.lt) goto loc_823DAC98;
	// addi r11,r20,2
	ctx.r11.s64 = r20.s64 + 2;
	// addi r8,r20,3
	ctx.r8.s64 = r20.s64 + 3;
	// mullw r9,r11,r24
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(r24.s32);
	// addi r7,r20,1
	ctx.r7.s64 = r20.s64 + 1;
	// addi r6,r25,-4
	ctx.r6.s64 = r25.s64 + -4;
	// mullw r11,r8,r24
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(r24.s32);
	// mullw r8,r7,r24
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(r24.s32);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r6,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r30,r29
	ctx.r7.u64 = r30.u64 + r29.u64;
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r6,r30,r10
	ctx.r6.u64 = r30.u64 + ctx.r10.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// rlwinm r11,r24,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r11,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r11.u64;
	// subf r4,r11,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r11.u64;
	// add r9,r9,r15
	ctx.r9.u64 = ctx.r9.u64 + r15.u64;
	// subf r7,r11,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r5,r11,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r11.u64;
	// add r3,r6,r17
	ctx.r3.u64 = ctx.r6.u64 + r17.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// add r7,r7,r17
	ctx.r7.u64 = ctx.r7.u64 + r17.u64;
	// add r5,r5,r17
	ctx.r5.u64 = ctx.r5.u64 + r17.u64;
	// add r6,r4,r17
	ctx.r6.u64 = ctx.r4.u64 + r17.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_823DAC64:
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f31
	ctx.f10.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lfs f9,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f31
	ctx.f8.f64 = double(float(ctx.f11.f64 * f31.f64));
	// lfsu f0,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// fmuls f7,f9,f31
	ctx.f7.f64 = double(float(ctx.f9.f64 * f31.f64));
	// stfsux f10,r7,r11
	temp.f32 = float(ctx.f10.f64);
	ea = ctx.r7.u32 + ctx.r11.u32;
	REX_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// fmuls f6,f0,f31
	ctx.f6.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfsux f8,r6,r11
	temp.f32 = float(ctx.f8.f64);
	ea = ctx.r6.u32 + ctx.r11.u32;
	REX_STORE_U32(ea, temp.u32);
	ctx.r6.u32 = ea;
	// stfsux f7,r5,r11
	temp.f32 = float(ctx.f7.f64);
	ea = ctx.r5.u32 + ctx.r11.u32;
	REX_STORE_U32(ea, temp.u32);
	ctx.r5.u32 = ea;
	// stfsux f6,r3,r11
	temp.f32 = float(ctx.f6.f64);
	ea = ctx.r3.u32 + ctx.r11.u32;
	REX_STORE_U32(ea, temp.u32);
	ctx.r3.u32 = ea;
	// bdnz 0x823dac64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DAC64;
loc_823DAC98:
	// cmpw cr6,r8,r25
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r25.s32, ctx.xer);
	// bge cr6,0x823dace8
	if (!ctx.cr6.lt) goto loc_823DACE8;
	// add r9,r20,r8
	ctx.r9.u64 = r20.u64 + ctx.r8.u64;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// mullw r9,r9,r24
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r24.s32);
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r5,r8,r25
	ctx.r5.u64 = r25.u64 - ctx.r8.u64;
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r15
	ctx.r9.u64 = ctx.r9.u64 + r15.u64;
	// subf r8,r11,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r11.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// add r8,r8,r17
	ctx.r8.u64 = ctx.r8.u64 + r17.u64;
loc_823DACD8:
	// lfsu f0,4(r9)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfsux f0,r8,r11
	temp.f32 = float(ctx.f0.f64);
	ea = ctx.r8.u32 + ctx.r11.u32;
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x823dacd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DACD8;
loc_823DACE8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r29,r29,r25
	r29.u64 = r29.u64 + r25.u64;
	// cmpw cr6,r10,r24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r24.s32, ctx.xer);
	// blt cr6,0x823dabd8
	if (ctx.cr6.lt) goto loc_823DABD8;
loc_823DACF8:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(r25.s32, 4, ctx.xer);
	// blt cr6,0x823dad58
	if (ctx.cr6.lt) goto loc_823DAD58;
	// addi r10,r25,-4
	ctx.r10.s64 = r25.s64 + -4;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + r15.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823DAD24:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f10,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f8,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f7,12(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f6,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfsu f5,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823dad24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DAD24;
loc_823DAD58:
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r25.s32, ctx.xer);
	// bge cr6,0x823dad88
	if (!ctx.cr6.lt) goto loc_823DAD88;
	// add r11,r30,r9
	ctx.r11.u64 = r30.u64 + ctx.r9.u64;
	// subf r10,r9,r25
	ctx.r10.u64 = r25.u64 - ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + r15.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823DAD78:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsu f11,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823dad78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DAD78;
loc_823DAD88:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(r25.s32, 4, ctx.xer);
	// blt cr6,0x823dade8
	if (ctx.cr6.lt) goto loc_823DADE8;
	// addi r10,r25,-4
	ctx.r10.s64 = r25.s64 + -4;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + r15.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823DADB4:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f11,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f10,8(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f9,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f8,12(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f7,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// stfsu f6,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823dadb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DADB4;
loc_823DADE8:
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r25.s32, ctx.xer);
	// bge cr6,0x823dae1c
	if (!ctx.cr6.lt) goto loc_823DAE1C;
	// add r10,r30,r11
	ctx.r10.u64 = r30.u64 + ctx.r11.u64;
	// subf r9,r11,r25
	ctx.r9.u64 = r25.u64 - ctx.r11.u64;
	// add r8,r10,r25
	ctx.r8.u64 = ctx.r10.u64 + r25.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + r15.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_823DAE0C:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfsu f13,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823dae0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DAE0C;
loc_823DAE1C:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823d9be0
	ctx.lr = 0x823DAE28;
	sub_823D9BE0(ctx, base);
	// lwz r30,88(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwz r29,356(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 356);
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r5,396(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 396);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823d9ae0
	ctx.lr = 0x823DAE4C;
	sub_823D9AE0(ctx, base);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823e9368
	ctx.lr = 0x823DAE60;
	sub_823E9368(ctx, base);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// addi r3,r26,4
	ctx.r3.s64 = r26.s64 + 4;
	// bl 0x823e9368
	ctx.lr = 0x823DAE74;
	sub_823E9368(ctx, base);
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 20);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823da3d4
	if (ctx.cr6.lt) goto loc_823DA3D4;
loc_823DAE88:
	// addi r1,r31,336
	ctx.r1.s64 = r31.s64 + 336;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cf0
	ctx.lr = 0x823DAE94;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82423958) {
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
	// addi r11,r11,-24328
	ctx.r11.s64 = ctx.r11.s64 + -24328;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x824550e8
	ctx.lr = 0x82423984;
	sub_824550E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82423998
	if (ctx.cr0.eq) goto loc_82423998;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x82423998;
	sub_823F0350(ctx, base);
loc_82423998:
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

DEFINE_REX_FUNC(sub_82426EC8) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c94
	ctx.lr = 0x82426ED0;
	// stfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -128, f30.u64);
	// stfd f31,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// lfd f30,-3744(r11)
	f30.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// li r25,0
	r25.s64 = 0;
	// li r27,1
	r27.s64 = 1;
	// li r28,1
	r28.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82426f64
	if (ctx.cr6.eq) goto loc_82426F64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lfd f31,3728(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
loc_82426F20:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82423c70
	ctx.lr = 0x82426F30;
	sub_82423C70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82426f64
	if (ctx.cr0.lt) goto loc_82426F64;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// beq cr6,0x82426f48
	if (ctx.cr6.eq) goto loc_82426F48;
	// li r27,0
	r27.s64 = 0;
loc_82426F48:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// beq cr6,0x82426f54
	if (ctx.cr6.eq) goto loc_82426F54;
	// li r28,0
	r28.s64 = 0;
loc_82426F54:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// blt cr6,0x82426f20
	if (ctx.cr6.lt) goto loc_82426F20;
loc_82426F64:
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// bne cr6,0x82426ff8
	if (!ctx.cr6.eq) goto loc_82426FF8;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x82426f7c
	if (!ctx.cr6.eq) goto loc_82426F7C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82426ff8
	if (ctx.cr6.eq) goto loc_82426FF8;
loc_82426F7C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x82426F88;
	sub_823F02B8(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq 0x82427320
	if (ctx.cr0.eq) goto loc_82427320;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82426fe0
	if (ctx.cr6.eq) goto loc_82426FE0;
	// addi r10,r25,-4
	ctx.r10.s64 = r25.s64 + -4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82426FA0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x82426fb0
	if (ctx.cr6.eq) goto loc_82426FB0;
	// lwz r11,36(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 36);
	// b 0x82426fb4
	goto loc_82426FB4;
loc_82426FB0:
	// lwz r11,32(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 32);
loc_82426FB4:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82426fa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82426FA0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82426fe0
	if (ctx.cr6.eq) goto loc_82426FE0;
	// addi r11,r21,-4
	ctx.r11.s64 = r21.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x82426fe0
	if (ctx.cr0.eq) goto loc_82426FE0;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82426FD8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82426fd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82426FD8;
loc_82426FE0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwimi r5,r11,28,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// b 0x824272e8
	goto loc_824272E8;
loc_82426FF8:
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// ble cr6,0x82427028
	if (!ctx.cr6.gt) goto loc_82427028;
	// lwz r9,0(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 0);
	// addi r11,r22,4
	ctx.r11.s64 = r22.s64 + 4;
loc_8242700C:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82427028
	if (!ctx.cr6.eq) goto loc_82427028;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// blt cr6,0x8242700c
	if (ctx.cr6.lt) goto loc_8242700C;
loc_82427028:
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// bne cr6,0x8242730c
	if (!ctx.cr6.eq) goto loc_8242730C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82423c70
	ctx.lr = 0x82427040;
	sub_82423C70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8242730c
	if (ctx.cr0.lt) goto loc_8242730C;
	// lfd f31,80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fctiwz f0,f31
	ctx.f0.s64 = std::isnan(f31.f64) ? int64_t(0x80000000U) : (f31.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f31.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r24,84(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r10,r24
	ctx.r10.s64 = r24.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,-23680(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -23680);
	// fsub f13,f31,f13
	ctx.f13.f64 = f31.f64 - ctx.f13.f64;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82427268
	if (!ctx.cr6.lt) goto loc_82427268;
	// srawi r11,r24,31
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = r24.s32 >> 31;
	// li r10,0
	ctx.r10.s64 = 0;
	// xor r8,r24,r11
	ctx.r8.u64 = r24.u64 ^ ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// subf. r26,r11,r8
	r26.u64 = ctx.r8.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// beq 0x824270bc
	if (ctx.cr0.eq) goto loc_824270BC;
loc_8242709C:
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// rlwinm. r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bne 0x8242709c
	if (!ctx.cr0.eq) goto loc_8242709C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bne cr6,0x824270c0
	if (!ctx.cr6.eq) goto loc_824270C0;
loc_824270BC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_824270C0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// bne cr6,0x824270d0
	if (!ctx.cr6.eq) goto loc_824270D0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824270D0:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bge cr6,0x824270e0
	if (!ctx.cr6.lt) goto loc_824270E0;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
loc_824270E0:
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lwz r9,108(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// rlwinm. r9,r9,0,7,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82427104
	if (ctx.cr0.eq) goto loc_82427104;
	// lwz r9,20(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 20);
	// rlwinm. r9,r9,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82427104
	if (ctx.cr0.eq) goto loc_82427104;
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// b 0x82427120
	goto loc_82427120;
loc_82427104:
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82427114
	if (!ctx.cr6.eq) goto loc_82427114;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82427114:
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82427120:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8242730c
	if (ctx.cr6.gt) goto loc_8242730C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x82427134;
	sub_823F02B8(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq 0x82427320
	if (ctx.cr0.eq) goto loc_82427320;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82427158
	if (ctx.cr6.eq) goto loc_82427158;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// addi r11,r25,-4
	ctx.r11.s64 = r25.s64 + -4;
loc_8242714C:
	// lwz r10,32(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242714c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242714C;
loc_82427158:
	// li r27,-1
	r27.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82427180
	if (ctx.cr6.eq) goto loc_82427180;
	// addi r11,r21,-4
	ctx.r11.s64 = r21.s64 + -4;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x82427180
	if (ctx.cr0.eq) goto loc_82427180;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82427178:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82427178
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82427178;
loc_82427180:
	// clrlwi r29,r30,12
	r29.u64 = r30.u32 & 0xFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// oris r28,r29,4096
	r28.u64 = r29.u64 | 268435456;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82423f70
	ctx.lr = 0x824271A8;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82427444
	if (ctx.cr0.lt) goto loc_82427444;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82427254
	if (ctx.cr6.eq) goto loc_82427254;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824271dc
	if (ctx.cr6.eq) goto loc_824271DC;
	// addi r11,r25,-4
	ctx.r11.s64 = r25.s64 + -4;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x824271dc
	if (ctx.cr0.eq) goto loc_824271DC;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_824271D4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824271d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824271D4;
loc_824271DC:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// b 0x82427238
	goto loc_82427238;
loc_824271F0:
	// clrlwi. r11,r26,31
	ctx.r11.u64 = r26.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82427220
	if (ctx.cr0.eq) goto loc_82427220;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// oris r5,r29,8272
	ctx.r5.u64 = r29.u64 | 542113792;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82423f70
	ctx.lr = 0x82427218;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82427444
	if (ctx.cr0.lt) goto loc_82427444;
loc_82427220:
	// rlwinm. r26,r26,31,1,31
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq 0x82427254
	if (ctx.cr0.eq) goto loc_82427254;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// oris r5,r29,8272
	ctx.r5.u64 = r29.u64 | 542113792;
loc_82427238:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82423f70
	ctx.lr = 0x82427248;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x824271f0
	if (!ctx.cr0.lt) goto loc_824271F0;
	// b 0x82427444
	goto loc_82427444;
loc_82427254:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bge cr6,0x82427304
	if (!ctx.cr6.lt) goto loc_82427304;
	// li r9,0
	ctx.r9.s64 = 0;
	// oris r5,r29,4144
	ctx.r5.u64 = r29.u64 | 271581184;
	// b 0x824272e4
	goto loc_824272E4;
loc_82427268:
	// fabs f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = f31.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,32424(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 32424);
	// fsub f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 - ctx.f13.f64;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8242730c
	if (!ctx.cr6.lt) goto loc_8242730C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824272a8
	if (ctx.cr6.eq) goto loc_824272A8;
	// addi r11,r21,-4
	ctx.r11.s64 = r21.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x824272a8
	if (ctx.cr0.eq) goto loc_824272A8;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_824272A0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824272a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824272A0;
loc_824272A8:
	// clrlwi r30,r30,12
	r30.u64 = r30.u32 & 0xFFFFF;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// oris r5,r30,4208
	ctx.r5.u64 = r30.u64 | 275775488;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82423f70
	ctx.lr = 0x824272CC;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82427444
	if (ctx.cr0.lt) goto loc_82427444;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f30.f64);
	// blt cr6,0x82427304
	if (ctx.cr6.lt) goto loc_82427304;
	// li r9,4
	ctx.r9.s64 = 4;
	// oris r5,r30,4144
	ctx.r5.u64 = r30.u64 | 271581184;
loc_824272E4:
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
loc_824272E8:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82423f70
	ctx.lr = 0x824272FC;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82427444
	if (ctx.cr0.lt) goto loc_82427444;
loc_82427304:
	// li r31,0
	r31.s64 = 0;
	// b 0x82427444
	goto loc_82427444;
loc_8242730C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r30,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x823f02b8
	ctx.lr = 0x82427318;
	sub_823F02B8(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne 0x8242732c
	if (!ctx.cr0.eq) goto loc_8242732C;
loc_82427320:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x82427444
	goto loc_82427444;
loc_8242732C:
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82427344:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bdnz 0x82427344
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82427344;
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r27,-1
	r27.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242737c
	if (ctx.cr6.eq) goto loc_8242737C;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242737c
	if (ctx.cr0.eq) goto loc_8242737C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82427374:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82427374
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82427374;
loc_8242737C:
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824273c8
	if (ctx.cr6.eq) goto loc_824273C8;
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x824273a4
	if (ctx.cr0.eq) goto loc_824273A4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242739C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242739c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242739C;
loc_824273A4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824273c8
	if (ctx.cr6.eq) goto loc_824273C8;
	// addi r11,r21,-4
	ctx.r11.s64 = r21.s64 + -4;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x824273c8
	if (ctx.cr0.eq) goto loc_824273C8;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_824273C0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824273c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824273C0;
loc_824273C8:
	// clrlwi r30,r30,12
	r30.u64 = r30.u32 & 0xFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// oris r5,r30,4192
	ctx.r5.u64 = r30.u64 | 274726912;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82423f70
	ctx.lr = 0x824273EC;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82427444
	if (ctx.cr0.lt) goto loc_82427444;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// oris r5,r30,8272
	ctx.r5.u64 = r30.u64 | 542113792;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82423f70
	ctx.lr = 0x82427414;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82427444
	if (ctx.cr0.lt) goto loc_82427444;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// oris r5,r30,4176
	ctx.r5.u64 = r30.u64 | 273678336;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242743C;
	sub_82423F70(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r31,r11,r3
	r31.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_82427444:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823f0350
	ctx.lr = 0x82427450;
	sub_823F0350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_82455F98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82455FA0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
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
	// bl 0x82455688
	ctx.lr = 0x82455FB8;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82456044
	if (ctx.cr0.lt) goto loc_82456044;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r5,r11,14200
	ctx.r5.s64 = ctx.r11.s64 + 14200;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82404168
	ctx.lr = 0x82455FDC;
	sub_82404168(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,440(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 440);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82455FF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82456044
	if (ctx.cr0.lt) goto loc_82456044;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,14096
	ctx.r4.s64 = ctx.r11.s64 + 14096;
	// bl 0x824555b8
	ctx.lr = 0x82456010;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82456044
	if (ctx.cr0.lt) goto loc_82456044;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82456020;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82456044
	if (ctx.cr0.lt) goto loc_82456044;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,14188
	ctx.r4.s64 = ctx.r11.s64 + 14188;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245603C;
	sub_824555B8(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_82456044:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8245A0D8) {
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
	// addi r4,r10,16056
	ctx.r4.s64 = ctx.r10.s64 + 16056;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245A0FC;
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

DEFINE_REX_FUNC(sub_8245A558) {
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
	// addi r4,r11,16596
	ctx.r4.s64 = ctx.r11.s64 + 16596;
	// bl 0x824555b8
	ctx.lr = 0x8245A574;
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

DEFINE_REX_FUNC(sub_8245E1E0) {
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
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// addi r5,r11,18444
	ctx.r5.s64 = ctx.r11.s64 + 18444;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,20632
	ctx.r4.s64 = ctx.r10.s64 + 20632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8245dfc0
	ctx.lr = 0x8245E210;
	sub_8245DFC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473498
	ctx.lr = 0x8245E218;
	sub_82473498(ctx, base);
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

DEFINE_REX_FUNC(sub_8245E820) {
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
	// addi r5,r11,18604
	ctx.r5.s64 = ctx.r11.s64 + 18604;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8245dfc0
	ctx.lr = 0x8245E84C;
	sub_8245DFC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82474698
	ctx.lr = 0x8245E854;
	sub_82474698(ctx, base);
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

DEFINE_REX_FUNC(sub_8245FCB8) {
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
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,316(r3)
	REX_STORE_U32(ctx.r3.u32 + 316, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,320(r3)
	REX_STORE_U32(ctx.r3.u32 + 320, ctx.r11.u32);
	// stw r11,324(r3)
	REX_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// stw r11,328(r3)
	REX_STORE_U32(ctx.r3.u32 + 328, ctx.r11.u32);
	// stw r11,332(r3)
	REX_STORE_U32(ctx.r3.u32 + 332, ctx.r11.u32);
	// stw r10,336(r3)
	REX_STORE_U32(ctx.r3.u32 + 336, ctx.r10.u32);
	// stw r10,340(r3)
	REX_STORE_U32(ctx.r3.u32 + 340, ctx.r10.u32);
	// bl 0x82481098
	ctx.lr = 0x8245FCF0;
	sub_82481098(ctx, base);
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

DEFINE_REX_FUNC(sub_824649E0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cac
	ctx.lr = 0x824649E8;
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,260(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r29,r11,26136
	r29.s64 = ctx.r11.s64 + 26136;
	// li r28,0
	r28.s64 = 0;
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// li r25,1
	r25.s64 = 1;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r5,r29,-96
	ctx.r5.s64 = r29.s64 + -96;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// clrlwi r30,r10,12
	r30.u64 = ctx.r10.u32 & 0xFFFFF;
	// stw r28,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r25,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r25.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r28
	r27.u64 = r28.u64;
	// bl 0x8245f158
	ctx.lr = 0x82464A50;
	sub_8245F158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82464a8c
	if (ctx.cr0.eq) goto loc_82464A8C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,260(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245f158
	ctx.lr = 0x82464A80;
	sub_8245F158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82464d08
	if (!ctx.cr0.eq) goto loc_82464D08;
	// mr r27,r25
	r27.u64 = r25.u64;
loc_82464A8C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lis r10,20480
	ctx.r10.s64 = 1342177280;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82464aac
	if (ctx.cr6.eq) goto loc_82464AAC;
loc_82464AA4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82464d08
	goto loc_82464D08;
loc_82464AAC:
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// ble cr6,0x82464b08
	if (!ctx.cr6.gt) goto loc_82464B08;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
loc_82464AC4:
	// lwz r7,260(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwzx r6,r10,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82464aa4
	if (!ctx.cr6.eq) goto loc_82464AA4;
	// lwz r7,260(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwzx r6,r11,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r7,r8,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82464aa4
	if (!ctx.cr6.eq) goto loc_82464AA4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, ctx.xer);
	// blt cr6,0x82464ac4
	if (ctx.cr6.lt) goto loc_82464AC4;
loc_82464B08:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x82464B10;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82464b20
	if (ctx.cr0.eq) goto loc_82464B20;
	// bl 0x824773d0
	ctx.lr = 0x82464B1C;
	sub_824773D0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_82464B20:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82464b34
	if (!ctx.cr6.eq) goto loc_82464B34;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x82464d04
	goto loc_82464D04;
loc_82464B34:
	// lis r4,28800
	ctx.r4.s64 = 1887436800;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82477b60
	ctx.lr = 0x82464B50;
	sub_82477B60(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x82464cf4
	if (ctx.cr0.lt) goto loc_82464CF4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,260(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 260);
	// bl 0x82477420
	ctx.lr = 0x82464B64;
	sub_82477420(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x82464cf4
	if (ctx.cr0.lt) goto loc_82464CF4;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x826a1e70
	ctx.lr = 0x82464B80;
	sub_826A1E70(ctx, base);
	// ld r11,192(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// bne cr6,0x82464ba4
	if (!ctx.cr6.eq) goto loc_82464BA4;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// ld r10,208(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 208);
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// b 0x82464c9c
	goto loc_82464C9C;
loc_82464BA4:
	// lwz r11,208(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,212(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// lwzx r11,r8,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r30,r7,r9
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82464be4
	if (ctx.cr6.eq) goto loc_82464BE4;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_82464BE4:
	// lwz r10,56(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 56);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82464c00
	if (ctx.cr6.eq) goto loc_82464C00;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// lwzx r30,r8,r9
	r30.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
loc_82464C00:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfd f31,-3744(r10)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82478758
	ctx.lr = 0x82464C20;
	sub_82478758(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r6,16(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82478758
	ctx.lr = 0x82464C3C;
	sub_82478758(ctx, base);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(r29.s32, -1, ctx.xer);
	// beq cr6,0x82464cec
	if (ctx.cr6.eq) goto loc_82464CEC;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82464cec
	if (ctx.cr6.eq) goto loc_82464CEC;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// xoris r8,r26,8
	ctx.r8.u64 = r26.u64 ^ 524288;
	// xoris r7,r27,8
	ctx.r7.u64 = r27.u64 ^ 524288;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r8,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r7,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r7.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r26,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, r26.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r27,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, r27.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r29.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_82464C9C:
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,224(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82464CC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82464cd8
	if (ctx.cr0.eq) goto loc_82464CD8;
	// mr r29,r25
	r29.u64 = r25.u64;
	// b 0x82464cf4
	goto loc_82464CF4;
loc_82464CD8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 260);
	// bl 0x82477e80
	ctx.lr = 0x82464CE4;
	sub_82477E80(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82464cf4
	goto loc_82464CF4;
loc_82464CEC:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
loc_82464CF4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82130e88
	ctx.lr = 0x82464CFC;
	sub_82130E88(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82477b20
	ctx.lr = 0x82464D04;
	sub_82477B20(ctx, base);
loc_82464D04:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82464D08:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82477990) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,24704
	ctx.r10.s64 = 1619001344;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x824779f8
	if (ctx.cr6.gt) goto loc_824779F8;
	// beq cr6,0x82477a44
	if (ctx.cr6.eq) goto loc_82477A44;
	// lis r10,4304
	ctx.r10.s64 = 282066944;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82477a44
	if (ctx.cr6.eq) goto loc_82477A44;
	// lis r10,4320
	ctx.r10.s64 = 283115520;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82477a44
	if (ctx.cr6.eq) goto loc_82477A44;
	// lis r10,24576
	ctx.r10.s64 = 1610612736;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82477a44
	if (ctx.cr6.eq) goto loc_82477A44;
	// lis r10,24608
	ctx.r10.s64 = 1612709888;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82477a44
	if (ctx.cr6.eq) goto loc_82477A44;
	// lis r10,24624
	ctx.r10.s64 = 1613758464;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82477a44
	if (ctx.cr6.eq) goto loc_82477A44;
	// lis r10,24656
	ctx.r10.s64 = 1615855616;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82477a44
	if (ctx.cr6.eq) goto loc_82477A44;
	// lis r10,24688
	ctx.r10.s64 = 1617952768;
	// b 0x82477a38
	goto loc_82477A38;
loc_824779F8:
	// lis r10,24736
	ctx.r10.s64 = 1621098496;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82477a44
	if (ctx.cr6.eq) goto loc_82477A44;
	// lis r10,24768
	ctx.r10.s64 = 1623195648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82477a44
	if (ctx.cr6.eq) goto loc_82477A44;
	// lis r10,24784
	ctx.r10.s64 = 1624244224;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82477a44
	if (ctx.cr6.eq) goto loc_82477A44;
	// lis r10,24816
	ctx.r10.s64 = 1626341376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82477a44
	if (ctx.cr6.eq) goto loc_82477A44;
	// lis r10,24848
	ctx.r10.s64 = 1628438528;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82477a44
	if (ctx.cr6.eq) goto loc_82477A44;
	// lis r10,24864
	ctx.r10.s64 = 1629487104;
loc_82477A38:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82477A44:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8247A5D0) {
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
	ctx.lr = 0x8247A5D8;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// clrlwi. r28,r11,12
	r28.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mr r15,r28
	r15.u64 = r28.u64;
	// beq 0x8247abc4
	if (ctx.cr0.eq) goto loc_8247ABC4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r14,-1
	r14.s64 = -1;
	// lfd f31,-3744(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_8247A610:
	// li r23,0
	r23.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// li r21,0
	r21.s64 = 0;
	// li r20,0
	r20.s64 = 0;
	// li r19,0
	r19.s64 = 0;
	// li r18,0
	r18.s64 = 0;
	// li r17,0
	r17.s64 = 0;
	// li r16,0
	r16.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r15,4
	ctx.cr6.compare<uint32_t>(r15.u32, 4, ctx.xer);
	// ble cr6,0x8247a7d8
	if (!ctx.cr6.gt) goto loc_8247A7D8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8247a7dc
	if (ctx.cr6.eq) goto loc_8247A7DC;
	// lwz r29,8(r25)
	r29.u64 = REX_LOAD_U32(r25.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r31,4
	r31.s64 = 4;
	// rlwinm r30,r28,2,0,29
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r29,-4
	r26.s64 = r29.s64 + -4;
loc_8247A658:
	// lwzx r11,r26,r31
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + r31.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247a7bc
	if (ctx.cr6.eq) goto loc_8247A7BC;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,20(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 20);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r28.u32, ctx.xer);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// lwz r10,-4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r11,r8,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bge cr6,0x8247a788
	if (!ctx.cr6.lt) goto loc_8247A788;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r7,r30,4
	ctx.r7.s64 = r30.s64 + 4;
loc_8247A6A0:
	// lwzx r9,r29,r7
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + ctx.r7.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8247a768
	if (ctx.cr6.eq) goto loc_8247A768;
	// lwz r9,8(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 8);
	// lwz r8,20(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwz r15,4(r11)
	r15.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r14,r9,r6
	r14.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// rlwinm r14,r14,2,0,29
	r14.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwzx r9,r14,r8
	ctx.r9.u64 = REX_LOAD_U32(r14.u32 + ctx.r8.u32);
	// lwz r14,88(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwzx r8,r14,r8
	ctx.r8.u64 = REX_LOAD_U32(r14.u32 + ctx.r8.u32);
	// lwz r14,4(r9)
	r14.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r15,r14
	ctx.cr6.compare<uint32_t>(r15.u32, r14.u32, ctx.xer);
	// bne cr6,0x8247a760
	if (!ctx.cr6.eq) goto loc_8247A760;
	// lwz r15,8(r11)
	r15.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r14,8(r9)
	r14.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r15,r14
	ctx.cr6.compare<uint32_t>(r15.u32, r14.u32, ctx.xer);
	// bne cr6,0x8247a760
	if (!ctx.cr6.eq) goto loc_8247A760;
	// lwz r15,12(r11)
	r15.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r14,12(r9)
	r14.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r15,r14
	ctx.cr6.compare<uint32_t>(r15.u32, r14.u32, ctx.xer);
	// bne cr6,0x8247a760
	if (!ctx.cr6.eq) goto loc_8247A760;
	// lwz r15,72(r11)
	r15.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r9,72(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// cmplw cr6,r15,r9
	ctx.cr6.compare<uint32_t>(r15.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8247a760
	if (!ctx.cr6.eq) goto loc_8247A760;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r15,4(r8)
	r15.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r9,r15
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r15.u32, ctx.xer);
	// bne cr6,0x8247a760
	if (!ctx.cr6.eq) goto loc_8247A760;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r15,8(r8)
	r15.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r9,r15
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r15.u32, ctx.xer);
	// bne cr6,0x8247a760
	if (!ctx.cr6.eq) goto loc_8247A760;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r15,12(r8)
	r15.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r9,r15
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r15.u32, ctx.xer);
	// bne cr6,0x8247a760
	if (!ctx.cr6.eq) goto loc_8247A760;
	// lwz r9,72(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r8,72(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 72);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8247a760
	if (!ctx.cr6.eq) goto loc_8247A760;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// beq cr6,0x8247a780
	if (ctx.cr6.eq) goto loc_8247A780;
loc_8247A760:
	// lwz r15,84(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r14,-1
	r14.s64 = -1;
loc_8247A768:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, ctx.xer);
	// blt cr6,0x8247a6a0
	if (ctx.cr6.lt) goto loc_8247A6A0;
	// b 0x8247a788
	goto loc_8247A788;
loc_8247A780:
	// lwz r15,84(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r14,-1
	r14.s64 = -1;
loc_8247A788:
	// cmplw cr6,r5,r24
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r24.u32, ctx.xer);
	// ble cr6,0x8247a7b4
	if (!ctx.cr6.gt) goto loc_8247A7B4;
	// lwz r23,4(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lwz r22,4(r10)
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r21,8(r11)
	r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r20,8(r10)
	r20.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r19,12(r11)
	r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r18,12(r10)
	r18.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r17,72(r11)
	r17.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r16,72(r10)
	r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
loc_8247A7B4:
	// cmplwi cr6,r24,4
	ctx.cr6.compare<uint32_t>(r24.u32, 4, ctx.xer);
	// beq cr6,0x8247a7dc
	if (ctx.cr6.eq) goto loc_8247A7DC;
loc_8247A7BC:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// blt cr6,0x8247a658
	if (ctx.cr6.lt) goto loc_8247A658;
	// b 0x8247a7dc
	goto loc_8247A7DC;
loc_8247A7D8:
	// mr r24,r15
	r24.u64 = r15.u64;
loc_8247A7DC:
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// rlwimi r4,r11,28,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824787f8
	ctx.lr = 0x8247A7F8;
	sub_824787F8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8247aa18
	if (ctx.cr6.eq) goto loc_8247AA18;
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwzx r31,r10,r11
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477420
	ctx.lr = 0x8247A818;
	sub_82477420(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8247a928
	if (ctx.cr6.eq) goto loc_8247A928;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r24,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
loc_8247A838:
	// cmplw cr6,r5,r24
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r24.u32, ctx.xer);
	// bge cr6,0x8247a928
	if (!ctx.cr6.lt) goto loc_8247A928;
	// lwz r9,8(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 8);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8247a914
	if (ctx.cr6.eq) goto loc_8247A914;
	// lwz r9,8(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 8);
	// cmplwi cr6,r15,4
	ctx.cr6.compare<uint32_t>(r15.u32, 4, ctx.xer);
	// lwz r8,20(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwzx r3,r9,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r9,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r3,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// lwzx r8,r30,r8
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + ctx.r8.u32);
	// ble cr6,0x8247a8d8
	if (!ctx.cr6.gt) goto loc_8247A8D8;
	// lwz r3,4(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r23,r3
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8247a914
	if (!ctx.cr6.eq) goto loc_8247A914;
	// lwz r3,8(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r21,r3
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8247a914
	if (!ctx.cr6.eq) goto loc_8247A914;
	// lwz r3,12(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r19,r3
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8247a914
	if (!ctx.cr6.eq) goto loc_8247A914;
	// lwz r9,72(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// cmplw cr6,r17,r9
	ctx.cr6.compare<uint32_t>(r17.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8247a914
	if (!ctx.cr6.eq) goto loc_8247A914;
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r22,r9
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8247a914
	if (!ctx.cr6.eq) goto loc_8247A914;
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r20,r9
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8247a914
	if (!ctx.cr6.eq) goto loc_8247A914;
	// lwz r9,12(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r18,r9
	ctx.cr6.compare<uint32_t>(r18.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8247a914
	if (!ctx.cr6.eq) goto loc_8247A914;
	// lwz r9,72(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 72);
	// cmplw cr6,r16,r9
	ctx.cr6.compare<uint32_t>(r16.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8247a914
	if (!ctx.cr6.eq) goto loc_8247A914;
loc_8247A8D8:
	// lwz r9,8(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stwx r9,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lwz r9,8(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 8);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stwx r9,r8,r6
	REX_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r9.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lwz r9,8(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 8);
	// stwx r14,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, r14.u32);
	// lwz r9,8(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 8);
	// stwx r14,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r14.u32);
loc_8247A914:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r28.u32, ctx.xer);
	// blt cr6,0x8247a838
	if (ctx.cr6.lt) goto loc_8247A838;
loc_8247A928:
	// cmplwi cr6,r28,4
	ctx.cr6.compare<uint32_t>(r28.u32, 4, ctx.xer);
	// ble cr6,0x8247a9bc
	if (!ctx.cr6.gt) goto loc_8247A9BC;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// lwz r4,136(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 136);
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82478758
	ctx.lr = 0x8247A948;
	sub_82478758(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247aa18
	if (ctx.cr6.eq) goto loc_8247AA18;
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 16);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r9,20(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r9,16(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 16);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,20(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// b 0x8247a9cc
	goto loc_8247A9CC;
loc_8247A9BC:
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 16);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8247A9CC:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf. r15,r24,r15
	r15.u64 = r15.u64 - r24.u64;
	ctx.cr0.compare<int32_t>(r15.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r15,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r15.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne 0x8247a610
	if (!ctx.cr0.eq) goto loc_8247A610;
	// rotlwi r24,r11,0
	r24.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(r24.u32, 1, ctx.xer);
	// ble cr6,0x8247abc4
	if (!ctx.cr6.gt) goto loc_8247ABC4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,120(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 120);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfd f1,3728(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// bl 0x82478758
	ctx.lr = 0x8247AA0C;
	sub_82478758(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8247aa28
	if (!ctx.cr6.eq) goto loc_8247AA28;
loc_8247AA18:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8247abc8
	goto loc_8247ABC8;
loc_8247AA24:
	// lwz r24,80(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8247AA28:
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// subf r29,r24,r11
	r29.u64 = ctx.r11.u64 - r24.u64;
	// beq cr6,0x8247abb8
	if (ctx.cr6.eq) goto loc_8247ABB8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8247AA40:
	// subf r30,r11,r24
	r30.u64 = r24.u64 - ctx.r11.u64;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// ble cr6,0x8247aa50
	if (!ctx.cr6.gt) goto loc_8247AA50;
	// li r30,4
	r30.s64 = 4;
loc_8247AA50:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x8247aa64
	if (!ctx.cr6.eq) goto loc_8247AA64;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
loc_8247AA5C:
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x8247aa80
	goto loc_8247AA80;
loc_8247AA64:
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// bne cr6,0x8247aa74
	if (!ctx.cr6.eq) goto loc_8247AA74;
	// lis r4,8256
	ctx.r4.s64 = 541065216;
	// b 0x8247aa5c
	goto loc_8247AA5C;
loc_8247AA74:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r11,5
	ctx.r11.s64 = 5;
	// rlwimi r4,r11,28,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
loc_8247AA80:
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824787f8
	ctx.lr = 0x8247AA90;
	sub_824787F8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8247aa18
	if (ctx.cr6.eq) goto loc_8247AA18;
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwzx r31,r10,r11
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477420
	ctx.lr = 0x8247AAB0;
	sub_82477420(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8247ab00
	if (ctx.cr6.eq) goto loc_8247AB00;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_8247AAC8:
	// lwz r8,24(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 24);
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwzx r8,r10,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r8,16(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stwx r8,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u32);
	// ble cr6,0x8247aaf0
	if (!ctx.cr6.gt) goto loc_8247AAF0;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stwx r26,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, r26.u32);
loc_8247AAF0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8247aac8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8247AAC8;
loc_8247AB00:
	// cmplwi cr6,r24,4
	ctx.cr6.compare<uint32_t>(r24.u32, 4, ctx.xer);
	// ble cr6,0x8247ab94
	if (!ctx.cr6.gt) goto loc_8247AB94;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// lwz r4,136(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 136);
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82478758
	ctx.lr = 0x8247AB20;
	sub_82478758(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247aa18
	if (ctx.cr6.eq) goto loc_8247AA18;
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 16);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r9,20(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r10,16(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 16);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r9,20(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// b 0x8247aba4
	goto loc_8247ABA4;
loc_8247AB94:
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 16);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8247ABA4:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// add r29,r30,r29
	r29.u64 = r30.u64 + r29.u64;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// blt cr6,0x8247aa40
	if (ctx.cr6.lt) goto loc_8247AA40;
loc_8247ABB8:
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// bgt cr6,0x8247aa24
	if (ctx.cr6.gt) goto loc_8247AA24;
loc_8247ABC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247ABC8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_824B58C0) {
	REX_FUNC_PROLOGUE();
	// lbz r10,111(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 111);
	// lbz r11,110(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 110);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x824b58e8
	if (!ctx.cr6.eq) goto loc_824B58E8;
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824b5910
	if (ctx.cr6.lt) goto loc_824B5910;
loc_824B58DC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_824B58E8:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x824b5904
	if (!ctx.cr6.eq) goto loc_824B5904;
	// lwz r10,60(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824b58dc
	if (!ctx.cr6.lt) goto loc_824B58DC;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x824b5910
	goto loc_824B5910;
loc_824B5904:
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bne cr6,0x824b58dc
	if (!ctx.cr6.eq) goto loc_824B58DC;
	// li r11,12
	ctx.r11.s64 = 12;
loc_824B5910:
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824B8688) {
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
	ctx.lr = 0x824B8690;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824b8ab4
	if (ctx.cr6.eq) goto loc_824B8AB4;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lis r27,28720
	r27.s64 = 1882193920;
	// lis r24,20480
	r24.s64 = 1342177280;
	// ori r28,r11,16385
	r28.u64 = ctx.r11.u64 | 16385;
	// lis r25,29280
	r25.s64 = 1918894080;
loc_824B86C0:
	// stw r30,256(r31)
	REX_STORE_U32(r31.u32 + 256, r30.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// beq 0x824b8aa4
	if (ctx.cr0.eq) goto loc_824B8AA4;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824b86f4
	if (ctx.cr6.eq) goto loc_824B86F4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bne cr6,0x824b86f4
	if (!ctx.cr6.eq) goto loc_824B86F4;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stw r11,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r11.u32);
loc_824B86F4:
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824b8aa4
	if (ctx.cr6.eq) goto loc_824B8AA4;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x824b8ac0
	if (!ctx.cr6.eq) goto loc_824B8AC0;
	// rlwinm r11,r8,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bgt cr6,0x824b8974
	if (ctx.cr6.gt) goto loc_824B8974;
	// beq cr6,0x824b8968
	if (ctx.cr6.eq) goto loc_824B8968;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// bgt cr6,0x824b88fc
	if (ctx.cr6.gt) goto loc_824B88FC;
	// beq cr6,0x824b87f8
	if (ctx.cr6.eq) goto loc_824B87F8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824b8aa4
	if (ctx.cr6.eq) goto loc_824B8AA4;
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b87e0
	if (ctx.cr6.eq) goto loc_824B87E0;
	// lis r10,4112
	ctx.r10.s64 = 269484032;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b87d4
	if (ctx.cr6.eq) goto loc_824B87D4;
	// lis r10,4352
	ctx.r10.s64 = 285212672;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b87c8
	if (ctx.cr6.eq) goto loc_824B87C8;
	// lis r10,8256
	ctx.r10.s64 = 541065216;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b87bc
	if (ctx.cr6.eq) goto loc_824B87BC;
	// lis r10,8272
	ctx.r10.s64 = 542113792;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b87b0
	if (ctx.cr6.eq) goto loc_824B87B0;
	// lis r10,12288
	ctx.r10.s64 = 805306368;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824b8ae4
	if (!ctx.cr6.eq) goto loc_824B8AE4;
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// cmplwi cr6,r11,260
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 260, ctx.xer);
	// bne cr6,0x824b87a8
	if (!ctx.cr6.eq) goto loc_824B87A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,188(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// b 0x824b87e8
	goto loc_824B87E8;
loc_824B87A8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x824b8a94
	goto loc_824B8A94;
loc_824B87B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// b 0x824b87e8
	goto loc_824B87E8;
loc_824B87BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// b 0x824b87e8
	goto loc_824B87E8;
loc_824B87C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// b 0x824b87e8
	goto loc_824B87E8;
loc_824B87D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// b 0x824b87e8
	goto loc_824B87E8;
loc_824B87E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
loc_824B87E8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824B87F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824b8a94
	goto loc_824B8A94;
loc_824B87F8:
	// clrlwi r8,r8,12
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFFF;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// beq cr6,0x824b8ae4
	if (ctx.cr6.eq) goto loc_824B8AE4;
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// bne cr6,0x824b8824
	if (!ctx.cr6.eq) goto loc_824B8824;
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// cmplwi cr6,r11,257
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 257, ctx.xer);
	// bne cr6,0x824b8824
	if (!ctx.cr6.eq) goto loc_824B8824;
loc_824B8818:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b4db0
	ctx.lr = 0x824B8820;
	sub_824B4DB0(ctx, base);
	// b 0x824b8a94
	goto loc_824B8A94;
loc_824B8824:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// cmplwi cr6,r11,258
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 258, ctx.xer);
	// beq cr6,0x824b8838
	if (ctx.cr6.eq) goto loc_824B8838;
	// cmplwi cr6,r11,259
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 259, ctx.xer);
	// bne cr6,0x824b88bc
	if (!ctx.cr6.eq) goto loc_824B88BC;
loc_824B8838:
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// bne cr6,0x824b88bc
	if (!ctx.cr6.eq) goto loc_824B88BC;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r7,132(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 132);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r10,r8,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r8,r6,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bne cr6,0x824b88c8
	if (!ctx.cr6.eq) goto loc_824B88C8;
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lbz r11,111(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 111);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824b889c
	if (!ctx.cr6.eq) goto loc_824B889C;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824b88b4
	if (ctx.cr6.eq) goto loc_824B88B4;
loc_824B889C:
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824b88bc
	if (!ctx.cr6.eq) goto loc_824B88BC;
	// lwz r10,12(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824b88bc
	if (!ctx.cr6.eq) goto loc_824B88BC;
loc_824B88B4:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
loc_824B88B8:
	// beq cr6,0x824b8818
	if (ctx.cr6.eq) goto loc_824B8818;
loc_824B88BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// b 0x824b87e8
	goto loc_824B87E8;
loc_824B88C8:
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824b88e0
	if (!ctx.cr6.eq) goto loc_824B88E0;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x824b8818
	if (ctx.cr6.eq) goto loc_824B8818;
loc_824B88E0:
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824b88bc
	if (!ctx.cr6.eq) goto loc_824B88BC;
	// lwz r10,12(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// b 0x824b88b8
	goto loc_824B88B8;
loc_824B88FC:
	// lis r10,24576
	ctx.r10.s64 = 1610612736;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b895c
	if (ctx.cr6.eq) goto loc_824B895C;
	// lis r10,24656
	ctx.r10.s64 = 1615855616;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b895c
	if (ctx.cr6.eq) goto loc_824B895C;
	// lis r10,24688
	ctx.r10.s64 = 1617952768;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b8950
	if (ctx.cr6.eq) goto loc_824B8950;
	// lis r10,24736
	ctx.r10.s64 = 1621098496;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b895c
	if (ctx.cr6.eq) goto loc_824B895C;
	// lis r10,24816
	ctx.r10.s64 = 1626341376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b895c
	if (ctx.cr6.eq) goto loc_824B895C;
	// lis r10,28688
	ctx.r10.s64 = 1880096768;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824b8ae4
	if (!ctx.cr6.eq) goto loc_824B8AE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// b 0x824b87e8
	goto loc_824B87E8;
loc_824B8950:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b5308
	ctx.lr = 0x824B8958;
	sub_824B5308(ctx, base);
	// b 0x824b8a94
	goto loc_824B8A94;
loc_824B895C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b5470
	ctx.lr = 0x824B8964;
	sub_824B5470(ctx, base);
	// b 0x824b8a94
	goto loc_824B8A94;
loc_824B8968:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,208(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// b 0x824b87e8
	goto loc_824B87E8;
loc_824B8974:
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bgt cr6,0x824b8a14
	if (ctx.cr6.gt) goto loc_824B8A14;
	// beq cr6,0x824b8a0c
	if (ctx.cr6.eq) goto loc_824B8A0C;
	// lis r10,28736
	ctx.r10.s64 = 1883242496;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b8968
	if (ctx.cr6.eq) goto loc_824B8968;
	// lis r10,28912
	ctx.r10.s64 = 1894776832;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b8a00
	if (ctx.cr6.eq) goto loc_824B8A00;
	// lis r10,29200
	ctx.r10.s64 = 1913651200;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b89f4
	if (ctx.cr6.eq) goto loc_824B89F4;
	// lis r10,29216
	ctx.r10.s64 = 1914699776;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b89ec
	if (ctx.cr6.eq) goto loc_824B89EC;
	// lis r10,29232
	ctx.r10.s64 = 1915748352;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b89e4
	if (ctx.cr6.eq) goto loc_824B89E4;
	// lis r10,29248
	ctx.r10.s64 = 1916796928;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b89dc
	if (ctx.cr6.eq) goto loc_824B89DC;
	// lis r10,29264
	ctx.r10.s64 = 1917845504;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824b8ae4
	if (!ctx.cr6.eq) goto loc_824B8AE4;
	// li r4,74
	ctx.r4.s64 = 74;
	// b 0x824b8a8c
	goto loc_824B8A8C;
loc_824B89DC:
	// li r4,73
	ctx.r4.s64 = 73;
	// b 0x824b8a8c
	goto loc_824B8A8C;
loc_824B89E4:
	// li r4,72
	ctx.r4.s64 = 72;
	// b 0x824b8a8c
	goto loc_824B8A8C;
loc_824B89EC:
	// li r4,71
	ctx.r4.s64 = 71;
	// b 0x824b8a8c
	goto loc_824B8A8C;
loc_824B89F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b5640
	ctx.lr = 0x824B89FC;
	sub_824B5640(ctx, base);
	// b 0x824b8a94
	goto loc_824B8A94;
loc_824B8A00:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,192(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// b 0x824b87e8
	goto loc_824B87E8;
loc_824B8A0C:
	// li r4,82
	ctx.r4.s64 = 82;
	// b 0x824b8a8c
	goto loc_824B8A8C;
loc_824B8A14:
	// lis r10,29296
	ctx.r10.s64 = 1919942656;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b8a88
	if (ctx.cr6.eq) goto loc_824B8A88;
	// lis r10,29312
	ctx.r10.s64 = 1920991232;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b8a80
	if (ctx.cr6.eq) goto loc_824B8A80;
	// lis r10,29328
	ctx.r10.s64 = 1922039808;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b8a78
	if (ctx.cr6.eq) goto loc_824B8A78;
	// lis r10,29344
	ctx.r10.s64 = 1923088384;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b8a70
	if (ctx.cr6.eq) goto loc_824B8A70;
	// lis r10,29360
	ctx.r10.s64 = 1924136960;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b8a68
	if (ctx.cr6.eq) goto loc_824B8A68;
	// lis r10,29408
	ctx.r10.s64 = 1927282688;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824b8ae4
	if (!ctx.cr6.eq) goto loc_824B8AE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b51a0
	ctx.lr = 0x824B8A64;
	sub_824B51A0(ctx, base);
	// b 0x824b8a94
	goto loc_824B8A94;
loc_824B8A68:
	// li r4,83
	ctx.r4.s64 = 83;
	// b 0x824b8a8c
	goto loc_824B8A8C;
loc_824B8A70:
	// li r4,76
	ctx.r4.s64 = 76;
	// b 0x824b8a8c
	goto loc_824B8A8C;
loc_824B8A78:
	// li r4,77
	ctx.r4.s64 = 77;
	// b 0x824b8a8c
	goto loc_824B8A8C;
loc_824B8A80:
	// li r4,70
	ctx.r4.s64 = 70;
	// b 0x824b8a8c
	goto loc_824B8A8C;
loc_824B8A88:
	// li r4,69
	ctx.r4.s64 = 69;
loc_824B8A8C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b4f90
	ctx.lr = 0x824B8A94;
	sub_824B4F90(ctx, base);
loc_824B8A94:
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r28.s32, ctx.xer);
	// beq cr6,0x824b8ae4
	if (ctx.cr6.eq) goto loc_824B8AE4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824b8ab8
	if (ctx.cr6.lt) goto loc_824B8AB8;
loc_824B8AA4:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// blt cr6,0x824b86c0
	if (ctx.cr6.lt) goto loc_824B86C0;
loc_824B8AB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824B8AB8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_824B8AC0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,60(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// li r5,4511
	ctx.r5.s64 = 4511;
	// addi r6,r11,-4596
	ctx.r6.s64 = ctx.r11.s64 + -4596;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82489c30
	ctx.lr = 0x824B8AD8;
	sub_82489C30(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824b8ab8
	goto loc_824B8AB8;
loc_824B8AE4:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r5,4532
	ctx.r5.s64 = 4532;
	// addi r6,r10,12952
	ctx.r6.s64 = ctx.r10.s64 + 12952;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82489c30
	ctx.lr = 0x824B8B00;
	sub_82489C30(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x824b8ab8
	goto loc_824B8AB8;
}

DEFINE_REX_FUNC(sub_824D10F0) {
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
	ctx.lr = 0x824D10F8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,19
	ctx.r4.s64 = 19;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,40(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x824D1130;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x824d1140
	if (!ctx.cr0.eq) goto loc_824D1140;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x824d11c4
	goto loc_824D11C4;
loc_824D1140:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,19
	ctx.r5.s64 = 19;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d0c50
	ctx.lr = 0x824D1170;
	sub_824D0C50(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -3, ctx.xer);
	// bne cr6,0x824d1188
	if (!ctx.cr6.eq) goto loc_824D1188;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,16684
	ctx.r11.s64 = ctx.r11.s64 + 16684;
	// b 0x824d11a8
	goto loc_824D11A8;
loc_824D1188:
	// cmpwi cr6,r30,-5
	ctx.cr6.compare<int32_t>(r30.s32, -5, ctx.xer);
	// beq cr6,0x824d119c
	if (ctx.cr6.eq) goto loc_824D119C;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824d11ac
	if (!ctx.cr6.eq) goto loc_824D11AC;
loc_824D119C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r30,-3
	r30.s64 = -3;
	// addi r11,r11,16648
	ctx.r11.s64 = ctx.r11.s64 + 16648;
loc_824D11A8:
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_824D11AC:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824D11C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824D11C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824D4388) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r1,-20
	ctx.r10.s64 = ctx.r1.s64 + -20;
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// stvx128 v1,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824D43A0:
	// lwz r7,32(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// lbzx r7,r9,r3
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// and r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 & ctx.r6.u64;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stbx r8,r9,r3
	REX_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u8);
	// bdnz 0x824d43a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824D43A0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D5338) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,51
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 51, ctx.xer);
	// bgt cr6,0x824d53cc
	if (ctx.cr6.gt) goto loc_824D53CC;
	// beq cr6,0x824d53c0
	if (ctx.cr6.eq) goto loc_824D53C0;
	// cmplwi cr6,r3,11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 11, ctx.xer);
	// beq cr6,0x824d53a0
	if (ctx.cr6.eq) goto loc_824D53A0;
	// cmplwi cr6,r3,12
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 12, ctx.xer);
	// beq cr6,0x824d5380
	if (ctx.cr6.eq) goto loc_824D5380;
	// cmplwi cr6,r3,18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 18, ctx.xer);
	// beq cr6,0x824d53c0
	if (ctx.cr6.eq) goto loc_824D53C0;
	// cmplwi cr6,r3,19
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 19, ctx.xer);
	// beq cr6,0x824d5458
	if (ctx.cr6.eq) goto loc_824D5458;
	// cmplwi cr6,r3,20
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 20, ctx.xer);
	// beq cr6,0x824d5438
	if (ctx.cr6.eq) goto loc_824D5438;
	// cmplwi cr6,r3,49
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 49, ctx.xer);
	// bne cr6,0x824d53fc
	if (!ctx.cr6.eq) goto loc_824D53FC;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,21200
	ctx.r3.s64 = ctx.r11.s64 + 21200;
	// blr 
	return;
loc_824D5380:
	// rlwinm. r11,r4,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824d5394
	if (ctx.cr0.eq) goto loc_824D5394;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,17016
	ctx.r3.s64 = ctx.r11.s64 + 17016;
	// blr 
	return;
loc_824D5394:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,17168
	ctx.r3.s64 = ctx.r11.s64 + 17168;
	// blr 
	return;
loc_824D53A0:
	// rlwinm. r11,r4,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824d53b4
	if (ctx.cr0.eq) goto loc_824D53B4;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,17032
	ctx.r3.s64 = ctx.r11.s64 + 17032;
	// blr 
	return;
loc_824D53B4:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,17048
	ctx.r3.s64 = ctx.r11.s64 + 17048;
	// blr 
	return;
loc_824D53C0:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,16768
	ctx.r3.s64 = ctx.r11.s64 + 16768;
	// blr 
	return;
loc_824D53CC:
	// cmplwi cr6,r3,52
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 52, ctx.xer);
	// beq cr6,0x824d5458
	if (ctx.cr6.eq) goto loc_824D5458;
	// cmplwi cr6,r3,53
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 53, ctx.xer);
	// beq cr6,0x824d5438
	if (ctx.cr6.eq) goto loc_824D5438;
	// cmplwi cr6,r3,58
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 58, ctx.xer);
	// beq cr6,0x824d542c
	if (ctx.cr6.eq) goto loc_824D542C;
	// cmplwi cr6,r3,59
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 59, ctx.xer);
	// beq cr6,0x824d5420
	if (ctx.cr6.eq) goto loc_824D5420;
	// cmplwi cr6,r3,60
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 60, ctx.xer);
	// beq cr6,0x824d5414
	if (ctx.cr6.eq) goto loc_824D5414;
	// cmplwi cr6,r3,61
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 61, ctx.xer);
	// beq cr6,0x824d5408
	if (ctx.cr6.eq) goto loc_824D5408;
loc_824D53FC:
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_824D5408:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,17000
	ctx.r3.s64 = ctx.r11.s64 + 17000;
	// blr 
	return;
loc_824D5414:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,17008
	ctx.r3.s64 = ctx.r11.s64 + 17008;
	// blr 
	return;
loc_824D5420:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,21120
	ctx.r3.s64 = ctx.r11.s64 + 21120;
	// blr 
	return;
loc_824D542C:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,16928
	ctx.r3.s64 = ctx.r11.s64 + 16928;
	// blr 
	return;
loc_824D5438:
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824d544c
	if (ctx.cr0.eq) goto loc_824D544C;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,20952
	ctx.r3.s64 = ctx.r11.s64 + 20952;
	// blr 
	return;
loc_824D544C:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,21040
	ctx.r3.s64 = ctx.r11.s64 + 21040;
	// blr 
	return;
loc_824D5458:
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824d546c
	if (ctx.cr0.eq) goto loc_824D546C;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,16776
	ctx.r3.s64 = ctx.r11.s64 + 16776;
	// blr 
	return;
loc_824D546C:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,16856
	ctx.r3.s64 = ctx.r11.s64 + 16856;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824DB0E0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x824db114
	if (!ctx.cr6.gt) goto loc_824DB114;
	// bl 0x824d8118
	ctx.lr = 0x824DB114;
	sub_824D8118(ctx, base);
loc_824DB114:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
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

DEFINE_REX_FUNC(sub_824DCBB8) {
	REX_FUNC_PROLOGUE();
	// b 0x824dc230
	sub_824DC230(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824DD1D8) {
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
	ctx.lr = 0x824DD1E0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// addi r29,r3,144
	r29.s64 = ctx.r3.s64 + 144;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824dd2a4
	if (ctx.cr6.lt) goto loc_824DD2A4;
	// lwz r28,72(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x824dd24c
	if (ctx.cr6.gt) goto loc_824DD24C;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// addi r27,r4,1
	r27.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824dd23c
	if (!ctx.cr6.gt) goto loc_824DD23C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824d8088
	ctx.lr = 0x824DD23C;
	sub_824D8088(ctx, base);
loc_824DD23C:
	// stw r27,4(r28)
	REX_STORE_U32(r28.u32 + 4, r27.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824dd2a4
	if (ctx.cr6.lt) goto loc_824DD2A4;
loc_824DD24C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x824dd2a4
	if (ctx.cr6.eq) goto loc_824DD2A4;
	// lwz r10,72(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 72);
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r24,8(r31)
	REX_STORE_U32(r31.u32 + 8, r24.u32);
	// stw r23,12(r31)
	REX_STORE_U32(r31.u32 + 12, r23.u32);
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// lwz r4,24(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x824dca38
	ctx.lr = 0x824DD27C;
	sub_824DCA38(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r3,r11,0,0,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000) | (ctx.r3.u64 & 0xFFFFFFFF7FFFFFFF);
	// addi r7,r31,4
	ctx.r7.s64 = r31.s64 + 4;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,96(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 96);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8246cb48
	ctx.lr = 0x824DD2A0;
	sub_8246CB48(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
loc_824DD2A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_824E25C0) {
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
	ctx.lr = 0x824E25C8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,36
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 36, ctx.xer);
	// bge cr6,0x824e25ec
	if (!ctx.cr6.lt) goto loc_824E25EC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x824e269c
	goto loc_824E269C;
loc_824E25EC:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-21464
	ctx.r11.s64 = ctx.r11.s64 + -21464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x824e21f8
	ctx.lr = 0x824E2604;
	sub_824E21F8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,19072
	r30.s64 = ctx.r11.s64 + 19072;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E2618;
	sub_824E0480(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r11,-19772
	r29.s64 = ctx.r11.s64 + -19772;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E262C;
	sub_824DF9F0(ctx, base);
	// rlwinm. r11,r28,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r28,r11,27,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bne 0x824e2644
	if (!ctx.cr0.eq) goto loc_824E2644;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e2698
	if (ctx.cr0.eq) goto loc_824E2698;
loc_824E2644:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-6700
	ctx.r4.s64 = ctx.r11.s64 + -6700;
	// bl 0x824e21f8
	ctx.lr = 0x824E2654;
	sub_824E21F8(ctx, base);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e2668
	if (ctx.cr0.eq) goto loc_824E2668;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r11,19332
	ctx.r5.s64 = ctx.r11.s64 + 19332;
	// b 0x824e2670
	goto loc_824E2670;
loc_824E2668:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r11,19324
	ctx.r5.s64 = ctx.r11.s64 + 19324;
loc_824E2670:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,25892
	ctx.r4.s64 = ctx.r11.s64 + 25892;
	// bl 0x824df9f0
	ctx.lr = 0x824E2680;
	sub_824DF9F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E268C;
	sub_824E0480(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E2698;
	sub_824DF9F0(ctx, base);
loc_824E2698:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824E269C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824E8858) {
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
	ctx.lr = 0x824E8860;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824e8884
	if (ctx.cr6.lt) goto loc_824E8884;
	// bl 0x826b40a0
	ctx.lr = 0x824E8884;
	sub_826B40A0(ctx, base);
loc_824E8884:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// lwz r31,0(r22)
	r31.u64 = REX_LOAD_U32(r22.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	r27.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// clrlwi r29,r10,21
	r29.u64 = ctx.r10.u32 & 0x7FF;
	// rlwimi r9,r10,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// addi r25,r11,4
	r25.s64 = ctx.r11.s64 + 4;
	// lhz r10,6(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// rlwinm r28,r9,24,27,31
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// addi r11,r10,-73
	ctx.r11.s64 = ctx.r10.s64 + -73;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe. r30,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	r30.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x824e88c8
	if (ctx.cr0.eq) goto loc_824E88C8;
	// addi r11,r10,-77
	ctx.r11.s64 = ctx.r10.s64 + -77;
	// b 0x824e88d0
	goto loc_824E88D0;
loc_824E88C8:
	// lhz r11,14(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 14);
	// addi r11,r11,-77
	ctx.r11.s64 = ctx.r11.s64 + -77;
loc_824E88D0:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(r28.u32, 3, ctx.xer);
	// rlwinm r26,r11,27,31,31
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x824e88e4
	if (ctx.cr6.eq) goto loc_824E88E4;
	// bl 0x826b40a0
	ctx.lr = 0x824E88E4;
	sub_826B40A0(ctx, base);
loc_824E88E4:
	// cntlzw r11,r30
	ctx.r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x824e5c68
	ctx.lr = 0x824E8904;
	sub_824E5C68(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// subfic r9,r30,0
	ctx.xer.ca = r30.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - r30.u64;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// li r11,34
	ctx.r11.s64 = 34;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// stwu r10,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	r31.u32 = ea;
	// clrlwi r30,r29,16
	r30.u64 = r29.u32 & 0xFFFF;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
	// oris r11,r30,17
	ctx.r11.u64 = r30.u64 | 1114112;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// stwu r29,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, r29.u32);
	r31.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stwu r11,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r31.u32 = ea;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x824e6438
	ctx.lr = 0x824E8964;
	sub_824E6438(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x824e89a4
	if (ctx.cr6.eq) goto loc_824E89A4;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,68
	ctx.r9.s64 = 4456448;
	// li r8,71
	ctx.r8.s64 = 71;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// ori r9,r9,14
	ctx.r9.u64 = ctx.r9.u64 | 14;
	// oris r7,r30,81
	ctx.r7.u64 = r30.u64 | 5308416;
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// li r8,13107
	ctx.r8.s64 = 13107;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r29,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r29.u32);
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x824e89a8
	goto loc_824E89A8;
loc_824E89A4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_824E89A8:
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
	// stw r25,0(r23)
	REX_STORE_U32(r23.u32 + 0, r25.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_824F05F0) {
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
	ctx.lr = 0x824F05F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// addi r28,r11,22852
	r28.s64 = ctx.r11.s64 + 22852;
	// addi r27,r10,23200
	r27.s64 = ctx.r10.s64 + 23200;
	// blt cr6,0x824f0640
	if (ctx.cr6.lt) goto loc_824F0640;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,23360
	ctx.r5.s64 = ctx.r11.s64 + 23360;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,634
	ctx.r7.s64 = 634;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F0640;
	sub_824EA978(ctx, base);
loc_824F0640:
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
	// blt cr6,0x824f0674
	if (ctx.cr6.lt) goto loc_824F0674;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,23288
	ctx.r5.s64 = ctx.r11.s64 + 23288;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,634
	ctx.r7.s64 = 634;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F0674;
	sub_824EA978(ctx, base);
loc_824F0674:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r11,r9,r29
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r29.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x824f02c0
	ctx.lr = 0x824F0694;
	sub_824F02C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824F6F80) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x824f6fbc
	if (ctx.cr6.eq) goto loc_824F6FBC;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x824f6fbc
	if (ctx.cr6.eq) goto loc_824F6FBC;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x824f6fbc
	if (ctx.cr6.eq) goto loc_824F6FBC;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x824f6fbc
	if (ctx.cr6.eq) goto loc_824F6FBC;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x824f6fbc
	if (ctx.cr6.eq) goto loc_824F6FBC;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x824f6fc0
	if (!ctx.cr6.eq) goto loc_824F6FC0;
loc_824F6FBC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_824F6FC0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824F7958) {
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
	ctx.lr = 0x824F7960;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,768(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 768);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x822cded0
	ctx.lr = 0x824F7978;
	sub_822CDED0(ctx, base);
	// addi r31,r30,1
	r31.s64 = r30.s64 + 1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bgt cr6,0x824f7a14
	if (ctx.cr6.gt) goto loc_824F7A14;
loc_824F7988:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,768(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 768);
	// bl 0x822cded0
	ctx.lr = 0x824F7994;
	sub_822CDED0(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r11,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// rlwinm r11,r10,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824f79bc
	if (ctx.cr6.eq) goto loc_824F79BC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x824f79c8
	if (ctx.cr6.eq) goto loc_824F79C8;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x824f79c8
	if (ctx.cr6.eq) goto loc_824F79C8;
loc_824F79BC:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// ble cr6,0x824f7988
	if (!ctx.cr6.gt) goto loc_824F7988;
loc_824F79C8:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bgt cr6,0x824f7a14
	if (ctx.cr6.gt) goto loc_824F7A14;
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bgt cr6,0x824f7a14
	if (ctx.cr6.gt) goto loc_824F7A14;
loc_824F79DC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,768(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 768);
	// bl 0x822cded0
	ctx.lr = 0x824F79E8;
	sub_822CDED0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,16,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r10,20480
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20480, ctx.xer);
	// bne cr6,0x824f7a08
	if (!ctx.cr6.eq) goto loc_824F7A08;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,12,21,21
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// rlwimi r11,r10,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_824F7A08:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// ble cr6,0x824f79dc
	if (!ctx.cr6.gt) goto loc_824F79DC;
loc_824F7A14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82501EE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82501EE8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// addi r31,r28,4
	r31.s64 = r28.s64 + 4;
loc_82501F00:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82501f28
	if (ctx.cr6.eq) goto loc_82501F28;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x82501f28
	if (ctx.cr6.eq) goto loc_82501F28;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82501b70
	ctx.lr = 0x82501F20;
	sub_82501B70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82501f38
	if (!ctx.cr0.eq) goto loc_82501F38;
loc_82501F28:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(r30.u32, 6, ctx.xer);
	// ble cr6,0x82501f00
	if (!ctx.cr6.gt) goto loc_82501F00;
loc_82501F38:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82501f80
	if (!ctx.cr0.eq) goto loc_82501F80;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x82501f5c
	if (ctx.cr6.lt) goto loc_82501F5C;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82501f60
	if (!ctx.cr6.gt) goto loc_82501F60;
loc_82501F5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82501F60:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82501f80
	if (ctx.cr0.eq) goto loc_82501F80;
	// lwz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82501f80
	if (ctx.cr6.eq) goto loc_82501F80;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x82501f80
	if (ctx.cr6.eq) goto loc_82501F80;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82501F80:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82501f9c
	if (!ctx.cr0.eq) goto loc_82501F9C;
	// lwz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82501f9c
	if (ctx.cr6.eq) goto loc_82501F9C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82522640
	ctx.lr = 0x82501F9C;
	sub_82522640(ctx, base);
loc_82501F9C:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82501fdc
	if (!ctx.cr0.eq) goto loc_82501FDC;
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82501fdc
	if (ctx.cr6.eq) goto loc_82501FDC;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x82501fdc
	if (ctx.cr6.eq) goto loc_82501FDC;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,12288
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12288, ctx.xer);
	// bne cr6,0x82501fd4
	if (!ctx.cr6.eq) goto loc_82501FD4;
	// rlwinm. r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82501fd8
	if (!ctx.cr0.eq) goto loc_82501FD8;
loc_82501FD4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82501FD8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_82501FDC:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250204c
	if (!ctx.cr0.eq) goto loc_8250204C;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_82501FE8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8250204c
	if (ctx.cr6.eq) goto loc_8250204C;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82502008
	if (ctx.cr0.eq) goto loc_82502008;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8250200c
	if (ctx.cr0.eq) goto loc_8250200C;
loc_82502008:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8250200C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82502040
	if (ctx.cr0.eq) goto loc_82502040;
	// rlwinm r11,r10,19,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82502040
	if (ctx.cr6.eq) goto loc_82502040;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x82502040
	if (ctx.cr6.eq) goto loc_82502040;
	// lwz r10,12(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82502048
	if (!ctx.cr6.eq) goto loc_82502048;
loc_82502040:
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82501fe8
	goto loc_82501FE8;
loc_82502048:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8250204C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82510F48) {
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
	ctx.lr = 0x82510F50;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
loc_82510F5C:
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82510f7c
	if (ctx.cr6.eq) goto loc_82510F7C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82510f7c
	if (ctx.cr0.eq) goto loc_82510F7C;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// b 0x82510f5c
	goto loc_82510F5C;
loc_82510F7C:
	// lwz r11,36(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82510fc0
	if (!ctx.cr0.eq) goto loc_82510FC0;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82510fc0
	if (ctx.cr0.eq) goto loc_82510FC0;
loc_82510F94:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10624
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10624, ctx.xer);
	// beq cr6,0x82510fcc
	if (ctx.cr6.eq) goto loc_82510FCC;
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82510fc0
	if (!ctx.cr0.eq) goto loc_82510FC0;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82510f94
	if (!ctx.cr6.eq) goto loc_82510F94;
loc_82510FC0:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824e4368
	ctx.lr = 0x82510FCC;
	sub_824E4368(ctx, base);
loc_82510FCC:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f7678
	ctx.lr = 0x82510FDC;
	sub_824F7678(ctx, base);
	// addi r27,r3,4
	r27.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r27,1
	ctx.r10.u64 = r27.u64 | 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r25
	r30.u64 = r25.u64;
	// lwz r11,112(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 112);
	// addi r26,r11,1
	r26.s64 = ctx.r11.s64 + 1;
	// stw r26,112(r28)
	REX_STORE_U32(r28.u32 + 112, r26.u32);
loc_82511004:
	// lwz r29,8(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 8);
loc_82511008:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82511090
	if (ctx.cr6.eq) goto loc_82511090;
	// lwz r30,4(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250d258
	ctx.lr = 0x8251102C;
	sub_8250D258(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82511088
	if (!ctx.cr0.eq) goto loc_82511088;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82511064
	if (!ctx.cr0.eq) goto loc_82511064;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82511064
	if (ctx.cr0.eq) goto loc_82511064;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82511070
	if (!ctx.cr6.gt) goto loc_82511070;
loc_82511064:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251fe00
	ctx.lr = 0x82511070;
	sub_8251FE00(ctx, base);
loc_82511070:
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
	// stwx r30,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r30.u32);
loc_82511088:
	// lwz r29,12(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 12);
	// b 0x82511008
	goto loc_82511008;
loc_82511090:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82511138
	if (!ctx.cr0.eq) goto loc_82511138;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82511138
	if (ctx.cr0.eq) goto loc_82511138;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
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
	// lwzx r30,r10,r4
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x82511104
	if (!ctx.cr0.eq) goto loc_82511104;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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
	ctx.lr = 0x82511104;
	sub_824E4308(ctx, base);
loc_82511104:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82511120
	if (ctx.cr6.eq) goto loc_82511120;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82511124
	if (!ctx.cr6.eq) goto loc_82511124;
loc_82511120:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82511124:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82511004
	if (ctx.cr0.eq) goto loc_82511004;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824e4368
	ctx.lr = 0x82511138;
	sub_824E4368(ctx, base);
loc_82511138:
	// lwz r10,976(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 976);
	// addi r11,r28,972
	ctx.r11.s64 = r28.s64 + 972;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r31,976(r28)
	REX_STORE_U32(r28.u32 + 976, r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82529918) {
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
	ctx.lr = 0x82529920;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82529950;
	sub_825BB860(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// beq cr6,0x82529974
	if (ctx.cr6.eq) goto loc_82529974;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82529970;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82529974:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8252997C;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// beq cr6,0x825299a0
	if (ctx.cr6.eq) goto loc_825299A0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x8252999C;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_825299A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825299A8;
	sub_8250AD28(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwimi r10,r11,14,15,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bl 0x824ffc30
	ctx.lr = 0x825299D8;
	sub_824FFC30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82530E20) {
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
	ctx.lr = 0x82530E28;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,13
	ctx.r6.s64 = 13;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82530E5C;
	sub_825BB860(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// beq cr6,0x82530e80
	if (ctx.cr6.eq) goto loc_82530E80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82530E7C;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82530E80:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82530E88;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// beq cr6,0x82530eac
	if (ctx.cr6.eq) goto loc_82530EAC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82530EA8;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82530EAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82530EB4;
	sub_8250AD28(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// beq cr6,0x82530ed8
	if (ctx.cr6.eq) goto loc_82530ED8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82530ED4;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82530ED8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82530EE0;
	sub_8250AD28(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r3,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwimi r10,r11,14,15,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bl 0x824ffc30
	ctx.lr = 0x82530F10;
	sub_824FFC30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82542E20) {
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
	ctx.lr = 0x82542E28;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,793
	ctx.r4.s64 = 793;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x8252dd80
	ctx.lr = 0x82542E48;
	sub_8252DD80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82542e70
	if (ctx.cr0.eq) goto loc_82542E70;
	// li r8,0
	ctx.r8.s64 = 0;
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
	// bl 0x82539288
	ctx.lr = 0x82542E6C;
	sub_82539288(ctx, base);
	// b 0x82542e74
	goto loc_82542E74;
loc_82542E70:
	// li r3,3
	ctx.r3.s64 = 3;
loc_82542E74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82549510) {
	REX_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82549360
	sub_82549360(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82549518) {
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
	// b 0x82549584
	goto loc_82549584;
loc_82549538:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_8254953C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825495e0
	if (ctx.cr6.eq) goto loc_825495E0;
	// lwz r31,16(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8254956c
	if (ctx.cr6.eq) goto loc_8254956C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8254956c
	if (ctx.cr0.eq) goto loc_8254956C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r10,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14080
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14080, ctx.xer);
	// beq cr6,0x82549574
	if (ctx.cr6.eq) goto loc_82549574;
loc_8254956C:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8254953c
	goto loc_8254953C;
loc_82549574:
	// rlwinm. r11,r10,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825495e0
	if (!ctx.cr0.eq) goto loc_825495E0;
	// rlwinm. r11,r10,8,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825495e0
	if (ctx.cr0.eq) goto loc_825495E0;
loc_82549584:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82548f78
	ctx.lr = 0x82549590;
	sub_82548F78(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x82549538
	if (!ctx.cr6.eq) goto loc_82549538;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_825495A4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825495e0
	if (ctx.cr6.eq) goto loc_825495E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825495d8
	if (ctx.cr0.eq) goto loc_825495D8;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825495d8
	if (!ctx.cr0.eq) goto loc_825495D8;
	// rlwinm. r11,r11,8,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825495d8
	if (ctx.cr0.eq) goto loc_825495D8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82548f78
	ctx.lr = 0x825495D8;
	sub_82548F78(ctx, base);
loc_825495D8:
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x825495a4
	goto loc_825495A4;
loc_825495E0:
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

DEFINE_REX_FUNC(sub_82550110) {
	REX_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r9,r10,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,16000
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16000, ctx.xer);
	// bne cr6,0x82550160
	if (!ctx.cr6.eq) goto loc_82550160;
	// rlwinm r10,r3,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,148(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 148);
	// lwz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwinm. r10,r10,18,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82550148
	if (!ctx.cr0.eq) goto loc_82550148;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82550148:
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,30,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r3,r11,30
	ctx.r3.u64 = ctx.r11.u32 & 0x3;
	// blr 
	return;
loc_82550160:
	// rlwinm. r10,r10,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lhz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// rlwinm r10,r4,2,16,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFC;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82553778) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r8,r9,12
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r3,r8,16
	ctx.r3.s64 = ctx.r8.s64 + 16;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
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
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825543F8) {
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
	ctx.lr = 0x82554400;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,59
	ctx.r6.s64 = 59;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x8255442C;
	sub_825BB860(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// beq cr6,0x82554450
	if (ctx.cr6.eq) goto loc_82554450;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x8255444C;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82554450:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82554458;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824ffc30
	ctx.lr = 0x82554470;
	sub_824FFC30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82557CC8) {
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
	ctx.lr = 0x82557CD0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r6,11
	ctx.r11.s64 = ctx.r6.s64 + 11;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,28(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r5,11
	ctx.r9.s64 = ctx.r5.s64 + 11;
	// rlwinm r11,r10,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r16,r5
	r16.u64 = ctx.r5.u64;
	// lwzx r10,r8,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwzx r15,r9,r31
	r15.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// mr r14,r7
	r14.u64 = ctx.r7.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x825bb9c8
	ctx.lr = 0x82557D18;
	sub_825BB9C8(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r22,0
	r22.s64 = 0;
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
	// lwz r11,40(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 40);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,18,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82557d8c
	if (ctx.cr0.eq) goto loc_82557D8C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// b 0x82557d80
	goto loc_82557D80;
loc_82557D70:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82557d88
	if (ctx.cr6.eq) goto loc_82557D88;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82557D80:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82557d70
	if (!ctx.cr6.eq) goto loc_82557D70;
loc_82557D88:
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
loc_82557D8C:
	// li r25,0
	r25.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// li r18,0
	r18.s64 = 0;
	// li r20,0
	r20.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// addi r24,r22,8
	r24.s64 = r22.s64 + 8;
	// addi r19,r31,44
	r19.s64 = r31.s64 + 44;
	// addi r21,r30,44
	r21.s64 = r30.s64 + 44;
	// li r17,3
	r17.s64 = 3;
loc_82557DB8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82557e78
	if (!ctx.cr6.lt) goto loc_82557E78;
	// slw r11,r17,r27
	ctx.r11.u64 = r27.u8 & 0x20 ? 0 : (r17.u32 << (r27.u8 & 0x3F));
	// lwzx r4,r19,r29
	ctx.r4.u64 = REX_LOAD_U32(r19.u32 + r29.u32);
	// slw r10,r26,r27
	ctx.r10.u64 = r27.u8 & 0x20 ? 0 : (r26.u32 << (r27.u8 & 0x3F));
	// andc r11,r25,r11
	ctx.r11.u64 = r25.u64 & ~ctx.r11.u64;
	// cmplw cr6,r4,r15
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r15.u32, ctx.xer);
	// or r25,r11,r10
	r25.u64 = ctx.r11.u64 | ctx.r10.u64;
	// beq cr6,0x82557e64
	if (ctx.cr6.eq) goto loc_82557E64;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82557df4
	if (!ctx.cr6.eq) goto loc_82557DF4;
	// mr r18,r26
	r18.u64 = r26.u64;
loc_82557DF4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82557DFC;
	sub_8250AD28(ctx, base);
	// stwx r3,r21,r28
	REX_STORE_U32(r21.u32 + r28.u32, ctx.r3.u32);
	// clrlwi r9,r29,16
	ctx.r9.u64 = r29.u32 & 0xFFFF;
	// li r11,15
	ctx.r11.s64 = 15;
	// slw r11,r11,r28
	ctx.r11.u64 = r28.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r28.u8 & 0x3F));
	// lhz r8,14(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 14);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// srw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// and r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 & ctx.r11.u64;
	// slw r9,r9,r28
	ctx.r9.u64 = r28.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r28.u8 & 0x3F));
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82557e3c
	if (ctx.cr6.eq) goto loc_82557E3C;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// sth r11,14(r30)
	REX_STORE_U16(r30.u32 + 14, ctx.r11.u16);
loc_82557E3C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82557e5c
	if (ctx.cr6.eq) goto loc_82557E5C;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lfd f1,0(r24)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r24.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lfd f2,32(r24)
	ctx.f2.u64 = REX_LOAD_U64(r24.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b99f0
	ctx.lr = 0x82557E5C;
	sub_825B99F0(ctx, base);
loc_82557E5C:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
loc_82557E64:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r24,r24,8
	r24.s64 = r24.s64 + 8;
	// b 0x82557db8
	goto loc_82557DB8;
loc_82557E78:
	// rlwinm r11,r16,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// slw r10,r17,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r17.u32 << (ctx.r11.u8 & 0x3F));
	// slw r11,r18,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r11.u8 & 0x3F));
	// andc r10,r25,r10
	ctx.r10.u64 = r25.u64 & ~ctx.r10.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r14)
	REX_STORE_U32(r14.u32 + 0, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8257C0C0) {
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
	ctx.lr = 0x8257C0C8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r20,1
	r20.s64 = 1;
	// bne 0x8257c1c0
	if (!ctx.cr0.eq) goto loc_8257C1C0;
	// lwz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// lwz r10,40(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// clrlwi r8,r11,13
	ctx.r8.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r8,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r8,27
	ctx.r9.u64 = ctx.r8.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r9,r20,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257c120
	if (ctx.cr0.eq) goto loc_8257C120;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x8257c7b8
	goto loc_8257C7B8;
loc_8257C120:
	// lwz r10,12(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257c13c
	if (ctx.cr6.eq) goto loc_8257C13C;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// bne cr6,0x8257c140
	if (!ctx.cr6.eq) goto loc_8257C140;
loc_8257C13C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257C140:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257c168
	if (!ctx.cr0.eq) goto loc_8257C168;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8257c158
	if (ctx.cr6.eq) goto loc_8257C158;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
loc_8257C158:
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// bne cr6,0x8257c168
	if (!ctx.cr6.eq) goto loc_8257C168;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// b 0x8257c7b8
	goto loc_8257C7B8;
loc_8257C168:
	// lwz r9,8(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257C170:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8257c1b8
	if (ctx.cr6.eq) goto loc_8257C1B8;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r10,r8,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r7,r8,27
	ctx.r7.u64 = ctx.r8.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r7,r20,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r7.u8 & 0x3F));
	// lwz r6,40(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// and. r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8257c1ac
	if (ctx.cr0.eq) goto loc_8257C1AC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8257c1b4
	if (!ctx.cr6.eq) goto loc_8257C1B4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8257C1AC:
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x8257c170
	goto loc_8257C170;
loc_8257C1B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257C1B8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8257c7b8
	if (!ctx.cr6.eq) goto loc_8257C7B8;
loc_8257C1C0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bne cr6,0x8257c1d4
	if (!ctx.cr6.eq) goto loc_8257C1D4;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x824e4368
	ctx.lr = 0x8257C1D4;
	sub_824E4368(ctx, base);
loc_8257C1D4:
	// bl 0x824ffcc0
	ctx.lr = 0x8257C1D8;
	sub_824FFCC0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8257c210
	if (!ctx.cr6.eq) goto loc_8257C210;
	// rlwinm r9,r31,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// b 0x8257c23c
	goto loc_8257C23C;
loc_8257C210:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r25,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFE;
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
loc_8257C23C:
	// lwz r11,20(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8257c410
	if (!ctx.cr0.eq) goto loc_8257C410;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8257c410
	if (ctx.cr0.eq) goto loc_8257C410;
loc_8257C254:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8257c3f4
	if (!ctx.cr6.eq) goto loc_8257C3F4;
	// li r31,0
	r31.s64 = 0;
	// mr r28,r29
	r28.u64 = r29.u64;
loc_8257C26C:
	// lwz r30,0(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8257c3d4
	if (ctx.cr6.eq) goto loc_8257C3D4;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// beq cr6,0x8257c3c0
	if (ctx.cr6.eq) goto loc_8257C3C0;
	// lwz r10,48(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 48);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi r9,r10,13
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r9,r20,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// and. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8257c3c0
	if (ctx.cr0.eq) goto loc_8257C3C0;
	// lwz r10,48(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 48);
	// clrlwi r9,r10,13
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r9,r20,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257c3c0
	if (!ctx.cr0.eq) goto loc_8257C3C0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8257c38c
	if (!ctx.cr6.eq) goto loc_8257C38C;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825bb908
	ctx.lr = 0x8257C2F0;
	sub_825BB908(ctx, base);
	// lwz r11,660(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 660);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257c36c
	if (ctx.cr6.eq) goto loc_8257C36C;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// sth r11,18(r3)
	REX_STORE_U16(ctx.r3.u32 + 18, ctx.r11.u16);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r11,r20,16,13,15
	ctx.r11.u64 = (__builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 16) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r3,660(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257c348
	if (!ctx.cr0.eq) goto loc_8257C348;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257c348
	if (ctx.cr0.eq) goto loc_8257C348;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8257c354
	if (!ctx.cr6.gt) goto loc_8257C354;
loc_8257C348:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x8257C350;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8257C354:
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
loc_8257C36C:
	// lwz r11,40(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 40);
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257c38c
	if (ctx.cr0.eq) goto loc_8257C38C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r10,513
	ctx.r10.s64 = 513;
	// rlwimi r11,r10,24,27,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1E) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE1);
	// rlwimi r11,r10,24,7,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1000000) | (ctx.r11.u64 & 0xFFFFFFFFFEFFFFFF);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8257C38C:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8257c3a0
	goto loc_8257C3A0;
loc_8257C398:
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_8257C3A0:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// bne cr6,0x8257c398
	if (!ctx.cr6.eq) goto loc_8257C398;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r31,16(r30)
	REX_STORE_U32(r30.u32 + 16, r31.u32);
loc_8257C3C0:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8257c26c
	if (!ctx.cr6.eq) goto loc_8257C26C;
	// addi r28,r30,4
	r28.s64 = r30.s64 + 4;
	// b 0x8257c26c
	goto loc_8257C26C;
loc_8257C3D4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8257c3f4
	if (ctx.cr6.eq) goto loc_8257C3F4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8257C3E8;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8257C3F4;
	sub_8250AD28(ctx, base);
loc_8257C3F4:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8257c410
	if (!ctx.cr0.eq) goto loc_8257C410;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8257c254
	if (!ctx.cr6.eq) goto loc_8257C254;
loc_8257C410:
	// addi r24,r23,8
	r24.s64 = r23.s64 + 8;
	// lwz r28,8(r23)
	r28.u64 = REX_LOAD_U32(r23.u32 + 8);
	// li r27,0
	r27.s64 = 0;
	// mr r26,r24
	r26.u64 = r24.u64;
loc_8257C420:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8257c5b4
	if (ctx.cr6.eq) goto loc_8257C5B4;
	// lwz r11,48(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 48);
	// lwz r29,4(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 4);
	// clrlwi r10,r11,13
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 40);
	// slw r10,r20,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8257c59c
	if (ctx.cr0.eq) goto loc_8257C59C;
	// lwz r10,48(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 48);
	// clrlwi r9,r10,13
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r9,r20,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257c59c
	if (!ctx.cr0.eq) goto loc_8257C59C;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// ble cr6,0x8257c490
	if (!ctx.cr6.gt) goto loc_8257C490;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_8257C490:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825c67e8
	ctx.lr = 0x8257C4A0;
	sub_825C67E8(ctx, base);
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257c59c
	if (!ctx.cr0.eq) goto loc_8257C59C;
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r30,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r30.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8257c59c
	if (ctx.cr0.eq) goto loc_8257C59C;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x8257c4f8
	if (ctx.cr6.eq) goto loc_8257C4F8;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x8257c4f8
	if (ctx.cr6.eq) goto loc_8257C4F8;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x8257c4f8
	if (ctx.cr6.eq) goto loc_8257C4F8;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x8257c4f8
	if (ctx.cr6.eq) goto loc_8257C4F8;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x8257c4f8
	if (ctx.cr6.eq) goto loc_8257C4F8;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8257c4fc
	if (!ctx.cr6.eq) goto loc_8257C4FC;
loc_8257C4F8:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_8257C4FC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257c59c
	if (ctx.cr0.eq) goto loc_8257C59C;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x8257C51C;
	sub_824F71B8(ctx, base);
	// addi r11,r30,-16
	ctx.r11.s64 = r30.s64 + -16;
	// add r31,r3,r11
	r31.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// bne cr6,0x8257c534
	if (!ctx.cr6.eq) goto loc_8257C534;
	// stw r25,0(r31)
	REX_STORE_U32(r31.u32 + 0, r25.u32);
loc_8257C534:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10880
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10880, ctx.xer);
	// bne cr6,0x8257c59c
	if (!ctx.cr6.eq) goto loc_8257C59C;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
loc_8257C548:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257c570
	if (ctx.cr6.eq) goto loc_8257C570;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8257c568
	if (ctx.cr6.eq) goto loc_8257C568;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8257c548
	goto loc_8257C548;
loc_8257C568:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// b 0x8257c574
	goto loc_8257C574;
loc_8257C570:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257C574:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257c59c
	if (ctx.cr0.eq) goto loc_8257C59C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824f71b8
	ctx.lr = 0x8257C590;
	sub_824F71B8(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -4);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stwx r25,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, r25.u32);
loc_8257C59C:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x8257c5ac
	if (!ctx.cr6.eq) goto loc_8257C5AC;
	// addi r26,r28,12
	r26.s64 = r28.s64 + 12;
loc_8257C5AC:
	// lwz r28,0(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 0);
	// b 0x8257c420
	goto loc_8257C420;
loc_8257C5B4:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825c69a0
	ctx.lr = 0x8257C5C4;
	sub_825C69A0(ctx, base);
	// stw r27,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r27.u32);
	// lwz r10,76(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 76);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r11,76(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 76);
	// rlwimi r10,r11,0,0,12
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF80000) | (ctx.r10.u64 & 0xFFFFFFFF0007FFFF);
	// stw r10,76(r25)
	REX_STORE_U32(r25.u32 + 76, ctx.r10.u32);
	// bl 0x8257dfd8
	ctx.lr = 0x8257C5E0;
	sub_8257DFD8(ctx, base);
	// lwz r11,48(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 48);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8257c654
	if (ctx.cr0.eq) goto loc_8257C654;
	// lwz r10,48(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 48);
	// lwz r9,76(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 76);
	// rlwimi r11,r10,0,9,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r11.u64 & 0x800000);
	// stw r11,48(r25)
	REX_STORE_U32(r25.u32 + 48, ctx.r11.u32);
	// lwz r11,76(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 76);
	// rlwimi r11,r9,0,10,8
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF) | (ctx.r11.u64 & 0x400000);
	// lwz r10,48(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 48);
	// stw r11,76(r25)
	REX_STORE_U32(r25.u32 + 76, ctx.r11.u32);
	// lwz r9,76(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 76);
	// rlwimi r9,r11,0,9,7
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r9.u64 & 0x800000);
	// stw r9,76(r25)
	REX_STORE_U32(r25.u32 + 76, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,112(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 112);
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
	// stw r9,112(r25)
	REX_STORE_U32(r25.u32 + 112, ctx.r9.u32);
	// lwz r9,76(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 76);
	// rlwimi r9,r11,0,8,6
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF) | (ctx.r9.u64 & 0x1000000);
	// stw r9,76(r25)
	REX_STORE_U32(r25.u32 + 76, ctx.r9.u32);
	// lwz r11,76(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 76);
	// rlwimi r11,r9,0,7,5
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF) | (ctx.r11.u64 & 0x2000000);
	// stw r11,76(r25)
	REX_STORE_U32(r25.u32 + 76, ctx.r11.u32);
	// lwz r11,108(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 108);
	// stw r11,108(r25)
	REX_STORE_U32(r25.u32 + 108, ctx.r11.u32);
	// lwz r11,72(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 72);
	// stw r11,72(r25)
	REX_STORE_U32(r25.u32 + 72, ctx.r11.u32);
	// stw r10,48(r25)
	REX_STORE_U32(r25.u32 + 48, ctx.r10.u32);
loc_8257C654:
	// lwz r11,20(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8257c7b4
	if (!ctx.cr0.eq) goto loc_8257C7B4;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8257c7b4
	if (ctx.cr0.eq) goto loc_8257C7B4;
loc_8257C66C:
	// lwz r31,8(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 8);
loc_8257C670:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8257c798
	if (ctx.cr6.eq) goto loc_8257C798;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8257b1b8
	ctx.lr = 0x8257C690;
	sub_8257B1B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257c6a0
	if (ctx.cr0.eq) goto loc_8257C6A0;
	// lwz r31,12(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 12);
	// b 0x8257c670
	goto loc_8257C670;
loc_8257C6A0:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r28,16(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
loc_8257C6B4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257c734
	if (ctx.cr6.eq) goto loc_8257C734;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r7,40(r21)
	ctx.r7.u64 = REX_LOAD_U32(r21.u32 + 40);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// clrlwi r6,r9,13
	ctx.r6.u64 = ctx.r9.u32 & 0x7FFFF;
	// rlwinm r9,r6,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r6,r6,27
	ctx.r6.u64 = ctx.r6.u32 & 0x1F;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// slw r6,r20,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r6.u8 & 0x3F));
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// and. r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8257c72c
	if (ctx.cr0.eq) goto loc_8257C72C;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8257c724
	if (ctx.cr6.eq) goto loc_8257C724;
	// lwz r9,48(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r7,40(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi r6,r9,13
	ctx.r6.u64 = ctx.r9.u32 & 0x7FFFF;
	// rlwinm r9,r6,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r6,r6,27
	ctx.r6.u64 = ctx.r6.u32 & 0x1F;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// slw r6,r20,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r6.u8 & 0x3F));
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// and. r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8257c72c
	if (ctx.cr0.eq) goto loc_8257C72C;
loc_8257C724:
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_8257C72C:
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8257c6b4
	goto loc_8257C6B4;
loc_8257C734:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8257c7c0
	if (ctx.cr6.eq) goto loc_8257C7C0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8257C748;
	sub_8250AD28(ctx, base);
	// lwz r31,0(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 0);
loc_8257C74C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8257c788
	if (ctx.cr6.eq) goto loc_8257C788;
	// lwz r30,4(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8257b1b8
	ctx.lr = 0x8257C770;
	sub_8257B1B8(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8257c780
	if (ctx.cr6.eq) goto loc_8257C780;
	// lwz r31,12(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 12);
	// b 0x8257c74c
	goto loc_8257C74C;
loc_8257C780:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8257c798
	if (!ctx.cr6.eq) goto loc_8257C798;
loc_8257C788:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250b470
	ctx.lr = 0x8257C798;
	sub_8250B470(ctx, base);
loc_8257C798:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8257c7b4
	if (!ctx.cr0.eq) goto loc_8257C7B4;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8257c66c
	if (!ctx.cr6.eq) goto loc_8257C66C;
loc_8257C7B4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_8257C7B8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_8257C7C0:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824e4368
	ctx.lr = 0x8257C7CC;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_825B3468) {
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
	// lwz r3,2736(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 2736);
	// bl 0x825d79a0
	ctx.lr = 0x825B3484;
	sub_825D79A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,1488(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1488);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B34B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
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

DEFINE_REX_FUNC(sub_825B3B08) {
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
	// addi r11,r4,362
	ctx.r11.s64 = ctx.r4.s64 + 362;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r3
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b3b90
	if (!ctx.cr6.eq) goto loc_825B3B90;
	// lwz r11,1440(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1440);
	// li r4,44
	ctx.r4.s64 = 44;
	// lwz r3,1444(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 1444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B3B48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825b3b88
	if (ctx.cr0.eq) goto loc_825B3B88;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
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
	// stb r11,40(r3)
	REX_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// b 0x825b3b8c
	goto loc_825B3B8C;
loc_825B3B88:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825B3B8C:
	// stwx r10,r30,r31
	REX_STORE_U32(r30.u32 + r31.u32, ctx.r10.u32);
loc_825B3B90:
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

DEFINE_REX_FUNC(sub_825B6AA8) {
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
	// bne cr6,0x825b6ae4
	if (!ctx.cr6.eq) goto loc_825B6AE4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-2432
	ctx.r6.s64 = ctx.r11.s64 + -2432;
	// addi r5,r10,-9704
	ctx.r5.s64 = ctx.r10.s64 + -9704;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,574
	ctx.r7.s64 = 574;
	// bl 0x824ea978
	ctx.lr = 0x825B6AE4;
	sub_824EA978(ctx, base);
loc_825B6AE4:
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
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

DEFINE_REX_FUNC(sub_825B7660) {
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
	ctx.lr = 0x825B7668;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,22852
	r30.s64 = ctx.r11.s64 + 22852;
	// addi r29,r10,-2432
	r29.s64 = ctx.r10.s64 + -2432;
	// bne cr6,0x825b76b4
	if (!ctx.cr6.eq) goto loc_825B76B4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-9704
	ctx.r5.s64 = ctx.r11.s64 + -9704;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,950
	ctx.r7.s64 = 950;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B76B4;
	sub_824EA978(ctx, base);
loc_825B76B4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x825b76d8
	if (!ctx.cr6.eq) goto loc_825B76D8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-10304
	ctx.r5.s64 = ctx.r11.s64 + -10304;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,951
	ctx.r7.s64 = 951;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B76D8;
	sub_824EA978(ctx, base);
loc_825B76D8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f0330
	ctx.lr = 0x825B76E4;
	sub_824F0330(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825b770c
	if (ctx.cr6.eq) goto loc_825B770C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-2072
	ctx.r5.s64 = ctx.r11.s64 + -2072;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,956
	ctx.r7.s64 = 956;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B770C;
	sub_824EA978(ctx, base);
loc_825B770C:
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// bl 0x824effc8
	ctx.lr = 0x825B7714;
	sub_824EFFC8(ctx, base);
	// lwz r4,60(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 60);
	// stw r28,52(r31)
	REX_STORE_U32(r31.u32 + 52, r28.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825b7734
	if (ctx.cr6.eq) goto loc_825B7734;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B7734;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825B7734:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f08f8
	ctx.lr = 0x825B773C;
	sub_824F08F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b74a8
	ctx.lr = 0x825B7748;
	sub_825B74A8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b6da8
	ctx.lr = 0x825B7758;
	sub_825B6DA8(ctx, base);
	// stw r3,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825BAE70) {
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
	ctx.lr = 0x825BAE78;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,16(r5)
	r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// rlwinm. r11,r8,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825baf0c
	if (ctx.cr0.eq) goto loc_825BAF0C;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r10,28(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825baeb8
	if (ctx.cr6.eq) goto loc_825BAEB8;
loc_825BAEB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825bb1d4
	goto loc_825BB1D4;
loc_825BAEB8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825b90a0
	ctx.lr = 0x825BAEC0;
	sub_825B90A0(ctx, base);
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_825BAEC8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825baf0c
	if (ctx.cr6.eq) goto loc_825BAF0C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825baee4
	if (ctx.cr0.eq) goto loc_825BAEE4;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825baeec
	if (!ctx.cr0.eq) goto loc_825BAEEC;
loc_825BAEE4:
	// lwz r29,4(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 4);
	// b 0x825baec8
	goto loc_825BAEC8;
loc_825BAEEC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b90a0
	ctx.lr = 0x825BAEF4;
	sub_825B90A0(ctx, base);
	// subf r11,r3,r28
	ctx.r11.u64 = r28.u64 - ctx.r3.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825baeb0
	if (!ctx.cr6.eq) goto loc_825BAEB0;
loc_825BAF0C:
	// rlwinm. r11,r24,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825baf34
	if (ctx.cr0.eq) goto loc_825BAF34;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// beq cr6,0x825baeb0
	if (ctx.cr6.eq) goto loc_825BAEB0;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r10,28(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825baeb0
	if (!ctx.cr6.eq) goto loc_825BAEB0;
loc_825BAF34:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r29,r11,25,25,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r29,112
	ctx.cr6.compare<uint32_t>(r29.u32, 112, ctx.xer);
	// bne cr6,0x825baf70
	if (!ctx.cr6.eq) goto loc_825BAF70;
	// lwz r11,28(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 28);
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x825baf70
	if (!ctx.cr6.eq) goto loc_825BAF70;
	// lwz r10,28(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 28);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x825baeb0
	if (!ctx.cr6.eq) goto loc_825BAEB0;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// beq cr6,0x825baeb0
	if (ctx.cr6.eq) goto loc_825BAEB0;
loc_825BAF70:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82550640
	ctx.lr = 0x825BAF80;
	sub_82550640(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825baeb0
	if (ctx.cr0.eq) goto loc_825BAEB0;
	// cmplwi cr6,r29,112
	ctx.cr6.compare<uint32_t>(r29.u32, 112, ctx.xer);
	// bne cr6,0x825bb0ac
	if (!ctx.cr6.eq) goto loc_825BB0AC;
	// lwz r4,28(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 28);
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 28);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x825bb0ac
	if (ctx.cr6.eq) goto loc_825BB0AC;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
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
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825baeb0
	if (ctx.cr6.eq) goto loc_825BAEB0;
	// lwz r10,40(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 40);
	// rlwinm. r11,r10,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825baff0
	if (ctx.cr0.eq) goto loc_825BAFF0;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x825bafe4
	if (ctx.cr6.eq) goto loc_825BAFE4;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x825bafe8
	if (!ctx.cr6.eq) goto loc_825BAFE8;
loc_825BAFE4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825BAFE8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825baeb0
	if (!ctx.cr0.eq) goto loc_825BAEB0;
loc_825BAFF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,8(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r11,28,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// srw r11,r25,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r25.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r6,r11,30
	ctx.r6.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r9,14336
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14336, ctx.xer);
	// bne cr6,0x825bb048
	if (!ctx.cr6.eq) goto loc_825BB048;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x825bb048
	if (!ctx.cr6.eq) goto loc_825BB048;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r27.u32, ctx.xer);
	// bne cr6,0x825bb048
	if (!ctx.cr6.eq) goto loc_825BB048;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r11,27,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x825bb048
	if (!ctx.cr6.eq) goto loc_825BB048;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// beq cr6,0x825baeb0
	if (ctx.cr6.eq) goto loc_825BAEB0;
loc_825BB048:
	// rlwinm r8,r10,18,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82549360
	ctx.lr = 0x825BB05C;
	sub_82549360(ctx, base);
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x825baeb0
	if (ctx.cr6.eq) goto loc_825BAEB0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825bb07c
	goto loc_825BB07C;
loc_825BB074:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_825BB07C:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x825bb074
	if (!ctx.cr6.eq) goto loc_825BB074;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r9,57
	ctx.r9.s64 = 57;
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
	// rlwimi r11,r9,7,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// b 0x825bb1cc
	goto loc_825BB1CC;
loc_825BB0AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r24,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// beq 0x825bb0cc
	if (ctx.cr0.eq) goto loc_825BB0CC;
	// rlwinm. r10,r11,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825bb0cc
	if (ctx.cr0.eq) goto loc_825BB0CC;
loc_825BB0C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825bb0f4
	goto loc_825BB0F4;
loc_825BB0CC:
	// rlwinm. r10,r24,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825bb0dc
	if (ctx.cr0.eq) goto loc_825BB0DC;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825bb0c4
	if (!ctx.cr0.eq) goto loc_825BB0C4;
loc_825BB0DC:
	// rlwinm. r10,r24,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825bb0f0
	if (ctx.cr0.eq) goto loc_825BB0F0;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne 0x825bb0f4
	if (!ctx.cr0.eq) goto loc_825BB0F4;
loc_825BB0F0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825BB0F4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825baeb0
	if (ctx.cr0.eq) goto loc_825BAEB0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825bb114
	goto loc_825BB114;
loc_825BB10C:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_825BB114:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x825bb10c
	if (!ctx.cr6.eq) goto loc_825BB10C;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r8,r24,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r27)
	REX_STORE_U32(r27.u32 + 4, r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r9,r9,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// stw r27,12(r31)
	REX_STORE_U32(r31.u32 + 12, r27.u32);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r8,r9,27,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x6;
	// rlwinm r7,r9,29,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x6;
	// srw r8,r25,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r25.u32 >> (ctx.r8.u8 & 0x3F));
	// srw r7,r25,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r25.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r7,r8,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r8,r9,31,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x6;
	// rlwinm r9,r9,1,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x6;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srw r8,r25,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r25.u32 >> (ctx.r8.u8 & 0x3F));
	// srw r9,r25,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r25.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwimi r8,r7,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// rlwimi r9,r8,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// clrlwi r11,r9,27
	ctx.r11.u64 = ctx.r9.u32 & 0x1F;
	// beq 0x825bb19c
	if (ctx.cr0.eq) goto loc_825BB19C;
	// rlwinm. r8,r11,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x825bb19c
	if (ctx.cr0.eq) goto loc_825BB19C;
	// addi r10,r24,-4
	ctx.r10.s64 = r24.s64 + -4;
loc_825BB19C:
	// and r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 & ctx.r11.u64;
	// rlwinm. r8,r8,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x825bb1b0
	if (ctx.cr0.eq) goto loc_825BB1B0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_825BB1B0:
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x825bb1c4
	if (ctx.cr0.eq) goto loc_825BB1C4;
	// rlwinm. r8,r11,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x825bb1c4
	if (ctx.cr0.eq) goto loc_825BB1C4;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_825BB1C4:
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwimi r11,r9,0,0,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r11.u64 & 0xFFFFFFFF0000001F);
loc_825BB1CC:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_825BB1D4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_825D0E50) {
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
	// bl 0x825c6d18
	ctx.lr = 0x825D0E70;
	sub_825C6D18(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d0e80
	if (ctx.cr0.eq) goto loc_825D0E80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x825D0E80;
	sub_8269CE98(ctx, base);
loc_825D0E80:
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

DEFINE_REX_FUNC(sub_825D2948) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825D2950;
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
	// bne cr6,0x825d298c
	if (!ctx.cr6.eq) goto loc_825D298C;
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
	// li r7,1521
	ctx.r7.s64 = 1521;
	// bl 0x824ea978
	ctx.lr = 0x825D298C;
	sub_824EA978(ctx, base);
loc_825D298C:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825D2998;
	sub_824F02C0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x825d29fc
	if (!ctx.cr6.eq) goto loc_825D29FC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825d29bc
	if (ctx.cr6.eq) goto loc_825D29BC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D29BC;
	sub_824F0950(ctx, base);
loc_825D29BC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d29f4
	if (ctx.cr6.eq) goto loc_825D29F4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d29f4
	if (ctx.cr6.eq) goto loc_825D29F4;
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
	// li r6,22
	ctx.r6.s64 = 22;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,88(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// bctrl 
	ctx.lr = 0x825D29F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D29F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d2a54
	goto loc_825D2A54;
loc_825D29FC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825d2a18
	if (ctx.cr6.eq) goto loc_825D2A18;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D2A18;
	sub_824F0950(ctx, base);
loc_825D2A18:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d2a50
	if (ctx.cr6.eq) goto loc_825D2A50;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d2a50
	if (ctx.cr6.eq) goto loc_825D2A50;
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
	// li r6,22
	ctx.r6.s64 = 22;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,88(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// bctrl 
	ctx.lr = 0x825D2A50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D2A50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D2A54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825D58F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,20344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20344);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825D6120) {
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
	ctx.lr = 0x825D6128;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825d6168
	if (!ctx.cr6.eq) goto loc_825D6168;
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
	// li r7,4490
	ctx.r7.s64 = 4490;
	// bl 0x824ea978
	ctx.lr = 0x825D6168;
	sub_824EA978(ctx, base);
loc_825D6168:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,90
	ctx.r4.s64 = 90;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825D6178;
	sub_824F05F0(ctx, base);
	// oris r11,r3,19200
	ctx.r11.u64 = ctx.r3.u64 | 1258291200;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// beq cr6,0x825d61c8
	if (ctx.cr6.eq) goto loc_825D61C8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d61c8
	if (ctx.cr6.eq) goto loc_825D61C8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825d1a98
	ctx.lr = 0x825D619C;
	sub_825D1A98(ctx, base);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5980
	ctx.r4.s64 = ctx.r10.s64 + 5980;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,90
	ctx.r6.s64 = 90;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,360(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 360);
	// bctrl 
	ctx.lr = 0x825D61C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D61C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825DBF80) {
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
	ctx.lr = 0x825DBFB0;
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
	// bl 0x825d2088
	ctx.lr = 0x825DBFCC;
	sub_825D2088(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x825dc004
	if (ctx.cr6.eq) goto loc_825DC004;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x825dc00c
	if (!ctx.cr6.eq) goto loc_825DC00C;
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
	// li r7,1307
	ctx.r7.s64 = 1307;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DC000;
	sub_824EA978(ctx, base);
	// b 0x825dc00c
	goto loc_825DC00C;
loc_825DC004:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d8a70
	ctx.lr = 0x825DC00C;
	sub_825D8A70(ctx, base);
loc_825DC00C:
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

DEFINE_REX_FUNC(sub_825E0670) {
	REX_FUNC_PROLOGUE();
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r10,40(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// lbz r9,48(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 48);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// stw r10,60(r4)
	REX_STORE_U32(ctx.r4.u32 + 60, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,44(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,32(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r8,36(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// stb r10,48(r4)
	REX_STORE_U8(ctx.r4.u32 + 48, ctx.r10.u8);
	// stw r11,56(r4)
	REX_STORE_U32(ctx.r4.u32 + 56, ctx.r11.u32);
	// stw r9,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r9.u32);
	// stw r8,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825E3488) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825E3490;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825e3420
	ctx.lr = 0x825E349C;
	sub_825E3420(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e355c
	if (ctx.cr0.eq) goto loc_825E355C;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r10,r11,-17760
	ctx.r10.s64 = ctx.r11.s64 + -17760;
	// beq cr6,0x825e34e0
	if (ctx.cr6.eq) goto loc_825E34E0;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e34e0
	if (!ctx.cr0.eq) goto loc_825E34E0;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lbzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x825e34e4
	if (!ctx.cr0.eq) goto loc_825E34E4;
loc_825E34E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825E34E4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e355c
	if (ctx.cr0.eq) goto loc_825E355C;
	// lwz r4,236(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 236);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825e3524
	if (ctx.cr6.eq) goto loc_825E3524;
	// lwz r11,228(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e3524
	if (!ctx.cr0.eq) goto loc_825E3524;
	// lwz r11,80(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 80);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x825e3528
	if (!ctx.cr0.eq) goto loc_825E3528;
loc_825E3524:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825E3528:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e355c
	if (ctx.cr0.eq) goto loc_825E355C;
	// lwz r11,952(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 952);
	// lwz r30,2736(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82607f18
	ctx.lr = 0x825E3540;
	sub_82607F18(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82607f18
	ctx.lr = 0x825E3550;
	sub_82607F18(ctx, base);
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r29.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x825e3560
	if (ctx.cr6.eq) goto loc_825E3560;
loc_825E355C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825E3560:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825ECBF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825ECBF8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,56(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r28,80(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r9.s32, ctx.xer);
	// addi r30,r11,22852
	r30.s64 = ctx.r11.s64 + 22852;
	// addi r29,r10,15448
	r29.s64 = ctx.r10.s64 + 15448;
	// blt cr6,0x825ecc3c
	if (ctx.cr6.lt) goto loc_825ECC3C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,15640
	ctx.r5.s64 = ctx.r11.s64 + 15640;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,300
	ctx.r7.s64 = 300;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825ECC3C;
	sub_824EA978(ctx, base);
loc_825ECC3C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825ecc68
	if (ctx.cr6.lt) goto loc_825ECC68;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,15620
	ctx.r5.s64 = ctx.r11.s64 + 15620;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,301
	ctx.r7.s64 = 301;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825ECC68;
	sub_824EA978(ctx, base);
loc_825ECC68:
	// rlwinm r11,r28,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 16) & 0xFFFF0000;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825F1750) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,17288
	ctx.r3.s64 = ctx.r11.s64 + 17288;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825F1820) {
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
	ctx.lr = 0x825F1828;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r18,136(r3)
	r18.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// li r20,0
	r20.s64 = 0;
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825f1acc
	if (ctx.cr6.eq) goto loc_825F1ACC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// li r19,1
	r19.s64 = 1;
	// addi r22,r11,-21368
	r22.s64 = ctx.r11.s64 + -21368;
loc_825F1850:
	// lwz r31,28(r18)
	r31.u64 = REX_LOAD_U32(r18.u32 + 28);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x825f1860
	goto loc_825F1860;
loc_825F185C:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_825F1860:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825f185c
	if (!ctx.cr6.eq) goto loc_825F185C;
	// addi r21,r31,8
	r21.s64 = r31.s64 + 8;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// b 0x825f1a98
	goto loc_825F1A98;
loc_825F1874:
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825f1a8c
	if (ctx.cr0.eq) goto loc_825F1A8C;
	// lwz r11,12(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 12);
	// lwz r11,2724(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2724);
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(r20.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825f1a8c
	if (!ctx.cr6.lt) goto loc_825F1A8C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F18A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r24,0
	r24.s64 = 0;
	// mulli r10,r11,52
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// lwzx r9,r10,r22
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r22.u32);
	// rlwinm. r9,r9,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r23,0
	r23.s64 = 0;
	// beq 0x825f18e8
	if (ctx.cr0.eq) goto loc_825F18E8;
	// addi r9,r22,4
	ctx.r9.s64 = r22.s64 + 4;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825f18e8
	if (ctx.cr6.eq) goto loc_825F18E8;
	// addi r10,r11,-18
	ctx.r10.s64 = ctx.r11.s64 + -18;
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r24,r10,27,31,31
	r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x825f18ec
	goto loc_825F18EC;
loc_825F18E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825F18EC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825f1a8c
	if (ctx.cr0.eq) goto loc_825F1A8C;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825f1a8c
	if (!ctx.cr0.eq) goto loc_825F1A8C;
	// li r29,0
	r29.s64 = 0;
	// li r27,-1
	r27.s64 = -1;
	// li r26,-1
	r26.s64 = -1;
	// li r30,0
	r30.s64 = 0;
loc_825F1910:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F192C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825f193c
	if (!ctx.cr0.eq) goto loc_825F193C;
	// slw r11,r19,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (r19.u32 << (r30.u8 & 0x3F));
	// or r29,r11,r29
	r29.u64 = ctx.r11.u64 | r29.u64;
loc_825F193C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x825f1910
	if (ctx.cr6.lt) goto loc_825F1910;
	// mr r28,r19
	r28.u64 = r19.u64;
	// li r30,0
	r30.s64 = 0;
loc_825F1950:
	// slw r11,r19,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (r19.u32 << (r30.u8 & 0x3F));
	// and. r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825f19fc
	if (ctx.cr0.eq) goto loc_825F19FC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt cr6,0x825f1988
	if (ctx.cr6.lt) goto loc_825F1988;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F1980;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r27,r3
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x825f1a0c
	if (!ctx.cr6.eq) goto loc_825F1A0C;
loc_825F1988:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F19A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(r25.s32, 2, ctx.xer);
	// bne cr6,0x825f19fc
	if (!ctx.cr6.eq) goto loc_825F19FC;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt cr6,0x825f19dc
	if (ctx.cr6.lt) goto loc_825F19DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F19D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r26,r3
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x825f1a0c
	if (!ctx.cr6.eq) goto loc_825F1A0C;
loc_825F19DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F19F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_825F19FC:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x825f1950
	if (ctx.cr6.lt) goto loc_825F1950;
	// b 0x825f1a10
	goto loc_825F1A10;
loc_825F1A0C:
	// li r28,0
	r28.s64 = 0;
loc_825F1A10:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825f1a8c
	if (ctx.cr0.eq) goto loc_825F1A8C;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(r25.s32, 2, ctx.xer);
	// bne cr6,0x825f1a74
	if (!ctx.cr6.eq) goto loc_825F1A74;
	// lwz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 240);
	// lwz r10,236(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 236);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x825f1a50
	if (!ctx.cr6.eq) goto loc_825F1A50;
	// lbz r9,154(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 154);
	// lbz r8,153(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 153);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x825f1a50
	if (!ctx.cr6.eq) goto loc_825F1A50;
	// lbz r9,160(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 160);
	// lbz r8,159(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 159);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825f1a74
	if (ctx.cr6.eq) goto loc_825F1A74;
loc_825F1A50:
	// clrlwi. r9,r24,24
	ctx.r9.u64 = r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825f1a8c
	if (ctx.cr0.eq) goto loc_825F1A8C;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x825f1a8c
	if (!ctx.cr6.eq) goto loc_825F1A8C;
	// lbz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 160);
	// lbz r10,159(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 159);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825f1a8c
	if (!ctx.cr6.eq) goto loc_825F1A8C;
	// mr r23,r19
	r23.u64 = r19.u64;
loc_825F1A74:
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// bl 0x825fa7a8
	ctx.lr = 0x825F1A8C;
	sub_825FA7A8(ctx, base);
loc_825F1A8C:
	// lwz r31,0(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 0);
	// addi r21,r31,8
	r21.s64 = r31.s64 + 8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_825F1A98:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825f1874
	if (!ctx.cr6.eq) goto loc_825F1874;
	// lwz r18,8(r18)
	r18.u64 = REX_LOAD_U32(r18.u32 + 8);
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825f1850
	if (!ctx.cr6.eq) goto loc_825F1850;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x825f1acc
	if (!ctx.cr6.gt) goto loc_825F1ACC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,12(r17)
	ctx.r3.u64 = REX_LOAD_U32(r17.u32 + 12);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r11,17400
	ctx.r4.s64 = ctx.r11.s64 + 17400;
	// bl 0x82130e88
	ctx.lr = 0x825F1ACC;
	sub_82130E88(ctx, base);
loc_825F1ACC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_825FBAC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825FBAD0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,1452(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 1452);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825FBAEC;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// beq 0x825fbb0c
	if (ctx.cr0.eq) goto loc_825FBB0C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825fb5d0
	ctx.lr = 0x825FBB08;
	sub_825FB5D0(ctx, base);
	// b 0x825fbb10
	goto loc_825FBB10;
loc_825FBB0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825FBB10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825FD150) {
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
	// lwz r31,144(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// b 0x825fd218
	goto loc_825FD218;
loc_825FD168:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825fd220
	if (!ctx.cr6.gt) goto loc_825FD220;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825FD18C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825fd220
	if (!ctx.cr0.eq) goto loc_825FD220;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825FD1A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825fd220
	if (!ctx.cr0.eq) goto loc_825FD220;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825FD1C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825fd1d4
	if (ctx.cr0.eq) goto loc_825FD1D4;
	// lwz r31,156(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 156);
	// b 0x825fd218
	goto loc_825FD218;
loc_825FD1D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825FD1E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825fd1f8
	if (ctx.cr0.eq) goto loc_825FD1F8;
	// lwz r31,152(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 152);
	// b 0x825fd218
	goto loc_825FD218;
loc_825FD1F8:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x825fd210
	if (!ctx.cr6.gt) goto loc_825FD210;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825fd214
	goto loc_825FD214;
loc_825FD210:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825FD214:
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_825FD218:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825fd168
	if (!ctx.cr6.eq) goto loc_825FD168;
loc_825FD220:
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

DEFINE_REX_FUNC(sub_8260B2D0) {
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
	ctx.lr = 0x8260B2D8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r25,0
	r25.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// addi r29,r5,8
	r29.s64 = ctx.r5.s64 + 8;
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// mr r26,r25
	r26.u64 = r25.u64;
	// blt 0x8260b35c
	if (ctx.cr0.lt) goto loc_8260B35C;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_8260B304:
	// add r11,r30,r26
	ctx.r11.u64 = r30.u64 + r26.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, ctx.xer);
	// beq cr6,0x8260b33c
	if (ctx.cr6.eq) goto loc_8260B33C;
	// ble cr6,0x8260b32c
	if (!ctx.cr6.gt) goto loc_8260B32C;
	// addi r30,r10,-1
	r30.s64 = ctx.r10.s64 + -1;
	// b 0x8260b330
	goto loc_8260B330;
loc_8260B32C:
	// addi r26,r10,1
	r26.s64 = ctx.r10.s64 + 1;
loc_8260B330:
	// cmpw cr6,r26,r30
	ctx.cr6.compare<int32_t>(r26.s32, r30.s32, ctx.xer);
	// ble cr6,0x8260b304
	if (!ctx.cr6.gt) goto loc_8260B304;
	// b 0x8260b354
	goto loc_8260B354;
loc_8260B33C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8260b088
	ctx.lr = 0x8260B350;
	sub_8260B088(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_8260B354:
	// cmpw cr6,r26,r30
	ctx.cr6.compare<int32_t>(r26.s32, r30.s32, ctx.xer);
	// ble cr6,0x8260b47c
	if (!ctx.cr6.gt) goto loc_8260B47C;
loc_8260B35C:
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x823f02b8
	ctx.lr = 0x8260B368;
	sub_823F02B8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8260b47c
	if (ctx.cr0.eq) goto loc_8260B47C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8260af28
	ctx.lr = 0x8260B380;
	sub_8260AF28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8260b470
	if (ctx.cr0.lt) goto loc_8260B470;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8260b3cc
	if (!ctx.cr6.lt) goto loc_8260B3CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r30,r26,3,0,28
	r30.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r26,r10
	ctx.r10.u64 = ctx.r10.u64 - r26.u64;
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + ctx.r11.u64;
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r4,8
	ctx.r3.s64 = ctx.r4.s64 + 8;
	// bl 0x8269cc20
	ctx.lr = 0x8260B3B4;
	sub_8269CC20(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stwx r28,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r28.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// b 0x8260b43c
	goto loc_8260B43C;
loc_8260B3CC:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x823f02b8
	ctx.lr = 0x8260B3DC;
	sub_823F02B8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x8260b464
	if (ctx.cr0.eq) goto loc_8260B464;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r30,r26,3,0,28
	r30.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bl 0x826a1e70
	ctx.lr = 0x8260B404;
	sub_826A1E70(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r25,r30,r27
	r25.u64 = r30.u64 + r27.u64;
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + ctx.r11.u64;
	// addi r3,r25,8
	ctx.r3.s64 = r25.s64 + 8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r11,r26,r11
	ctx.r11.u64 = ctx.r11.u64 - r26.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x826a1e70
	ctx.lr = 0x8260B424;
	sub_826A1E70(ctx, base);
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x823f0350
	ctx.lr = 0x8260B430;
	sub_823F0350(ctx, base);
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// stwx r28,r30,r27
	REX_STORE_U32(r30.u32 + r27.u32, r28.u32);
	// stw r29,4(r25)
	REX_STORE_U32(r25.u32 + 4, r29.u32);
loc_8260B43C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x8260b088
	ctx.lr = 0x8260B450;
	sub_8260B088(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x8260b47c
	goto loc_8260B47C;
loc_8260B464:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8260b010
	ctx.lr = 0x8260B470;
	sub_8260B010(ctx, base);
loc_8260B470:
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823f0350
	ctx.lr = 0x8260B47C;
	sub_823F0350(ctx, base);
loc_8260B47C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8260b490
	if (ctx.cr6.eq) goto loc_8260B490;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
loc_8260B490:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82614128) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82614130;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x826141bc
	if (ctx.cr6.eq) goto loc_826141BC;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// beq cr6,0x82614188
	if (ctx.cr6.eq) goto loc_82614188;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bne cr6,0x82614168
	if (!ctx.cr6.eq) goto loc_82614168;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82614168:
	// addi r3,r3,-140
	ctx.r3.s64 = ctx.r3.s64 + -140;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826138a0
	ctx.lr = 0x82614174;
	sub_826138A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826141c8
	if (!ctx.cr6.eq) goto loc_826141C8;
	// li r29,4096
	r29.s64 = 4096;
	// b 0x826141c8
	goto loc_826141C8;
loc_82614188:
	// lwz r11,392(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 392);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826141c8
	if (ctx.cr6.eq) goto loc_826141C8;
	// lwz r11,388(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 388);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826141a8
	if (ctx.cr6.eq) goto loc_826141A8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x826141ac
	goto loc_826141AC;
loc_826141A8:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_826141AC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x826141c8
	goto loc_826141C8;
loc_826141BC:
	// addi r3,r3,-140
	ctx.r3.s64 = ctx.r3.s64 + -140;
	// bl 0x826140a8
	ctx.lr = 0x826141C4;
	sub_826140A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_826141C8:
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826173C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826173D0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826173F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// addi r29,r30,28
	r29.s64 = r30.s64 + 28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261740C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r3,76(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 76);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82628b88
	ctx.lr = 0x8261741C;
	sub_82628B88(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82616fa8
	ctx.lr = 0x82617428;
	sub_82616FA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261743C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,72(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 72);
	// bl 0x82626820
	ctx.lr = 0x82617448;
	sub_82626820(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261745C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8261746c
	if (!ctx.cr6.eq) goto loc_8261746C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,384(r30)
	REX_STORE_U32(r30.u32 + 384, ctx.r11.u32);
loc_8261746C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82617484;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8264c3d0
	ctx.lr = 0x82617488;
	sub_8264C3D0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261749C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826174B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8261E068) {
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
	ctx.lr = 0x8261E070;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,704(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 704);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r28,16(r4)
	r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// ld r29,24(r4)
	r29.u64 = REX_LOAD_U64(ctx.r4.u32 + 24);
	// li r27,1
	r27.s64 = 1;
	// lwz r25,32(r4)
	r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r26,8(r4)
	r26.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// beq cr6,0x8261e0c4
	if (ctx.cr6.eq) goto loc_8261E0C4;
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8261e0c4
	if (!ctx.cr6.eq) goto loc_8261E0C4;
	// lwz r11,696(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8261e0c4
	if (!ctx.cr6.eq) goto loc_8261E0C4;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x8261e13c
	if (ctx.cr6.eq) goto loc_8261E13C;
	// bl 0x8261df08
	ctx.lr = 0x8261E0C0;
	sub_8261DF08(ctx, base);
	// stw r27,696(r31)
	REX_STORE_U32(r31.u32 + 696, r27.u32);
loc_8261E0C4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x8261e13c
	if (ctx.cr6.eq) goto loc_8261E13C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x8261e13c
	if (ctx.cr6.eq) goto loc_8261E13C;
	// lhz r11,154(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 154);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8261e0ec
	if (!ctx.cr6.gt) goto loc_8261E0EC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,154(r31)
	REX_STORE_U16(r31.u32 + 154, ctx.r11.u16);
loc_8261E0EC:
	// ld r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 168);
	// cmpd cr6,r11,r29
	ctx.cr6.compare<int64_t>(ctx.r11.s64, r29.s64, ctx.xer);
	// beq cr6,0x8261e13c
	if (ctx.cr6.eq) goto loc_8261E13C;
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8261e114
	if (!ctx.cr6.eq) goto loc_8261E114;
	// std r29,168(r31)
	REX_STORE_U64(r31.u32 + 168, r29.u64);
	// stw r27,156(r31)
	REX_STORE_U32(r31.u32 + 156, r27.u32);
	// sth r27,154(r31)
	REX_STORE_U16(r31.u32 + 154, r27.u16);
	// b 0x8261e13c
	goto loc_8261E13C;
loc_8261E114:
	// lhz r11,154(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 154);
	// std r29,176(r31)
	REX_STORE_U64(r31.u32 + 176, r29.u64);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,154(r31)
	REX_STORE_U16(r31.u32 + 154, ctx.r9.u16);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8261e13c
	if (ctx.cr6.eq) goto loc_8261E13C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
	// sth r11,154(r31)
	REX_STORE_U16(r31.u32 + 154, ctx.r11.u16);
loc_8261E13C:
	// lwz r11,704(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261e158
	if (ctx.cr6.eq) goto loc_8261E158;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x8261e158
	if (ctx.cr6.eq) goto loc_8261E158;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x826385e8
	ctx.lr = 0x8261E158;
	sub_826385E8(ctx, base);
loc_8261E158:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r29,r31,224
	r29.s64 = r31.s64 + 224;
	// lwz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r8,704(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 704);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r7,12(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r6,8(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r9,60(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// beq cr6,0x8261e190
	if (ctx.cr6.eq) goto loc_8261E190;
	// bl 0x826e58a8
	ctx.lr = 0x8261E18C;
	sub_826E58A8(ctx, base);
	// b 0x8261e194
	goto loc_8261E194;
loc_8261E190:
	// bl 0x82638be8
	ctx.lr = 0x8261E194;
	sub_82638BE8(ctx, base);
loc_8261E194:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8261e1fc
	if (ctx.cr6.lt) goto loc_8261E1FC;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x8261e1b4
	if (!ctx.cr6.eq) goto loc_8261E1B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// stw r27,696(r31)
	REX_STORE_U32(r31.u32 + 696, r27.u32);
loc_8261E1B4:
	// lwz r11,704(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261e1fc
	if (ctx.cr6.eq) goto loc_8261E1FC;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x8261e1e0
	if (!ctx.cr6.eq) goto loc_8261E1E0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x8261e1fc
	if (ctx.cr6.eq) goto loc_8261E1FC;
loc_8261E1D0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_8261E1E0:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x8261e1fc
	if (ctx.cr6.eq) goto loc_8261E1FC;
	// cmpwi cr6,r25,8
	ctx.cr6.compare<int32_t>(r25.s32, 8, ctx.xer);
	// bge cr6,0x8261e1d0
	if (!ctx.cr6.lt) goto loc_8261E1D0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82638ef0
	ctx.lr = 0x8261E1FC;
	sub_82638EF0(ctx, base);
loc_8261E1FC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8262B550) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-30569
	ctx.r9.s64 = -2003369984;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// lwz r11,1048(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1048);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8262b594
	if (ctx.cr0.eq) goto loc_8262B594;
	// lhz r11,2(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// lhz r8,2(r5)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + 2);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8262b594
	if (ctx.cr6.eq) goto loc_8262B594;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8262b594
	if (ctx.cr6.eq) goto loc_8262B594;
	// sth r11,2(r5)
	REX_STORE_U16(ctx.r5.u32 + 2, ctx.r11.u16);
loc_8262B594:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,1048(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1048);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8262b5c4
	if (ctx.cr0.eq) goto loc_8262B5C4;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8262b5c4
	if (ctx.cr6.eq) goto loc_8262B5C4;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8262b5c4
	if (ctx.cr6.eq) goto loc_8262B5C4;
	// stw r11,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
loc_8262B5C4:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,1048(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1048);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lhz r11,14(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 14);
	// lhz r10,14(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 14);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8262b5f8
	if (ctx.cr6.eq) goto loc_8262B5F8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8262b5f8
	if (ctx.cr6.eq) goto loc_8262B5F8;
	// sth r11,14(r5)
	REX_STORE_U16(ctx.r5.u32 + 14, ctx.r11.u16);
loc_8262B5F8:
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// lhz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// bne cr6,0x8262b630
	if (!ctx.cr6.eq) goto loc_8262B630;
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// bne cr6,0x8262b618
	if (!ctx.cr6.eq) goto loc_8262B618;
	// lhz r11,18(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 18);
	// b 0x8262b63c
	goto loc_8262B63C;
loc_8262B618:
	// lhz r11,18(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 18);
	// lhz r10,14(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 14);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
loc_8262B630:
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lhz r11,14(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 14);
loc_8262B63C:
	// lhz r10,18(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 18);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// sth r11,18(r5)
	REX_STORE_U16(ctx.r5.u32 + 18, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82636478) {
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
	// li r3,824
	ctx.r3.s64 = 824;
	// bl 0x826e07e0
	ctx.lr = 0x82636490;
	sub_826E07E0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826364b0
	if (!ctx.cr6.eq) goto loc_826364B0;
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
loc_826364B0:
	// li r5,824
	ctx.r5.s64 = 824;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a2e60
	ctx.lr = 0x826364C0;
	sub_826A2E60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// li r7,9
	ctx.r7.s64 = 9;
	// sth r10,110(r31)
	REX_STORE_U16(r31.u32 + 110, ctx.r10.u16);
	// li r6,511
	ctx.r6.s64 = 511;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// li r4,61
	ctx.r4.s64 = 61;
	// lfs f0,3716(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// lfs f13,10592(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 10592);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stfs f0,300(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 300, temp.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stfs f13,292(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 292, temp.u32);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// sth r11,28(r31)
	REX_STORE_U16(r31.u32 + 28, ctx.r11.u16);
	// sth r11,30(r31)
	REX_STORE_U16(r31.u32 + 30, ctx.r11.u16);
	// sth r11,32(r31)
	REX_STORE_U16(r31.u32 + 32, ctx.r11.u16);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r7,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r7.u32);
	// stw r6,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r6.u32);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// sth r11,34(r31)
	REX_STORE_U16(r31.u32 + 34, ctx.r11.u16);
	// stw r5,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r5.u32);
	// stw r4,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r4.u32);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// sth r3,108(r31)
	REX_STORE_U16(r31.u32 + 108, ctx.r3.u16);
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
	// stw r11,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
	// stw r11,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
	// stw r11,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r11.u32);
	// stw r11,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r11.u32);
	// stw r11,656(r31)
	REX_STORE_U32(r31.u32 + 656, ctx.r11.u32);
	// stw r11,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r11.u32);
	// stb r11,200(r31)
	REX_STORE_U8(r31.u32 + 200, ctx.r11.u8);
	// stw r11,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r11.u32);
	// sth r11,210(r31)
	REX_STORE_U16(r31.u32 + 210, ctx.r11.u16);
	// stw r11,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r11.u32);
	// stw r11,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r11.u32);
	// stw r11,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r11.u32);
	// sth r11,202(r31)
	REX_STORE_U16(r31.u32 + 202, ctx.r11.u16);
	// stw r11,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r11.u32);
	// stw r10,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r10.u32);
	// stw r11,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r11.u32);
	// stw r11,236(r31)
	REX_STORE_U32(r31.u32 + 236, ctx.r11.u32);
	// stw r11,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r11.u32);
	// stw r11,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r11.u32);
	// stw r11,248(r31)
	REX_STORE_U32(r31.u32 + 248, ctx.r11.u32);
	// stw r11,252(r31)
	REX_STORE_U32(r31.u32 + 252, ctx.r11.u32);
	// stw r11,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// stw r11,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r11.u32);
	// stw r11,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r11.u32);
	// stw r11,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r11.u32);
	// stw r9,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r9.u32);
	// stfs f0,396(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 396, temp.u32);
	// stw r11,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r11.u32);
	// lis r8,-32155
	ctx.r8.s64 = -2107310080;
	// stw r11,784(r31)
	REX_STORE_U32(r31.u32 + 784, ctx.r11.u32);
	// lis r7,-32146
	ctx.r7.s64 = -2106720256;
	// stw r11,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r11.u32);
	// addi r6,r8,-31448
	ctx.r6.s64 = ctx.r8.s64 + -31448;
	// stw r11,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r11.u32);
	// lis r5,-32155
	ctx.r5.s64 = -2107310080;
	// stw r11,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r11.u32);
	// addi r4,r7,8504
	ctx.r4.s64 = ctx.r7.s64 + 8504;
	// stw r11,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r11.u32);
	// lis r3,-32155
	ctx.r3.s64 = -2107310080;
	// stw r11,308(r31)
	REX_STORE_U32(r31.u32 + 308, ctx.r11.u32);
	// addi r9,r5,-26376
	ctx.r9.s64 = ctx.r5.s64 + -26376;
	// stw r11,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r11.u32);
	// addi r8,r3,-27568
	ctx.r8.s64 = ctx.r3.s64 + -27568;
	// stw r11,316(r31)
	REX_STORE_U32(r31.u32 + 316, ctx.r11.u32);
	// stw r11,320(r31)
	REX_STORE_U32(r31.u32 + 320, ctx.r11.u32);
	// stw r11,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r11.u32);
	// stw r11,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r11.u32);
	// stw r11,332(r31)
	REX_STORE_U32(r31.u32 + 332, ctx.r11.u32);
	// stw r11,336(r31)
	REX_STORE_U32(r31.u32 + 336, ctx.r11.u32);
	// stw r11,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r11.u32);
	// stw r11,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r11.u32);
	// stw r11,348(r31)
	REX_STORE_U32(r31.u32 + 348, ctx.r11.u32);
	// stw r11,352(r31)
	REX_STORE_U32(r31.u32 + 352, ctx.r11.u32);
	// stw r11,356(r31)
	REX_STORE_U32(r31.u32 + 356, ctx.r11.u32);
	// stw r11,360(r31)
	REX_STORE_U32(r31.u32 + 360, ctx.r11.u32);
	// stw r11,364(r31)
	REX_STORE_U32(r31.u32 + 364, ctx.r11.u32);
	// stw r11,368(r31)
	REX_STORE_U32(r31.u32 + 368, ctx.r11.u32);
	// stw r11,372(r31)
	REX_STORE_U32(r31.u32 + 372, ctx.r11.u32);
	// stw r11,376(r31)
	REX_STORE_U32(r31.u32 + 376, ctx.r11.u32);
	// stw r11,380(r31)
	REX_STORE_U32(r31.u32 + 380, ctx.r11.u32);
	// stw r11,388(r31)
	REX_STORE_U32(r31.u32 + 388, ctx.r11.u32);
	// stw r11,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r11.u32);
	// stw r11,400(r31)
	REX_STORE_U32(r31.u32 + 400, ctx.r11.u32);
	// stw r11,404(r31)
	REX_STORE_U32(r31.u32 + 404, ctx.r11.u32);
	// stw r10,408(r31)
	REX_STORE_U32(r31.u32 + 408, ctx.r10.u32);
	// stw r11,412(r31)
	REX_STORE_U32(r31.u32 + 412, ctx.r11.u32);
	// stw r11,416(r31)
	REX_STORE_U32(r31.u32 + 416, ctx.r11.u32);
	// stw r11,420(r31)
	REX_STORE_U32(r31.u32 + 420, ctx.r11.u32);
	// stw r11,424(r31)
	REX_STORE_U32(r31.u32 + 424, ctx.r11.u32);
	// stw r11,428(r31)
	REX_STORE_U32(r31.u32 + 428, ctx.r11.u32);
	// stw r11,432(r31)
	REX_STORE_U32(r31.u32 + 432, ctx.r11.u32);
	// stw r11,436(r31)
	REX_STORE_U32(r31.u32 + 436, ctx.r11.u32);
	// stw r11,440(r31)
	REX_STORE_U32(r31.u32 + 440, ctx.r11.u32);
	// stw r11,444(r31)
	REX_STORE_U32(r31.u32 + 444, ctx.r11.u32);
	// stw r11,448(r31)
	REX_STORE_U32(r31.u32 + 448, ctx.r11.u32);
	// stw r11,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r11.u32);
	// stw r11,456(r31)
	REX_STORE_U32(r31.u32 + 456, ctx.r11.u32);
	// stw r11,460(r31)
	REX_STORE_U32(r31.u32 + 460, ctx.r11.u32);
	// stw r11,464(r31)
	REX_STORE_U32(r31.u32 + 464, ctx.r11.u32);
	// stw r11,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r11.u32);
	// stw r11,472(r31)
	REX_STORE_U32(r31.u32 + 472, ctx.r11.u32);
	// stw r6,476(r31)
	REX_STORE_U32(r31.u32 + 476, ctx.r6.u32);
	// stw r11,480(r31)
	REX_STORE_U32(r31.u32 + 480, ctx.r11.u32);
	// stw r11,484(r31)
	REX_STORE_U32(r31.u32 + 484, ctx.r11.u32);
	// stw r4,488(r31)
	REX_STORE_U32(r31.u32 + 488, ctx.r4.u32);
	// stw r11,492(r31)
	REX_STORE_U32(r31.u32 + 492, ctx.r11.u32);
	// stw r9,496(r31)
	REX_STORE_U32(r31.u32 + 496, ctx.r9.u32);
	// stw r8,516(r31)
	REX_STORE_U32(r31.u32 + 516, ctx.r8.u32);
	// stw r11,520(r31)
	REX_STORE_U32(r31.u32 + 520, ctx.r11.u32);
	// stw r11,524(r31)
	REX_STORE_U32(r31.u32 + 524, ctx.r11.u32);
	// stw r11,540(r31)
	REX_STORE_U32(r31.u32 + 540, ctx.r11.u32);
	// stw r11,544(r31)
	REX_STORE_U32(r31.u32 + 544, ctx.r11.u32);
	// stw r11,548(r31)
	REX_STORE_U32(r31.u32 + 548, ctx.r11.u32);
	// stw r11,552(r31)
	REX_STORE_U32(r31.u32 + 552, ctx.r11.u32);
	// stw r11,556(r31)
	REX_STORE_U32(r31.u32 + 556, ctx.r11.u32);
	// stw r11,560(r31)
	REX_STORE_U32(r31.u32 + 560, ctx.r11.u32);
	// stw r11,564(r31)
	REX_STORE_U32(r31.u32 + 564, ctx.r11.u32);
	// stb r11,201(r31)
	REX_STORE_U8(r31.u32 + 201, ctx.r11.u8);
	// stw r11,568(r31)
	REX_STORE_U32(r31.u32 + 568, ctx.r11.u32);
	// stw r11,572(r31)
	REX_STORE_U32(r31.u32 + 572, ctx.r11.u32);
	// stw r11,576(r31)
	REX_STORE_U32(r31.u32 + 576, ctx.r11.u32);
	// sth r11,580(r31)
	REX_STORE_U16(r31.u32 + 580, ctx.r11.u16);
	// stw r11,584(r31)
	REX_STORE_U32(r31.u32 + 584, ctx.r11.u32);
	// stw r11,588(r31)
	REX_STORE_U32(r31.u32 + 588, ctx.r11.u32);
	// stw r11,600(r31)
	REX_STORE_U32(r31.u32 + 600, ctx.r11.u32);
	// stw r11,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r11.u32);
	// stw r11,596(r31)
	REX_STORE_U32(r31.u32 + 596, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,608(r31)
	REX_STORE_U32(r31.u32 + 608, ctx.r11.u32);
	// stw r11,624(r31)
	REX_STORE_U32(r31.u32 + 624, ctx.r11.u32);
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82646938) {
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
	ctx.lr = 0x82646940;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82646b4c
	if (ctx.cr6.eq) goto loc_82646B4C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82646b4c
	if (ctx.cr6.eq) goto loc_82646B4C;
	// rlwinm r31,r4,30,2,31
	r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82646b44
	if (ctx.cr6.eq) goto loc_82646B44;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// clrlwi r27,r7,16
	r27.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r6,r3,-4
	ctx.r6.s64 = ctx.r3.s64 + -4;
	// li r28,1
	r28.s64 = 1;
	// lfd f0,-31200(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -31200);
	// li r29,128
	r29.s64 = 128;
	// addi r30,r11,-26936
	r30.s64 = ctx.r11.s64 + -26936;
loc_82646980:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(r31.u32, r27.u32, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// blt cr6,0x82646990
	if (ctx.cr6.lt) goto loc_82646990;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_82646990:
	// stb r28,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, r28.u8);
	// addic. r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sthu r29,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U16(ea, r29.u16);
	ctx.r5.u32 = ea;
	// lfs f13,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// subf r31,r11,r31
	r31.u64 = r31.u64 - ctx.r11.u64;
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f11.u64);
	// lwz r9,-60(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// beq 0x826469e4
	if (ctx.cr0.eq) goto loc_826469E4;
	// lfs f13,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f11.u64);
	// lwz r3,-60(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// b 0x826469e8
	goto loc_826469E8;
loc_826469E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826469E8:
	// sth r3,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r3.u16);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// beq cr6,0x82646b3c
	if (ctx.cr6.eq) goto loc_82646B3C;
loc_826469FC:
	// lfs f13,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f11.u64);
	// lwz r9,-60(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// divw r4,r8,r10
	ctx.r4.u64 = uint32_t((ctx.r10.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r8.s32 / ctx.r10.s32 : 0);
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// ble cr6,0x82646a38
	if (!ctx.cr6.gt) goto loc_82646A38;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x82646a44
	goto loc_82646A44;
loc_82646A38:
	// cmpwi cr6,r4,-8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -8, ctx.xer);
	// bge cr6,0x82646a44
	if (!ctx.cr6.lt) goto loc_82646A44;
	// li r4,-8
	ctx.r4.s64 = -8;
loc_82646A44:
	// mullw r9,r4,r10
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x82646a5c
	if (!ctx.cr6.gt) goto loc_82646A5C;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x82646a68
	goto loc_82646A68;
loc_82646A5C:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x82646a68
	if (!ctx.cr6.lt) goto loc_82646A68;
	// li r11,-32768
	ctx.r11.s64 = -32768;
loc_82646A68:
	// rlwinm r9,r4,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// lwzx r8,r9,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r30.u32);
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// bge cr6,0x82646a84
	if (!ctx.cr6.lt) goto loc_82646A84;
	// li r10,16
	ctx.r10.s64 = 16;
loc_82646A84:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82646b24
	if (ctx.cr6.eq) goto loc_82646B24;
	// lfsu f13,4(r6)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r6.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r6.u32 = ea;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * ctx.f0.f64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f12.u64);
	// lwz r8,-60(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// divw r11,r11,r10
	ctx.r11.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x82646acc
	if (!ctx.cr6.gt) goto loc_82646ACC;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82646ad8
	goto loc_82646AD8;
loc_82646ACC:
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x82646ad8
	if (!ctx.cr6.lt) goto loc_82646AD8;
	// li r11,-8
	ctx.r11.s64 = -8;
loc_82646AD8:
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpwi cr6,r8,32767
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32767, ctx.xer);
	// ble cr6,0x82646af0
	if (!ctx.cr6.gt) goto loc_82646AF0;
	// li r8,32767
	ctx.r8.s64 = 32767;
	// b 0x82646afc
	goto loc_82646AFC;
loc_82646AF0:
	// cmpwi cr6,r8,-32768
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -32768, ctx.xer);
	// bge cr6,0x82646afc
	if (!ctx.cr6.lt) goto loc_82646AFC;
	// li r8,-32768
	ctx.r8.s64 = -32768;
loc_82646AFC:
	// rlwinm r9,r11,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// lwzx r9,r9,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r30.u32);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// bge cr6,0x82646b18
	if (!ctx.cr6.lt) goto loc_82646B18;
	// li r10,16
	ctx.r10.s64 = 16;
loc_82646B18:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// b 0x82646b28
	goto loc_82646B28;
loc_82646B24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82646B28:
	// rlwimi r11,r4,4,0,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stb r11,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bne cr6,0x826469fc
	if (!ctx.cr6.eq) goto loc_826469FC;
loc_82646B3C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82646980
	if (!ctx.cr6.eq) goto loc_82646980;
loc_82646B44:
	// subf r3,r26,r5
	ctx.r3.u64 = ctx.r5.u64 - r26.u64;
	// b 0x826a1d00
	return;
loc_82646B4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82652930) {
	REX_FUNC_PROLOGUE();
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r3,380
	ctx.r11.s64 = ctx.r3.s64 + 380;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8265293C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82652974
	if (ctx.cr6.eq) goto loc_82652974;
	// lwz r9,396(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 396);
	// rlwinm r9,r9,0,19,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r9,396(r10)
	REX_STORE_U32(ctx.r10.u32 + 396, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,396(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 396);
	// rlwinm r9,r9,0,20,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r9,396(r10)
	REX_STORE_U32(ctx.r10.u32 + 396, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,396(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 396);
	// rlwinm r9,r9,0,21,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// stw r9,396(r10)
	REX_STORE_U32(ctx.r10.u32 + 396, ctx.r9.u32);
loc_82652974:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8265293c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265293C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826558C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826558C8;
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
	// beq cr6,0x82655900
	if (ctx.cr6.eq) goto loc_82655900;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// addi r10,r10,22024
	ctx.r10.s64 = ctx.r10.s64 + 22024;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826558f8
	if (ctx.cr6.eq) goto loc_826558F8;
	// lwz r11,740(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 740);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,740(r3)
	REX_STORE_U32(ctx.r3.u32 + 740, ctx.r11.u32);
loc_826558F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82655a18
	goto loc_82655A18;
loc_82655900:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82655a08
	if (ctx.cr6.eq) goto loc_82655A08;
	// lwz r9,740(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 740);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// addi r10,r31,380
	ctx.r10.s64 = r31.s64 + 380;
	// rlwinm r4,r9,21,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0x1;
loc_82655920:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82655940
	if (!ctx.cr6.eq) goto loc_82655940;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82655920
	if (ctx.cr6.lt) goto loc_82655920;
	// b 0x82655958
	goto loc_82655958;
loc_82655940:
	// addi r11,r11,95
	ctx.r11.s64 = ctx.r11.s64 + 95;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,396(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm r11,r11,4,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// or r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 | ctx.r4.u64;
loc_82655958:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264ffb8
	ctx.lr = 0x82655960;
	sub_8264FFB8(ctx, base);
	// lbz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 168);
	// lbz r10,172(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 172);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82655994
	if (!ctx.cr6.eq) goto loc_82655994;
	// lbz r10,173(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 173);
	// lbz r9,169(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 169);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82655994
	if (!ctx.cr6.eq) goto loc_82655994;
	// lwz r10,176(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82655a08
	if (ctx.cr6.eq) goto loc_82655A08;
loc_82655994:
	// lbz r10,169(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 169);
	// addi r30,r31,200
	r30.s64 = r31.s64 + 200;
	// stw r4,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r4.u32);
	// stb r11,172(r31)
	REX_STORE_U8(r31.u32 + 172, ctx.r11.u8);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stb r10,173(r31)
	REX_STORE_U8(r31.u32 + 173, ctx.r10.u8);
	// std r29,200(r31)
	REX_STORE_U64(r31.u32 + 200, r29.u64);
	// std r29,208(r31)
	REX_STORE_U64(r31.u32 + 208, r29.u64);
	// std r29,216(r31)
	REX_STORE_U64(r31.u32 + 216, r29.u64);
	// stw r29,224(r31)
	REX_STORE_U32(r31.u32 + 224, r29.u32);
	// lbz r6,169(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 169);
	// lbz r5,168(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 168);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x8264dbc8
	ctx.lr = 0x826559CC;
	sub_8264DBC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826559f8
	if (ctx.cr0.eq) goto loc_826559F8;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x826559f8
	if (ctx.cr6.eq) goto loc_826559F8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ede70
	ctx.lr = 0x826559E4;
	sub_823EDE70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82655a18
	if (ctx.cr0.lt) goto loc_82655A18;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82655a18
	goto loc_82655A18;
loc_826559F8:
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r11,r11,-27872
	ctx.r11.s64 = ctx.r11.s64 + -27872;
	// stw r11,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r11.u32);
	// b 0x82655a14
	goto loc_82655A14;
loc_82655A08:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82659320
	ctx.lr = 0x82655A14;
	sub_82659320(ctx, base);
loc_82655A14:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82655A18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8265E040) {
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
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,34464
	ctx.r10.u64 = ctx.r10.u64 | 34464;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8265e0f0
	if (ctx.cr6.gt) goto loc_8265E0F0;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8264e218
	ctx.lr = 0x8265E098;
	sub_8264E218(ctx, base);
	// cmplwi cr6,r3,122
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 122, ctx.xer);
	// beq cr6,0x8265e0bc
	if (ctx.cr6.eq) goto loc_8265E0BC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265e0c8
	if (ctx.cr6.eq) goto loc_8265E0C8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8265e0f8
	if (!ctx.cr6.gt) goto loc_8265E0F8;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// b 0x8265e0f8
	goto loc_8265E0F8;
loc_8265E0BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265e0d4
	if (!ctx.cr6.eq) goto loc_8265E0D4;
loc_8265E0C8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8265e0f8
	goto loc_8265E0F8;
loc_8265E0D4:
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// lis r9,-32761
	ctx.r9.s64 = -2147024896;
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// ori r10,r9,14
	ctx.r10.u64 = ctx.r9.u64 | 14;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8265e0f8
	goto loc_8265E0F8;
loc_8265E0F0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_8265E0F8:
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

DEFINE_REX_FUNC(sub_82661750) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82661758;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 9, ctx.xer);
	// bge cr6,0x82661778
	if (!ctx.cr6.lt) goto loc_82661778;
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4106
	ctx.r3.u64 = ctx.r3.u64 | 4106;
	// b 0x826617cc
	goto loc_826617CC;
loc_82661778:
	// lwz r30,1(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1);
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r6,5(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 5);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82674e00
	ctx.lr = 0x82661794;
	sub_82674E00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826617cc
	if (!ctx.cr0.eq) goto loc_826617CC;
	// lhz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 68);
	// rlwinm r11,r10,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x826617bc
	if (ctx.cr6.lt) goto loc_826617BC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x826617cc
	if (!ctx.cr6.eq) goto loc_826617CC;
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826617cc
	if (!ctx.cr0.eq) goto loc_826617CC;
loc_826617BC:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,60(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 60);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826752d0
	ctx.lr = 0x826617CC;
	sub_826752D0(ctx, base);
loc_826617CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82664E60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82664E68;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r6)
	r30.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 12);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// clrlwi r7,r10,8
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFFFF;
	// beq 0x82664edc
	if (ctx.cr0.eq) goto loc_82664EDC;
	// lis r8,255
	ctx.r8.s64 = 16711680;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r8,r8,65534
	ctx.r8.u64 = ctx.r8.u64 | 65534;
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// bne cr6,0x82664eac
	if (!ctx.cr6.eq) goto loc_82664EAC;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_82664EAC:
	// subfic r7,r11,127
	ctx.xer.ca = ctx.r11.u32 <= 127;
	ctx.r7.u64 = static_cast<uint64_t>(127) - ctx.r11.u64;
	// subfic r6,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r6.u64 = static_cast<uint64_t>(-1) - ctx.r11.u64;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// rlwinm r7,r7,18,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0xFFFC0000;
	// rlwinm r6,r6,25,0,6
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 25) & 0xFE000000;
	// ori r5,r5,65534
	ctx.r5.u64 = ctx.r5.u64 | 65534;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// subf r8,r8,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r8.u64;
	// rlwinm r10,r10,18,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x20000;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// b 0x82664efc
	goto loc_82664EFC;
loc_82664EDC:
	// lwz r8,200(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 200);
	// rlwinm r10,r10,19,14,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x3F800;
	// lwz r6,60(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r8,r8,25,0,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0xFE000000;
	// rlwinm r7,r6,18,6,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0x3FC0000;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
loc_82664EFC:
	// lwz r8,164(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 164);
	// li r7,68
	ctx.r7.s64 = 68;
	// lwz r6,160(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 160);
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r7,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r7.u32);
	// addi r3,r31,312
	ctx.r3.s64 = r31.s64 + 312;
	// stw r5,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r5.u32);
	// addi r4,r30,36
	ctx.r4.s64 = r30.s64 + 36;
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r8,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r8.u32);
	// addi r29,r31,268
	r29.s64 = r31.s64 + 268;
	// stw r6,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r6.u32);
	// lwz r8,60(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// stw r8,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r8.u32);
	// lwz r9,76(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// stw r10,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r10.u32);
	// stw r9,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r9.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stw r10,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r10.u32);
	// stw r11,300(r31)
	REX_STORE_U32(r31.u32 + 300, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// stw r11,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stw r11,308(r31)
	REX_STORE_U32(r31.u32 + 308, ctx.r11.u32);
	// bl 0x826a1e70
	ctx.lr = 0x82664F60;
	sub_826A1E70(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r11.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// stw r11,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r11.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// stw r11,332(r31)
	REX_STORE_U32(r31.u32 + 332, ctx.r11.u32);
	// stw r29,0(r28)
	REX_STORE_U32(r28.u32 + 0, r29.u32);
	// lwz r11,428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 428);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r30,336(r31)
	REX_STORE_U32(r31.u32 + 336, r30.u32);
	// stw r11,428(r31)
	REX_STORE_U32(r31.u32 + 428, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8266F880) {
	REX_FUNC_PROLOGUE();
	// lwz r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8266f400
	sub_8266F400(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8266FFE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8266FFE8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r31,12(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x826700f8
	if (ctx.cr6.eq) goto loc_826700F8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826700d4
	if (ctx.cr6.eq) goto loc_826700D4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r28,24(r4)
	r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// bl 0x82675ad0
	ctx.lr = 0x82670018;
	sub_82675AD0(ctx, base);
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// li r30,0
	r30.s64 = 0;
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82670094
	if (ctx.cr0.eq) goto loc_82670094;
loc_82670028:
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
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
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
	// bne 0x82670028
	if (!ctx.cr0.eq) goto loc_82670028;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82669f80
	ctx.lr = 0x82670058;
	sub_82669F80(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8267005C:
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
	// bne 0x8267005c
	if (!ctx.cr0.eq) goto loc_8267005C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82670088
	if (!ctx.cr6.eq) goto loc_82670088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82670cd8
	ctx.lr = 0x82670088;
	sub_82670CD8(ctx, base);
loc_82670088:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x82670128
	if (!ctx.cr6.eq) goto loc_82670128;
	// b 0x82670114
	goto loc_82670114;
loc_82670094:
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// bl 0x82675b10
	ctx.lr = 0x8267009C;
	sub_82675B10(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r9.u32);
loc_826700A4:
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
	// bne 0x826700a4
	if (!ctx.cr0.eq) goto loc_826700A4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82670114
	if (!ctx.cr6.eq) goto loc_82670114;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82670cd8
	ctx.lr = 0x826700D0;
	sub_82670CD8(ctx, base);
	// b 0x82670114
	goto loc_82670114;
loc_826700D4:
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,32(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,28(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 28);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,24(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8266bc88
	ctx.lr = 0x826700F4;
	sub_8266BC88(ctx, base);
	// b 0x8267010c
	goto loc_8267010C;
loc_826700F8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r6,32(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,28(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 28);
	// bl 0x8266f038
	ctx.lr = 0x8267010C;
	sub_8266F038(ctx, base);
loc_8267010C:
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82670118
	if (!ctx.cr0.eq) goto loc_82670118;
loc_82670114:
	// li r29,0
	r29.s64 = 0;
loc_82670118:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82670128
	if (ctx.cr6.eq) goto loc_82670128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82675ad0
	ctx.lr = 0x82670128;
	sub_82675AD0(ctx, base);
loc_82670128:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82676808) {
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
	// bl 0x82670628
	ctx.lr = 0x82676828;
	sub_82670628(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
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

DEFINE_REX_FUNC(sub_82678008) {
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
	ctx.lr = 0x82678010;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	r21.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// mr r20,r9
	r20.u64 = ctx.r9.u64;
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82678050
	if (!ctx.cr6.eq) goto loc_82678050;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// addi r28,r1,84
	r28.s64 = ctx.r1.s64 + 84;
	// sth r30,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r30.u16);
	// sth r30,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, r30.u16);
loc_82678050:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x826a1e70
	ctx.lr = 0x8267805C;
	sub_826A1E70(ctx, base);
	// lhz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 92);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82678070
	if (!ctx.cr0.eq) goto loc_82678070;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// sth r11,92(r1)
	REX_STORE_U16(ctx.r1.u32 + 92, ctx.r11.u16);
loc_82678070:
	// addi r27,r31,244
	r27.s64 = r31.s64 + 244;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827938a4
	ctx.lr = 0x8267807C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lhz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 92);
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r29,r31,312
	r29.s64 = r31.s64 + 312;
	// mr r25,r30
	r25.u64 = r30.u64;
	// rldimi r8,r9,32,16
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFF00000000) | (ctx.r8.u64 & 0xFFFF0000FFFFFFFF);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// clrlwi r10,r8,30
	ctx.r10.u64 = ctx.r8.u32 & 0x3;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	// b 0x826780d4
	goto loc_826780D4;
loc_826780B0:
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r10,r26
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, r26.u64, ctx.xer);
	// beq cr6,0x826780e0
	if (ctx.cr6.eq) goto loc_826780E0;
	// rldicl r9,r9,62,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 62) & 0x3FFFFFFFFFFFFFFF;
	// clrlwi r10,r9,30
	ctx.r10.u64 = ctx.r9.u32 & 0x3;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_826780D4:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x826780b0
	if (!ctx.cr6.eq) goto loc_826780B0;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_826780E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826780f4
	if (ctx.cr6.eq) goto loc_826780F4;
	// lis r30,-32646
	r30.s64 = -2139488256;
	// ori r30,r30,4100
	r30.u64 = r30.u64 | 4100;
	// b 0x82678188
	goto loc_82678188;
loc_826780F4:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267f9c8
	ctx.lr = 0x82678118;
	sub_8267F9C8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82678188
	if (ctx.cr0.lt) goto loc_82678188;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r11,144
	ctx.r5.s64 = ctx.r11.s64 + 144;
	// bl 0x82676bf8
	ctx.lr = 0x82678134;
	sub_82676BF8(ctx, base);
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 336);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,336(r31)
	REX_STORE_U32(r31.u32 + 336, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82678148:
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
	// bne 0x82678148
	if (!ctx.cr0.eq) goto loc_82678148;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827938b4
	ctx.lr = 0x8267816C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r25,r21
	r25.u64 = r21.u64;
	// bl 0x8267d0b8
	ctx.lr = 0x82678180;
	sub_8267D0B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x826781b4
	if (!ctx.cr0.lt) goto loc_826781B4;
loc_82678188:
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8267819c
	if (ctx.cr6.eq) goto loc_8267819C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82677508
	ctx.lr = 0x8267819C;
	sub_82677508(ctx, base);
loc_8267819C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x826781ac
	if (ctx.cr6.eq) goto loc_826781AC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827938b4
	ctx.lr = 0x826781AC;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_826781AC:
	// stw r21,0(r20)
	REX_STORE_U32(r20.u32 + 0, r21.u32);
	// b 0x826781c0
	goto loc_826781C0;
loc_826781B4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r11.u32);
loc_826781C0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_82681C68) {
	REX_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// b 0x82680af0
	sub_82680AF0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82681E40) {
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
	ctx.lr = 0x82681E48;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// sth r4,446(r1)
	REX_STORE_U16(ctx.r1.u32 + 446, ctx.r4.u16);
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// sth r5,454(r1)
	REX_STORE_U16(ctx.r1.u32 + 454, ctx.r5.u16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r6,460(r1)
	REX_STORE_U32(ctx.r1.u32 + 460, ctx.r6.u32);
	// stw r7,468(r1)
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r7.u32);
	// ble cr6,0x82681e88
	if (!ctx.cr6.gt) goto loc_82681E88;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// subf r4,r10,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r10.u64;
	// b 0x8268222c
	goto loc_8268222C;
loc_82681E88:
	// li r29,0
	r29.s64 = 0;
	// lhz r11,328(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 328);
	// mr r25,r29
	r25.u64 = r29.u64;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// mr r16,r29
	r16.u64 = r29.u64;
	// stw r29,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// mr r28,r29
	r28.u64 = r29.u64;
	// mr r17,r29
	r17.u64 = r29.u64;
	// mr r15,r29
	r15.u64 = r29.u64;
	// mr r14,r29
	r14.u64 = r29.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82682220
	if (ctx.cr0.eq) goto loc_82682220;
	// addi r18,r1,128
	r18.s64 = ctx.r1.s64 + 128;
	// addi r24,r30,78
	r24.s64 = r30.s64 + 78;
	// addi r31,r21,18
	r31.s64 = r21.s64 + 18;
loc_82681EC4:
	// lwz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 36);
	// addi r19,r29,1
	r19.s64 = r29.s64 + 1;
	// lhz r9,328(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 328);
	// addi r20,r24,-6
	r20.s64 = r24.s64 + -6;
	// lhz r11,-2(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + -2);
	// cmplw cr6,r19,r9
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r9.u32, ctx.xer);
	// add r22,r11,r10
	r22.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bge cr6,0x82681eec
	if (!ctx.cr6.lt) goto loc_82681EEC;
	// lhz r10,12(r20)
	ctx.r10.u64 = REX_LOAD_U16(r20.u32 + 12);
	// b 0x82681ef0
	goto loc_82681EF0;
loc_82681EEC:
	// lwz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 32);
loc_82681EF0:
	// addi r26,r31,-18
	r26.s64 = r31.s64 + -18;
	// subf r27,r11,r10
	r27.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r26,0(r18)
	REX_STORE_U32(r18.u32 + 0, r26.u32);
	// lis r6,255
	ctx.r6.s64 = 16711680;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82686f48
	ctx.lr = 0x82681F1C;
	sub_82686F48(ctx, base);
	// lhz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 0);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// rlwinm. r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82681fa0
	if (!ctx.cr0.eq) goto loc_82681FA0;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82681f64
	if (ctx.cr6.eq) goto loc_82681F64;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r4,-32646
	ctx.r4.s64 = -2139488256;
	// ori r4,r4,4108
	ctx.r4.u64 = ctx.r4.u64 | 4108;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82681F54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,330(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 330);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,330(r30)
	REX_STORE_U16(r30.u32 + 330, ctx.r11.u16);
loc_82681F64:
	// lhz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 0);
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82681f84
	if (ctx.cr0.eq) goto loc_82681F84;
	// clrlwi r11,r15,24
	ctx.r11.u64 = r15.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r15,r11,24
	r15.u64 = ctx.r11.u32 & 0xFF;
	// stb r15,0(r31)
	REX_STORE_U8(r31.u32 + 0, r15.u8);
	// b 0x82682124
	goto loc_82682124;
loc_82681F84:
	// clrlwi r11,r17,24
	ctx.r11.u64 = r17.u32 & 0xFF;
	// addi r10,r25,1
	ctx.r10.s64 = r25.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// clrlwi r17,r11,24
	r17.u64 = ctx.r11.u32 & 0xFF;
	// stb r17,0(r31)
	REX_STORE_U8(r31.u32 + 0, r17.u8);
	// b 0x82682120
	goto loc_82682120;
loc_82681FA0:
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82681fb0
	if (ctx.cr0.eq) goto loc_82681FB0;
	// stb r15,0(r31)
	REX_STORE_U8(r31.u32 + 0, r15.u8);
	// b 0x82681fc8
	goto loc_82681FC8;
loc_82681FB0:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r10,r25,1
	ctx.r10.s64 = r25.s64 + 1;
	// stb r17,0(r31)
	REX_STORE_U8(r31.u32 + 0, r17.u8);
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_82681FC8:
	// lhz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 0);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82682030
	if (ctx.cr0.eq) goto loc_82682030;
	// lbz r11,-3(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + -3);
	// lhz r5,-10(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + -10);
	// lwz r4,0(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82682004
	if (!ctx.cr6.eq) goto loc_82682004;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82687208
	ctx.lr = 0x82681FF0;
	sub_82687208(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// li r21,7
	r21.s64 = 7;
	// bl 0x82687240
	ctx.lr = 0x82681FFC;
	sub_82687240(ctx, base);
	// sth r3,-6(r31)
	REX_STORE_U16(r31.u32 + -6, ctx.r3.u16);
	// b 0x8268201c
	goto loc_8268201C;
loc_82682004:
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x826871e8
	ctx.lr = 0x8268200C;
	sub_826871E8(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// li r21,0
	r21.s64 = 0;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// sth r11,-6(r31)
	REX_STORE_U16(r31.u32 + -6, ctx.r11.u16);
loc_8268201C:
	// lbz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + -4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stb r11,-4(r31)
	REX_STORE_U8(r31.u32 + -4, ctx.r11.u8);
	// b 0x82682034
	goto loc_82682034;
loc_82682030:
	// li r21,0
	r21.s64 = 0;
loc_82682034:
	// clrlwi r25,r28,16
	r25.u64 = r28.u32 & 0xFFFF;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(r29.u32, r25.u32, ctx.xer);
	// beq cr6,0x82682100
	if (ctx.cr6.eq) goto loc_82682100;
	// lhz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U16(r24.u32 + 0);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// rlwinm. r10,r10,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r28,r16,r11
	r28.u64 = r16.u64 + ctx.r11.u64;
	// beq 0x826820c8
	if (ctx.cr0.eq) goto loc_826820C8;
	// lhz r11,328(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 328);
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r3,-8(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + -8);
	// li r6,1
	ctx.r6.s64 = 1;
	// subf r11,r19,r11
	ctx.r11.u64 = ctx.r11.u64 - r19.u64;
	// lhz r9,-10(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + -10);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,-14(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + -14);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lbz r4,-3(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + -3);
	// sth r3,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r3.u16);
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82686dd0
	ctx.lr = 0x8268208C;
	sub_82686DD0(ctx, base);
	// lhz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U16(r24.u32 + 0);
	// subf r11,r23,r3
	ctx.r11.u64 = ctx.r3.u64 - r23.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm. r10,r10,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// bne 0x826820b0
	if (!ctx.cr0.eq) goto loc_826820B0;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_826820B0:
	// add r3,r29,r28
	ctx.r3.u64 = r29.u64 + r28.u64;
	// lhz r5,-10(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + -10);
	// lwz r4,0(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 0);
	// bl 0x8269cc20
	ctx.lr = 0x826820C0;
	sub_8269CC20(ctx, base);
	// mr r23,r29
	r23.u64 = r29.u64;
	// b 0x826820d8
	goto loc_826820D8;
loc_826820C8:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269cc20
	ctx.lr = 0x826820D8;
	sub_8269CC20(ctx, base);
loc_826820D8:
	// addi r10,r25,9
	ctx.r10.s64 = r25.s64 + 9;
	// lwz r9,0(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 0);
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stwx r9,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
	// sth r16,76(r11)
	REX_STORE_U16(ctx.r11.u32 + 76, r16.u16);
	// lhz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U16(r24.u32 + 0);
	// andi. r10,r10,57343
	ctx.r10.u64 = ctx.r10.u64 & 57343;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r10,78(r11)
	REX_STORE_U16(ctx.r11.u32 + 78, ctx.r10.u16);
loc_82682100:
	// clrlwi r11,r21,16
	ctx.r11.u64 = r21.u32 & 0xFFFF;
	// lwz r21,468(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// addi r10,r25,1
	ctx.r10.s64 = r25.s64 + 1;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// clrlwi r28,r10,16
	r28.u64 = ctx.r10.u32 & 0xFFFF;
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + r16.u64;
	// add r16,r27,r16
	r16.u64 = r27.u64 + r16.u64;
	// sth r11,-2(r31)
	REX_STORE_U16(r31.u32 + -2, ctx.r11.u16);
loc_82682120:
	// lwz r25,104(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
loc_82682124:
	// lhz r11,328(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 328);
	// mr r29,r19
	r29.u64 = r19.u64;
	// addi r18,r18,4
	r18.s64 = r18.s64 + 4;
	// addi r24,r24,8
	r24.s64 = r24.s64 + 8;
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82681ec4
	if (ctx.cr6.lt) goto loc_82681EC4;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x82682220
	if (ctx.cr6.eq) goto loc_82682220;
	// clrlwi r11,r28,16
	ctx.r11.u64 = r28.u32 & 0xFFFF;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82682220
	if (ctx.cr6.eq) goto loc_82682220;
	// lhz r11,328(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 328);
	// li r29,0
	r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82682220
	if (ctx.cr0.eq) goto loc_82682220;
	// addi r31,r21,12
	r31.s64 = r21.s64 + 12;
loc_82682168:
	// lbz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268220c
	if (ctx.cr0.eq) goto loc_8268220C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lhz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 0);
	// addi r4,r1,97
	ctx.r4.s64 = ctx.r1.s64 + 97;
	// bl 0x82678b50
	ctx.lr = 0x82682184;
	sub_82678B50(ctx, base);
	// lbz r9,97(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 97);
	// mr. r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826821a8
	if (ctx.cr0.eq) goto loc_826821A8;
	// mulli r10,r11,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(20));
	// add r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 + r21.u64;
	// lbz r10,-2(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stb r9,97(r1)
	REX_STORE_U8(ctx.r1.u32 + 97, ctx.r9.u8);
loc_826821A8:
	// lbz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// mr. r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826821d0
	if (ctx.cr0.eq) goto loc_826821D0;
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + r25.u64;
	// mulli r10,r10,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(20));
	// add r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 + r21.u64;
	// lbz r10,-2(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
loc_826821D0:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826821f4
	if (!ctx.cr0.eq) goto loc_826821F4;
	// clrlwi. r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826821f4
	if (!ctx.cr0.eq) goto loc_826821F4;
	// lhz r11,332(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 332);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r11,22
	ctx.r11.u64 = ctx.r11.u32 & 0x3FF;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// b 0x82682200
	goto loc_82682200;
loc_826821F4:
	// rlwinm r10,r10,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_82682200:
	// lhz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 4);
	// lwz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 36);
	// sthx r11,r9,r10
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u16);
loc_8268220C:
	// lhz r11,328(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 328);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82682168
	if (ctx.cr6.lt) goto loc_82682168;
loc_82682220:
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// sth r28,328(r30)
	REX_STORE_U16(r30.u32 + 328, r28.u16);
	// stw r16,32(r30)
	REX_STORE_U32(r30.u32 + 32, r16.u32);
loc_8268222C:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r6,460(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// subfic r7,r11,1264
	ctx.xer.ca = ctx.r11.u32 <= 1264;
	ctx.r7.u64 = static_cast<uint64_t>(1264) - ctx.r11.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lhz r5,446(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 446);
	// bl 0x82681330
	ctx.lr = 0x82682248;
	sub_82681330(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lhz r11,454(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 454);
	// subf r10,r10,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r10.u64;
	// stw r3,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// sth r11,334(r30)
	REX_STORE_U16(r30.u32 + 334, ctx.r11.u16);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8269CE98) {
	REX_FUNC_PROLOGUE();
	// b 0x8269d770
	sub_8269D770(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8269CEA0) {
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
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x826a2b40
	ctx.lr = 0x8269CEB8;
	sub_826A2B40(ctx, base);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,31532(r10)
	REX_STORE_U32(ctx.r10.u32 + 31532, ctx.r11.u32);
	// stw r11,31528(r9)
	REX_STORE_U32(ctx.r9.u32 + 31528, ctx.r11.u32);
	// bne 0x8269ced8
	if (!ctx.cr0.eq) goto loc_8269CED8;
	// li r3,24
	ctx.r3.s64 = 24;
	// b 0x8269cee4
	goto loc_8269CEE4;
loc_8269CED8:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8269CEE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8269E5A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8269E5B0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8269e5d0
	if (!ctx.cr6.eq) goto loc_8269E5D0;
loc_8269E5C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8269e5ec
	goto loc_8269E5EC;
loc_8269E5D0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8269e5f4
	if (!ctx.cr6.eq) goto loc_8269E5F4;
	// bl 0x826a33d0
	ctx.lr = 0x8269E5DC;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x8269E5E8;
	sub_8269CB20(ctx, base);
loc_8269E5E8:
	// li r3,22
	ctx.r3.s64 = 22;
loc_8269E5EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_8269E5F4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8269e614
	if (ctx.cr6.eq) goto loc_8269E614;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// blt cr6,0x8269e614
	if (ctx.cr6.lt) goto loc_8269E614;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8269E610;
	sub_826A1E70(ctx, base);
	// b 0x8269e5c8
	goto loc_8269E5C8;
loc_8269E614:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x8269E620;
	sub_826A2E60(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8269e640
	if (!ctx.cr6.eq) goto loc_8269E640;
	// bl 0x826a33d0
	ctx.lr = 0x8269E62C;
	sub_826A33D0(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_8269E630:
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x8269cb20
	ctx.lr = 0x8269E638;
	sub_8269CB20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8269e5ec
	goto loc_8269E5EC;
loc_8269E640:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// bge cr6,0x8269e5e8
	if (!ctx.cr6.lt) goto loc_8269E5E8;
	// bl 0x826a33d0
	ctx.lr = 0x8269E64C;
	sub_826A33D0(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x8269e630
	goto loc_8269E630;
}

DEFINE_REX_FUNC(__savegprlr_21) {
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
	// std r21,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, r21.u64);
	// std r22,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, r22.u64);
	// std r23,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, r23.u64);
	// std r24,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, r24.u64);
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

DEFINE_REX_FUNC(sub_826A2B40) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x826af2b8
	ctx.lr = 0x826A2B60;
	sub_826AF2B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x826a2b8c
	if (!ctx.cr0.eq) goto loc_826A2B8C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826a2b8c
	if (ctx.cr6.eq) goto loc_826A2B8C;
	// bl 0x826a33d0
	ctx.lr = 0x826A2B78;
	sub_826A33D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a2b8c
	if (ctx.cr0.eq) goto loc_826A2B8C;
	// bl 0x826a33d0
	ctx.lr = 0x826A2B84;
	sub_826A33D0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_826A2B8C:
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

DEFINE_REX_FUNC(__savevmx_73) {
	REX_FUNC_PROLOGUE();
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
	// li r11,-880
	ctx.r11.s64 = -880;
	// stvx128 v73,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v73.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-864
	ctx.r11.s64 = -864;
	// stvx128 v74,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v74.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-848
	ctx.r11.s64 = -848;
	// stvx128 v75,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v75.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-832
	ctx.r11.s64 = -832;
	// stvx128 v76,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v76.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-816
	ctx.r11.s64 = -816;
	// stvx128 v77,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v77.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-800
	ctx.r11.s64 = -800;
	// stvx128 v78,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v78.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-784
	ctx.r11.s64 = -784;
	// stvx128 v79,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v79.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-768
	ctx.r11.s64 = -768;
	// stvx128 v80,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v80.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-752
	ctx.r11.s64 = -752;
	// stvx128 v81,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v81.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-736
	ctx.r11.s64 = -736;
	// stvx128 v82,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v82.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-720
	ctx.r11.s64 = -720;
	// stvx128 v83,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v83.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-704
	ctx.r11.s64 = -704;
	// stvx128 v84,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v84.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-688
	ctx.r11.s64 = -688;
	// stvx128 v85,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v85.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-672
	ctx.r11.s64 = -672;
	// stvx128 v86,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v86.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-656
	ctx.r11.s64 = -656;
	// stvx128 v87,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v87.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-640
	ctx.r11.s64 = -640;
	// stvx128 v88,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v88.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-624
	ctx.r11.s64 = -624;
	// stvx128 v89,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v89.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// stvx128 v90,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v90.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(sub_826B0420) {
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
	ctx.lr = 0x826B0428;
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,-1
	r24.s64 = -1;
	// li r25,0
	r25.s64 = 0;
	// li r3,11
	ctx.r3.s64 = 11;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// stw r25,84(r31)
	REX_STORE_U32(r31.u32 + 84, r25.u32);
	// bl 0x826a97e8
	ctx.lr = 0x826B0448;
	sub_826A97E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826b0458
	if (!ctx.cr0.eq) goto loc_826B0458;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x826b0630
	goto loc_826B0630;
loc_826B0458:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x826a9928
	ctx.lr = 0x826B0460;
	sub_826A9928(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r28,0
	r28.s64 = 0;
	// li r26,1
	r26.s64 = 1;
	// addi r29,r11,31264
	r29.s64 = ctx.r11.s64 + 31264;
loc_826B0474:
	// stw r28,92(r31)
	REX_STORE_U32(r31.u32 + 92, r28.u32);
	// cmpwi cr6,r28,64
	ctx.cr6.compare<int32_t>(r28.s32, 64, ctx.xer);
	// bge cr6,0x826b0620
	if (!ctx.cr6.lt) goto loc_826B0620;
	// rlwinm r27,r28,2,0,29
	r27.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r27,r29
	r30.u64 = REX_LOAD_U32(r27.u32 + r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826b0590
	if (ctx.cr6.eq) goto loc_826B0590;
loc_826B0490:
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// addi r11,r11,2304
	ctx.r11.s64 = ctx.r11.s64 + 2304;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x826b0578
	if (!ctx.cr6.lt) goto loc_826B0578;
	// lbz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826b0544
	if (!ctx.cr0.eq) goto loc_826B0544;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826b050c
	if (!ctx.cr6.eq) goto loc_826B050C;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x826a9928
	ctx.lr = 0x826B04C8;
	sub_826A9928(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826b0500
	if (!ctx.cr6.eq) goto loc_826B0500;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x826a96c8
	ctx.lr = 0x826B04E4;
	sub_826A96C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826b04f4
	if (!ctx.cr0.eq) goto loc_826B04F4;
	// stw r26,84(r31)
	REX_STORE_U32(r31.u32 + 84, r26.u32);
	// b 0x826b0500
	goto loc_826B0500;
loc_826B04F4:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_826B0500:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = r31.s64 + 176;
	// bl 0x826b065c
	ctx.lr = 0x826B050C;
	ctx.r24 = r24;
	ctx.r25 = r25;
	ctx.r26 = r26;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_826B065C(ctx, base);
	r24 = ctx.r24;
	r25 = ctx.r25;
	r26 = ctx.r26;
	r27 = ctx.r27;
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
loc_826B050C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x826b0544
	if (!ctx.cr6.eq) goto loc_826B0544;
	// addi r27,r30,12
	r27.s64 = r30.s64 + 12;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827938a4
	ctx.lr = 0x826B0520;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lbz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826b053c
	if (ctx.cr0.eq) goto loc_826B053C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827938b4
	ctx.lr = 0x826B0534;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x826b0548
	goto loc_826B0548;
loc_826B053C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x826b0550
	if (ctx.cr6.eq) goto loc_826B0550;
loc_826B0544:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_826B0548:
	// addi r30,r30,72
	r30.s64 = r30.s64 + 72;
	// b 0x826b0490
	goto loc_826B0490;
loc_826B0550:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r26,4(r30)
	REX_STORE_U8(r30.u32 + 4, r26.u8);
	// stw r24,0(r30)
	REX_STORE_U32(r30.u32 + 0, r24.u32);
	// li r9,72
	ctx.r9.s64 = 72;
	// rlwinm r10,r28,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// divw r11,r11,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r11.s32 / ctx.r9.s32 : 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
loc_826B0578:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x826b0620
	if (!ctx.cr6.eq) goto loc_826B0620;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x826b0474
	goto loc_826B0474;
loc_826B0590:
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x826a2b40
	ctx.lr = 0x826B059C;
	sub_826A2B40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826b0620
	if (ctx.cr0.eq) goto loc_826B0620;
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// stwx r3,r27,r29
	REX_STORE_U32(r27.u32 + r29.u32, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,31232(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 31232);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,31232(r9)
	REX_STORE_U32(ctx.r9.u32 + 31232, ctx.r11.u32);
loc_826B05BC:
	// lwzx r11,r27,r29
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r29.u32);
	// addi r11,r11,2304
	ctx.r11.s64 = ctx.r11.s64 + 2304;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x826b05ec
	if (!ctx.cr6.lt) goto loc_826B05EC;
	// li r11,10
	ctx.r11.s64 = 10;
	// stb r10,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r24,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r24.u32);
	// stb r11,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// b 0x826b05bc
	goto loc_826B05BC;
loc_826B05EC:
	// rlwinm r3,r28,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 5) & 0xFFFFFFE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// srawi r9,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 5;
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mulli r10,r11,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r26,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, r26.u8);
	// bl 0x826b02f0
	ctx.lr = 0x826B0614;
	sub_826B02F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826b0620
	if (!ctx.cr0.eq) goto loc_826B0620;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
loc_826B0620:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = r31.s64 + 176;
	// bl 0x826b0638
	ctx.lr = 0x826B062C;
	ctx.r24 = r24;
	ctx.r25 = r25;
	ctx.r26 = r26;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_826B0638(ctx, base);
	r24 = ctx.r24;
	r25 = ctx.r25;
	r26 = ctx.r26;
	r27 = ctx.r27;
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
loc_826B0630:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_826C19C8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,64(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r10,r10,60
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(60));
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,64(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_826C21F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826C2200;
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C2224;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r28,-1
	ctx.r11.s64 = r28.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x826c2268
	if (ctx.cr6.gt) goto loc_826C2268;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826c2250
	if (ctx.cr6.eq) goto loc_826C2250;
	// bdz 0x826c225c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826C225C;
	// bdz 0x826c2268
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826C2268;
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r29,72(r31)
	REX_STORE_U32(r31.u32 + 72, r29.u32);
	// b 0x826c2270
	goto loc_826C2270;
loc_826C2250:
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r29,76(r31)
	REX_STORE_U32(r31.u32 + 76, r29.u32);
	// b 0x826c2270
	goto loc_826C2270;
loc_826C225C:
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
	// stw r29,80(r31)
	REX_STORE_U32(r31.u32 + 80, r29.u32);
	// b 0x826c2270
	goto loc_826C2270;
loc_826C2268:
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r29,68(r31)
	REX_STORE_U32(r31.u32 + 68, r29.u32);
loc_826C2270:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C2284;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826C6C08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826C6C10;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r3,508(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 508);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r5,516(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 516);
	// bl 0x826c6880
	ctx.lr = 0x826C6C3C;
	sub_826C6880(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c6c64
	if (ctx.cr6.lt) goto loc_826C6C64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,516(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 516);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x826a2e60
	ctx.lr = 0x826C6C58;
	sub_826A2E60(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r28,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x3FC;
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r10.u32);
loc_826C6C64:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826CB3D0) {
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
	ctx.lr = 0x826CB3D8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r29,0
	r29.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826cb408
	if (!ctx.cr6.eq) goto loc_826CB408;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cf0
	return;
loc_826CB408:
	// addi r25,r4,-24
	r25.s64 = ctx.r4.s64 + -24;
	// cmplwi cr6,r25,18
	ctx.cr6.compare<uint32_t>(r25.u32, 18, ctx.xer);
	// blt cr6,0x826cb550
	if (ctx.cr6.lt) goto loc_826CB550;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U64(r28.u32 + 0);
	// li r5,18
	ctx.r5.s64 = 18;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826b9678
	ctx.lr = 0x826CB428;
	sub_826B9678(ctx, base);
	// cmplwi cr6,r3,18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 18, ctx.xer);
	// bne cr6,0x826cb550
	if (!ctx.cr6.eq) goto loc_826CB550;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826cb550
	if (ctx.cr6.eq) goto loc_826CB550;
	// lbz r7,3(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// rotlwi r6,r7,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r5,1(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r10,r10,30696
	ctx.r10.s64 = ctx.r10.s64 + 30696;
	// rlwinm r8,r6,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lbz r4,1(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r8,r5,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rotlwi r8,r4,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r4,1(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rotlwi r8,r4,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r3,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lbzu r5,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r31,1(r11)
	ea = 1 + ctx.r11.u32;
	r31.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r30,1(r11)
	ea = 1 + ctx.r11.u32;
	r30.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r27,1(r11)
	ea = 1 + ctx.r11.u32;
	r27.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r26,1(r11)
	ea = 1 + ctx.r11.u32;
	r26.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbzu r22,1(r11)
	ea = 1 + ctx.r11.u32;
	r22.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r7,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, ctx.r7.u16);
	// stb r5,105(r1)
	REX_STORE_U8(ctx.r1.u32 + 105, ctx.r5.u8);
	// stb r3,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r3.u8);
	// stb r8,106(r1)
	REX_STORE_U8(ctx.r1.u32 + 106, ctx.r8.u8);
	// sth r4,102(r1)
	REX_STORE_U16(ctx.r1.u32 + 102, ctx.r4.u16);
	// stb r30,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, r30.u8);
	// stb r31,107(r1)
	REX_STORE_U8(ctx.r1.u32 + 107, r31.u8);
	// stb r27,109(r1)
	REX_STORE_U8(ctx.r1.u32 + 109, r27.u8);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stb r22,111(r1)
	REX_STORE_U8(ctx.r1.u32 + 111, r22.u8);
	// stb r26,110(r1)
	REX_STORE_U8(ctx.r1.u32 + 110, r26.u8);
loc_826CB518:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x826cb538
	if (!ctx.cr0.eq) goto loc_826CB538;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x826cb518
	if (!ctx.cr6.eq) goto loc_826CB518;
loc_826CB538:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x826cb55c
	if (ctx.cr6.eq) goto loc_826CB55C;
loc_826CB540:
	// ld r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U64(r28.u32 + 0);
	// clrldi r11,r25,32
	ctx.r11.u64 = r25.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,0(r28)
	REX_STORE_U64(r28.u32 + 0, ctx.r11.u64);
loc_826CB550:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cf0
	return;
loc_826CB55C:
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r9,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// bne cr6,0x826cb540
	if (!ctx.cr6.eq) goto loc_826CB540;
	// cmplwi cr6,r25,22
	ctx.cr6.compare<uint32_t>(r25.u32, 22, ctx.xer);
	// blt cr6,0x826cb550
	if (ctx.cr6.lt) goto loc_826CB550;
	// ld r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U64(r28.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,18
	ctx.r4.s64 = ctx.r11.s64 + 18;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826b9678
	ctx.lr = 0x826CB5A0;
	sub_826B9678(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x826cb550
	if (!ctx.cr6.eq) goto loc_826CB550;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826cb550
	if (ctx.cr6.eq) goto loc_826CB550;
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// li r30,22
	r30.s64 = 22;
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// blt cr6,0x826cb734
	if (ctx.cr6.lt) goto loc_826CB734;
	// cmplwi cr6,r25,22
	ctx.cr6.compare<uint32_t>(r25.u32, 22, ctx.xer);
	// ble cr6,0x826cb734
	if (!ctx.cr6.gt) goto loc_826CB734;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r27,r10,30648
	r27.s64 = ctx.r10.s64 + 30648;
	// addi r26,r11,30680
	r26.s64 = ctx.r11.s64 + 30680;
loc_826CB608:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826c8e70
	ctx.lr = 0x826CB61C;
	sub_826C8E70(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826cb718
	if (!ctx.cr6.eq) goto loc_826CB718;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r8,r26,16
	ctx.r8.s64 = r26.s64 + 16;
loc_826CB634:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826cb654
	if (!ctx.cr0.eq) goto loc_826CB654;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x826cb634
	if (!ctx.cr6.eq) goto loc_826CB634;
loc_826CB654:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826cb6a8
	if (!ctx.cr6.eq) goto loc_826CB6A8;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r11,r24,16
	ctx.r11.u64 = r24.u32 & 0xFFFF;
	// add r31,r4,r30
	r31.u64 = ctx.r4.u64 + r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(r31.u32, r25.u32, ctx.xer);
	// clrlwi r24,r11,16
	r24.u64 = ctx.r11.u32 & 0xFFFF;
	// bgt cr6,0x826cb750
	if (ctx.cr6.gt) goto loc_826CB750;
	// clrlwi r11,r24,16
	ctx.r11.u64 = r24.u32 & 0xFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x826cb750
	if (ctx.cr6.gt) goto loc_826CB750;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826ca9e0
	ctx.lr = 0x826CB690;
	sub_826CA9E0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826cb72c
	if (ctx.cr6.eq) goto loc_826CB72C;
	// li r29,0
	r29.s64 = 0;
	// b 0x826cb72c
	goto loc_826CB72C;
loc_826CB6A8:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r8,r27,16
	ctx.r8.s64 = r27.s64 + 16;
loc_826CB6B4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826cb6d4
	if (!ctx.cr0.eq) goto loc_826CB6D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x826cb6b4
	if (!ctx.cr6.eq) goto loc_826CB6B4;
loc_826CB6D4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826cb724
	if (!ctx.cr6.eq) goto loc_826CB724;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// ld r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U64(r28.u32 + 40);
	// add r31,r4,r30
	r31.u64 = ctx.r4.u64 + r30.u64;
	// addi r10,r31,-24
	ctx.r10.s64 = r31.s64 + -24;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// bgt cr6,0x826cb758
	if (ctx.cr6.gt) goto loc_826CB758;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826caf00
	ctx.lr = 0x826CB708;
	sub_826CAF00(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826cb72c
	if (ctx.cr6.eq) goto loc_826CB72C;
loc_826CB718:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cf0
	return;
loc_826CB724:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
loc_826CB72C:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// blt cr6,0x826cb608
	if (ctx.cr6.lt) goto loc_826CB608;
loc_826CB734:
	// ld r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U64(r28.u32 + 0);
	// clrldi r11,r25,32
	ctx.r11.u64 = r25.u64 & 0xFFFFFFFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,0(r28)
	REX_STORE_U64(r28.u32 + 0, ctx.r11.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cf0
	return;
loc_826CB750:
	// li r29,3
	r29.s64 = 3;
	// b 0x826cb734
	goto loc_826CB734;
loc_826CB758:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_826E34B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// ble cr6,0x826e34d0
	if (!ctx.cr6.gt) goto loc_826E34D0;
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// b 0x826e34d4
	goto loc_826E34D4;
loc_826E34D0:
	// fneg f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_826E34D4:
	// fcmpu cr6,f2,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f12.f64);
	// ble cr6,0x826e34e4
	if (!ctx.cr6.gt) goto loc_826E34E4;
	// fmr f0,f2
	ctx.f0.f64 = ctx.f2.f64;
	// b 0x826e34e8
	goto loc_826E34E8;
loc_826E34E4:
	// fneg f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f2.u64 ^ 0x8000000000000000;
loc_826E34E8:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x826e3508
	if (!ctx.cr6.gt) goto loc_826E3508;
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// ble cr6,0x826e3500
	if (!ctx.cr6.gt) goto loc_826E3500;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// b 0x826e3514
	goto loc_826E3514;
loc_826E3500:
	// fneg f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// b 0x826e3514
	goto loc_826E3514;
loc_826E3508:
	// fcmpu cr6,f2,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f12.f64);
	// bgt cr6,0x826e3514
	if (ctx.cr6.gt) goto loc_826E3514;
	// fneg f2,f2
	ctx.f2.u64 = ctx.f2.u64 ^ 0x8000000000000000;
loc_826E3514:
	// lfs f0,132(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// blt cr6,0x826e3540
	if (ctx.cr6.lt) goto loc_826E3540;
	// lfs f0,140(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// lfs f12,144(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,104(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmadds f9,f10,f13,f11
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f11.f64)));
	// fdivs f1,f9,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 / ctx.f2.f64));
	// b 0x826e3570
	goto loc_826E3570;
loc_826E3540:
	// lfs f1,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,112(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x826e3560
	if (ctx.cr6.gt) goto loc_826E3560;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_826E3560:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,9000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 9000);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_826E3570:
	// lfs f0,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x826e3588
	if (ctx.cr6.gt) goto loc_826E3588;
	// lfs f13,116(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,120(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// b 0x826e3590
	goto loc_826E3590;
loc_826E3588:
	// lfs f13,124(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,128(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
loc_826E3590:
	// fmuls f12,f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmadds f10,f11,f0,f12
	ctx.f10.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfs f10,112(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// fmuls f13,f10,f2
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// lfs f0,104(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x826e35b8
	if (!ctx.cr6.gt) goto loc_826E35B8;
	// fdivs f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f2.f64));
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
loc_826E35B8:
	// lfs f1,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826F1C58) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x826f1c68
	if (!ctx.cr6.eq) goto loc_826F1C68;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// blt cr6,0x826f1df4
	if (ctx.cr6.lt) goto loc_826F1DF4;
loc_826F1C68:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bgt cr6,0x826f1df4
	if (ctx.cr6.gt) goto loc_826F1DF4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x826f1df4
	if (!ctx.cr6.gt) goto loc_826F1DF4;
	// cmpwi cr6,r3,8000
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8000, ctx.xer);
	// bgt cr6,0x826f1c88
	if (ctx.cr6.gt) goto loc_826F1C88;
	// li r11,512
	ctx.r11.s64 = 512;
	// b 0x826f1d18
	goto loc_826F1D18;
loc_826F1C88:
	// cmpwi cr6,r3,11025
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11025, ctx.xer);
	// bgt cr6,0x826f1c98
	if (ctx.cr6.gt) goto loc_826F1C98;
	// li r11,512
	ctx.r11.s64 = 512;
	// b 0x826f1d18
	goto loc_826F1D18;
loc_826F1C98:
	// cmpwi cr6,r3,16000
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16000, ctx.xer);
	// bgt cr6,0x826f1ca8
	if (ctx.cr6.gt) goto loc_826F1CA8;
	// li r11,512
	ctx.r11.s64 = 512;
	// b 0x826f1d18
	goto loc_826F1D18;
loc_826F1CA8:
	// cmpwi cr6,r3,22050
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22050, ctx.xer);
	// bgt cr6,0x826f1cb8
	if (ctx.cr6.gt) goto loc_826F1CB8;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// b 0x826f1d18
	goto loc_826F1D18;
loc_826F1CB8:
	// cmpwi cr6,r3,32000
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32000, ctx.xer);
	// bgt cr6,0x826f1cd0
	if (ctx.cr6.gt) goto loc_826F1CD0;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x826f1cf8
	if (!ctx.cr6.eq) goto loc_826F1CF8;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// b 0x826f1d6c
	goto loc_826F1D6C;
loc_826F1CD0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,44100
	ctx.r10.u64 = ctx.r11.u64 | 44100;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x826f1ce8
	if (ctx.cr6.gt) goto loc_826F1CE8;
	// li r11,2048
	ctx.r11.s64 = 2048;
	// b 0x826f1d18
	goto loc_826F1D18;
loc_826F1CE8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,48000
	ctx.r10.u64 = ctx.r11.u64 | 48000;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x826f1d00
	if (ctx.cr6.gt) goto loc_826F1D00;
loc_826F1CF8:
	// li r11,2048
	ctx.r11.s64 = 2048;
	// b 0x826f1d18
	goto loc_826F1D18;
loc_826F1D00:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,30464
	ctx.r10.u64 = ctx.r11.u64 | 30464;
	// li r11,4096
	ctx.r11.s64 = 4096;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x826f1d18
	if (!ctx.cr6.gt) goto loc_826F1D18;
	// li r11,8192
	ctx.r11.s64 = 8192;
loc_826F1D18:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x826f1d68
	if (!ctx.cr6.eq) goto loc_826F1D68;
	// rlwinm r10,r6,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x826f1d38
	if (!ctx.cr6.eq) goto loc_826F1D38;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_826F1D38:
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x826f1d50
	if (!ctx.cr6.eq) goto loc_826F1D50;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_826F1D50:
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bne cr6,0x826f1dec
	if (!ctx.cr6.eq) goto loc_826F1DEC;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_826F1D68:
	// bge cr6,0x826f1dec
	if (!ctx.cr6.lt) goto loc_826F1DEC;
loc_826F1D6C:
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// mullw r8,r11,r4
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// divwu r9,r9,r3
	ctx.r9.u64 = uint32_t(ctx.r3.u32 ? ctx.r9.u32 / ctx.r3.u32 : 0);
	// addi r7,r9,7
	ctx.r7.s64 = ctx.r9.s64 + 7;
	// rlwinm r9,r7,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826f1db8
	if (!ctx.cr6.eq) goto loc_826F1DB8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x826f1dc8
	if (!ctx.cr6.eq) goto loc_826F1DC8;
	// mullw r9,r11,r3
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// divwu r9,r9,r3
	ctx.r9.u64 = uint32_t(ctx.r3.u32 ? ctx.r9.u32 / ctx.r3.u32 : 0);
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r8,r9,7
	ctx.r8.s64 = ctx.r9.s64 + 7;
	// rlwinm r9,r8,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
loc_826F1DB8:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x826f1dec
	if (ctx.cr6.gt) goto loc_826F1DEC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826f1dec
	if (!ctx.cr6.eq) goto loc_826F1DEC;
loc_826F1DC8:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r9,r11,r4
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// divwu r9,r9,r3
	ctx.r9.u64 = uint32_t(ctx.r3.u32 ? ctx.r9.u32 / ctx.r3.u32 : 0);
	// addi r8,r9,7
	ctx.r8.s64 = ctx.r9.s64 + 7;
	// rlwinm r7,r8,0,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x826f1dc8
	if (ctx.cr6.eq) goto loc_826F1DC8;
loc_826F1DEC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_826F1DF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826FCA10) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826fca70
	if (ctx.cr6.eq) goto loc_826FCA70;
	// lwz r11,20700(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20700);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826fca70
	if (ctx.cr6.eq) goto loc_826FCA70;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ecc50
	ctx.lr = 0x826FCA40;
	sub_823ECC50(ctx, base);
	// ld r8,20680(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 20680);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r9,20688(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 20688);
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r7,20700(r31)
	REX_STORE_U32(r31.u32 + 20700, ctx.r7.u32);
	// std r7,20688(r31)
	REX_STORE_U64(r31.u32 + 20688, ctx.r7.u64);
	// std r10,20680(r31)
	REX_STORE_U64(r31.u32 + 20680, ctx.r10.u64);
	// ld r8,20672(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 20672);
	// subf r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r7,20672(r31)
	REX_STORE_U64(r31.u32 + 20672, ctx.r7.u64);
loc_826FCA70:
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

DEFINE_REX_FUNC(sub_82703840) {
	REX_FUNC_PROLOGUE();
	// lwz r11,1828(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1828);
	// lwz r10,1836(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1836);
	// lwz r9,1840(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1840);
	// lwz r8,1864(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 1864);
	// lwz r7,1788(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1788);
	// stw r11,1832(r3)
	REX_STORE_U32(ctx.r3.u32 + 1832, ctx.r11.u32);
	// stw r10,1852(r3)
	REX_STORE_U32(ctx.r3.u32 + 1852, ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r9,1856(r3)
	REX_STORE_U32(ctx.r3.u32 + 1856, ctx.r9.u32);
	// stw r8,1860(r3)
	REX_STORE_U32(ctx.r3.u32 + 1860, ctx.r8.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,1824(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1824);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,1844(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1844);
	// lwz r8,1848(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 1848);
	// lwz r7,1868(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1868);
	// stw r10,1796(r3)
	REX_STORE_U32(ctx.r3.u32 + 1796, ctx.r10.u32);
	// stw r11,1832(r3)
	REX_STORE_U32(ctx.r3.u32 + 1832, ctx.r11.u32);
	// stw r9,1852(r3)
	REX_STORE_U32(ctx.r3.u32 + 1852, ctx.r9.u32);
	// stw r8,1856(r3)
	REX_STORE_U32(ctx.r3.u32 + 1856, ctx.r8.u32);
	// stw r7,1860(r3)
	REX_STORE_U32(ctx.r3.u32 + 1860, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82706380) {
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
	ctx.lr = 0x82706388;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r28,r4,31
	r28.u64 = ctx.r4.u32 & 0x1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x827063dc
	if (ctx.cr6.eq) goto loc_827063DC;
	// ld r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// lwz r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r27,r10,1,63
	r27.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r8.u64);
	// stw r11,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// bge 0x827063cc
	if (!ctx.cr0.lt) goto loc_827063CC;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82725e38
	ctx.lr = 0x827063CC;
	sub_82725E38(ctx, base);
loc_827063CC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwimi r11,r27,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
loc_827063DC:
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(r28.s32, r29.s32, ctx.xer);
	// bge cr6,0x827064d8
	if (!ctx.cr6.lt) goto loc_827064D8;
	// subf r11,r28,r29
	ctx.r11.u64 = r29.u64 - r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r28,r11,1
	r28.s64 = ctx.r11.s64 + 1;
loc_827063F4:
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r29,r10,1,63
	r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bge 0x8270641c
	if (!ctx.cr0.lt) goto loc_8270641C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270641C;
	sub_82725E38(ctx, base);
loc_8270641C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x827064b4
	if (ctx.cr6.eq) goto loc_827064B4;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r29,r10,1,63
	r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bge 0x8270644c
	if (!ctx.cr0.lt) goto loc_8270644C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270644C;
	sub_82725E38(ctx, base);
loc_8270644C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82706468
	if (ctx.cr6.eq) goto loc_82706468;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// oris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 2147483648;
	// oris r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 | 2147483648;
	// b 0x827064c4
	goto loc_827064C4;
loc_82706468:
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r29,r10,1,63
	r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bge 0x82706490
	if (!ctx.cr0.lt) goto loc_82706490;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82706490;
	sub_82725E38(ctx, base);
loc_82706490:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// beq cr6,0x827064a8
	if (ctx.cr6.eq) goto loc_827064A8;
	// oris r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 | 2147483648;
	// b 0x827064c0
	goto loc_827064C0;
loc_827064A8:
	// oris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 2147483648;
	// clrlwi r8,r10,1
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// b 0x827064c4
	goto loc_827064C4;
loc_827064B4:
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrlwi r8,r10,1
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFFFFFF;
loc_827064C0:
	// clrlwi r9,r11,1
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFFFFF;
loc_827064C4:
	// stw r8,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r8.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// bne 0x827063f4
	if (!ctx.cr0.eq) goto loc_827063F4;
loc_827064D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8271B1C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8271B1C8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r30,r5,1
	r30.s64 = ctx.r5.s64 + 1;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r3,r30,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x823f02b8
	ctx.lr = 0x8271B1EC;
	sub_823F02B8(ctx, base);
	// stw r3,36(r28)
	REX_STORE_U32(r28.u32 + 36, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8271b208
	if (!ctx.cr6.eq) goto loc_8271B208;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8271B208:
	// addic. r10,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r10.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8271b23c
	if (!ctx.cr0.gt) goto loc_8271B23C;
	// subf r9,r31,r29
	ctx.r9.u64 = r29.u64 - r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8271B218:
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lbzx r8,r9,r31
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + r31.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 | ctx.r6.u64;
	// sth r5,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8271b218
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8271B218;
loc_8271B23C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82720E10) {
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
	ctx.lr = 0x82720E18;
	// lwz r28,100(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82720ee8
	if (!ctx.cr6.gt) goto loc_82720EE8;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r7,-2
	r31.s64 = ctx.r7.s64 + -2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r31,2,0,29
	r25.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r28
	r27.u64 = ctx.r11.u64 + r28.u64;
	// addi r26,r7,-1
	r26.s64 = ctx.r7.s64 + -1;
	// mullw r24,r6,r3
	r24.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
loc_82720E48:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82720e78
	if (!ctx.cr6.gt) goto loc_82720E78;
	// addi r31,r7,-1
	r31.s64 = ctx.r7.s64 + -1;
	// addi r11,r28,-8
	ctx.r11.s64 = r28.s64 + -8;
	// rlwinm r31,r31,31,1,31
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_82720E68:
	// lbzx r31,r3,r30
	r31.u64 = REX_LOAD_U8(ctx.r3.u32 + r30.u32);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// stwu r31,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82720e68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82720E68;
loc_82720E78:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// ble cr6,0x82720eac
	if (!ctx.cr6.gt) goto loc_82720EAC;
	// addi r3,r26,-2
	ctx.r3.s64 = r26.s64 + -2;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// rlwinm r3,r3,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
loc_82720E94:
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,12(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r31,r3
	ctx.r3.u64 = r31.u64 + ctx.r3.u64;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// stwu r3,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82720e94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82720E94;
loc_82720EAC:
	// lwzx r3,r25,r28
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + r28.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r3,-4(r27)
	REX_STORE_U32(r27.u32 + -4, ctx.r3.u32);
	// ble cr6,0x82720ed8
	if (!ctx.cr6.gt) goto loc_82720ED8;
	// addi r3,r28,-4
	ctx.r3.s64 = r28.s64 + -4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82720EC8:
	// lwzu r31,4(r3)
	ea = 4 + ctx.r3.u32;
	r31.u64 = REX_LOAD_U32(ea);
	ctx.r3.u32 = ea;
	// stbx r31,r11,r30
	REX_STORE_U8(ctx.r11.u32 + r30.u32, r31.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82720ec8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82720EC8;
loc_82720ED8:
	// add r29,r29,r6
	r29.u64 = r29.u64 + ctx.r6.u64;
	// add r30,r24,r30
	r30.u64 = r24.u64 + r30.u64;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82720e48
	if (ctx.cr6.lt) goto loc_82720E48;
loc_82720EE8:
	// lwz r26,92(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82720fb0
	if (!ctx.cr6.gt) goto loc_82720FB0;
	// addi r8,r9,-2
	ctx.r8.s64 = ctx.r9.s64 + -2;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r8,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r28
	r31.u64 = ctx.r11.u64 + r28.u64;
	// addi r30,r9,-1
	r30.s64 = ctx.r9.s64 + -1;
	// mullw r27,r6,r26
	r27.s64 = int64_t(ctx.r6.s32) * int64_t(r26.s32);
loc_82720F10:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82720f40
	if (!ctx.cr6.gt) goto loc_82720F40;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// addi r11,r28,-8
	ctx.r11.s64 = r28.s64 + -8;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82720F30:
	// lbzx r7,r8,r4
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// stwu r7,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82720f30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82720F30;
loc_82720F40:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// ble cr6,0x82720f74
	if (!ctx.cr6.gt) goto loc_82720F74;
	// addi r8,r30,-2
	ctx.r8.s64 = r30.s64 + -2;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82720F5C:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// stwu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82720f5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82720F5C;
loc_82720F74:
	// lwzx r8,r29,r28
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + r28.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,-4(r31)
	REX_STORE_U32(r31.u32 + -4, ctx.r8.u32);
	// ble cr6,0x82720fa0
	if (!ctx.cr6.gt) goto loc_82720FA0;
	// addi r8,r28,-4
	ctx.r8.s64 = r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82720F90:
	// lwzu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stbx r7,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82720f90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82720F90;
loc_82720FA0:
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r4,r27,r4
	ctx.r4.u64 = r27.u64 + ctx.r4.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82720f10
	if (ctx.cr6.lt) goto loc_82720F10;
loc_82720FB0:
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82721074
	if (!ctx.cr6.gt) goto loc_82721074;
	// addi r8,r9,-2
	ctx.r8.s64 = ctx.r9.s64 + -2;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r8,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// addi r31,r9,-1
	r31.s64 = ctx.r9.s64 + -1;
	// mullw r29,r6,r26
	r29.s64 = int64_t(ctx.r6.s32) * int64_t(r26.s32);
loc_82720FD4:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82721004
	if (!ctx.cr6.gt) goto loc_82721004;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// addi r11,r28,-8
	ctx.r11.s64 = r28.s64 + -8;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82720FF4:
	// lbzx r7,r8,r5
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// stwu r7,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82720ff4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82720FF4;
loc_82721004:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// ble cr6,0x82721038
	if (!ctx.cr6.gt) goto loc_82721038;
	// addi r8,r31,-2
	ctx.r8.s64 = r31.s64 + -2;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82721020:
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// stwu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82721020
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82721020;
loc_82721038:
	// lwzx r8,r30,r28
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + r28.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,-4(r3)
	REX_STORE_U32(ctx.r3.u32 + -4, ctx.r8.u32);
	// ble cr6,0x82721064
	if (!ctx.cr6.gt) goto loc_82721064;
	// addi r8,r28,-4
	ctx.r8.s64 = r28.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82721054:
	// lwzu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stbx r7,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82721054
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82721054;
loc_82721064:
	// add r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r5,r29,r5
	ctx.r5.u64 = r29.u64 + ctx.r5.u64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82720fd4
	if (ctx.cr6.lt) goto loc_82720FD4;
loc_82721074:
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82731930) {
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
	ctx.lr = 0x82731938;
	// lwz r11,24(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 24);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r28,0(r6)
	r28.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r27,4(r6)
	r27.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r31,40(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// lwz r29,20(r7)
	r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// lbz r10,-1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// dcbzl r0,r31
	ea = (r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// clrlwi r30,r10,25
	r30.u64 = ctx.r10.u32 & 0x7F;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x827319ec
	if (!ctx.cr6.gt) goto loc_827319EC;
loc_8273196C:
	// lhz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 0);
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// rlwinm r26,r10,0,25,25
	r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// rlwinm r9,r10,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// rlwinm r6,r10,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x827319ac
	if (ctx.cr6.eq) goto loc_827319AC;
	// lhz r26,0(r29)
	r26.u64 = REX_LOAD_U16(r29.u32 + 0);
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// rotlwi r26,r26,8
	r26.u64 = __builtin_rotateleft32(r26.u32, 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r6,r26,r6
	ctx.r6.u64 = r26.u64 | ctx.r6.u64;
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
loc_827319AC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r8,r6,r28
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(r28.s32);
	// lbzx r6,r10,r4
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzx r26,r6,r5
	r26.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// add r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 + r27.u64;
	// rotlwi r6,r6,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// xor r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// or r3,r26,r3
	ctx.r3.u64 = r26.u64 | ctx.r3.u64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sthx r9,r6,r31
	REX_STORE_U16(ctx.r6.u32 + r31.u32, ctx.r9.u16);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// blt cr6,0x8273196c
	if (ctx.cr6.lt) goto loc_8273196C;
loc_827319EC:
	// stw r29,20(r7)
	REX_STORE_U32(ctx.r7.u32 + 20, r29.u32);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82738EF8) {
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
	// lwz r3,15688(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 15688);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,3384(r31)
	REX_STORE_U32(r31.u32 + 3384, ctx.r11.u32);
	// beq cr6,0x82738f30
	if (ctx.cr6.eq) goto loc_82738F30;
	// bl 0x8271b1a0
	ctx.lr = 0x82738F2C;
	sub_8271B1A0(ctx, base);
	// stw r30,15688(r31)
	REX_STORE_U32(r31.u32 + 15688, r30.u32);
loc_82738F30:
	// lwz r3,15696(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15696);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82738f44
	if (ctx.cr6.eq) goto loc_82738F44;
	// bl 0x8271b1a0
	ctx.lr = 0x82738F40;
	sub_8271B1A0(ctx, base);
	// stw r30,15696(r31)
	REX_STORE_U32(r31.u32 + 15696, r30.u32);
loc_82738F44:
	// lwz r3,15692(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15692);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82738f58
	if (ctx.cr6.eq) goto loc_82738F58;
	// bl 0x8271b1a0
	ctx.lr = 0x82738F54;
	sub_8271B1A0(ctx, base);
	// stw r30,15692(r31)
	REX_STORE_U32(r31.u32 + 15692, r30.u32);
loc_82738F58:
	// lwz r3,15700(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15700);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82738f6c
	if (ctx.cr6.eq) goto loc_82738F6C;
	// bl 0x8271b1a0
	ctx.lr = 0x82738F68;
	sub_8271B1A0(ctx, base);
	// stw r30,15700(r31)
	REX_STORE_U32(r31.u32 + 15700, r30.u32);
loc_82738F6C:
	// lwz r11,24896(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24896);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82738fbc
	if (ctx.cr6.eq) goto loc_82738FBC;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,32896
	ctx.r9.u64 = ctx.r10.u64 | 32896;
	// lwzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82738fbc
	if (ctx.cr6.eq) goto loc_82738FBC;
	// stw r30,15704(r31)
	REX_STORE_U32(r31.u32 + 15704, r30.u32);
	// stw r30,15712(r31)
	REX_STORE_U32(r31.u32 + 15712, r30.u32);
	// stw r30,15720(r31)
	REX_STORE_U32(r31.u32 + 15720, r30.u32);
	// stw r30,15728(r31)
	REX_STORE_U32(r31.u32 + 15728, r30.u32);
	// stw r30,15736(r31)
	REX_STORE_U32(r31.u32 + 15736, r30.u32);
	// stw r30,15744(r31)
	REX_STORE_U32(r31.u32 + 15744, r30.u32);
	// stw r30,15752(r31)
	REX_STORE_U32(r31.u32 + 15752, r30.u32);
	// stw r30,15760(r31)
	REX_STORE_U32(r31.u32 + 15760, r30.u32);
	// stw r30,15768(r31)
	REX_STORE_U32(r31.u32 + 15768, r30.u32);
	// stw r30,15776(r31)
	REX_STORE_U32(r31.u32 + 15776, r30.u32);
	// stw r30,15784(r31)
	REX_STORE_U32(r31.u32 + 15784, r30.u32);
	// b 0x827390a8
	goto loc_827390A8;
loc_82738FBC:
	// lwz r3,15704(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15704);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82738fd0
	if (ctx.cr6.eq) goto loc_82738FD0;
	// bl 0x8271b1a0
	ctx.lr = 0x82738FCC;
	sub_8271B1A0(ctx, base);
	// stw r30,15704(r31)
	REX_STORE_U32(r31.u32 + 15704, r30.u32);
loc_82738FD0:
	// lwz r3,15712(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15712);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82738fe4
	if (ctx.cr6.eq) goto loc_82738FE4;
	// bl 0x8271b1a0
	ctx.lr = 0x82738FE0;
	sub_8271B1A0(ctx, base);
	// stw r30,15712(r31)
	REX_STORE_U32(r31.u32 + 15712, r30.u32);
loc_82738FE4:
	// lwz r3,15720(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15720);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82738ff8
	if (ctx.cr6.eq) goto loc_82738FF8;
	// bl 0x8271b1a0
	ctx.lr = 0x82738FF4;
	sub_8271B1A0(ctx, base);
	// stw r30,15720(r31)
	REX_STORE_U32(r31.u32 + 15720, r30.u32);
loc_82738FF8:
	// lwz r3,15728(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15728);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273900c
	if (ctx.cr6.eq) goto loc_8273900C;
	// bl 0x8271b1a0
	ctx.lr = 0x82739008;
	sub_8271B1A0(ctx, base);
	// stw r30,15728(r31)
	REX_STORE_U32(r31.u32 + 15728, r30.u32);
loc_8273900C:
	// lwz r3,15736(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82739020
	if (ctx.cr6.eq) goto loc_82739020;
	// bl 0x8271b1a0
	ctx.lr = 0x8273901C;
	sub_8271B1A0(ctx, base);
	// stw r30,15736(r31)
	REX_STORE_U32(r31.u32 + 15736, r30.u32);
loc_82739020:
	// lwz r3,15744(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15744);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82739034
	if (ctx.cr6.eq) goto loc_82739034;
	// bl 0x8271b1a0
	ctx.lr = 0x82739030;
	sub_8271B1A0(ctx, base);
	// stw r30,15744(r31)
	REX_STORE_U32(r31.u32 + 15744, r30.u32);
loc_82739034:
	// lwz r3,15752(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15752);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82739048
	if (ctx.cr6.eq) goto loc_82739048;
	// bl 0x8271b1a0
	ctx.lr = 0x82739044;
	sub_8271B1A0(ctx, base);
	// stw r30,15752(r31)
	REX_STORE_U32(r31.u32 + 15752, r30.u32);
loc_82739048:
	// lwz r3,15760(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15760);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8273905c
	if (ctx.cr6.eq) goto loc_8273905C;
	// bl 0x8271b1a0
	ctx.lr = 0x82739058;
	sub_8271B1A0(ctx, base);
	// stw r30,15760(r31)
	REX_STORE_U32(r31.u32 + 15760, r30.u32);
loc_8273905C:
	// lwz r3,15768(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82739070
	if (ctx.cr6.eq) goto loc_82739070;
	// bl 0x8271b1a0
	ctx.lr = 0x8273906C;
	sub_8271B1A0(ctx, base);
	// stw r30,15768(r31)
	REX_STORE_U32(r31.u32 + 15768, r30.u32);
loc_82739070:
	// lwz r3,15776(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15776);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82739084
	if (ctx.cr6.eq) goto loc_82739084;
	// bl 0x8271b1a0
	ctx.lr = 0x82739080;
	sub_8271B1A0(ctx, base);
	// stw r30,15776(r31)
	REX_STORE_U32(r31.u32 + 15776, r30.u32);
loc_82739084:
	// lwz r3,15784(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15784);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82739098
	if (ctx.cr6.eq) goto loc_82739098;
	// bl 0x8271b1a0
	ctx.lr = 0x82739094;
	sub_8271B1A0(ctx, base);
	// stw r30,15784(r31)
	REX_STORE_U32(r31.u32 + 15784, r30.u32);
loc_82739098:
	// lwz r3,15792(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15792);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827390ac
	if (ctx.cr6.eq) goto loc_827390AC;
	// bl 0x8271b1a0
	ctx.lr = 0x827390A8;
	sub_8271B1A0(ctx, base);
loc_827390A8:
	// stw r30,15792(r31)
	REX_STORE_U32(r31.u32 + 15792, r30.u32);
loc_827390AC:
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

DEFINE_REX_FUNC(sub_827447E8) {
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
	// bl 0x826a1ca0
	ctx.lr = 0x827447F0;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v0,15
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0xF)));
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// vslb v13,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// beq cr6,0x82744b04
	if (ctx.cr6.eq) goto loc_82744B04;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r11,16
	ctx.r11.s64 = 16;
	// beq cr6,0x82744a84
	if (ctx.cr6.eq) goto loc_82744A84;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v63,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v60,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vspltish v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x3)));
	// add r31,r8,r3
	r31.u64 = ctx.r8.u64 + ctx.r3.u64;
	// vor128 v9,v63,v60
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// add r9,r8,r4
	ctx.r9.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvlx128 v62,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v58,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vspltish v8,4
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x4)));
	// lvlx128 v61,r8,r3
	temp.u32 = ctx.r8.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v12,v62,v58
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvlx128 v56,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r1,-192
	r30.s64 = ctx.r1.s64 + -192;
	// lvrx128 v59,r11,r31
	temp.u32 = ctx.r11.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r29,r1,-192
	r29.s64 = ctx.r1.s64 + -192;
	// vor128 v10,v61,v59
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvrx128 v57,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v11,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vmrghh v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vmrghh v6,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// vslh v30,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r28,r1,-176
	r28.s64 = ctx.r1.s64 + -176;
	// vslh v4,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vsubshs v3,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// vsubshs v7,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// addi r27,r1,-160
	r27.s64 = ctx.r1.s64 + -160;
	// vsubshs v8,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// addi r26,r1,-144
	r26.s64 = ctx.r1.s64 + -144;
	// vslh v31,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// subf r23,r3,r6
	r23.u64 = ctx.r6.u64 - ctx.r3.u64;
	// vaddshs v1,v4,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// addi r25,r1,-160
	r25.s64 = ctx.r1.s64 + -160;
	// vsubshs v2,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// addi r24,r1,-144
	r24.s64 = ctx.r1.s64 + -144;
	// vslh v29,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// subf r22,r7,r6
	r22.u64 = ctx.r6.u64 - ctx.r7.u64;
	// vaddshs v27,v31,v8
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// vaddshs v28,v1,v7
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v26,v30,v2
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v25,v29,v7
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v23,v27,v5
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v24,v28,v5
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v22,v26,v8
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v21,v25,v6
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsrah v19,v23,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v24,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v18,v22,v6
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsrah v17,v21,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v11,v20,v13
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsrah v16,v18,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v12,v17,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v0,v19,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vpkshus128 v55,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvx128 v11,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v10,v16,v13
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vpkshus128 v54,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// stvx128 v12,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v53,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvx128 v0,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v52,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// stvx128 v10,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v55,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,-192(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// lwz r30,-188(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// stvx128 v54,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r31,-176(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// stw r31,0(r23)
	REX_STORE_U32(r23.u32 + 0, r31.u32);
	// stvx128 v53,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v52,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r10.u32);
	// lwz r31,-160(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// add r10,r3,r6
	ctx.r10.u64 = ctx.r3.u64 + ctx.r6.u64;
	// lwz r29,-140(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -140);
	// lwz r28,-172(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r27,-156(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -156);
	// lwz r26,-144(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -144);
	// stw r31,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r31.u32);
	// stwx r26,r6,r7
	REX_STORE_U32(ctx.r6.u32 + ctx.r7.u32, r26.u32);
	// stw r28,4(r23)
	REX_STORE_U32(r23.u32 + 4, r28.u32);
	// stw r30,4(r22)
	REX_STORE_U32(r22.u32 + 4, r30.u32);
	// stw r27,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, r27.u32);
	// stw r29,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, r29.u32);
	// bne cr6,0x82744d24
	if (!ctx.cr6.eq) goto loc_82744D24;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r9,r6,r4
	ctx.r9.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r31,r5,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lvlx128 v51,r6,r4
	temp.u32 = ctx.r6.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r30,r1,-144
	r30.s64 = ctx.r1.s64 + -144;
	// lvlx128 v50,r8,r9
	temp.u32 = ctx.r8.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r8,r31,r9
	ctx.r8.u64 = r31.u64 + ctx.r9.u64;
	// lvlx128 v49,r6,r9
	temp.u32 = ctx.r6.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,-144
	ctx.r6.s64 = ctx.r1.s64 + -144;
	// lvrx128 v48,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r5,r1,-160
	ctx.r5.s64 = ctx.r1.s64 + -160;
	// lvrx128 v47,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v0,v50,v48
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// lvlx128 v46,r31,r9
	temp.u32 = r31.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v11,v49,v47
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvrx128 v45,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r4,r1,-160
	ctx.r4.s64 = ctx.r1.s64 + -160;
	// lvrx128 v44,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v10,v46,v45
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vor128 v9,v51,v44
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8)));
	// addi r9,r1,-176
	ctx.r9.s64 = ctx.r1.s64 + -176;
	// vaddshs v12,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// addi r8,r1,-176
	ctx.r8.s64 = ctx.r1.s64 + -176;
	// vaddshs v11,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// vaddshs v10,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// addi r29,r1,-192
	r29.s64 = ctx.r1.s64 + -192;
	// vaddshs v0,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vpkshus128 v43,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// stvx128 v12,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v42,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvx128 v11,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v41,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// stvx128 v10,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v40,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stvx128 v43,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,-144(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -144);
	// stvx128 v42,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r5,-160(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// stvx128 v41,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r4,-176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// stvx128 v40,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r31,-188(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// lwz r30,-140(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -140);
	// add r8,r3,r10
	ctx.r8.u64 = ctx.r3.u64 + ctx.r10.u64;
	// lwz r28,-172(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r27,-192(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// stw r27,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r27.u32);
	// lwz r29,-156(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -156);
	// stwx r6,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r6.u32);
	// stwx r5,r3,r10
	REX_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r5.u32);
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// stw r30,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, r30.u32);
	// stw r29,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, r29.u32);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// b 0x826a1cf0
	return;
loc_82744A84:
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lvrx128 v38,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v39,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,-144
	ctx.r5.s64 = ctx.r1.s64 + -144;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vor128 v0,v39,v38
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// addi r9,r1,-160
	ctx.r9.s64 = ctx.r1.s64 + -160;
	// addi r4,r1,-144
	ctx.r4.s64 = ctx.r1.s64 + -144;
	// addi r8,r1,-160
	ctx.r8.s64 = ctx.r1.s64 + -160;
	// vaddshs v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lvrx128 v37,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v36,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// subf r10,r3,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r3.u64;
	// vor128 v12,v36,v37
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// vpkshus128 v35,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// vaddshs v12,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vpkshus128 v34,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// stvx128 v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v35,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,-140(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -140);
	// lwz r6,-144(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -144);
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stvx128 v34,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r4,-156(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -156);
	// lwz r5,-160(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// stwx r5,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r5.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// b 0x826a1cf0
	return;
loc_82744B04:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82744d24
	if (ctx.cr6.eq) goto loc_82744D24;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,16
	ctx.r11.s64 = 16;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// beq cr6,0x82744b90
	if (ctx.cr6.eq) goto loc_82744B90;
	// lvrx128 v32,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r3,r1,-144
	ctx.r3.s64 = ctx.r1.s64 + -144;
	// lvlx128 v33,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,-144
	ctx.r4.s64 = ctx.r1.s64 + -144;
	// vor128 v0,v33,v32
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)));
	// lvrx128 v62,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,-160
	ctx.r8.s64 = ctx.r1.s64 + -160;
	// vor128 v12,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// addi r5,r1,-160
	ctx.r5.s64 = ctx.r1.s64 + -160;
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// vaddshs v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v13,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vpkshus128 v61,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v60,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// stvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,-140(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -140);
	// lwz r11,-144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -144);
	// stvx128 v60,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r10,-160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// lwz r8,-156(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -156);
	// stwx r10,r6,r7
	REX_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r10.u32);
	// stw r3,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r3.u32);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// b 0x826a1cf0
	return;
loc_82744B90:
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lvrx128 v58,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v59,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r31,r5,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r5,r9
	ctx.r8.u64 = ctx.r5.u64 + ctx.r9.u64;
	// vor128 v0,v59,v58
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lvrx128 v57,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v55,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r5,r31
	ctx.r10.u64 = ctx.r5.u64 + r31.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vor128 v12,v55,v57
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vaddshs v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// rlwinm r3,r5,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r1,-160
	r30.s64 = ctx.r1.s64 + -160;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// vaddshs v12,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// lvrx128 v56,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vpkshus128 v52,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// lvlx128 v54,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvlx128 v47,r3,r4
	temp.u32 = ctx.r3.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stvx128 v0,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,-160
	ctx.r5.s64 = ctx.r1.s64 + -160;
	// lvrx128 v53,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v49,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r29,r1,-176
	r29.s64 = ctx.r1.s64 + -176;
	// stvx128 v12,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v11,v54,v56
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// lvrx128 v48,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v10,v49,v53
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v46,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v47,v48
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// lvlx128 v45,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vpkshus128 v51,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// stvx128 v52,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v8,v45,v46
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// vaddshs v11,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// addi r30,r1,-128
	r30.s64 = ctx.r1.s64 + -128;
	// vaddshs v10,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// addi r4,r1,-176
	ctx.r4.s64 = ctx.r1.s64 + -176;
	// vaddshs v9,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// addi r8,r1,-112
	ctx.r8.s64 = ctx.r1.s64 + -112;
	// vaddshs v13,v8,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// addi r29,r1,-144
	r29.s64 = ctx.r1.s64 + -144;
	// vpkshus128 v50,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// addi r28,r1,-192
	r28.s64 = ctx.r1.s64 + -192;
	// vpkshus128 v44,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stvx128 v9,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v42,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vpkshus128 v43,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// addi r3,r1,-192
	ctx.r3.s64 = ctx.r1.s64 + -192;
	// addi r30,r1,-144
	r30.s64 = ctx.r1.s64 + -144;
	// stvx128 v51,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,-128
	ctx.r4.s64 = ctx.r1.s64 + -128;
	// stvx128 v10,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stvx128 v13,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stvx128 v11,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stvx128 v50,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stvx128 v44,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stvx128 v43,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,-176(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwz r29,-192(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// lwz r30,-144(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -144);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stvx128 v42,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,-160(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r3,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// stwx r31,r6,r7
	REX_STORE_U32(ctx.r6.u32 + ctx.r7.u32, r31.u32);
	// lwz r27,-112(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -112);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// lwz r29,-128(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -128);
	// lwz r3,-156(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -156);
	// lwz r7,-172(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// stw r27,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r27.u32);
	// lwz r31,-188(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// lwz r27,-108(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// stw r29,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r29.u32);
	// lwz r4,-124(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -124);
	// lwz r28,-140(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -140);
	// stw r30,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, r30.u32);
	// stw r3,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r3.u32);
	// stw r7,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// stw r27,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r27.u32);
	// stw r4,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// stw r28,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, r28.u32);
loc_82744D24:
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82789D60) {
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
	ctx.lr = 0x82789D68;
	// lwz r10,14636(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 14636);
	// li r24,1
	r24.s64 = 1;
	// stw r4,14588(r3)
	REX_STORE_U32(ctx.r3.u32 + 14588, ctx.r4.u32);
	// stw r5,14592(r3)
	REX_STORE_U32(ctx.r3.u32 + 14592, ctx.r5.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r6,14596(r3)
	REX_STORE_U32(ctx.r3.u32 + 14596, ctx.r6.u32);
	// stw r7,14600(r3)
	REX_STORE_U32(ctx.r3.u32 + 14600, ctx.r7.u32);
	// beq cr6,0x82789d94
	if (ctx.cr6.eq) goto loc_82789D94;
	// stw r10,14528(r3)
	REX_STORE_U32(ctx.r3.u32 + 14528, ctx.r10.u32);
	// stw r24,14472(r3)
	REX_STORE_U32(ctx.r3.u32 + 14472, r24.u32);
	// b 0x82789dbc
	goto loc_82789DBC;
loc_82789D94:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,14472(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 14472);
	// lhz r8,14(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// mullw r11,r8,r4
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r8,r11,0,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// srawi r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	// addze r8,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r8.s64 = temp.s64;
	// mullw r11,r8,r9
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// stw r11,14528(r3)
	REX_STORE_U32(ctx.r3.u32 + 14528, ctx.r11.u32);
loc_82789DBC:
	// lwz r9,14528(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 14528);
	// li r27,0
	r27.s64 = 0;
	// lwz r28,14472(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 14472);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// stw r11,14532(r3)
	REX_STORE_U32(ctx.r3.u32 + 14532, ctx.r11.u32);
	// bne cr6,0x82789de0
	if (!ctx.cr6.eq) goto loc_82789DE0;
	// mr r29,r27
	r29.u64 = r27.u64;
	// b 0x82789e00
	goto loc_82789E00;
loc_82789DE0:
	// srawi r11,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 31;
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// xor r31,r5,r11
	r31.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// xor r30,r9,r8
	r30.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// subf r8,r8,r30
	ctx.r8.u64 = r30.u64 - ctx.r8.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r29,r11,r8
	r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
loc_82789E00:
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,14604(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14604);
	// stw r29,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r29.u32);
	// lwz r8,14608(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 14608);
	// lwz r26,14580(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 14580);
	// lhz r30,14(r31)
	r30.u64 = REX_LOAD_U16(r31.u32 + 14);
	// mullw r30,r30,r11
	r30.s64 = int64_t(r30.s32) * int64_t(ctx.r11.s32);
	// srawi r29,r30,3
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7) != 0);
	r29.s64 = r30.s32 >> 3;
	// mullw r30,r8,r9
	r30.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addze r29,r29
	temp.s64 = r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r29.u32;
	r29.s64 = temp.s64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// stw r30,14536(r3)
	REX_STORE_U32(ctx.r3.u32 + 14536, r30.u32);
	// beq cr6,0x82789ea4
	if (ctx.cr6.eq) goto loc_82789EA4;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// bne cr6,0x82789e60
	if (!ctx.cr6.eq) goto loc_82789E60;
	// lhz r30,14(r31)
	r30.u64 = REX_LOAD_U16(r31.u32 + 14);
	// lwz r29,14564(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 14564);
	// lwz r28,14568(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 14568);
	// mullw r30,r29,r30
	r30.s64 = int64_t(r29.s32) * int64_t(r30.s32);
	// srawi r30,r30,3
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7) != 0);
	r30.s64 = r30.s32 >> 3;
	// mullw r9,r28,r9
	ctx.r9.s64 = int64_t(r28.s32) * int64_t(ctx.r9.s32);
	// addze r30,r30
	temp.s64 = r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r30.u32;
	r30.s64 = temp.s64;
	// b 0x82789e9c
	goto loc_82789E9C;
loc_82789E60:
	// lwz r30,14568(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 14568);
	// srawi r29,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	r29.s64 = ctx.r5.s32 >> 31;
	// lhz r28,14(r31)
	r28.u64 = REX_LOAD_U16(r31.u32 + 14);
	// subfic r30,r30,-1
	ctx.xer.ca = r30.u32 <= 4294967295;
	r30.u64 = static_cast<uint64_t>(-1) - r30.u64;
	// lwz r26,14564(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 14564);
	// srawi r25,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	r25.s64 = ctx.r9.s32 >> 31;
	// xor r23,r5,r29
	r23.u64 = ctx.r5.u64 ^ r29.u64;
	// xor r22,r9,r25
	r22.u64 = ctx.r9.u64 ^ r25.u64;
	// subf r9,r29,r23
	ctx.r9.u64 = r23.u64 - r29.u64;
	// mullw r29,r26,r28
	r29.s64 = int64_t(r26.s32) * int64_t(r28.s32);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// subf r30,r25,r22
	r30.u64 = r22.u64 - r25.u64;
	// srawi r29,r29,3
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7) != 0);
	r29.s64 = r29.s32 >> 3;
	// mullw r30,r9,r30
	r30.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// addze r9,r29
	temp.s64 = r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r29.u32;
	ctx.r9.s64 = temp.s64;
loc_82789E9C:
	// add r9,r30,r9
	ctx.r9.u64 = r30.u64 + ctx.r9.u64;
	// stw r9,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
loc_82789EA4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82789eb0
	if (!ctx.cr6.eq) goto loc_82789EB0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_82789EB0:
	// lis r30,12849
	r30.s64 = 842072064;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lis r31,12850
	r31.s64 = 842137600;
	// ori r30,r30,22105
	r30.u64 = r30.u64 | 22105;
	// lis r28,22101
	r28.s64 = 1448411136;
	// lis r26,12338
	r26.s64 = 808583168;
	// lis r25,12593
	r25.s64 = 825294848;
	// ori r29,r31,13392
	r29.u64 = r31.u64 | 13392;
	// ori r28,r28,22857
	r28.u64 = r28.u64 | 22857;
	// ori r26,r26,13385
	r26.u64 = r26.u64 | 13385;
	// ori r25,r25,13392
	r25.u64 = r25.u64 | 13392;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, ctx.xer);
	// bgt cr6,0x82789f88
	if (ctx.cr6.gt) goto loc_82789F88;
	// beq cr6,0x82789f44
	if (ctx.cr6.eq) goto loc_82789F44;
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, ctx.xer);
	// beq cr6,0x82789f98
	if (ctx.cr6.eq) goto loc_82789F98;
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r25.u32, ctx.xer);
	// bne cr6,0x8278a054
	if (!ctx.cr6.eq) goto loc_8278A054;
	// lwz r9,14628(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 14628);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82789f0c
	if (!ctx.cr6.eq) goto loc_82789F0C;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
loc_82789F0C:
	// mullw r31,r10,r5
	r31.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// stw r9,14644(r3)
	REX_STORE_U32(ctx.r3.u32 + 14644, ctx.r9.u32);
	// stw r31,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, r31.u32);
	// mullw r5,r9,r5
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// mullw r4,r8,r4
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// srawi r23,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r23.s64 = ctx.r11.s32 >> 2;
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r8,r5,r31
	ctx.r8.u64 = ctx.r5.u64 + r31.u64;
	// addze r10,r23
	temp.s64 = r23.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r23.u32;
	ctx.r10.s64 = temp.s64;
	// add r5,r4,r11
	ctx.r5.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stw r8,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r8.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r5,14540(r3)
	REX_STORE_U32(ctx.r3.u32 + 14540, ctx.r5.u32);
	// b 0x8278a048
	goto loc_8278A048;
loc_82789F44:
	// srawi r9,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 31;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// xor r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// srawi r31,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	r31.s64 = ctx.r11.s32 >> 1;
	// subf r4,r9,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r9.u64;
	// addze r5,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	ctx.r5.s64 = temp.s64;
	// mullw r9,r4,r10
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// stw r9,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// srawi r4,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 2;
	// rlwinm r31,r9,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r4,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r4.s64 = temp.s64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// srawi r23,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r23.s64 = ctx.r10.s32 >> 1;
	// add r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 + ctx.r4.u64;
	// rlwinm r5,r9,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r5,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r5.u32);
	// b 0x8278a038
	goto loc_8278A038;
loc_82789F88:
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, ctx.xer);
	// beq cr6,0x82789ff8
	if (ctx.cr6.eq) goto loc_82789FF8;
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, ctx.xer);
	// bne cr6,0x8278a054
	if (!ctx.cr6.eq) goto loc_8278A054;
loc_82789F98:
	// lwz r9,14628(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 14628);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82789fb4
	if (!ctx.cr6.eq) goto loc_82789FB4;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// addi r9,r9,15
	ctx.r9.s64 = ctx.r9.s64 + 15;
	// rlwinm r9,r9,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
loc_82789FB4:
	// mullw r31,r9,r5
	r31.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// stw r9,14644(r3)
	REX_STORE_U32(ctx.r3.u32 + 14644, ctx.r9.u32);
	// srawi r31,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r31.s64 = r31.s32 >> 1;
	// mullw r5,r10,r5
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// stw r5,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r5.u32);
	// addze r31,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	r31.s64 = temp.s64;
	// srawi r10,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 1;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// addze r4,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r4.s64 = temp.s64;
	// srawi r23,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	r23.s64 = ctx.r11.s32 >> 1;
	// mullw r10,r4,r9
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// addze r9,r23
	temp.s64 = r23.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r23.u32;
	ctx.r9.s64 = temp.s64;
	// add r5,r31,r5
	ctx.r5.u64 = r31.u64 + ctx.r5.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r5,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r5.u32);
	// b 0x8278a044
	goto loc_8278A044;
loc_82789FF8:
	// srawi r9,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 31;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// xor r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// srawi r31,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	r31.s64 = ctx.r11.s32 >> 1;
	// subf r4,r9,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r9.u64;
	// addze r5,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	ctx.r5.s64 = temp.s64;
	// mullw r9,r4,r10
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// stw r9,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// srawi r4,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 2;
	// rlwinm r31,r9,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r4,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r4.s64 = temp.s64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// srawi r23,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r23.s64 = ctx.r10.s32 >> 1;
	// add r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 + ctx.r4.u64;
	// rlwinm r5,r9,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r5,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r5.u32);
loc_8278A038:
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addze r11,r23
	temp.s64 = r23.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r23.u32;
	ctx.r11.s64 = temp.s64;
	// stw r11,14644(r3)
	REX_STORE_U32(ctx.r3.u32 + 14644, ctx.r11.u32);
loc_8278A044:
	// stw r4,14540(r3)
	REX_STORE_U32(ctx.r3.u32 + 14540, ctx.r4.u32);
loc_8278A048:
	// stw r10,14548(r3)
	REX_STORE_U32(ctx.r3.u32 + 14548, ctx.r10.u32);
	// stw r10,14544(r3)
	REX_STORE_U32(ctx.r3.u32 + 14544, ctx.r10.u32);
	// stw r27,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, r27.u32);
loc_8278A054:
	// lwz r11,14640(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14640);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8278a06c
	if (ctx.cr6.eq) goto loc_8278A06C;
	// stw r11,14492(r3)
	REX_STORE_U32(ctx.r3.u32 + 14492, ctx.r11.u32);
	// stw r24,14476(r3)
	REX_STORE_U32(ctx.r3.u32 + 14476, r24.u32);
	// b 0x8278a094
	goto loc_8278A094;
loc_8278A06C:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,14476(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 14476);
	// lhz r8,14(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// mullw r10,r8,r6
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// addi r5,r10,31
	ctx.r5.s64 = ctx.r10.s64 + 31;
	// rlwinm r4,r5,0,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFE0;
	// srawi r10,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 3;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// mullw r5,r8,r9
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// stw r5,14492(r3)
	REX_STORE_U32(ctx.r3.u32 + 14492, ctx.r5.u32);
loc_8278A094:
	// lwz r8,14492(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 14492);
	// lwz r10,14476(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 14476);
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r9,14496(r3)
	REX_STORE_U32(ctx.r3.u32 + 14496, ctx.r9.u32);
	// bne cr6,0x8278a0b4
	if (!ctx.cr6.eq) goto loc_8278A0B4;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// b 0x8278a0d4
	goto loc_8278A0D4;
loc_8278A0B4:
	// srawi r10,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 31;
	// srawi r9,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 31;
	// xor r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// xor r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// subf r9,r9,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r9.u64;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// mullw r9,r5,r9
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
loc_8278A0D4:
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,14612(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 14612);
	// stw r9,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// lwz r9,14616(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 14616);
	// lhz r5,14(r4)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + 14);
	// mullw r5,r5,r10
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// srawi r31,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	r31.s64 = ctx.r5.s32 >> 3;
	// mullw r5,r9,r8
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addze r8,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	ctx.r8.s64 = temp.s64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// stw r8,14500(r3)
	REX_STORE_U32(ctx.r3.u32 + 14500, ctx.r8.u32);
	// bne cr6,0x8278a10c
	if (!ctx.cr6.eq) goto loc_8278A10C;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8278A10C:
	// lwz r8,16(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r30.u32, ctx.xer);
	// bgt cr6,0x8278a1e4
	if (ctx.cr6.gt) goto loc_8278A1E4;
	// beq cr6,0x8278a188
	if (ctx.cr6.eq) goto loc_8278A188;
	// cmplw cr6,r8,r26
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r26.u32, ctx.xer);
	// beq cr6,0x8278a1f4
	if (ctx.cr6.eq) goto loc_8278A1F4;
	// cmplw cr6,r8,r25
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r25.u32, ctx.xer);
	// bne cr6,0x8278a29c
	if (!ctx.cr6.eq) goto loc_8278A29C;
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// mullw r8,r9,r6
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// xor r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// srawi r4,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 2;
	// subf r6,r5,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r5.u64;
	// addze r7,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r7.s64 = temp.s64;
	// mullw r9,r6,r11
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// stw r9,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
	// srawi r4,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 2;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r4,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 2;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r11,14508(r3)
	REX_STORE_U32(ctx.r3.u32 + 14508, ctx.r11.u32);
	// addze r5,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r5.s64 = temp.s64;
	// stw r7,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r7.u32);
	// stw r6,14504(r3)
	REX_STORE_U32(ctx.r3.u32 + 14504, ctx.r6.u32);
	// stw r11,14512(r3)
	REX_STORE_U32(ctx.r3.u32 + 14512, ctx.r11.u32);
	// stw r5,14648(r3)
	REX_STORE_U32(ctx.r3.u32 + 14648, ctx.r5.u32);
	// b 0x8278a29c
	goto loc_8278A29C;
loc_8278A188:
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// mullw r8,r9,r6
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// xor r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// srawi r4,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 1;
	// subf r6,r5,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r5.u64;
	// addze r7,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r7.s64 = temp.s64;
	// mullw r9,r6,r11
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// stw r9,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// srawi r4,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 2;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r11,14512(r3)
	REX_STORE_U32(ctx.r3.u32 + 14512, ctx.r11.u32);
	// addze r5,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r5.s64 = temp.s64;
	// stw r7,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r7.u32);
	// stw r6,14504(r3)
	REX_STORE_U32(ctx.r3.u32 + 14504, ctx.r6.u32);
	// stw r11,14508(r3)
	REX_STORE_U32(ctx.r3.u32 + 14508, ctx.r11.u32);
	// stw r5,14648(r3)
	REX_STORE_U32(ctx.r3.u32 + 14648, ctx.r5.u32);
	// b 0x8278a29c
	goto loc_8278A29C;
loc_8278A1E4:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r29.u32, ctx.xer);
	// beq cr6,0x8278a250
	if (ctx.cr6.eq) goto loc_8278A250;
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r28.u32, ctx.xer);
	// bne cr6,0x8278a29c
	if (!ctx.cr6.eq) goto loc_8278A29C;
loc_8278A1F4:
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// mullw r8,r9,r6
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// xor r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// srawi r4,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 1;
	// subf r6,r5,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r5.u64;
	// addze r7,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r7.s64 = temp.s64;
	// mullw r9,r6,r11
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// stw r9,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
	// srawi r4,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 2;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r11,14508(r3)
	REX_STORE_U32(ctx.r3.u32 + 14508, ctx.r11.u32);
	// addze r5,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r5.s64 = temp.s64;
	// stw r7,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r7.u32);
	// stw r6,14504(r3)
	REX_STORE_U32(ctx.r3.u32 + 14504, ctx.r6.u32);
	// stw r11,14512(r3)
	REX_STORE_U32(ctx.r3.u32 + 14512, ctx.r11.u32);
	// stw r5,14648(r3)
	REX_STORE_U32(ctx.r3.u32 + 14648, ctx.r5.u32);
	// b 0x8278a29c
	goto loc_8278A29C;
loc_8278A250:
	// srawi r8,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 31;
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// xor r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// srawi r5,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 1;
	// stw r10,14504(r3)
	REX_STORE_U32(ctx.r3.u32 + 14504, ctx.r10.u32);
	// mullw r10,r6,r11
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// stw r10,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r9,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r9.s64 = temp.s64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stw r9,14508(r3)
	REX_STORE_U32(ctx.r3.u32 + 14508, ctx.r9.u32);
	// stw r9,14512(r3)
	REX_STORE_U32(ctx.r3.u32 + 14512, ctx.r9.u32);
	// rlwinm r10,r4,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// stw r10,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// stw r9,14648(r3)
	REX_STORE_U32(ctx.r3.u32 + 14648, ctx.r9.u32);
loc_8278A29C:
	// lwz r9,14560(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 14560);
	// lwz r10,14484(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 14484);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r10,r9
	ctx.r11.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8278a2c8
	if (ctx.cr6.eq) goto loc_8278A2C8;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
loc_8278A2C8:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8278a2d4
	if (!ctx.cr6.eq) goto loc_8278A2D4;
	// stw r10,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
loc_8278A2D4:
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x8278a2e4
	if (!ctx.cr6.eq) goto loc_8278A2E4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8278a2ec
	goto loc_8278A2EC;
loc_8278A2E4:
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8278A2EC:
	// stw r11,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// beq cr6,0x8278a300
	if (ctx.cr6.eq) goto loc_8278A300;
	// stw r10,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// b 0x826a1cf0
	return;
loc_8278A300:
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_827B5CA0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb8
	ctx.lr = 0x827B5CA8;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// li r9,1120
	ctx.r9.s64 = 1120;
	// vspltish v13,15
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0xF)));
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// lwz r30,1164(r6)
	r30.u64 = REX_LOAD_U32(ctx.r6.u32 + 1164);
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v11,5
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x5)));
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
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
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// vspltish v27,7
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_set1_epi16(short(0x7)));
	// lvx128 v10,r6,r9
	ea = (ctx.r6.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,1
	r31.s64 = 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// vaddshs v31,v13,v10
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// li r28,-32
	r28.s64 = -32;
	// vspltish v7,1
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_set1_epi16(short(0x1)));
	// li r29,-16
	r29.s64 = -16;
	// vsubshs v26,v9,v10
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// slw r9,r31,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r8.u8 & 0x3F));
	// li r3,16
	ctx.r3.s64 = 16;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// bne cr6,0x827b5e50
	if (!ctx.cr6.eq) goto loc_827B5E50;
	// lvx128 v60,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lvx128 v61,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v62,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v63,v61,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v62,v60,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvsl v2,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v58,v59,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vmrghb v4,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v3,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v8,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x827b6028
	if (!ctx.cr6.gt) goto loc_827B6028;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_827B5D74:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vslh v5,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// vslh v2,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// vadduhm v23,v5,v10
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// lvx128 v57,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v29,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v28,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// vperm128 v5,v56,v57,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vadduhm v22,v2,v9
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vor v4,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v3,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vslh v21,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v8,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v6,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v10,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vmrghb v8,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v9,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vmrglb v6,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v17,v30,v1
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v16,v28,v29
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v5,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vadduhm v1,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v2,v23,v17
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v30,v22,v16
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vslh v15,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v29,v0,v25
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsubshs v25,v0,v24
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vadduhm v28,v2,v5
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v24,v30,v1
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vsubshs v23,v8,v15
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vsubshs v22,v6,v14
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vadduhm v21,v28,v31
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v20,v24,v31
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v19,v23,v29
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v18,v22,v25
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v5,v21,v19
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v2,v20,v18
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vsrah v17,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v2,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v17,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v16,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// blt cr6,0x827b5d74
	if (ctx.cr6.lt) goto loc_827B5D74;
	// b 0x827b6028
	goto loc_827B6028;
loc_827B5E50:
	// li r31,32
	r31.s64 = 32;
	// lvrx128 v52,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v50,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lvlx128 v55,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v54,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v5,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvrx128 v51,r31,r11
	temp.u32 = r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvrx128 v49,r31,r10
	temp.u32 = r31.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvlx128 v48,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v4,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vor128 v8,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v6,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r31,r11
	temp.u32 = r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v1,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v3,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v1,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x827b6028
	if (!ctx.cr6.gt) goto loc_827B6028;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
loc_827B5ED4:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v30,v10,v10
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v10,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// vor v6,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vor v29,v9,v9
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// vor v9,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v5,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// lvsl v2,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor128 v41,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v42,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v2,v43,v63,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vslh v24,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v3,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v23,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v20,v63,v42,v3
	simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v19,v0,v2
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v18,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v6,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v2,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v25,v1
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v14,v24,v10
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vmrghb v3,v0,v20
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v23,v22,v23
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v22,v21,v9
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vor v28,v8,v8
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vslh v25,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v5,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v8,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vor v1,v19,v19
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)v19.u8));
	// vadduhm v19,v17,v18
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vslh v21,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v18,v14,v16
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vslh v20,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v24,v25
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v16,v22,v23
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vor128 v4,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// vslh v14,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v0,v21
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vsubshs v21,v0,v20
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vadduhm v22,v18,v19
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v20,v16,v17
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vslh v25,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v30,v14
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vadduhm v16,v29,v8
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v19,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v4,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v15,v2,v25
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsubshs v14,v1,v24
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vadduhm v30,v22,v31
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v24,v18,v19
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vslh v28,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v16,v17
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v29,v20,v31
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v20,v15,v23
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v19,v14,v21
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vsubshs v18,v0,v28
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vsubshs v17,v3,v25
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vadduhm v16,v22,v24
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vadduhm v15,v30,v20
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v14,v29,v19
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v30,v17,v18
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v29,v16,v31
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vsrah v28,v15,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v14,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v24,v29,v30
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// stvx128 v28,r10,r28
	ea = (ctx.r10.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r10,r29
	ea = (ctx.r10.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v23,v24,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v23,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// blt cr6,0x827b5ed4
	if (ctx.cr6.lt) goto loc_827B5ED4;
loc_827B6028:
	// vspltish v10,8
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x8)));
	// li r11,0
	ctx.r11.s64 = 0;
	// vspltish v9,-1
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// vspltish v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x0)));
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// vslh v2,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// bne cr6,0x827b60d8
	if (!ctx.cr6.eq) goto loc_827B60D8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827b61c0
	if (!ctx.cr6.gt) goto loc_827B61C0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_827B605C:
	// lvx128 v10,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v6,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v9,v10,v40,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 14));
	// vsldoi128 v8,v10,v40,4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 12));
	// vsldoi128 v10,v10,v40,6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 10));
	// vsubshs v4,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vslh v3,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v8,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v28,v1,v3
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v25,v31,v9
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v24,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v23,v29,v30
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v22,v25,v28
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vsubshs v21,v10,v24
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vadduhm v20,v22,v23
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v19,v21,v4
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v18,v20,v26
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v17,v18,v19
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vsrah v16,v17,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v39,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vor v5,v5,v16
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// stvewx128 v39,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x827b605c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B605C;
	// b 0x827b61c0
	goto loc_827B61C0;
loc_827B60D8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827b61c0
	if (!ctx.cr6.gt) goto loc_827B61C0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_827B60F0:
	// lvx128 v10,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v38,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v8,v9,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 14));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v6,v10,v38,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 14));
	// vsubshs v31,v0,v3
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi v4,v9,v10,4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 12));
	// vsldoi128 v3,v10,v38,4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 12));
	// vsubshs v30,v0,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v9,v9,v10,6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 10));
	// vslh v28,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v10,v10,v38,6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 10));
	// vslh v25,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v25,v29
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v18,v24,v8
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v15,v23,v28
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vslh v21,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v4,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v3,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v14,v22,v6
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v6,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vadduhm v4,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v1,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v29,v14,v15
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vslh v8,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v4,v6
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v23,v29,v1
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vsubshs v28,v9,v8
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v24,v10,v3
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vadduhm v21,v25,v26
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v19,v23,v26
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v22,v28,v30
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v20,v24,v31
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v18,v21,v22
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v17,v19,v20
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vsrah v16,v18,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v17,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v37,v5,v16
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// vpkshus128 v36,v16,v15
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vor128 v5,v37,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// stvx128 v36,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x827b60f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B60F0;
loc_827B61C0:
	// vand v13,v5,v2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vcmpgtuh. v12,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), 0xFFFF);
	// mfocrf r11,2
	ctx.r11.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x826a1d08
	return;
}

