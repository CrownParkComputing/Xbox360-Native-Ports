#include "hydrothunder_funcs.33.h"

DEFINE_REX_FUNC(sub_82121D40) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,69(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 69);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82121d58
	if (ctx.cr0.eq) goto loc_82121D58;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82121dc4
	goto loc_82121DC4;
loc_82121D58:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,69(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 69);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82121da4
	if (!ctx.cr0.eq) goto loc_82121DA4;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82121d78
	goto loc_82121D78;
loc_82121D70:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_82121D78:
	// lbz r9,69(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 69);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82121d70
	if (ctx.cr0.eq) goto loc_82121D70;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82121D8C:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82121db4
	if (!ctx.cr6.eq) goto loc_82121DB4;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82121DA4:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,69(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 69);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82121d8c
	if (ctx.cr0.eq) goto loc_82121D8C;
loc_82121DB4:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,69(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 69);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_82121DC4:
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212AD70) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,61(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 61);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8212ad90
	if (!ctx.cr0.eq) goto loc_8212AD90;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_8212AD90:
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
	// bne cr6,0x8212adb0
	if (!ctx.cr6.eq) goto loc_8212ADB0;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x8212adcc
	goto loc_8212ADCC;
loc_8212ADB0:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8212adc8
	if (!ctx.cr6.eq) goto loc_8212ADC8;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x8212adcc
	goto loc_8212ADCC;
loc_8212ADC8:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8212ADCC:
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212E1F8) {
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
	// li r3,256
	ctx.r3.s64 = 256;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x8212E22C;
	sub_8269D1D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x8212E238;
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

DEFINE_REX_FUNC(sub_82130E88) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82130F70) {
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
	// addi r3,r3,2020
	ctx.r3.s64 = ctx.r3.s64 + 2020;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8212aaa0
	ctx.lr = 0x82130F94;
	sub_8212AAA0(ctx, base);
	// lwz r3,2024(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2024);
	// bl 0x8269ce98
	ctx.lr = 0x82130F9C;
	sub_8269CE98(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-20752
	ctx.r11.s64 = ctx.r11.s64 + -20752;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x82130fb8
	if (ctx.cr0.eq) goto loc_82130FB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82130FB8;
	sub_8269CE98(ctx, base);
loc_82130FB8:
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

DEFINE_REX_FUNC(sub_82134360) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822c9a30
	ctx.lr = 0x8213438C;
	sub_822C9A30(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x822c5628
	ctx.lr = 0x82134394;
	sub_822C5628(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x822cf418
	ctx.lr = 0x821343A0;
	sub_822CF418(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,184(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 184);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822c71d8
	ctx.lr = 0x821343C8;
	sub_822C71D8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,184(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x822cf950
	ctx.lr = 0x821343D8;
	sub_822CF950(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6116(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213445c
	if (ctx.cr6.eq) goto loc_8213445C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821343F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8213445c
	if (ctx.cr0.eq) goto loc_8213445C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134414;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-20420
	ctx.r4.s64 = ctx.r11.s64 + -20420;
	// bl 0x82125d00
	ctx.lr = 0x82134420;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8213445c
	if (!ctx.cr0.eq) goto loc_8213445C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213443C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r5,256(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-20112
	ctx.r4.s64 = ctx.r11.s64 + -20112;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213445C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8213445C:
	// li r3,1
	ctx.r3.s64 = 1;
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

DEFINE_REX_FUNC(sub_8213BA48) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8213b670
	ctx.lr = 0x8213BA70;
	sub_8213B670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8213baa8
	ctx.lr = 0x8213BA7C;
	sub_8213BAA8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8213baa8
	ctx.lr = 0x8213BA88;
	sub_8213BAA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8213add0
	ctx.lr = 0x8213BA90;
	sub_8213ADD0(ctx, base);
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

DEFINE_REX_FUNC(sub_8213F000) {
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
	ctx.lr = 0x8213F008;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// addi r4,r11,-17336
	ctx.r4.s64 = ctx.r11.s64 + -17336;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x8215f670
	ctx.lr = 0x8213F040;
	sub_8215F670(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8213F048;
	sub_8215F0F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,8(r25)
	REX_STORE_U32(r25.u32 + 8, r30.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8213ef58
	ctx.lr = 0x8213F068;
	sub_8213EF58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213f078
	if (!ctx.cr0.eq) goto loc_8213F078;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8213f0b4
	goto loc_8213F0B4;
loc_8213F078:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x8213f0c0
	ctx.lr = 0x8213F084;
	sub_8213F0C0(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// lwz r3,6036(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6036);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213F0A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
loc_8213F0B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_821462D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821462E0;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82146360
	goto loc_82146360;
loc_821462F0:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,-4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// mulli r10,r9,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mulli r9,r8,12
	ctx.r9.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(12));
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r30,0(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r29,r9,r7
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	// subf r9,r30,r8
	ctx.r9.u64 = ctx.r8.u64 - r30.u64;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// subf r10,r29,r10
	ctx.r10.u64 = ctx.r10.u64 - r29.u64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82146344
	if (!ctx.cr6.lt) goto loc_82146344;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82146344:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stwx r10,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
loc_82146360:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x821462f0
	if (ctx.cr6.lt) goto loc_821462F0;
	// bne cr6,0x82146384
	if (!ctx.cr6.eq) goto loc_82146384;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r4,r5,-1
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82146384:
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// cmpw cr6,r31,r4
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r4.s32, ctx.xer);
	// b 0x821463fc
	goto loc_821463FC;
loc_82146398:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mulli r9,r9,12
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// lwzx r8,r10,r3
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// mulli r10,r8,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(12));
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r30,8(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// subf r10,r10,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r10.u64;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// subf r9,r9,r30
	ctx.r9.u64 = r30.u64 - ctx.r9.u64;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82146404
	if (!ctx.cr6.lt) goto loc_82146404;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r5.s32, ctx.xer);
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// stwx r8,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r8.u32);
loc_821463FC:
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// blt cr6,0x82146398
	if (ctx.cr6.lt) goto loc_82146398;
loc_82146404:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82151350) {
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
	ctx.lr = 0x82151374;
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
	ctx.lr = 0x8215138C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6184(r10)
	REX_STORE_U32(ctx.r10.u32 + 6184, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82152F48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82152F50;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,444(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 444);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82152fb4
	if (ctx.cr6.eq) goto loc_82152FB4;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bl 0x823ecca8
	ctx.lr = 0x82152F6C;
	sub_823ECCA8(ctx, base);
	// lwz r11,444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 444);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82152fac
	if (!ctx.cr6.gt) goto loc_82152FAC;
	// addi r29,r31,440
	r29.s64 = r31.s64 + 440;
loc_82152F80:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822434c8
	ctx.lr = 0x82152F8C;
	sub_822434C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82152b60
	ctx.lr = 0x82152F9C;
	sub_82152B60(ctx, base);
	// lwz r11,444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 444);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82152f80
	if (ctx.cr6.lt) goto loc_82152F80;
loc_82152FAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,444(r31)
	REX_STORE_U32(r31.u32 + 444, ctx.r11.u32);
loc_82152FB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821565E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821565F0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// ori r11,r11,40448
	ctx.r11.u64 = ctx.r11.u64 | 40448;
	// lwzx r4,r3,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// bl 0x82155fd0
	ctx.lr = 0x82156608;
	sub_82155FD0(ctx, base);
	// addis r31,r29,1
	r31.s64 = r29.s64 + 65536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r31,-25128
	r31.s64 = r31.s64 + -25128;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ed2c0
	ctx.lr = 0x82156624;
	sub_823ED2C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82156694
	if (ctx.cr0.eq) goto loc_82156694;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ede70
	ctx.lr = 0x82156634;
	sub_823EDE70(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 21, ctx.xer);
	// beq cr6,0x8215667c
	if (ctx.cr6.eq) goto loc_8215667C;
	// cmpwi cr6,r10,112
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 112, ctx.xer);
	// beq cr6,0x82156674
	if (ctx.cr6.eq) goto loc_82156674;
	// cmpwi cr6,r10,1167
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1167, ctx.xer);
	// beq cr6,0x8215667c
	if (ctx.cr6.eq) goto loc_8215667C;
	// cmpwi cr6,r10,1392
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1392, ctx.xer);
	// beq cr6,0x8215666c
	if (ctx.cr6.eq) goto loc_8215666C;
	// cmpwi cr6,r10,1617
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1617, ctx.xer);
	// beq cr6,0x8215667c
	if (ctx.cr6.eq) goto loc_8215667C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82156680
	goto loc_82156680;
loc_8215666C:
	// li r10,5
	ctx.r10.s64 = 5;
	// b 0x82156680
	goto loc_82156680;
loc_82156674:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x82156680
	goto loc_82156680;
loc_8215667C:
	// li r10,4
	ctx.r10.s64 = 4;
loc_82156680:
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r10,10000(r30)
	REX_STORE_U32(r30.u32 + 10000, ctx.r10.u32);
	// ori r10,r9,40444
	ctx.r10.u64 = ctx.r9.u64 | 40444;
loc_8215668C:
	// stwx r11,r29,r10
	REX_STORE_U32(r29.u32 + ctx.r10.u32, ctx.r11.u32);
	// b 0x82156810
	goto loc_82156810;
loc_82156694:
	// lwz r11,10096(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10096);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821566f8
	if (!ctx.cr6.eq) goto loc_821566F8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823ed568
	ctx.lr = 0x821566B4;
	sub_823ED568(ctx, base);
	// stw r3,10096(r30)
	REX_STORE_U32(r30.u32 + 10096, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821566f8
	if (!ctx.cr0.eq) goto loc_821566F8;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r11,r11,980
	ctx.r11.s64 = ctx.r11.s64 + 980;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821566d8
	if (ctx.cr6.lt) goto loc_821566D8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821566D8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823edd68
	ctx.lr = 0x821566E4;
	sub_823EDD68(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,40444
	ctx.r10.u64 = ctx.r10.u64 | 40444;
	// stw r11,10000(r30)
	REX_STORE_U32(r30.u32 + 10000, ctx.r11.u32);
	// b 0x8215668c
	goto loc_8215668C;
loc_821566F8:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r31,r11,980
	r31.s64 = ctx.r11.s64 + 980;
	// addi r5,r10,-8580
	ctx.r5.s64 = ctx.r10.s64 + -8580;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82121610
	ctx.lr = 0x82156714;
	sub_82121610(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,10048
	ctx.r4.s64 = r30.s64 + 10048;
	// bl 0x82121dd0
	ctx.lr = 0x82156724;
	sub_82121DD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120670
	ctx.lr = 0x82156730;
	sub_82120670(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82156740;
	sub_82120AC0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82156754
	if (!ctx.cr6.lt) goto loc_82156754;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_82156754:
	// lis r8,16384
	ctx.r8.s64 = 1073741824;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,128
	ctx.r8.u64 = ctx.r8.u64 | 128;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// bl 0x823ede98
	ctx.lr = 0x82156774;
	sub_823EDE98(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,10076(r30)
	REX_STORE_U32(r30.u32 + 10076, ctx.r3.u32);
	// bne cr6,0x821567b8
	if (!ctx.cr6.eq) goto loc_821567B8;
loc_82156780:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82156794
	if (ctx.cr6.lt) goto loc_82156794;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x82156798
	goto loc_82156798;
loc_82156794:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82156798:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823edd68
	ctx.lr = 0x821567A0;
	sub_823EDD68(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,40444
	ctx.r10.u64 = ctx.r10.u64 | 40444;
	// stw r11,10000(r30)
	REX_STORE_U32(r30.u32 + 10000, ctx.r11.u32);
	// stwx r11,r29,r10
	REX_STORE_U32(r29.u32 + ctx.r10.u32, ctx.r11.u32);
	// b 0x82156800
	goto loc_82156800;
loc_821567B8:
	// lwz r11,10032(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10032);
	// addi r7,r30,10080
	ctx.r7.s64 = r30.s64 + 10080;
	// addi r6,r30,10044
	ctx.r6.s64 = r30.s64 + 10044;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823ee330
	ctx.lr = 0x821567D0;
	sub_823EE330(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821567f0
	if (!ctx.cr0.eq) goto loc_821567F0;
	// bl 0x823ee280
	ctx.lr = 0x821567DC;
	sub_823EE280(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x821567f0
	if (ctx.cr6.eq) goto loc_821567F0;
	// lwz r3,10076(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 10076);
	// bl 0x823ed360
	ctx.lr = 0x821567EC;
	sub_823ED360(ctx, base);
	// b 0x82156780
	goto loc_82156780;
loc_821567F0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,7
	ctx.r10.s64 = 7;
	// ori r11,r11,40444
	ctx.r11.u64 = ctx.r11.u64 | 40444;
	// stwx r10,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, ctx.r10.u32);
loc_82156800:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82156810;
	sub_82120AC0(ctx, base);
loc_82156810:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82167180) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,-21096
	ctx.r4.s64 = ctx.r11.s64 + -21096;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x821671A8;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215fb50
	ctx.lr = 0x821671B0;
	sub_8215FB50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216721c
	if (ctx.cr0.eq) goto loc_8216721C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-21088
	ctx.r4.s64 = ctx.r11.s64 + -21088;
	// bl 0x8215f338
	ctx.lr = 0x821671C8;
	sub_8215F338(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// bl 0x8215fb50
	ctx.lr = 0x821671D0;
	sub_8215FB50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216721c
	if (ctx.cr0.eq) goto loc_8216721C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,23056
	ctx.r4.s64 = ctx.r11.s64 + 23056;
	// bl 0x8215f338
	ctx.lr = 0x821671E8;
	sub_8215F338(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// bl 0x8215fb50
	ctx.lr = 0x821671F0;
	sub_8215FB50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216721c
	if (ctx.cr0.eq) goto loc_8216721C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,23084
	ctx.r4.s64 = ctx.r11.s64 + 23084;
	// bl 0x8215f338
	ctx.lr = 0x82167208;
	sub_8215F338(ctx, base);
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// bl 0x8215fb50
	ctx.lr = 0x82167210;
	sub_8215FB50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82167220
	if (!ctx.cr0.eq) goto loc_82167220;
loc_8216721C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82167220:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

DEFINE_REX_FUNC(sub_8216B9A8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blt cr6,0x8216ba0c
	if (ctx.cr6.lt) goto loc_8216BA0C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,24480
	ctx.r4.s64 = ctx.r11.s64 + 24480;
	// addi r3,r10,24632
	ctx.r3.s64 = ctx.r10.s64 + 24632;
	// li r5,261
	ctx.r5.s64 = 261;
	// bl 0x821231d0
	ctx.lr = 0x8216BA0C;
	sub_821231D0(ctx, base);
loc_8216BA0C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x8216ba38
	if (!ctx.cr6.gt) goto loc_8216BA38;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_8216BA20:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8216ba20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216BA20;
loc_8216BA38:
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

DEFINE_REX_FUNC(sub_821712E8) {
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
	// lwz r4,56(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6044(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6044);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82171318;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6048(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82171334;
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

DEFINE_REX_FUNC(sub_821734B8) {
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
	ctx.lr = 0x821734C0;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lwz r31,112(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// bl 0x823fbf60
	ctx.lr = 0x821734E0;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821734F0:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821734f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821734F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,26204
	ctx.r4.s64 = ctx.r10.s64 + 26204;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// add r3,r31,r10
	ctx.r3.u64 = r31.u64 + ctx.r10.u64;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// lwzx r30,r31,r11
	r30.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82173528;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// bctrl 
	ctx.lr = 0x82173548;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,27484
	ctx.r4.s64 = ctx.r10.s64 + 27484;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r31,r10
	ctx.r3.u64 = r31.u64 + ctx.r10.u64;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// lwzx r30,r31,r11
	r30.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82173574;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 52);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// bctrl 
	ctx.lr = 0x82173594;
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
	// add r3,r31,r10
	ctx.r3.u64 = r31.u64 + ctx.r10.u64;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// lwzx r30,r31,r11
	r30.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821735C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// bctrl 
	ctx.lr = 0x821735E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,27528
	ctx.r4.s64 = ctx.r10.s64 + 27528;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r31,r10
	ctx.r3.u64 = r31.u64 + ctx.r10.u64;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// lwzx r30,r31,r11
	r30.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8217360C;
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
	ctx.lr = 0x8217362C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8217EA80) {
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
	ctx.lr = 0x8217EA88;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x8217d058
	ctx.lr = 0x8217EAA4;
	sub_8217D058(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8217a4b8
	ctx.lr = 0x8217EAB0;
	sub_8217A4B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8217eda0
	if (ctx.cr6.eq) goto loc_8217EDA0;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217eda0
	if (ctx.cr0.eq) goto loc_8217EDA0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r4,r11,29228
	ctx.r4.s64 = ctx.r11.s64 + 29228;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8217d470
	ctx.lr = 0x8217EAE0;
	sub_8217D470(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217eda0
	if (ctx.cr0.eq) goto loc_8217EDA0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8217eb10
	if (ctx.cr6.eq) goto loc_8217EB10;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8217cef0
	ctx.lr = 0x8217EB00;
	sub_8217CEF0(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8217EB10:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r21,r31,44
	r21.s64 = r31.s64 + 44;
	// addi r29,r11,-26856
	r29.s64 = ctx.r11.s64 + -26856;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r30,r30,5
	r30.s64 = r30.s64 + 5;
	// bl 0x8217a390
	ctx.lr = 0x8217EB30;
	sub_8217A390(ctx, base);
	// addi r20,r31,48
	r20.s64 = r31.s64 + 48;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8217a390
	ctx.lr = 0x8217EB44;
	sub_8217A390(ctx, base);
	// addi r19,r31,52
	r19.s64 = r31.s64 + 52;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8217a390
	ctx.lr = 0x8217EB58;
	sub_8217A390(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8217edc0
	if (ctx.cr6.eq) goto loc_8217EDC0;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r28,-1
	r28.s64 = -1;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r11,-20
	r29.s64 = ctx.r11.s64 + -20;
	// addi r26,r10,28948
	r26.s64 = ctx.r10.s64 + 28948;
	// addi r24,r9,29260
	r24.s64 = ctx.r9.s64 + 29260;
	// addi r23,r8,29248
	r23.s64 = ctx.r8.s64 + 29248;
	// addi r22,r7,29240
	r22.s64 = ctx.r7.s64 + 29240;
loc_8217EB90:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217edc0
	if (ctx.cr0.eq) goto loc_8217EDC0;
	// cmpwi cr6,r11,62
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 62, ctx.xer);
	// beq cr6,0x8217ed98
	if (ctx.cr6.eq) goto loc_8217ED98;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8217d058
	ctx.lr = 0x8217EBB0;
	sub_8217D058(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8217d470
	ctx.lr = 0x8217EBC4;
	sub_8217D470(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// beq 0x8217ec40
	if (ctx.cr0.eq) goto loc_8217EC40;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r29,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// bl 0x8217e708
	ctx.lr = 0x8217EC04;
	sub_8217E708(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8217EC14:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217ec14
	if (!ctx.cr6.eq) goto loc_8217EC14;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8217a390
	ctx.lr = 0x8217EC38;
	sub_8217A390(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x8217ed54
	goto loc_8217ED54;
loc_8217EC40:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8217d470
	ctx.lr = 0x8217EC50;
	sub_8217D470(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// beq 0x8217eccc
	if (ctx.cr0.eq) goto loc_8217ECCC;
	// stw r26,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r26.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// stw r29,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r29.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r28,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r28.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r28,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r28.u32);
	// stw r31,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r31.u32);
	// stw r29,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r29.u32);
	// stw r31,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// stw r31,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// stw r31,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r31.u32);
	// bl 0x8217e708
	ctx.lr = 0x8217EC90;
	sub_8217E708(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8217ECA0:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217eca0
	if (!ctx.cr6.eq) goto loc_8217ECA0;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8217a390
	ctx.lr = 0x8217ECC4;
	sub_8217A390(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x8217ed54
	goto loc_8217ED54;
loc_8217ECCC:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8217d470
	ctx.lr = 0x8217ECDC;
	sub_8217D470(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217ed5c
	if (ctx.cr0.eq) goto loc_8217ED5C;
	// stw r26,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r26.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stw r29,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, r29.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// stw r28,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, r28.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r28,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r28.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r31,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, r31.u32);
	// stw r29,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, r29.u32);
	// stw r31,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r31.u32);
	// stw r31,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// stw r31,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, r31.u32);
	// bl 0x8217e708
	ctx.lr = 0x8217ED1C;
	sub_8217E708(ctx, base);
	// lwz r11,200(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8217ED2C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217ed2c
	if (!ctx.cr6.eq) goto loc_8217ED2C;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8217a390
	ctx.lr = 0x8217ED50;
	sub_8217A390(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
loc_8217ED54:
	// bl 0x8217a638
	ctx.lr = 0x8217ED58;
	sub_8217A638(ctx, base);
	// b 0x8217ed8c
	goto loc_8217ED8C;
loc_8217ED5C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8217edc0
	if (ctx.cr6.eq) goto loc_8217EDC0;
loc_8217ED64:
	// lbz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 0);
	// extsb. r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217ed8c
	if (ctx.cr0.eq) goto loc_8217ED8C;
	// cmpwi cr6,r11,62
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 62, ctx.xer);
	// beq cr6,0x8217ed8c
	if (ctx.cr6.eq) goto loc_8217ED8C;
	// bl 0x8217cd98
	ctx.lr = 0x8217ED7C;
	sub_8217CD98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8217ed8c
	if (!ctx.cr0.eq) goto loc_8217ED8C;
	// addic. r30,r30,1
	ctx.xer.ca = r30.u32 > 4294967294;
	r30.s64 = r30.s64 + 1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8217ed64
	if (!ctx.cr0.eq) goto loc_8217ED64;
loc_8217ED8C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8217eb90
	if (!ctx.cr6.eq) goto loc_8217EB90;
	// b 0x8217edc0
	goto loc_8217EDC0;
loc_8217ED98:
	// addi r3,r30,1
	ctx.r3.s64 = r30.s64 + 1;
	// b 0x8217edc4
	goto loc_8217EDC4;
loc_8217EDA0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8217edc0
	if (ctx.cr6.eq) goto loc_8217EDC0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8217daf0
	ctx.lr = 0x8217EDC0;
	sub_8217DAF0(ctx, base);
loc_8217EDC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8217EDC4:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_821952F0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,6092(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82195728) {
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
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219575C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lfs f2,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// addi r6,r31,16
	ctx.r6.s64 = r31.s64 + 16;
	// lfs f1,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,6096(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6096);
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82175f20
	ctx.lr = 0x8219577C;
	sub_82175F20(ctx, base);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82195794;
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

DEFINE_REX_FUNC(sub_82197D48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82197D50;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82197D70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 92);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82197e04
	if (ctx.cr6.gt) goto loc_82197E04;
	// lwz r31,56(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 56);
	// addi r11,r30,52
	ctx.r11.s64 = r30.s64 + 52;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82197e04
	if (ctx.cr6.eq) goto loc_82197E04;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82197da4
	if (!ctx.cr6.eq) goto loc_82197DA4;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82197DA4:
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82197db4
	if (ctx.cr6.eq) goto loc_82197DB4;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_82197DB4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82197dc0
	if (ctx.cr6.eq) goto loc_82197DC0;
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82197DC0:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82197DF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r30)
	REX_STORE_U32(r30.u32 + 96, ctx.r11.u32);
	// b 0x82197e08
	goto loc_82197E08;
loc_82197E04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82197E08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8219E378) {
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
	ctx.lr = 0x8219E380;
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r16,0
	r16.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r16
	r30.u64 = r16.u64;
	// stw r16,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r16.u32);
	// bl 0x8214f4f0
	ctx.lr = 0x8219E398;
	sub_8214F4F0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r16,76(r31)
	REX_STORE_U32(r31.u32 + 76, r16.u32);
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// addi r10,r10,-28924
	ctx.r10.s64 = ctx.r10.s64 + -28924;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// lfs f13,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r27,r31,72
	r27.s64 = r31.s64 + 72;
	// lfs f0,228(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// addi r25,r31,76
	r25.s64 = r31.s64 + 76;
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// addi r24,r31,80
	r24.s64 = r31.s64 + 80;
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// addi r23,r31,84
	r23.s64 = r31.s64 + 84;
	// stfs f13,84(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// stb r11,91(r31)
	REX_STORE_U8(r31.u32 + 91, ctx.r11.u8);
	// stb r11,90(r31)
	REX_STORE_U8(r31.u32 + 90, ctx.r11.u8);
	// lfs f0,15048(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,89(r31)
	REX_STORE_U8(r31.u32 + 89, ctx.r11.u8);
	// lfs f12,700(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 700);
	ctx.f12.f64 = double(temp.f32);
	// stb r11,88(r31)
	REX_STORE_U8(r31.u32 + 88, ctx.r11.u8);
	// lfs f11,572(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 572);
	ctx.f11.f64 = double(temp.f32);
	// stb r11,95(r31)
	REX_STORE_U8(r31.u32 + 95, ctx.r11.u8);
	// addi r29,r31,88
	r29.s64 = r31.s64 + 88;
	// stb r11,94(r31)
	REX_STORE_U8(r31.u32 + 94, ctx.r11.u8);
	// addi r28,r31,92
	r28.s64 = r31.s64 + 92;
	// stb r11,93(r31)
	REX_STORE_U8(r31.u32 + 93, ctx.r11.u8);
	// addi r19,r31,96
	r19.s64 = r31.s64 + 96;
	// stb r11,92(r31)
	REX_STORE_U8(r31.u32 + 92, ctx.r11.u8);
	// stfs f13,96(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f13,100(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// addi r17,r31,100
	r17.s64 = r31.s64 + 100;
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// addi r20,r31,112
	r20.s64 = r31.s64 + 112;
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
	// addi r18,r31,128
	r18.s64 = r31.s64 + 128;
	// stfs f12,120(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// addi r22,r31,144
	r22.s64 = r31.s64 + 144;
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// addi r21,r31,160
	r21.s64 = r31.s64 + 160;
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// addi r15,r31,176
	r15.s64 = r31.s64 + 176;
	// stfs f12,136(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// addi r14,r31,180
	r14.s64 = r31.s64 + 180;
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// stb r16,176(r31)
	REX_STORE_U8(r31.u32 + 176, r16.u8);
	// stfs f11,180(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// bl 0x822f6280
	ctx.lr = 0x8219E478;
	sub_822F6280(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq 0x8219e4ac
	if (ctx.cr0.eq) goto loc_8219E4AC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r4,r11,-29384
	ctx.r4.s64 = ctx.r11.s64 + -29384;
	// bl 0x82120600
	ctx.lr = 0x8219E490;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r30,1
	r30.s64 = 1;
	// bl 0x82196ba8
	ctx.lr = 0x8219E4A4;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219e4b0
	goto loc_8219E4B0;
loc_8219E4AC:
	// stw r16,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r16.u32);
loc_8219E4B0:
	// addi r26,r31,28
	r26.s64 = r31.s64 + 28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82145710
	ctx.lr = 0x8219E4C0;
	sub_82145710(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219e4dc
	if (ctx.cr0.eq) goto loc_8219E4DC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x8219E4DC;
	sub_82120AC0(ctx, base);
loc_8219E4DC:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8219E4E4;
	sub_822F6280(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x8219e518
	if (ctx.cr0.eq) goto loc_8219E518;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-29364
	ctx.r4.s64 = ctx.r11.s64 + -29364;
	// bl 0x82120600
	ctx.lr = 0x8219E4FC;
	sub_82120600(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// ori r30,r30,2
	r30.u64 = r30.u64 | 2;
	// bl 0x82197628
	ctx.lr = 0x8219E510;
	sub_82197628(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219e51c
	goto loc_8219E51C;
loc_8219E518:
	// stw r16,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r16.u32);
loc_8219E51C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82145710
	ctx.lr = 0x8219E528;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219e544
	if (ctx.cr0.eq) goto loc_8219E544;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r30,r30,0,31,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x8219E544;
	sub_82120AC0(ctx, base);
loc_8219E544:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8219E54C;
	sub_822F6280(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x8219e580
	if (ctx.cr0.eq) goto loc_8219E580;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r11,-29348
	ctx.r4.s64 = ctx.r11.s64 + -29348;
	// bl 0x82120600
	ctx.lr = 0x8219E564;
	sub_82120600(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// ori r30,r30,4
	r30.u64 = r30.u64 | 4;
	// bl 0x82196ba8
	ctx.lr = 0x8219E578;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219e584
	goto loc_8219E584;
loc_8219E580:
	// stw r16,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r16.u32);
loc_8219E584:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82145710
	ctx.lr = 0x8219E590;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219e5ac
	if (ctx.cr0.eq) goto loc_8219E5AC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// rlwinm r30,r30,0,30,28
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x8219E5AC;
	sub_82120AC0(ctx, base);
loc_8219E5AC:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8219E5B4;
	sub_822F6280(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x8219e5e8
	if (ctx.cr0.eq) goto loc_8219E5E8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-29332
	ctx.r4.s64 = ctx.r11.s64 + -29332;
	// bl 0x82120600
	ctx.lr = 0x8219E5CC;
	sub_82120600(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// ori r30,r30,8
	r30.u64 = r30.u64 | 8;
	// bl 0x82196ba8
	ctx.lr = 0x8219E5E0;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219e5ec
	goto loc_8219E5EC;
loc_8219E5E8:
	// stw r16,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r16.u32);
loc_8219E5EC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82145710
	ctx.lr = 0x8219E5F8;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219e614
	if (ctx.cr0.eq) goto loc_8219E614;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r30,r30,0,29,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x8219E614;
	sub_82120AC0(ctx, base);
loc_8219E614:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8219E61C;
	sub_822F6280(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x8219e650
	if (ctx.cr0.eq) goto loc_8219E650;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r4,r11,-29316
	ctx.r4.s64 = ctx.r11.s64 + -29316;
	// bl 0x82120600
	ctx.lr = 0x8219E634;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// ori r30,r30,16
	r30.u64 = r30.u64 | 16;
	// bl 0x8219d708
	ctx.lr = 0x8219E648;
	sub_8219D708(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219e654
	goto loc_8219E654;
loc_8219E650:
	// stw r16,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r16.u32);
loc_8219E654:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82145710
	ctx.lr = 0x8219E660;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219e67c
	if (ctx.cr0.eq) goto loc_8219E67C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// rlwinm r30,r30,0,28,26
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x8219E67C;
	sub_82120AC0(ctx, base);
loc_8219E67C:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8219E684;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8219e6b8
	if (ctx.cr0.eq) goto loc_8219E6B8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,-29304
	ctx.r4.s64 = ctx.r11.s64 + -29304;
	// bl 0x82120600
	ctx.lr = 0x8219E69C;
	sub_82120600(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,32
	r30.u64 = r30.u64 | 32;
	// bl 0x8219d708
	ctx.lr = 0x8219E6B0;
	sub_8219D708(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219e6bc
	goto loc_8219E6BC;
loc_8219E6B8:
	// stw r16,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r16.u32);
loc_8219E6BC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82145710
	ctx.lr = 0x8219E6C8;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219e6e4
	if (ctx.cr0.eq) goto loc_8219E6E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// rlwinm r30,r30,0,27,25
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// bl 0x82120ac0
	ctx.lr = 0x8219E6E4;
	sub_82120AC0(ctx, base);
loc_8219E6E4:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8219E6EC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8219e720
	if (ctx.cr0.eq) goto loc_8219E720;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-29292
	ctx.r4.s64 = ctx.r11.s64 + -29292;
	// bl 0x82120600
	ctx.lr = 0x8219E704;
	sub_82120600(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,64
	r30.u64 = r30.u64 | 64;
	// bl 0x82196ba8
	ctx.lr = 0x8219E718;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219e724
	goto loc_8219E724;
loc_8219E720:
	// stw r16,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r16.u32);
loc_8219E724:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82145710
	ctx.lr = 0x8219E730;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219e74c
	if (ctx.cr0.eq) goto loc_8219E74C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r30,r30,0,26,24
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// bl 0x82120ac0
	ctx.lr = 0x8219E74C;
	sub_82120AC0(ctx, base);
loc_8219E74C:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8219E754;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8219e788
	if (ctx.cr0.eq) goto loc_8219E788;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-29280
	ctx.r4.s64 = ctx.r11.s64 + -29280;
	// bl 0x82120600
	ctx.lr = 0x8219E76C;
	sub_82120600(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,128
	r30.u64 = r30.u64 | 128;
	// bl 0x82196ba8
	ctx.lr = 0x8219E780;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219e78c
	goto loc_8219E78C;
loc_8219E788:
	// stw r16,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r16.u32);
loc_8219E78C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82145710
	ctx.lr = 0x8219E798;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219e7b4
	if (ctx.cr0.eq) goto loc_8219E7B4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r30,r30,0,25,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// bl 0x82120ac0
	ctx.lr = 0x8219E7B4;
	sub_82120AC0(ctx, base);
loc_8219E7B4:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822f6280
	ctx.lr = 0x8219E7BC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8219e7f0
	if (ctx.cr0.eq) goto loc_8219E7F0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-29268
	ctx.r4.s64 = ctx.r11.s64 + -29268;
	// bl 0x82120600
	ctx.lr = 0x8219E7D4;
	sub_82120600(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,256
	r30.u64 = r30.u64 | 256;
	// bl 0x8219db58
	ctx.lr = 0x8219E7E8;
	sub_8219DB58(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219e7f4
	goto loc_8219E7F4;
loc_8219E7F0:
	// stw r16,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r16.u32);
loc_8219E7F4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82145710
	ctx.lr = 0x8219E800;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219e81c
	if (ctx.cr0.eq) goto loc_8219E81C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwinm r30,r30,0,24,22
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// bl 0x82120ac0
	ctx.lr = 0x8219E81C;
	sub_82120AC0(ctx, base);
loc_8219E81C:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822f6280
	ctx.lr = 0x8219E824;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8219e858
	if (ctx.cr0.eq) goto loc_8219E858;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-29252
	ctx.r4.s64 = ctx.r11.s64 + -29252;
	// bl 0x82120600
	ctx.lr = 0x8219E83C;
	sub_82120600(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,512
	r30.u64 = r30.u64 | 512;
	// bl 0x8219db58
	ctx.lr = 0x8219E850;
	sub_8219DB58(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219e85c
	goto loc_8219E85C;
loc_8219E858:
	// stw r16,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r16.u32);
loc_8219E85C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82145710
	ctx.lr = 0x8219E868;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219e884
	if (ctx.cr0.eq) goto loc_8219E884;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// rlwinm r30,r30,0,23,21
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// bl 0x82120ac0
	ctx.lr = 0x8219E884;
	sub_82120AC0(ctx, base);
loc_8219E884:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822f6280
	ctx.lr = 0x8219E88C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8219e8c0
	if (ctx.cr0.eq) goto loc_8219E8C0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r11,-29236
	ctx.r4.s64 = ctx.r11.s64 + -29236;
	// bl 0x82120600
	ctx.lr = 0x8219E8A4;
	sub_82120600(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,1024
	r30.u64 = r30.u64 | 1024;
	// bl 0x8219db58
	ctx.lr = 0x8219E8B8;
	sub_8219DB58(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219e8c4
	goto loc_8219E8C4;
loc_8219E8C0:
	// stw r16,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r16.u32);
loc_8219E8C4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82145710
	ctx.lr = 0x8219E8D0;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219e8ec
	if (ctx.cr0.eq) goto loc_8219E8EC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// rlwinm r30,r30,0,22,20
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// bl 0x82120ac0
	ctx.lr = 0x8219E8EC;
	sub_82120AC0(ctx, base);
loc_8219E8EC:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822f6280
	ctx.lr = 0x8219E8F4;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8219e928
	if (ctx.cr0.eq) goto loc_8219E928;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r4,r11,-29216
	ctx.r4.s64 = ctx.r11.s64 + -29216;
	// bl 0x82120600
	ctx.lr = 0x8219E90C;
	sub_82120600(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,2048
	r30.u64 = r30.u64 | 2048;
	// bl 0x8219db58
	ctx.lr = 0x8219E920;
	sub_8219DB58(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219e92c
	goto loc_8219E92C;
loc_8219E928:
	// stw r16,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r16.u32);
loc_8219E92C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82145710
	ctx.lr = 0x8219E938;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219e954
	if (ctx.cr0.eq) goto loc_8219E954;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// rlwinm r30,r30,0,21,19
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// bl 0x82120ac0
	ctx.lr = 0x8219E954;
	sub_82120AC0(ctx, base);
loc_8219E954:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x8219E95C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8219e990
	if (ctx.cr0.eq) goto loc_8219E990;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r4,r11,-29196
	ctx.r4.s64 = ctx.r11.s64 + -29196;
	// bl 0x82120600
	ctx.lr = 0x8219E974;
	sub_82120600(ctx, base);
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,4096
	r30.u64 = r30.u64 | 4096;
	// bl 0x82191600
	ctx.lr = 0x8219E988;
	sub_82191600(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219e994
	goto loc_8219E994;
loc_8219E990:
	// stw r16,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r16.u32);
loc_8219E994:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82145710
	ctx.lr = 0x8219E9A0;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219e9bc
	if (ctx.cr0.eq) goto loc_8219E9BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// rlwinm r30,r30,0,20,18
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// bl 0x82120ac0
	ctx.lr = 0x8219E9BC;
	sub_82120AC0(ctx, base);
loc_8219E9BC:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8219E9C4;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8219e9f8
	if (ctx.cr0.eq) goto loc_8219E9F8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// addi r4,r11,-29804
	ctx.r4.s64 = ctx.r11.s64 + -29804;
	// bl 0x82120600
	ctx.lr = 0x8219E9DC;
	sub_82120600(ctx, base);
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,8192
	r30.u64 = r30.u64 | 8192;
	// bl 0x82196ba8
	ctx.lr = 0x8219E9F0;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219e9fc
	goto loc_8219E9FC;
loc_8219E9F8:
	// stw r16,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r16.u32);
loc_8219E9FC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82145710
	ctx.lr = 0x8219EA08;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219ea20
	if (ctx.cr0.eq) goto loc_8219EA20;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82120ac0
	ctx.lr = 0x8219EA20;
	sub_82120AC0(ctx, base);
loc_8219EA20:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_821CEDC8) {
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
	ctx.lr = 0x821CEDD0;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
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
	// mr r30,r25
	r30.u64 = r25.u64;
	// bl 0x82178268
	ctx.lr = 0x821CEDEC;
	sub_82178268(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stb r25,116(r31)
	REX_STORE_U8(r31.u32 + 116, r25.u8);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r24,r31,160
	r24.s64 = r31.s64 + 160;
	// addi r11,r11,-13808
	ctx.r11.s64 = ctx.r11.s64 + -13808;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// addi r28,r31,116
	r28.s64 = r31.s64 + 116;
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// addi r29,r31,128
	r29.s64 = r31.s64 + 128;
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// addi r26,r31,144
	r26.s64 = r31.s64 + 144;
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// bl 0x82120ac0
	ctx.lr = 0x821CEE3C;
	sub_82120AC0(ctx, base);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821CEE44;
	sub_822F6280(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// li r23,1
	r23.s64 = 1;
	// beq 0x821cee78
	if (ctx.cr0.eq) goto loc_821CEE78;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-13900
	ctx.r4.s64 = ctx.r11.s64 + -13900;
	// bl 0x82120600
	ctx.lr = 0x821CEE60;
	sub_82120600(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r30,r23
	r30.u64 = r23.u64;
	// bl 0x82191600
	ctx.lr = 0x821CEE74;
	sub_82191600(ctx, base);
	// b 0x821cee7c
	goto loc_821CEE7C;
loc_821CEE78:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_821CEE7C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r27,r31,80
	r27.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x821CEE90;
	sub_82145710(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ceeac
	if (ctx.cr0.eq) goto loc_821CEEAC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821CEEAC;
	sub_82120AC0(ctx, base);
loc_821CEEAC:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822f6280
	ctx.lr = 0x821CEEB4;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x821ceee4
	if (ctx.cr0.eq) goto loc_821CEEE4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-13884
	ctx.r4.s64 = ctx.r11.s64 + -13884;
	// bl 0x82120600
	ctx.lr = 0x821CEECC;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r30,r30,2
	r30.u64 = r30.u64 | 2;
	// bl 0x8219db58
	ctx.lr = 0x821CEEE0;
	sub_8219DB58(ctx, base);
	// b 0x821ceee8
	goto loc_821CEEE8;
loc_821CEEE4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_821CEEE8:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x821CEEF8;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cef14
	if (ctx.cr0.eq) goto loc_821CEF14;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r30,r30,0,31,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x821CEF14;
	sub_82120AC0(ctx, base);
loc_821CEF14:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822f6280
	ctx.lr = 0x821CEF1C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821cef4c
	if (ctx.cr0.eq) goto loc_821CEF4C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-13864
	ctx.r4.s64 = ctx.r11.s64 + -13864;
	// bl 0x82120600
	ctx.lr = 0x821CEF34;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,4
	r30.u64 = r30.u64 | 4;
	// bl 0x8219e240
	ctx.lr = 0x821CEF48;
	sub_8219E240(ctx, base);
	// b 0x821cef50
	goto loc_821CEF50;
loc_821CEF4C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_821CEF50:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x821CEF60;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cef7c
	if (ctx.cr0.eq) goto loc_821CEF7C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// rlwinm r30,r30,0,30,28
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x821CEF7C;
	sub_82120AC0(ctx, base);
loc_821CEF7C:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x821CEF84;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821cefb4
	if (ctx.cr0.eq) goto loc_821CEFB4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-13844
	ctx.r4.s64 = ctx.r11.s64 + -13844;
	// bl 0x82120600
	ctx.lr = 0x821CEF9C;
	sub_82120600(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,8
	r30.u64 = r30.u64 | 8;
	// bl 0x821bf110
	ctx.lr = 0x821CEFB0;
	sub_821BF110(ctx, base);
	// b 0x821cefb8
	goto loc_821CEFB8;
loc_821CEFB4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_821CEFB8:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x821CEFC8;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cefe0
	if (ctx.cr0.eq) goto loc_821CEFE0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x821CEFE0;
	sub_82120AC0(ctx, base);
loc_821CEFE0:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x821CEFE8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cf008
	if (ctx.cr0.eq) goto loc_821CF008;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x821CF000;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821cf00c
	goto loc_821CF00C;
loc_821CF008:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_821CF00C:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x821CF018;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821CF020;
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
	// beq 0x821cf094
	if (ctx.cr0.eq) goto loc_821CF094;
	// stw r25,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,19816
	ctx.r4.s64 = ctx.r11.s64 + 19816;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821CF054;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821CF060;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cf084
	if (ctx.cr0.eq) goto loc_821CF084;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-3336
	ctx.r10.s64 = ctx.r10.s64 + -3336;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821cf088
	goto loc_821CF088;
loc_821CF084:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821CF088:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x821cf098
	goto loc_821CF098;
loc_821CF094:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_821CF098:
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
	ctx.lr = 0x821CF0B0;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821CF0B8;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821cf11c
	if (ctx.cr0.eq) goto loc_821CF11C;
	// stw r25,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-13832
	ctx.r4.s64 = ctx.r11.s64 + -13832;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821CF0DC;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821CF0E8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cf10c
	if (ctx.cr0.eq) goto loc_821CF10C;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-3064
	ctx.r10.s64 = ctx.r10.s64 + -3064;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821cf110
	goto loc_821CF110;
loc_821CF10C:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821CF110:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x821cf120
	goto loc_821CF120;
loc_821CF11C:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_821CF120:
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
	ctx.lr = 0x821CF138;
	sub_82264568(ctx, base);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x822f6280
	ctx.lr = 0x821CF140;
	sub_822F6280(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,12244
	r30.s64 = ctx.r11.s64 + 12244;
	// addi r29,r10,-15676
	r29.s64 = ctx.r10.s64 + -15676;
	// beq 0x821cf190
	if (ctx.cr0.eq) goto loc_821CF190;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// addi r10,r10,-13824
	ctx.r10.s64 = ctx.r10.s64 + -13824;
	// stw r29,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r29.u32);
	// stw r23,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r23.u32);
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r25,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r25.u32);
	// stw r25,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r25.u32);
	// stb r25,28(r3)
	REX_STORE_U8(ctx.r3.u32 + 28, r25.u8);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r25,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r25.u32);
	// b 0x821cf194
	goto loc_821CF194;
loc_821CF190:
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
loc_821CF194:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82145710
	ctx.lr = 0x821CF1A4;
	sub_82145710(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,36
	ctx.r3.s64 = 36;
	// stw r11,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821CF1B4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cf1f4
	if (ctx.cr0.eq) goto loc_821CF1F4;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// addi r10,r10,-13816
	ctx.r10.s64 = ctx.r10.s64 + -13816;
	// stw r29,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r29.u32);
	// stw r23,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r23.u32);
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r25,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r25.u32);
	// stw r25,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r25.u32);
	// stb r25,28(r3)
	REX_STORE_U8(ctx.r3.u32 + 28, r25.u8);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r25,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r25.u32);
	// b 0x821cf1f8
	goto loc_821CF1F8;
loc_821CF1F4:
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
loc_821CF1F8:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82145710
	ctx.lr = 0x821CF208;
	sub_82145710(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r11.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_821ECB70) {
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
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	r31.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x8215f0f0
	ctx.lr = 0x821ECBAC;
	sub_8215F0F0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r31,8(r30)
	REX_STORE_U8(r30.u32 + 8, r31.u8);
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

DEFINE_REX_FUNC(sub_821F4330) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r30,6048(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// bl 0x822f6280
	ctx.lr = 0x821F4358;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f4384
	if (ctx.cr0.eq) goto loc_821F4384;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,17344
	ctx.r10.s64 = ctx.r10.s64 + 17344;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821f4388
	goto loc_821F4388;
loc_821F4384:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F4388:
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
	ctx.lr = 0x821F43A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

DEFINE_REX_FUNC(sub_821F5FA8) {
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
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8215f338
	ctx.lr = 0x821F5FD8;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,23228
	ctx.r4.s64 = ctx.r11.s64 + 23228;
	// bl 0x8215f338
	ctx.lr = 0x821F5FE4;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x821F5FEC;
	sub_8215F2D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x821F5FF4;
	sub_8215F2D0(ctx, base);
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

DEFINE_REX_FUNC(sub_821F9018) {
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
	ctx.lr = 0x821F9020;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r31,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r31.u64);
	// addi r4,r11,-24496
	ctx.r4.s64 = ctx.r11.s64 + -24496;
	// stw r31,92(r29)
	REX_STORE_U32(r29.u32 + 92, r31.u32);
	// bl 0x8215f670
	ctx.lr = 0x821F9048;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821F9050;
	sub_8215F0F0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r27,1
	r27.s64 = 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// stw r27,0(r30)
	REX_STORE_U32(r30.u32 + 0, r27.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r26,r11,-17324
	r26.s64 = ctx.r11.s64 + -17324;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r30,6272(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 6272);
	// lwz r28,0(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8215f670
	ctx.lr = 0x821F9080;
	sub_8215F670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,24328
	ctx.r4.s64 = ctx.r11.s64 + 24328;
	// bl 0x8215f670
	ctx.lr = 0x821F908C;
	sub_8215F670(ctx, base);
	// lwz r11,136(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 136);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F90A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,6276(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 6276);
	// lwz r28,0(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8215f670
	ctx.lr = 0x821F90B8;
	sub_8215F670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,24340
	ctx.r4.s64 = ctx.r11.s64 + 24340;
	// bl 0x8215f670
	ctx.lr = 0x821F90C4;
	sub_8215F670(ctx, base);
	// lwz r11,100(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 100);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F90D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,6280(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 6280);
	// lwz r28,0(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8215f670
	ctx.lr = 0x821F90F0;
	sub_8215F670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,22164
	ctx.r4.s64 = ctx.r11.s64 + 22164;
	// bl 0x8215f670
	ctx.lr = 0x821F90FC;
	sub_8215F670(ctx, base);
	// lwz r11,104(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 104);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F9110;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,6304(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 6304);
	// lwz r28,0(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8215f670
	ctx.lr = 0x821F9128;
	sub_8215F670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,24348
	ctx.r4.s64 = ctx.r11.s64 + 24348;
	// bl 0x8215f670
	ctx.lr = 0x821F9134;
	sub_8215F670(ctx, base);
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F9148;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f670
	ctx.lr = 0x821F9154;
	sub_8215F670(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82167708
	ctx.lr = 0x821F915C;
	sub_82167708(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,24320
	ctx.r4.s64 = ctx.r11.s64 + 24320;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f670
	ctx.lr = 0x821F9170;
	sub_8215F670(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821F9178;
	sub_8215F0F0(ctx, base);
	// stw r30,8(r28)
	REX_STORE_U32(r28.u32 + 8, r30.u32);
	// stw r27,0(r28)
	REX_STORE_U32(r28.u32 + 0, r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215ac38
	ctx.lr = 0x821F9188;
	sub_8215AC38(ctx, base);
	// addi r30,r29,88
	r30.s64 = r29.s64 + 88;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// bl 0x82125c20
	ctx.lr = 0x821F919C;
	sub_82125C20(ctx, base);
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,88(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 88);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8215ab18
	ctx.lr = 0x821F91B8;
	sub_8215AB18(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f91d8
	if (!ctx.cr0.eq) goto loc_821F91D8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,24064
	ctx.r4.s64 = ctx.r11.s64 + 24064;
	// addi r3,r10,24364
	ctx.r3.s64 = ctx.r10.s64 + 24364;
	// li r5,679
	ctx.r5.s64 = 679;
	// bl 0x821231d0
	ctx.lr = 0x821F91D8;
	sub_821231D0(ctx, base);
loc_821F91D8:
	// lwz r11,92(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 92);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821f9218
	if (!ctx.cr6.lt) goto loc_821F9218;
	// subf r29,r11,r10
	r29.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_821F91EC:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82125c20
	ctx.lr = 0x821F91FC;
	sub_82125C20(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x82125c98
	ctx.lr = 0x821F920C;
	sub_82125C98(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stb r31,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, r31.u8);
	// bne 0x821f91ec
	if (!ctx.cr0.eq) goto loc_821F91EC;
loc_821F9218:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f0f0
	ctx.lr = 0x821F9220;
	sub_8215F0F0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82204F78) {
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
	ctx.lr = 0x82204F80;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r28,0
	r28.s64 = 0;
	// addi r29,r3,16
	r29.s64 = ctx.r3.s64 + 16;
loc_82204F9C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82204fb4
	if (!ctx.cr6.eq) goto loc_82204FB4;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82204fb8
	goto loc_82204FB8;
loc_82204FB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82204FB8:
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8220503c
	if (!ctx.cr6.lt) goto loc_8220503C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f530
	ctx.lr = 0x82204FCC;
	sub_8215F530(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r5,16(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82204fe8
	if (ctx.cr6.lt) goto loc_82204FE8;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x82204fec
	goto loc_82204FEC;
loc_82204FE8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82204FEC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821235c8
	ctx.lr = 0x82204FF4;
	sub_821235C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82205034
	if (!ctx.cr0.eq) goto loc_82205034;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x82205008;
	sub_8215F5F8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8220501c
	if (!ctx.cr6.eq) goto loc_8220501C;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x82205020
	goto loc_82205020;
loc_8220501C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82205020:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82205034
	if (ctx.cr0.eq) goto loc_82205034;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_82205034:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x82204f9c
	goto loc_82204F9C;
loc_8220503C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8220A580) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14412
	ctx.r3.s64 = ctx.r11.s64 + -14412;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220A610) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8220a654
	if (ctx.cr6.eq) goto loc_8220A654;
	// bl 0x821971c0
	ctx.lr = 0x8220A62C;
	sub_821971C0(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,32168
	ctx.r9.s64 = ctx.r9.s64 + 32168;
	// stw r11,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stw r11,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
loc_8220A654:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220C7A0) {
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
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r3,640
	r30.s64 = ctx.r3.s64 + 640;
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220C7D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,640(r31)
	REX_STORE_U32(r31.u32 + 640, ctx.r3.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r4,r11,-32672
	ctx.r4.s64 = ctx.r11.s64 + -32672;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x8220C7EC;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-32660
	ctx.r4.s64 = ctx.r11.s64 + -32660;
	// bl 0x8215f338
	ctx.lr = 0x8220C7F8;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215fb00
	ctx.lr = 0x8220C800;
	sub_8215FB00(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-32572
	ctx.r4.s64 = ctx.r11.s64 + -32572;
	// bl 0x82120600
	ctx.lr = 0x8220C810;
	sub_82120600(ctx, base);
	// addi r30,r31,572
	r30.s64 = r31.s64 + 572;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8226a468
	ctx.lr = 0x8220C820;
	sub_8226A468(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8220C830;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-32544
	ctx.r4.s64 = ctx.r11.s64 + -32544;
	// bl 0x82120600
	ctx.lr = 0x8220C840;
	sub_82120600(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8226a468
	ctx.lr = 0x8220C84C;
	sub_8226A468(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8220C85C;
	sub_82120AC0(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,640(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 640);
	// lwz r3,6280(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6280);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220C878;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// stw r11,624(r31)
	REX_STORE_U32(r31.u32 + 624, ctx.r11.u32);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,632(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 632, temp.u32);
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

DEFINE_REX_FUNC(sub_82214E28) {
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
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,25568
	ctx.r10.s64 = ctx.r10.s64 + 25568;
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r30,6048(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x822f6280
	ctx.lr = 0x82214E64;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82214e8c
	if (ctx.cr0.eq) goto loc_82214E8C;
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
	// b 0x82214e90
	goto loc_82214E90;
loc_82214E8C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82214E90:
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
	ctx.lr = 0x82214EAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// bne cr6,0x82214ebc
	if (!ctx.cr6.eq) goto loc_82214EBC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82214EBC:
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
	ctx.lr = 0x82214ED4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,316(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 316);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82214f18
	if (!ctx.cr0.eq) goto loc_82214F18;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r4,r11,16492
	ctx.r4.s64 = ctx.r11.s64 + 16492;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x82214EF4;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16528
	ctx.r4.s64 = ctx.r11.s64 + 16528;
	// bl 0x8215f338
	ctx.lr = 0x82214F00;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82214F04;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,1100
	ctx.r3.s64 = r31.s64 + 1100;
	// bl 0x82120b20
	ctx.lr = 0x82214F18;
	sub_82120B20(ctx, base);
loc_82214F18:
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

DEFINE_REX_FUNC(sub_82220728) {
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
	ctx.lr = 0x82220730;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r27,368(r1)
	REX_STORE_U32(ctx.r1.u32 + 368, r27.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r11,-26364
	ctx.r3.s64 = ctx.r11.s64 + -26364;
	// bl 0x8216bc98
	ctx.lr = 0x82220754;
	sub_8216BC98(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82220778
	if (!ctx.cr6.eq) goto loc_82220778;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r30,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	r30.s64 = ctx.r11.s32 >> 4;
	// b 0x8222077c
	goto loc_8222077C;
loc_82220778:
	// mr r30,r27
	r30.u64 = r27.u64;
loc_8222077C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822207dc
	if (!ctx.cr6.gt) goto loc_822207DC;
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
	// bgt cr6,0x822207a4
	if (ctx.cr6.gt) goto loc_822207A4;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_822207A4:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822207dc
	if (!ctx.cr6.gt) goto loc_822207DC;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269d1d0
	ctx.lr = 0x822207B8;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x822207CC;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x822207D4;
	sub_8269D1B8(ctx, base);
	// stw r26,0(r29)
	REX_STORE_U32(r29.u32 + 0, r26.u32);
	// stw r31,8(r29)
	REX_STORE_U32(r29.u32 + 8, r31.u32);
loc_822207DC:
	// stw r30,4(r29)
	REX_STORE_U32(r29.u32 + 4, r30.u32);
	// mr r31,r27
	r31.u64 = r27.u64;
loc_822207E4:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x82220808
	if (!ctx.cr6.eq) goto loc_82220808;
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
	// b 0x8222080c
	goto loc_8222080C;
loc_82220808:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8222080C:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82220840
	if (!ctx.cr6.lt) goto loc_82220840;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8228ca78
	ctx.lr = 0x82220820;
	sub_8228CA78(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82220830;
	sub_8215F1B0(ctx, base);
	// bl 0x82270f10
	ctx.lr = 0x82220834;
	sub_82270F10(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x822207e4
	goto loc_822207E4;
loc_82220840:
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x82220860
	if (!ctx.cr6.eq) goto loc_82220860;
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
	// b 0x82220864
	goto loc_82220864;
loc_82220860:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_82220864:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822208cc
	if (!ctx.cr6.eq) goto loc_822208CC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r27,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r27.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x8222088C;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,17
	ctx.r6.s64 = 17;
	// addi r5,r11,-27404
	ctx.r5.s64 = ctx.r11.s64 + -27404;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x822208A4;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,17
	ctx.r6.s64 = 17;
	// addi r5,r11,-25452
	ctx.r5.s64 = ctx.r11.s64 + -25452;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x822208BC;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-27304
	ctx.r3.s64 = ctx.r11.s64 + -27304;
	// bl 0x8216bc98
	ctx.lr = 0x822208CC;
	sub_8216BC98(ctx, base);
loc_822208CC:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8222ACB0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13716
	ctx.r3.s64 = ctx.r11.s64 + -13716;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222AEE8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13708
	ctx.r3.s64 = ctx.r11.s64 + -13708;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222B070) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8222B078;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bl 0x82229520
	ctx.lr = 0x8222B08C;
	sub_82229520(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-21812
	ctx.r11.s64 = ctx.r11.s64 + -21812;
	// stw r10,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r10.u32);
	// li r3,56
	ctx.r3.s64 = 56;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r29,r30,112
	r29.s64 = r30.s64 + 112;
	// bl 0x822f6280
	ctx.lr = 0x8222B0AC;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8222b0f8
	if (ctx.cr0.eq) goto loc_8222B0F8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-22932
	ctx.r4.s64 = ctx.r11.s64 + -22932;
	// bl 0x82120600
	ctx.lr = 0x8222B0C4;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x82197628
	ctx.lr = 0x8222B0D8;
	sub_82197628(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r11,r11,10360
	ctx.r11.s64 = ctx.r11.s64 + 10360;
	// addi r10,r10,-11472
	ctx.r10.s64 = ctx.r10.s64 + -11472;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// b 0x8222b0fc
	goto loc_8222B0FC;
loc_8222B0F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222B0FC:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,80
	ctx.r3.s64 = r30.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x8222B10C;
	sub_82145710(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222b124
	if (ctx.cr0.eq) goto loc_8222B124;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8222B124;
	sub_82120AC0(ctx, base);
loc_8222B124:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82230B68) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13580
	ctx.r3.s64 = ctx.r11.s64 + -13580;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82231668) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-20284
	ctx.r4.s64 = ctx.r11.s64 + -20284;
	// bl 0x82120600
	ctx.lr = 0x8223168C;
	sub_82120600(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,156(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 156);
	// bl 0x821dd0c8
	ctx.lr = 0x82231698;
	sub_821DD0C8(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822316c0
	if (ctx.cr6.eq) goto loc_822316C0;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13580
	ctx.r10.s64 = ctx.r10.s64 + -13580;
loc_822316AC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822316e0
	if (ctx.cr6.eq) goto loc_822316E0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822316ac
	if (!ctx.cr6.eq) goto loc_822316AC;
loc_822316C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822316C4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822316e8
	if (ctx.cr0.eq) goto loc_822316E8;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822316e8
	if (ctx.cr6.eq) goto loc_822316E8;
	// lwz r31,12(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x822316ec
	goto loc_822316EC;
loc_822316E0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822316c4
	goto loc_822316C4;
loc_822316E8:
	// li r31,0
	r31.s64 = 0;
loc_822316EC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x822316FC;
	sub_82120AC0(ctx, base);
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

DEFINE_REX_FUNC(sub_822363C0) {
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
	// lwz r3,128(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// bl 0x82191520
	ctx.lr = 0x822363E0;
	sub_82191520(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x821e3038
	ctx.lr = 0x822363E8;
	sub_821E3038(ctx, base);
	// addi r30,r31,448
	r30.s64 = r31.s64 + 448;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e44f0
	ctx.lr = 0x822363F4;
	sub_821E44F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e43f8
	ctx.lr = 0x822363FC;
	sub_821E43F8(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r31,116
	ctx.r4.s64 = r31.s64 + 116;
	// lwz r3,6164(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6164);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82236418;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6048(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82236434;
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

DEFINE_REX_FUNC(sub_8223A578) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8223A580;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,3840(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 3840);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r6,r3,3820
	ctx.r6.s64 = ctx.r3.s64 + 3820;
	// lwz r3,3836(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 3836);
	// subf r11,r3,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// srawi r5,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// bl 0x8223aa40
	ctx.lr = 0x8223A5A0;
	sub_8223AA40(ctx, base);
	// lis r28,-32106
	r28.s64 = -2104098816;
	// li r30,0
	r30.s64 = 0;
	// lwz r3,6284(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223A5BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8223a600
	if (!ctx.cr0.gt) goto loc_8223A600;
	// li r29,0
	r29.s64 = 0;
loc_8223A5C8:
	// lwz r11,3836(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3836);
	// lwz r10,3852(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3852);
	// lwz r3,6284(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6284);
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r30.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223A5F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8223a5c8
	if (ctx.cr6.lt) goto loc_8223A5C8;
loc_8223A600:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8223FF50) {
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
	// li r3,3992
	ctx.r3.s64 = 3992;
	// bl 0x822f6280
	ctx.lr = 0x8223FF64;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8223ff74
	if (ctx.cr0.eq) goto loc_8223FF74;
	// bl 0x8223ff88
	ctx.lr = 0x8223FF70;
	sub_8223FF88(ctx, base);
	// b 0x8223ff78
	goto loc_8223FF78;
loc_8223FF74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223FF78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82241668) {
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
	// bl 0x82242520
	ctx.lr = 0x82241680;
	sub_82242520(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82241c40
	ctx.lr = 0x82241688;
	sub_82241C40(ctx, base);
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

DEFINE_REX_FUNC(sub_822421B0) {
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
	ctx.lr = 0x822421B8;
	// stfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -136, f30.u64);
	// stfd f31,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r21,-32106
	r21.s64 = -2104098816;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// lwz r3,6292(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 6292);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822421E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822424f8
	if (ctx.cr0.eq) goto loc_822424F8;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r31,r20,124
	r31.s64 = r20.s64 + 124;
	// addi r30,r20,3788
	r30.s64 = r20.s64 + 3788;
	// bl 0x8227a148
	ctx.lr = 0x822421F8;
	sub_8227A148(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x82242200;
	sub_8215F2D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x82242208;
	sub_8215F2D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82242234
	if (!ctx.cr6.eq) goto loc_82242234;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,6112(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6112);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82242234;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82242234:
	// addi r4,r20,3816
	ctx.r4.s64 = r20.s64 + 3816;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x82242240;
	sub_8215F2D0(ctx, base);
	// lis r31,-32106
	r31.s64 = -2104098816;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// stw r30,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// lwz r3,6284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6284);
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// stw r30,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224226C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82158750
	ctx.lr = 0x8224227C;
	sub_82158750(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// lwz r19,112(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// ble cr6,0x822422a0
	if (!ctx.cr6.gt) goto loc_822422A0;
	// addi r10,r19,-4
	ctx.r10.s64 = r19.s64 + -4;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_82242294:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82242294
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82242294;
loc_822422A0:
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// subf r11,r19,r4
	ctx.r11.u64 = ctx.r4.u64 - r19.u64;
	// srawi r5,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// bl 0x82243538
	ctx.lr = 0x822422B8;
	sub_82243538(ctx, base);
	// lwz r3,6284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6284);
	// mr r29,r30
	r29.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822422D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8224242c
	if (!ctx.cr0.gt) goto loc_8224242C;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r26,r19
	r26.u64 = r19.u64;
	// lfs f31,15048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	f31.f64 = double(temp.f32);
	// li r24,2
	r24.s64 = 2;
	// addi r22,r11,-25384
	r22.s64 = ctx.r11.s64 + -25384;
	// addi r28,r10,-31192
	r28.s64 = ctx.r10.s64 + -31192;
	// addi r27,r9,28628
	r27.s64 = ctx.r9.s64 + 28628;
loc_82242300:
	// lwz r3,6284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6284);
	// lwz r4,0(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82242318;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// std r30,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r30.u64);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8215f338
	ctx.lr = 0x82242330;
	sub_8215F338(ctx, base);
	// bl 0x8215f9e0
	ctx.lr = 0x82242334;
	sub_8215F9E0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x8215f670
	ctx.lr = 0x82242344;
	sub_8215F670(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8224234C;
	sub_8215F0F0(ctx, base);
	// stfs f30,8(r18)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r18.u32 + 8, temp.u32);
	// stw r24,0(r18)
	REX_STORE_U32(r18.u32 + 0, r24.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8215f338
	ctx.lr = 0x82242360;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82242384
	if (!ctx.cr6.eq) goto loc_82242384;
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
	// b 0x82242388
	goto loc_82242388;
loc_82242384:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82242388:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822423c8
	if (!ctx.cr6.lt) goto loc_822423C8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8215f338
	ctx.lr = 0x8224239C;
	sub_8215F338(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x822423A4;
	sub_8215F1B0(ctx, base);
	// bl 0x8215f9e0
	ctx.lr = 0x822423A8;
	sub_8215F9E0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x8215f670
	ctx.lr = 0x822423B8;
	sub_8215F670(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x822423C0;
	sub_8215F0F0(ctx, base);
	// stfs f30,8(r18)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r18.u32 + 8, temp.u32);
	// b 0x822423e0
	goto loc_822423E0;
loc_822423C8:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f670
	ctx.lr = 0x822423D4;
	sub_8215F670(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x822423DC;
	sub_8215F0F0(ctx, base);
	// stfs f31,8(r18)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r18.u32 + 8, temp.u32);
loc_822423E0:
	// stw r24,0(r18)
	REX_STORE_U32(r18.u32 + 0, r24.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,6292(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 6292);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82242400;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f0f0
	ctx.lr = 0x82242408;
	sub_8215F0F0(ctx, base);
	// lwz r3,6284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6284);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82242424;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82242300
	if (ctx.cr6.lt) goto loc_82242300;
loc_8224242C:
	// lwz r3,6292(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 6292);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82242440;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82242454;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x822424e4
	if (!ctx.cr0.gt) goto loc_822424E4;
loc_8224245C:
	// lwz r3,6284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6284);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82242474;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6284);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
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
	ctx.lr = 0x82242494;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6292(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 6292);
	// mulli r9,r3,304
	ctx.r9.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(304));
	// lwz r10,3856(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 3856);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r9,48(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r6,r10,228
	ctx.r6.s64 = ctx.r10.s64 + 228;
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822424C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6284);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822424DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8224245c
	if (ctx.cr6.lt) goto loc_8224245C;
loc_822424E4:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x82242510
	if (ctx.cr6.eq) goto loc_82242510;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822424F4;
	sub_8269CE98(ctx, base);
	// b 0x82242510
	goto loc_82242510;
loc_822424F8:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6284(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82242510;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82242510:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_82257CF0) {
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
	ctx.lr = 0x82257CF8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,6272(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6272);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82257D18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r11,16420
	ctx.r4.s64 = ctx.r11.s64 + 16420;
	// bl 0x8215f338
	ctx.lr = 0x82257D28;
	sub_8215F338(ctx, base);
	// li r21,0
	r21.s64 = 0;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// std r21,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r21.u64);
	// addi r29,r11,1008
	r29.s64 = ctx.r11.s64 + 1008;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82257d6c
	if (!ctx.cr6.eq) goto loc_82257D6C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// rlwinm. r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82257d6c
	if (!ctx.cr0.gt) goto loc_82257D6C;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x82257d70
	goto loc_82257D70;
loc_82257D6C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82257D70:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r25,r11,-26828
	r25.s64 = ctx.r11.s64 + -26828;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8215f338
	ctx.lr = 0x82257D80;
	sub_8215F338(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f200
	ctx.lr = 0x82257D90;
	sub_8215F200(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r30,r11,26288
	r30.s64 = ctx.r11.s64 + 26288;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x82257DA0;
	sub_8215F670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r24,r11,-17296
	r24.s64 = ctx.r11.s64 + -17296;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8215f670
	ctx.lr = 0x82257DB0;
	sub_8215F670(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8215efb0
	ctx.lr = 0x82257DB8;
	sub_8215EFB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f200
	ctx.lr = 0x82257DC4;
	sub_8215F200(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x82257DCC;
	sub_8215F670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r23,r11,-17344
	r23.s64 = ctx.r11.s64 + -17344;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8215f670
	ctx.lr = 0x82257DDC;
	sub_8215F670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-23520
	ctx.r4.s64 = ctx.r11.s64 + -23520;
	// bl 0x8215fbf8
	ctx.lr = 0x82257DE8;
	sub_8215FBF8(ctx, base);
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
	ctx.lr = 0x82257E00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f200
	ctx.lr = 0x82257E10;
	sub_8215F200(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x82257E18;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-26796
	ctx.r4.s64 = ctx.r11.s64 + -26796;
	// bl 0x8215f670
	ctx.lr = 0x82257E24;
	sub_8215F670(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82257E2C;
	sub_8215F0F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r26,8(r22)
	REX_STORE_U32(r22.u32 + 8, r26.u32);
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82257e64
	if (!ctx.cr6.eq) goto loc_82257E64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// rlwinm. r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82257e64
	if (!ctx.cr0.gt) goto loc_82257E64;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x82257e68
	goto loc_82257E68;
loc_82257E64:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82257E68:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r29,r11,-17264
	r29.s64 = ctx.r11.s64 + -17264;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x82257E78;
	sub_8215F338(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f200
	ctx.lr = 0x82257E88;
	sub_8215F200(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f670
	ctx.lr = 0x82257E90;
	sub_8215F670(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215efb0
	ctx.lr = 0x82257E98;
	sub_8215EFB0(ctx, base);
	// lis r22,-32106
	r22.s64 = -2104098816;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6284(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82257EB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f0f0
	ctx.lr = 0x82257EBC;
	sub_8215F0F0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r28,64
	ctx.r3.s64 = r28.s64 + 64;
	// addi r4,r11,17388
	ctx.r4.s64 = ctx.r11.s64 + 17388;
	// bl 0x82125d00
	ctx.lr = 0x82257ECC;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82257ff0
	if (!ctx.cr0.eq) goto loc_82257FF0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,-26728
	ctx.r4.s64 = ctx.r11.s64 + -26728;
	// bl 0x8215f338
	ctx.lr = 0x82257EE4;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r21,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r21.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// std r21,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r21.u64);
	// mr r31,r21
	r31.u64 = r21.u64;
	// addi r27,r11,22752
	r27.s64 = ctx.r11.s64 + 22752;
	// addi r26,r10,26372
	r26.s64 = ctx.r10.s64 + 26372;
loc_82257F04:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82257f28
	if (!ctx.cr6.eq) goto loc_82257F28;
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
	// b 0x82257f2c
	goto loc_82257F2C;
loc_82257F28:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_82257F2C:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82257fd0
	if (!ctx.cr6.lt) goto loc_82257FD0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f670
	ctx.lr = 0x82257F40;
	sub_8215F670(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f200
	ctx.lr = 0x82257F48;
	sub_8215F200(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82257F58;
	sub_8215F1B0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8215f338
	ctx.lr = 0x82257F60;
	sub_8215F338(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x82257F70;
	sub_8215F670(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8215f670
	ctx.lr = 0x82257F78;
	sub_8215F670(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x8215efb0
	ctx.lr = 0x82257F80;
	sub_8215EFB0(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x82257F8C;
	sub_8215F670(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8215f670
	ctx.lr = 0x82257F94;
	sub_8215F670(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215fbf8
	ctx.lr = 0x82257F9C;
	sub_8215FBF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82257FA8;
	sub_8215F1B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x82257FB0;
	sub_8215F338(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8215f670
	ctx.lr = 0x82257FC0;
	sub_8215F670(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x8215efb0
	ctx.lr = 0x82257FC8;
	sub_8215EFB0(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x82257f04
	goto loc_82257F04;
loc_82257FD0:
	// lwz r3,6284(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6284);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82257FE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f0f0
	ctx.lr = 0x82257FF0;
	sub_8215F0F0(ctx, base);
loc_82257FF0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_8226F200) {
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
	ctx.lr = 0x8226F208;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,100(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// addi r30,r3,100
	r30.s64 = ctx.r3.s64 + 100;
	// addi r26,r3,96
	r26.s64 = ctx.r3.s64 + 96;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8226f364
	if (!ctx.cr6.lt) goto loc_8226F364;
	// lfs f0,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f13,104(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lfs f0,644(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 644);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r31,92(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8226f260
	if (ctx.cr6.lt) goto loc_8226F260;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_8226F260:
	// lis r28,-32106
	r28.s64 = -2104098816;
	// li r27,0
	r27.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// lwz r3,6276(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6276);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226F284;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226f2a4
	if (ctx.cr0.eq) goto loc_8226F2A4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8226f2a4
	if (ctx.cr6.lt) goto loc_8226F2A4;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_8226F2A4:
	// li r11,50
	ctx.r11.s64 = 50;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// divw r9,r31,r11
	ctx.r9.u64 = uint32_t((ctx.r11.s32 && !(r31.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? r31.s32 / ctx.r11.s32 : 0);
	// divw r11,r10,r11
	ctx.r11.u64 = uint32_t((ctx.r11.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r10.s32 / ctx.r11.s32 : 0);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8226f2f8
	if (ctx.cr6.eq) goto loc_8226F2F8;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r4,r10,-4920
	ctx.r4.s64 = ctx.r10.s64 + -4920;
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
	ctx.lr = 0x8226F2E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8226f2f8
	if (!ctx.cr0.eq) goto loc_8226F2F8;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x822fbe20
	ctx.lr = 0x8226F2F8;
	sub_822FBE20(ctx, base);
loc_8226F2F8:
	// lwz r3,6276(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6276);
	// addi r6,r29,28
	ctx.r6.s64 = r29.s64 + 28;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r5,108(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 108);
	// subf r4,r11,r31
	ctx.r4.u64 = r31.u64 - ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226F31C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r27,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r27.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x8226F338;
	sub_8216B6A8(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x8226F34C;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,24(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 24);
	// addi r4,r11,-29816
	ctx.r4.s64 = ctx.r11.s64 + -29816;
	// bl 0x82178cb0
	ctx.lr = 0x8226F360;
	sub_82178CB0(ctx, base);
	// b 0x8226f36c
	goto loc_8226F36C;
loc_8226F364:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r11.u32);
loc_8226F36C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82279014) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82279018) {
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
	// bl 0x822790f8
	ctx.lr = 0x82279030;
	sub_822790F8(ctx, base);
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82279044
	if (!ctx.cr6.eq) goto loc_82279044;
	// lwz r3,248(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 248);
	// b 0x822790d4
	goto loc_822790D4;
loc_82279044:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82279074
	if (!ctx.cr6.eq) goto loc_82279074;
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 252);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822790e4
	if (ctx.cr6.eq) goto loc_822790E4;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r11,6248(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6248);
	// lbz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822790e4
	if (!ctx.cr0.eq) goto loc_822790E4;
	// lwz r3,252(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 252);
	// b 0x822790d4
	goto loc_822790D4;
loc_82279074:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r4,r11,-27048
	ctx.r4.s64 = ctx.r11.s64 + -27048;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x82279088;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-26752
	ctx.r4.s64 = ctx.r11.s64 + -26752;
	// bl 0x8215f338
	ctx.lr = 0x82279094;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822790b8
	if (!ctx.cr6.eq) goto loc_822790B8;
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
	// b 0x822790bc
	goto loc_822790BC;
loc_822790B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822790BC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822790e4
	if (ctx.cr6.eq) goto loc_822790E4;
	// lbz r11,367(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 367);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822790e4
	if (!ctx.cr0.eq) goto loc_822790E4;
	// lwz r3,244(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 244);
loc_822790D4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822790E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822790E4:
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

DEFINE_REX_FUNC(sub_8227EB80) {
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
	ctx.lr = 0x8227EB88;
	// stwu r1,-2080(r1)
	ea = -2080 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// li r22,0
	r22.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x8269d1d0
	ctx.lr = 0x8227EBAC;
	sub_8269D1D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x8227EBB8;
	sub_8269D1B8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// li r30,0
	r30.s64 = 0;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8227ec28
	if (!ctx.cr6.gt) goto loc_8227EC28;
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
loc_8227EBD8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8228ca78
	ctx.lr = 0x8227EBE4;
	sub_8228CA78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r22,1
	ctx.r4.s64 = r22.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,2040(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 2040);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2040(r28)
	REX_STORE_U32(r28.u32 + 2040, ctx.r11.u32);
	// bl 0x8212fcf0
	ctx.lr = 0x8227EC04;
	sub_8212FCF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r22,84(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r22,-1
	ctx.r4.s64 = r22.s64 + -1;
	// bl 0x8228ca78
	ctx.lr = 0x8227EC14;
	sub_8228CA78(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227ebd8
	if (ctx.cr6.lt) goto loc_8227EBD8;
loc_8227EC28:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r24,-32106
	r24.s64 = -2104098816;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8227ec70
	if (!ctx.cr6.gt) goto loc_8227EC70;
	// addi r28,r31,4
	r28.s64 = r31.s64 + 4;
loc_8227EC40:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r29,6060(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 6060);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8228ca78
	ctx.lr = 0x8227EC50;
	sub_8228CA78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8212eae0
	ctx.lr = 0x8227EC60;
	sub_8212EAE0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227ec40
	if (ctx.cr6.lt) goto loc_8227EC40;
loc_8227EC70:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x8227edfc
	if (ctx.cr6.eq) goto loc_8227EDFC;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r30,28(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 28);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8227ecc4
	if (!ctx.cr6.gt) goto loc_8227ECC4;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269d1d0
	ctx.lr = 0x8227ECA0;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x8227ECB4;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8227ECBC;
	sub_8269D1B8(ctx, base);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
loc_8227ECC4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,240
	ctx.r4.s64 = ctx.r11.s64 + 240;
	// bl 0x8215f338
	ctx.lr = 0x8227ECD4;
	sub_8215F338(ctx, base);
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8227edfc
	if (ctx.cr6.eq) goto loc_8227EDFC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r23,r11,-26856
	r23.s64 = ctx.r11.s64 + -26856;
loc_8227ECF0:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,1888
	ctx.r5.s64 = 1888;
	// lwz r4,68(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x826a1e70
	ctx.lr = 0x8227ED04;
	sub_826A1E70(ctx, base);
	// lwz r11,1976(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1976);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8227eda4
	if (!ctx.cr6.gt) goto loc_8227EDA4;
	// addi r29,r1,888
	r29.s64 = ctx.r1.s64 + 888;
loc_8227ED18:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f338
	ctx.lr = 0x8227ED24;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8227ed90
	if (!ctx.cr6.eq) goto loc_8227ED90;
	// addi r28,r29,48
	r28.s64 = r29.s64 + 48;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8227ED44;
	sub_826A2E60(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f338
	ctx.lr = 0x8227ED50;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8227ed74
	if (!ctx.cr6.eq) goto loc_8227ED74;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8227ed78
	if (ctx.cr6.lt) goto loc_8227ED78;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8227ed78
	goto loc_8227ED78;
loc_8227ED74:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_8227ED78:
	// subf r10,r11,r28
	ctx.r10.u64 = r28.u64 - ctx.r11.u64;
loc_8227ED7C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x8227ed7c
	if (!ctx.cr0.eq) goto loc_8227ED7C;
loc_8227ED90:
	// lwz r11,1976(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1976);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,136
	r29.s64 = r29.s64 + 136;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227ed18
	if (ctx.cr6.lt) goto loc_8227ED18;
loc_8227EDA4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mulli r4,r11,136
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// addi r3,r1,888
	ctx.r3.s64 = ctx.r1.s64 + 888;
	// bl 0x82162a30
	ctx.lr = 0x8227EDB4;
	sub_82162A30(ctx, base);
	// stw r3,1980(r1)
	REX_STORE_U32(ctx.r1.u32 + 1980, ctx.r3.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,6060(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 6060);
	// bl 0x8212e940
	ctx.lr = 0x8227EDC4;
	sub_8212E940(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212fcf0
	ctx.lr = 0x8227EDD8;
	sub_8212FCF0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x8228ca78
	ctx.lr = 0x8227EDE8;
	sub_8228CA78(ctx, base);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8227ecf0
	if (!ctx.cr6.eq) goto loc_8227ECF0;
loc_8227EDFC:
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x8227ee34
	if (!ctx.cr6.gt) goto loc_8227EE34;
loc_8227EE08:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r30,6060(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + 6060);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8228ca78
	ctx.lr = 0x8227EE18;
	sub_8228CA78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8212eae0
	ctx.lr = 0x8227EE28;
	sub_8212EAE0(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r22
	ctx.cr6.compare<int32_t>(r31.s32, r22.s32, ctx.xer);
	// blt cr6,0x8227ee08
	if (ctx.cr6.lt) goto loc_8227EE08;
loc_8227EE34:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8269d1b8
	ctx.lr = 0x8227EE3C;
	sub_8269D1B8(ctx, base);
	// addi r1,r1,2080
	ctx.r1.s64 = ctx.r1.s64 + 2080;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8228F720) {
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
	ctx.lr = 0x8228F728;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r3,400
	ctx.r3.s64 = 400;
	// addi r11,r11,4388
	ctx.r11.s64 = ctx.r11.s64 + 4388;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// bl 0x822c1a70
	ctx.lr = 0x8228F748;
	sub_822C1A70(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228f778
	if (ctx.cr0.eq) goto loc_8228F778;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lfs f0,304(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,320(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 320, temp.u32);
	// lhz r10,352(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 352);
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// sth r10,352(r3)
	REX_STORE_U16(ctx.r3.u32 + 352, ctx.r10.u16);
	// b 0x8228f77c
	goto loc_8228F77C;
loc_8228F778:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8228F77C:
	// stw r11,32(r27)
	REX_STORE_U32(r27.u32 + 32, ctx.r11.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r11,28(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228f7a8
	if (ctx.cr6.eq) goto loc_8228F7A8;
	// bl 0x822c1a70
	ctx.lr = 0x8228F794;
	sub_822C1A70(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228f7c4
	if (ctx.cr0.eq) goto loc_8228F7C4;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,4484
	ctx.r10.s64 = ctx.r10.s64 + 4484;
	// b 0x8228f7bc
	goto loc_8228F7BC;
loc_8228F7A8:
	// bl 0x822c1a70
	ctx.lr = 0x8228F7AC;
	sub_822C1A70(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228f7c4
	if (ctx.cr0.eq) goto loc_8228F7C4;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,4492
	ctx.r10.s64 = ctx.r10.s64 + 4492;
loc_8228F7BC:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8228f7c8
	goto loc_8228F7C8;
loc_8228F7C4:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8228F7C8:
	// stw r11,36(r27)
	REX_STORE_U32(r27.u32 + 36, ctx.r11.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x822c1a70
	ctx.lr = 0x8228F7D4;
	sub_822C1A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228f810
	if (ctx.cr0.eq) goto loc_8228F810;
	// lwz r10,36(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 36);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r9,32(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 32);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r7,r11,6712
	ctx.r7.s64 = ctx.r11.s64 + 6712;
	// stb r30,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, r30.u8);
	// stw r30,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r8,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8228f814
	goto loc_8228F814;
loc_8228F810:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8228F814:
	// stw r11,40(r27)
	REX_STORE_U32(r27.u32 + 40, ctx.r11.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822c1a70
	ctx.lr = 0x8228F820;
	sub_822C1A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228f840
	if (ctx.cr0.eq) goto loc_8228F840;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stb r30,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, r30.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,4420
	ctx.r10.s64 = ctx.r10.s64 + 4420;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8228f844
	goto loc_8228F844;
loc_8228F840:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8228F844:
	// stw r11,44(r27)
	REX_STORE_U32(r27.u32 + 44, ctx.r11.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822c1a70
	ctx.lr = 0x8228F850;
	sub_822C1A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228f870
	if (ctx.cr0.eq) goto loc_8228F870;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stb r30,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, r30.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,4428
	ctx.r10.s64 = ctx.r10.s64 + 4428;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8228f874
	goto loc_8228F874;
loc_8228F870:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8228F874:
	// stw r11,48(r27)
	REX_STORE_U32(r27.u32 + 48, ctx.r11.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822c1a70
	ctx.lr = 0x8228F880;
	sub_822C1A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228f8a0
	if (ctx.cr0.eq) goto loc_8228F8A0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stb r30,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, r30.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,4436
	ctx.r10.s64 = ctx.r10.s64 + 4436;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8228f8a4
	goto loc_8228F8A4;
loc_8228F8A0:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8228F8A4:
	// stw r11,52(r27)
	REX_STORE_U32(r27.u32 + 52, ctx.r11.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822c1a70
	ctx.lr = 0x8228F8B0;
	sub_822C1A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228f8d0
	if (ctx.cr0.eq) goto loc_8228F8D0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stb r30,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, r30.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,4444
	ctx.r10.s64 = ctx.r10.s64 + 4444;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8228f8d4
	goto loc_8228F8D4;
loc_8228F8D0:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8228F8D4:
	// stw r11,56(r27)
	REX_STORE_U32(r27.u32 + 56, ctx.r11.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822c1a70
	ctx.lr = 0x8228F8E0;
	sub_822C1A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228f900
	if (ctx.cr0.eq) goto loc_8228F900;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stb r30,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, r30.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,4412
	ctx.r10.s64 = ctx.r10.s64 + 4412;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8228f904
	goto loc_8228F904;
loc_8228F900:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8228F904:
	// stw r11,60(r27)
	REX_STORE_U32(r27.u32 + 60, ctx.r11.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822c1a70
	ctx.lr = 0x8228F910;
	sub_822C1A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228f930
	if (ctx.cr0.eq) goto loc_8228F930;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stb r30,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, r30.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,4468
	ctx.r10.s64 = ctx.r10.s64 + 4468;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8228f934
	goto loc_8228F934;
loc_8228F930:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8228F934:
	// stw r11,64(r27)
	REX_STORE_U32(r27.u32 + 64, ctx.r11.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822c1a70
	ctx.lr = 0x8228F940;
	sub_822C1A70(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,4476
	r31.s64 = ctx.r11.s64 + 4476;
	// beq 0x8228f960
	if (ctx.cr0.eq) goto loc_8228F960;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r30,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, r30.u8);
	// b 0x8228f964
	goto loc_8228F964;
loc_8228F960:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8228F964:
	// stw r11,72(r27)
	REX_STORE_U32(r27.u32 + 72, ctx.r11.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822c1a70
	ctx.lr = 0x8228F970;
	sub_822C1A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228f988
	if (ctx.cr0.eq) goto loc_8228F988;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r30,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, r30.u8);
	// b 0x8228f98c
	goto loc_8228F98C;
loc_8228F988:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8228F98C:
	// li r29,1
	r29.s64 = 1;
	// stw r11,76(r27)
	REX_STORE_U32(r27.u32 + 76, ctx.r11.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stb r29,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, r29.u8);
	// bl 0x822c1a70
	ctx.lr = 0x8228F9A0;
	sub_822C1A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228f9c0
	if (ctx.cr0.eq) goto loc_8228F9C0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stb r30,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, r30.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,4460
	ctx.r10.s64 = ctx.r10.s64 + 4460;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8228f9c4
	goto loc_8228F9C4;
loc_8228F9C0:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8228F9C4:
	// stw r11,68(r27)
	REX_STORE_U32(r27.u32 + 68, ctx.r11.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822c1a70
	ctx.lr = 0x8228F9D0;
	sub_822C1A70(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,4452
	r31.s64 = ctx.r11.s64 + 4452;
	// beq 0x8228f9f8
	if (ctx.cr0.eq) goto loc_8228F9F8;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r30,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, r30.u8);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r29.u32);
	// b 0x8228f9fc
	goto loc_8228F9FC;
loc_8228F9F8:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8228F9FC:
	// stw r11,84(r27)
	REX_STORE_U32(r27.u32 + 84, ctx.r11.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822c1a70
	ctx.lr = 0x8228FA08;
	sub_822C1A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228fa28
	if (ctx.cr0.eq) goto loc_8228FA28;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r30,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, r30.u8);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r29.u32);
	// b 0x8228fa2c
	goto loc_8228FA2C;
loc_8228FA28:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8228FA2C:
	// stw r11,80(r27)
	REX_STORE_U32(r27.u32 + 80, ctx.r11.u32);
	// li r9,36
	ctx.r9.s64 = 36;
	// stb r29,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, r29.u8);
	// li r8,96
	ctx.r8.s64 = 96;
	// li r11,44
	ctx.r11.s64 = 44;
	// lwz r7,20(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 20);
	// addi r10,r26,20
	ctx.r10.s64 = r26.s64 + 20;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmpwi cr6,r7,36
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 36, ctx.xer);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bge cr6,0x8228fa60
	if (!ctx.cr6.lt) goto loc_8228FA60;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8228FA60:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,96
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 96, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// bgt cr6,0x8228fa78
	if (ctx.cr6.gt) goto loc_8228FA78;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_8228FA78:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,44
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 44, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// bgt cr6,0x8228fa90
	if (ctx.cr6.gt) goto loc_8228FA90;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
loc_8228FA90:
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228fab0
	if (ctx.cr6.eq) goto loc_8228FAB0;
	// stb r30,12(r27)
	REX_STORE_U8(r27.u32 + 12, r30.u8);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// stw r11,8(r27)
	REX_STORE_U32(r27.u32 + 8, ctx.r11.u32);
	// b 0x8228fb00
	goto loc_8228FB00;
loc_8228FAB0:
	// stb r29,12(r27)
	REX_STORE_U8(r27.u32 + 12, r29.u8);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822c1a70
	ctx.lr = 0x8228FABC;
	sub_822C1A70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8228faf8
	if (ctx.cr0.eq) goto loc_8228FAF8;
	// lwz r25,24(r26)
	r25.u64 = REX_LOAD_U32(r26.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stb r30,16(r31)
	REX_STORE_U8(r31.u32 + 16, r30.u8);
	// bl 0x8228f6a0
	ctx.lr = 0x8228FAE4;
	sub_8228F6A0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822c1a70
	ctx.lr = 0x8228FAEC;
	sub_822C1A70(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r25,4(r31)
	REX_STORE_U32(r31.u32 + 4, r25.u32);
	// b 0x8228fafc
	goto loc_8228FAFC;
loc_8228FAF8:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_8228FAFC:
	// stw r31,8(r27)
	REX_STORE_U32(r27.u32 + 8, r31.u32);
loc_8228FB00:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228fb1c
	if (ctx.cr6.eq) goto loc_8228FB1C;
	// stb r30,20(r27)
	REX_STORE_U8(r27.u32 + 20, r30.u8);
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// stw r11,16(r27)
	REX_STORE_U32(r27.u32 + 16, ctx.r11.u32);
	// b 0x8228fb90
	goto loc_8228FB90;
loc_8228FB1C:
	// stb r29,20(r27)
	REX_STORE_U8(r27.u32 + 20, r29.u8);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822c1a70
	ctx.lr = 0x8228FB28;
	sub_822C1A70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8228fb88
	if (ctx.cr0.eq) goto loc_8228FB88;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// li r10,816
	ctx.r10.s64 = 816;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mulli r3,r11,816
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(816));
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bl 0x822c1a70
	ctx.lr = 0x8228FB48;
	sub_822C1A70(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r10,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// beq 0x8228fb80
	if (ctx.cr0.eq) goto loc_8228FB80;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8228FB6C:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bdnz 0x8228fb6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8228FB6C;
loc_8228FB80:
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// b 0x8228fb8c
	goto loc_8228FB8C;
loc_8228FB88:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_8228FB8C:
	// stw r31,16(r27)
	REX_STORE_U32(r27.u32 + 16, r31.u32);
loc_8228FB90:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228fbac
	if (ctx.cr6.eq) goto loc_8228FBAC;
	// stb r30,28(r27)
	REX_STORE_U8(r27.u32 + 28, r30.u8);
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// stw r11,24(r27)
	REX_STORE_U32(r27.u32 + 24, ctx.r11.u32);
	// b 0x8228fc1c
	goto loc_8228FC1C;
loc_8228FBAC:
	// stb r29,28(r27)
	REX_STORE_U8(r27.u32 + 28, r29.u8);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822c1a70
	ctx.lr = 0x8228FBB8;
	sub_822C1A70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8228fc14
	if (ctx.cr0.eq) goto loc_8228FC14;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// mullw r3,r11,r28
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bl 0x822c1a70
	ctx.lr = 0x8228FBD4;
	sub_822C1A70(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r10,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// beq 0x8228fc0c
	if (ctx.cr0.eq) goto loc_8228FC0C;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8228FBF8:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bdnz 0x8228fbf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8228FBF8;
loc_8228FC0C:
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// b 0x8228fc18
	goto loc_8228FC18;
loc_8228FC14:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_8228FC18:
	// stw r31,24(r27)
	REX_STORE_U32(r27.u32 + 24, r31.u32);
loc_8228FC1C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_822BBC70) {
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
	// addi r11,r11,7464
	ctx.r11.s64 = ctx.r11.s64 + 7464;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822947a0
	ctx.lr = 0x822BBC9C;
	sub_822947A0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bbcac
	if (ctx.cr0.eq) goto loc_822BBCAC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822BBCAC;
	sub_8269CE98(ctx, base);
loc_822BBCAC:
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

DEFINE_REX_FUNC(sub_822BC9E0) {
	REX_FUNC_PROLOGUE();
	// b 0x82294858
	sub_82294858(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822BCA20) {
	REX_FUNC_PROLOGUE();
	// lwz r10,204(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// addi r11,r3,200
	ctx.r11.s64 = ctx.r3.s64 + 200;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822bca68
	if (!ctx.cr6.gt) goto loc_822BCA68;
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
loc_822BCA40:
	// lwzx r5,r9,r6
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822bca64
	if (ctx.cr6.eq) goto loc_822BCA64;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x822bca40
	if (ctx.cr6.lt) goto loc_822BCA40;
	// b 0x822bca68
	goto loc_822BCA68;
loc_822BCA64:
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_822BCA68:
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822bcaa0
	if (!ctx.cr6.lt) goto loc_822BCAA0;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r6,r8,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stwx r6,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stwx r7,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_822BCAA0:
	// b 0x82294d50
	sub_82294D50(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822C07B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,352(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 352);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x822c081c
	if (ctx.cr6.eq) goto loc_822C081C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stfs f13,-4(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lfs f12,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f11,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r3,384
	ctx.r9.s64 = ctx.r3.s64 + 384;
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,384(r3)
	REX_STORE_U64(ctx.r3.u32 + 384, ctx.r11.u64);
	// std r10,392(r3)
	REX_STORE_U64(ctx.r3.u32 + 392, ctx.r10.u64);
loc_822C081C:
	// ld r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// addi r10,r3,400
	ctx.r10.s64 = ctx.r3.s64 + 400;
	// std r11,400(r3)
	REX_STORE_U64(ctx.r3.u32 + 400, ctx.r11.u64);
	// ld r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// std r11,408(r3)
	REX_STORE_U64(ctx.r3.u32 + 408, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2278) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12028(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12028);
	// rlwimi r11,r4,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,12028(r3)
	REX_STORE_U32(ctx.r3.u32 + 12028, ctx.r11.u32);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,12024(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12024);
	// bne 0x822c22b0
	if (!ctx.cr0.eq) goto loc_822C22B0;
	// andi. r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r11,4,12,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_822C22B0:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x822c22c0
	if (!ctx.cr6.eq) goto loc_822C22C0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_822C22C0:
	// stw r11,10588(r3)
	REX_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10552(r3)
	REX_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	REX_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10592(r3)
	REX_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C32D8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,20,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0xFFF00000;
	// rlwinm r11,r11,0,12,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10544(r3)
	REX_STORE_U32(ctx.r3.u32 + 10544, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3970) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12028(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12028);
	// lbz r10,10943(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 10943);
	// rlwimi r11,r4,17,12,14
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 17) & 0xE0000) | (ctx.r11.u64 & 0xFFFFFFFFFFF1FFFF);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,12028(r3)
	REX_STORE_U32(ctx.r3.u32 + 12028, ctx.r11.u32);
	// bne 0x822c39a8
	if (!ctx.cr0.eq) goto loc_822C39A8;
	// rlwinm r11,r11,0,12,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0000;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822c39a8
	if (!ctx.cr6.eq) goto loc_822C39A8;
	// ld r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 40);
	// li r12,-257
	ctx.r12.s64 = -257;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// b 0x822c39b0
	goto loc_822C39B0;
loc_822C39A8:
	// ld r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 40);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
loc_822C39B0:
	// std r11,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C6240) {
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
	// ori r10,r6,2
	ctx.r10.u64 = ctx.r6.u64 | 2;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,28(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x822c5960
	ctx.lr = 0x822C6278;
	sub_822C5960(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C94F0) {
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
	ctx.lr = 0x822C94F8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,872
	ctx.r5.s64 = 872;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826a2e60
	ctx.lr = 0x822C9510;
	sub_826A2E60(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// lwz r11,872(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 872);
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c95e0
	if (ctx.cr0.eq) goto loc_822C95E0;
	// addi r25,r31,40
	r25.s64 = r31.s64 + 40;
	// addi r27,r31,896
	r27.s64 = r31.s64 + 896;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
loc_822C9554:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r10,r11,872
	ctx.r10.s64 = ctx.r11.s64 + 872;
	// lwz r8,896(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 896);
	// lwz r7,872(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 872);
	// addi r8,r8,9
	ctx.r8.s64 = ctx.r8.s64 + 9;
	// lwz r11,900(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 900);
	// add r26,r9,r7
	r26.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// beq cr6,0x822c95c8
	if (ctx.cr6.eq) goto loc_822C95C8;
	// addi r30,r25,28
	r30.s64 = r25.s64 + 28;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_822C9594:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + r26.u64;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822c95b8
	if (ctx.cr6.eq) goto loc_822C95B8;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x822C95B8;
	sub_826A1E70(ctx, base);
loc_822C95B8:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// bne 0x822c9594
	if (!ctx.cr0.eq) goto loc_822C9594;
loc_822C95C8:
	// li r11,-1
	ctx.r11.s64 = -1;
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// addi r25,r25,416
	r25.s64 = r25.s64 + 416;
	// bne 0x822c9554
	if (!ctx.cr0.eq) goto loc_822C9554;
loc_822C95E0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_822CEE40) {
	REX_FUNC_PROLOGUE();
	// b 0x822cebc8
	sub_822CEBC8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822CF0B8) {
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
	ctx.lr = 0x822CF0C0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822cf140
	if (!ctx.cr6.gt) goto loc_822CF140;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x822cf0ec
	if (!ctx.cr6.lt) goto loc_822CF0EC;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_822CF0EC:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x822CF0F8;
	sub_823F02B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x822cf110
	if (!ctx.cr0.eq) goto loc_822CF110;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// b 0x822cf140
	goto loc_822CF140;
loc_822CF110:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822cf13c
	if (ctx.cr6.eq) goto loc_822CF13C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x822CF130;
	sub_826A1E70(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x823f0350
	ctx.lr = 0x822CF13C;
	sub_823F0350(ctx, base);
loc_822CF13C:
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
loc_822CF140:
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822D4C78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822D4C80;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r7,r11,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,15128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822d4d78
	if (ctx.cr0.eq) goto loc_822D4D78;
	// bne cr6,0x822d4cac
	if (!ctx.cr6.eq) goto loc_822D4CAC;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
loc_822D4CAC:
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r9,15120(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 15120);
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// lwz r5,15132(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 15132);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// and r31,r8,r11
	r31.u64 = ctx.r8.u64 & ctx.r11.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + r31.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x822d4d14
	if (ctx.cr6.gt) goto loc_822D4D14;
	// lwz r10,13408(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 13408);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d4d0c
	if (ctx.cr6.eq) goto loc_822D4D0C;
	// lwz r11,13412(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 13412);
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822d4d04
	if (ctx.cr6.eq) goto loc_822D4D04;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d4d0c
	if (!ctx.cr6.eq) goto loc_822D4D0C;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x822d4d0c
	if (!ctx.cr6.lt) goto loc_822D4D0C;
loc_822D4D04:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d4ea0
	goto loc_822D4EA0;
loc_822D4D0C:
	// stw r4,15128(r3)
	REX_STORE_U32(ctx.r3.u32 + 15128, ctx.r4.u32);
	// b 0x822d4d6c
	goto loc_822D4D6C;
loc_822D4D14:
	// lwz r9,15136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 15136);
	// lwz r8,13408(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 13408);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r31,r9,r11
	r31.u64 = ctx.r9.u64 & ctx.r11.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + r31.u64;
	// beq cr6,0x822d4d58
	if (ctx.cr6.eq) goto loc_822D4D58;
	// lwz r11,13412(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 13412);
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822d4d04
	if (ctx.cr6.eq) goto loc_822D4D04;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d4d58
	if (!ctx.cr6.eq) goto loc_822D4D58;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x822d4d04
	if (ctx.cr6.lt) goto loc_822D4D04;
loc_822D4D58:
	// lwz r11,15140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15140);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x822d4d04
	if (ctx.cr6.gt) goto loc_822D4D04;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r4,15136(r3)
	REX_STORE_U32(ctx.r3.u32 + 15136, ctx.r4.u32);
loc_822D4D6C:
	// bl 0x822d4bc0
	ctx.lr = 0x822D4D70;
	sub_822D4BC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x822d4ea0
	goto loc_822D4EA0;
loc_822D4D78:
	// bne cr6,0x822d4d84
	if (!ctx.cr6.eq) goto loc_822D4D84;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_822D4D84:
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// rlwinm r30,r11,0,0,26
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// bne cr6,0x822d4d98
	if (!ctx.cr6.eq) goto loc_822D4D98;
	// li r7,54
	ctx.r7.s64 = 54;
loc_822D4D98:
	// lwz r11,15124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15124);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822d4dac
	if (!ctx.cr6.gt) goto loc_822D4DAC;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_822D4DAC:
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,15120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15120);
	// add r31,r8,r30
	r31.u64 = ctx.r8.u64 + r30.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822d4dc4
	if (!ctx.cr6.gt) goto loc_822D4DC4;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_822D4DC4:
	// subf r11,r30,r31
	ctx.r11.u64 = r31.u64 - r30.u64;
	// lwz r10,15116(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15116);
	// lwz r6,15148(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 15148);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// subfc r9,r7,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r9.u64 = ctx.r11.u64 - ctx.r7.u64;
	// eqv r5,r7,r11
	ctx.r5.u64 = ~(ctx.r7.u64 ^ ctx.r11.u64);
	// lwz r11,15136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15136);
	// rlwinm r9,r5,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// subf r5,r10,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r5,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 2;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x822d4e04
	if (!ctx.cr6.gt) goto loc_822D4E04;
	// li r9,1
	ctx.r9.s64 = 1;
loc_822D4E04:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822d4e34
	if (ctx.cr6.eq) goto loc_822D4E34;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// lwz r9,15132(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 15132);
	// lbz r6,10942(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 10942);
	// rlwinm r30,r11,0,0,26
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r10,15136(r3)
	REX_STORE_U32(ctx.r3.u32 + 15136, ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// ori r11,r6,4
	ctx.r11.u64 = ctx.r6.u64 | 4;
	// stw r9,15132(r3)
	REX_STORE_U32(ctx.r3.u32 + 15132, ctx.r9.u32);
	// add r31,r8,r30
	r31.u64 = ctx.r8.u64 + r30.u64;
	// stb r11,10942(r3)
	REX_STORE_U8(ctx.r3.u32 + 10942, ctx.r11.u8);
loc_822D4E34:
	// lwz r8,13408(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 13408);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822d4e80
	if (ctx.cr6.eq) goto loc_822D4E80;
	// lwz r11,13412(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 13412);
	// lwz r10,15132(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15132);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x822d4e64
	if (ctx.cr6.eq) goto loc_822D4E64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822d4e80
	if (!ctx.cr6.eq) goto loc_822D4E80;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r31.u32, ctx.xer);
	// bge cr6,0x822d4e80
	if (!ctx.cr6.lt) goto loc_822D4E80;
loc_822D4E64:
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822d4d04
	if (!ctx.cr6.eq) goto loc_822D4D04;
	// subf r11,r30,r8
	ctx.r11.u64 = ctx.r8.u64 - r30.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822d4d04
	if (ctx.cr6.lt) goto loc_822D4D04;
loc_822D4E80:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,15132(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 15132);
	// bl 0x822d4bc0
	ctx.lr = 0x822D4E8C;
	sub_822D4BC0(ctx, base);
	// subf r11,r30,r31
	ctx.r11.u64 = r31.u64 - r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_822D4EA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822E6268) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822e63a0
	if (!ctx.cr6.eq) goto loc_822E63A0;
	// lis r11,32746
	ctx.r11.s64 = 2146041856;
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r9,r11,6168
	ctx.r9.u64 = ctx.r11.u64 | 6168;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lwbrx r7,0,r9
	ctx.r7.u64 = __builtin_bswap32(REX_MM_LOAD_U32(ctx.r9.u32));
	// xori r5,r7,512
	ctx.r5.u64 = ctx.r7.u64 ^ 512;
	// beq cr6,0x822e62d4
	if (ctx.cr6.eq) goto loc_822E62D4;
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r9,r3,r7
	ctx.r9.u64 = ctx.r3.u64 + ctx.r7.u64;
loc_822E62B0:
	// lhz r9,80(r9)
	ctx.r9.u64 = REX_MM_LOAD_U16(ctx.r9.u32 + 80);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x822e63ac
	if (ctx.cr6.eq) goto loc_822E63AC;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// blt cr6,0x822e62b0
	if (ctx.cr6.lt) goto loc_822E62B0;
loc_822E62D4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822e6394
	if (ctx.cr6.eq) goto loc_822E6394;
	// li r7,32
	ctx.r7.s64 = 32;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r10,16
	ctx.r10.s64 = 16;
loc_822E62EC:
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// lwz r5,64(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lvx128 v63,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r31,r10,12,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1;
	// stvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r5,r10,12,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x822e6340
	if (!ctx.cr6.eq) goto loc_822E6340;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// stw r3,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r3,84(r10)
	REX_STORE_U32(ctx.r10.u32 + 84, ctx.r3.u32);
loc_822E6340:
	// rlwinm r10,r5,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822e6368
	if (!ctx.cr6.eq) goto loc_822E6368;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r3,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r3,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r3.u32);
loc_822E6368:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822e637c
	if (!ctx.cr6.eq) goto loc_822E637C;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
loc_822E637C:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r9,r9,96
	ctx.r9.s64 = ctx.r9.s64 + 96;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// li r10,16
	ctx.r10.s64 = 16;
	// blt cr6,0x822e62ec
	if (ctx.cr6.lt) goto loc_822E62EC;
loc_822E6394:
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// oris r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 131072;
	// stw r10,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
loc_822E63A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_822E63AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EF7A8) {
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
	// addi r11,r11,15404
	ctx.r11.s64 = ctx.r11.s64 + 15404;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822ef9c8
	ctx.lr = 0x822EF7D4;
	sub_822EF9C8(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x8215f0f0
	ctx.lr = 0x822EF7DC;
	sub_8215F0F0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,15376
	ctx.r11.s64 = ctx.r11.s64 + 15376;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x822ef7f8
	if (ctx.cr0.eq) goto loc_822EF7F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822EF7F8;
	sub_8269CE98(ctx, base);
loc_822EF7F8:
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

DEFINE_REX_FUNC(sub_822F1938) {
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
	ctx.lr = 0x822F1940;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r25,0
	r25.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r23,r25
	r23.u64 = r25.u64;
	// bne 0x822f1974
	if (!ctx.cr0.eq) goto loc_822F1974;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822f1974
	if (!ctx.cr0.eq) goto loc_822F1974;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f1974
	if (ctx.cr0.eq) goto loc_822F1974;
	// li r23,1
	r23.s64 = 1;
loc_822F1974:
	// lbz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 8);
	// mr r24,r25
	r24.u64 = r25.u64;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// blt cr6,0x822f1994
	if (ctx.cr6.lt) goto loc_822F1994;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x822f1994
	if (ctx.cr6.gt) goto loc_822F1994;
	// li r24,1
	r24.s64 = 1;
loc_822F1994:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi. r9,r24,24
	ctx.r9.u64 = r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// beq 0x822f19b4
	if (ctx.cr0.eq) goto loc_822F19B4;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_822F19B4:
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// li r26,1
	r26.s64 = 1;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// beq 0x822f19f0
	if (ctx.cr0.eq) goto loc_822F19F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r9,5120
	ctx.r9.s64 = 335544320;
	// rlwinm r8,r11,0,0,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822f19f0
	if (!ctx.cr6.eq) goto loc_822F19F0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r10,18084
	ctx.r4.s64 = ctx.r10.s64 + 18084;
	// b 0x822f1a3c
	goto loc_822F1A3C;
loc_822F19F0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f1a4c
	if (ctx.cr6.eq) goto loc_822F1A4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r9,23552
	ctx.r9.s64 = 1543503872;
	// rlwinm r8,r11,0,0,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822f1a18
	if (!ctx.cr6.eq) goto loc_822F1A18;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r10,18092
	ctx.r4.s64 = ctx.r10.s64 + 18092;
	// b 0x822f1a3c
	goto loc_822F1A3C;
loc_822F1A18:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f1a4c
	if (ctx.cr6.eq) goto loc_822F1A4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,24576
	ctx.r10.s64 = 1610612736;
	// rlwinm r9,r11,0,0,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822f1a4c
	if (!ctx.cr6.eq) goto loc_822F1A4C;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r10,18100
	ctx.r4.s64 = ctx.r10.s64 + 18100;
loc_822F1A3C:
	// rlwinm r5,r11,7,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822f3d58
	ctx.lr = 0x822F1A48;
	sub_822F3D58(ctx, base);
	// b 0x822f1a70
	goto loc_822F1A70;
loc_822F1A4C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r10,r10,-26384
	ctx.r10.s64 = ctx.r10.s64 + -26384;
	// rlwinm r9,r11,8,24,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFC;
	// rlwinm r5,r11,7,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// lwzx r4,r9,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x822f3d58
	ctx.lr = 0x822F1A6C;
	sub_822F3D58(ctx, base);
	// mr r26,r25
	r26.u64 = r25.u64;
loc_822F1A70:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r6,r11,17,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwinm r7,r11,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// bne 0x822f1a84
	if (!ctx.cr0.eq) goto loc_822F1A84;
	// rlwinm r7,r11,18,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
loc_822F1A84:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// bne cr6,0x822f1a94
	if (!ctx.cr6.eq) goto loc_822F1A94;
	// rlwinm r4,r11,24,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
loc_822F1A94:
	// rlwinm r9,r11,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// rlwinm r8,r11,18,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// rlwinm r5,r11,12,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822f0cc0
	ctx.lr = 0x822F1AA8;
	sub_822F0CC0(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r29,r10,9192
	r29.s64 = ctx.r10.s64 + 9192;
	// addi r28,r11,-7328
	r28.s64 = ctx.r11.s64 + -7328;
	// addi r11,r28,-64
	ctx.r11.s64 = r28.s64 + -64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3F;
	// lbzx r30,r10,r11
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi r30,0
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble 0x822f1adc
	if (!ctx.cr0.gt) goto loc_822F1ADC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F1ADC;
	sub_822F3C00(ctx, base);
loc_822F1ADC:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x822f1bc4
	if (!ctx.cr6.eq) goto loc_822F1BC4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f1af8
	if (!ctx.cr0.eq) goto loc_822F1AF8;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x822f1b20
	goto loc_822F1B20;
loc_822F1AF8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822f1b0c
	if (!ctx.cr0.eq) goto loc_822F1B0C;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x822f1b20
	goto loc_822F1B20;
loc_822F1B0C:
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// li r10,3
	ctx.r10.s64 = 3;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_822F1B20:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r9,r11,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822f1b50
	if (!ctx.cr0.eq) goto loc_822F1B50;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x822f1b50
	if (ctx.cr6.eq) goto loc_822F1B50;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r5,r10,8,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	// bl 0x822f1308
	ctx.lr = 0x822F1B4C;
	sub_822F1308(ctx, base);
	// b 0x822f1cbc
	goto loc_822F1CBC;
loc_822F1B50:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f1b60
	if (ctx.cr0.eq) goto loc_822F1B60;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822f1b6c
	goto loc_822F1B6C;
loc_822F1B60:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,6,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// lbzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r28.u32);
loc_822F1B6C:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x822f1b80
	if (!ctx.cr6.eq) goto loc_822F1B80;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// b 0x822f1b8c
	goto loc_822F1B8C;
loc_822F1B80:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r6,r10,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
loc_822F1B8C:
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r9,r7,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0x1;
	// stb r24,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, r24.u8);
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r8,r8,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1;
	// rlwinm r7,r7,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x1;
	// rlwinm r4,r4,3,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x1;
	// bl 0x822f1038
	ctx.lr = 0x822F1BC0;
	sub_822F1038(ctx, base);
	// b 0x822f1cbc
	goto loc_822F1CBC;
loc_822F1BC4:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// bne cr6,0x822f1cbc
	if (!ctx.cr6.eq) goto loc_822F1CBC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x822f1c08
	if (ctx.cr0.eq) goto loc_822F1C08;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r10,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwinm r10,r10,1,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x2;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x822f1c08
	if (!ctx.cr6.eq) goto loc_822F1C08;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// b 0x822f1c14
	goto loc_822F1C14;
loc_822F1C08:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
loc_822F1C14:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r5,r11,6,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r8,r11,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// stb r25,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, r25.u8);
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r9,r7,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0x1;
	// rlwinm r7,r7,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x1;
	// lbzx r11,r5,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + r28.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822f1038
	ctx.lr = 0x822F1C50;
	sub_822F1038(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F1C5C;
	sub_822F3C00(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,6,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwimi r7,r8,30,4,4
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x8000000) | (ctx.r7.u64 & 0xFFFFFFFFF7FFFFFF);
	// rlwimi r9,r7,6,30,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0x3) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFC);
	// clrlwi r5,r9,26
	ctx.r5.u64 = ctx.r9.u32 & 0x3F;
	// beq 0x822f1c90
	if (ctx.cr0.eq) goto loc_822F1C90;
	// ori r5,r5,128
	ctx.r5.u64 = ctx.r5.u64 | 128;
loc_822F1C90:
	// lbz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r25,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, r25.u8);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822f1038
	ctx.lr = 0x822F1CBC;
	sub_822F1038(ctx, base);
loc_822F1CBC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8230D308) {
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
	ctx.lr = 0x8230D310;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	// beq cr6,0x8230d540
	if (ctx.cr6.eq) goto loc_8230D540;
	// clrlwi. r25,r11,24
	r25.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// li r27,0
	r27.s64 = 0;
	// beq 0x8230d4a8
	if (ctx.cr0.eq) goto loc_8230D4A8;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r26,-10812(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + -10812);
	// bl 0x8230c310
	ctx.lr = 0x8230D354;
	sub_8230C310(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8233e7e0
	ctx.lr = 0x8230D35C;
	sub_8233E7E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8230d4a0
	if (ctx.cr6.eq) goto loc_8230D4A0;
	// lwz r11,76(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230d384
	if (!ctx.cr6.eq) goto loc_8230D384;
loc_8230D370:
	// li r31,33
	r31.s64 = 33;
loc_8230D374:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8233e820
	ctx.lr = 0x8230D37C;
	sub_8233E820(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8230d544
	goto loc_8230D544;
loc_8230D384:
	// lwz r8,168(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 168);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// lwz r10,28(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8230d3b8
	if (!ctx.cr6.gt) goto loc_8230D3B8;
	// lwz r9,32(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
loc_8230D39C:
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r28.u32, ctx.xer);
	// beq cr6,0x8230d3b8
	if (ctx.cr6.eq) goto loc_8230D3B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8230d39c
	if (ctx.cr6.lt) goto loc_8230D39C;
loc_8230D3B8:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8230d3c8
	if (ctx.cr6.lt) goto loc_8230D3C8;
	// li r31,37
	r31.s64 = 37;
	// b 0x8230d374
	goto loc_8230D374;
loc_8230D3C8:
	// lwz r10,44(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r27
	r29.u64 = r27.u64;
	// lwzx r30,r10,r11
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8230d4a0
	if (ctx.cr6.eq) goto loc_8230D4A0;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_8230D3E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,76(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 76);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8230d488
	if (!ctx.cr6.eq) goto loc_8230D488;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,40(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 40);
	// bl 0x8235ace0
	ctx.lr = 0x8230D410;
	sub_8235ACE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230d370
	if (!ctx.cr0.eq) goto loc_8230D370;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230D434;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230d488
	if (ctx.cr6.eq) goto loc_8230D488;
	// stw r27,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230D460;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230d54c
	if (!ctx.cr0.eq) goto loc_8230D54C;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230D480;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230d54c
	if (!ctx.cr0.eq) goto loc_8230D54C;
loc_8230D488:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r30
	r31.u64 = ctx.r11.u64 + r30.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8230d3e8
	if (!ctx.cr6.eq) goto loc_8230D3E8;
loc_8230D4A0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8233e820
	ctx.lr = 0x8230D4A8;
	sub_8233E820(ctx, base);
loc_8230D4A8:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,40(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 40);
	// bl 0x8233f818
	ctx.lr = 0x8230D4B4;
	sub_8233F818(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230d544
	if (!ctx.cr0.eq) goto loc_8230D544;
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8230d4ec
	if (!ctx.cr6.gt) goto loc_8230D4EC;
	// lwz r10,76(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 76);
loc_8230D4D0:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8230d4ec
	if (!ctx.cr6.eq) goto loc_8230D4EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8230d4d0
	if (ctx.cr6.lt) goto loc_8230D4D0;
loc_8230D4EC:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8230d540
	if (!ctx.cr6.eq) goto loc_8230D540;
	// lwz r3,40(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 40);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// stw r27,40(r28)
	REX_STORE_U32(r28.u32 + 40, r27.u32);
	// beq cr6,0x8230d510
	if (ctx.cr6.eq) goto loc_8230D510;
	// bl 0x8232fc60
	ctx.lr = 0x8230D508;
	sub_8232FC60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230d544
	if (!ctx.cr0.eq) goto loc_8230D544;
loc_8230D510:
	// lwz r4,76(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 76);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8230d53c
	if (ctx.cr6.eq) goto loc_8230D53C;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,5068
	ctx.r5.s64 = ctx.r10.s64 + 5068;
	// li r6,1432
	ctx.r6.s64 = 1432;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8230D53C;
	sub_82330D00(ctx, base);
loc_8230D53C:
	// stw r27,76(r28)
	REX_STORE_U32(r28.u32 + 76, r27.u32);
loc_8230D540:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230D544:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_8230D54C:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8230d374
	goto loc_8230D374;
}

DEFINE_REX_FUNC(sub_8231C940) {
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
	ctx.lr = 0x8231C948;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// bl 0x82317938
	ctx.lr = 0x8231C968;
	sub_82317938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231cca8
	if (!ctx.cr0.eq) goto loc_8231CCA8;
	// lis r11,26731
	ctx.r11.s64 = 1751842816;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// ori r11,r11,28268
	ctx.r11.u64 = ctx.r11.u64 | 28268;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8231c98c
	if (ctx.cr6.eq) goto loc_8231C98C;
loc_8231C984:
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x8231cca8
	goto loc_8231CCA8;
loc_8231C98C:
	// li r29,0
	r29.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// sth r29,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r29.u16);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82340718
	ctx.lr = 0x8231C9AC;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231cca8
	if (!ctx.cr0.eq) goto loc_8231CCA8;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r26,-32129
	r26.s64 = -2105606144;
	// addi r27,r11,6576
	r27.s64 = ctx.r11.s64 + 6576;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r6,2580
	ctx.r6.s64 = 2580;
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x8231C9E8;
	sub_82330A38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r25,r11,4376
	r25.s64 = ctx.r11.s64 + 4376;
	// beq 0x8231ca10
	if (ctx.cr0.eq) goto loc_8231CA10;
	// stw r25,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r25.u32);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r29.u32);
	// stw r29,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r29.u32);
	// stw r29,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r29.u32);
	// b 0x8231ca14
	goto loc_8231CA14;
loc_8231CA10:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8231CA14:
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231ca28
	if (!ctx.cr6.eq) goto loc_8231CA28;
loc_8231CA20:
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x8231cca8
	goto loc_8231CCA8;
loc_8231CA28:
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// addi r6,r11,20880
	ctx.r6.s64 = ctx.r11.s64 + 20880;
	// addi r5,r10,-29032
	ctx.r5.s64 = ctx.r10.s64 + -29032;
	// bl 0x82314f40
	ctx.lr = 0x8231CA40;
	sub_82314F40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231cca8
	if (!ctx.cr0.eq) goto loc_8231CCA8;
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2587
	ctx.r6.s64 = 2587;
	// mulli r4,r10,28
	ctx.r4.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(28));
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8231CA68;
	sub_82330E40(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8231ca20
	if (ctx.cr0.eq) goto loc_8231CA20;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8231cacc
	if (!ctx.cr6.gt) goto loc_8231CACC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// addi r10,r10,6196
	ctx.r10.s64 = ctx.r10.s64 + 6196;
	// addi r8,r11,6204
	ctx.r8.s64 = ctx.r11.s64 + 6204;
loc_8231CA98:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231cab8
	if (ctx.cr0.eq) goto loc_8231CAB8;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r29,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r29.u32);
	// stw r29,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r29.u32);
loc_8231CAB8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8231ca98
	if (ctx.cr6.lt) goto loc_8231CA98;
loc_8231CACC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r28,r29
	r28.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8231cb44
	if (!ctx.cr6.gt) goto loc_8231CB44;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8231CAE0:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82317938
	ctx.lr = 0x8231CAF0;
	sub_82317938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231cca8
	if (!ctx.cr0.eq) goto loc_8231CCA8;
	// lis r11,8299
	ctx.r11.s64 = 543883264;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// ori r11,r11,28268
	ctx.r11.u64 = ctx.r11.u64 | 28268;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8231c984
	if (!ctx.cr6.eq) goto loc_8231C984;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// addi r3,r31,-8
	ctx.r3.s64 = r31.s64 + -8;
	// bl 0x8231c210
	ctx.lr = 0x8231CB28;
	sub_8231C210(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231cca8
	if (!ctx.cr0.eq) goto loc_8231CCA8;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8231cae0
	if (ctx.cr6.lt) goto loc_8231CAE0;
loc_8231CB44:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82317938
	ctx.lr = 0x8231CB54;
	sub_82317938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231cca8
	if (!ctx.cr0.eq) goto loc_8231CCA8;
	// lis r11,26739
	ctx.r11.s64 = 1752367104;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// ori r11,r11,26220
	ctx.r11.u64 = ctx.r11.u64 | 26220;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8231c984
	if (!ctx.cr6.eq) goto loc_8231C984;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82340718
	ctx.lr = 0x8231CB88;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231cca8
	if (!ctx.cr0.eq) goto loc_8231CCA8;
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2614
	ctx.r6.s64 = 2614;
	// li r4,24
	ctx.r4.s64 = 24;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x8231CBB8;
	sub_82330A38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8231cbd8
	if (ctx.cr0.eq) goto loc_8231CBD8;
	// stw r25,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r25.u32);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r29.u32);
	// stw r29,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r29.u32);
	// stw r29,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r29.u32);
	// b 0x8231cbdc
	goto loc_8231CBDC;
loc_8231CBD8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8231CBDC:
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231ca20
	if (ctx.cr6.eq) goto loc_8231CA20;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// addi r6,r11,20880
	ctx.r6.s64 = ctx.r11.s64 + 20880;
	// addi r5,r10,-22856
	ctx.r5.s64 = ctx.r10.s64 + -22856;
	// bl 0x82314f40
	ctx.lr = 0x8231CC00;
	sub_82314F40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231cca8
	if (!ctx.cr0.eq) goto loc_8231CCA8;
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2621
	ctx.r6.s64 = 2621;
	// mulli r4,r10,12
	ctx.r4.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8231CC28;
	sub_82330E40(ctx, base);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8231ca20
	if (ctx.cr0.eq) goto loc_8231CA20;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8231cca4
	if (!ctx.cr6.gt) goto loc_8231CCA4;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8231CC44:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82317938
	ctx.lr = 0x8231CC54;
	sub_82317938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231cca8
	if (!ctx.cr0.eq) goto loc_8231CCA8;
	// lis r11,25715
	ctx.r11.s64 = 1685258240;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// ori r11,r11,26220
	ctx.r11.u64 = ctx.r11.u64 | 26220;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8231c984
	if (!ctx.cr6.eq) goto loc_8231C984;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + ctx.r11.u64;
	// addi r3,r31,-8
	ctx.r3.s64 = r31.s64 + -8;
	// bl 0x8231a5e8
	ctx.lr = 0x8231CC88;
	sub_8231A5E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231cca8
	if (!ctx.cr0.eq) goto loc_8231CCA8;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8231cc44
	if (ctx.cr6.lt) goto loc_8231CC44;
loc_8231CCA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231CCA8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82336B78) {
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
	ctx.lr = 0x82336B80;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2ca8
	ctx.lr = 0x82336B88;
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f29,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f29.f64 = double(temp.f32);
	// fmr f30,f29
	f30.f64 = f29.f64;
	// bl 0x823ef5f0
	ctx.lr = 0x82336BAC;
	sub_823EF5F0(ctx, base);
	// lwz r11,25576(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 25576);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82336bc0
	if (!ctx.cr6.eq) goto loc_82336BC0;
	// li r31,0
	r31.s64 = 0;
loc_82336BC0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r28,r29,25572
	r28.s64 = r29.s64 + 25572;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// lfs f31,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f31.f64 = double(temp.f32);
	// beq cr6,0x82336cf0
	if (ctx.cr6.eq) goto loc_82336CF0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f28,4104(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4104);
	f28.f64 = double(temp.f32);
loc_82336BDC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235b958
	ctx.lr = 0x82336BE8;
	sub_8235B958(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82336cd4
	if (ctx.cr6.eq) goto loc_82336CD4;
	// addi r30,r29,20896
	r30.s64 = r29.s64 + 20896;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235b9e0
	ctx.lr = 0x82336C0C;
	sub_8235B9E0(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// ble cr6,0x82336c6c
	if (!ctx.cr6.gt) goto loc_82336C6C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235b008
	ctx.lr = 0x82336C2C;
	sub_8235B008(ctx, base);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r29,24564
	ctx.r3.s64 = r29.s64 + 24564;
	// bl 0x82353f20
	ctx.lr = 0x82336C44;
	sub_82353F20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82336d68
	if (!ctx.cr6.eq) goto loc_82336D68;
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 - ctx.f0.f64));
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82336C6C:
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82336c8c
	if (!ctx.cr6.eq) goto loc_82336C8C;
	// lfs f13,556(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 556);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82336cd4
	if (ctx.cr6.eq) goto loc_82336CD4;
	// stfs f0,556(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 556, temp.u32);
	// b 0x82336cd4
	goto loc_82336CD4;
loc_82336C8C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82336cd4
	if (!ctx.cr6.eq) goto loc_82336CD4;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// blt cr6,0x82336cd4
	if (ctx.cr6.lt) goto loc_82336CD4;
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823ef5f0
	ctx.lr = 0x82336CB0;
	sub_823EF5F0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235b8c8
	ctx.lr = 0x82336CBC;
	sub_8235B8C8(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8235bc60
	ctx.lr = 0x82336CCC;
	sub_8235BC60(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fadds f30,f0,f30
	f30.f64 = double(float(ctx.f0.f64 + f30.f64));
loc_82336CD4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82336ce8
	if (!ctx.cr6.eq) goto loc_82336CE8;
	// li r31,0
	r31.s64 = 0;
loc_82336CE8:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// bne cr6,0x82336bdc
	if (!ctx.cr6.eq) goto loc_82336BDC;
loc_82336CF0:
	// lbz r11,26164(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 26164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82336d64
	if (ctx.cr6.eq) goto loc_82336D64;
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f30.f64, f31.f64);
	// bge cr6,0x82336d44
	if (!ctx.cr6.lt) goto loc_82336D44;
	// li r5,124
	ctx.r5.s64 = 124;
	// addi r4,r29,26168
	ctx.r4.s64 = r29.s64 + 26168;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823ef2f8
	ctx.lr = 0x82336D14;
	sub_823EF2F8(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// fsubs f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f31.f64 - f30.f64));
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bne cr6,0x82336d3c
	if (!ctx.cr6.eq) goto loc_82336D3C;
	// li r11,-10000
	ctx.r11.s64 = -10000;
	// stw r11,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// bl 0x8235bbe0
	ctx.lr = 0x82336D38;
	sub_8235BBE0(ctx, base);
	// b 0x82336d40
	goto loc_82336D40;
loc_82336D3C:
	// bl 0x8235bc60
	ctx.lr = 0x82336D40;
	sub_8235BC60(ctx, base);
loc_82336D40:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	f30.f64 = f31.f64;
loc_82336D44:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// fdivs f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f31.f64 / f30.f64));
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8235be78
	ctx.lr = 0x82336D54;
	sub_8235BE78(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82334608
	ctx.lr = 0x82336D64;
	sub_82334608(ctx, base);
loc_82336D64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82336D68:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2cf4
	ctx.lr = 0x82336D74;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8234C0E8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234c0fc
	if (!ctx.cr6.eq) goto loc_8234C0FC;
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_8234C0FC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8234c114
	if (ctx.cr6.eq) goto loc_8234C114;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8234c134
	if (!ctx.cr6.eq) goto loc_8234C134;
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
loc_8234C110:
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_8234C114:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8234c1ac
	if (ctx.cr6.eq) goto loc_8234C1AC;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8234c16c
	if (!ctx.cr6.eq) goto loc_8234C16C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8234C134:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x8234c144
	if (!ctx.cr6.eq) goto loc_8234C144;
	// lwz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// b 0x8234c110
	goto loc_8234C110;
loc_8234C144:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x8234c154
	if (!ctx.cr6.eq) goto loc_8234C154;
	// lwz r11,152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// b 0x8234c110
	goto loc_8234C110;
loc_8234C154:
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x8234c164
	if (!ctx.cr6.eq) goto loc_8234C164;
	// lwz r11,160(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// b 0x8234c110
	goto loc_8234C110;
loc_8234C164:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_8234C16C:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x8234c184
	if (!ctx.cr6.eq) goto loc_8234C184;
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8234C184:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x8234c19c
	if (!ctx.cr6.eq) goto loc_8234C19C;
	// lwz r11,156(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8234C19C:
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x8234c164
	if (!ctx.cr6.eq) goto loc_8234C164;
	// lwz r11,164(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_8234C1AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82351130) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82351140
	if (!ctx.cr6.eq) goto loc_82351140;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82351140:
	// lfs f0,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82351798) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823517a8
	if (!ctx.cr6.eq) goto loc_823517A8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_823517A8:
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823517c0
	if (!ctx.cr6.eq) goto loc_823517C0;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_823517C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823535A0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823535b0
	if (!ctx.cr6.eq) goto loc_823535B0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82352960
	sub_82352960(ctx, base);
	return;
loc_823535B0:
	// b 0x823533e0
	sub_823533E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82353870) {
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
	ctx.lr = 0x82353878;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// stw r5,288(r3)
	REX_STORE_U32(ctx.r3.u32 + 288, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,272(r3)
	REX_STORE_U32(ctx.r3.u32 + 272, ctx.r6.u32);
	// addi r30,r3,284
	r30.s64 = ctx.r3.s64 + 284;
	// stb r10,268(r3)
	REX_STORE_U8(ctx.r3.u32 + 268, ctx.r10.u8);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// li r24,0
	r24.s64 = 0;
	// bl 0x8233e860
	ctx.lr = 0x823538BC;
	sub_8233E860(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82353a4c
	if (!ctx.cr6.eq) goto loc_82353A4C;
	// clrlwi r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	// lwz r23,0(r30)
	r23.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823538f0
	if (ctx.cr6.eq) goto loc_823538F0;
	// addi r30,r31,280
	r30.s64 = r31.s64 + 280;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8233e860
	ctx.lr = 0x823538E0;
	sub_8233E860(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823539b0
	if (!ctx.cr6.eq) goto loc_823539B0;
	// lwz r24,0(r30)
	r24.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_823538F0:
	// addi r11,r28,2
	ctx.r11.s64 = r28.s64 + 2;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82353a28
	if (ctx.cr6.gt) goto loc_82353A28;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82353920
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82353920;
	// bdzf 4*cr6+eq,0x82353928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82353928;
	// bdzf 4*cr6+eq,0x82353930
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82353930;
	// bdzf 4*cr6+eq,0x82353938
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82353938;
	// bne cr6,0x82353940
	if (!ctx.cr6.eq) goto loc_82353940;
	// li r29,-2
	r29.s64 = -2;
	// b 0x82353944
	goto loc_82353944;
loc_82353920:
	// li r29,-1
	r29.s64 = -1;
	// b 0x82353944
	goto loc_82353944;
loc_82353928:
	// li r29,0
	r29.s64 = 0;
	// b 0x82353944
	goto loc_82353944;
loc_82353930:
	// li r29,1
	r29.s64 = 1;
	// b 0x82353944
	goto loc_82353944;
loc_82353938:
	// li r29,2
	r29.s64 = 2;
	// b 0x82353944
	goto loc_82353944;
loc_82353940:
	// li r29,3
	r29.s64 = 3;
loc_82353944:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// addi r3,r31,5
	ctx.r3.s64 = r31.s64 + 5;
	// beq cr6,0x82353960
	if (ctx.cr6.eq) goto loc_82353960;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823314a0
	ctx.lr = 0x8235395C;
	sub_823314A0(ctx, base);
	// b 0x8235396c
	goto loc_8235396C;
loc_82353960:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,9832
	ctx.r4.s64 = ctx.r11.s64 + 9832;
	// bl 0x82331480
	ctx.lr = 0x8235396C;
	sub_82331480(ctx, base);
loc_8235396C:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r30,r31,264
	r30.s64 = r31.s64 + 264;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,13752
	ctx.r4.s64 = ctx.r11.s64 + 13752;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8233e3d0
	ctx.lr = 0x82353994;
	sub_8233E3D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823539cc
	if (ctx.cr6.eq) goto loc_823539CC;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x823539b0
	if (ctx.cr6.eq) goto loc_823539B0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8233e8c8
	ctx.lr = 0x823539B0;
	sub_8233E8C8(ctx, base);
loc_823539B0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x823539c0
	if (ctx.cr6.eq) goto loc_823539C0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8233e8c8
	ctx.lr = 0x823539C0;
	sub_8233E8C8(ctx, base);
loc_823539C0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_823539CC:
	// lbz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823539ec
	if (!ctx.cr6.eq) goto loc_823539EC;
loc_823539D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8233e370
	ctx.lr = 0x823539E0;
	sub_8233E370(ctx, base);
	// lbz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823539d8
	if (ctx.cr6.eq) goto loc_823539D8;
loc_823539EC:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82353a1c
	if (ctx.cr6.eq) goto loc_82353A1C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r3,252(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// li r4,2
	ctx.r4.s64 = 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82353A1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82353A1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_82353A28:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82353a38
	if (ctx.cr6.eq) goto loc_82353A38;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8233e8c8
	ctx.lr = 0x82353A38;
	sub_8233E8C8(ctx, base);
loc_82353A38:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82353a48
	if (ctx.cr6.eq) goto loc_82353A48;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8233e8c8
	ctx.lr = 0x82353A48;
	sub_8233E8C8(ctx, base);
loc_82353A48:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82353A4C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8235DE08) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,4(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// beq cr6,0x8235de50
	if (ctx.cr6.eq) goto loc_8235DE50;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// beq cr6,0x8235de50
	if (ctx.cr6.eq) goto loc_8235DE50;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// beq cr6,0x8235de50
	if (ctx.cr6.eq) goto loc_8235DE50;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x8235de50
	if (ctx.cr6.eq) goto loc_8235DE50;
loc_8235DE48:
	// li r3,-103
	ctx.r3.s64 = -103;
	// b 0x8235dff8
	goto loc_8235DFF8;
loc_8235DE50:
	// lwz r8,8(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// cmplwi cr6,r8,32000
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 32000, ctx.xer);
	// beq cr6,0x8235de74
	if (ctx.cr6.eq) goto loc_8235DE74;
	// cmplwi cr6,r8,44100
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 44100, ctx.xer);
	// beq cr6,0x8235de74
	if (ctx.cr6.eq) goto loc_8235DE74;
	// cmplwi cr6,r8,48000
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 48000, ctx.xer);
	// beq cr6,0x8235de74
	if (ctx.cr6.eq) goto loc_8235DE74;
	// li r3,-102
	ctx.r3.s64 = -102;
	// b 0x8235dff8
	goto loc_8235DFF8;
loc_8235DE74:
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// beq cr6,0x8235de88
	if (ctx.cr6.eq) goto loc_8235DE88;
	// li r3,-104
	ctx.r3.s64 = -104;
	// b 0x8235dff8
	goto loc_8235DFF8;
loc_8235DE88:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r5,r10,1468
	ctx.r5.u64 = ctx.r10.u64 | 1468;
	// lwzx r10,r7,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// addic r4,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// subfe r7,r4,r10
	temp.u8 = (~ctx.r4.u32 + ctx.r10.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r4.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8235deb0
	if (!ctx.cr6.eq) goto loc_8235DEB0;
	// li r3,-105
	ctx.r3.s64 = -105;
	// b 0x8235dff8
	goto loc_8235DFF8;
loc_8235DEB0:
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bgt cr6,0x8235dff4
	if (ctx.cr6.gt) goto loc_8235DFF4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8235df48
	if (ctx.cr6.eq) goto loc_8235DF48;
	// bdz 0x8235df98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8235DF98;
	// bdz 0x8235de48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8235DE48;
	// lbz r7,12(r6)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r6.u32 + 12);
	// addi r6,r11,4096
	ctx.r6.s64 = ctx.r11.s64 + 4096;
	// addi r5,r11,3072
	ctx.r5.s64 = ctx.r11.s64 + 3072;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r11,5120
	ctx.r4.s64 = ctx.r11.s64 + 5120;
	// stw r10,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// addi r31,r11,1024
	r31.s64 = ctx.r11.s64 + 1024;
	// stw r8,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// addi r30,r11,2048
	r30.s64 = ctx.r11.s64 + 2048;
	// stw r9,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// stw r6,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// li r11,256
	ctx.r11.s64 = 256;
	// stb r7,135(r1)
	REX_STORE_U8(ctx.r1.u32 + 135, ctx.r7.u8);
	// addi r10,r3,7168
	ctx.r10.s64 = ctx.r3.s64 + 7168;
	// stw r5,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// addi r9,r3,6144
	ctx.r9.s64 = ctx.r3.s64 + 6144;
	// stw r4,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// addi r8,r3,4096
	ctx.r8.s64 = ctx.r3.s64 + 4096;
	// addi r7,r3,3072
	ctx.r7.s64 = ctx.r3.s64 + 3072;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r6,r3,5120
	ctx.r6.s64 = ctx.r3.s64 + 5120;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r5,r3,1024
	ctx.r5.s64 = ctx.r3.s64 + 1024;
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// addi r4,r3,2048
	ctx.r4.s64 = ctx.r3.s64 + 2048;
	// bl 0x823b2140
	ctx.lr = 0x8235DF38;
	sub_823B2140(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r10,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r10,176(r1)
	REX_STORE_U8(ctx.r1.u32 + 176, ctx.r10.u8);
	// b 0x8235dff8
	goto loc_8235DFF8;
loc_8235DF48:
	// lbz r31,12(r6)
	r31.u64 = REX_LOAD_U8(ctx.r6.u32 + 12);
	// lfs f1,16(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// stw r8,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// addi r8,r3,4096
	ctx.r8.s64 = ctx.r3.s64 + 4096;
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r7,r3,3072
	ctx.r7.s64 = ctx.r3.s64 + 3072;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// addi r6,r3,5120
	ctx.r6.s64 = ctx.r3.s64 + 5120;
	// addi r5,r3,1024
	ctx.r5.s64 = ctx.r3.s64 + 1024;
	// stb r31,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, r31.u8);
	// li r31,256
	r31.s64 = 256;
	// addi r4,r3,2048
	ctx.r4.s64 = ctx.r3.s64 + 2048;
	// addi r10,r11,2048
	ctx.r10.s64 = ctx.r11.s64 + 2048;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bl 0x823b1b30
	ctx.lr = 0x8235DF88;
	sub_823B1B30(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r10,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r10,176(r1)
	REX_STORE_U8(ctx.r1.u32 + 176, ctx.r10.u8);
	// b 0x8235dff8
	goto loc_8235DFF8;
loc_8235DF98:
	// lbz r31,12(r6)
	r31.u64 = REX_LOAD_U8(ctx.r6.u32 + 12);
	// addi r5,r11,2048
	ctx.r5.s64 = ctx.r11.s64 + 2048;
	// li r7,256
	ctx.r7.s64 = 256;
	// lfs f1,16(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// stw r10,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// addi r10,r3,7168
	ctx.r10.s64 = ctx.r3.s64 + 7168;
	// stw r8,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// addi r8,r3,4096
	ctx.r8.s64 = ctx.r3.s64 + 4096;
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// addi r9,r3,6144
	ctx.r9.s64 = ctx.r3.s64 + 6144;
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// addi r7,r3,3072
	ctx.r7.s64 = ctx.r3.s64 + 3072;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r6,r3,5120
	ctx.r6.s64 = ctx.r3.s64 + 5120;
	// addi r5,r3,1024
	ctx.r5.s64 = ctx.r3.s64 + 1024;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r3,2048
	ctx.r4.s64 = ctx.r3.s64 + 2048;
	// stb r31,103(r1)
	REX_STORE_U8(ctx.r1.u32 + 103, r31.u8);
	// bl 0x823b1318
	ctx.lr = 0x8235DFE4;
	sub_823B1318(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r10,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r10,176(r1)
	REX_STORE_U8(ctx.r1.u32 + 176, ctx.r10.u8);
	// b 0x8235dff8
	goto loc_8235DFF8;
loc_8235DFF4:
	// li r3,-106
	ctx.r3.s64 = -106;
loc_8235DFF8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

DEFINE_REX_FUNC(sub_8236E380) {
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
	ctx.lr = 0x8236E388;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lis r27,-32129
	r27.s64 = -2105606144;
	// li r26,0
	r26.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r28,r3,600
	r28.s64 = ctx.r3.s64 + 600;
	// stw r11,1012(r27)
	REX_STORE_U32(r27.u32 + 1012, ctx.r11.u32);
	// mr r30,r26
	r30.u64 = r26.u64;
	// lwz r9,164(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r10,604(r3)
	REX_STORE_U16(ctx.r3.u32 + 604, ctx.r10.u16);
	// stw r26,600(r3)
	REX_STORE_U32(ctx.r3.u32 + 600, r26.u32);
	// ble cr6,0x8236e404
	if (!ctx.cr6.gt) goto loc_8236E404;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_8236E3C4:
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
	ctx.lr = 0x8236E3E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e54c
	if (!ctx.cr6.eq) goto loc_8236E54C;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,48
	r29.s64 = r29.s64 + 48;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8236e3c4
	if (ctx.cr6.lt) goto loc_8236E3C4;
loc_8236E404:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lfs f0,316(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,312(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 312, temp.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// lwz r10,1188(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1188);
	// beq cr6,0x8236e424
	if (ctx.cr6.eq) goto loc_8236E424;
	// lwz r11,1200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1200);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_8236E424:
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// li r10,16
	ctx.r10.s64 = 16;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,4104(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4104);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r31,444
	ctx.r11.s64 = r31.s64 + 444;
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// lfs f11,3720(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	ctx.f11.f64 = double(temp.f32);
loc_8236E454:
	// lfs f0,-60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,312(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 312);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8236e468
	if (ctx.cr6.lt) goto loc_8236E468;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8236E468:
	// fmuls f13,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f0,-124(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -124, temp.u32);
	// fmadds f9,f13,f12,f11
	ctx.f9.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f11.f64)));
	// fctiwz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8236e454
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236E454;
	// lfs f0,312(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 312);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lwz r4,516(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 516);
	// addi r30,r11,16428
	r30.s64 = ctx.r11.s64 + 16428;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// fmadds f12,f13,f12,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f11.f64)));
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,524(r31)
	REX_STORE_U32(r31.u32 + 524, ctx.r11.u32);
	// beq cr6,0x8236e4dc
	if (ctx.cr6.eq) goto loc_8236E4DC;
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,162
	ctx.r6.s64 = 162;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8236E4D4;
	sub_82330D00(ctx, base);
	// stw r26,512(r31)
	REX_STORE_U32(r31.u32 + 512, r26.u32);
	// stw r26,516(r31)
	REX_STORE_U32(r31.u32 + 516, r26.u32);
loc_8236E4DC:
	// lwz r11,524(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 524);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r3,516(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 516);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r11,520(r31)
	REX_STORE_U32(r31.u32 + 520, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236e540
	if (!ctx.cr6.eq) goto loc_8236E540;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r11,520(r31)
	REX_STORE_U32(r31.u32 + 520, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,174
	ctx.r6.s64 = 174;
	// lwz r10,1012(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8236E51C;
	sub_82330E40(ctx, base);
	// addi r11,r3,15
	ctx.r11.s64 = ctx.r3.s64 + 15;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r3,516(r31)
	REX_STORE_U32(r31.u32 + 516, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,512(r31)
	REX_STORE_U32(r31.u32 + 512, ctx.r10.u32);
	// bne cr6,0x8236e540
	if (!ctx.cr6.eq) goto loc_8236E540;
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_8236E540:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8236d5a8
	ctx.lr = 0x8236E548;
	sub_8236D5A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236E54C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82384AC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82384AD0;
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
	// bne cr6,0x82384b00
	if (!ctx.cr6.eq) goto loc_82384B00;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82384648
	ctx.lr = 0x82384AEC;
	sub_82384648(ctx, base);
	// stw r30,2184(r31)
	REX_STORE_U32(r31.u32 + 2184, r30.u32);
	// stw r30,2200(r31)
	REX_STORE_U32(r31.u32 + 2200, r30.u32);
loc_82384AF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_82384B00:
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// bne cr6,0x82384b80
	if (!ctx.cr6.eq) goto loc_82384B80;
	// lwz r11,1260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1260);
	// li r29,0
	r29.s64 = 0;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82384af4
	if (ctx.cr6.eq) goto loc_82384AF4;
	// bge cr6,0x82384b2c
	if (!ctx.cr6.lt) goto loc_82384B2C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82384648
	ctx.lr = 0x82384B28;
	sub_82384648(ctx, base);
	// li r29,1
	r29.s64 = 1;
loc_82384B2C:
	// lwz r11,1260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1260);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bge cr6,0x82384b50
	if (!ctx.cr6.lt) goto loc_82384B50;
loc_82384B38:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82384430
	ctx.lr = 0x82384B44;
	sub_82384430(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1260);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// blt cr6,0x82384b38
	if (ctx.cr6.lt) goto loc_82384B38;
loc_82384B50:
	// clrlwi r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82384b74
	if (ctx.cr6.eq) goto loc_82384B74;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r30,2164(r31)
	r30.u64 = REX_LOAD_U8(r31.u32 + 2164);
	// lbz r29,2165(r31)
	r29.u64 = REX_LOAD_U8(r31.u32 + 2165);
	// bl 0x823c86b8
	ctx.lr = 0x82384B6C;
	sub_823C86B8(ctx, base);
	// stb r30,2164(r31)
	REX_STORE_U8(r31.u32 + 2164, r30.u8);
	// stb r29,2165(r31)
	REX_STORE_U8(r31.u32 + 2165, r29.u8);
loc_82384B74:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_82384B80:
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8238E180) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8238e190
	if (!ctx.cr6.eq) goto loc_8238E190;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8238E190:
	// b 0x8238ddc8
	sub_8238DDC8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8238F7F0) {
	REX_FUNC_PROLOGUE();
	// lbz r11,678(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 678);
	// lbz r9,650(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 650);
	// rlwinm r11,r11,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r9,27
	ctx.r10.u64 = ctx.r9.u32 & 0x1F;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8238f860
	if (ctx.cr6.gt) goto loc_8238F860;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8238f834
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8238F834;
	// bdzf 4*cr6+eq,0x8238f858
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8238F858;
	// bne cr6,0x8238f820
	if (!ctx.cr6.eq) goto loc_8238F820;
loc_8238F820:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r7,r11,30660
	ctx.r7.s64 = ctx.r11.s64 + 30660;
	// lbzx r11,r10,r7
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// b 0x8238f864
	goto loc_8238F864;
loc_8238F834:
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// rlwinm r11,r10,3,24,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xF8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x8238f850
	if (!ctx.cr6.lt) goto loc_8238F850;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subfic r10,r11,255
	ctx.xer.ca = ctx.r11.u32 <= 255;
	ctx.r10.u64 = static_cast<uint64_t>(255) - ctx.r11.u64;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
loc_8238F850:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8238f864
	goto loc_8238F864;
loc_8238F858:
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x8238f864
	goto loc_8238F864;
loc_8238F860:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8238F864:
	// lbz r10,652(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 652);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// mullw r7,r10,r11
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r10,468(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 468);
	// srawi r11,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 6;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x8238f894
	if (ctx.cr6.lt) goto loc_8238F894;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,64
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 64, ctx.xer);
	// ble cr6,0x8238f8a8
	if (!ctx.cr6.gt) goto loc_8238F8A8;
	// subfic r11,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// b 0x8238f8a8
	goto loc_8238F8A8;
loc_8238F894:
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x8238f8a8
	if (!ctx.cr6.lt) goto loc_8238F8A8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8238F8A8:
	// stw r11,476(r8)
	REX_STORE_U32(ctx.r8.u32 + 476, ctx.r11.u32);
	// lbz r11,650(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 650);
	// lbz r10,651(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 651);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// stb r7,650(r3)
	REX_STORE_U8(ctx.r3.u32 + 650, ctx.r7.u8);
	// cmpwi cr6,r7,31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 31, ctx.xer);
	// ble cr6,0x8238f8d4
	if (!ctx.cr6.gt) goto loc_8238F8D4;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// addi r10,r11,-64
	ctx.r10.s64 = ctx.r11.s64 + -64;
	// stb r10,650(r3)
	REX_STORE_U8(ctx.r3.u32 + 650, ctx.r10.u8);
loc_8238F8D4:
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

DEFINE_REX_FUNC(sub_823968A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823968A8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,296
	ctx.r5.s64 = 296;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823968C8;
	sub_823EF5F0(ctx, base);
	// lwz r11,292(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 292);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396d0c
	if (ctx.cr6.eq) goto loc_82396D0C;
	// lwz r11,328(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 328);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r9,r10,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82396918
	if (!ctx.cr6.eq) goto loc_82396918;
	// rlwinm r11,r10,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82396918
	if (!ctx.cr6.eq) goto loc_82396918;
	// rlwinm r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	// li r11,64
	ctx.r11.s64 = 64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8239690c
	if (ctx.cr6.eq) goto loc_8239690C;
	// li r11,72
	ctx.r11.s64 = 72;
loc_8239690C:
	// rlwinm r10,r10,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// b 0x82396930
	goto loc_82396930;
loc_82396918:
	// rlwinm r10,r10,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	// li r11,32
	ctx.r11.s64 = 32;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239692c
	if (ctx.cr6.eq) goto loc_8239692C;
	// li r11,40
	ctx.r11.s64 = 40;
loc_8239692C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
loc_82396930:
	// beq cr6,0x82396938
	if (ctx.cr6.eq) goto loc_82396938;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_82396938:
	// stw r11,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r11.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// lwz r11,328(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 328);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x823314a0
	ctx.lr = 0x82396950;
	sub_823314A0(ctx, base);
	// lwz r11,328(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 328);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,8
	ctx.r8.s64 = 8;
	// lhz r10,62(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 62);
	// stw r10,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r10.u32);
	// lwz r7,328(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 328);
	// lwz r6,52(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 52);
	// stw r6,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r6.u32);
	// lwz r5,328(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 328);
	// lwz r4,48(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 48);
	// rlwinm r3,r4,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239698c
	if (ctx.cr6.eq) goto loc_8239698C;
	// stw r9,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r9.u32);
	// b 0x82396ac8
	goto loc_82396AC8;
loc_8239698C:
	// lwz r11,328(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 328);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82396ac0
	if (!ctx.cr6.eq) goto loc_82396AC0;
	// rlwinm r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823969b4
	if (ctx.cr6.eq) goto loc_823969B4;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82396ac4
	goto loc_82396AC4;
loc_823969B4:
	// rlwinm r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823969d4
	if (ctx.cr6.eq) goto loc_823969D4;
	// lwz r11,356(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82396ac0
	if (ctx.cr6.eq) goto loc_82396AC0;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82396ac4
	goto loc_82396AC4;
loc_823969D4:
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396a0c
	if (ctx.cr6.eq) goto loc_82396A0C;
	// lwz r11,368(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82396a04
	if (ctx.cr6.eq) goto loc_82396A04;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// li r10,2
	ctx.r10.s64 = 2;
	// mulli r7,r11,56
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(56));
	// stw r10,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r10.u32);
	// stw r7,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r7.u32);
	// b 0x82396ac8
	goto loc_82396AC8;
loc_82396A04:
	// stw r8,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r8.u32);
	// b 0x82396ac8
	goto loc_82396AC8;
loc_82396A0C:
	// rlwinm r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396a68
	if (ctx.cr6.eq) goto loc_82396A68;
	// lwz r10,288(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 288);
	// rlwinm r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82396a44
	if (!ctx.cr6.eq) goto loc_82396A44;
	// lwz r11,380(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 380);
	// rlwinm r7,r11,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82396a44
	if (!ctx.cr6.eq) goto loc_82396A44;
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82396a58
	if (ctx.cr6.eq) goto loc_82396A58;
loc_82396A44:
	// lwz r11,380(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 380);
	// rlwinm r7,r11,0,22,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3E0;
	// rlwinm r7,r7,0,26,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82396ac0
	if (ctx.cr6.eq) goto loc_82396AC0;
loc_82396A58:
	// ori r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 512;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r10,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r10.u32);
	// b 0x82396ac4
	goto loc_82396AC4;
loc_82396A68:
	// rlwinm r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82396ac8
	if (ctx.cr6.eq) goto loc_82396AC8;
	// lwz r10,380(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 380);
	// rlwinm r11,r10,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82396ac0
	if (ctx.cr6.eq) goto loc_82396AC0;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// rlwinm r7,r11,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82396aa0
	if (!ctx.cr6.eq) goto loc_82396AA0;
	// rlwinm r7,r10,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82396ac0
	if (ctx.cr6.eq) goto loc_82396AC0;
loc_82396AA0:
	// rlwinm r10,r10,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82396ac0
	if (!ctx.cr6.eq) goto loc_82396AC0;
	// li r10,10
	ctx.r10.s64 = 10;
	// ori r7,r11,512
	ctx.r7.u64 = ctx.r11.u64 | 512;
	// stw r10,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r10.u32);
	// stw r7,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r7.u32);
	// b 0x82396ac8
	goto loc_82396AC8;
loc_82396AC0:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82396AC4:
	// stw r11,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r11.u32);
loc_82396AC8:
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82396c64
	if (!ctx.cr6.eq) goto loc_82396C64;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82396b14
	if (!ctx.cr6.eq) goto loc_82396B14;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r9,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r9.u32);
loc_82396AF0:
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r11.u32);
	// cmplwi cr6,r9,16384
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16384, ctx.xer);
	// ble cr6,0x82396af0
	if (!ctx.cr6.gt) goto loc_82396AF0;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r11.u32);
	// b 0x82396c64
	goto loc_82396C64;
loc_82396B14:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82396b28
	if (!ctx.cr6.eq) goto loc_82396B28;
	// li r11,2048
	ctx.r11.s64 = 2048;
	// stw r11,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r11.u32);
	// b 0x82396c64
	goto loc_82396C64;
loc_82396B28:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82396b44
	if (!ctx.cr6.eq) goto loc_82396B44;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// b 0x82396c60
	goto loc_82396C60;
loc_82396B44:
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 260);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x82396c64
	if (ctx.cr6.gt) goto loc_82396C64;
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,27496
	ctx.r12.s64 = ctx.r12.s64 + 27496;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82396BE8;
	case 1:
		goto loc_82396B98;
	case 2:
		goto loc_82396BAC;
	case 3:
		goto loc_82396BC0;
	case 4:
		goto loc_82396BD4;
	case 5:
		goto loc_82396BD4;
	case 6:
		goto loc_82396BE8;
	case 7:
		goto loc_82396BE8;
	case 8:
		goto loc_82396BE8;
	case 9:
		goto loc_82396BE8;
	case 10:
		goto loc_82396BE8;
	case 11:
		goto loc_82396BE8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82396B98:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r9,r11,61,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// stw r9,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r9.u32);
	// b 0x82396c58
	goto loc_82396C58;
loc_82396BAC:
	// li r11,16
	ctx.r11.s64 = 16;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r9,r11,61,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// stw r9,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r9.u32);
	// b 0x82396c58
	goto loc_82396C58;
loc_82396BC0:
	// li r11,24
	ctx.r11.s64 = 24;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r9,r11,61,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// stw r9,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r9.u32);
	// b 0x82396c58
	goto loc_82396C58;
loc_82396BD4:
	// li r11,32
	ctx.r11.s64 = 32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r9,r11,61,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// stw r9,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r9.u32);
	// b 0x82396c58
	goto loc_82396C58;
loc_82396BE8:
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,27648
	ctx.r12.s64 = ctx.r12.s64 + 27648;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82396C50;
	case 1:
		goto loc_82396C64;
	case 2:
		goto loc_82396C64;
	case 3:
		goto loc_82396C64;
	case 4:
		goto loc_82396C64;
	case 5:
		goto loc_82396C64;
	case 6:
		goto loc_82396C30;
	case 7:
		goto loc_82396C38;
	case 8:
		goto loc_82396C40;
	case 9:
		goto loc_82396C48;
	case 10:
		goto loc_82396C48;
	case 11:
		goto loc_82396C48;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82396C30:
	// stw r8,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r8.u32);
	// b 0x82396c58
	goto loc_82396C58;
loc_82396C38:
	// li r11,36
	ctx.r11.s64 = 36;
	// b 0x82396c54
	goto loc_82396C54;
loc_82396C40:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82396c54
	goto loc_82396C54;
loc_82396C48:
	// stw r9,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r9.u32);
	// b 0x82396c64
	goto loc_82396C64;
loc_82396C50:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82396C54:
	// stw r11,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r11.u32);
loc_82396C58:
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
loc_82396C60:
	// stw r10,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r10.u32);
loc_82396C64:
	// lwz r11,324(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 324);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82396c94
	if (ctx.cr6.eq) goto loc_82396C94;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r8.u32);
	// lwz r7,324(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 324);
	// lwzx r6,r10,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r5,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r5.u32);
	// b 0x82396cdc
	goto loc_82396CDC;
loc_82396C94:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396cc4
	if (ctx.cr6.eq) goto loc_82396CC4;
	// lwz r11,324(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 324);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r9.u32);
	// lwz r8,324(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 324);
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r6,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r6.u32);
	// b 0x82396cdc
	goto loc_82396CDC;
loc_82396CC4:
	// lwz r11,328(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 328);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r10.u32);
	// lwz r9,328(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 328);
	// lwz r8,36(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// stw r8,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r8.u32);
loc_82396CDC:
	// lwz r11,328(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 328);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r11,r10,0,15,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FC00;
	// rlwinm r11,r11,0,20,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bne cr6,0x82396cfc
	if (!ctx.cr6.eq) goto loc_82396CFC;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// b 0x8239717c
	goto loc_8239717C;
loc_82396CFC:
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// bne cr6,0x8239716c
	if (!ctx.cr6.eq) goto loc_8239716C;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// b 0x8239717c
	goto loc_8239717C;
loc_82396D0C:
	// lwz r11,320(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 320);
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm r9,r10,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82396d50
	if (!ctx.cr6.eq) goto loc_82396D50;
	// rlwinm r11,r10,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82396d50
	if (!ctx.cr6.eq) goto loc_82396D50;
	// rlwinm r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	// li r11,64
	ctx.r11.s64 = 64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82396d48
	if (ctx.cr6.eq) goto loc_82396D48;
	// li r11,72
	ctx.r11.s64 = 72;
loc_82396D48:
	// rlwinm r9,r10,0,11,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100000;
	// b 0x82396d64
	goto loc_82396D64;
loc_82396D50:
	// rlwinm r8,r10,0,12,12
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	// li r11,32
	ctx.r11.s64 = 32;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82396d64
	if (ctx.cr6.eq) goto loc_82396D64;
	// li r11,40
	ctx.r11.s64 = 40;
loc_82396D64:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82396d70
	if (ctx.cr6.eq) goto loc_82396D70;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_82396D70:
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82396d84
	if (ctx.cr6.eq) goto loc_82396D84;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// b 0x82396d94
	goto loc_82396D94;
loc_82396D84:
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396d94
	if (ctx.cr6.eq) goto loc_82396D94;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_82396D94:
	// stw r11,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r11.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,320(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 320);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x823314a0
	ctx.lr = 0x82396DB0;
	sub_823314A0(ctx, base);
	// li r5,226
	ctx.r5.s64 = 226;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,30
	ctx.r3.s64 = r31.s64 + 30;
	// bl 0x823ef5f0
	ctx.lr = 0x82396DC0;
	sub_823EF5F0(ctx, base);
	// lwz r10,320(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 320);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,8
	ctx.r8.s64 = 8;
	// lwzx r7,r30,r10
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	// lhz r6,62(r7)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + 62);
	// stw r6,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r6.u32);
	// lwz r5,320(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 320);
	// lwzx r4,r30,r5
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + ctx.r5.u32);
	// lwz r3,52(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 52);
	// stw r3,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r3.u32);
	// lwz r11,320(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 320);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r7,32(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// stw r7,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r7.u32);
	// lwz r6,320(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 320);
	// lwzx r5,r30,r6
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + ctx.r6.u32);
	// lwz r4,40(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// stw r4,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r4.u32);
	// lwz r3,320(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 320);
	// lwzx r11,r30,r3
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r3.u32);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// stw r10,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r10.u32);
	// lwz r7,320(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 320);
	// lwzx r6,r30,r7
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + ctx.r7.u32);
	// lwz r5,36(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 36);
	// stw r5,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r5.u32);
	// lwz r4,320(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 320);
	// lwzx r3,r30,r4
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r4.u32);
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396e48
	if (ctx.cr6.eq) goto loc_82396E48;
	// stw r9,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r9.u32);
	// b 0x82396fac
	goto loc_82396FAC;
loc_82396E48:
	// lwz r11,320(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 320);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r11,48(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm r7,r11,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82396fa4
	if (!ctx.cr6.eq) goto loc_82396FA4;
	// rlwinm r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396e74
	if (ctx.cr6.eq) goto loc_82396E74;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82396fa8
	goto loc_82396FA8;
loc_82396E74:
	// rlwinm r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396e94
	if (ctx.cr6.eq) goto loc_82396E94;
	// lbz r11,360(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 360);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82396fa4
	if (ctx.cr6.eq) goto loc_82396FA4;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82396fa8
	goto loc_82396FA8;
loc_82396E94:
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396ecc
	if (ctx.cr6.eq) goto loc_82396ECC;
	// lwz r11,368(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82396ec4
	if (ctx.cr6.eq) goto loc_82396EC4;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// li r10,2
	ctx.r10.s64 = 2;
	// mulli r7,r11,56
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(56));
	// stw r10,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r10.u32);
	// stw r7,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r7.u32);
	// b 0x82396fac
	goto loc_82396FAC;
loc_82396EC4:
	// stw r8,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r8.u32);
	// b 0x82396fac
	goto loc_82396FAC;
loc_82396ECC:
	// rlwinm r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396f24
	if (ctx.cr6.eq) goto loc_82396F24;
	// lwz r10,380(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 380);
	// rlwinm r11,r10,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82396fa4
	if (!ctx.cr6.eq) goto loc_82396FA4;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// rlwinm r7,r11,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82396f04
	if (!ctx.cr6.eq) goto loc_82396F04;
	// rlwinm r7,r10,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82396f10
	if (ctx.cr6.eq) goto loc_82396F10;
loc_82396F04:
	// rlwinm r10,r10,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396fa4
	if (ctx.cr6.eq) goto loc_82396FA4;
loc_82396F10:
	// li r10,9
	ctx.r10.s64 = 9;
	// ori r7,r11,512
	ctx.r7.u64 = ctx.r11.u64 | 512;
	// stw r10,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r10.u32);
	// stw r7,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r7.u32);
	// b 0x82396fac
	goto loc_82396FAC;
loc_82396F24:
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396f64
	if (ctx.cr6.eq) goto loc_82396F64;
	// lwz r11,380(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 380);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396fa4
	if (ctx.cr6.eq) goto loc_82396FA4;
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82396fa4
	if (!ctx.cr6.eq) goto loc_82396FA4;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// li r10,10
	ctx.r10.s64 = 10;
	// ori r7,r11,512
	ctx.r7.u64 = ctx.r11.u64 | 512;
	// stw r10,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r10.u32);
	// stw r7,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r7.u32);
	// b 0x82396fac
	goto loc_82396FAC;
loc_82396F64:
	// rlwinm r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82396fac
	if (ctx.cr6.eq) goto loc_82396FAC;
	// lwz r11,380(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 380);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82396fa4
	if (ctx.cr6.eq) goto loc_82396FA4;
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82396fa4
	if (!ctx.cr6.eq) goto loc_82396FA4;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// li r10,11
	ctx.r10.s64 = 11;
	// ori r7,r11,512
	ctx.r7.u64 = ctx.r11.u64 | 512;
	// stw r10,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r10.u32);
	// stw r7,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r7.u32);
	// b 0x82396fac
	goto loc_82396FAC;
loc_82396FA4:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82396FA8:
	// stw r11,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r11.u32);
loc_82396FAC:
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82397148
	if (!ctx.cr6.eq) goto loc_82397148;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82396ff8
	if (!ctx.cr6.eq) goto loc_82396FF8;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r9,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r9.u32);
loc_82396FD4:
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r11.u32);
	// cmplwi cr6,r9,16384
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16384, ctx.xer);
	// ble cr6,0x82396fd4
	if (!ctx.cr6.gt) goto loc_82396FD4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r11.u32);
	// b 0x82397148
	goto loc_82397148;
loc_82396FF8:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8239700c
	if (!ctx.cr6.eq) goto loc_8239700C;
	// li r11,2048
	ctx.r11.s64 = 2048;
	// stw r11,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r11.u32);
	// b 0x82397148
	goto loc_82397148;
loc_8239700C:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82397028
	if (!ctx.cr6.eq) goto loc_82397028;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// b 0x82397144
	goto loc_82397144;
loc_82397028:
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 260);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x82397148
	if (ctx.cr6.gt) goto loc_82397148;
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,28748
	ctx.r12.s64 = ctx.r12.s64 + 28748;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823970CC;
	case 1:
		goto loc_8239707C;
	case 2:
		goto loc_82397090;
	case 3:
		goto loc_823970A4;
	case 4:
		goto loc_823970B8;
	case 5:
		goto loc_823970B8;
	case 6:
		goto loc_823970CC;
	case 7:
		goto loc_823970CC;
	case 8:
		goto loc_823970CC;
	case 9:
		goto loc_823970CC;
	case 10:
		goto loc_823970CC;
	case 11:
		goto loc_823970CC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8239707C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r9,r11,61,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// stw r9,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r9.u32);
	// b 0x8239713c
	goto loc_8239713C;
loc_82397090:
	// li r11,16
	ctx.r11.s64 = 16;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r9,r11,61,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// stw r9,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r9.u32);
	// b 0x8239713c
	goto loc_8239713C;
loc_823970A4:
	// li r11,24
	ctx.r11.s64 = 24;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r9,r11,61,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// stw r9,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r9.u32);
	// b 0x8239713c
	goto loc_8239713C;
loc_823970B8:
	// li r11,32
	ctx.r11.s64 = 32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r9,r11,61,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// stw r9,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r9.u32);
	// b 0x8239713c
	goto loc_8239713C;
loc_823970CC:
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,28900
	ctx.r12.s64 = ctx.r12.s64 + 28900;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82397134;
	case 1:
		goto loc_82397148;
	case 2:
		goto loc_82397148;
	case 3:
		goto loc_82397148;
	case 4:
		goto loc_82397148;
	case 5:
		goto loc_82397148;
	case 6:
		goto loc_82397114;
	case 7:
		goto loc_8239711C;
	case 8:
		goto loc_82397124;
	case 9:
		goto loc_8239712C;
	case 10:
		goto loc_8239712C;
	case 11:
		goto loc_8239712C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82397114:
	// stw r8,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r8.u32);
	// b 0x8239713c
	goto loc_8239713C;
loc_8239711C:
	// li r11,36
	ctx.r11.s64 = 36;
	// b 0x82397138
	goto loc_82397138;
loc_82397124:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82397138
	goto loc_82397138;
loc_8239712C:
	// stw r9,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r9.u32);
	// b 0x82397148
	goto loc_82397148;
loc_82397134:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82397138:
	// stw r11,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r11.u32);
loc_8239713C:
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
loc_82397144:
	// stw r10,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r10.u32);
loc_82397148:
	// lwz r11,320(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 320);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r9,48(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm r11,r9,0,15,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FC00;
	// rlwinm r11,r11,0,20,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bne cr6,0x82396cfc
	if (!ctx.cr6.eq) goto loc_82396CFC;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// b 0x8239717c
	goto loc_8239717C;
loc_8239716C:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82397180
	if (!ctx.cr6.eq) goto loc_82397180;
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
loc_8239717C:
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
loc_82397180:
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823971a0
	if (!ctx.cr6.eq) goto loc_823971A0;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x823971ac
	if (!ctx.cr6.eq) goto loc_823971AC;
	// li r11,51
	ctx.r11.s64 = 51;
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
loc_823971A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823971A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823971AC:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x823971a4
	if (!ctx.cr6.eq) goto loc_823971A4;
	// li r11,63
	ctx.r11.s64 = 63;
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823DC718) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823DC810) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r9,r11,-31944
	ctx.r9.s64 = ctx.r11.s64 + -31944;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bgt cr6,0x823dc894
	if (ctx.cr6.gt) goto loc_823DC894;
	// beq cr6,0x823dc878
	if (ctx.cr6.eq) goto loc_823DC878;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823dc848
	if (ctx.cr6.eq) goto loc_823DC848;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// beq cr6,0x823dc860
	if (ctx.cr6.eq) goto loc_823DC860;
loc_823DC83C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
loc_823DC848:
	// rlwinm r10,r4,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF;
	// rlwinm r8,r11,8,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// xor r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r6,r7,26,6,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x3FFFFFC;
	// lwzx r5,r6,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// xor r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 ^ ctx.r8.u64;
loc_823DC860:
	// rlwinm r10,r4,24,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF00;
	// rlwinm r8,r11,8,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// xor r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r6,r7,26,6,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x3FFFFFC;
	// lwzx r5,r6,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// xor r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 ^ ctx.r8.u64;
loc_823DC878:
	// rlwinm r10,r4,0,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFF00;
	// rlwinm r8,r11,8,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// xor r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r6,r7,26,6,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x3FFFFFC;
	// lwzx r5,r6,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// xor r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 ^ ctx.r8.u64;
	// b 0x823dc89c
	goto loc_823DC89C;
loc_823DC894:
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// bne cr6,0x823dc83c
	if (!ctx.cr6.eq) goto loc_823DC83C;
loc_823DC89C:
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r7,r11,8,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// xor r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// stw r5,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// xor r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// stw r10,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E1368) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e1380
	if (ctx.cr6.eq) goto loc_823E1380;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823e1388
	if (!ctx.cr6.eq) goto loc_823E1388;
loc_823E1380:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823E1388:
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x823e1380
	if (!ctx.cr6.gt) goto loc_823E1380;
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r8,0,21,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823e13d0
	if (ctx.cr6.eq) goto loc_823E13D0;
	// ld r10,344(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 344);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// std r8,344(r11)
	REX_STORE_U64(ctx.r11.u32 + 344, ctx.r8.u64);
	// blr 
	return;
loc_823E13D0:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823e1454
	if (ctx.cr6.eq) goto loc_823E1454;
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r6,r5,0,22,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x200;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwinm r5,r5,0,23,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// bne cr6,0x823e1420
	if (!ctx.cr6.eq) goto loc_823E1420;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_823E13F8:
	// lwzu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r3,r10,0,22,22
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e1414
	if (ctx.cr6.eq) goto loc_823E1414;
	// li r6,512
	ctx.r6.s64 = 512;
loc_823E1414:
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// beq cr6,0x823e13f8
	if (ctx.cr6.eq) goto loc_823E13F8;
loc_823E1420:
	// stw r6,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r6.u32);
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r5,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r5.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// ld r5,344(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 344);
	// std r5,24(r4)
	REX_STORE_U64(ctx.r4.u32 + 24, ctx.r5.u64);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// ldx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r11.u32);
	// std r10,16(r4)
	REX_STORE_U64(ctx.r4.u32 + 16, ctx.r10.u64);
	// stw r7,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r7.u32);
loc_823E1454:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E71C0) {
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
	ctx.lr = 0x823E71C8;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2c94
	ctx.lr = 0x823E71D0;
	// mullw r11,r4,r6
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// addi r7,r5,268
	ctx.r7.s64 = ctx.r5.s64 + 268;
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
	// ble cr6,0x823e73e8
	if (!ctx.cr6.gt) goto loc_823E73E8;
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
loc_823E7270:
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
	// bdnz 0x823e7270
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E7270;
loc_823E73E8:
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2ce0
	ctx.lr = 0x823E73F0;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823F1840) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// rlwinm r9,r7,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x1;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x823f1870
	if (ctx.cr6.eq) goto loc_823F1870;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r10,r10,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
loc_823F1870:
	// lis r10,-32193
	ctx.r10.s64 = -2109800448;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// addi r6,r10,22280
	ctx.r6.s64 = ctx.r10.s64 + 22280;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82793c14
	ctx.lr = 0x823F1888;
	__imp__ExCreateThread(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823f189c
	if (!ctx.cr0.lt) goto loc_823F189C;
	// bl 0x823f0020
	ctx.lr = 0x823F1894;
	sub_823F0020(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823f18a0
	goto loc_823F18A0;
loc_823F189C:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823F18A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F5F38) {
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
	// lbz r11,11957(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 11957);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r3,r3,2584
	ctx.r3.s64 = ctx.r3.s64 + 2584;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x826a2e60
	ctx.lr = 0x823F5F64;
	sub_826A2E60(ctx, base);
	// lbz r11,11957(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11957);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r3,r31,11028
	ctx.r3.s64 = r31.s64 + 11028;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x826a2e60
	ctx.lr = 0x823F5F7C;
	sub_826A2E60(ctx, base);
	// li r5,249
	ctx.r5.s64 = 249;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,3256
	ctx.r3.s64 = r31.s64 + 3256;
	// bl 0x826a2e60
	ctx.lr = 0x823F5F8C;
	sub_826A2E60(ctx, base);
	// li r5,249
	ctx.r5.s64 = 249;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,11700
	ctx.r3.s64 = r31.s64 + 11700;
	// bl 0x826a2e60
	ctx.lr = 0x823F5F9C;
	sub_826A2E60(ctx, base);
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

DEFINE_REX_FUNC(sub_823F9418) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823F9420;
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
	// addi r3,r3,10472
	ctx.r3.s64 = ctx.r3.s64 + 10472;
	// li r5,2800
	ctx.r5.s64 = 2800;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x826a2e60
	ctx.lr = 0x823F9444;
	sub_826A2E60(ctx, base);
	// addi r3,r31,15374
	ctx.r3.s64 = r31.s64 + 15374;
	// li r5,996
	ctx.r5.s64 = 996;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x823F9454;
	sub_826A2E60(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f92b8
	ctx.lr = 0x823F9468;
	sub_823F92B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823FBBB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// subf r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
loc_823FBBCC:
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lhzux r8,r11,r6
	ea = ctx.r11.u32 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// addi r5,r1,-12
	ctx.r5.s64 = ctx.r1.s64 + -12;
	// lvsl v0,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// sth r8,-16(r1)
	REX_STORE_U16(ctx.r1.u32 + -16, ctx.r8.u16);
	// lvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v0,v0,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vupkd3d128 v63,v63,12
	temp.u32 = ctx.v63.u16[1];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v63.u32[3] = vTemp.u32[0];
	temp.u32 = ctx.v63.u16[0];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v63.u32[2] = vTemp.u32[0];
	ctx.v63.f32[1] = 0.0f;
	ctx.v63.f32[0] = 1.0f;
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvewx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// stfsux f0,r10,r4
	temp.f32 = float(ctx.f0.f64);
	ea = ctx.r10.u32 + ctx.r4.u32;
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823fbbcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FBBCC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823FF248) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-26476
	ctx.r3.s64 = ctx.r11.s64 + -26476;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823FF340) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,49
	ctx.r9.s64 = 49;
	// addi r10,r11,16624
	ctx.r10.s64 = ctx.r11.s64 + 16624;
	// addi r11,r10,596
	ctx.r11.s64 = ctx.r10.s64 + 596;
loc_823FF350:
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwz r8,-4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x823ff374
	if (!ctx.cr6.eq) goto loc_823FF374;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// and r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 & ctx.r4.u64;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823ff38c
	if (ctx.cr6.eq) goto loc_823FF38C;
loc_823FF374:
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x823ff350
	if (ctx.cr6.gt) goto loc_823FF350;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_823FF38C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823ff3b4
	if (ctx.cr6.eq) goto loc_823FF3B4;
	// mulli r11,r9,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
loc_823FF3B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82400978) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82400980;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,1364(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 1364);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824009a8
	if (!ctx.cr6.gt) goto loc_824009A8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,17668
	ctx.r4.s64 = ctx.r11.s64 + 17668;
	// bl 0x8243c410
	ctx.lr = 0x824009A8;
	sub_8243C410(ctx, base);
loc_824009A8:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824009B8;
	sub_826A1E70(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82404DD0) {
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
	ctx.lr = 0x82404DD8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,108(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r8,96(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r28,32(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r6,32(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r10,r9,r8
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r27,r10,r6
	r27.u64 = ctx.r10.u64 + ctx.r6.u64;
	// b 0x82404ebc
	goto loc_82404EBC;
loc_82404DFC:
	// lwz r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 + ctx.r6.u64;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82404ea0
	if (!ctx.cr6.lt) goto loc_82404EA0;
	// subf r10,r6,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r6.u64;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r7,r28,-2
	ctx.r7.s64 = r28.s64 + -2;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82404E38:
	// lhz r26,6(r11)
	r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r25,6(r10)
	r25.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lhzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// rlwinm r4,r26,0,24,27
	ctx.r4.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xF0;
	// lhzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// rlwinm r31,r25,0,24,27
	r31.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xF0;
	// rlwinm r29,r9,0,24,27
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF0;
	// andi. r5,r8,3855
	ctx.r5.u64 = ctx.r8.u64 & 3855;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// andi. r9,r9,3855
	ctx.r9.u64 = ctx.r9.u64 & 3855;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// andi. r5,r25,3855
	ctx.r5.u64 = r25.u64 & 3855;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwinm r30,r8,0,24,27
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF0;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r8,r30,r29
	ctx.r8.u64 = r30.u64 + r29.u64;
	// andi. r5,r26,3855
	ctx.r5.u64 = r26.u64 & 3855;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// addi r9,r9,514
	ctx.r9.s64 = ctx.r9.s64 + 514;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r9,r9,30,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0xFFF;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// rlwinm r9,r9,0,28,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// rlwinm r8,r8,30,24,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0xF0;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// sthu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x82404e38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82404E38;
loc_82404EA0:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r9,96(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// add r28,r10,r28
	r28.u64 = ctx.r10.u64 + r28.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
loc_82404EBC:
	// cmplw cr6,r6,r27
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r27.u32, ctx.xer);
	// blt cr6,0x82404dfc
	if (ctx.cr6.lt) goto loc_82404DFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8240CE50) {
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
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca4
	ctx.lr = 0x8240CE58;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2ca8
	ctx.lr = 0x8240CE60;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240ce8c
	if (ctx.cr6.eq) goto loc_8240CE8C;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82408848
	ctx.lr = 0x8240CE88;
	sub_82408848(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8240CE8C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240cea8
	if (ctx.cr6.eq) goto loc_8240CEA8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824094e0
	ctx.lr = 0x8240CEA4;
	sub_824094E0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8240CEA8:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// clrlwi. r4,r30,31
	ctx.r4.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r3,100(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 100);
	// rlwinm r7,r30,3,27,28
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0x18;
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r5,52(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r8,r29,30
	ctx.r8.u64 = r29.u32 & 0x3;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r30,-32256
	r30.s64 = -2113929216;
	// mullw r10,r3,r29
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(r29.s32);
	// lfs f31,3716(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 3716);
	f31.f64 = double(temp.f32);
	// fmr f30,f31
	f30.f64 = f31.f64;
	// fmr f29,f31
	f29.f64 = f31.f64;
	// fmr f28,f31
	f28.f64 = f31.f64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r10,r6
	r28.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r24,r9,r5
	r24.u64 = ctx.r9.u64 + ctx.r5.u64;
	// bne 0x8240cf18
	if (!ctx.cr0.eq) goto loc_8240CF18;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x8240cf20
	goto loc_8240CF20;
loc_8240CF18:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_8240CF20:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240cf38
	if (ctx.cr6.eq) goto loc_8240CF38;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409a88
	ctx.lr = 0x8240CF38;
	sub_82409A88(ctx, base);
loc_8240CF38:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8240d2d4
	if (!ctx.cr6.gt) goto loc_8240D2D4;
	// add r10,r30,r29
	ctx.r10.u64 = r30.u64 + r29.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f11,15196(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15196);
	ctx.f11.f64 = double(temp.f32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lfd f10,20216(r10)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r10.u32 + 20216);
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// rlwinm r25,r30,3,0,28
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f12,20208(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20208);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lfs f13,17280(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17280);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f0,20264(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20264);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r29,r30,4,0,27
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f5,20260(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20260);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// subf r28,r25,r28
	r28.u64 = r28.u64 - r25.u64;
	// ori r30,r10,65535
	r30.u64 = ctx.r10.u64 | 65535;
loc_8240CFA4:
	// add r10,r27,r11
	ctx.r10.u64 = r27.u64 + ctx.r11.u64;
	// lfsx f9,r27,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f9,f29
	ctx.f9.f64 = double(float(ctx.f9.f64 + f29.f64));
	// rlwinm r7,r26,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xC;
	// lwz r6,92(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f8,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 + f31.f64));
	// lfs f6,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f7,f7,f30
	ctx.f7.f64 = double(float(ctx.f7.f64 + f30.f64));
	// fadds f6,f6,f28
	ctx.f6.f64 = double(float(ctx.f6.f64 + f28.f64));
	// lfsx f4,r7,r24
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fadds f3,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// fadds f2,f8,f4
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// fadds f1,f7,f4
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// fadds f4,f6,f4
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// fctiwz f3,f3
	ctx.f3.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f3,f2
	ctx.f3.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// fctiwz f3,f1
	ctx.f3.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f3.u64);
	// fctiwz f4,f4
	ctx.f4.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f4,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f4.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// beq cr6,0x8240d1dc
	if (ctx.cr6.eq) goto loc_8240D1DC;
	// extsw r7,r4
	ctx.r7.s64 = ctx.r4.s32;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r23,r3
	r23.s64 = ctx.r3.s32;
	// std r7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f4,104(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r23,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r23.u64);
	// lfd f3,112(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f3
	ctx.f3.f64 = double(ctx.f3.s64);
	// extsw r7,r5
	ctx.r7.s64 = ctx.r5.s32;
	// frsp f3,f3
	ctx.f3.f64 = double(float(ctx.f3.f64));
	// std r7,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f2,120(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsw r23,r6
	r23.s64 = ctx.r6.s32;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// std r23,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, r23.u64);
	// lfs f1,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f8,f8,f3
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f3.f64));
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fsubs f7,f7,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f4.f64));
	// fmadds f4,f8,f13,f1
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f1.f64)));
	// stfs f4,16(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f4,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f4,f8,f12,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f4.f64)));
	// stfs f4,16(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// fcfid f4,f2
	ctx.f4.f64 = double(ctx.f2.s64);
	// lfs f3,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// fmadds f3,f8,f11,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f3.f64)));
	// stfs f3,16(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// lfs f3,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f3,f7,f13,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f3.f64)));
	// stfs f3,20(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fsubs f9,f9,f4
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// lfs f4,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f4,f7,f12,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f4.f64)));
	// stfs f4,20(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f4,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f4,f7,f11,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f7.f64, ctx.f11.f64, ctx.f4.f64)));
	// stfs f4,20(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fmul f8,f8,f10
	ctx.f8.f64 = ctx.f8.f64 * ctx.f10.f64;
	// lfs f4,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f4,f9,f13,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f4.f64)));
	// stfs f4,24(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmul f7,f7,f10
	ctx.f7.f64 = ctx.f7.f64 * ctx.f10.f64;
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// frsp f31,f8
	f31.f64 = double(float(ctx.f8.f64));
	// lfs f8,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f9,f12,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f8.f64)));
	// stfs f8,24(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// frsp f30,f7
	f30.f64 = double(float(ctx.f7.f64));
	// lfd f7,128(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f8,f7
	ctx.f8.f64 = double(ctx.f7.s64);
	// lfs f7,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f7,f9,f11,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f7.f64)));
	// fmul f9,f9,f10
	ctx.f9.f64 = ctx.f9.f64 * ctx.f10.f64;
	// stfs f7,24(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// frsp f29,f9
	f29.f64 = double(float(ctx.f9.f64));
	// lfs f7,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f9,f6,f8
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// addi r7,r10,28
	ctx.r7.s64 = ctx.r10.s64 + 28;
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f8,f9,f13,f7
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f7.f64)));
	// stfs f8,28(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f8,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f9,f12,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f8.f64)));
	// fmul f7,f9,f10
	ctx.f7.f64 = ctx.f9.f64 * ctx.f10.f64;
	// stfs f8,28(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// addi r7,r10,28
	ctx.r7.s64 = ctx.r10.s64 + 28;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f8,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f9,f9,f11,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f8.f64)));
	// stfs f9,28(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// frsp f28,f7
	f28.f64 = double(float(ctx.f7.f64));
	// addi r7,r10,28
	ctx.r7.s64 = ctx.r10.s64 + 28;
loc_8240D1DC:
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r30.s32, ctx.xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// blt cr6,0x8240d1ec
	if (ctx.cr6.lt) goto loc_8240D1EC;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_8240D1EC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8240d204
	if (!ctx.cr6.gt) goto loc_8240D204;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r30.s32, ctx.xer);
	// blt cr6,0x8240d208
	if (ctx.cr6.lt) goto loc_8240D208;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8240d208
	goto loc_8240D208;
loc_8240D204:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240D208:
	// cmpw cr6,r4,r30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r30.s32, ctx.xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt cr6,0x8240d218
	if (ctx.cr6.lt) goto loc_8240D218;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_8240D218:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8240d230
	if (!ctx.cr6.gt) goto loc_8240D230;
	// cmpw cr6,r4,r30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r30.s32, ctx.xer);
	// blt cr6,0x8240d234
	if (ctx.cr6.lt) goto loc_8240D234;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x8240d234
	goto loc_8240D234;
loc_8240D230:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8240D234:
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r30.s32, ctx.xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// blt cr6,0x8240d244
	if (ctx.cr6.lt) goto loc_8240D244;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_8240D244:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8240d25c
	if (!ctx.cr6.gt) goto loc_8240D25C;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r30.s32, ctx.xer);
	// blt cr6,0x8240d260
	if (ctx.cr6.lt) goto loc_8240D260;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// b 0x8240d260
	goto loc_8240D260;
loc_8240D25C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8240D260:
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r30.s32, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// blt cr6,0x8240d270
	if (ctx.cr6.lt) goto loc_8240D270;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_8240D270:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8240d288
	if (!ctx.cr6.gt) goto loc_8240D288;
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r30.s32, ctx.xer);
	// blt cr6,0x8240d28c
	if (ctx.cr6.lt) goto loc_8240D28C;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// b 0x8240d28c
	goto loc_8240D28C;
loc_8240D288:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8240D28C:
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// extsw r7,r4
	ctx.r7.s64 = ctx.r4.s32;
	// rldicr r10,r10,16,47
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFFFFFFFFFF0000;
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// extsw r7,r6
	ctx.r7.s64 = ctx.r6.s32;
	// rldicr r10,r10,16,47
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFFFFFFFFFF0000;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// rldicr r10,r10,16,47
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFFFFFFFFFF0000;
	// add r9,r29,r9
	ctx.r9.u64 = r29.u64 + ctx.r9.u64;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// add r8,r29,r8
	ctx.r8.u64 = r29.u64 + ctx.r8.u64;
	// stdux r10,r28,r25
	ea = r28.u32 + r25.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	r28.u32 = ea;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8240cfa4
	if (ctx.cr6.lt) goto loc_8240CFA4;
loc_8240D2D4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2cf4
	ctx.lr = 0x8240D2E0;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82437C00) {
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
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82437c38
	if (ctx.cr6.eq) goto loc_82437C38;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// subf r10,r6,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r6.u64;
loc_82437C20:
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r9,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82437c20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82437C20;
loc_82437C38:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x822c9048
	ctx.lr = 0x82437C40;
	sub_822C9048(ctx, base);
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

DEFINE_REX_FUNC(sub_82438DA8) {
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
	ctx.lr = 0x82438DB0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,24(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r6,32(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82438f60
	if (ctx.cr6.lt) goto loc_82438F60;
	// beq cr6,0x82438f58
	if (ctx.cr6.eq) goto loc_82438F58;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x82438f38
	if (ctx.cr6.lt) goto loc_82438F38;
	// beq cr6,0x82438e98
	if (ctx.cr6.eq) goto loc_82438E98;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x82438e00
	if (ctx.cr6.eq) goto loc_82438E00;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x82439134
	goto loc_82439134;
loc_82438E00:
	// lwz r9,52(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 52);
	// lhz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 8);
	// divwu r27,r11,r9
	r27.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82438e1c
	if (!ctx.cr6.gt) goto loc_82438E1C;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
loc_82438E1C:
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82438e90
	if (ctx.cr6.eq) goto loc_82438E90;
loc_82438E28:
	// lhz r11,10(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 10);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82438e84
	if (ctx.cr0.eq) goto loc_82438E84;
	// li r29,0
	r29.s64 = 0;
loc_82438E3C:
	// lwz r11,56(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 56);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwzx r30,r29,r11
	r30.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,48(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 48);
	// bl 0x82438da8
	ctx.lr = 0x82438E5C;
	sub_82438DA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82439134
	if (ctx.cr0.lt) goto loc_82439134;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lhz r10,10(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 10);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// blt cr6,0x82438e3c
	if (ctx.cr6.lt) goto loc_82438E3C;
loc_82438E84:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(r26.u32, r27.u32, ctx.xer);
	// blt cr6,0x82438e28
	if (ctx.cr6.lt) goto loc_82438E28;
loc_82438E90:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82439134
	goto loc_82439134;
loc_82438E98:
	// lhz r8,6(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 4);
	// lhz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 8);
	// mullw r7,r10,r8
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// divwu r3,r11,r7
	ctx.r3.u64 = uint32_t(ctx.r7.u32 ? ctx.r11.u32 / ctx.r7.u32 : 0);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82438ebc
	if (!ctx.cr6.gt) goto loc_82438EBC;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_82438EBC:
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82438f30
	if (ctx.cr6.eq) goto loc_82438F30;
	// addi r7,r6,-4
	ctx.r7.s64 = ctx.r6.s64 + -4;
loc_82438ECC:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82438f24
	if (ctx.cr6.eq) goto loc_82438F24;
loc_82438ED8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82438f14
	if (ctx.cr6.eq) goto loc_82438F14;
loc_82438EE4:
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lhz r8,6(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 6);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// lhz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82438ee4
	if (ctx.cr6.lt) goto loc_82438EE4;
loc_82438F14:
	// lhz r8,6(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 6);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82438ed8
	if (ctx.cr6.lt) goto loc_82438ED8;
loc_82438F24:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82438ecc
	if (ctx.cr6.lt) goto loc_82438ECC;
loc_82438F30:
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// b 0x82438f74
	goto loc_82438F74;
loc_82438F38:
	// lhz r9,6(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 6);
	// lhz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 4);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
loc_82438F44:
	// lhz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 8);
	// divwu r3,r11,r9
	ctx.r3.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// b 0x82438f6c
	goto loc_82438F6C;
loc_82438F58:
	// lhz r9,6(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 6);
	// b 0x82438f44
	goto loc_82438F44;
loc_82438F60:
	// lhz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82438F6C:
	// ble cr6,0x82438f74
	if (!ctx.cr6.gt) goto loc_82438F74;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_82438F74:
	// lhz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 2);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x82439004
	if (ctx.cr6.eq) goto loc_82439004;
	// lwz r11,52(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 52);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// beq cr6,0x82438fc4
	if (ctx.cr6.eq) goto loc_82438FC4;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82439000
	if (!ctx.cr6.eq) goto loc_82439000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82439000
	if (ctx.cr6.eq) goto loc_82439000;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// subf r11,r6,r25
	ctx.r11.u64 = r25.u64 - ctx.r6.u64;
loc_82438FAC:
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	REX_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82438fac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82438FAC;
	// b 0x82439000
	goto loc_82439000;
loc_82438FC4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82439000
	if (ctx.cr6.eq) goto loc_82439000;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// subf r9,r6,r25
	ctx.r9.u64 = r25.u64 - ctx.r6.u64;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
loc_82438FE0:
	// lfsx f13,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82438ff4
	if (!ctx.cr6.eq) goto loc_82438FF4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82438FF4:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82438fe0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82438FE0;
loc_82439000:
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
loc_82439004:
	// lhz r9,8(r24)
	ctx.r9.u64 = REX_LOAD_U16(r24.u32 + 8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x824390e4
	if (ctx.cr0.eq) goto loc_824390E4;
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82439028
	if (ctx.cr6.eq) goto loc_82439028;
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 4);
	// b 0x82439030
	goto loc_82439030;
loc_82439028:
	// lhz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 4);
	// lhz r10,6(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 6);
loc_82439030:
	// clrlwi. r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824390e4
	if (ctx.cr0.eq) goto loc_824390E4;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8243904c
	if (!ctx.cr6.eq) goto loc_8243904C;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r4,r9,-21408
	ctx.r4.s64 = ctx.r9.s64 + -21408;
	// b 0x82439054
	goto loc_82439054;
loc_8243904C:
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r4,r9,-21424
	ctx.r4.s64 = ctx.r9.s64 + -21424;
loc_82439054:
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// mullw. r8,r10,r3
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r7,r9,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// beq 0x824390e0
	if (ctx.cr0.eq) goto loc_824390E0;
	// mullw r9,r8,r7
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// mullw r5,r8,r11
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
loc_8243906C:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subf r5,r11,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r11.u64;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824390a8
	if (!ctx.cr6.gt) goto loc_824390A8;
	// subf r31,r11,r7
	r31.u64 = ctx.r7.u64 - ctx.r11.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_8243908C:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r31,r10,2,28,29
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// add r30,r9,r10
	r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r31,r4
	r31.u64 = REX_LOAD_U32(r31.u32 + ctx.r4.u32);
	// stwx r31,r30,r6
	REX_STORE_U32(r30.u32 + ctx.r6.u32, r31.u32);
	// bdnz 0x8243908c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243908C;
loc_824390A8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824390d8
	if (ctx.cr6.eq) goto loc_824390D8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824390B8:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r31,r5,r10
	r31.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r30,r9,r10
	r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r31,r25
	r31.u64 = REX_LOAD_U32(r31.u32 + r25.u32);
	// stwx r31,r30,r6
	REX_STORE_U32(r30.u32 + ctx.r6.u32, r31.u32);
	// bdnz 0x824390b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824390B8;
loc_824390D8:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8243906c
	if (!ctx.cr6.eq) goto loc_8243906C;
loc_824390E0:
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
loc_824390E4:
	// lwz r10,44(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 44);
	// lhz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 12);
	// mullw r7,r10,r3
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824390fc
	if (!ctx.cr6.gt) goto loc_824390FC;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_824390FC:
	// lwz r10,28(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82439114
	if (!ctx.cr6.eq) goto loc_82439114;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82439134
	goto loc_82439134;
loc_82439114:
	// lhz r11,10(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 10);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + r22.u64;
	// bctrl 
	ctx.lr = 0x8243912C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_82439134:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8244F668) {
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
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8244f69c
	if (!ctx.cr6.gt) goto loc_8244F69C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,6088
	ctx.r4.s64 = ctx.r11.s64 + 6088;
	// bl 0x8244beb0
	ctx.lr = 0x8244F694;
	sub_8244BEB0(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
loc_8244F69C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82452720) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82452728;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 80);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// ori r30,r10,16389
	r30.u64 = ctx.r10.u64 | 16389;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82452758
	if (ctx.cr6.eq) goto loc_82452758;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,12312
	ctx.r4.s64 = ctx.r11.s64 + 12312;
	// bl 0x8244beb0
	ctx.lr = 0x82452754;
	sub_8244BEB0(ctx, base);
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82452758:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82452778
	if (!ctx.cr0.eq) goto loc_82452778;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,12240
	ctx.r4.s64 = ctx.r11.s64 + 12240;
	// bl 0x8244beb0
	ctx.lr = 0x82452774;
	sub_8244BEB0(ctx, base);
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82452778:
	// lwz r11,308(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82452798
	if (ctx.cr6.eq) goto loc_82452798;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,12188
	ctx.r4.s64 = ctx.r11.s64 + 12188;
	// bl 0x8244beb0
	ctx.lr = 0x82452794;
	sub_8244BEB0(ctx, base);
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82452798:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824527b8
	if (ctx.cr6.eq) goto loc_824527B8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,12120
	ctx.r4.s64 = ctx.r11.s64 + 12120;
	// bl 0x8244beb0
	ctx.lr = 0x824527B4;
	sub_8244BEB0(ctx, base);
	// mr r29,r30
	r29.u64 = r30.u64;
loc_824527B8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x82452828
	if (ctx.cr6.lt) goto loc_82452828;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824519a0
	ctx.lr = 0x824527C8;
	sub_824519A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,308(r31)
	REX_STORE_U32(r31.u32 + 308, ctx.r11.u32);
	// bl 0x82452198
	ctx.lr = 0x824527D8;
	sub_82452198(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82450858
	ctx.lr = 0x824527E4;
	sub_82450858(ctx, base);
	// bl 0x822cd810
	ctx.lr = 0x824527E8;
	sub_822CD810(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82450858
	ctx.lr = 0x824527F4;
	sub_82450858(ctx, base);
	// bl 0x822cdda0
	ctx.lr = 0x824527F8;
	sub_822CDDA0(ctx, base);
	// lwz r11,316(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 316);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r4,r10,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// beq cr6,0x82452814
	if (ctx.cr6.eq) goto loc_82452814;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824d7fd8
	ctx.lr = 0x82452814;
	sub_824D7FD8(ctx, base);
loc_82452814:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// bl 0x8244b528
	ctx.lr = 0x82452828;
	sub_8244B528(ctx, base);
loc_82452828:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824588B8) {
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
	// clrlwi r7,r10,28
	ctx.r7.u64 = ctx.r10.u32 & 0xF;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x824555b8
	ctx.lr = 0x824588E4;
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

DEFINE_REX_FUNC(sub_8245A208) {
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
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,16188
	ctx.r4.s64 = ctx.r10.s64 + 16188;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245A230;
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

DEFINE_REX_FUNC(sub_8245BA78) {
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
	ctx.lr = 0x8245BA80;
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r17,0
	r17.s64 = 0;
	// stw r4,700(r1)
	REX_STORE_U32(ctx.r1.u32 + 700, ctx.r4.u32);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// stw r8,732(r1)
	REX_STORE_U32(ctx.r1.u32 + 732, ctx.r8.u32);
	// mr r15,r5
	r15.u64 = ctx.r5.u64;
	// stw r9,740(r1)
	REX_STORE_U32(ctx.r1.u32 + 740, ctx.r9.u32);
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// stw r10,748(r1)
	REX_STORE_U32(ctx.r1.u32 + 748, ctx.r10.u32);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r24,r17
	r24.u64 = r17.u64;
	// mr r23,r17
	r23.u64 = r17.u64;
	// mr r31,r17
	r31.u64 = r17.u64;
	// beq cr6,0x8245bb58
	if (ctx.cr6.eq) goto loc_8245BB58;
loc_8245BAC0:
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// lwz r9,788(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 788);
	// rlwinm r30,r31,2,0,29
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r31,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwzx r4,r30,r16
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + r16.u32);
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// and r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	// lwzx r5,r30,r28
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + r28.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// rlwinm r4,r4,0,8,3
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8245b958
	ctx.lr = 0x8245BB00;
	sub_8245B958(ctx, base);
	// lwzx r11,r30,r16
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r16.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bne cr6,0x8245bb4c
	if (!ctx.cr6.eq) goto loc_8245BB4C;
	// lwzx r11,r30,r16
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r16.u32);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8245bb4c
	if (!ctx.cr0.eq) goto loc_8245BB4C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82404168
	ctx.lr = 0x8245BB3C;
	sub_82404168(ctx, base);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8244a6e0
	ctx.lr = 0x8245BB4C;
	sub_8244A6E0(ctx, base);
loc_8245BB4C:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r15
	ctx.cr6.compare<uint32_t>(r31.u32, r15.u32, ctx.xer);
	// blt cr6,0x8245bac0
	if (ctx.cr6.lt) goto loc_8245BAC0;
loc_8245BB58:
	// addi r11,r1,204
	ctx.r11.s64 = ctx.r1.s64 + 204;
	// stw r17,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, r17.u32);
	// li r20,1
	r20.s64 = 1;
	// stw r17,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r17.u32);
	// addi r22,r15,-1
	r22.s64 = r15.s64 + -1;
	// mr r31,r17
	r31.u64 = r17.u64;
	// stw r20,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, r20.u32);
	// lis r19,228
	r19.s64 = 14942208;
	// stw r17,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r17.u32);
loc_8245BB7C:
	// mr r25,r20
	r25.u64 = r20.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8245bc90
	if (ctx.cr6.eq) goto loc_8245BC90;
	// addi r29,r1,200
	r29.s64 = ctx.r1.s64 + 200;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// lwzx r27,r31,r29
	r27.u64 = REX_LOAD_U32(r31.u32 + r29.u32);
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// lwzx r26,r31,r11
	r26.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// subf r28,r16,r21
	r28.u64 = r21.u64 - r16.u64;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_8245BBB0:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x8245bbc4
	if (!ctx.cr6.eq) goto loc_8245BBC4;
	// lwzx r11,r8,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + r28.u32);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r19.u32, ctx.xer);
	// bne cr6,0x8245bbd8
	if (!ctx.cr6.eq) goto loc_8245BBD8;
loc_8245BBC4:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// bne cr6,0x8245bc68
	if (!ctx.cr6.eq) goto loc_8245BC68;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8245bc68
	if (ctx.cr0.eq) goto loc_8245BC68;
loc_8245BBD8:
	// cmplw cr6,r5,r15
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r15.u32, ctx.xer);
	// bge cr6,0x8245bc68
	if (!ctx.cr6.lt) goto loc_8245BC68;
	// subf r11,r5,r15
	ctx.r11.u64 = r15.u64 - ctx.r5.u64;
	// addi r3,r7,32
	ctx.r3.s64 = ctx.r7.s64 + 32;
	// addi r6,r8,4
	ctx.r6.s64 = ctx.r8.s64 + 4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8245BBF0:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x8245bc08
	if (!ctx.cr6.eq) goto loc_8245BC08;
	// lwzx r11,r4,r21
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + r21.u32);
	// lwzx r10,r28,r6
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + ctx.r6.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8245bc24
	if (ctx.cr6.eq) goto loc_8245BC24;
loc_8245BC08:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// bne cr6,0x8245bc5c
	if (!ctx.cr6.eq) goto loc_8245BC5C;
	// lwzx r11,r4,r16
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + r16.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8245bc5c
	if (!ctx.cr0.eq) goto loc_8245BC5C;
loc_8245BC24:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8245BC2C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r18,0(r10)
	r18.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r18,r9
	ctx.r9.u64 = ctx.r9.u64 - r18.u64;
	// beq 0x8245bc50
	if (ctx.cr0.eq) goto loc_8245BC50;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8245bc2c
	if (ctx.cr6.eq) goto loc_8245BC2C;
loc_8245BC50:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8245bc5c
	if (!ctx.cr0.eq) goto loc_8245BC5C;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_8245BC5C:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bdnz 0x8245bbf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8245BBF0;
loc_8245BC68:
	// cmplw cr6,r25,r27
	ctx.cr6.compare<uint32_t>(r25.u32, r27.u32, ctx.xer);
	// ble cr6,0x8245bc74
	if (!ctx.cr6.gt) goto loc_8245BC74;
	// mr r27,r25
	r27.u64 = r25.u64;
loc_8245BC74:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// bne 0x8245bbb0
	if (!ctx.cr0.eq) goto loc_8245BBB0;
	// stwx r27,r31,r29
	REX_STORE_U32(r31.u32 + r29.u32, r27.u32);
loc_8245BC90:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(r31.u32, 8, ctx.xer);
	// blt cr6,0x8245bb7c
	if (ctx.cr6.lt) goto loc_8245BB7C;
	// lwz r11,204(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r10,200(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8245bcb4
	if (!ctx.cr6.gt) goto loc_8245BCB4;
	// stw r20,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r20.u32);
	// stw r17,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, r17.u32);
loc_8245BCB4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// addi r30,r11,14096
	r30.s64 = ctx.r11.s64 + 14096;
	// stw r30,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, r30.u32);
	// beq cr6,0x8245be00
	if (ctx.cr6.eq) goto loc_8245BE00;
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// mtctr r15
	ctx.ctr.u64 = r15.u64;
loc_8245BCD0:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lis r9,256
	ctx.r9.s64 = 16777216;
	// rlwinm r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8245bd04
	if (ctx.cr6.eq) goto loc_8245BD04;
	// lis r9,3072
	ctx.r9.s64 = 201326592;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8245bd04
	if (ctx.cr6.eq) goto loc_8245BD04;
	// lis r9,2816
	ctx.r9.s64 = 184549376;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8245bd08
	if (!ctx.cr6.eq) goto loc_8245BD08;
	// mr r23,r20
	r23.u64 = r20.u64;
	// b 0x8245bd08
	goto loc_8245BD08;
loc_8245BD04:
	// mr r24,r20
	r24.u64 = r20.u64;
loc_8245BD08:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8245bcd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8245BCD0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// addi r31,r11,14424
	r31.s64 = ctx.r11.s64 + 14424;
	// beq cr6,0x8245bd8c
	if (ctx.cr6.eq) goto loc_8245BD8C;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82455688
	ctx.lr = 0x8245BD28;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245c4f8
	if (ctx.cr0.lt) goto loc_8245C4F8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// addi r4,r11,14352
	ctx.r4.s64 = ctx.r11.s64 + 14352;
	// bl 0x824555b8
	ctx.lr = 0x8245BD40;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245c4f8
	if (ctx.cr0.lt) goto loc_8245C4F8;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,388(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245BD70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245c4f8
	if (ctx.cr0.lt) goto loc_8245C4F8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245BD84;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245c4f8
	if (ctx.cr0.lt) goto loc_8245C4F8;
loc_8245BD8C:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x8245be00
	if (ctx.cr6.eq) goto loc_8245BE00;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82455688
	ctx.lr = 0x8245BD9C;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245c4f8
	if (ctx.cr0.lt) goto loc_8245C4F8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// addi r4,r11,14392
	ctx.r4.s64 = ctx.r11.s64 + 14392;
	// bl 0x824555b8
	ctx.lr = 0x8245BDB4;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245c4f8
	if (ctx.cr0.lt) goto loc_8245C4F8;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,388(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245BDE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245c4f8
	if (ctx.cr0.lt) goto loc_8245C4F8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245BDF8;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245c4f8
	if (ctx.cr0.lt) goto loc_8245C4F8;
loc_8245BE00:
	// addi r11,r1,228
	ctx.r11.s64 = ctx.r1.s64 + 228;
	// stw r17,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r17.u32);
	// li r26,2
	r26.s64 = 2;
	// stw r17,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, r17.u32);
	// addi r27,r1,192
	r27.s64 = ctx.r1.s64 + 192;
	// stw r20,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, r20.u32);
	// stw r26,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, r26.u32);
	// stw r17,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r17.u32);
	// stw r17,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r17.u32);
loc_8245BE24:
	// addi r11,r1,244
	ctx.r11.s64 = ctx.r1.s64 + 244;
	// stw r17,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, r17.u32);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// stw r17,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r17.u32);
	// stw r17,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r17.u32);
	// beq cr6,0x8245bf38
	if (ctx.cr6.eq) goto loc_8245BF38;
	// lwz r28,0(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// mr r7,r16
	ctx.r7.u64 = r16.u64;
	// subf r29,r16,r21
	r29.u64 = r21.u64 - r16.u64;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_8245BE58:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x8245be6c
	if (!ctx.cr6.eq) goto loc_8245BE6C;
	// lwzx r11,r7,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + r29.u32);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r19.u32, ctx.xer);
	// bne cr6,0x8245be80
	if (!ctx.cr6.eq) goto loc_8245BE80;
loc_8245BE6C:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// bne cr6,0x8245bf20
	if (!ctx.cr6.eq) goto loc_8245BF20;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8245bf20
	if (ctx.cr0.eq) goto loc_8245BF20;
loc_8245BE80:
	// cmplw cr6,r4,r15
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r15.u32, ctx.xer);
	// bge cr6,0x8245bf20
	if (!ctx.cr6.lt) goto loc_8245BF20;
	// subf r11,r4,r15
	ctx.r11.u64 = r15.u64 - ctx.r4.u64;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// addi r3,r6,32
	ctx.r3.s64 = ctx.r6.s64 + 32;
	// addi r9,r7,4
	ctx.r9.s64 = ctx.r7.s64 + 4;
	// subf r31,r16,r10
	r31.u64 = ctx.r10.u64 - r16.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8245BEA0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x8245beb8
	if (!ctx.cr6.eq) goto loc_8245BEB8;
	// lwzx r11,r5,r21
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + r21.u32);
	// lwzx r10,r9,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + r29.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8245bed4
	if (ctx.cr6.eq) goto loc_8245BED4;
loc_8245BEB8:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// bne cr6,0x8245bf14
	if (!ctx.cr6.eq) goto loc_8245BF14;
	// lwzx r11,r5,r16
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + r16.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8245bf14
	if (!ctx.cr0.eq) goto loc_8245BF14;
loc_8245BED4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8245BEDC:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r25,0(r10)
	r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r25,r8
	ctx.r8.u64 = ctx.r8.u64 - r25.u64;
	// beq 0x8245bf00
	if (ctx.cr0.eq) goto loc_8245BF00;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8245bedc
	if (ctx.cr6.eq) goto loc_8245BEDC;
loc_8245BF00:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8245bf14
	if (!ctx.cr0.eq) goto loc_8245BF14;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// stwx r20,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, r20.u32);
	// stwx r20,r31,r9
	REX_STORE_U32(r31.u32 + ctx.r9.u32, r20.u32);
loc_8245BF14:
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8245bea0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8245BEA0;
loc_8245BF20:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// bne 0x8245be58
	if (!ctx.cr0.eq) goto loc_8245BE58;
loc_8245BF38:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8245bfa8
	if (ctx.cr6.eq) goto loc_8245BFA8;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// lwz r7,0(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// mtctr r15
	ctx.ctr.u64 = r15.u64;
	// subf r6,r16,r10
	ctx.r6.u64 = ctx.r10.u64 - r16.u64;
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// subf r8,r16,r21
	ctx.r8.u64 = r21.u64 - r16.u64;
	// subf r10,r16,r9
	ctx.r10.u64 = ctx.r9.u64 - r16.u64;
loc_8245BF60:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8245bf74
	if (!ctx.cr6.eq) goto loc_8245BF74;
	// lwzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r19
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r19.u32, ctx.xer);
	// bne cr6,0x8245bf88
	if (!ctx.cr6.eq) goto loc_8245BF88;
loc_8245BF74:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x8245bfa0
	if (!ctx.cr6.eq) goto loc_8245BFA0;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8245bfa0
	if (ctx.cr0.eq) goto loc_8245BFA0;
loc_8245BF88:
	// lwzx r9,r6,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8245bfa0
	if (!ctx.cr6.eq) goto loc_8245BFA0;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_8245BFA0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8245bf60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8245BF60;
loc_8245BFA8:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// bne 0x8245be24
	if (!ctx.cr0.eq) goto loc_8245BE24;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8245c02c
	if (ctx.cr6.eq) goto loc_8245C02C;
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_8245BFC8:
	// cmplw cr6,r4,r15
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r15.u32, ctx.xer);
	// bge cr6,0x8245c01c
	if (!ctx.cr6.lt) goto loc_8245C01C;
	// subf r9,r4,r15
	ctx.r9.u64 = r15.u64 - ctx.r4.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8245BFDC:
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// lwzx r7,r11,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwzx r8,r10,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8245c014
	if (!ctx.cr6.lt) goto loc_8245C014;
	// stwx r8,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u32);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// stwx r7,r10,r5
	REX_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r7.u32);
	// lwzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stwx r7,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u32);
	// stwx r6,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u32);
loc_8245C014:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8245bfdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8245BFDC;
loc_8245C01C:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8245bfc8
	if (!ctx.cr0.eq) goto loc_8245BFC8;
loc_8245C02C:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8245c044
	if (ctx.cr6.eq) goto loc_8245C044;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r5,r15,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a22f8
	ctx.lr = 0x8245C044;
	sub_826A22F8(ctx, base);
loc_8245C044:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r18,r1,192
	r18.s64 = ctx.r1.s64 + 192;
	// addi r19,r11,14384
	r19.s64 = ctx.r11.s64 + 14384;
	// addi r22,r10,14344
	r22.s64 = ctx.r10.s64 + 14344;
	// addi r23,r9,14172
	r23.s64 = ctx.r9.s64 + 14172;
	// addi r21,r8,18284
	r21.s64 = ctx.r8.s64 + 18284;
	// addi r20,r7,18272
	r20.s64 = ctx.r7.s64 + 18272;
loc_8245C070:
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8245c484
	if (ctx.cr6.eq) goto loc_8245C484;
	// lwz r24,0(r18)
	r24.u64 = REX_LOAD_U32(r18.u32 + 0);
	// addi r26,r1,208
	r26.s64 = ctx.r1.s64 + 208;
loc_8245C084:
	// lwz r29,732(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 732);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x8245c0a8
	if (!ctx.cr6.eq) goto loc_8245C0A8;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r29.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8245c0c4
	if (ctx.cr6.eq) goto loc_8245C0C4;
loc_8245C0A8:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(r24.s32, 1, ctx.xer);
	// bne cr6,0x8245c0e4
	if (!ctx.cr6.eq) goto loc_8245C0E4;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r16
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r16.u32);
	// rlwinm. r10,r10,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8245c0e4
	if (!ctx.cr0.eq) goto loc_8245C0E4;
loc_8245C0C4:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// addi r9,r1,384
	ctx.r9.s64 = ctx.r1.s64 + 384;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x8244a6e0
	ctx.lr = 0x8245C0E0;
	sub_8244A6E0(ctx, base);
	// b 0x8245c42c
	goto loc_8245C42C;
loc_8245C0E4:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8245c1f4
	if (ctx.cr6.eq) goto loc_8245C1F4;
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
loc_8245C0F4:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x8245c11c
	if (!ctx.cr6.eq) goto loc_8245C11C;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r29.u32);
	// lwzx r8,r8,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + r29.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8245c148
	if (ctx.cr6.eq) goto loc_8245C148;
loc_8245C11C:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(r24.s32, 1, ctx.xer);
	// bne cr6,0x8245c18c
	if (!ctx.cr6.eq) goto loc_8245C18C;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r16
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r16.u32);
	// lwzx r8,r8,r16
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + r16.u32);
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// rlwinm. r9,r9,0,4,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8245c18c
	if (!ctx.cr0.eq) goto loc_8245C18C;
loc_8245C148:
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_8245C160:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	// beq 0x8245c184
	if (ctx.cr0.eq) goto loc_8245C184;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8245c160
	if (ctx.cr6.eq) goto loc_8245C160;
loc_8245C184:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8245c1a0
	if (ctx.cr0.eq) goto loc_8245C1A0;
loc_8245C18C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// blt cr6,0x8245c0f4
	if (ctx.cr6.lt) goto loc_8245C0F4;
	// b 0x8245c1ec
	goto loc_8245C1EC;
loc_8245C1A0:
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// rlwinm r31,r30,2,0,29
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// addi r10,r1,384
	ctx.r10.s64 = ctx.r1.s64 + 384;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r8.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8244a6e0
	ctx.lr = 0x8245C1C8;
	sub_8244A6E0(ctx, base);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// rlwinm r11,r15,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// lwz r8,-4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r9,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// stwx r8,r31,r10
	REX_STORE_U32(r31.u32 + ctx.r10.u32, ctx.r8.u32);
loc_8245C1EC:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// blt cr6,0x8245c42c
	if (ctx.cr6.lt) goto loc_8245C42C;
loc_8245C1F4:
	// cmplwi cr6,r17,1
	ctx.cr6.compare<uint32_t>(r17.u32, 1, ctx.xer);
	// beq cr6,0x8245c2d0
	if (ctx.cr6.eq) goto loc_8245C2D0;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(r24.s32, 1, ctx.xer);
	// bne cr6,0x8245c21c
	if (!ctx.cr6.eq) goto loc_8245C21C;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8245c2d0
	if (ctx.cr6.eq) goto loc_8245C2D0;
loc_8245C21C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x8245c238
	if (!ctx.cr6.eq) goto loc_8245C238;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r16
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r16.u32);
	// rlwinm. r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8245c2d0
	if (ctx.cr0.eq) goto loc_8245C2D0;
loc_8245C238:
	// li r27,0
	r27.s64 = 0;
loc_8245C23C:
	// lwz r31,0(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r16
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r16.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r10,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r10,r9,0,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bne cr6,0x8245c26c
	if (!ctx.cr6.eq) goto loc_8245C26C;
	// lwzx r11,r11,r16
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r16.u32);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8245c270
	if (ctx.cr0.eq) goto loc_8245C270;
loc_8245C26C:
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
loc_8245C270:
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// rlwinm r30,r31,5,0,26
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// add r29,r30,r11
	r29.u64 = r30.u64 + ctx.r11.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82404168
	ctx.lr = 0x8245C28C;
	sub_82404168(ctx, base);
loc_8245C28C:
	// rlwinm r28,r31,2,0,29
	r28.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r28,r16
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + r16.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bne cr6,0x8245c300
	if (!ctx.cr6.eq) goto loc_8245C300;
	// lwzx r11,r28,r16
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + r16.u32);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8245c300
	if (!ctx.cr0.eq) goto loc_8245C300;
	// lwz r11,700(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 700);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245c2c8
	if (ctx.cr6.eq) goto loc_8245C2C8;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x8245c300
	if (!ctx.cr6.eq) goto loc_8245C300;
loc_8245C2C8:
	// li r27,1
	r27.s64 = 1;
	// b 0x8245c304
	goto loc_8245C304;
loc_8245C2D0:
	// lwz r5,700(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 700);
	// li r27,1
	r27.s64 = 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8245c23c
	if (ctx.cr6.eq) goto loc_8245C23C;
	// lwz r31,0(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwinm r30,r31,5,0,26
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 5) & 0xFFFFFFE0;
	// add r29,r30,r11
	r29.u64 = r30.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8244a6e0
	ctx.lr = 0x8245C2FC;
	sub_8244A6E0(ctx, base);
	// b 0x8245c28c
	goto loc_8245C28C;
loc_8245C300:
	// lwz r27,1816(r14)
	r27.u64 = REX_LOAD_U32(r14.u32 + 1816);
loc_8245C304:
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8245c42c
	if (ctx.cr6.eq) goto loc_8245C42C;
loc_8245C310:
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82455688
	ctx.lr = 0x8245C318;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245c4f8
	if (ctx.cr0.lt) goto loc_8245C4F8;
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// add r5,r30,r11
	ctx.r5.u64 = r30.u64 + ctx.r11.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82404168
	ctx.lr = 0x8245C33C;
	sub_82404168(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82404168
	ctx.lr = 0x8245C354;
	sub_82404168(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245C364;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245c4f8
	if (ctx.cr0.lt) goto loc_8245C4F8;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x8245c3b0
	if (!ctx.cr6.eq) goto loc_8245C3B0;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwz r10,732(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 732);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// lwz r11,388(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 388);
	// lwzx r10,r28,r10
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + ctx.r10.u32);
	// rlwinm r8,r10,10,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3;
	// rlwinm r7,r10,12,30,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3;
	// rlwinm r6,r10,14,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r5,r10,16,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3;
	// bctrl 
	ctx.lr = 0x8245C3A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245c4f8
	if (ctx.cr0.lt) goto loc_8245C4F8;
	// b 0x8245c40c
	goto loc_8245C40C;
loc_8245C3B0:
	// lwzx r11,r28,r16
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + r16.u32);
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// rlwinm r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8245c3d0
	if (!ctx.cr6.eq) goto loc_8245C3D0;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// lwz r11,468(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// b 0x8245c3f0
	goto loc_8245C3F0;
loc_8245C3D0:
	// lis r10,2816
	ctx.r10.s64 = 184549376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// bne cr6,0x8245c3ec
	if (!ctx.cr6.eq) goto loc_8245C3EC;
	// lwz r11,456(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 456);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// b 0x8245c3f4
	goto loc_8245C3F4;
loc_8245C3EC:
	// lwz r11,464(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
loc_8245C3F0:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
loc_8245C3F4:
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bctrl 
	ctx.lr = 0x8245C404;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8245c4f8
	if (ctx.cr6.lt) goto loc_8245C4F8;
loc_8245C40C:
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// lwz r4,200(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x824555b8
	ctx.lr = 0x8245C418;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245c4f8
	if (ctx.cr0.lt) goto loc_8245C4F8;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(r31.u32, r27.u32, ctx.xer);
	// blt cr6,0x8245c310
	if (ctx.cr6.lt) goto loc_8245C310;
loc_8245C42C:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r25,r15
	ctx.cr6.compare<uint32_t>(r25.u32, r15.u32, ctx.xer);
	// blt cr6,0x8245c084
	if (ctx.cr6.lt) goto loc_8245C084;
	// li r31,0
	r31.s64 = 0;
	// mr r30,r15
	r30.u64 = r15.u64;
loc_8245C444:
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// addi r9,r1,384
	ctx.r9.s64 = ctx.r1.s64 + 384;
	// add r29,r31,r11
	r29.u64 = r31.u64 + ctx.r11.u64;
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8244a6e0
	ctx.lr = 0x8245C46C;
	sub_8244A6E0(ctx, base);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// bne 0x8245c444
	if (!ctx.cr0.eq) goto loc_8245C444;
loc_8245C484:
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// addi r18,r18,4
	r18.s64 = r18.s64 + 4;
	// cmplwi cr6,r17,2
	ctx.cr6.compare<uint32_t>(r17.u32, 2, ctx.xer);
	// blt cr6,0x8245c070
	if (ctx.cr6.lt) goto loc_8245C070;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r4,748(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 748);
	// ori r31,r11,65535
	r31.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r31.u32, ctx.xer);
	// bgt cr6,0x8245c4b4
	if (ctx.cr6.gt) goto loc_8245C4B4;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// lwz r3,740(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 740);
	// bl 0x8244a6e0
	ctx.lr = 0x8245C4B4;
	sub_8244A6E0(ctx, base);
loc_8245C4B4:
	// cmplwi cr6,r15,1
	ctx.cr6.compare<uint32_t>(r15.u32, 1, ctx.xer);
	// ble cr6,0x8245c4d4
	if (!ctx.cr6.gt) goto loc_8245C4D4;
	// lwz r4,764(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 764);
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r31.u32, ctx.xer);
	// bgt cr6,0x8245c4d4
	if (ctx.cr6.gt) goto loc_8245C4D4;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// lwz r3,756(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 756);
	// bl 0x8244a6e0
	ctx.lr = 0x8245C4D4;
	sub_8244A6E0(ctx, base);
loc_8245C4D4:
	// cmplwi cr6,r15,2
	ctx.cr6.compare<uint32_t>(r15.u32, 2, ctx.xer);
	// ble cr6,0x8245c4f4
	if (!ctx.cr6.gt) goto loc_8245C4F4;
	// lwz r4,780(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 780);
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r31.u32, ctx.xer);
	// bgt cr6,0x8245c4f4
	if (ctx.cr6.gt) goto loc_8245C4F4;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// lwz r3,772(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 772);
	// bl 0x8244a6e0
	ctx.lr = 0x8245C4F4;
	sub_8244A6E0(ctx, base);
loc_8245C4F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8245C4F8:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_824B4F90) {
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
	ctx.lr = 0x824B4F98;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r29,r10,12
	r29.u64 = ctx.r10.u32 & 0xFFFFF;
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824b4fc4
	if (!ctx.cr6.eq) goto loc_824B4FC4;
	// li r28,0
	r28.s64 = 0;
	// b 0x824b4fcc
	goto loc_824B4FCC;
loc_824B4FC4:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r30
	r28.u64 = ctx.r11.u64 + r30.u64;
loc_824B4FCC:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x824b4fe8
	if (ctx.cr6.gt) goto loc_824B4FE8;
	// li r27,0
	r27.s64 = 0;
	// b 0x824b4ff0
	goto loc_824B4FF0;
loc_824B4FE8:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r11,r30
	r27.u64 = ctx.r11.u64 + r30.u64;
loc_824B4FF0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824715b8
	ctx.lr = 0x824B4FF8;
	sub_824715B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b5194
	if (ctx.cr0.lt) goto loc_824B5194;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lis r5,15
	ctx.r5.s64 = 983040;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,312(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 312);
	// lbz r11,110(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 110);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// oris r4,r11,45056
	ctx.r4.u64 = ctx.r11.u64 | 2952790016;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x824B503C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b5194
	if (ctx.cr0.lt) goto loc_824B5194;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824b50d4
	if (ctx.cr6.eq) goto loc_824B50D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,328(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 328);
	// lwzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824B5078;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b5194
	if (ctx.cr0.lt) goto loc_824B5194;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lis r6,15
	ctx.r6.s64 = 983040;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,332(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824B50A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b5194
	if (ctx.cr0.lt) goto loc_824B5194;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824B50CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b5194
	if (ctx.cr0.lt) goto loc_824B5194;
loc_824B50D4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824b5164
	if (ctx.cr6.eq) goto loc_824B5164;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,328(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 328);
	// lwzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824B5108;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b5194
	if (ctx.cr0.lt) goto loc_824B5194;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lis r6,15
	ctx.r6.s64 = 983040;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,332(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824B5134;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b5194
	if (ctx.cr0.lt) goto loc_824B5194;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824B515C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b5194
	if (ctx.cr0.lt) goto loc_824B5194;
loc_824B5164:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,308(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824B5178;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b5194
	if (ctx.cr0.lt) goto loc_824B5194;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82468dd8
	ctx.lr = 0x824B5188;
	sub_82468DD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b5194
	if (ctx.cr0.lt) goto loc_824B5194;
	// li r3,0
	ctx.r3.s64 = 0;
loc_824B5194:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824C11A8) {
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
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824C11CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C1BD0) {
	REX_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// twllei r4,0
	if (ctx.r4.s32 == 0 || ctx.r4.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// divw r9,r11,r4
	ctx.r9.u64 = uint32_t((ctx.r4.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r11.s32 / ctx.r4.s32 : 0);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// mullw r8,r9,r4
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// subf r6,r8,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r8.u64;
	// andc r5,r4,r7
	ctx.r5.u64 = ctx.r4.u64 & ~ctx.r7.u64;
	// subf r3,r6,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r6.u64;
	// twlgei r5,-1
	if (ctx.r5.s32 == -1 || ctx.r5.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C2D10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824C2D18;
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
	// beq cr6,0x824c2e58
	if (ctx.cr6.eq) goto loc_824C2E58;
	// lbz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,49
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49, ctx.xer);
	// bne cr6,0x824c2e58
	if (!ctx.cr6.eq) goto loc_824C2E58;
	// cmplwi cr6,r6,56
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 56, ctx.xer);
	// bne cr6,0x824c2e58
	if (!ctx.cr6.eq) goto loc_824C2E58;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824c2d50
	if (!ctx.cr6.eq) goto loc_824C2D50;
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x824c2e5c
	goto loc_824C2E5C;
loc_824C2D50:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r29,0
	r29.s64 = 0;
	// stw r29,24(r31)
	REX_STORE_U32(r31.u32 + 24, r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c2d74
	if (!ctx.cr6.eq) goto loc_824C2D74;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// stw r29,40(r31)
	REX_STORE_U32(r31.u32 + 40, r29.u32);
	// addi r11,r11,-7200
	ctx.r11.s64 = ctx.r11.s64 + -7200;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_824C2D74:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c2d8c
	if (!ctx.cr6.eq) goto loc_824C2D8C;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r11,r11,-7104
	ctx.r11.s64 = ctx.r11.s64 + -7104;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
loc_824C2D8C:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824C2DA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// bne 0x824c2db8
	if (!ctx.cr0.eq) goto loc_824C2DB8;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x824c2e5c
	goto loc_824C2E5C;
loc_824C2DB8:
	// stw r29,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r29.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r29,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, r29.u32);
	// bge cr6,0x824c2ddc
	if (!ctx.cr6.lt) goto loc_824C2DDC;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// neg r30,r30
	r30.s64 = static_cast<int64_t>(-r30.u64);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
loc_824C2DDC:
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// blt cr6,0x824c2e44
	if (ctx.cr6.lt) goto loc_824C2E44;
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(r30.s32, 15, ctx.xer);
	// bgt cr6,0x824c2e44
	if (ctx.cr6.gt) goto loc_824C2E44;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// stw r30,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, r30.u32);
	// slw r5,r11,r30
	ctx.r5.u64 = r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r30.u8 & 0x3F));
	// addi r11,r9,-13816
	ctx.r11.s64 = ctx.r9.s64 + -13816;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x824ce518
	ctx.lr = 0x824C2E1C;
	sub_824CE518(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// bne 0x824c2e34
	if (!ctx.cr0.eq) goto loc_824C2E34;
	// li r30,-4
	r30.s64 = -4;
	// b 0x824c2e48
	goto loc_824C2E48;
loc_824C2E34:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824c2c10
	ctx.lr = 0x824C2E3C;
	sub_824C2C10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824c2e5c
	goto loc_824C2E5C;
loc_824C2E44:
	// li r30,-2
	r30.s64 = -2;
loc_824C2E48:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824c2c88
	ctx.lr = 0x824C2E50;
	sub_824C2C88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x824c2e5c
	goto loc_824C2E5C;
loc_824C2E58:
	// li r3,-6
	ctx.r3.s64 = -6;
loc_824C2E5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824C80D0) {
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
	ctx.lr = 0x824C80D8;
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,432(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 432);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,324(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 324);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r9,156(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// lwz r8,148(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r3,468(r1)
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r3.u32);
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// stw r7,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// bgt cr6,0x824c8174
	if (ctx.cr6.gt) goto loc_824C8174;
loc_824C810C:
	// lwz r9,440(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 440);
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824c8174
	if (!ctx.cr6.eq) goto loc_824C8174;
	// lwz r11,148(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 148);
	// lwz r10,156(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 156);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x824c814c
	if (!ctx.cr6.eq) goto loc_824C814C;
	// lwz r10,404(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 404);
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 160);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r7,152(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 152);
	// rlwinm r10,r8,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x824c8174
	if (ctx.cr6.gt) goto loc_824C8174;
loc_824C814C:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824C815C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824c81e8
	if (ctx.cr6.eq) goto loc_824C81E8;
	// lwz r11,148(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 148);
	// lwz r10,156(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 156);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x824c810c
	if (!ctx.cr6.gt) goto loc_824C810C;
loc_824C8174:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r16,220(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + 220);
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824c8850
	if (!ctx.cr6.gt) goto loc_824C8850;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// li r14,1
	r14.s64 = 1;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r9,r11,72
	ctx.r9.s64 = ctx.r11.s64 + 72;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// subfic r8,r11,-72
	ctx.xer.ca = ctx.r11.u32 <= 4294967224;
	ctx.r8.u64 = static_cast<uint64_t>(-72) - ctx.r11.u64;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
loc_824C81AC:
	// lwz r11,48(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824c880c
	if (ctx.cr6.eq) goto loc_824C880C;
	// lwz r31,468(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,12(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 12);
	// bge cr6,0x824c81f4
	if (!ctx.cr6.lt) goto loc_824C81F4;
	// li r29,0
	r29.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// stw r29,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x824c8224
	goto loc_824C8224;
loc_824C81E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x826a1cd0
	return;
loc_824C81F4:
	// lwz r9,32(r16)
	ctx.r9.u64 = REX_LOAD_U32(r16.u32 + 32);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r8,r9,r11
	ctx.r8.u64 = uint32_t(ctx.r11.u32 ? ctx.r9.u32 / ctx.r11.u32 : 0);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf. r28,r7,r9
	r28.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bne 0x824c8218
	if (!ctx.cr0.eq) goto loc_824C8218;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_824C8218:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r14,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r14.u32);
	// li r29,0
	r29.s64 = 0;
loc_824C8224:
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// beq cr6,0x824c8270
	if (ctx.cr6.eq) goto loc_824C8270;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mullw r5,r8,r11
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// lwz r3,32(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x824C8258;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 12);
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// b 0x824c8290
	goto loc_824C8290;
loc_824C8270:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824C8288;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// stw r14,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r14.u32);
loc_824C8290:
	// lwz r10,156(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lwz r11,452(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 452);
	// lwz r8,124(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,76(r16)
	ctx.r9.u64 = REX_LOAD_U32(r16.u32 + 76);
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + r30.u64;
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// lwz r10,112(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 112);
	// lwz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lhz r4,2(r9)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// lhz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 16);
	// lhz r8,32(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 32);
	// lhz r7,18(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 18);
	// lhz r5,4(r9)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + 4);
	// lwz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// lhz r15,0(r9)
	r15.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r4,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r8,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r5,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// stw r6,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// ble cr6,0x824c880c
	if (!ctx.cr6.gt) goto loc_824C880C;
loc_824C8304:
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r19,0(r11)
	r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x824c8330
	if (ctx.cr6.eq) goto loc_824C8330;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// beq cr6,0x824c8334
	if (ctx.cr6.eq) goto loc_824C8334;
loc_824C8330:
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
loc_824C8334:
	// lwz r8,132(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x824c8358
	if (ctx.cr6.eq) goto loc_824C8358;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x824c8358
	if (!ctx.cr6.eq) goto loc_824C8358;
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// b 0x824c835c
	goto loc_824C835C;
loc_824C8358:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_824C835C:
	// lhz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// li r20,0
	r20.s64 = 0;
	// lhz r8,0(r19)
	ctx.r8.u64 = REX_LOAD_U16(r19.u32 + 0);
	// li r21,0
	r21.s64 = 0;
	// lhz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r25,r10
	r25.s64 = ctx.r10.s16;
	// lwz r10,28(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 28);
	// extsh r28,r8
	r28.s64 = ctx.r8.s16;
	// extsh r24,r7
	r24.s64 = ctx.r7.s16;
	// mr r23,r25
	r23.u64 = r25.u64;
	// mr r26,r28
	r26.u64 = r28.u64;
	// mr r22,r24
	r22.u64 = r24.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r27,r28
	r27.u64 = r28.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// addi r31,r10,-1
	r31.s64 = ctx.r10.s64 + -1;
	// addi r18,r9,128
	r18.s64 = ctx.r9.s64 + 128;
	// addi r17,r11,128
	r17.s64 = ctx.r11.s64 + 128;
loc_824C83A4:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x824c1c58
	ctx.lr = 0x824C83B4;
	sub_824C1C58(ctx, base);
	// cmplw cr6,r21,r31
	ctx.cr6.compare<uint32_t>(r21.u32, r31.u32, ctx.xer);
	// bge cr6,0x824c83d4
	if (!ctx.cr6.lt) goto loc_824C83D4;
	// lhz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U16(r18.u32 + 0);
	// lhz r10,128(r19)
	ctx.r10.u64 = REX_LOAD_U16(r19.u32 + 128);
	// lhz r9,0(r17)
	ctx.r9.u64 = REX_LOAD_U16(r17.u32 + 0);
	// extsh r25,r11
	r25.s64 = ctx.r11.s16;
	// extsh r28,r10
	r28.s64 = ctx.r10.s16;
	// extsh r24,r9
	r24.s64 = ctx.r9.s16;
loc_824C83D4:
	// lwz r7,148(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824c8498
	if (ctx.cr6.eq) goto loc_824C8498;
	// lhz r11,162(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 162);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c8498
	if (!ctx.cr6.eq) goto loc_824C8498;
	// subf r11,r28,r27
	ctx.r11.u64 = r27.u64 - r28.u64;
	// mullw r11,r11,r15
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r15.s32);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824c8450
	if (ctx.cr6.lt) goto loc_824C8450;
	// lwz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r8,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r9,r6,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r11,r6,r8
	ctx.r11.u64 = uint32_t((ctx.r8.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r6.s32 / ctx.r8.s32 : 0);
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// andc r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 & ~ctx.r5.u64;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x824c8494
	if (!ctx.cr6.gt) goto loc_824C8494;
	// slw r10,r14,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r14.u32 << (ctx.r10.u8 & 0x3F));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824c8494
	if (ctx.cr6.lt) goto loc_824C8494;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// b 0x824c8494
	goto loc_824C8494;
loc_824C8450:
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r8,r9,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r6,r9,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// subf r5,r11,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r11.u64;
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// divw r11,r5,r6
	ctx.r11.u64 = uint32_t((ctx.r6.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r5.s32 / ctx.r6.s32 : 0);
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// andc r3,r6,r4
	ctx.r3.u64 = ctx.r6.u64 & ~ctx.r4.u64;
	// twlgei r3,-1
	if (ctx.r3.s32 == -1 || ctx.r3.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x824c8490
	if (!ctx.cr6.gt) goto loc_824C8490;
	// slw r10,r14,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r14.u32 << (ctx.r10.u8 & 0x3F));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824c8490
	if (ctx.cr6.lt) goto loc_824C8490;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_824C8490:
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_824C8494:
	// sth r11,162(r1)
	REX_STORE_U16(ctx.r1.u32 + 162, ctx.r11.u16);
loc_824C8498:
	// lwz r10,8(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824c8558
	if (ctx.cr6.eq) goto loc_824C8558;
	// lhz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c8558
	if (!ctx.cr6.eq) goto loc_824C8558;
	// subf r11,r22,r23
	ctx.r11.u64 = r23.u64 - r22.u64;
	// mullw r11,r11,r15
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r15.s32);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824c8510
	if (ctx.cr6.lt) goto loc_824C8510;
	// lwz r8,140(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r8,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r9,r6,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r11,r6,r8
	ctx.r11.u64 = uint32_t((ctx.r8.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r6.s32 / ctx.r8.s32 : 0);
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// andc r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 & ~ctx.r5.u64;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x824c8554
	if (!ctx.cr6.gt) goto loc_824C8554;
	// slw r10,r14,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r14.u32 << (ctx.r10.u8 & 0x3F));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824c8554
	if (ctx.cr6.lt) goto loc_824C8554;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// b 0x824c8554
	goto loc_824C8554;
loc_824C8510:
	// lwz r9,140(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r8,r9,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r6,r9,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// subf r5,r11,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r11.u64;
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// divw r11,r5,r6
	ctx.r11.u64 = uint32_t((ctx.r6.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r5.s32 / ctx.r6.s32 : 0);
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// andc r3,r6,r4
	ctx.r3.u64 = ctx.r6.u64 & ~ctx.r4.u64;
	// twlgei r3,-1
	if (ctx.r3.s32 == -1 || ctx.r3.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x824c8550
	if (!ctx.cr6.gt) goto loc_824C8550;
	// slw r10,r14,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r14.u32 << (ctx.r10.u8 & 0x3F));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824c8550
	if (ctx.cr6.lt) goto loc_824C8550;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_824C8550:
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_824C8554:
	// sth r11,176(r1)
	REX_STORE_U16(ctx.r1.u32 + 176, ctx.r11.u16);
loc_824C8558:
	// lwz r9,12(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824c8614
	if (ctx.cr6.eq) goto loc_824C8614;
	// lhz r11,192(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c8614
	if (!ctx.cr6.eq) goto loc_824C8614;
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r11,r11,r22
	ctx.r11.u64 = r22.u64 - ctx.r11.u64;
	// add r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 + r23.u64;
	// mullw r11,r10,r15
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(r15.s32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x824c85d0
	if (ctx.cr0.lt) goto loc_824C85D0;
	// lwz r8,136(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r10,r8,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r11,r6,r8
	ctx.r11.u64 = uint32_t((ctx.r8.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r6.s32 / ctx.r8.s32 : 0);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// andc r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 & ~ctx.r5.u64;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x824c8610
	if (!ctx.cr6.gt) goto loc_824C8610;
	// slw r10,r14,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r14.u32 << (ctx.r9.u8 & 0x3F));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824c8610
	if (ctx.cr6.lt) goto loc_824C8610;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// b 0x824c8610
	goto loc_824C8610;
loc_824C85D0:
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r8,r10,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r6,r10,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// subf r5,r11,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r11.u64;
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r10,r5,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// divw r11,r5,r6
	ctx.r11.u64 = uint32_t((ctx.r6.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r5.s32 / ctx.r6.s32 : 0);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// andc r3,r6,r4
	ctx.r3.u64 = ctx.r6.u64 & ~ctx.r4.u64;
	// twlgei r3,-1
	if (ctx.r3.s32 == -1 || ctx.r3.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x824c860c
	if (!ctx.cr6.gt) goto loc_824C860C;
	// slw r10,r14,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r14.u32 << (ctx.r9.u8 & 0x3F));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824c860c
	if (ctx.cr6.lt) goto loc_824C860C;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_824C860C:
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_824C8610:
	// sth r11,192(r1)
	REX_STORE_U16(ctx.r1.u32 + 192, ctx.r11.u16);
loc_824C8614:
	// lwz r9,16(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824c86d0
	if (ctx.cr6.eq) goto loc_824C86D0;
	// lhz r11,178(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 178);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c86d0
	if (!ctx.cr6.eq) goto loc_824C86D0;
	// subf r11,r29,r24
	ctx.r11.u64 = r24.u64 - r29.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - r25.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// mullw r11,r10,r15
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(r15.s32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x824c868c
	if (ctx.cr0.lt) goto loc_824C868C;
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r10,r8,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r11,r6,r8
	ctx.r11.u64 = uint32_t((ctx.r8.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r6.s32 / ctx.r8.s32 : 0);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// andc r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 & ~ctx.r5.u64;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x824c86cc
	if (!ctx.cr6.gt) goto loc_824C86CC;
	// slw r10,r14,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r14.u32 << (ctx.r9.u8 & 0x3F));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824c86cc
	if (ctx.cr6.lt) goto loc_824C86CC;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// b 0x824c86cc
	goto loc_824C86CC;
loc_824C868C:
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r8,r10,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r6,r10,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// subf r5,r11,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r11.u64;
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r10,r5,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// divw r11,r5,r6
	ctx.r11.u64 = uint32_t((ctx.r6.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r5.s32 / ctx.r6.s32 : 0);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// andc r3,r6,r4
	ctx.r3.u64 = ctx.r6.u64 & ~ctx.r4.u64;
	// twlgei r3,-1
	if (ctx.r3.s32 == -1 || ctx.r3.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x824c86c8
	if (!ctx.cr6.gt) goto loc_824C86C8;
	// slw r10,r14,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r14.u32 << (ctx.r9.u8 & 0x3F));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824c86c8
	if (ctx.cr6.lt) goto loc_824C86C8;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_824C86C8:
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_824C86CC:
	// sth r11,178(r1)
	REX_STORE_U16(ctx.r1.u32 + 178, ctx.r11.u16);
loc_824C86D0:
	// lwz r9,20(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824c878c
	if (ctx.cr6.eq) goto loc_824C878C;
	// lhz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c878c
	if (!ctx.cr6.eq) goto loc_824C878C;
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r11,r11,r28
	ctx.r11.u64 = r28.u64 - ctx.r11.u64;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + r27.u64;
	// mullw r11,r10,r15
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(r15.s32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x824c8748
	if (ctx.cr0.lt) goto loc_824C8748;
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r10,r8,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r11,r7,r8
	ctx.r11.u64 = uint32_t((ctx.r8.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r7.s32 / ctx.r8.s32 : 0);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// andc r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 & ~ctx.r6.u64;
	// twlgei r5,-1
	if (ctx.r5.s32 == -1 || ctx.r5.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x824c8788
	if (!ctx.cr6.gt) goto loc_824C8788;
	// slw r10,r14,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r14.u32 << (ctx.r9.u8 & 0x3F));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824c8788
	if (ctx.cr6.lt) goto loc_824C8788;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// b 0x824c8788
	goto loc_824C8788;
loc_824C8748:
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r8,r10,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r7,r10,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// subf r6,r11,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r11.u64;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r11,r6,r7
	ctx.r11.u64 = uint32_t((ctx.r7.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r6.s32 / ctx.r7.s32 : 0);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// andc r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 & ~ctx.r5.u64;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x824c8784
	if (!ctx.cr6.gt) goto loc_824C8784;
	// slw r10,r14,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r14.u32 << (ctx.r9.u8 & 0x3F));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824c8784
	if (ctx.cr6.lt) goto loc_824C8784;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_824C8784:
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_824C8788:
	// sth r11,164(r1)
	REX_STORE_U16(ctx.r1.u32 + 164, ctx.r11.u16);
loc_824C878C:
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// lwz r3,468(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824C87AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 36);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// mr r30,r23
	r30.u64 = r23.u64;
	// mr r27,r26
	r27.u64 = r26.u64;
	// mr r29,r22
	r29.u64 = r22.u64;
	// mr r23,r25
	r23.u64 = r25.u64;
	// mr r26,r28
	r26.u64 = r28.u64;
	// mr r22,r24
	r22.u64 = r24.u64;
	// addi r19,r19,128
	r19.s64 = r19.s64 + 128;
	// addi r18,r18,128
	r18.s64 = r18.s64 + 128;
	// addi r17,r17,128
	r17.s64 = r17.s64 + 128;
	// cmplw cr6,r21,r31
	ctx.cr6.compare<uint32_t>(r21.u32, r31.u32, ctx.xer);
	// add r20,r11,r20
	r20.u64 = ctx.r11.u64 + r20.u64;
	// ble cr6,0x824c83a4
	if (!ctx.cr6.gt) goto loc_824C83A4;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// blt cr6,0x824c8304
	if (ctx.cr6.lt) goto loc_824C8304;
loc_824C880C:
	// lwz r10,468(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// addi r16,r16,84
	r16.s64 = r16.s64 + 84;
	// lwz r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// lwz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r5,r8,24
	ctx.r5.s64 = ctx.r8.s64 + 24;
	// lwz r4,36(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// addi r3,r7,4
	ctx.r3.s64 = ctx.r7.s64 + 4;
	// addi r10,r6,4
	ctx.r10.s64 = ctx.r6.s64 + 4;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// blt cr6,0x824c81ac
	if (ctx.cr6.lt) goto loc_824C81AC;
loc_824C8850:
	// lwz r10,468(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r11,160(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 160);
	// lwz r9,324(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 324);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfc r8,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// stw r11,160(r10)
	REX_STORE_U32(ctx.r10.u32 + 160, ctx.r11.u32);
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_824FE5D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824FE5D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,240
	ctx.r6.s64 = 240;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x824fe458
	ctx.lr = 0x824FE5F8;
	sub_824FE458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824fe6c4
	if (ctx.cr0.lt) goto loc_824FE6C4;
	// lwz r11,12(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x824fe620
	if (ctx.cr6.gt) goto loc_824FE620;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r29,r5,32
	r29.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpld cr6,r10,r29
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, r29.u64, ctx.xer);
	// ble cr6,0x824fe62c
	if (!ctx.cr6.gt) goto loc_824FE62C;
loc_824FE620:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824fe6c4
	goto loc_824FE6C4;
loc_824FE62C:
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r30,16(r7)
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x824fe4b0
	ctx.lr = 0x824FE644;
	sub_824FE4B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824fe6c4
	if (ctx.cr0.lt) goto loc_824FE6C4;
	// lhz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// lhz r9,6(r7)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + 6);
	// lhz r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x824fe6e0
	if (ctx.cr6.lt) goto loc_824FE6E0;
	// beq cr6,0x824fe6d4
	if (ctx.cr6.eq) goto loc_824FE6D4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x824fe6cc
	if (ctx.cr6.lt) goto loc_824FE6CC;
	// bne cr6,0x824fe620
	if (!ctx.cr6.eq) goto loc_824FE620;
	// li r11,32
	ctx.r11.s64 = 32;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824fe620
	if (!ctx.cr6.eq) goto loc_824FE620;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_824FE680:
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x824fe620
	if (ctx.cr6.gt) goto loc_824FE620;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824fe6c0
	if (ctx.cr6.eq) goto loc_824FE6C0;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// bgt cr6,0x824fe620
	if (ctx.cr6.gt) goto loc_824FE620;
	// clrldi r11,r7,48
	ctx.r11.u64 = ctx.r7.u64 & 0xFFFF;
	// clrldi r9,r8,32
	ctx.r9.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// mulld r11,r11,r9
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r9.u64);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpld cr6,r11,r29
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, r29.u64, ctx.xer);
	// bgt cr6,0x824fe620
	if (ctx.cr6.gt) goto loc_824FE620;
loc_824FE6C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824FE6C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_824FE6CC:
	// li r11,256
	ctx.r11.s64 = 256;
	// b 0x824fe6d8
	goto loc_824FE6D8;
loc_824FE6D4:
	// li r11,64
	ctx.r11.s64 = 64;
loc_824FE6D8:
	// li r8,16
	ctx.r8.s64 = 16;
	// b 0x824fe680
	goto loc_824FE680;
loc_824FE6E0:
	// li r11,256
	ctx.r11.s64 = 256;
	// li r8,4
	ctx.r8.s64 = 4;
	// b 0x824fe680
	goto loc_824FE680;
}

DEFINE_REX_FUNC(sub_82505370) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825053b8
	if (!ctx.cr0.eq) goto loc_825053B8;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825053b8
	if (ctx.cr0.eq) goto loc_825053B8;
loc_82505398:
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825053b8
	if (!ctx.cr0.eq) goto loc_825053B8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82505398
	if (!ctx.cr6.eq) goto loc_82505398;
loc_825053B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8250542c
	if (ctx.cr6.eq) goto loc_8250542C;
	// lwz r6,4(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_825053C8:
	// clrlwi r10,r6,31
	ctx.r10.u64 = ctx.r6.u32 & 0x1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 & ctx.r6.u64;
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82505410
	if (ctx.cr6.lt) goto loc_82505410;
loc_825053E8:
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// addic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x825053e8
	if (!ctx.cr6.lt) goto loc_825053E8;
loc_82505410:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// blt cr6,0x825053c8
	if (ctx.cr6.lt) goto loc_825053C8;
loc_8250542C:
	// stw r5,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8250EDF8) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8255f2d0
	ctx.lr = 0x8250EE1C;
	sub_8255F2D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250ee2c
	if (!ctx.cr0.eq) goto loc_8250EE2C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8250ee3c
	goto loc_8250EE3C;
loc_8250EE2C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250bef0
	ctx.lr = 0x8250EE38;
	sub_8250BEF0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8250EE3C:
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

DEFINE_REX_FUNC(sub_82516600) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,192(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r8,192(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 192);
	// rlwinm r7,r9,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x1;
	// rlwinm r6,r8,3,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x1;
	// subf. r3,r7,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r10,196(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 196);
	// lwz r11,196(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 196);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x8251663c
	if (!ctx.cr6.lt) goto loc_8251663C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8251663C:
	// ble cr6,0x82516648
	if (!ctx.cr6.gt) goto loc_82516648;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82516648:
	// rlwinm r11,r9,29,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x7FF;
	// rlwinm r10,r8,29,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x7FF;
	// subf r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825196C8) {
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
	ctx.lr = 0x825196D0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r11,192(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 192);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,192(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 192);
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// clrlwi r8,r10,29
	ctx.r8.u64 = ctx.r10.u32 & 0x7;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r28,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r28.u32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bgt cr6,0x82519724
	if (ctx.cr6.gt) goto loc_82519724;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82519724
	if (!ctx.cr0.eq) goto loc_82519724;
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82519724
	if (!ctx.cr0.eq) goto loc_82519724;
loc_8251971C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82519790
	goto loc_82519790;
loc_82519724:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82518c38
	ctx.lr = 0x82519744;
	sub_82518C38(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251971c
	if (!ctx.cr0.eq) goto loc_8251971C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82518c38
	ctx.lr = 0x8251977C;
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
loc_82519790:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82520608) {
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
	ctx.lr = 0x82520610;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mulli r10,r4,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(40));
	// stw r4,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r4.u32);
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r9,0,15,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFF8;
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// add r20,r10,r11
	r20.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8251f360
	ctx.lr = 0x8252063C;
	sub_8251F360(ctx, base);
	// lwz r11,16(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 16);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// stw r3,28(r20)
	REX_STORE_U32(r20.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82520658
	if (ctx.cr6.eq) goto loc_82520658;
	// lwz r6,64(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// b 0x8252065c
	goto loc_8252065C;
loc_82520658:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8252065C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252066c
	if (ctx.cr6.eq) goto loc_8252066C;
	// lwz r5,60(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// b 0x8252068c
	goto loc_8252068C;
loc_8252066C:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82520688
	if (!ctx.cr6.eq) goto loc_82520688;
	// lwz r11,28(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 28);
	// lwz r5,56(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// b 0x8252068c
	goto loc_8252068C;
loc_82520688:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8252068C:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r4,20(r20)
	ctx.r4.u64 = REX_LOAD_U32(r20.u32 + 20);
	// bl 0x82520410
	ctx.lr = 0x82520698;
	sub_82520410(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// li r15,0
	r15.s64 = 0;
	// li r14,0
	r14.s64 = 0;
loc_825206B0:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825206d0
	if (!ctx.cr6.eq) goto loc_825206D0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82589ed0
	ctx.lr = 0x825206C4;
	sub_82589ED0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x825206d4
	if (ctx.cr0.eq) goto loc_825206D4;
loc_825206D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825206D4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82520b20
	if (!ctx.cr0.eq) goto loc_82520B20;
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r9,32(r22)
	ctx.r9.u64 = REX_LOAD_U8(r22.u32 + 32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// add r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 + r17.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r9,r10,0,0,30
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bl 0x82589f28
	ctx.lr = 0x82520700;
	sub_82589F28(ctx, base);
	// li r18,0
	r18.s64 = 0;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 30, ctx.xer);
	// stb r18,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r18.u8);
	// bgt cr6,0x8252074c
	if (ctx.cr6.gt) goto loc_8252074C;
	// cmpwi cr6,r3,29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 29, ctx.xer);
	// bge cr6,0x82520734
	if (!ctx.cr6.lt) goto loc_82520734;
	// cmpwi cr6,r3,24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 24, ctx.xer);
	// blt cr6,0x82520760
	if (ctx.cr6.lt) goto loc_82520760;
	// cmpwi cr6,r3,25
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 25, ctx.xer);
	// ble cr6,0x82520734
	if (!ctx.cr6.gt) goto loc_82520734;
	// cmpwi cr6,r3,27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 27, ctx.xer);
	// bne cr6,0x82520760
	if (!ctx.cr6.eq) goto loc_82520760;
loc_82520734:
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,112
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 112, ctx.xer);
	// bne cr6,0x82520adc
	if (!ctx.cr6.eq) goto loc_82520ADC;
	// li r15,256
	r15.s64 = 256;
	// b 0x8252078c
	goto loc_8252078C;
loc_8252074C:
	// cmpwi cr6,r19,33
	ctx.cr6.compare<int32_t>(r19.s32, 33, ctx.xer);
	// beq cr6,0x8252077c
	if (ctx.cr6.eq) goto loc_8252077C;
	// ble cr6,0x82520760
	if (!ctx.cr6.gt) goto loc_82520760;
	// cmpwi cr6,r19,37
	ctx.cr6.compare<int32_t>(r19.s32, 37, ctx.xer);
	// ble cr6,0x8252077c
	if (!ctx.cr6.gt) goto loc_8252077C;
loc_82520760:
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x8252078c
	if (!ctx.cr6.eq) goto loc_8252078C;
	// li r4,3533
	ctx.r4.s64 = 3533;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x824e4368
	ctx.lr = 0x8252077C;
	sub_824E4368(ctx, base);
loc_8252077C:
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x82520ae8
	if (!ctx.cr6.eq) goto loc_82520AE8;
loc_8252078C:
	// lwz r4,12(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82520884
	if (ctx.cr6.eq) goto loc_82520884;
	// clrlwi. r11,r14,24
	ctx.r11.u64 = r14.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252088c
	if (!ctx.cr0.eq) goto loc_8252088C;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8257e9f8
	ctx.lr = 0x825207A8;
	sub_8257E9F8(ctx, base);
	// b 0x825207f0
	goto loc_825207F0;
loc_825207AC:
	// lwz r30,8(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x825207e4
	if (!ctx.cr6.eq) goto loc_825207E4;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82520af4
	if (!ctx.cr6.eq) goto loc_82520AF4;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 16);
	// bl 0x8257ea48
	ctx.lr = 0x825207DC;
	sub_8257EA48(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825207fc
	if (!ctx.cr0.eq) goto loc_825207FC;
loc_825207E4:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x8257ea20
	ctx.lr = 0x825207F0;
	sub_8257EA20(ctx, base);
loc_825207F0:
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x825207ac
	if (!ctx.cr0.eq) goto loc_825207AC;
	// b 0x8252088c
	goto loc_8252088C;
loc_825207FC:
	// lwz r31,20(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// rlwinm r5,r11,28,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8251e140
	ctx.lr = 0x82520820;
	sub_8251E140(ctx, base);
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 0);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,4080
	ctx.r11.s64 = 267386880;
	// lwz r8,4(r20)
	ctx.r8.u64 = REX_LOAD_U32(r20.u32 + 4);
	// rlwimi r10,r9,20,3,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x1FF00000) | (ctx.r10.u64 & 0xFFFFFFFFE00FFFFF);
	// stw r10,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r10.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwimi r8,r9,4,25,27
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x70) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF8F);
	// rlwinm r9,r10,0,3,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FF00000;
	// stw r8,4(r20)
	REX_STORE_U32(r20.u32 + 4, ctx.r8.u32);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82520860
	if (!ctx.cr6.gt) goto loc_82520860;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82520508
	ctx.lr = 0x82520860;
	sub_82520508(ctx, base);
loc_82520860:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82520afc
	if (!ctx.cr6.eq) goto loc_82520AFC;
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// lbz r18,80(r1)
	r18.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// li r14,1
	r14.s64 = 1;
	// stw r11,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r11.u32);
	// b 0x8252088c
	goto loc_8252088C;
loc_82520884:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
loc_8252088C:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// lwz r10,4(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 4);
	// addi r31,r10,1
	r31.s64 = ctx.r10.s64 + 1;
	// lwz r23,28(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r28,32(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(r23.u32, 1, ctx.xer);
	// ble cr6,0x825208b0
	if (!ctx.cr6.gt) goto loc_825208B0;
	// cmplwi cr6,r28,4
	ctx.cr6.compare<uint32_t>(r28.u32, 4, ctx.xer);
	// bgt cr6,0x82520b08
	if (ctx.cr6.gt) goto loc_82520B08;
loc_825208B0:
	// lwz r9,0(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// beq cr6,0x825208e8
	if (ctx.cr6.eq) goto loc_825208E8;
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(r23.u32, 1, ctx.xer);
	// ble cr6,0x825208e8
	if (!ctx.cr6.gt) goto loc_825208E8;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r10,r11,22,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825208e8
	if (ctx.cr0.eq) goto loc_825208E8;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// mr r23,r28
	r23.u64 = r28.u64;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_825208E8:
	// cmplwi cr6,r28,4
	ctx.cr6.compare<uint32_t>(r28.u32, 4, ctx.xer);
	// ble cr6,0x825208fc
	if (!ctx.cr6.gt) goto loc_825208FC;
	// addi r11,r28,3
	ctx.r11.s64 = r28.s64 + 3;
	// li r28,4
	r28.s64 = 4;
	// rlwinm r23,r11,30,2,31
	r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
loc_825208FC:
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// rlwinm r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82520924
	if (!ctx.cr6.eq) goto loc_82520924;
	// clrlwi. r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82520b14
	if (!ctx.cr0.eq) goto loc_82520B14;
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(r23.u32, 1, ctx.xer);
	// bgt cr6,0x82520b14
	if (ctx.cr6.gt) goto loc_82520B14;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// bgt cr6,0x82520b14
	if (ctx.cr6.gt) goto loc_82520B14;
loc_82520924:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82520934
	if (!ctx.cr6.eq) goto loc_82520934;
	// mr r23,r31
	r23.u64 = r31.u64;
	// li r28,1
	r28.s64 = 1;
loc_82520934:
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// lwz r24,8(r22)
	r24.u64 = REX_LOAD_U32(r22.u32 + 8);
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r15,r23,r15
	r15.u64 = r23.u64 + r15.u64;
	// mr r21,r25
	r21.u64 = r25.u64;
	// bne 0x825209d4
	if (!ctx.cr0.eq) goto loc_825209D4;
loc_8252094C:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// mr r30,r31
	r30.u64 = r31.u64;
	// blt cr6,0x8252095c
	if (ctx.cr6.lt) goto loc_8252095C;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_8252095C:
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r31,r30,r31
	r31.u64 = r31.u64 - r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// add r29,r11,r17
	r29.u64 = ctx.r11.u64 + r17.u64;
loc_8252096C:
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8251e0a0
	ctx.lr = 0x82520980;
	sub_8251E0A0(ctx, base);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x825209a4
	if (ctx.cr6.eq) goto loc_825209A4;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x825209a4
	if (!ctx.cr6.lt) goto loc_825209A4;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwimi r10,r11,27,1,4
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x78000000) | (ctx.r10.u64 & 0xFFFFFFFF87FFFFFF);
	// oris r11,r10,1024
	ctx.r11.u64 = ctx.r10.u64 | 67108864;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_825209A4:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x8252096c
	if (!ctx.cr0.eq) goto loc_8252096C;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 20);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r22)
	REX_STORE_U32(r22.u32 + 20, ctx.r11.u32);
	// bne cr6,0x8252094c
	if (!ctx.cr6.eq) goto loc_8252094C;
	// b 0x82520a88
	goto loc_82520A88;
loc_825209D4:
	// lwz r26,20(r22)
	r26.u64 = REX_LOAD_U32(r22.u32 + 20);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
loc_825209E0:
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(r31.u32, r23.u32, ctx.xer);
	// mr r30,r31
	r30.u64 = r31.u64;
	// blt cr6,0x825209f0
	if (ctx.cr6.lt) goto loc_825209F0;
	// mr r30,r23
	r30.u64 = r23.u64;
loc_825209F0:
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r31,r30,r31
	r31.u64 = r31.u64 - r30.u64;
	// add r29,r11,r17
	r29.u64 = ctx.r11.u64 + r17.u64;
	// subf r28,r25,r5
	r28.u64 = ctx.r5.u64 - r25.u64;
loc_82520A00:
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// add r5,r28,r25
	ctx.r5.u64 = r28.u64 + r25.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8251e0a0
	ctx.lr = 0x82520A18;
	sub_8251E0A0(ctx, base);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82520a48
	if (ctx.cr6.eq) goto loc_82520A48;
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82520a3c
	if (!ctx.cr6.lt) goto loc_82520A3C;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwimi r10,r11,27,1,4
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x78000000) | (ctx.r10.u64 & 0xFFFFFFFF87FFFFFF);
	// oris r11,r10,1024
	ctx.r11.u64 = ctx.r10.u64 | 67108864;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_82520A3C:
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r22)
	REX_STORE_U32(r22.u32 + 20, ctx.r11.u32);
loc_82520A48:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x82520a00
	if (!ctx.cr0.eq) goto loc_82520A00;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r26,20(r22)
	REX_STORE_U32(r22.u32 + 20, r26.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825209e0
	if (!ctx.cr6.eq) goto loc_825209E0;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// lwz r27,284(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r11.u32);
	// lwz r11,20(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 20);
	// add r11,r23,r11
	ctx.r11.u64 = r23.u64 + ctx.r11.u64;
	// stw r11,20(r22)
	REX_STORE_U32(r22.u32 + 20, ctx.r11.u32);
loc_82520A88:
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(r23.u32, 1, ctx.xer);
	// ble cr6,0x82520ad0
	if (!ctx.cr6.gt) goto loc_82520AD0;
	// cmplw cr6,r21,r25
	ctx.cr6.compare<uint32_t>(r21.u32, r25.u32, ctx.xer);
	// bge cr6,0x82520ad0
	if (!ctx.cr6.lt) goto loc_82520AD0;
	// rlwinm r11,r21,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r21,r25
	ctx.r10.u64 = r25.u64 - r21.u64;
	// add r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 + r17.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82520AAC:
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82520ac8
	if (!ctx.cr6.eq) goto loc_82520AC8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82520AC8:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82520aac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82520AAC;
loc_82520AD0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r22)
	REX_STORE_U32(r22.u32 + 4, ctx.r11.u32);
	// b 0x825206b0
	goto loc_825206B0;
loc_82520ADC:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x824e4368
	ctx.lr = 0x82520AE8;
	sub_824E4368(ctx, base);
loc_82520AE8:
	// li r4,3533
	ctx.r4.s64 = 3533;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x824e4368
	ctx.lr = 0x82520AF4;
	sub_824E4368(ctx, base);
loc_82520AF4:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// bl 0x824e4368
	ctx.lr = 0x82520AFC;
	sub_824E4368(ctx, base);
loc_82520AFC:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x824e4368
	ctx.lr = 0x82520B08;
	sub_824E4368(ctx, base);
loc_82520B08:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x824e4368
	ctx.lr = 0x82520B14;
	sub_824E4368(ctx, base);
loc_82520B14:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x824e4368
	ctx.lr = 0x82520B20;
	sub_824E4368(ctx, base);
loc_82520B20:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// rlwinm r11,r11,29,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3FFF;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82520bd4
	if (!ctx.cr6.eq) goto loc_82520BD4;
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82520b44
	if (ctx.cr0.eq) goto loc_82520B44;
	// clrlwi. r11,r14,24
	ctx.r11.u64 = r14.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82520bd4
	if (!ctx.cr0.eq) goto loc_82520BD4;
loc_82520B44:
	// lwz r10,1004(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 1004);
	// addi r11,r16,972
	ctx.r11.s64 = r16.s64 + 972;
	// cmplwi cr6,r15,256
	ctx.cr6.compare<uint32_t>(r15.u32, 256, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
	// stw r10,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r10.u32);
	// stw r22,1004(r16)
	REX_STORE_U32(r16.u32 + 1004, r22.u32);
	// blt cr6,0x82520b64
	if (ctx.cr6.lt) goto loc_82520B64;
	// li r11,256
	ctx.r11.s64 = 256;
loc_82520B64:
	// lwz r10,4(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 4);
	// rlwimi r10,r11,16,7,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1FF0000) | (ctx.r10.u64 & 0xFFFFFFFFFE00FFFF);
	// rlwinm. r11,r10,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x70;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,4(r20)
	REX_STORE_U32(r20.u32 + 4, ctx.r10.u32);
	// bne 0x82520bcc
	if (!ctx.cr0.eq) goto loc_82520BCC;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm. r11,r11,0,15,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFF8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82520bcc
	if (ctx.cr0.eq) goto loc_82520BCC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82520B8C:
	// lwz r9,28(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 28);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwimi r7,r8,18,12,13
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0xC0000) | (ctx.r7.u64 & 0xFFFFFFFFFFF3FFFF);
	// stwx r7,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r9,28(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 28);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r8,0,12,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFC0FFFFF;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r9,0(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 0);
	// rlwinm r9,r9,29,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x3FFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82520b8c
	if (ctx.cr6.lt) goto loc_82520B8C;
loc_82520BCC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd0
	return;
loc_82520BD4:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x824e4368
	ctx.lr = 0x82520BE0;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_82563528) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c94
	ctx.lr = 0x82563530;
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r5,57
	ctx.r5.s64 = 57;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x824f7678
	ctx.lr = 0x82563550;
	sub_824F7678(ctx, base);
	// addi r22,r3,4
	r22.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r22,1
	ctx.r10.u64 = r22.u64 | 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r5,51
	ctx.r5.s64 = 51;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824f7678
	ctx.lr = 0x82563578;
	sub_824F7678(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r21,r3,4
	r21.s64 = ctx.r3.s64 + 4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// ori r11,r21,1
	ctx.r11.u64 = r21.u64 | 1;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r23
	r31.u64 = r23.u64;
	// li r20,0
	r20.s64 = 0;
	// lfd f31,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_825635A8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82563760
	if (ctx.cr6.eq) goto loc_82563760;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x825636c0
	if (ctx.cr6.eq) goto loc_825636C0;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// ble cr6,0x8256397c
	if (!ctx.cr6.gt) goto loc_8256397C;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bgt cr6,0x8256397c
	if (ctx.cr6.gt) goto loc_8256397C;
	// lwz r26,44(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r29,0
	r29.s64 = 0;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82563694
	if (ctx.cr0.eq) goto loc_82563694;
loc_825635E4:
	// li r5,51
	ctx.r5.s64 = 51;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824f7678
	ctx.lr = 0x825635F4;
	sub_824F7678(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256363c
	if (!ctx.cr0.eq) goto loc_8256363C;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256363c
	if (ctx.cr0.eq) goto loc_8256363C;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8256364c
	if (!ctx.cr6.gt) goto loc_8256364C;
loc_8256363C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8251fe00
	ctx.lr = 0x82563648;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8256364C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stwx r30,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r30.u32);
	// bl 0x8255dc78
	ctx.lr = 0x82563680;
	sub_8255DC78(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825635e4
	if (ctx.cr6.lt) goto loc_825635E4;
loc_82563694:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,2304
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2304, ctx.xer);
	// bne cr6,0x825637a0
	if (!ctx.cr6.eq) goto loc_825637A0;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x824f8b38
	ctx.lr = 0x825636B0;
	sub_824F8B38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825637a0
	if (!ctx.cr0.eq) goto loc_825637A0;
loc_825636B8:
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82563784
	goto loc_82563784;
loc_825636C0:
	// li r5,51
	ctx.r5.s64 = 51;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824f7678
	ctx.lr = 0x825636D0;
	sub_824F7678(ctx, base);
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82563718
	if (!ctx.cr0.eq) goto loc_82563718;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82563718
	if (ctx.cr0.eq) goto loc_82563718;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82563728
	if (!ctx.cr6.gt) goto loc_82563728;
loc_82563718:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8251fe00
	ctx.lr = 0x82563724;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82563728:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stwx r30,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r30.u32);
	// bl 0x8255dc78
	ctx.lr = 0x8256375C;
	sub_8255DC78(ctx, base);
	// b 0x825636b8
	goto loc_825636B8;
loc_82563760:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8255dd10
	ctx.lr = 0x82563780;
	sub_8255DD10(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
loc_82563784:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8255dd10
	ctx.lr = 0x825637A0;
	sub_8255DD10(ctx, base);
loc_825637A0:
	// lwz r19,80(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_825637A4:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82563988
	if (!ctx.cr0.eq) goto loc_82563988;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82563988
	if (ctx.cr0.eq) goto loc_82563988;
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// cmplwi cr6,r20,3000
	ctx.cr6.compare<uint32_t>(r20.u32, 3000, ctx.xer);
	// bgt cr6,0x82563990
	if (ctx.cr6.gt) goto loc_82563990;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r11,r9,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r31,4(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r28,8(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r26,12(r10)
	r26.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x8256382c
	if (!ctx.cr0.eq) goto loc_8256382C;
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
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// bl 0x824e4308
	ctx.lr = 0x8256382C;
	sub_824E4308(ctx, base);
loc_8256382C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x8256386c
	if (!ctx.cr6.eq) goto loc_8256386C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82563850
	if (ctx.cr6.eq) goto loc_82563850;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82563854
	if (!ctx.cr6.eq) goto loc_82563854;
loc_82563850:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82563854:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8256386c
	if (ctx.cr0.eq) goto loc_8256386C;
	// rlwinm. r11,r10,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256386c
	if (!ctx.cr0.eq) goto loc_8256386C;
	// rlwinm. r11,r10,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825635a8
	if (ctx.cr0.eq) goto loc_825635A8;
loc_8256386C:
	// li r5,51
	ctx.r5.s64 = 51;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824f7678
	ctx.lr = 0x8256387C;
	sub_824F7678(ctx, base);
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ori r11,r29,1
	ctx.r11.u64 = r29.u64 | 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825638c4
	if (!ctx.cr0.eq) goto loc_825638C4;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825638c4
	if (ctx.cr0.eq) goto loc_825638C4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825638d0
	if (!ctx.cr6.gt) goto loc_825638D0;
loc_825638C4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8251fe00
	ctx.lr = 0x825638D0;
	sub_8251FE00(ctx, base);
loc_825638D0:
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
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82563918
	if (!ctx.cr0.eq) goto loc_82563918;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r10,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r10.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82563918
	if (ctx.cr0.eq) goto loc_82563918;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82563928
	if (!ctx.cr6.gt) goto loc_82563928;
loc_82563918:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82584838
	ctx.lr = 0x82563924;
	sub_82584838(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82563928:
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mulli r11,r9,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r31.u32);
	// stw r28,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r28.u32);
	// stw r26,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r26.u32);
	// bl 0x82550110
	ctx.lr = 0x82563958;
	sub_82550110(ctx, base);
	// cmpwi cr6,r19,-1
	ctx.cr6.compare<int32_t>(r19.s32, -1, ctx.xer);
	// bne cr6,0x82563968
	if (!ctx.cr6.eq) goto loc_82563968;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// b 0x82563974
	goto loc_82563974;
loc_82563968:
	// cmpw cr6,r19,r3
	ctx.cr6.compare<int32_t>(r19.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x825637a4
	if (ctx.cr6.eq) goto loc_825637A4;
	// li r19,-2
	r19.s64 = -2;
loc_82563974:
	// stw r19,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r19.u32);
	// b 0x825637a4
	goto loc_825637A4;
loc_8256397C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x82563988;
	sub_824E4368(ctx, base);
loc_82563988:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// b 0x825639ac
	goto loc_825639AC;
loc_82563990:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82560648
	ctx.lr = 0x825639A0;
	sub_82560648(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82559b18
	ctx.lr = 0x825639A8;
	sub_82559B18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_825639AC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_82588EA0) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8255db50
	ctx.lr = 0x82588EC0;
	sub_8255DB50(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82588ef4
	if (ctx.cr0.eq) goto loc_82588EF4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82588ED4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82588ED8:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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
loc_82588EF4:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82588ed4
	if (ctx.cr0.eq) goto loc_82588ED4;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82588ed8
	goto loc_82588ED8;
}

DEFINE_REX_FUNC(sub_8258B4B0) {
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
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// rlwimi r11,r6,2,16,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0003);
	// rlwinm r11,r11,0,15,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82589840
	ctx.lr = 0x8258B4E0;
	sub_82589840(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8259C7F0) {
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
	ctx.lr = 0x8259C7F8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8259c894
	if (!ctx.cr6.gt) goto loc_8259C894;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f10,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,3716(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	ctx.f12.f64 = double(temp.f32);
loc_8259C828:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8259c888
	if (!ctx.cr6.gt) goto loc_8259C888;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_8259C83C:
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8259c858
	if (!ctx.cr6.lt) goto loc_8259C858;
	// stfsx f12,r11,r27
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + r27.u32, temp.u32);
	// b 0x8259c864
	goto loc_8259C864;
loc_8259C858:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x8259c864
	if (!ctx.cr6.gt) goto loc_8259C864;
	// stfsx f10,r11,r27
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + r27.u32, temp.u32);
loc_8259C864:
	// lfsx f0,r11,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8259c874
	if (!ctx.cr6.lt) goto loc_8259C874;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_8259C874:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x8259c880
	if (!ctx.cr6.gt) goto loc_8259C880;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_8259C880:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x8259c83c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8259C83C;
loc_8259C888:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8259c828
	if (ctx.cr6.lt) goto loc_8259C828;
loc_8259C894:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,20204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20204);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,3720(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fadds f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// fctiwz f0,f13
	ctx.f0.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// bne cr6,0x8259c904
	if (!ctx.cr6.eq) goto loc_8259C904;
	// fctiwz f0,f12
	ctx.f0.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r31,100(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x826a3cb0
	ctx.lr = 0x8259C8E4;
	sub_826A3CB0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x8259c900
	if (!ctx.cr6.gt) goto loc_8259C900;
	// li r11,255
	ctx.r11.s64 = 255;
loc_8259C900:
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
loc_8259C904:
	// bge cr6,0x8259c918
	if (!ctx.cr6.lt) goto loc_8259C918;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8259c934
	goto loc_8259C934;
loc_8259C918:
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// bne cr6,0x8259c934
	if (!ctx.cr6.eq) goto loc_8259C934;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// bge cr6,0x8259c930
	if (!ctx.cr6.lt) goto loc_8259C930;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8259c934
	goto loc_8259C934;
loc_8259C930:
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_8259C934:
	// clrlwi r5,r31,24
	ctx.r5.u64 = r31.u32 & 0xFF;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259c630
	ctx.lr = 0x8259C944;
	sub_8259C630(ctx, base);
	// li r30,0
	r30.s64 = 0;
loc_8259C948:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r31,0
	r31.s64 = 0;
	// add r29,r30,r11
	r29.u64 = r30.u64 + ctx.r11.u64;
loc_8259C954:
	// add r11,r30,r31
	ctx.r11.u64 = r30.u64 + r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8259c6b8
	ctx.lr = 0x8259C968;
	sub_8259C6B8(ctx, base);
	// stbx r3,r29,r31
	REX_STORE_U8(r29.u32 + r31.u32, ctx.r3.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// blt cr6,0x8259c954
	if (ctx.cr6.lt) goto loc_8259C954;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(r30.s32, 16, ctx.xer);
	// blt cr6,0x8259c948
	if (ctx.cr6.lt) goto loc_8259C948;
	// lbz r11,101(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 101);
	// lbz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 100);
	// rotlwi r7,r11,3
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// lbz r10,109(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 109);
	// lbz r9,98(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 98);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// or r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 | ctx.r4.u64;
	// lbz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 108);
	// lbz r29,103(r1)
	r29.u64 = REX_LOAD_U8(ctx.r1.u32 + 103);
	// rotlwi r5,r10,3
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// lbz r4,99(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 99);
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// lbz r8,106(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 106);
	// lbz r3,97(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 97);
	// rotlwi r31,r9,3
	r31.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// lbz r26,102(r1)
	r26.u64 = REX_LOAD_U8(ctx.r1.u32 + 102);
	// rotlwi r29,r29,3
	r29.u64 = __builtin_rotateleft32(r29.u32, 3);
	// lbz r5,111(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 111);
	// or r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 | ctx.r4.u64;
	// lbz r30,105(r1)
	r30.u64 = REX_LOAD_U8(ctx.r1.u32 + 105);
	// or r3,r31,r3
	ctx.r3.u64 = r31.u64 | ctx.r3.u64;
	// rotlwi r27,r8,3
	r27.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// lbz r31,110(r1)
	r31.u64 = REX_LOAD_U8(ctx.r1.u32 + 110);
	// or r4,r29,r26
	ctx.r4.u64 = r29.u64 | r26.u64;
	// lbz r25,107(r1)
	r25.u64 = REX_LOAD_U8(ctx.r1.u32 + 107);
	// rlwinm r6,r6,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r23,104(r1)
	r23.u64 = REX_LOAD_U8(ctx.r1.u32 + 104);
	// rotlwi r5,r5,3
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 3);
	// lbz r24,96(r1)
	r24.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// or r30,r27,r30
	r30.u64 = r27.u64 | r30.u64;
	// lhz r22,80(r1)
	r22.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// lhz r27,82(r1)
	r27.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// rlwinm r7,r7,1,24,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFE;
	// rlwinm r4,r4,2,24,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFC;
	// or r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 | r31.u64;
	// or r6,r6,r25
	ctx.r6.u64 = ctx.r6.u64 | r25.u64;
	// rlwinm r30,r30,3,0,28
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 | ctx.r11.u64;
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r9,2(r28)
	REX_STORE_U8(r28.u32 + 2, ctx.r9.u8);
	// rlwinm r6,r6,1,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFE;
	// stb r11,5(r28)
	REX_STORE_U8(r28.u32 + 5, ctx.r11.u8);
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r5,r5,2,24,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFC;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// or r31,r30,r23
	r31.u64 = r30.u64 | r23.u64;
	// or r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 | r24.u64;
	// rlwinm r30,r22,24,8,31
	r30.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 24) & 0xFFFFFF;
	// stb r31,4(r28)
	REX_STORE_U8(r28.u32 + 4, r31.u8);
	// rlwinm r29,r27,24,8,31
	r29.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 24) & 0xFFFFFF;
	// stb r3,3(r28)
	REX_STORE_U8(r28.u32 + 3, ctx.r3.u8);
	// or r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stb r30,1(r28)
	REX_STORE_U8(r28.u32 + 1, r30.u8);
	// or r11,r5,r10
	ctx.r11.u64 = ctx.r5.u64 | ctx.r10.u64;
	// stb r29,0(r28)
	REX_STORE_U8(r28.u32 + 0, r29.u8);
	// stb r9,7(r28)
	REX_STORE_U8(r28.u32 + 7, ctx.r9.u8);
	// stb r11,6(r28)
	REX_STORE_U8(r28.u32 + 6, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_825B30A8) {
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
	ctx.lr = 0x825B30B0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,22852
	r31.s64 = ctx.r11.s64 + 22852;
	// addi r29,r10,-8552
	r29.s64 = ctx.r10.s64 + -8552;
	// bne cr6,0x825b30f8
	if (!ctx.cr6.eq) goto loc_825B30F8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-5840
	ctx.r5.s64 = ctx.r11.s64 + -5840;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,16315
	ctx.r7.s64 = 16315;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B30F8;
	sub_824EA978(ctx, base);
loc_825B30F8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x825b311c
	if (!ctx.cr6.eq) goto loc_825B311C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-23044
	ctx.r5.s64 = ctx.r11.s64 + -23044;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,16316
	ctx.r7.s64 = 16316;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B311C;
	sub_824EA978(ctx, base);
loc_825B311C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r4,1760
	ctx.r4.s64 = 1760;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B3130;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1760
	ctx.r11.s64 = 1760;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r3,32
	ctx.r8.s64 = ctx.r3.s64 + 32;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_825B3148:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x825b3148
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825B3148;
	// li r10,1600
	ctx.r10.s64 = 1600;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// li r8,255
	ctx.r8.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825B3160:
	// stbu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x825b3160
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825B3160;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// li r4,23380
	ctx.r4.s64 = 23380;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r27,20(r31)
	REX_STORE_U32(r31.u32 + 20, r27.u32);
	// stw r28,16(r31)
	REX_STORE_U32(r31.u32 + 16, r28.u32);
	// stw r8,1656(r31)
	REX_STORE_U32(r31.u32 + 1656, ctx.r8.u32);
	// stw r9,1652(r31)
	REX_STORE_U32(r31.u32 + 1652, ctx.r9.u32);
	// stw r7,1668(r31)
	REX_STORE_U32(r31.u32 + 1668, ctx.r7.u32);
	// stw r9,1692(r31)
	REX_STORE_U32(r31.u32 + 1692, ctx.r9.u32);
	// stw r10,1672(r31)
	REX_STORE_U32(r31.u32 + 1672, ctx.r10.u32);
	// stw r9,1676(r31)
	REX_STORE_U32(r31.u32 + 1676, ctx.r9.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B31CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,12000
	ctx.r4.s64 = 12000;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B31E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b2d18
	ctx.lr = 0x825B31F8;
	sub_825B2D18(ctx, base);
	// rlwinm r4,r3,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b7108
	ctx.lr = 0x825B3208;
	sub_825B7108(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B321C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B3230;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B3244;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825B6B00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825B6B08;
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
	// addi r29,r10,-2432
	r29.s64 = ctx.r10.s64 + -2432;
	// bne cr6,0x825b6b48
	if (!ctx.cr6.eq) goto loc_825B6B48;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-9704
	ctx.r5.s64 = ctx.r11.s64 + -9704;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,604
	ctx.r7.s64 = 604;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B6B48;
	sub_824EA978(ctx, base);
loc_825B6B48:
	// cmplwi cr6,r28,6
	ctx.cr6.compare<uint32_t>(r28.u32, 6, ctx.xer);
	// blt cr6,0x825b6b6c
	if (ctx.cr6.lt) goto loc_825B6B6C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-2208
	ctx.r5.s64 = ctx.r11.s64 + -2208;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,606
	ctx.r7.s64 = 606;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B6B6C;
	sub_824EA978(ctx, base);
loc_825B6B6C:
	// addi r11,r28,6
	ctx.r11.s64 = r28.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825B7E00) {
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
	ctx.lr = 0x825B7E08;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// bl 0x8257ecd0
	ctx.lr = 0x825B7E20;
	sub_8257ECD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,24(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8269cd20
	ctx.lr = 0x825B7E34;
	sub_8269CD20(ctx, base);
	// add r26,r31,r28
	r26.u64 = r31.u64 + r28.u64;
	// li r27,0
	r27.s64 = 0;
	// li r4,95
	ctx.r4.s64 = 95;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r27,-1(r26)
	REX_STORE_U8(r26.u32 + -1, r27.u8);
	// bl 0x826a4a30
	ctx.lr = 0x825B7E4C;
	sub_826A4A30(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x825b7e88
	if (ctx.cr0.eq) goto loc_825B7E88;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,25920
	ctx.r4.s64 = ctx.r11.s64 + 25920;
	// bl 0x826a4a90
	ctx.lr = 0x825B7E64;
	sub_826A4A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825b7e84
	if (ctx.cr0.eq) goto loc_825B7E84;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-18396
	ctx.r4.s64 = ctx.r11.s64 + -18396;
	// bl 0x826a4a90
	ctx.lr = 0x825B7E7C;
	sub_826A4A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825b7e88
	if (!ctx.cr0.eq) goto loc_825B7E88;
loc_825B7E84:
	// stb r27,0(r30)
	REX_STORE_U8(r30.u32 + 0, r27.u8);
loc_825B7E88:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_825B7E8C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825b7e8c
	if (!ctx.cr6.eq) goto loc_825B7E8C;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r30,r11,r31
	r30.u64 = ctx.r11.u64 + r31.u64;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// ble cr6,0x825b7ed8
	if (!ctx.cr6.gt) goto loc_825B7ED8;
loc_825B7EB4:
	// lbz r11,-1(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + -1);
	// addi r29,r30,-1
	r29.s64 = r30.s64 + -1;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x826a0820
	ctx.lr = 0x825B7EC4;
	sub_826A0820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825b7ed8
	if (ctx.cr0.eq) goto loc_825B7ED8;
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(r29.u32, r31.u32, ctx.xer);
	// bgt cr6,0x825b7eb4
	if (ctx.cr6.gt) goto loc_825B7EB4;
loc_825B7ED8:
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a5840
	ctx.lr = 0x825B7EE8;
	sub_826A5840(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r6,r3,r25
	ctx.r6.u64 = ctx.r3.u64 + r25.u64;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825b7f20
	if (!ctx.cr0.eq) goto loc_825B7F20;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x825b7f20
	if (ctx.cr6.eq) goto loc_825B7F20;
	// subf r11,r30,r31
	ctx.r11.u64 = r31.u64 - r30.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + r28.u64;
	// addi r5,r10,17704
	ctx.r5.s64 = ctx.r10.s64 + 17704;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1a58
	ctx.lr = 0x825B7F1C;
	sub_826A1A58(ctx, base);
	// stb r27,-1(r26)
	REX_STORE_U8(r26.u32 + -1, r27.u8);
loc_825B7F20:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_825BD240) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825BD248;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,62
	ctx.r6.s64 = 62;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x825bb860
	ctx.lr = 0x825BD26C;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bd290
	if (ctx.cr6.eq) goto loc_825BD290;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x825BD28C;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_825BD290:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825BD298;
	sub_8250AD28(ctx, base);
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r3,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// addi r10,r31,24
	ctx.r10.s64 = r31.s64 + 24;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r10,r10,-36
	ctx.r10.s64 = ctx.r10.s64 + -36;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// ori r7,r10,1
	ctx.r7.u64 = ctx.r10.u64 | 1;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825C1B38) {
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
	ctx.lr = 0x825C1B40;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r25,r6,4
	r25.s64 = ctx.r6.s64 + 4;
	// li r30,0
	r30.s64 = 0;
loc_825C1B5C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825c1bc4
	if (ctx.cr6.eq) goto loc_825C1BC4;
	// lwz r11,16(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825c1bbc
	if (ctx.cr6.eq) goto loc_825C1BBC;
	// lwz r7,0(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r8,r7,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x825c1bbc
	if (ctx.cr0.eq) goto loc_825C1BBC;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x825c1bb8
	if (ctx.cr6.eq) goto loc_825C1BB8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_825C1B90:
	// rlwinm r4,r7,27,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// srw r4,r4,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r4,r4,30
	ctx.r4.u64 = ctx.r4.u32 & 0x3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r4,r3,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r4.u8 & 0x3F));
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x825c1b90
	if (ctx.cr6.lt) goto loc_825C1B90;
loc_825C1BB8:
	// or r30,r9,r30
	r30.u64 = ctx.r9.u64 | r30.u64;
loc_825C1BBC:
	// lwz r5,8(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// b 0x825c1b5c
	goto loc_825C1B5C;
loc_825C1BC4:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ab60
	ctx.lr = 0x825C1BD0;
	sub_8250AB60(ctx, base);
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r10,r10,36262
	ctx.r10.u64 = ctx.r10.u64 | 36262;
	// clrldi r9,r30,32
	ctx.r9.u64 = r30.u64 & 0xFFFFFFFF;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwimi r8,r11,25,4,6
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xE000000) | (ctx.r8.u64 & 0xFFFFFFFFF1FFFFFF);
	// li r29,0
	r29.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825c1c68
	if (ctx.cr6.eq) goto loc_825C1C68;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
loc_825C1C24:
	// addi r8,r30,-1
	ctx.r8.s64 = r30.s64 + -1;
	// slw r6,r7,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// andc r8,r30,r8
	ctx.r8.u64 = r30.u64 & ~ctx.r8.u64;
	// andc r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r6.u64;
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// subf. r30,r8,r30
	r30.u64 = r30.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// subfic r8,r6,31
	ctx.xer.ca = ctx.r6.u32 <= 31;
	ctx.r8.u64 = static_cast<uint64_t>(31) - ctx.r6.u64;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// slw r5,r7,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// slw r6,r9,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// andc r5,r29,r5
	ctx.r5.u64 = r29.u64 & ~ctx.r5.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// or r29,r5,r6
	r29.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x825c1c24
	if (!ctx.cr0.eq) goto loc_825C1C24;
loc_825C1C68:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwimi r11,r10,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825c0b40
	ctx.lr = 0x825C1C88;
	sub_825C0B40(ctx, base);
	// lwz r27,12(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r30,r27,4
	r30.s64 = r27.s64 + 4;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// b 0x825c1ca4
	goto loc_825C1CA4;
loc_825C1C9C:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_825C1CA4:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x825c1c9c
	if (!ctx.cr6.eq) goto loc_825C1C9C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x824f7a20
	ctx.lr = 0x825C1CC8;
	sub_824F7A20(ctx, base);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
loc_825C1CCC:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825c1d84
	if (ctx.cr6.eq) goto loc_825C1D84;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825c1d70
	if (ctx.cr6.eq) goto loc_825C1D70;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r7,r10,0,4,6
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x825c1d70
	if (ctx.cr0.eq) goto loc_825C1D70;
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r27.u32, ctx.xer);
	// beq cr6,0x825c1d70
	if (ctx.cr6.eq) goto loc_825C1D70;
	// rlwinm r7,r10,22,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r6,r10,24,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// srw r7,r29,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r7.u8 & 0x3F));
	// srw r6,r29,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwimi r6,r7,2,28,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xC) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r5,r10,26,29,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// rlwinm r7,r10,28,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// clrlwi r6,r6,28
	ctx.r6.u64 = ctx.r6.u32 & 0xF;
	// srw r5,r29,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r5.u8 & 0x3F));
	// srw r7,r29,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r5,r6,2,0,29
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r5.u64 & 0xFFFFFFFF00000003);
	// rlwinm r6,r10,0,27,18
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwimi r7,r5,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// rlwinm r7,r7,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x825c1d50
	goto loc_825C1D50;
loc_825C1D48:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_825C1D50:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825c1d48
	if (!ctx.cr6.eq) goto loc_825C1D48;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stw r27,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r27.u32);
loc_825C1D70:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825c1ccc
	if (!ctx.cr6.eq) goto loc_825C1CCC;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x825c1ccc
	goto loc_825C1CCC;
loc_825C1D84:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_825CF4B8) {
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
	ctx.lr = 0x825CF4C0;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r8,100(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r9
	r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r28,r11,r30
	r28.u64 = ctx.r11.u64 + r30.u64;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// bge cr6,0x825cf538
	if (!ctx.cr6.lt) goto loc_825CF538;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f31.f64 = double(temp.f32);
loc_825CF508:
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823fbbb8
	ctx.lr = 0x825CF520;
	sub_823FBBB8(ctx, base);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// stfs f31,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 12, temp.u32);
	// stfs f31,8(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// blt cr6,0x825cf508
	if (ctx.cr6.lt) goto loc_825CF508;
loc_825CF538:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cf558
	if (ctx.cr6.eq) goto loc_825CF558;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r29
	ctx.r4.u64 = r29.u64 - ctx.r11.u64;
	// bl 0x825c73b8
	ctx.lr = 0x825CF558;
	sub_825C73B8(ctx, base);
loc_825CF558:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cf578
	if (ctx.cr6.eq) goto loc_825CF578;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r29
	ctx.r4.u64 = r29.u64 - ctx.r11.u64;
	// bl 0x825c7788
	ctx.lr = 0x825CF578;
	sub_825C7788(ctx, base);
loc_825CF578:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825D2088) {
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
	ctx.lr = 0x825D2090;
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
	// bne cr6,0x825d20cc
	if (!ctx.cr6.eq) goto loc_825D20CC;
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
	// li r7,1097
	ctx.r7.s64 = 1097;
	// bl 0x824ea978
	ctx.lr = 0x825D20CC;
	sub_824EA978(ctx, base);
loc_825D20CC:
	// li r4,163
	ctx.r4.s64 = 163;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825D20D8;
	sub_824F02C0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825D20E8;
	sub_824F02C0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d2154
	if (ctx.cr6.eq) goto loc_825D2154;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d2154
	if (ctx.cr6.eq) goto loc_825D2154;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825d2114
	if (ctx.cr6.eq) goto loc_825D2114;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D2114;
	sub_824F0950(ctx, base);
loc_825D2114:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d214c
	if (ctx.cr6.eq) goto loc_825D214C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d214c
	if (ctx.cr6.eq) goto loc_825D214C;
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
	// li r6,15
	ctx.r6.s64 = 15;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,60(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bctrl 
	ctx.lr = 0x825D214C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D214C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d21ac
	goto loc_825D21AC;
loc_825D2154:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825d2170
	if (ctx.cr6.eq) goto loc_825D2170;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D2170;
	sub_824F0950(ctx, base);
loc_825D2170:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d21a8
	if (ctx.cr6.eq) goto loc_825D21A8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d21a8
	if (ctx.cr6.eq) goto loc_825D21A8;
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
	// li r6,15
	ctx.r6.s64 = 15;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,60(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bctrl 
	ctx.lr = 0x825D21A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D21A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D21AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825D58E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-6768(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6768);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825D5EA8) {
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
	ctx.lr = 0x825D5EB0;
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
	// bne cr6,0x825d5ef0
	if (!ctx.cr6.eq) goto loc_825D5EF0;
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
	// li r7,4363
	ctx.r7.s64 = 4363;
	// bl 0x824ea978
	ctx.lr = 0x825D5EF0;
	sub_824EA978(ctx, base);
loc_825D5EF0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,89
	ctx.r4.s64 = 89;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825D5F00;
	sub_824F05F0(ctx, base);
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// rlwimi r11,r3,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// beq cr6,0x825d5f54
	if (ctx.cr6.eq) goto loc_825D5F54;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d5f54
	if (ctx.cr6.eq) goto loc_825D5F54;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825d1a98
	ctx.lr = 0x825D5F28;
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
	// li r6,62
	ctx.r6.s64 = 62;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,248(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// bctrl 
	ctx.lr = 0x825D5F54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D5F54:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825DCB10) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c90
	ctx.lr = 0x825DCB18;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825d8158
	ctx.lr = 0x825DCB24;
	sub_825D8158(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r11,1508(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r5,1508(r10)
	REX_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// bl 0x825e7538
	ctx.lr = 0x825DCB44;
	sub_825E7538(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,1508(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1508);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r5,1508(r10)
	REX_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// bl 0x825e7538
	ctx.lr = 0x825DCB64;
	sub_825E7538(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 168);
	// bl 0x825fd0a0
	ctx.lr = 0x825DCB70;
	sub_825FD0A0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r22,r11,22852
	r22.s64 = ctx.r11.s64 + 22852;
	// addi r21,r10,9792
	r21.s64 = ctx.r10.s64 + 9792;
	// beq cr6,0x825dcba4
	if (ctx.cr6.eq) goto loc_825DCBA4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r11,10276
	ctx.r5.s64 = ctx.r11.s64 + 10276;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,1765
	ctx.r7.s64 = 1765;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DCBA4;
	sub_824EA978(ctx, base);
loc_825DCBA4:
	// lwz r18,168(r31)
	r18.u64 = REX_LOAD_U32(r31.u32 + 168);
	// li r24,1
	r24.s64 = 1;
	// lwz r19,80(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// lwz r10,60(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 60);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_825DCBC4:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x825dcbd4
	if (!ctx.cr6.gt) goto loc_825DCBD4;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x825dcbe0
	goto loc_825DCBE0;
loc_825DCBD4:
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_825DCBE0:
	// clrlwi. r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x825dcbf8
	if (ctx.cr0.eq) goto loc_825DCBF8;
	// mr r19,r9
	r19.u64 = ctx.r9.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x825dcbc4
	goto loc_825DCBC4;
loc_825DCBF8:
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825DCC04;
	sub_825F9AD0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825DCC14;
	sub_825F9F38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stb r24,164(r30)
	REX_STORE_U8(r30.u32 + 164, r24.u8);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,9740(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 9740);
	// stw r11,128(r30)
	REX_STORE_U32(r30.u32 + 128, ctx.r11.u32);
	// bl 0x825f9f38
	ctx.lr = 0x825DCC34;
	sub_825F9F38(ctx, base);
	// li r29,0
	r29.s64 = 0;
loc_825DCC38:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DCC58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// blt cr6,0x825dcc38
	if (ctx.cr6.lt) goto loc_825DCC38;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825DCC70;
	sub_825D82D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825fcb18
	ctx.lr = 0x825DCC7C;
	sub_825FCB18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825DCC84;
	sub_825F9B60(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r25,r11,10600
	r25.s64 = ctx.r11.s64 + 10600;
	// bne 0x825dccac
	if (!ctx.cr0.eq) goto loc_825DCCAC;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,1783
	ctx.r7.s64 = 1783;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DCCAC;
	sub_824EA978(ctx, base);
loc_825DCCAC:
	// li r3,135
	ctx.r3.s64 = 135;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825DCCB8;
	sub_825F9AD0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825DCCC8;
	sub_825F9F38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,164
	ctx.r4.s64 = 164;
	// stw r11,168(r30)
	REX_STORE_U32(r30.u32 + 168, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r29,1452(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825DCCE4;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// beq 0x825dcd10
	if (ctx.cr0.eq) goto loc_825DCD10;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825fdb60
	ctx.lr = 0x825DCD08;
	sub_825FDB60(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x825dcd14
	goto loc_825DCD14;
loc_825DCD10:
	// li r27,0
	r27.s64 = 0;
loc_825DCD14:
	// li r29,0
	r29.s64 = 0;
loc_825DCD18:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DCD38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// blt cr6,0x825dcd18
	if (ctx.cr6.lt) goto loc_825DCD18;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825DCD50;
	sub_825D82D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825DCD58;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825dcd7c
	if (!ctx.cr0.eq) goto loc_825DCD7C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r11,10672
	ctx.r5.s64 = ctx.r11.s64 + 10672;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,1794
	ctx.r7.s64 = 1794;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DCD7C;
	sub_824EA978(ctx, base);
loc_825DCD7C:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r28,144(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 144);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825DCD8C;
	sub_825F9AD0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825DCD9C;
	sub_825F9F38(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DCDBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DCDDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DCDFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DCE1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r24,159(r30)
	REX_STORE_U8(r30.u32 + 159, r24.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825f9f38
	ctx.lr = 0x825DCE30;
	sub_825F9F38(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DCE50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DCE70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825DCE7C;
	sub_825D82D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825fcb18
	ctx.lr = 0x825DCE88;
	sub_825FCB18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825DCE90;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825dceb0
	if (!ctx.cr0.eq) goto loc_825DCEB0;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,1810
	ctx.r7.s64 = 1810;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DCEB0;
	sub_824EA978(ctx, base);
loc_825DCEB0:
	// li r3,105
	ctx.r3.s64 = 105;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825DCEBC;
	sub_825F9AD0(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825DCECC;
	sub_825F9F38(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DCEEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DCF0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DCF2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DCF4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825f9f38
	ctx.lr = 0x825DCF5C;
	sub_825F9F38(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825b3338
	ctx.lr = 0x825DCF64;
	sub_825B3338(ctx, base);
	// stw r3,172(r30)
	REX_STORE_U32(r30.u32 + 172, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825DCF74;
	sub_825D82D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825fcb18
	ctx.lr = 0x825DCF80;
	sub_825FCB18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825DCF88;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825dcfa8
	if (!ctx.cr0.eq) goto loc_825DCFA8;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,1825
	ctx.r7.s64 = 1825;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DCFA8;
	sub_824EA978(ctx, base);
loc_825DCFA8:
	// li r3,78
	ctx.r3.s64 = 78;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825DCFB4;
	sub_825F9AD0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,31
	ctx.r10.s64 = 31;
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// stw r10,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825DCFD4;
	sub_825F9F38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825DCFE0;
	sub_825D82D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825fcb18
	ctx.lr = 0x825DCFEC;
	sub_825FCB18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825DCFF4;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825dd014
	if (!ctx.cr0.eq) goto loc_825DD014;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,1833
	ctx.r7.s64 = 1833;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DD014;
	sub_824EA978(ctx, base);
loc_825DD014:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r29,32(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x825f9ad0
	ctx.lr = 0x825DD028;
	sub_825F9AD0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825DD038;
	sub_825F9F38(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DD058;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DD078;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DD098;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DD0B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825f9f38
	ctx.lr = 0x825DD0C8;
	sub_825F9F38(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825DD0D8;
	sub_825F9F38(ctx, base);
	// li r29,0
	r29.s64 = 0;
loc_825DD0DC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DD0FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DD11C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// blt cr6,0x825dd0dc
	if (ctx.cr6.lt) goto loc_825DD0DC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825DD134;
	sub_825D82D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825fcb18
	ctx.lr = 0x825DD140;
	sub_825FCB18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825DD148;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825dd168
	if (!ctx.cr0.eq) goto loc_825DD168;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,1856
	ctx.r7.s64 = 1856;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DD168;
	sub_824EA978(ctx, base);
loc_825DD168:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r30,1452(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825DD17C;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// beq 0x825dd19c
	if (ctx.cr0.eq) goto loc_825DD19C;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825fcd38
	ctx.lr = 0x825DD194;
	sub_825FCD38(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x825dd1a0
	goto loc_825DD1A0;
loc_825DD19C:
	// li r30,0
	r30.s64 = 0;
loc_825DD1A0:
	// stw r30,148(r27)
	REX_STORE_U32(r27.u32 + 148, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825fd4b8
	ctx.lr = 0x825DD1B0;
	sub_825FD4B8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r29,152(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 152);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825fd4b8
	ctx.lr = 0x825DD1C0;
	sub_825FD4B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825fd4b8
	ctx.lr = 0x825DD1CC;
	sub_825FD4B8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825fd9e8
	ctx.lr = 0x825DD1E0;
	sub_825FD9E8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7940
	ctx.lr = 0x825DD1F0;
	sub_825D7940(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7940
	ctx.lr = 0x825DD200;
	sub_825D7940(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7940
	ctx.lr = 0x825DD210;
	sub_825D7940(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7940
	ctx.lr = 0x825DD220;
	sub_825D7940(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_82607FC0) {
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
	ctx.lr = 0x82607FC8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,4(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82607ff8
	if (!ctx.cr6.lt) goto loc_82607FF8;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82608000
	goto loc_82608000;
loc_82607FF8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825f7718
	ctx.lr = 0x82608000;
	sub_825F7718(ctx, base);
loc_82608000:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lwz r22,0(r3)
	r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82608020
	if (!ctx.cr6.eq) goto loc_82608020;
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// stw r11,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r11.u32);
	// b 0x82608038
	goto loc_82608038;
loc_8260801C:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82608020:
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8260801c
	if (!ctx.cr6.eq) goto loc_8260801C;
	// lwz r10,8(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82608038:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82607be8
	ctx.lr = 0x82608048;
	sub_82607BE8(ctx, base);
	// lwz r3,4(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82608068
	if (!ctx.cr6.lt) goto loc_82608068;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82608070
	goto loc_82608070;
loc_82608068:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825f7718
	ctx.lr = 0x82608070;
	sub_825F7718(ctx, base);
loc_82608070:
	// lwz r27,0(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r23,0
	r23.s64 = 0;
	// li r30,-1
	r30.s64 = -1;
	// mr r25,r23
	r25.u64 = r23.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r29,8(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82608124
	if (!ctx.cr6.gt) goto loc_82608124;
	// lis r28,-32120
	r28.s64 = -2105016320;
loc_82608094:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(r30.s32, 7, ctx.xer);
	// bne cr6,0x826080a8
	if (!ctx.cr6.eq) goto loc_826080A8;
	// lwz r29,28(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 28);
	// mr r30,r23
	r30.u64 = r23.u64;
loc_826080A8:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r11,20556(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20556);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r29
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwzx r4,r9,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x82607e70
	ctx.lr = 0x826080CC;
	sub_82607E70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82608114
	if (!ctx.cr0.eq) goto loc_82608114;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r6,8(r24)
	ctx.r6.u64 = REX_LOAD_U32(r24.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82607d78
	ctx.lr = 0x826080E8;
	sub_82607D78(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stwx r31,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r31.u32);
	// lwz r11,20556(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20556);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82607ec0
	ctx.lr = 0x82608114;
	sub_82607EC0(ctx, base);
loc_82608114:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82608094
	if (ctx.cr6.lt) goto loc_82608094;
loc_82608124:
	// stw r23,4(r22)
	REX_STORE_U32(r22.u32 + 4, r23.u32);
	// stw r23,8(r22)
	REX_STORE_U32(r22.u32 + 8, r23.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8260FC70) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8260fba0
	sub_8260FBA0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8260FD68) {
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
	ctx.lr = 0x8260FD70;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8260fd98
	if (!ctx.cr6.eq) goto loc_8260FD98;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// addi r31,r11,584
	r31.s64 = ctx.r11.s64 + 584;
loc_8260FD98:
	// rlwinm. r11,r28,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8260fda4
	if (ctx.cr0.eq) goto loc_8260FDA4;
	// ori r28,r28,2
	r28.u64 = r28.u64 | 2;
loc_8260FDA4:
	// stfs f1,200(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 200, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826151f0
	ctx.lr = 0x8260FDB4;
	sub_826151F0(ctx, base);
	// stw r3,208(r30)
	REX_STORE_U32(r30.u32 + 208, ctx.r3.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r11,212(r30)
	REX_STORE_U32(r30.u32 + 212, ctx.r11.u32);
	// bl 0x82615020
	ctx.lr = 0x8260FDC8;
	sub_82615020(ctx, base);
	// sth r3,216(r30)
	REX_STORE_U16(r30.u32 + 216, ctx.r3.u16);
	// lhz r11,12(r23)
	ctx.r11.u64 = REX_LOAD_U16(r23.u32 + 12);
	// stw r11,204(r30)
	REX_STORE_U32(r30.u32 + 204, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8260fde8
	if (!ctx.cr6.eq) goto loc_8260FDE8;
	// lwz r27,68(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 68);
	// b 0x8260fdf4
	goto loc_8260FDF4;
loc_8260FDE8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,68(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
loc_8260FDF4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x8260fe24
	if (!ctx.cr6.eq) goto loc_8260FE24;
	// lwz r27,212(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 212);
	// li r11,375
	ctx.r11.s64 = 375;
	// divwu r11,r27,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? r27.u32 / ctx.r11.u32 : 0);
	// mulli r11,r11,375
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(375));
	// subf. r11,r11,r27
	ctx.r11.u64 = r27.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8260fe24
	if (ctx.cr0.eq) goto loc_8260FE24;
	// subf r27,r11,r27
	r27.u64 = r27.u64 - ctx.r11.u64;
	// cmplwi cr6,r27,32000
	ctx.cr6.compare<uint32_t>(r27.u32, 32000, ctx.xer);
	// bge cr6,0x8260fe24
	if (!ctx.cr6.lt) goto loc_8260FE24;
	// addi r27,r27,375
	r27.s64 = r27.s64 + 375;
loc_8260FE24:
	// lhz r11,2(r23)
	ctx.r11.u64 = REX_LOAD_U16(r23.u32 + 2);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// stw r27,72(r30)
	REX_STORE_U32(r30.u32 + 72, r27.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// stw r27,68(r30)
	REX_STORE_U32(r30.u32 + 68, r27.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,64(r30)
	REX_STORE_U32(r30.u32 + 64, ctx.r11.u32);
	// bl 0x8261d368
	ctx.lr = 0x8260FE4C;
	sub_8261D368(ctx, base);
	// li r25,0
	r25.s64 = 0;
	// lis r11,4919
	ctx.r11.s64 = 322371584;
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r25,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// ori r22,r11,61441
	r22.u64 = ctx.r11.u64 | 61441;
	// blt 0x82610088
	if (ctx.cr0.lt) goto loc_82610088;
	// lhz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U16(r23.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8260fe80
	if (!ctx.cr6.eq) goto loc_8260FE80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8260e728
	ctx.lr = 0x8260FE7C;
	sub_8260E728(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8260FE80:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x82610088
	if (ctx.cr6.lt) goto loc_82610088;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm. r24,r28,0,30,30
	r24.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// li r28,1
	r28.s64 = 1;
	// addi r26,r11,-15776
	r26.s64 = ctx.r11.s64 + -15776;
	// beq 0x8260fea8
	if (ctx.cr0.eq) goto loc_8260FEA8;
	// lwz r11,212(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 212);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// beq cr6,0x8260ff38
	if (ctx.cr6.eq) goto loc_8260FF38;
loc_8260FEA8:
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8260e4e8
	ctx.lr = 0x8260FEB0;
	sub_8260E4E8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82610088
	if (ctx.cr0.lt) goto loc_82610088;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// lfs f0,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bne cr6,0x8260fee4
	if (!ctx.cr6.eq) goto loc_8260FEE4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,200(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,8304(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8304);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_8260FEE4:
	// stw r25,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r25.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260FF04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260FF20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260FF34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,220(r30)
	REX_STORE_U32(r30.u32 + 220, r28.u32);
loc_8260FF38:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8260ffc0
	if (!ctx.cr6.eq) goto loc_8260FFC0;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8260ffc0
	if (!ctx.cr6.eq) goto loc_8260FFC0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8260e698
	ctx.lr = 0x8260FF58;
	sub_8260E698(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82610088
	if (ctx.cr0.lt) goto loc_82610088;
	// stw r28,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r28,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// stw r25,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r25.u32);
	// stw r25,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r25.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260FF8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,108(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260FFA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,108(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260FFBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,224(r30)
	REX_STORE_U32(r30.u32 + 224, r28.u32);
loc_8260FFC0:
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// addi r4,r30,144
	ctx.r4.s64 = r30.s64 + 144;
	// lwz r9,120(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 120);
	// addi r10,r30,140
	ctx.r10.s64 = r30.s64 + 140;
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,176(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82610004;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82610088
	if (ctx.cr0.eq) goto loc_82610088;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82610088
	if (ctx.cr6.eq) goto loc_82610088;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16385
	ctx.r11.u64 = ctx.r11.u64 | 16385;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82610088
	if (ctx.cr6.eq) goto loc_82610088;
	// srawi r11,r31,16
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = r31.s32 >> 16;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmpwi cr6,r11,2198
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2198, ctx.xer);
	// beq cr6,0x82610088
	if (ctx.cr6.eq) goto loc_82610088;
	// lis r11,-30600
	ctx.r11.s64 = -2005401600;
	// ori r11,r11,120
	ctx.r11.u64 = ctx.r11.u64 | 120;
	// subf. r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82610080
	if (ctx.cr0.eq) goto loc_82610080;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x82610080
	if (ctx.cr6.eq) goto loc_82610080;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// ori r10,r10,65417
	ctx.r10.u64 = ctx.r10.u64 | 65417;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82610080
	if (ctx.cr6.eq) goto loc_82610080;
	// lis r10,30
	ctx.r10.s64 = 1966080;
	// ori r10,r10,65417
	ctx.r10.u64 = ctx.r10.u64 | 65417;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82610088
	if (!ctx.cr6.eq) goto loc_82610088;
	// lis r31,-30570
	r31.s64 = -2003435520;
	// ori r31,r31,3
	r31.u64 = r31.u64 | 3;
	// b 0x82610088
	goto loc_82610088;
loc_82610080:
	// lis r31,-30570
	r31.s64 = -2003435520;
	// ori r31,r31,4
	r31.u64 = r31.u64 | 4;
loc_82610088:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8260adc0
	ctx.lr = 0x82610090;
	sub_8260ADC0(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8260adc0
	ctx.lr = 0x82610098;
	sub_8260ADC0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x82610108
	if (ctx.cr6.lt) goto loc_82610108;
	// lwz r11,224(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826100cc
	if (ctx.cr6.eq) goto loc_826100CC;
	// lwz r3,144(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 144);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826100C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_826100CC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x82610108
	if (ctx.cr6.lt) goto loc_82610108;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,176(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826100F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82610108
	if (ctx.cr0.lt) goto loc_82610108;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r30,188
	ctx.r3.s64 = r30.s64 + 188;
	// bl 0x82612560
	ctx.lr = 0x82610104;
	sub_82612560(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82610108:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82629BD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r9,2(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x82629bf4
	if (ctx.cr6.eq) goto loc_82629BF4;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
loc_82629BF4:
	// lhz r9,14(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lhz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r8,r8,-32
	ctx.r8.s64 = ctx.r8.s64 + -32;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// subfe r9,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lhz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x82629c38
	if (ctx.cr6.eq) goto loc_82629C38;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82629c90
	goto loc_82629C90;
loc_82629C38:
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r8,r8,2736
	ctx.r8.s64 = ctx.r8.s64 + 2736;
loc_82629C50:
	// addi r6,r8,16
	ctx.r6.s64 = ctx.r8.s64 + 16;
	// lhz r7,-2(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// lhzx r5,r9,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// lhz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// subf r7,r7,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r7.u64;
	// lhzx r6,r9,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r6.u32);
	// addic r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// subf r6,r4,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r4.u64;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// and r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 & ctx.r3.u64;
	// subfe r6,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 & ctx.r7.u64;
	// bdnz 0x82629c50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82629C50;
loc_82629C90:
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// mulli r8,r10,7
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(7));
	// lhz r7,18(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// subf r11,r8,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r8.u64;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// divw r11,r11,r10
	ctx.r11.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r7.u64;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82637310) {
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
	ctx.lr = 0x82637318;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826fad48
	ctx.lr = 0x82637324;
	sub_826FAD48(ctx, base);
	// addi r30,r31,24
	r30.s64 = r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826fadf0
	ctx.lr = 0x82637330;
	sub_826FADF0(ctx, base);
	// addi r29,r31,44
	r29.s64 = r31.s64 + 44;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826fadf0
	ctx.lr = 0x8263733C;
	sub_826FADF0(ctx, base);
	// addi r28,r31,64
	r28.s64 = r31.s64 + 64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826fadf0
	ctx.lr = 0x82637348;
	sub_826FADF0(ctx, base);
	// addi r27,r31,84
	r27.s64 = r31.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826fadf0
	ctx.lr = 0x82637354;
	sub_826FADF0(ctx, base);
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263736c
	if (ctx.cr6.eq) goto loc_8263736C;
	// bl 0x82634e78
	ctx.lr = 0x82637368;
	sub_82634E78(ctx, base);
	// stw r26,148(r31)
	REX_STORE_U32(r31.u32 + 148, r26.u32);
loc_8263736C:
	// lwz r3,160(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82637380
	if (ctx.cr6.eq) goto loc_82637380;
	// bl 0x82634e78
	ctx.lr = 0x8263737C;
	sub_82634E78(ctx, base);
	// stw r26,160(r31)
	REX_STORE_U32(r31.u32 + 160, r26.u32);
loc_82637380:
	// li r5,168
	ctx.r5.s64 = 168;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82637390;
	sub_826A2E60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fad28
	ctx.lr = 0x82637398;
	sub_826FAD28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826fadd0
	ctx.lr = 0x826373A0;
	sub_826FADD0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826fadd0
	ctx.lr = 0x826373A8;
	sub_826FADD0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826fadd0
	ctx.lr = 0x826373B0;
	sub_826FADD0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826fadd0
	ctx.lr = 0x826373B8;
	sub_826FADD0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82639020) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,224
	ctx.r3.s64 = ctx.r3.s64 + 224;
	// bl 0x82638d80
	ctx.lr = 0x82639044;
	sub_82638D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82639054
	if (ctx.cr6.lt) goto loc_82639054;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// sth r11,16(r31)
	REX_STORE_U16(r31.u32 + 16, ctx.r11.u16);
loc_82639054:
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

DEFINE_REX_FUNC(sub_8263C148) {
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
	ctx.lr = 0x8263C150;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,584(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 584);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r11,320(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 320);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// lwz r9,460(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 460);
	// mulli r10,r6,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lhz r11,118(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 118);
	// extsh r28,r11
	r28.s64 = ctx.r11.s16;
	// beq cr6,0x8263c198
	if (ctx.cr6.eq) goto loc_8263C198;
	// lwz r30,328(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 328);
	// b 0x8263c19c
	goto loc_8263C19C;
loc_8263C198:
	// lwz r30,56(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
loc_8263C19C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8263c1ac
	if (ctx.cr6.eq) goto loc_8263C1AC;
	// lwz r31,328(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 328);
	// b 0x8263c1b0
	goto loc_8263C1B0;
loc_8263C1AC:
	// lwz r31,144(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 144);
loc_8263C1B0:
	// lwz r11,204(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263c31c
	if (!ctx.cr6.eq) goto loc_8263C31C;
	// lwz r11,140(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8263c1f4
	if (!ctx.cr6.eq) goto loc_8263C1F4;
	// lwz r11,148(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 148);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8263c1f4
	if (ctx.cr6.eq) goto loc_8263C1F4;
	// lwz r11,156(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 156);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8263c1f4
	if (ctx.cr6.eq) goto loc_8263C1F4;
	// lwz r11,20(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263c200
	if (ctx.cr6.eq) goto loc_8263C200;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8263c240
	goto loc_8263C240;
loc_8263C1F4:
	// lwz r11,192(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263c210
	if (!ctx.cr6.eq) goto loc_8263C210;
loc_8263C200:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
loc_8263C210:
	// lwz r11,120(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 120);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bne cr6,0x8263c234
	if (!ctx.cr6.eq) goto loc_8263C234;
	// bl 0x8263c068
	ctx.lr = 0x8263C230;
	sub_8263C068(ctx, base);
	// b 0x8263c238
	goto loc_8263C238;
loc_8263C234:
	// bl 0x8263c0d0
	ctx.lr = 0x8263C238;
	sub_8263C0D0(ctx, base);
loc_8263C238:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263c3f0
	if (ctx.cr6.lt) goto loc_8263C3F0;
loc_8263C240:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(r28.s32, 4, ctx.xer);
	// blt cr6,0x8263c2dc
	if (ctx.cr6.lt) goto loc_8263C2DC;
	// addi r7,r28,-3
	ctx.r7.s64 = r28.s64 + -3;
	// addi r10,r30,-4
	ctx.r10.s64 = r30.s64 + -4;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// subf r6,r31,r30
	ctx.r6.u64 = r30.u64 - r31.u64;
loc_8263C25C:
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,-4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lwzx r4,r6,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// extsw r8,r4
	ctx.r8.s64 = ctx.r4.s32;
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfd f8,96(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwzu r8,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f5,104(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x8263c25c
	if (ctx.cr6.lt) goto loc_8263C25C;
loc_8263C2DC:
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r28.s32, ctx.xer);
	// bge cr6,0x8263c31c
	if (!ctx.cr6.lt) goto loc_8263C31C;
	// subf r8,r9,r28
	ctx.r8.u64 = r28.u64 - ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r31,r30
	ctx.r10.u64 = r30.u64 - r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8263C2F8:
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8263c2f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8263C2F8;
loc_8263C31C:
	// lwz r11,448(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 448);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8263c3f0
	if (!ctx.cr6.eq) goto loc_8263C3F0;
	// addi r11,r28,-1
	ctx.r11.s64 = r28.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8263c3f0
	if (ctx.cr6.lt) goto loc_8263C3F0;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// lfs f0,6296(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6296);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x8263c3b4
	if (ctx.cr6.lt) goto loc_8263C3B4;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r10,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + r31.u64;
	// rlwinm r5,r10,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r8,12
	ctx.r10.s64 = ctx.r8.s64 + 12;
	// add r9,r7,r31
	ctx.r9.u64 = ctx.r7.u64 + r31.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
loc_8263C370:
	// lfs f13,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,-8(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// stfs f12,-12(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + -12, temp.u32);
	// lfs f11,-8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,-16(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + -16, temp.u32);
	// stfs f10,-20(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + -20, temp.u32);
	// lfs f9,-12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,-28(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + -28, temp.u32);
	// stfs f8,-24(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + -24, temp.u32);
	// lfsu f13,-16(r9)
	ea = -16 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// fmuls f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f7,-36(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + -36, temp.u32);
	// stfsu f7,-32(r10)
	ea = -32 + ctx.r10.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8263c370
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8263C370;
loc_8263C3B4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8263c3f0
	if (ctx.cr6.lt) goto loc_8263C3F0;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8263C3DC:
	// lfsu f13,-4(r10)
	ctx.fpscr.disableFlushMode();
	ea = -4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,-12(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// stfsu f13,-8(r11)
	ea = -8 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8263c3dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8263C3DC;
loc_8263C3F0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8264CE50) {
	REX_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82794064
	__imp__NetDll_socket(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8264CF30) {
	REX_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827940f4
	__imp__NetDll_recv(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8264D318) {
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
	ctx.lr = 0x8264D320;
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// stw r3,836(r1)
	REX_STORE_U32(ctx.r1.u32 + 836, ctx.r3.u32);
	// stw r5,852(r1)
	REX_STORE_U32(ctx.r1.u32 + 852, ctx.r5.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r31,720(r1)
	REX_STORE_U32(ctx.r1.u32 + 720, r31.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r31,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r31.u32);
	// li r3,3329
	ctx.r3.s64 = 3329;
	// stw r31,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// bl 0x8264ca58
	ctx.lr = 0x8264D35C;
	sub_8264CA58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264d598
	if (ctx.cr0.lt) goto loc_8264D598;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8264cae0
	ctx.lr = 0x8264D384;
	sub_8264CAE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264d598
	if (ctx.cr0.lt) goto loc_8264D598;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,3073
	ctx.r3.s64 = 3073;
	// addi r30,r11,448
	r30.s64 = ctx.r11.s64 + 448;
	// bl 0x8264ca58
	ctx.lr = 0x8264D3A0;
	sub_8264CA58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264d598
	if (ctx.cr0.lt) goto loc_8264D598;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8264cae0
	ctx.lr = 0x8264D3C8;
	sub_8264CAE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264d598
	if (ctx.cr0.lt) goto loc_8264D598;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,3585
	ctx.r3.s64 = 3585;
	// add r30,r30,r11
	r30.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x8264ca58
	ctx.lr = 0x8264D3E4;
	sub_8264CA58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264d598
	if (ctx.cr0.lt) goto loc_8264D598;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8264cae0
	ctx.lr = 0x8264D40C;
	sub_8264CAE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264d598
	if (ctx.cr0.lt) goto loc_8264D598;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,3601
	ctx.r3.s64 = 3601;
	// add r30,r30,r11
	r30.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x8264ca58
	ctx.lr = 0x8264D428;
	sub_8264CA58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264d598
	if (ctx.cr0.lt) goto loc_8264D598;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x8264cae0
	ctx.lr = 0x8264D450;
	sub_8264CAE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264d598
	if (ctx.cr0.lt) goto loc_8264D598;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82794034
	ctx.lr = 0x8264D468;
	__imp__XamAlloc(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264d598
	if (ctx.cr0.lt) goto loc_8264D598;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a5ac8
	ctx.lr = 0x8264D478;
	sub_826A5AC8(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r8,132(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r24,r1,144
	r24.s64 = ctx.r1.s64 + 144;
	// lwz r7,136(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r23,r1,152
	r23.s64 = ctx.r1.s64 + 152;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r27,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r27.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// li r3,3601
	ctx.r3.s64 = 3601;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// bl 0x8264cbb8
	ctx.lr = 0x8264D4C8;
	sub_8264CBB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264d598
	if (ctx.cr0.lt) goto loc_8264D598;
	// addi r4,r1,836
	ctx.r4.s64 = ctx.r1.s64 + 836;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8264d058
	ctx.lr = 0x8264D4DC;
	sub_8264D058(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8264d058
	ctx.lr = 0x8264D4E8;
	sub_8264D058(ctx, base);
	// addi r4,r1,852
	ctx.r4.s64 = ctx.r1.s64 + 852;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8264d058
	ctx.lr = 0x8264D4F4;
	sub_8264D058(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8264d058
	ctx.lr = 0x8264D500;
	sub_8264D058(ctx, base);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8264d058
	ctx.lr = 0x8264D50C;
	sub_8264D058(ctx, base);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8264d058
	ctx.lr = 0x8264D518;
	sub_8264D058(ctx, base);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// lwz r9,152(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,5
	ctx.r6.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8264ccb0
	ctx.lr = 0x8264D53C;
	sub_8264CCB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264d598
	if (ctx.cr0.lt) goto loc_8264D598;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r9,144(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,40
	ctx.r7.s64 = 40;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r3,252
	ctx.r3.s64 = 252;
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// std r31,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, r31.u64);
	// std r31,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, r31.u64);
	// std r31,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, r31.u64);
	// std r31,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, r31.u64);
	// std r31,32(r10)
	REX_STORE_U64(ctx.r10.u32 + 32, r31.u64);
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// rlwimi r4,r8,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// bl 0x827937c4
	ctx.lr = 0x8264D590;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8264d5c4
	if (!ctx.cr0.lt) goto loc_8264D5C4;
loc_8264D598:
	// li r31,1627
	r31.s64 = 1627;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8264d5ac
	if (ctx.cr6.eq) goto loc_8264D5AC;
	// stw r3,24(r29)
	REX_STORE_U32(r29.u32 + 24, ctx.r3.u32);
	// b 0x8264d5b0
	goto loc_8264D5B0;
loc_8264D5AC:
	// bl 0x823f0008
	ctx.lr = 0x8264D5B0;
	sub_823F0008(ctx, base);
loc_8264D5B0:
	// lwz r3,136(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264d5e8
	if (ctx.cr6.eq) goto loc_8264D5E8;
	// bl 0x82794024
	ctx.lr = 0x8264D5C0;
	__imp__XamFree(ctx, base);
	// b 0x8264d5e8
	goto loc_8264D5E8;
loc_8264D5C4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8264d5d4
	if (ctx.cr6.eq) goto loc_8264D5D4;
	// li r31,997
	r31.s64 = 997;
	// b 0x8264d5e8
	goto loc_8264D5E8;
loc_8264D5D4:
	// bl 0x823f0058
	ctx.lr = 0x8264D5D8;
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
	// and r31,r11,r10
	r31.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_8264D5E8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8265C7C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8265c7d0
	if (!ctx.cr6.eq) goto loc_8265C7D0;
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_8265C7D0:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8265c804
	if (ctx.cr6.eq) goto loc_8265C804;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
loc_8265C7F0:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwzu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8265c7f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265C7F0;
loc_8265C804:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8265D748) {
	REX_FUNC_PROLOGUE();
	// b 0x826639f0
	sub_826639F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8265D780) {
	REX_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// rlwinm. r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8265d798
	if (ctx.cr0.eq) goto loc_8265D798;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// b 0x82663fb8
	sub_82663FB8(ctx, base);
	return;
loc_8265D798:
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8265d7ac
	if (ctx.cr0.eq) goto loc_8265D7AC;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x82664150
	sub_82664150(ctx, base);
	return;
loc_8265D7AC:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4105
	ctx.r3.u64 = ctx.r3.u64 | 4105;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8265E5E8) {
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
	ctx.lr = 0x8265E5F0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,52
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 52, ctx.xer);
	// blt cr6,0x8265e8bc
	if (ctx.cr6.lt) goto loc_8265E8BC;
	// lwz r30,68(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 68);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r25,20(r30)
	r25.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r24,24(r30)
	r24.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x8265e8bc
	if (!ctx.cr6.eq) goto loc_8265E8BC;
	// lbz r11,35(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 35);
	// lbz r10,33(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 33);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8265e8bc
	if (ctx.cr6.gt) goto loc_8265E8BC;
	// lbz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 36);
	// lbz r10,34(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 34);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8265e8bc
	if (ctx.cr6.gt) goto loc_8265E8BC;
	// ld r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 92);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8265e658
	if (ctx.cr6.eq) goto loc_8265E658;
	// ld r10,44(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 44);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x8265e8bc
	if (!ctx.cr6.eq) goto loc_8265E8BC;
loc_8265E658:
	// lwz r6,28(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 28);
	// li r26,0
	r26.s64 = 0;
	// mulli r11,r6,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// addi r29,r11,112
	r29.s64 = ctx.r11.s64 + 112;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265e6a8
	if (ctx.cr6.eq) goto loc_8265E6A8;
	// lwz r8,4(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// ld r7,44(r28)
	ctx.r7.u64 = REX_LOAD_U64(r28.u32 + 44);
loc_8265E688:
	// ldx r5,r10,r8
	ctx.r5.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r8.u32);
	// cmpld cr6,r5,r7
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x8265e8bc
	if (ctx.cr6.eq) goto loc_8265E8BC;
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,92
	ctx.r10.s64 = ctx.r10.s64 + 92;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8265e688
	if (ctx.cr6.lt) goto loc_8265E688;
loc_8265E6A8:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8265e8bc
	if (!ctx.cr6.lt) goto loc_8265E8BC;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mulli r9,r11,92
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(92));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r31,r9,r10
	r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r4,r28,8
	ctx.r4.s64 = r28.s64 + 8;
	// ld r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U64(r28.u32 + 44);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// stdx r11,r9,r10
	REX_STORE_U64(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u64);
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x826a1e70
	ctx.lr = 0x8265E6DC;
	sub_826A1E70(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// addi r4,r28,52
	ctx.r4.s64 = r28.s64 + 52;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x826a1e70
	ctx.lr = 0x8265E6EC;
	sub_826A1E70(ctx, base);
	// lbz r10,35(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 35);
	// lbz r11,33(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 33);
	// addi r5,r30,37
	ctx.r5.s64 = r30.s64 + 37;
	// li r8,15
	ctx.r8.s64 = 15;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r9,r5,15
	ctx.r9.s64 = ctx.r5.s64 + 15;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// li r6,15
	ctx.r6.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 36);
	// lbz r11,34(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 34);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// lbz r11,35(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 35);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// lbz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 36);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// lwz r30,32(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 32);
	// lwz r10,72(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 72);
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 36);
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + r29.u64;
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r10,r10,-52
	ctx.r10.s64 = ctx.r10.s64 + -52;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x826b3f38
	ctx.lr = 0x8265E764;
	sub_826B3F38(ctx, base);
	// sth r26,30(r30)
	REX_STORE_U16(r30.u32 + 30, r26.u16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a5ac8
	ctx.lr = 0x8265E770;
	sub_826A5AC8(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,16384
	ctx.r9.s64 = 1073741824;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r9,r9,32770
	ctx.r9.u64 = ctx.r9.u64 | 32770;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stb r7,8(r10)
	REX_STORE_U8(ctx.r10.u32 + 8, ctx.r7.u8);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stw r11,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stw r30,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r30.u32);
	// stw r8,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r8.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r10,r10,-24
	ctx.r10.s64 = ctx.r10.s64 + -24;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// beq cr6,0x8265e84c
	if (ctx.cr6.eq) goto loc_8265E84C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265e848
	if (ctx.cr6.eq) goto loc_8265E848;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8265c9a0
	ctx.lr = 0x8265E7FC;
	sub_8265C9A0(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8265d278
	ctx.lr = 0x8265E820;
	sub_8265D278(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8265e830
	if (!ctx.cr0.lt) goto loc_8265E830;
	// mr r24,r26
	r24.u64 = r26.u64;
	// b 0x8265e83c
	goto loc_8265E83C;
loc_8265E830:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
loc_8265E83C:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8265d138
	ctx.lr = 0x8265E844;
	sub_8265D138(ctx, base);
	// b 0x8265e84c
	goto loc_8265E84C;
loc_8265E848:
	// mr r24,r26
	r24.u64 = r26.u64;
loc_8265E84C:
	// addi r30,r31,88
	r30.s64 = r31.s64 + 88;
	// stw r26,80(r31)
	REX_STORE_U32(r31.u32 + 80, r26.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// stw r26,88(r31)
	REX_STORE_U32(r31.u32 + 88, r26.u32);
	// beq cr6,0x8265e8ac
	if (ctx.cr6.eq) goto loc_8265E8AC;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265e8ac
	if (ctx.cr6.eq) goto loc_8265E8AC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8265c4f0
	ctx.lr = 0x8265E874;
	sub_8265C4F0(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8265c810
	ctx.lr = 0x8265E898;
	sub_8265C810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8265e8a4
	if (ctx.cr0.lt) goto loc_8265E8A4;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
loc_8265E8A4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8265c7b8
	ctx.lr = 0x8265E8AC;
	sub_8265C7B8(ctx, base);
loc_8265E8AC:
	// lwz r11,32(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,36(r27)
	REX_STORE_U32(r27.u32 + 36, ctx.r11.u32);
loc_8265E8BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82670D68) {
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
	// lwz r11,292(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 292);
	// addi r30,r3,96
	r30.s64 = ctx.r3.s64 + 96;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,11,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// stw r11,292(r3)
	REX_STORE_U32(ctx.r3.u32 + 292, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82671180
	ctx.lr = 0x82670D98;
	sub_82671180(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826710f8
	ctx.lr = 0x82670DA0;
	sub_826710F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82670dd4
	if (ctx.cr0.lt) goto loc_82670DD4;
loc_82670DA8:
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
	// bne 0x82670da8
	if (!ctx.cr0.eq) goto loc_82670DA8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82670dd4
	if (!ctx.cr6.eq) goto loc_82670DD4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82670cd8
	ctx.lr = 0x82670DD4;
	sub_82670CD8(ctx, base);
loc_82670DD4:
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

DEFINE_REX_FUNC(sub_82672A80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
	// b 0x82672aa0
	goto loc_82672AA0;
loc_82672A8C:
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82672ab8
	if (ctx.cr6.eq) goto loc_82672AB8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82672AA0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82672ab0
	if (ctx.cr6.eq) goto loc_82672AB0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82672a8c
	if (!ctx.cr0.eq) goto loc_82672A8C;
loc_82672AB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82672AB8:
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
	// bne 0x82672ab8
	if (!ctx.cr0.eq) goto loc_82672AB8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82675B78) {
	REX_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// rlwinm. r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82675b90
	if (ctx.cr0.eq) goto loc_82675B90;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x826798a0
	sub_826798A0(ctx, base);
	return;
loc_82675B90:
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82675ba4
	if (ctx.cr0.eq) goto loc_82675BA4;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82679938
	sub_82679938(ctx, base);
	return;
loc_82675BA4:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4105
	ctx.r3.u64 = ctx.r3.u64 | 4105;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826763E8) {
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
	ctx.lr = 0x826763F0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r29,r3,16
	r29.s64 = ctx.r3.s64 + 16;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// bl 0x827938a4
	ctx.lr = 0x8267641C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r9,r31,8
	ctx.r9.s64 = r31.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82676498
	if (ctx.cr6.eq) goto loc_82676498;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82676498
	if (ctx.cr0.eq) goto loc_82676498;
loc_82676434:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// subf r7,r10,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmplwi cr6,r8,259
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 259, ctx.xer);
	// subfic r8,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r7.u64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ctx.r10.u64;
	// beq cr6,0x8267648c
	if (ctx.cr6.eq) goto loc_8267648C;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r28.u32);
loc_8267648C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82676434
	if (!ctx.cr6.eq) goto loc_82676434;
loc_82676498:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827938b4
	ctx.lr = 0x826764A0;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_826764A0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826764f4
	if (ctx.cr6.eq) goto loc_826764F4;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826764EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,1
	r30.s64 = 1;
	// b 0x826764a0
	goto loc_826764A0;
loc_826764F4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827938a4
	ctx.lr = 0x826764FC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// bl 0x823ef900
	ctx.lr = 0x82676500;
	sub_823EF900(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// beq cr6,0x8267657c
	if (ctx.cr6.eq) goto loc_8267657C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267657c
	if (ctx.cr0.eq) goto loc_8267657C;
loc_82676514:
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// subf. r10,r3,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt 0x8267657c
	if (ctx.cr0.gt) goto loc_8267657C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r6,r10,r31
	ctx.r6.u64 = r31.u64 - ctx.r10.u64;
	// subfic r6,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r6.u64 = static_cast<uint64_t>(0) - ctx.r6.u64;
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// subfe r7,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r28,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, r28.u32);
	// bne cr6,0x82676514
	if (!ctx.cr6.eq) goto loc_82676514;
loc_8267657C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827938b4
	ctx.lr = 0x82676584;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82676584:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826765d8
	if (ctx.cr6.eq) goto loc_826765D8;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826765D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,1
	r30.s64 = 1;
	// b 0x82676584
	goto loc_82676584;
loc_826765D8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82681488) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,850
	ctx.r4.s64 = ctx.r3.s64 + 850;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8265d838
	ctx.lr = 0x826814B0;
	sub_8265D838(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826814c4
	if (!ctx.cr0.eq) goto loc_826814C4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82681508
	goto loc_82681508;
loc_826814C4:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-10320
	ctx.r8.s64 = ctx.r10.s64 + -10320;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r9,r11,840
	ctx.r9.s64 = ctx.r11.s64 + 840;
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r31,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// stw r8,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// stw r7,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_82681508:
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

DEFINE_REX_FUNC(sub_82683548) {
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
	ctx.lr = 0x82683550;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x8265c9a0
	ctx.lr = 0x82683574;
	sub_8265C9A0(ctx, base);
	// subf r11,r26,r29
	ctx.r11.u64 = r29.u64 - r26.u64;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r10,24
	ctx.r10.s64 = 24;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// addi r30,r31,60
	r30.s64 = r31.s64 + 60;
	// divw r11,r11,r10
	ctx.r11.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// clrlwi r4,r9,8
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFFFF;
	// ld r11,816(r26)
	ctx.r11.u64 = REX_LOAD_U64(r26.u32 + 816);
	// rldicr r11,r11,5,58
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 5) & 0xFFFFFFFFFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r11.u64);
	// bl 0x826876c0
	ctx.lr = 0x826835BC;
	sub_826876C0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826872e8
	ctx.lr = 0x826835CC;
	sub_826872E8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82683640
	if (ctx.cr6.eq) goto loc_82683640;
	// addi r30,r31,48
	r30.s64 = r31.s64 + 48;
loc_826835DC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82687280
	ctx.lr = 0x826835E4;
	sub_82687280(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lbz r11,21(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 21);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// subf r4,r11,r26
	ctx.r4.u64 = r26.u64 - ctx.r11.u64;
	// bl 0x826872e8
	ctx.lr = 0x82683604;
	sub_826872E8(ctx, base);
	// lbz r11,19(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 19);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82683620
	if (!ctx.cr6.eq) goto loc_82683620;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x82683634
	goto loc_82683634;
loc_82683620:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82683634
	if (!ctx.cr6.eq) goto loc_82683634;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
loc_82683634:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826835dc
	if (!ctx.cr6.eq) goto loc_826835DC;
loc_82683640:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bne cr6,0x82683654
	if (!ctx.cr6.eq) goto loc_82683654;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82683654:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82683664
	if (ctx.cr6.eq) goto loc_82683664;
	// li r28,0
	r28.s64 = 0;
	// b 0x82683690
	goto loc_82683690;
loc_82683664:
	// lwz r6,100(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82683690
	if (ctx.cr6.eq) goto loc_82683690;
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r7,80(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82682f88
	ctx.lr = 0x82683684;
	sub_82682F88(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r11,r28
	r28.u64 = ctx.r11.u64 & r28.u64;
loc_82683690:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// ld r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 72);
	// addi r3,r11,612
	ctx.r3.s64 = ctx.r11.s64 + 612;
	// bl 0x826831d8
	ctx.lr = 0x826836A8;
	sub_826831D8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8268C440) {
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
	ctx.lr = 0x8268C448;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32761
	r26.s64 = -2147024896;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r29,0
	r29.s64 = 0;
	// ori r26,r26,87
	r26.u64 = r26.u64 | 87;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8268c4cc
	if (ctx.cr6.eq) goto loc_8268C4CC;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r30,r3,36
	r30.s64 = ctx.r3.s64 + 36;
loc_8268C470:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8268bc78
	ctx.lr = 0x8268C47C;
	sub_8268BC78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268c4cc
	if (ctx.cr0.eq) goto loc_8268C4CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268C494;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// blt 0x8268c4bc
	if (ctx.cr0.lt) goto loc_8268C4BC;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// blt cr6,0x8268c470
	if (ctx.cr6.lt) goto loc_8268C470;
	// b 0x8268c4cc
	goto loc_8268C4CC;
loc_8268C4BC:
	// addi r11,r29,9
	ctx.r11.s64 = r29.s64 + 9;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r28
	REX_STORE_U32(ctx.r11.u32 + r28.u32, ctx.r10.u32);
loc_8268C4CC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82691E70) {
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
	ctx.lr = 0x82691E78;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,160
	ctx.r3.s64 = 160;
	// ori r4,r4,32781
	ctx.r4.u64 = ctx.r4.u64 | 32781;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// bl 0x823f02b8
	ctx.lr = 0x82691EA4;
	sub_823F02B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82691f88
	if (ctx.cr0.eq) goto loc_82691F88;
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,136(r31)
	REX_STORE_U32(r31.u32 + 136, r30.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r27,4(r31)
	REX_STORE_U32(r31.u32 + 4, r27.u32);
	// bl 0x826a1e70
	ctx.lr = 0x82691ECC;
	sub_826A1E70(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82691f5c
	if (ctx.cr6.eq) goto loc_82691F5C;
	// addi r11,r30,22
	ctx.r11.s64 = r30.s64 + 22;
	// mulli r27,r28,24
	r27.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(24));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r31
	r29.u64 = ctx.r11.u64 + r31.u64;
loc_82691EE4:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bl 0x823f02b8
	ctx.lr = 0x82691EFC;
	sub_823F02B8(ctx, base);
	// stw r3,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82691f88
	if (ctx.cr0.eq) goto loc_82691F88;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// rlwinm r3,r28,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823f02b8
	ctx.lr = 0x82691F18;
	sub_823F02B8(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82691f88
	if (ctx.cr0.eq) goto loc_82691F88;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82691f54
	if (ctx.cr6.eq) goto loc_82691F54;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82691F38:
	// lwz r9,36(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 36);
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stwx r9,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82691f38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82691F38;
loc_82691F54:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82691ee4
	if (!ctx.cr6.eq) goto loc_82691EE4;
loc_82691F5C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82691278
	ctx.lr = 0x82691F64;
	sub_82691278(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x82691f78
	if (!ctx.cr0.lt) goto loc_82691F78;
loc_82691F6C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82691ce0
	ctx.lr = 0x82691F74;
	sub_82691CE0(ctx, base);
	// li r31,0
	r31.s64 = 0;
loc_82691F78:
	// stw r31,0(r25)
	REX_STORE_U32(r25.u32 + 0, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_82691F88:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x82691f6c
	goto loc_82691F6C;
}

DEFINE_REX_FUNC(sub_82699BE0) {
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
	// cmpwi cr6,r4,259
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 259, ctx.xer);
	// bne cr6,0x82699c24
	if (!ctx.cr6.eq) goto loc_82699C24;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82793e64
	ctx.lr = 0x82699C18;
	__imp__KeWaitForSingleObject(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82699c24
	if (ctx.cr0.lt) goto loc_82699C24;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
loc_82699C24:
	// li r11,0
	ctx.r11.s64 = 0;
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

DEFINE_REX_FUNC(sub_8269AD58) {
	REX_FUNC_PROLOGUE();
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// std r29,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r29.u64);
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

DEFINE_REX_FUNC(sub_8269BE08) {
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
	ctx.lr = 0x8269BE10;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r22,r11,15944
	r22.s64 = ctx.r11.s64 + 15944;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8269BE24:
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwzu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r3.u32 = ea;
	// lwzu r9,124(r3)
	ea = 124 + ctx.r3.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r3.u32 = ea;
	// lwzu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r3.u32 = ea;
	// lwzu r7,124(r3)
	ea = 124 + ctx.r3.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r3.u32 = ea;
	// lwzu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r3.u32 = ea;
	// lwzu r5,124(r3)
	ea = 124 + ctx.r3.u32;
	ctx.r5.u64 = REX_LOAD_U32(ea);
	ctx.r3.u32 = ea;
	// add r30,r5,r7
	r30.u64 = ctx.r5.u64 + ctx.r7.u64;
	// subf r28,r6,r5
	r28.u64 = ctx.r5.u64 - ctx.r6.u64;
	// add r30,r30,r9
	r30.u64 = r30.u64 + ctx.r9.u64;
	// lwzu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	ctx.r3.u32 = ea;
	// subf r27,r5,r7
	r27.u64 = ctx.r7.u64 - ctx.r5.u64;
	// add r30,r30,r31
	r30.u64 = r30.u64 + r31.u64;
	// add r29,r4,r6
	r29.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r29,r29,r8
	r29.u64 = r29.u64 + ctx.r8.u64;
	// stwu r30,-388(r3)
	ea = -388 + ctx.r3.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// subf r30,r4,r8
	r30.u64 = ctx.r8.u64 - ctx.r4.u64;
	// add r26,r29,r10
	r26.u64 = r29.u64 + ctx.r10.u64;
	// subf r29,r9,r28
	r29.u64 = r28.u64 - ctx.r9.u64;
	// subf r30,r7,r30
	r30.u64 = r30.u64 - ctx.r7.u64;
	// add r29,r29,r10
	r29.u64 = r29.u64 + ctx.r10.u64;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// add r30,r30,r31
	r30.u64 = r30.u64 + r31.u64;
	// lha r21,0(r11)
	r21.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// clrlwi r25,r29,16
	r25.u64 = r29.u32 & 0xFFFF;
	// clrlwi r26,r30,16
	r26.u64 = r30.u32 & 0xFFFF;
	// lhau r20,2(r11)
	ea = 2 + ctx.r11.u32;
	r20.s64 = int16_t(REX_LOAD_U16(ea));
	ctx.r11.u32 = ea;
	// srawi r29,r29,15
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7FFF) != 0);
	r29.s64 = r29.s32 >> 15;
	// srawi r30,r30,15
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FFF) != 0);
	r30.s64 = r30.s32 >> 15;
	// rlwinm r24,r29,0,0,30
	r24.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r23,r30,0,0,30
	r23.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// subf r30,r9,r27
	r30.u64 = r27.u64 - ctx.r9.u64;
	// mullw r27,r25,r20
	r27.s64 = int64_t(r25.s32) * int64_t(r20.s32);
	// mullw r28,r26,r21
	r28.s64 = int64_t(r26.s32) * int64_t(r21.s32);
	// srawi r19,r28,15
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x7FFF) != 0);
	r19.s64 = r28.s32 >> 15;
	// mullw r25,r25,r21
	r25.s64 = int64_t(r25.s32) * int64_t(r21.s32);
	// mullw r28,r26,r20
	r28.s64 = int64_t(r26.s32) * int64_t(r20.s32);
	// srawi r26,r27,15
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x7FFF) != 0);
	r26.s64 = r27.s32 >> 15;
	// srawi r27,r25,15
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x7FFF) != 0);
	r27.s64 = r25.s32 >> 15;
	// srawi r28,r28,15
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x7FFF) != 0);
	r28.s64 = r28.s32 >> 15;
	// mullw r25,r20,r24
	r25.s64 = int64_t(r20.s32) * int64_t(r24.s32);
	// subf r26,r26,r19
	r26.u64 = r19.u64 - r26.u64;
	// add r28,r27,r28
	r28.u64 = r27.u64 + r28.u64;
	// subf r25,r25,r26
	r25.u64 = r26.u64 - r25.u64;
	// mullw r27,r21,r23
	r27.s64 = int64_t(r21.s32) * int64_t(r23.s32);
	// add r27,r25,r27
	r27.u64 = r25.u64 + r27.u64;
	// stwu r27,124(r3)
	ea = 124 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// mullw r26,r23,r20
	r26.s64 = int64_t(r23.s32) * int64_t(r20.s32);
	// subf r29,r4,r6
	r29.u64 = ctx.r6.u64 - ctx.r4.u64;
	// add r28,r28,r26
	r28.u64 = r28.u64 + r26.u64;
	// mullw r24,r21,r24
	r24.s64 = int64_t(r21.s32) * int64_t(r24.s32);
	// subf r29,r8,r29
	r29.u64 = r29.u64 - ctx.r8.u64;
	// add r30,r30,r31
	r30.u64 = r30.u64 + r31.u64;
	// add r28,r28,r24
	r28.u64 = r28.u64 + r24.u64;
	// add r29,r29,r10
	r29.u64 = r29.u64 + ctx.r10.u64;
	// clrlwi r26,r30,16
	r26.u64 = r30.u32 & 0xFFFF;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// srawi r27,r29,15
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7FFF) != 0);
	r27.s64 = r29.s32 >> 15;
	// lhau r24,2(r11)
	ea = 2 + ctx.r11.u32;
	r24.s64 = int16_t(REX_LOAD_U16(ea));
	ctx.r11.u32 = ea;
	// clrlwi r28,r29,16
	r28.u64 = r29.u32 & 0xFFFF;
	// lhau r23,2(r11)
	ea = 2 + ctx.r11.u32;
	r23.s64 = int16_t(REX_LOAD_U16(ea));
	ctx.r11.u32 = ea;
	// srawi r25,r30,15
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FFF) != 0);
	r25.s64 = r30.s32 >> 15;
	// mullw r30,r26,r24
	r30.s64 = int64_t(r26.s32) * int64_t(r24.s32);
	// mullw r29,r28,r23
	r29.s64 = int64_t(r28.s32) * int64_t(r23.s32);
	// srawi r30,r30,15
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FFF) != 0);
	r30.s64 = r30.s32 >> 15;
	// srawi r29,r29,15
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7FFF) != 0);
	r29.s64 = r29.s32 >> 15;
	// rlwinm r27,r27,0,0,30
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// subf r29,r29,r30
	r29.u64 = r30.u64 - r29.u64;
	// rlwinm r25,r25,0,0,30
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFE;
	// mullw r21,r23,r27
	r21.s64 = int64_t(r23.s32) * int64_t(r27.s32);
	// subf r29,r21,r29
	r29.u64 = r29.u64 - r21.u64;
	// mullw r30,r24,r25
	r30.s64 = int64_t(r24.s32) * int64_t(r25.s32);
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// mullw r28,r28,r24
	r28.s64 = int64_t(r28.s32) * int64_t(r24.s32);
	// stwu r30,124(r3)
	ea = 124 + ctx.r3.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// mullw r30,r26,r23
	r30.s64 = int64_t(r26.s32) * int64_t(r23.s32);
	// srawi r29,r28,15
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x7FFF) != 0);
	r29.s64 = r28.s32 >> 15;
	// srawi r30,r30,15
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FFF) != 0);
	r30.s64 = r30.s32 >> 15;
	// mullw r28,r25,r23
	r28.s64 = int64_t(r25.s32) * int64_t(r23.s32);
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// mullw r29,r24,r27
	r29.s64 = int64_t(r24.s32) * int64_t(r27.s32);
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// subf r7,r7,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r7.u64;
	// add r4,r30,r29
	ctx.r4.u64 = r30.u64 + r29.u64;
	// subf r5,r5,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r9,r8,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r8.u64;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// lhau r8,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ea));
	ctx.r11.u32 = ea;
	// subf r6,r6,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r6.u64;
	// lhau r4,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ea));
	ctx.r11.u32 = ea;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// mullw r7,r6,r5
	ctx.r7.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// srawi r10,r10,15
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 15;
	// srawi r30,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	r30.s64 = ctx.r9.s32 >> 15;
	// srawi r7,r7,15
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 15;
	// rlwinm r29,r10,0,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// mullw r10,r8,r5
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// mullw r31,r8,r4
	r31.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// srawi r31,r31,15
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FFF) != 0);
	r31.s64 = r31.s32 >> 15;
	// mullw r8,r6,r4
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// subf r7,r31,r7
	ctx.r7.u64 = ctx.r7.u64 - r31.u64;
	// srawi r9,r10,15
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 15;
	// rlwinm r6,r30,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// mullw r31,r4,r29
	r31.s64 = int64_t(ctx.r4.s32) * int64_t(r29.s32);
	// srawi r10,r8,15
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 15;
	// subf r7,r31,r7
	ctx.r7.u64 = ctx.r7.u64 - r31.u64;
	// mullw r8,r5,r6
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r10,r6,r4
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r8,124(r3)
	ea = 124 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// mullw r10,r5,r29
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(r29.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// addi r3,r3,-380
	ctx.r3.s64 = ctx.r3.s64 + -380;
	// bdnz 0x8269be24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8269BE24;
	// addi r11,r3,-128
	ctx.r11.s64 = ctx.r3.s64 + -128;
	// li r23,4
	r23.s64 = 4;
loc_8269C014:
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r22,192
	ctx.r10.s64 = r22.s64 + 192;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8269C020:
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzu r8,28(r11)
	ea = 28 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzu r6,28(r11)
	ea = 28 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r5.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzu r4,28(r11)
	ea = 28 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// add r30,r4,r6
	r30.u64 = ctx.r4.u64 + ctx.r6.u64;
	// subf r28,r5,r4
	r28.u64 = ctx.r4.u64 - ctx.r5.u64;
	// add r30,r30,r8
	r30.u64 = r30.u64 + ctx.r8.u64;
	// lwzu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// subf r27,r4,r6
	r27.u64 = ctx.r6.u64 - ctx.r4.u64;
	// add r30,r30,r31
	r30.u64 = r30.u64 + r31.u64;
	// stwu r30,-100(r11)
	ea = -100 + ctx.r11.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r11.u32 = ea;
	// add r29,r3,r5
	r29.u64 = ctx.r3.u64 + ctx.r5.u64;
	// subf r30,r3,r7
	r30.u64 = ctx.r7.u64 - ctx.r3.u64;
	// add r29,r29,r7
	r29.u64 = r29.u64 + ctx.r7.u64;
	// subf r30,r6,r30
	r30.u64 = r30.u64 - ctx.r6.u64;
	// add r29,r29,r9
	r29.u64 = r29.u64 + ctx.r9.u64;
	// add r30,r30,r31
	r30.u64 = r30.u64 + r31.u64;
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// subf r29,r8,r28
	r29.u64 = r28.u64 - ctx.r8.u64;
	// clrlwi r24,r30,16
	r24.u64 = r30.u32 & 0xFFFF;
	// add r29,r29,r9
	r29.u64 = r29.u64 + ctx.r9.u64;
	// subf r28,r3,r5
	r28.u64 = ctx.r5.u64 - ctx.r3.u64;
	// clrlwi r21,r29,16
	r21.u64 = r29.u32 & 0xFFFF;
	// srawi r29,r29,15
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7FFF) != 0);
	r29.s64 = r29.s32 >> 15;
	// srawi r30,r30,15
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FFF) != 0);
	r30.s64 = r30.s32 >> 15;
	// rlwinm r20,r29,0,0,30
	r20.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r19,r30,0,0,30
	r19.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// subf r30,r8,r27
	r30.u64 = r27.u64 - ctx.r8.u64;
	// subf r29,r7,r28
	r29.u64 = r28.u64 - ctx.r7.u64;
	// add r30,r30,r31
	r30.u64 = r30.u64 + r31.u64;
	// add r29,r29,r9
	r29.u64 = r29.u64 + ctx.r9.u64;
	// lha r27,0(r10)
	r27.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 0));
	// clrlwi r15,r30,16
	r15.u64 = r30.u32 & 0xFFFF;
	// lhau r16,2(r10)
	ea = 2 + ctx.r10.u32;
	r16.s64 = int16_t(REX_LOAD_U16(ea));
	ctx.r10.u32 = ea;
	// subf r6,r6,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r6.u64;
	// mullw r28,r21,r16
	r28.s64 = int64_t(r21.s32) * int64_t(r16.s32);
	// mullw r26,r24,r27
	r26.s64 = int64_t(r24.s32) * int64_t(r27.s32);
	// srawi r17,r26,15
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x7FFF) != 0);
	r17.s64 = r26.s32 >> 15;
	// mullw r18,r21,r27
	r18.s64 = int64_t(r21.s32) * int64_t(r27.s32);
	// mullw r25,r27,r19
	r25.s64 = int64_t(r27.s32) * int64_t(r19.s32);
	// mullw r26,r27,r20
	r26.s64 = int64_t(r27.s32) * int64_t(r20.s32);
	// mullw r27,r24,r16
	r27.s64 = int64_t(r24.s32) * int64_t(r16.s32);
	// srawi r24,r28,15
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x7FFF) != 0);
	r24.s64 = r28.s32 >> 15;
	// srawi r28,r18,15
	ctx.xer.ca = (r18.s32 < 0) & ((r18.u32 & 0x7FFF) != 0);
	r28.s64 = r18.s32 >> 15;
	// srawi r27,r27,15
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x7FFF) != 0);
	r27.s64 = r27.s32 >> 15;
	// subf r24,r24,r17
	r24.u64 = r17.u64 - r24.u64;
	// mullw r21,r16,r20
	r21.s64 = int64_t(r16.s32) * int64_t(r20.s32);
	// add r27,r28,r27
	r27.u64 = r28.u64 + r27.u64;
	// subf r28,r21,r24
	r28.u64 = r24.u64 - r21.u64;
	// mullw r24,r19,r16
	r24.s64 = int64_t(r19.s32) * int64_t(r16.s32);
	// add r28,r28,r25
	r28.u64 = r28.u64 + r25.u64;
	// add r27,r27,r24
	r27.u64 = r27.u64 + r24.u64;
	// stwu r28,28(r11)
	ea = 28 + ctx.r11.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r11.u32 = ea;
	// srawi r28,r29,15
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7FFF) != 0);
	r28.s64 = r29.s32 >> 15;
	// add r27,r27,r26
	r27.u64 = r27.u64 + r26.u64;
	// srawi r30,r30,15
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FFF) != 0);
	r30.s64 = r30.s32 >> 15;
	// clrlwi r26,r29,16
	r26.u64 = r29.u32 & 0xFFFF;
	// rlwinm r25,r28,0,0,30
	r25.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r11.u32 = ea;
	// rlwinm r28,r30,0,0,30
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// subf r4,r4,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r4.u64;
	// lhau r27,2(r10)
	ea = 2 + ctx.r10.u32;
	r27.s64 = int16_t(REX_LOAD_U16(ea));
	ctx.r10.u32 = ea;
	// mullw r30,r15,r27
	r30.s64 = int64_t(r15.s32) * int64_t(r27.s32);
	// lhau r24,2(r10)
	ea = 2 + ctx.r10.u32;
	r24.s64 = int16_t(REX_LOAD_U16(ea));
	ctx.r10.u32 = ea;
	// mullw r29,r26,r24
	r29.s64 = int64_t(r26.s32) * int64_t(r24.s32);
	// srawi r30,r30,15
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FFF) != 0);
	r30.s64 = r30.s32 >> 15;
	// srawi r29,r29,15
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7FFF) != 0);
	r29.s64 = r29.s32 >> 15;
	// mullw r21,r24,r25
	r21.s64 = int64_t(r24.s32) * int64_t(r25.s32);
	// subf r30,r29,r30
	r30.u64 = r30.u64 - r29.u64;
	// mullw r29,r27,r28
	r29.s64 = int64_t(r27.s32) * int64_t(r28.s32);
	// subf r30,r21,r30
	r30.u64 = r30.u64 - r21.u64;
	// mullw r26,r26,r27
	r26.s64 = int64_t(r26.s32) * int64_t(r27.s32);
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// srawi r29,r26,15
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x7FFF) != 0);
	r29.s64 = r26.s32 >> 15;
	// stwu r30,28(r11)
	ea = 28 + ctx.r11.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r11.u32 = ea;
	// mullw r30,r15,r24
	r30.s64 = int64_t(r15.s32) * int64_t(r24.s32);
	// srawi r30,r30,15
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FFF) != 0);
	r30.s64 = r30.s32 >> 15;
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// mullw r28,r28,r24
	r28.s64 = int64_t(r28.s32) * int64_t(r24.s32);
	// subf r8,r7,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r7.u64;
	// subf r7,r5,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r5.u64;
	// mullw r29,r27,r25
	r29.s64 = int64_t(r27.s32) * int64_t(r25.s32);
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// add r6,r30,r29
	ctx.r6.u64 = r30.u64 + r29.u64;
	// clrlwi r5,r8,16
	ctx.r5.u64 = ctx.r8.u32 & 0xFFFF;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// srawi r6,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 15;
	// lhau r3,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ea));
	ctx.r10.u32 = ea;
	// srawi r4,r8,15
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 15;
	// lhau r31,2(r10)
	ea = 2 + ctx.r10.u32;
	r31.s64 = int16_t(REX_LOAD_U16(ea));
	ctx.r10.u32 = ea;
	// mullw r8,r7,r3
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// mullw r9,r5,r3
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r3.s32);
	// mullw r7,r7,r31
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(r31.s32);
	// srawi r30,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	r30.s64 = ctx.r9.s32 >> 15;
	// mullw r5,r5,r31
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r31.s32);
	// srawi r7,r7,15
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 15;
	// rlwinm r29,r6,0,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// srawi r9,r8,15
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 15;
	// srawi r8,r5,15
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 15;
	// subf r7,r7,r30
	ctx.r7.u64 = r30.u64 - ctx.r7.u64;
	// mullw r6,r31,r29
	ctx.r6.s64 = int64_t(r31.s32) * int64_t(r29.s32);
	// rlwinm r5,r4,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r9,r6,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r6.u64;
	// mullw r6,r3,r5
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// mullw r7,r5,r31
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(r31.s32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwu r9,28(r11)
	ea = 28 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// mullw r7,r3,r29
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(r29.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,-92
	ctx.r11.s64 = ctx.r11.s64 + -92;
	// bdnz 0x8269c020
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8269C020;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8269C210:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r5.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// add r31,r5,r7
	r31.u64 = ctx.r5.u64 + ctx.r7.u64;
	// subf r27,r5,r7
	r27.u64 = ctx.r7.u64 - ctx.r5.u64;
	// add r31,r31,r9
	r31.u64 = r31.u64 + ctx.r9.u64;
	// lwzu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// subf r26,r6,r5
	r26.u64 = ctx.r5.u64 - ctx.r6.u64;
	// add r31,r31,r3
	r31.u64 = r31.u64 + ctx.r3.u64;
	// add r30,r4,r6
	r30.u64 = ctx.r4.u64 + ctx.r6.u64;
	// subf r29,r4,r8
	r29.u64 = ctx.r8.u64 - ctx.r4.u64;
	// add r28,r30,r8
	r28.u64 = r30.u64 + ctx.r8.u64;
	// stwu r31,-28(r11)
	ea = -28 + ctx.r11.u32;
	REX_STORE_U32(ea, r31.u32);
	ctx.r11.u32 = ea;
	// subf r25,r7,r4
	r25.u64 = ctx.r4.u64 - ctx.r7.u64;
	// subf r29,r7,r29
	r29.u64 = r29.u64 - ctx.r7.u64;
	// add r7,r28,r10
	ctx.r7.u64 = r28.u64 + ctx.r10.u64;
	// subf r28,r5,r9
	r28.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r30,r9,r26
	r30.u64 = r26.u64 - ctx.r9.u64;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// subf r31,r9,r27
	r31.u64 = r27.u64 - ctx.r9.u64;
	// add r9,r29,r3
	ctx.r9.u64 = r29.u64 + ctx.r3.u64;
	// add r7,r30,r10
	ctx.r7.u64 = r30.u64 + ctx.r10.u64;
	// subf r4,r4,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r4.u64;
	// subf r5,r8,r25
	ctx.r5.u64 = r25.u64 - ctx.r8.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// add r9,r31,r3
	ctx.r9.u64 = r31.u64 + ctx.r3.u64;
	// subf r4,r8,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r8.u64;
	// add r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// subf r7,r6,r28
	ctx.r7.u64 = r28.u64 - ctx.r6.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// add r9,r5,r3
	ctx.r9.u64 = ctx.r5.u64 + ctx.r3.u64;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8269c210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8269C210;
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne 0x8269c014
	if (!ctx.cr0.eq) goto loc_8269C014;
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_826B26AC) {
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
	// lfd f14,408(r4)
	ctx.fpscr.disableFlushMode();
	f14.u64 = REX_LOAD_U64(ctx.r4.u32 + 408);
	// lfd f15,416(r4)
	f15.u64 = REX_LOAD_U64(ctx.r4.u32 + 416);
	// lfd f16,424(r4)
	f16.u64 = REX_LOAD_U64(ctx.r4.u32 + 424);
	// lfd f17,432(r4)
	f17.u64 = REX_LOAD_U64(ctx.r4.u32 + 432);
	// lfd f18,440(r4)
	f18.u64 = REX_LOAD_U64(ctx.r4.u32 + 440);
	// lfd f19,448(r4)
	f19.u64 = REX_LOAD_U64(ctx.r4.u32 + 448);
	// lfd f20,456(r4)
	f20.u64 = REX_LOAD_U64(ctx.r4.u32 + 456);
	// lfd f21,464(r4)
	f21.u64 = REX_LOAD_U64(ctx.r4.u32 + 464);
	// lfd f22,472(r4)
	f22.u64 = REX_LOAD_U64(ctx.r4.u32 + 472);
	// lfd f23,480(r4)
	f23.u64 = REX_LOAD_U64(ctx.r4.u32 + 480);
	// lfd f24,488(r4)
	f24.u64 = REX_LOAD_U64(ctx.r4.u32 + 488);
	// lfd f25,496(r4)
	f25.u64 = REX_LOAD_U64(ctx.r4.u32 + 496);
	// lfd f26,504(r4)
	f26.u64 = REX_LOAD_U64(ctx.r4.u32 + 504);
	// lfd f27,512(r4)
	f27.u64 = REX_LOAD_U64(ctx.r4.u32 + 512);
	// lfd f28,520(r4)
	f28.u64 = REX_LOAD_U64(ctx.r4.u32 + 520);
	// lfd f29,528(r4)
	f29.u64 = REX_LOAD_U64(ctx.r4.u32 + 528);
	// lfd f30,536(r4)
	f30.u64 = REX_LOAD_U64(ctx.r4.u32 + 536);
	// lfd f31,544(r4)
	f31.u64 = REX_LOAD_U64(ctx.r4.u32 + 544);
	// ld r14,136(r4)
	r14.u64 = REX_LOAD_U64(ctx.r4.u32 + 136);
	// ld r15,144(r4)
	r15.u64 = REX_LOAD_U64(ctx.r4.u32 + 144);
	// ld r16,152(r4)
	r16.u64 = REX_LOAD_U64(ctx.r4.u32 + 152);
	// ld r17,160(r4)
	r17.u64 = REX_LOAD_U64(ctx.r4.u32 + 160);
	// ld r18,168(r4)
	r18.u64 = REX_LOAD_U64(ctx.r4.u32 + 168);
	// ld r19,176(r4)
	r19.u64 = REX_LOAD_U64(ctx.r4.u32 + 176);
	// ld r20,184(r4)
	r20.u64 = REX_LOAD_U64(ctx.r4.u32 + 184);
	// ld r21,192(r4)
	r21.u64 = REX_LOAD_U64(ctx.r4.u32 + 192);
	// ld r22,200(r4)
	r22.u64 = REX_LOAD_U64(ctx.r4.u32 + 200);
	// ld r23,208(r4)
	r23.u64 = REX_LOAD_U64(ctx.r4.u32 + 208);
	// ld r24,216(r4)
	r24.u64 = REX_LOAD_U64(ctx.r4.u32 + 216);
	// ld r25,224(r4)
	r25.u64 = REX_LOAD_U64(ctx.r4.u32 + 224);
	// ld r26,232(r4)
	r26.u64 = REX_LOAD_U64(ctx.r4.u32 + 232);
	// ld r27,240(r4)
	r27.u64 = REX_LOAD_U64(ctx.r4.u32 + 240);
	// ld r28,248(r4)
	r28.u64 = REX_LOAD_U64(ctx.r4.u32 + 248);
	// ld r29,256(r4)
	r29.u64 = REX_LOAD_U64(ctx.r4.u32 + 256);
	// ld r30,264(r4)
	r30.u64 = REX_LOAD_U64(ctx.r4.u32 + 264);
	// ld r31,272(r4)
	r31.u64 = REX_LOAD_U64(ctx.r4.u32 + 272);
	// lfd f0,288(r4)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r4.u32 + 288);
	// lwz r5,280(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 280);
	// lwz r6,284(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 284);
	// ld r7,16(r4)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 16);
	// mtfsf 255,f0
	ctx.fpscr.storeFromGuest(ctx.f0.u32);
	// mtlr r3
	ctx.lr = ctx.r3.u64;
	// mtcr r5
	ctx.cr0.lt = (ctx.r5.u32 & 0x80000000) != 0;
	ctx.cr0.gt = (ctx.r5.u32 & 0x40000000) != 0;
	ctx.cr0.eq = (ctx.r5.u32 & 0x20000000) != 0;
	ctx.cr0.so = (ctx.r5.u32 & 0x10000000) != 0;
	ctx.cr1.lt = (ctx.r5.u32 & 0x8000000) != 0;
	ctx.cr1.gt = (ctx.r5.u32 & 0x4000000) != 0;
	ctx.cr1.eq = (ctx.r5.u32 & 0x2000000) != 0;
	ctx.cr1.so = (ctx.r5.u32 & 0x1000000) != 0;
	ctx.cr2.lt = (ctx.r5.u32 & 0x800000) != 0;
	ctx.cr2.gt = (ctx.r5.u32 & 0x400000) != 0;
	ctx.cr2.eq = (ctx.r5.u32 & 0x200000) != 0;
	ctx.cr2.so = (ctx.r5.u32 & 0x100000) != 0;
	ctx.cr3.lt = (ctx.r5.u32 & 0x80000) != 0;
	ctx.cr3.gt = (ctx.r5.u32 & 0x40000) != 0;
	ctx.cr3.eq = (ctx.r5.u32 & 0x20000) != 0;
	ctx.cr3.so = (ctx.r5.u32 & 0x10000) != 0;
	ctx.cr4.lt = (ctx.r5.u32 & 0x8000) != 0;
	ctx.cr4.gt = (ctx.r5.u32 & 0x4000) != 0;
	ctx.cr4.eq = (ctx.r5.u32 & 0x2000) != 0;
	ctx.cr4.so = (ctx.r5.u32 & 0x1000) != 0;
	ctx.cr5.lt = (ctx.r5.u32 & 0x800) != 0;
	ctx.cr5.gt = (ctx.r5.u32 & 0x400) != 0;
	ctx.cr5.eq = (ctx.r5.u32 & 0x200) != 0;
	ctx.cr5.so = (ctx.r5.u32 & 0x100) != 0;
	ctx.cr6.lt = (ctx.r5.u32 & 0x80) != 0;
	ctx.cr6.gt = (ctx.r5.u32 & 0x40) != 0;
	ctx.cr6.eq = (ctx.r5.u32 & 0x20) != 0;
	ctx.cr6.so = (ctx.r5.u32 & 0x10) != 0;
	ctx.cr7.lt = (ctx.r5.u32 & 0x8) != 0;
	ctx.cr7.gt = (ctx.r5.u32 & 0x4) != 0;
	ctx.cr7.eq = (ctx.r5.u32 & 0x2) != 0;
	ctx.cr7.so = (ctx.r5.u32 & 0x1) != 0;
	// mtxer r6
	ctx.xer.so = (ctx.r6.u64 & 0x80000000) != 0;
	ctx.xer.ov = (ctx.r6.u64 & 0x40000000) != 0;
	ctx.xer.ca = (ctx.r6.u64 & 0x20000000) != 0;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// ld r2,40(r4)
	ctx.r2.u64 = REX_LOAD_U64(ctx.r4.u32 + 40);
	// ld r1,32(r4)
	ctx.r1.u64 = REX_LOAD_U64(ctx.r4.u32 + 32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826BA998) {
	REX_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32781
	ctx.r4.u64 = ctx.r4.u64 | 32781;
	// b 0x823f0350
	sub_823F0350(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826BABE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,48(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// subfc r11,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ~ctx.r10.u32;
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826BC0A0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,28704
	ctx.r10.s64 = ctx.r11.s64 + 28704;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x826bb1a8
	ctx.lr = 0x826BC0CC;
	sub_826BB1A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bc158
	ctx.lr = 0x826BC0D4;
	sub_826BC158(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826bc0f4
	if (ctx.cr6.eq) goto loc_826BC0F4;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// bl 0x823f0350
	ctx.lr = 0x826BC0F0;
	sub_823F0350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_826BC0F4:
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

DEFINE_REX_FUNC(sub_826BF8A0) {
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
	ctx.lr = 0x826BF8A8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x826bf8d8
	if (!ctx.cr6.eq) goto loc_826BF8D8;
loc_826BF8CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_826BF8D8:
	// rlwinm r5,r6,2,14,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r25,r6,16
	r25.u64 = ctx.r6.u32 & 0xFFFF;
	// bl 0x826a2e60
	ctx.lr = 0x826BF8EC;
	sub_826A2E60(ctx, base);
	// rlwinm r6,r29,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x826bf9e4
	if (ctx.cr6.eq) goto loc_826BF9E4;
loc_826BF8FC:
	// lbz r8,0(r26)
	ctx.r8.u64 = REX_LOAD_U8(r26.u32 + 0);
	// cmplwi cr6,r8,44
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 44, ctx.xer);
	// bne cr6,0x826bf948
	if (!ctx.cr6.eq) goto loc_826BF948;
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x826bf928
	if (!ctx.cr6.eq) goto loc_826BF928;
	// rlwinm r11,r30,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x3FFFC;
	// li r27,0
	r27.s64 = 0;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stwx r9,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r9.u32);
loc_826BF928:
	// clrlwi r11,r30,16
	ctx.r11.u64 = r30.u32 & 0xFFFF;
	// addi r10,r25,-1
	ctx.r10.s64 = r25.s64 + -1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x826bf8cc
	if (!ctx.cr6.lt) goto loc_826BF8CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r28,0
	r28.s64 = 0;
	// clrlwi r30,r11,16
	r30.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x826bf9cc
	goto loc_826BF9CC;
loc_826BF948:
	// cmplwi cr6,r8,45
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 45, ctx.xer);
	// bne cr6,0x826bf964
	if (!ctx.cr6.eq) goto loc_826BF964;
	// clrlwi r11,r28,16
	ctx.r11.u64 = r28.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826bf8cc
	if (!ctx.cr6.eq) goto loc_826BF8CC;
	// li r27,1
	r27.s64 = 1;
	// b 0x826bf9cc
	goto loc_826BF9CC;
loc_826BF964:
	// cmplwi cr6,r8,48
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 48, ctx.xer);
	// blt cr6,0x826bf9a4
	if (ctx.cr6.lt) goto loc_826BF9A4;
	// cmplwi cr6,r8,57
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 57, ctx.xer);
	// bgt cr6,0x826bf9a4
	if (ctx.cr6.gt) goto loc_826BF9A4;
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x3FFFC;
	// clrlwi r11,r28,16
	ctx.r11.u64 = r28.u32 & 0xFFFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwzx r11,r10,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// clrlwi r28,r9,16
	r28.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// stwx r4,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r4.u32);
	// b 0x826bf9cc
	goto loc_826BF9CC;
loc_826BF9A4:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x826bf8cc
	if (!ctx.cr6.eq) goto loc_826BF8CC;
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x826bf9cc
	if (!ctx.cr6.eq) goto loc_826BF9CC;
	// rlwinm r11,r30,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x3FFFC;
	// li r27,0
	r27.s64 = 0;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stwx r9,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r9.u32);
loc_826BF9CC:
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r26,r26,2
	r26.s64 = r26.s64 + 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x826bf8fc
	if (ctx.cr6.lt) goto loc_826BF8FC;
loc_826BF9E4:
	// addi r11,r25,-1
	ctx.r11.s64 = r25.s64 + -1;
	// clrlwi r10,r30,16
	ctx.r10.u64 = r30.u32 & 0xFFFF;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_826CCF88) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,356(r3)
	REX_STORE_U32(ctx.r3.u32 + 356, ctx.r9.u32);
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// stw r10,368(r3)
	REX_STORE_U32(ctx.r3.u32 + 368, ctx.r10.u32);
	// lhz r8,110(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 110);
	// sth r8,396(r3)
	REX_STORE_U16(ctx.r3.u32 + 396, ctx.r8.u16);
	// lhz r7,110(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 110);
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r8,396(r3)
	REX_STORE_U16(ctx.r3.u32 + 396, ctx.r8.u16);
	// stw r10,356(r3)
	REX_STORE_U32(ctx.r3.u32 + 356, ctx.r10.u32);
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// ble cr6,0x826ccfdc
	if (!ctx.cr6.gt) goto loc_826CCFDC;
	// li r10,2
	ctx.r10.s64 = 2;
loc_826CCFDC:
	// stw r10,368(r3)
	REX_STORE_U32(ctx.r3.u32 + 368, ctx.r10.u32);
	// lwz r8,88(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r9,356(r3)
	REX_STORE_U32(ctx.r3.u32 + 356, ctx.r9.u32);
	// lhz r11,110(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 110);
	// sth r11,396(r3)
	REX_STORE_U16(ctx.r3.u32 + 396, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826D2200) {
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
	ctx.lr = 0x826D2208;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	r24.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r28,r24
	r28.u64 = r24.u64;
	// mr r26,r24
	r26.u64 = r24.u64;
	// beq cr6,0x826d2b50
	if (ctx.cr6.eq) goto loc_826D2B50;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x826d2b50
	if (ctx.cr6.eq) goto loc_826D2B50;
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// mr r19,r24
	r19.u64 = r24.u64;
	// addi r11,r11,-352
	ctx.r11.s64 = ctx.r11.s64 + -352;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x826d2628
	if (ctx.cr6.gt) goto loc_826D2628;
	// li r20,1
	r20.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x826d22f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826D22F0;
	// bdzf 4*cr6+eq,0x826d22f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826D22F8;
	// bdzf 4*cr6+eq,0x826d2300
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826D2300;
	// bdzf 4*cr6+eq,0x826d2628
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826D2628;
	// bdzf 4*cr6+eq,0x826d230c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826D230C;
	// bdzf 4*cr6+eq,0x826d231c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826D231C;
	// bne cr6,0x826d232c
	if (!ctx.cr6.eq) goto loc_826D232C;
	// mr r30,r20
	r30.u64 = r20.u64;
loc_826D2280:
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826ccd10
	ctx.lr = 0x826D2294;
	sub_826CCD10(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d2b58
	if (ctx.cr6.lt) goto loc_826D2B58;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ccae0
	ctx.lr = 0x826D22A8;
	sub_826CCAE0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d2b58
	if (ctx.cr6.lt) goto loc_826D2B58;
	// bl 0x826e23f8
	ctx.lr = 0x826D22B8;
	sub_826E23F8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826d24c8
	if (ctx.cr6.eq) goto loc_826D24C8;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// lis r10,-32158
	ctx.r10.s64 = -2107506688;
	// addi r9,r11,8408
	ctx.r9.s64 = ctx.r11.s64 + 8408;
	// addi r8,r10,-8088
	ctx.r8.s64 = ctx.r10.s64 + -8088;
	// stw r9,484(r3)
	REX_STORE_U32(ctx.r3.u32 + 484, ctx.r9.u32);
	// stw r8,712(r31)
	REX_STORE_U32(r31.u32 + 712, ctx.r8.u32);
loc_826D22E0:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x826d2340
	if (ctx.cr6.eq) goto loc_826D2340;
	// lwz r11,12(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 12);
	// b 0x826d2344
	goto loc_826D2344;
loc_826D22F0:
	// li r30,2
	r30.s64 = 2;
	// b 0x826d2280
	goto loc_826D2280;
loc_826D22F8:
	// li r30,3
	r30.s64 = 3;
	// b 0x826d2280
	goto loc_826D2280;
loc_826D2300:
	// li r30,3
	r30.s64 = 3;
	// mr r19,r20
	r19.u64 = r20.u64;
	// b 0x826d2280
	goto loc_826D2280;
loc_826D230C:
	// li r20,1
	r20.s64 = 1;
	// li r30,2
	r30.s64 = 2;
	// mr r26,r20
	r26.u64 = r20.u64;
	// b 0x826d22e0
	goto loc_826D22E0;
loc_826D231C:
	// li r20,1
	r20.s64 = 1;
	// li r30,3
	r30.s64 = 3;
	// mr r26,r20
	r26.u64 = r20.u64;
	// b 0x826d22e0
	goto loc_826D22E0;
loc_826D232C:
	// li r20,1
	r20.s64 = 1;
	// li r30,3
	r30.s64 = 3;
	// mr r26,r20
	r26.u64 = r20.u64;
	// mr r19,r20
	r19.u64 = r20.u64;
	// b 0x826d22e0
	goto loc_826D22E0;
loc_826D2340:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_826D2344:
	// stw r11,704(r31)
	REX_STORE_U32(r31.u32 + 704, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r11,708(r31)
	REX_STORE_U32(r31.u32 + 708, ctx.r11.u32);
	// lhz r6,20(r25)
	ctx.r6.u64 = REX_LOAD_U16(r25.u32 + 20);
	// lwz r3,4(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x826f1c58
	ctx.lr = 0x826D2364;
	sub_826F1C58(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x826d2628
	if (!ctx.cr6.gt) goto loc_826D2628;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// addi r11,r31,476
	ctx.r11.s64 = r31.s64 + 476;
	// beq cr6,0x826d239c
	if (ctx.cr6.eq) goto loc_826D239C;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r10,r27,-4
	ctx.r10.s64 = r27.s64 + -4;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_826D238C:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x826d238c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826D238C;
	// b 0x826d23b4
	goto loc_826D23B4;
loc_826D239C:
	// li r9,7
	ctx.r9.s64 = 7;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826D23AC:
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x826d23ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826D23AC;
loc_826D23B4:
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r27,480(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 480);
	// rlwinm r8,r10,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x826d23d4
	if (ctx.cr6.eq) goto loc_826D23D4;
	// stw r20,412(r31)
	REX_STORE_U32(r31.u32 + 412, r20.u32);
loc_826D23D4:
	// lhz r8,500(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 500);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x826d23f4
	if (ctx.cr6.eq) goto loc_826D23F4;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// ori r8,r10,128
	ctx.r8.u64 = ctx.r10.u64 | 128;
	// ori r22,r9,128
	r22.u64 = ctx.r9.u64 | 128;
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
loc_826D23F4:
	// lhz r10,14(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 14);
	// lwz r9,16(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 16);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r8,r8,7
	ctx.r8.s64 = ctx.r8.s64 + 7;
	// rlwinm r8,r8,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x826d2414
	if (ctx.cr6.gt) goto loc_826D2414;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_826D2414:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r29,20(r23)
	r29.u64 = REX_LOAD_U32(r23.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r17,0(r23)
	r17.u64 = REX_LOAD_U32(r23.u32 + 0);
	// lhz r16,22(r25)
	r16.u64 = REX_LOAD_U16(r25.u32 + 22);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lhz r15,20(r25)
	r15.u64 = REX_LOAD_U16(r25.u32 + 20);
	// lhz r26,12(r25)
	r26.u64 = REX_LOAD_U16(r25.u32 + 12);
	// lwz r30,8(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 8);
	// lwz r14,16(r25)
	r14.u64 = REX_LOAD_U32(r25.u32 + 16);
	// lhz r8,2(r25)
	ctx.r8.u64 = REX_LOAD_U16(r25.u32 + 2);
	// lwz r7,4(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 4);
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r29,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// stw r17,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r17.u32);
	// sth r16,118(r1)
	REX_STORE_U16(ctx.r1.u32 + 118, r16.u16);
	// sth r15,110(r1)
	REX_STORE_U16(ctx.r1.u32 + 110, r15.u16);
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r14.u32);
	// bl 0x826e2e70
	ctx.lr = 0x826D2468;
	sub_826E2E70(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d2b58
	if (ctx.cr6.lt) goto loc_826D2B58;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261d770
	ctx.lr = 0x826D247C;
	sub_8261D770(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bgt cr6,0x826d2628
	if (ctx.cr6.gt) goto loc_826D2628;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lhz r10,110(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 110);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bgt cr6,0x826d24a4
	if (ctx.cr6.gt) goto loc_826D24A4;
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// addi r10,r11,19480
	ctx.r10.s64 = ctx.r11.s64 + 19480;
	// b 0x826d24ac
	goto loc_826D24AC;
loc_826D24A4:
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// addi r10,r11,20752
	ctx.r10.s64 = ctx.r11.s64 + 20752;
loc_826D24AC:
	// stw r10,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r10.u32);
	// lhz r11,34(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 34);
	// mulli r3,r11,1776
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// bl 0x826e07e0
	ctx.lr = 0x826D24BC;
	sub_826E07E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// bne cr6,0x826d24dc
	if (!ctx.cr6.eq) goto loc_826D24DC;
loc_826D24C8:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cd0
	return;
loc_826D24DC:
	// lhz r11,34(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r5,r11,1776
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// bl 0x826a2e60
	ctx.lr = 0x826D24EC;
	sub_826A2E60(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826e0d80
	ctx.lr = 0x826D24F8;
	sub_826E0D80(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d2b58
	if (ctx.cr6.lt) goto loc_826D2B58;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x826ccbf0
	ctx.lr = 0x826D2510;
	sub_826CCBF0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d2b58
	if (ctx.cr6.lt) goto loc_826D2B58;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x826e1320
	ctx.lr = 0x826D2528;
	sub_826E1320(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d2b58
	if (ctx.cr6.lt) goto loc_826D2B58;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,320(r28)
	REX_STORE_U32(r28.u32 + 320, ctx.r11.u32);
	// bl 0x826cfe68
	ctx.lr = 0x826D2544;
	sub_826CFE68(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d2b58
	if (ctx.cr6.lt) goto loc_826D2B58;
	// lwz r11,588(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 588);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826d2578
	if (ctx.cr6.eq) goto loc_826D2578;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// stw r24,516(r31)
	REX_STORE_U32(r31.u32 + 516, r24.u32);
	// lis r10,-32145
	ctx.r10.s64 = -2106654720;
	// addi r9,r11,7216
	ctx.r9.s64 = ctx.r11.s64 + 7216;
	// addi r8,r10,6960
	ctx.r8.s64 = ctx.r10.s64 + 6960;
	// stw r9,512(r31)
	REX_STORE_U32(r31.u32 + 512, ctx.r9.u32);
	// stw r8,484(r28)
	REX_STORE_U32(r28.u32 + 484, ctx.r8.u32);
loc_826D2578:
	// stw r24,420(r31)
	REX_STORE_U32(r31.u32 + 420, r24.u32);
	// stw r24,352(r31)
	REX_STORE_U32(r31.u32 + 352, r24.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// stw r11,360(r31)
	REX_STORE_U32(r31.u32 + 360, ctx.r11.u32);
	// lwz r7,360(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 360);
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// stw r11,364(r31)
	REX_STORE_U32(r31.u32 + 364, ctx.r11.u32);
	// lhz r10,34(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 34);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x826d25ac
	if (!ctx.cr6.eq) goto loc_826D25AC;
	// lwz r10,104(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 104);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826d25bc
	if (ctx.cr6.eq) goto loc_826D25BC;
loc_826D25AC:
	// lwz r11,60(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x826d2628
	if (!ctx.cr6.gt) goto loc_826D2628;
	// stw r20,352(r31)
	REX_STORE_U32(r31.u32 + 352, r20.u32);
loc_826D25BC:
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826d26e0
	if (!ctx.cr6.eq) goto loc_826D26E0;
	// rlwinm r11,r22,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d25d8
	if (ctx.cr6.eq) goto loc_826D25D8;
	// stw r20,420(r31)
	REX_STORE_U32(r31.u32 + 420, r20.u32);
loc_826D25D8:
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826d25f8
	if (!ctx.cr6.eq) goto loc_826D25F8;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x826d25f8
	if (!ctx.cr6.eq) goto loc_826D25F8;
	// lhz r11,34(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 34);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x826d25fc
	if (ctx.cr6.gt) goto loc_826D25FC;
loc_826D25F8:
	// stw r24,420(r31)
	REX_STORE_U32(r31.u32 + 420, r24.u32);
loc_826D25FC:
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826d2638
	if (!ctx.cr6.eq) goto loc_826D2638;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r8,364(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 364);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,104(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 104);
	// lhz r5,34(r28)
	ctx.r5.u64 = REX_LOAD_U16(r28.u32 + 34);
	// bl 0x826d0f58
	ctx.lr = 0x826D2620;
	sub_826D0F58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826d26e0
	if (ctx.cr6.eq) goto loc_826D26E0;
loc_826D2628:
	// lis r29,-32764
	r29.s64 = -2147221504;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cd0
	return;
loc_826D2638:
	// stw r24,424(r31)
	REX_STORE_U32(r31.u32 + 424, r24.u32);
	// lhz r5,34(r28)
	ctx.r5.u64 = REX_LOAD_U16(r28.u32 + 34);
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// bne cr6,0x826d2654
	if (!ctx.cr6.eq) goto loc_826D2654;
	// lwz r11,104(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 104);
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// beq cr6,0x826d267c
	if (ctx.cr6.eq) goto loc_826D267C;
loc_826D2654:
	// li r8,63
	ctx.r8.s64 = 63;
	// lwz r6,104(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 104);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826d0f58
	ctx.lr = 0x826D266C;
	sub_826D0F58(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d2b58
	if (ctx.cr6.lt) goto loc_826D2B58;
	// stw r20,424(r31)
	REX_STORE_U32(r31.u32 + 424, r20.u32);
loc_826D267C:
	// li r3,168
	ctx.r3.s64 = 168;
	// bl 0x826e07e0
	ctx.lr = 0x826D2684;
	sub_826E07E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,428(r31)
	REX_STORE_U32(r31.u32 + 428, ctx.r3.u32);
	// beq cr6,0x826d24c8
	if (ctx.cr6.eq) goto loc_826D24C8;
	// bl 0x826372b0
	ctx.lr = 0x826D2694;
	sub_826372B0(ctx, base);
	// li r11,1000
	ctx.r11.s64 = 1000;
	// li r7,1000
	ctx.r7.s64 = 1000;
	// lwz r3,428(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 428);
	// stw r11,432(r31)
	REX_STORE_U32(r31.u32 + 432, ctx.r11.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r5,452(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 452);
	// lhz r11,110(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 110);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// slw r11,r20,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r10.u8 & 0x3F));
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x826e2f20
	ctx.lr = 0x826D26D4;
	sub_826E2F20(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d2b58
	if (ctx.cr6.lt) goto loc_826D2B58;
loc_826D26E0:
	// stw r24,448(r31)
	REX_STORE_U32(r31.u32 + 448, r24.u32);
	// stw r24,468(r31)
	REX_STORE_U32(r31.u32 + 468, r24.u32);
	// stw r24,464(r31)
	REX_STORE_U32(r31.u32 + 464, r24.u32);
	// stw r24,460(r31)
	REX_STORE_U32(r31.u32 + 460, r24.u32);
	// stw r24,440(r31)
	REX_STORE_U32(r31.u32 + 440, r24.u32);
	// lwz r11,60(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x826d2754
	if (!ctx.cr6.gt) goto loc_826D2754;
	// lhz r11,34(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 34);
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x826D2710;
	sub_826E07E0(ctx, base);
	// stw r3,448(r31)
	REX_STORE_U32(r31.u32 + 448, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826d24c8
	if (ctx.cr6.eq) goto loc_826D24C8;
	// lhz r11,34(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 34);
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x826D272C;
	sub_826E07E0(ctx, base);
	// stw r3,464(r31)
	REX_STORE_U32(r31.u32 + 464, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826d24c8
	if (ctx.cr6.eq) goto loc_826D24C8;
	// lhz r11,34(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 34);
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x826D2748;
	sub_826E07E0(ctx, base);
	// stw r3,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826d24c8
	if (ctx.cr6.eq) goto loc_826D24C8;
loc_826D2754:
	// lhz r11,34(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 34);
	// lwz r10,360(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 360);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x826d2768
	if (ctx.cr6.gt) goto loc_826D2768;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_826D2768:
	// lwz r10,424(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 424);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826d2780
	if (ctx.cr6.eq) goto loc_826D2780;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bgt cr6,0x826d2780
	if (ctx.cr6.gt) goto loc_826D2780;
	// li r11,6
	ctx.r11.s64 = 6;
loc_826D2780:
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e07e0
	ctx.lr = 0x826D278C;
	sub_826E07E0(ctx, base);
	// stw r3,380(r31)
	REX_STORE_U32(r31.u32 + 380, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826d24c8
	if (ctx.cr6.eq) goto loc_826D24C8;
	// stw r3,384(r31)
	REX_STORE_U32(r31.u32 + 384, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e07e0
	ctx.lr = 0x826D27A4;
	sub_826E07E0(ctx, base);
	// stw r3,388(r31)
	REX_STORE_U32(r31.u32 + 388, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826d24c8
	if (ctx.cr6.eq) goto loc_826D24C8;
	// stw r3,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r3.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ccf88
	ctx.lr = 0x826D27C0;
	sub_826CCF88(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// stw r24,316(r31)
	REX_STORE_U32(r31.u32 + 316, r24.u32);
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r24,324(r31)
	REX_STORE_U32(r31.u32 + 324, r24.u32);
	// stw r24,320(r31)
	REX_STORE_U32(r31.u32 + 320, r24.u32);
	// stw r11,336(r31)
	REX_STORE_U32(r31.u32 + 336, ctx.r11.u32);
	// lwz r11,452(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 452);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x826d27f0
	if (!ctx.cr6.eq) goto loc_826D27F0;
	// stw r20,316(r31)
	REX_STORE_U32(r31.u32 + 316, r20.u32);
	// b 0x826d280c
	goto loc_826D280C;
loc_826D27F0:
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x826d280c
	if (ctx.cr6.eq) goto loc_826D280C;
	// stw r20,324(r31)
	REX_STORE_U32(r31.u32 + 324, r20.u32);
	// lwz r11,452(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 452);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x826d280c
	if (!ctx.cr6.lt) goto loc_826D280C;
	// stw r20,320(r31)
	REX_STORE_U32(r31.u32 + 320, r20.u32);
loc_826D280C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,452(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 452);
	// bl 0x826cdc50
	ctx.lr = 0x826D2818;
	sub_826CDC50(ctx, base);
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// lwz r10,328(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 328);
	// cmpwi cr6,r10,10000
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10000, ctx.xer);
	// stw r11,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r11.u32);
	// bge cr6,0x826d2628
	if (!ctx.cr6.lt) goto loc_826D2628;
	// cmpwi cr6,r11,10000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10000, ctx.xer);
	// bge cr6,0x826d2628
	if (!ctx.cr6.lt) goto loc_826D2628;
	// lwz r11,316(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826d284c
	if (!ctx.cr6.eq) goto loc_826D284C;
	// lwz r11,324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826d28ac
	if (ctx.cr6.eq) goto loc_826D28AC;
loc_826D284C:
	// lwz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 360);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x826D2858;
	sub_826E07E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r3.u32);
	// beq cr6,0x826d24c8
	if (ctx.cr6.eq) goto loc_826D24C8;
	// lwz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 360);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826d2894
	if (!ctx.cr6.gt) goto loc_826D2894;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_826D2878:
	// lwz r9,344(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 344);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r24,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r24.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,360(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 360);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x826d2878
	if (ctx.cr6.lt) goto loc_826D2878;
loc_826D2894:
	// lwz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 360);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x826D28A0;
	sub_826E07E0(ctx, base);
	// stw r3,348(r31)
	REX_STORE_U32(r31.u32 + 348, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826d24c8
	if (ctx.cr6.eq) goto loc_826D24C8;
loc_826D28AC:
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// rlwinm r10,r22,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x80;
	// addi r9,r11,7128
	ctx.r9.s64 = ctx.r11.s64 + 7128;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,492(r28)
	REX_STORE_U32(r28.u32 + 492, ctx.r9.u32);
	// stw r24,472(r31)
	REX_STORE_U32(r31.u32 + 472, r24.u32);
	// beq cr6,0x826d28e4
	if (ctx.cr6.eq) goto loc_826D28E4;
	// lhz r11,500(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 500);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x826d17c0
	ctx.lr = 0x826D28D8;
	sub_826D17C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d2b58
	if (ctx.cr6.lt) goto loc_826D2B58;
loc_826D28E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cd000
	ctx.lr = 0x826D28EC;
	sub_826CD000(ctx, base);
	// lhz r11,2(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x826d2904
	if (!ctx.cr6.eq) goto loc_826D2904;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// addi r10,r11,-1520
	ctx.r10.s64 = ctx.r11.s64 + -1520;
	// b 0x826d290c
	goto loc_826D290C;
loc_826D2904:
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// addi r10,r11,-1400
	ctx.r10.s64 = ctx.r11.s64 + -1400;
loc_826D290C:
	// stw r10,508(r31)
	REX_STORE_U32(r31.u32 + 508, ctx.r10.u32);
	// addi r25,r31,224
	r25.s64 = r31.s64 + 224;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826388d8
	ctx.lr = 0x826D2920;
	sub_826388D8(ctx, base);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x826d2938
	if (ctx.cr6.eq) goto loc_826D2938;
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 8);
	// stw r10,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r10.u32);
loc_826D2938:
	// lwz r11,288(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 288);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826d2970
	if (!ctx.cr6.eq) goto loc_826D2970;
	// lwz r11,320(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 320);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r8,r10,-24824
	ctx.r8.s64 = ctx.r10.s64 + -24824;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// addi r6,r9,-6344
	ctx.r6.s64 = ctx.r9.s64 + -6344;
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// addi r5,r7,-5392
	ctx.r5.s64 = ctx.r7.s64 + -5392;
	// lwz r4,320(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 320);
	// stw r6,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r6.u32);
	// b 0x826d29c4
	goto loc_826D29C4;
loc_826D2970:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826d2994
	if (!ctx.cr6.eq) goto loc_826D2994;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// addi r8,r10,-11680
	ctx.r8.s64 = ctx.r10.s64 + -11680;
	// addi r7,r9,6936
	ctx.r7.s64 = ctx.r9.s64 + 6936;
	// addi r5,r6,8264
	ctx.r5.s64 = ctx.r6.s64 + 8264;
	// b 0x826d29b4
	goto loc_826D29B4;
loc_826D2994:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x826d2b50
	if (!ctx.cr6.eq) goto loc_826D2B50;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// addi r8,r10,-23080
	ctx.r8.s64 = ctx.r10.s64 + -23080;
	// addi r7,r9,-2696
	ctx.r7.s64 = ctx.r9.s64 + -2696;
	// addi r5,r6,-24
	ctx.r5.s64 = ctx.r6.s64 + -24;
loc_826D29B4:
	// lwz r11,320(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 320);
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// lwz r4,320(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 320);
	// stw r7,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r7.u32);
loc_826D29C4:
	// lwz r3,320(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 320);
	// li r11,-2
	ctx.r11.s64 = -2;
	// li r10,3
	ctx.r10.s64 = 3;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// stw r5,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
	// stw r10,72(r28)
	REX_STORE_U32(r28.u32 + 72, ctx.r10.u32);
	// beq cr6,0x826d29ec
	if (ctx.cr6.eq) goto loc_826D29EC;
	// bl 0x821aae70
	ctx.lr = 0x826D29E8;
	sub_821AAE70(ctx, base);
	// stw r3,0(r21)
	REX_STORE_U32(r21.u32 + 0, ctx.r3.u32);
loc_826D29EC:
	// stw r24,116(r31)
	REX_STORE_U32(r31.u32 + 116, r24.u32);
	// addi r27,r31,120
	r27.s64 = r31.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lhz r4,34(r28)
	ctx.r4.u64 = REX_LOAD_U16(r28.u32 + 34);
	// bl 0x826e4200
	ctx.lr = 0x826D2A00;
	sub_826E4200(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d2b58
	if (ctx.cr6.lt) goto loc_826D2B58;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r26,r24
	r26.u64 = r24.u64;
	// lhz r10,34(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 34);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826d2a8c
	if (ctx.cr6.eq) goto loc_826D2A8C;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_826D2A24:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r24,144(r11)
	REX_STORE_U32(ctx.r11.u32 + 144, r24.u32);
	// lhz r10,34(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 34);
	// mullw r9,r10,r10
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x826D2A40;
	sub_826E07E0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// add r8,r30,r11
	ctx.r8.u64 = r30.u64 + ctx.r11.u64;
	// stw r3,148(r8)
	REX_STORE_U32(ctx.r8.u32 + 148, ctx.r3.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// add r7,r30,r11
	ctx.r7.u64 = r30.u64 + ctx.r11.u64;
	// lwz r3,148(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826d24c8
	if (ctx.cr6.eq) goto loc_826D24C8;
	// lhz r11,34(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x826D2A74;
	sub_826A2E60(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r30,r30,152
	r30.s64 = r30.s64 + 152;
	// lhz r8,34(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 34);
	// cmpw cr6,r26,r8
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x826d2a24
	if (ctx.cr6.lt) goto loc_826D2A24;
loc_826D2A8C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r10,60(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 60);
	// stw r24,572(r28)
	REX_STORE_U32(r28.u32 + 572, r24.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// stw r11,576(r28)
	REX_STORE_U32(r28.u32 + 576, ctx.r11.u32);
	// blt cr6,0x826d2ab4
	if (ctx.cr6.lt) goto loc_826D2AB4;
	// lwz r11,64(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 64);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826d2abc
	if (!ctx.cr6.eq) goto loc_826D2ABC;
loc_826D2AB4:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x826d2ac4
	if (ctx.cr6.eq) goto loc_826D2AC4;
loc_826D2ABC:
	// stw r20,176(r28)
	REX_STORE_U32(r28.u32 + 176, r20.u32);
	// b 0x826d2ac8
	goto loc_826D2AC8;
loc_826D2AC4:
	// stw r24,176(r28)
	REX_STORE_U32(r28.u32 + 176, r24.u32);
loc_826D2AC8:
	// stw r24,124(r28)
	REX_STORE_U32(r28.u32 + 124, r24.u32);
	// stw r20,732(r28)
	REX_STORE_U32(r28.u32 + 732, r20.u32);
	// lhz r11,34(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 34);
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x826e07e0
	ctx.lr = 0x826D2ADC;
	sub_826E07E0(ctx, base);
	// stw r3,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826d24c8
	if (ctx.cr6.eq) goto loc_826D24C8;
	// lhz r11,34(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 34);
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x826a2e60
	ctx.lr = 0x826D2AF8;
	sub_826A2E60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82130e88
	ctx.lr = 0x826D2B08;
	sub_82130E88(ctx, base);
	// lwz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r20,696(r31)
	REX_STORE_U32(r31.u32 + 696, r20.u32);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r24,300(r31)
	REX_STORE_U32(r31.u32 + 300, r24.u32);
	// rldicr r11,r10,63,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stw r24,156(r31)
	REX_STORE_U32(r31.u32 + 156, r24.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// sth r24,154(r31)
	REX_STORE_U16(r31.u32 + 154, r24.u16);
	// std r11,168(r31)
	REX_STORE_U64(r31.u32 + 168, ctx.r11.u64);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// std r11,176(r31)
	REX_STORE_U64(r31.u32 + 176, ctx.r11.u64);
	// xori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,692(r31)
	REX_STORE_U32(r31.u32 + 692, ctx.r11.u32);
	// stw r11,0(r18)
	REX_STORE_U32(r18.u32 + 0, ctx.r11.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cd0
	return;
loc_826D2B50:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,87
	r29.u64 = r29.u64 | 87;
loc_826D2B58:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82722AB8) {
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
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// bl 0x827708c8
	ctx.lr = 0x82722AD8;
	sub_827708C8(ctx, base);
	// addi r3,r31,156
	ctx.r3.s64 = r31.s64 + 156;
	// bl 0x827707f8
	ctx.lr = 0x82722AE0;
	sub_827707F8(ctx, base);
	// lwz r3,304(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 304);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82722af8
	if (ctx.cr6.eq) goto loc_82722AF8;
	// bl 0x8271b1a0
	ctx.lr = 0x82722AF4;
	sub_8271B1A0(ctx, base);
	// stw r30,304(r31)
	REX_STORE_U32(r31.u32 + 304, r30.u32);
loc_82722AF8:
	// lwz r3,308(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 308);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82722b0c
	if (ctx.cr6.eq) goto loc_82722B0C;
	// bl 0x8271b1a0
	ctx.lr = 0x82722B08;
	sub_8271B1A0(ctx, base);
	// stw r30,308(r31)
	REX_STORE_U32(r31.u32 + 308, r30.u32);
loc_82722B0C:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82722b20
	if (ctx.cr6.eq) goto loc_82722B20;
	// bl 0x8271b1a0
	ctx.lr = 0x82722B1C;
	sub_8271B1A0(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
loc_82722B20:
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

DEFINE_REX_FUNC(sub_827247B8) {
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
	ctx.lr = 0x827247C0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r30,16(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// blt cr6,0x82724938
	if (ctx.cr6.lt) goto loc_82724938;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82724938
	if (ctx.cr6.lt) goto loc_82724938;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// blt cr6,0x82724938
	if (ctx.cr6.lt) goto loc_82724938;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// blt cr6,0x82724938
	if (ctx.cr6.lt) goto loc_82724938;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x82724938
	if (ctx.cr6.lt) goto loc_82724938;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82724938
	if (ctx.cr6.lt) goto loc_82724938;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x82724938
	if (ctx.cr6.lt) goto loc_82724938;
	// lwz r23,244(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(r23.s32, 1, ctx.xer);
	// blt cr6,0x82724938
	if (ctx.cr6.lt) goto loc_82724938;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8272483c
	if (ctx.cr6.gt) goto loc_8272483C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8272483C:
	// add r10,r29,r28
	ctx.r10.u64 = r29.u64 + r28.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82724938
	if (ctx.cr6.gt) goto loc_82724938;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82724858
	if (ctx.cr6.gt) goto loc_82724858;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_82724858:
	// add r10,r27,r7
	ctx.r10.u64 = r27.u64 + ctx.r7.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82724938
	if (ctx.cr6.gt) goto loc_82724938;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82724874
	if (ctx.cr6.gt) goto loc_82724874;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_82724874:
	// add r10,r26,r24
	ctx.r10.u64 = r26.u64 + r24.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82724938
	if (ctx.cr6.gt) goto loc_82724938;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82724890
	if (ctx.cr6.gt) goto loc_82724890;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_82724890:
	// add r10,r25,r23
	ctx.r10.u64 = r25.u64 + r23.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82724938
	if (ctx.cr6.gt) goto loc_82724938;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lwz r6,296(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 296);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82723288
	ctx.lr = 0x827248B0;
	sub_82723288(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82724938
	if (!ctx.cr6.eq) goto loc_82724938;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82723288
	ctx.lr = 0x827248C8;
	sub_82723288(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82724938
	if (!ctx.cr6.eq) goto loc_82724938;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82723288
	ctx.lr = 0x827248E0;
	sub_82723288(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82724938
	if (!ctx.cr6.eq) goto loc_82724938;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82723288
	ctx.lr = 0x827248F8;
	sub_82723288(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82724938
	if (!ctx.cr6.eq) goto loc_82724938;
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
	// stw r26,20(r31)
	REX_STORE_U32(r31.u32 + 20, r26.u32);
	// stw r25,24(r31)
	REX_STORE_U32(r31.u32 + 24, r25.u32);
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
	// stw r7,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// stw r24,28(r31)
	REX_STORE_U32(r31.u32 + 28, r24.u32);
	// stw r23,32(r31)
	REX_STORE_U32(r31.u32 + 32, r23.u32);
	// bl 0x827235c0
	ctx.lr = 0x82724928;
	sub_827235C0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_82724938:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82730F50) {
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
	ctx.lr = 0x82730F58;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ca4
	ctx.lr = 0x82730F60;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82730f88
	if (!ctx.cr6.eq) goto loc_82730F88;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2cf0
	ctx.lr = 0x82730F84;
	// b 0x826a1cf8
	return;
loc_82730F88:
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,172
	ctx.r7.s64 = ctx.r1.s64 + 172;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fd178
	ctx.lr = 0x82730FAC;
	sub_826FD178(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82731888
	if (!ctx.cr6.eq) goto loc_82731888;
	// lwz r11,15336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15336);
	// lwz r27,15396(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 15396);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82730ff0
	if (!ctx.cr6.eq) goto loc_82730FF0;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,148
	ctx.r9.s64 = ctx.r1.s64 + 148;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,188
	ctx.r7.s64 = ctx.r1.s64 + 188;
	// addi r6,r1,180
	ctx.r6.s64 = ctx.r1.s64 + 180;
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fd178
	ctx.lr = 0x82730FE8;
	sub_826FD178(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82731888
	if (!ctx.cr6.eq) goto loc_82731888;
loc_82730FF0:
	// addi r24,r31,15420
	r24.s64 = r31.s64 + 15420;
	// lwz r8,15424(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 15424);
	// addi r30,r31,15412
	r30.s64 = r31.s64 + 15412;
	// lwz r6,15416(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 15416);
	// addi r26,r31,15408
	r26.s64 = r31.s64 + 15408;
	// addi r9,r31,15428
	ctx.r9.s64 = r31.s64 + 15428;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827307e0
	ctx.lr = 0x8273101C;
	sub_827307E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82731888
	if (!ctx.cr6.eq) goto loc_82731888;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82731154
	if (!ctx.cr6.gt) goto loc_82731154;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82731130
	if (ctx.cr6.eq) goto loc_82731130;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x827310e4
	if (ctx.cr6.eq) goto loc_827310E4;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x82731060
	if (ctx.cr6.eq) goto loc_82731060;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2cf0
	ctx.lr = 0x8273105C;
	// b 0x826a1cf8
	return;
loc_82731060:
	// lwz r11,15416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15416);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r27,15436(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 15436);
	// stw r9,15336(r31)
	REX_STORE_U32(r31.u32 + 15336, ctx.r9.u32);
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,164(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f3,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,160(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lfs f12,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lfs f6,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,156(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f11,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,196(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lfs f10,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,184(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lfs f9,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,180(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfs f8,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,188(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lfs f7,44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,192(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lfs f5,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,148(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f7,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,144(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// b 0x82731168
	goto loc_82731168;
loc_827310E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,15416(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15416);
	// lwz r27,15432(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 15432);
	// stw r11,15336(r31)
	REX_STORE_U32(r31.u32 + 15336, ctx.r11.u32);
	// lfs f1,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,164(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f3,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,160(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f13,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lfs f12,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lfs f6,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,156(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f0,24(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// b 0x82731164
	goto loc_82731164;
loc_82731130:
	// lwz r11,15416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15416);
	// lfs f6,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f7,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,144(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// b 0x82731168
	goto loc_82731168;
loc_82731154:
	// lfs f0,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,156(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f1.f64 = double(temp.f32);
loc_82731164:
	// lfs f7,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f7.f64 = double(temp.f32);
loc_82731168:
	// lwz r11,15336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15336);
	// lwz r30,3800(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 3800);
	// lwz r29,3804(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 3804);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwz r28,3808(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 3808);
	// bne cr6,0x8273118c
	if (!ctx.cr6.eq) goto loc_8273118C;
	// lwz r30,3768(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 3768);
	// lwz r29,3772(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 3772);
	// lwz r28,3776(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 3776);
loc_8273118C:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,15440(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 15440);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfd f31,-3744(r9)
	f31.u64 = REX_LOAD_U64(ctx.r9.u32 + -3744);
	// lfd f30,3728(r8)
	f30.u64 = REX_LOAD_U64(ctx.r8.u32 + 3728);
	// lfs f29,3704(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3704);
	f29.f64 = double(temp.f32);
	// lfs f28,25700(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 25700);
	f28.f64 = double(temp.f32);
	// lfs f27,3716(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 3716);
	f27.f64 = double(temp.f32);
	// bne cr6,0x82731230
	if (!ctx.cr6.eq) goto loc_82731230;
	// lfs f13,15444(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 15444);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x82731230
	if (!ctx.cr6.eq) goto loc_82731230;
	// lfs f13,15448(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 15448);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f3,f13
	ctx.cr6.compare(ctx.f3.f64, ctx.f13.f64);
	// bne cr6,0x82731230
	if (!ctx.cr6.eq) goto loc_82731230;
	// lfs f13,15452(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 15452);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,172(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x82731230
	if (!ctx.cr6.eq) goto loc_82731230;
	// lfs f13,15456(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 15456);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,176(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x82731230
	if (!ctx.cr6.eq) goto loc_82731230;
	// lfs f13,15460(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 15460);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f6,f13
	ctx.cr6.compare(ctx.f6.f64, ctx.f13.f64);
	// bne cr6,0x82731230
	if (!ctx.cr6.eq) goto loc_82731230;
	// lfs f13,15464(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 15464);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82731230
	if (!ctx.cr6.eq) goto loc_82731230;
	// lwz r9,288(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 288);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82731230
	if (ctx.cr6.eq) goto loc_82731230;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82731230
	if (!ctx.cr6.eq) goto loc_82731230;
	// cmpwi cr6,r10,18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 18, ctx.xer);
	// bne cr6,0x827312e8
	if (!ctx.cr6.eq) goto loc_827312E8;
loc_82731230:
	// cmpwi cr6,r10,18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 18, ctx.xer);
	// bne cr6,0x82731268
	if (!ctx.cr6.eq) goto loc_82731268;
	// lwz r11,15424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15424);
	// lfs f13,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f27
	ctx.cr6.compare(ctx.f13.f64, f27.f64);
	// bne cr6,0x82731254
	if (!ctx.cr6.eq) goto loc_82731254;
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f28
	ctx.cr6.compare(ctx.f12.f64, f28.f64);
	// ble cr6,0x827312e8
	if (!ctx.cr6.gt) goto loc_827312E8;
loc_82731254:
	// fcmpu cr6,f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f29.f64);
	// bne cr6,0x82731268
	if (!ctx.cr6.eq) goto loc_82731268;
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f28
	ctx.cr6.compare(ctx.f13.f64, f28.f64);
	// bgt cr6,0x827312e8
	if (ctx.cr6.gt) goto loc_827312E8;
loc_82731268:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x82731284
	if (!ctx.cr6.eq) goto loc_82731284;
	// fmr f5,f30
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = f30.f64;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// b 0x827312a8
	goto loc_827312A8;
loc_82731284:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(r27.s32, 1, ctx.xer);
	// bne cr6,0x8273129c
	if (!ctx.cr6.eq) goto loc_8273129C;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f5,f1
	ctx.f5.f64 = ctx.f1.f64;
	// b 0x827312a8
	goto loc_827312A8;
loc_8273129C:
	// lfs f5,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,172(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f2.f64 = double(temp.f32);
loc_827312A8:
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// lwz r6,3752(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3752);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lwz r5,3748(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3748);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r4,3744(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f7,f0
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = ctx.f0.f64;
	// bl 0x8272bb90
	ctx.lr = 0x827312CC;
	sub_8272BB90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82731888
	if (!ctx.cr6.eq) goto loc_82731888;
	// lfs f0,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,156(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f1.f64 = double(temp.f32);
	// lfs f7,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f7.f64 = double(temp.f32);
loc_827312E8:
	// lwz r11,15336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15336);
	// lfs f13,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,172(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,176(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stfs f1,15440(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 15440, temp.u32);
	// stfs f13,15444(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 15444, temp.u32);
	// stfs f3,15448(r31)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r31.u32 + 15448, temp.u32);
	// stfs f12,15452(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 15452, temp.u32);
	// stfs f11,15456(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 15456, temp.u32);
	// stfs f6,15460(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r31.u32 + 15460, temp.u32);
	// stfs f0,15464(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 15464, temp.u32);
	// bne cr6,0x8273148c
	if (!ctx.cr6.eq) goto loc_8273148C;
	// lfs f0,15468(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 15468);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,196(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f3.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x827313a8
	if (!ctx.cr6.eq) goto loc_827313A8;
	// lfs f0,15472(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 15472);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x827313a8
	if (!ctx.cr6.eq) goto loc_827313A8;
	// lfs f0,15476(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 15476);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bne cr6,0x827313a8
	if (!ctx.cr6.eq) goto loc_827313A8;
	// lfs f0,15480(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 15480);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,188(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x827313a8
	if (!ctx.cr6.eq) goto loc_827313A8;
	// lfs f0,15484(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 15484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,192(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x827313a8
	if (!ctx.cr6.eq) goto loc_827313A8;
	// lfs f0,15488(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 15488);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x827313a8
	if (!ctx.cr6.eq) goto loc_827313A8;
	// lfs f0,15492(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 15492);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bne cr6,0x827313a8
	if (!ctx.cr6.eq) goto loc_827313A8;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827313a8
	if (ctx.cr6.eq) goto loc_827313A8;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(r25.s32, 2, ctx.xer);
	// bne cr6,0x827313a8
	if (!ctx.cr6.eq) goto loc_827313A8;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x82731458
	if (!ctx.cr6.eq) goto loc_82731458;
loc_827313A8:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x827313e4
	if (!ctx.cr6.eq) goto loc_827313E4;
	// lwz r11,15424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15424);
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, f27.f64);
	// bne cr6,0x827313d0
	if (!ctx.cr6.eq) goto loc_827313D0;
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f28
	ctx.cr6.compare(ctx.f13.f64, f28.f64);
	// bgt cr6,0x82731458
	if (ctx.cr6.gt) goto loc_82731458;
loc_827313D0:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bne cr6,0x827313e4
	if (!ctx.cr6.eq) goto loc_827313E4;
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// ble cr6,0x82731458
	if (!ctx.cr6.gt) goto loc_82731458;
loc_827313E4:
	// lwz r11,15396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82731404
	if (!ctx.cr6.eq) goto loc_82731404;
	// fmr f5,f30
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = f30.f64;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// b 0x82731428
	goto loc_82731428;
loc_82731404:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8273141c
	if (!ctx.cr6.eq) goto loc_8273141C;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f5,f1
	ctx.f5.f64 = ctx.f1.f64;
	// b 0x82731428
	goto loc_82731428;
loc_8273141C:
	// lfs f5,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,188(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f2.f64 = double(temp.f32);
loc_82731428:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,3756(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3756);
	// lwz r5,3760(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3760);
	// lfs f6,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f6.f64 = double(temp.f32);
	// lwz r6,3764(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3764);
	// lwz r7,3812(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3812);
	// lwz r8,3816(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3816);
	// lwz r9,3820(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3820);
	// bl 0x8272bb90
	ctx.lr = 0x8273144C;
	sub_8272BB90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82731888
	if (!ctx.cr6.eq) goto loc_82731888;
	// lfs f7,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f7.f64 = double(temp.f32);
loc_82731458:
	// lfs f0,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,188(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,192(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,15468(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 15468, temp.u32);
	// stfs f13,15472(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 15472, temp.u32);
	// stfs f12,15476(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 15476, temp.u32);
	// stfs f11,15480(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 15480, temp.u32);
	// stfs f10,15484(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 15484, temp.u32);
	// stfs f9,15488(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 15488, temp.u32);
	// stfs f7,15492(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 15492, temp.u32);
loc_8273148C:
	// lwz r6,0(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r11,r6,-11
	ctx.r11.s64 = ctx.r6.s64 + -11;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bgt cr6,0x8273182c
	if (ctx.cr6.gt) goto loc_8273182C;
	// lis r12,-32141
	ctx.r12.s64 = -2106392576;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,5300
	ctx.r12.s64 = ctx.r12.s64 + 5300;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82731508;
	case 1:
		goto loc_82731508;
	case 2:
		goto loc_8273182C;
	case 3:
		goto loc_82731508;
	case 4:
		goto loc_82731508;
	case 5:
		goto loc_82731508;
	case 6:
		goto loc_82731508;
	case 7:
		goto loc_82731508;
	case 8:
		goto loc_82731508;
	case 9:
		goto loc_82731508;
	case 10:
		goto loc_82731578;
	case 11:
		goto loc_8273182C;
	case 12:
		goto loc_82731508;
	case 13:
		goto loc_82731508;
	case 14:
		goto loc_8273182C;
	case 15:
		goto loc_8273182C;
	case 16:
		goto loc_82731508;
	case 17:
		goto loc_8273182C;
	case 18:
		goto loc_82731508;
	case 19:
		goto loc_82731508;
	case 20:
		goto loc_82731508;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82731508:
	// lwz r11,3776(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3776);
	// lwz r27,3772(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 3772);
	// lwz r26,3768(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 3768);
	// lwz r30,3808(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 3808);
	// lwz r29,3804(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 3804);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r11,3820(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3820);
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// lwz r28,3800(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 3800);
	// lwz r10,3816(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3816);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r9,3812(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3812);
	// lwz r8,15424(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 15424);
	// lwz r7,0(r24)
	ctx.r7.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r5,15344(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 15344);
	// lwz r4,15340(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15340);
	// lwz r3,15404(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15404);
	// stw r30,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// stw r29,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r29.u32);
	// stw r28,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// bl 0x82730180
	ctx.lr = 0x82731560;
	sub_82730180(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82731884
	if (ctx.cr6.eq) goto loc_82731884;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2cf0
	ctx.lr = 0x82731574;
	// b 0x826a1cf8
	return;
loc_82731578:
	// lwz r11,15424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15424);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.f12.u64);
	// lwz r4,204(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// lfs f11,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// lfs f9,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fctiwz f8,f11
	ctx.f8.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.f10.u64);
	// lwz r11,204(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// stfd f8,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.f8.u64);
	// fcmpu cr6,f9,f27
	ctx.cr6.compare(ctx.f9.f64, f27.f64);
	// lwz r30,204(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// bne cr6,0x827315d4
	if (!ctx.cr6.eq) goto loc_827315D4;
	// lwz r5,3812(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3812);
	// lwz r6,3816(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3816);
	// lwz r7,3820(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3820);
	// lwz r8,3768(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3768);
	// lwz r9,3772(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3772);
	// lwz r10,3776(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3776);
	// b 0x827315ec
	goto loc_827315EC;
loc_827315D4:
	// lwz r5,3768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3768);
	// lwz r6,3772(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3772);
	// lwz r7,3776(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3776);
	// lwz r8,3812(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3812);
	// lwz r9,3816(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3816);
	// lwz r10,3820(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3820);
loc_827315EC:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82731634
	if (!ctx.cr6.eq) goto loc_82731634;
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// lwz r3,3800(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3800);
	// lwz r30,3808(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 3808);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r29,3804(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 3804);
	// lwz r4,15344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15344);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// lwz r3,15340(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15340);
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// bl 0x8277c7b0
	ctx.lr = 0x82731620;
	sub_8277C7B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2cf0
	ctx.lr = 0x82731630;
	// b 0x826a1cf8
	return;
loc_82731634:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x8273167c
	if (!ctx.cr6.eq) goto loc_8273167C;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r4,3800(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3800);
	// lwz r3,3808(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3808);
	// lwz r11,3804(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3804);
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r4,15344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15344);
	// lwz r3,15340(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15340);
	// bl 0x8277d4e0
	ctx.lr = 0x82731668;
	sub_8277D4E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2cf0
	ctx.lr = 0x82731678;
	// b 0x826a1cf8
	return;
loc_8273167C:
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x827316c4
	if (!ctx.cr6.eq) goto loc_827316C4;
	// lwz r4,3808(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3808);
	// lwz r3,3804(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3804);
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r29,3800(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 3800);
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lwz r4,15344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15344);
	// lwz r3,15340(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15340);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// bl 0x8277ce78
	ctx.lr = 0x827316B0;
	sub_8277CE78(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2cf0
	ctx.lr = 0x827316C0;
	// b 0x826a1cf8
	return;
loc_827316C4:
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x8273170c
	if (!ctx.cr6.eq) goto loc_8273170C;
	// lwz r4,3808(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3808);
	// lwz r3,3804(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3804);
	// lwz r29,3800(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 3800);
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// lwz r4,15344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15344);
	// lwz r3,15340(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15340);
	// bl 0x8277c110
	ctx.lr = 0x827316F8;
	sub_8277C110(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2cf0
	ctx.lr = 0x82731708;
	// b 0x826a1cf8
	return;
loc_8273170C:
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x82731754
	if (!ctx.cr6.eq) goto loc_82731754;
	// lwz r4,3808(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3808);
	// lwz r3,3804(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3804);
	// lwz r29,3800(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 3800);
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// lwz r4,15344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15344);
	// lwz r3,15340(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15340);
	// bl 0x8277bae8
	ctx.lr = 0x82731740;
	sub_8277BAE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2cf0
	ctx.lr = 0x82731750;
	// b 0x826a1cf8
	return;
loc_82731754:
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// bne cr6,0x8273179c
	if (!ctx.cr6.eq) goto loc_8273179C;
	// lwz r4,3808(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3808);
	// lwz r3,3804(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3804);
	// lwz r29,3800(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 3800);
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// lwz r4,15344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15344);
	// lwz r3,15340(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15340);
	// bl 0x8277b8a0
	ctx.lr = 0x82731788;
	sub_8277B8A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2cf0
	ctx.lr = 0x82731798;
	// b 0x826a1cf8
	return;
loc_8273179C:
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// bne cr6,0x827317e4
	if (!ctx.cr6.eq) goto loc_827317E4;
	// lwz r4,3808(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3808);
	// lwz r3,3804(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3804);
	// lwz r29,3800(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 3800);
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// lwz r4,15344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15344);
	// lwz r3,15340(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15340);
	// bl 0x8277b4f8
	ctx.lr = 0x827317D0;
	sub_8277B4F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2cf0
	ctx.lr = 0x827317E0;
	// b 0x826a1cf8
	return;
loc_827317E4:
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// bne cr6,0x82731884
	if (!ctx.cr6.eq) goto loc_82731884;
	// lwz r4,3808(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3808);
	// lwz r3,3804(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3804);
	// lwz r29,3800(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 3800);
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// lwz r4,15344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15344);
	// lwz r3,15340(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15340);
	// bl 0x8277b138
	ctx.lr = 0x82731818;
	sub_8277B138(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2cf0
	ctx.lr = 0x82731828;
	// b 0x826a1cf8
	return;
loc_8273182C:
	// lwz r11,15336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15336);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82731884
	if (!ctx.cr6.eq) goto loc_82731884;
	// lwz r11,15364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15364);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,15360(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15360);
	// lwz r5,3800(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3800);
	// mullw r30,r11,r10
	r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r4,3812(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3812);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x8272b210
	ctx.lr = 0x82731858;
	sub_8272B210(ctx, base);
	// srawi r30,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	r30.s64 = r30.s32 >> 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,3804(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3804);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r4,3816(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3816);
	// bl 0x8272b340
	ctx.lr = 0x82731870;
	sub_8272B340(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,3808(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3808);
	// lwz r4,3820(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3820);
	// bl 0x8272b340
	ctx.lr = 0x82731884;
	sub_8272B340(ctx, base);
loc_82731884:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82731888:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2cf0
	ctx.lr = 0x82731894;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8276E8D8) {
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
	// beq cr6,0x8276e92c
	if (ctx.cr6.eq) goto loc_8276E92C;
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276e904
	if (ctx.cr6.eq) goto loc_8276E904;
	// bl 0x8271b1a0
	ctx.lr = 0x8276E904;
	sub_8271B1A0(ctx, base);
loc_8276E904:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276e914
	if (ctx.cr6.eq) goto loc_8276E914;
	// bl 0x8271b1a0
	ctx.lr = 0x8276E914;
	sub_8271B1A0(ctx, base);
loc_8276E914:
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276e924
	if (ctx.cr6.eq) goto loc_8276E924;
	// bl 0x8271b1a0
	ctx.lr = 0x8276E924;
	sub_8271B1A0(ctx, base);
loc_8276E924:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8271b1a0
	ctx.lr = 0x8276E92C;
	sub_8271B1A0(ctx, base);
loc_8276E92C:
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

DEFINE_REX_FUNC(sub_8276F488) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x8271b190
	ctx.lr = 0x8276F4A4;
	sub_8271B190(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276f558
	if (ctx.cr6.eq) goto loc_8276F558;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x8276F4BC;
	sub_826A2E60(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8271b190
	ctx.lr = 0x8276F4C8;
	sub_8271B190(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// beq cr6,0x8276f520
	if (ctx.cr6.eq) goto loc_8276F520;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8271b190
	ctx.lr = 0x8276F4E0;
	sub_8271B190(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276f520
	if (ctx.cr6.eq) goto loc_8276F520;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,128
	ctx.r3.s64 = 128;
	// addi r10,r11,31
	ctx.r10.s64 = ctx.r11.s64 + 31;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r9,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r9.u32);
	// bl 0x8271b190
	ctx.lr = 0x8276F50C;
	sub_8271B190(ctx, base);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// bne cr6,0x8276f570
	if (!ctx.cr6.eq) goto loc_8276F570;
loc_8276F520:
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276f530
	if (ctx.cr6.eq) goto loc_8276F530;
	// bl 0x8271b1a0
	ctx.lr = 0x8276F530;
	sub_8271B1A0(ctx, base);
loc_8276F530:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276f540
	if (ctx.cr6.eq) goto loc_8276F540;
	// bl 0x8271b1a0
	ctx.lr = 0x8276F540;
	sub_8271B1A0(ctx, base);
loc_8276F540:
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276f550
	if (ctx.cr6.eq) goto loc_8276F550;
	// bl 0x8271b1a0
	ctx.lr = 0x8276F550;
	sub_8271B1A0(ctx, base);
loc_8276F550:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8271b1a0
	ctx.lr = 0x8276F558;
	sub_8271B1A0(ctx, base);
loc_8276F558:
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
loc_8276F570:
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_827765A8) {
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
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r5,132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,124(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827765DC;
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

DEFINE_REX_FUNC(sub_8277B088) {
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
	// lis r10,12593
	ctx.r10.s64 = 825294848;
	// lwz r11,220(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lis r31,-32106
	r31.s64 = -2104098816;
	// ori r10,r10,13392
	ctx.r10.u64 = ctx.r10.u64 | 13392;
	// lis r30,12889
	r30.s64 = 844693504;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// ori r30,r30,21849
	r30.u64 = r30.u64 | 21849;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r10,29976(r31)
	REX_STORE_U32(r31.u32 + 29976, ctx.r10.u32);
	// stw r7,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r7.u32);
	// stw r8,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r8.u32);
	// stw r9,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r9.u32);
	// stw r4,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r4.u32);
	// stw r5,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r5.u32);
	// stw r6,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r6.u32);
	// bne cr6,0x8277b0f0
	if (!ctx.cr6.eq) goto loc_8277B0F0;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x827794d0
	ctx.lr = 0x8277B0EC;
	sub_827794D0(ctx, base);
	// b 0x8277b120
	goto loc_8277B120;
loc_8277B0F0:
	// lis r10,22870
	ctx.r10.s64 = 1498808320;
	// ori r9,r10,22869
	ctx.r9.u64 = ctx.r10.u64 | 22869;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8277b10c
	if (!ctx.cr6.eq) goto loc_8277B10C;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x827794d0
	ctx.lr = 0x8277B108;
	sub_827794D0(ctx, base);
	// b 0x8277b120
	goto loc_8277B120;
loc_8277B10C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8277b11c
	if (!ctx.cr6.eq) goto loc_8277B11C;
	// bl 0x82778710
	ctx.lr = 0x8277B118;
	sub_82778710(ctx, base);
	// b 0x8277b120
	goto loc_8277B120;
loc_8277B11C:
	// bl 0x82776ba0
	ctx.lr = 0x8277B120;
	sub_82776BA0(ctx, base);
loc_8277B120:
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

DEFINE_REX_FUNC(sub_8277F5C8) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// b 0x8277ec28
	sub_8277EC28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8277FB00) {
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
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// ble cr6,0x8277fb1c
	if (!ctx.cr6.gt) goto loc_8277FB1C;
	// li r4,3
	ctx.r4.s64 = 3;
loc_8277FB1C:
	// lwz r11,21928(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21928);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,-28072
	ctx.r11.s64 = ctx.r11.s64 + -28072;
	// bne cr6,0x8277fb88
	if (!ctx.cr6.eq) goto loc_8277FB88;
	// mulli r10,r4,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(28));
	// lwzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// stw r6,22016(r3)
	REX_STORE_U32(ctx.r3.u32 + 22016, ctx.r6.u32);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// addi r31,r11,20
	r31.s64 = ctx.r11.s64 + 20;
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r9,22020(r3)
	REX_STORE_U32(ctx.r3.u32 + 22020, ctx.r9.u32);
	// lwzx r8,r10,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stw r8,22024(r3)
	REX_STORE_U32(ctx.r3.u32 + 22024, ctx.r8.u32);
	// lwzx r7,r10,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stw r7,22028(r3)
	REX_STORE_U32(ctx.r3.u32 + 22028, ctx.r7.u32);
	// lwzx r6,r10,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// stw r6,22032(r3)
	REX_STORE_U32(ctx.r3.u32 + 22032, ctx.r6.u32);
	// lwzx r5,r10,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// stw r5,22036(r3)
	REX_STORE_U32(ctx.r3.u32 + 22036, ctx.r5.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,22040(r3)
	REX_STORE_U32(ctx.r3.u32 + 22040, ctx.r11.u32);
	// b 0x8277fbf8
	goto loc_8277FBF8;
loc_8277FB88:
	// mulli r7,r4,28
	ctx.r7.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(28));
	// addi r6,r11,112
	ctx.r6.s64 = ctx.r11.s64 + 112;
	// addi r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 + 112;
	// addi r8,r11,112
	ctx.r8.s64 = ctx.r11.s64 + 112;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// addi r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 + 112;
	// lwzx r6,r7,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// addi r9,r11,112
	ctx.r9.s64 = ctx.r11.s64 + 112;
	// addi r31,r10,16
	r31.s64 = ctx.r10.s64 + 16;
	// addi r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 + 112;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// stw r6,22016(r3)
	REX_STORE_U32(ctx.r3.u32 + 22016, ctx.r6.u32);
	// addi r6,r10,20
	ctx.r6.s64 = ctx.r10.s64 + 20;
	// lwzx r10,r7,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// stw r10,22020(r3)
	REX_STORE_U32(ctx.r3.u32 + 22020, ctx.r10.u32);
	// lwzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r8,22024(r3)
	REX_STORE_U32(ctx.r3.u32 + 22024, ctx.r8.u32);
	// lwzx r5,r7,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r5,22028(r3)
	REX_STORE_U32(ctx.r3.u32 + 22028, ctx.r5.u32);
	// lwzx r10,r7,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + r31.u32);
	// stw r10,22032(r3)
	REX_STORE_U32(ctx.r3.u32 + 22032, ctx.r10.u32);
	// lwzx r9,r7,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// stw r9,22036(r3)
	REX_STORE_U32(ctx.r3.u32 + 22036, ctx.r9.u32);
	// lwzx r8,r7,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stw r8,22040(r3)
	REX_STORE_U32(ctx.r3.u32 + 22040, ctx.r8.u32);
loc_8277FBF8:
	// bl 0x8277f8c8
	ctx.lr = 0x8277FBFC;
	sub_8277F8C8(ctx, base);
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

DEFINE_REX_FUNC(sub_827886E8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// bne cr6,0x82788718
	if (!ctx.cr6.eq) goto loc_82788718;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82788764
	if (!ctx.cr6.eq) goto loc_82788764;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,31
	ctx.r3.s64 = 31;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82788718:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8278873c
	if (!ctx.cr6.eq) goto loc_8278873C;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x827887ac
	if (!ctx.cr6.eq) goto loc_827887AC;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,13
	ctx.r3.s64 = 13;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8278873C:
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x82788784
	if (!ctx.cr6.eq) goto loc_82788784;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x827887cc
	if (!ctx.cr6.eq) goto loc_827887CC;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,53
	ctx.r3.s64 = 53;
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82788764:
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x827887cc
	if (!ctx.cr6.eq) goto loc_827887CC;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,35
	ctx.r3.s64 = 35;
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82788784:
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x827887cc
	if (!ctx.cr6.eq) goto loc_827887CC;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x827887cc
	if (!ctx.cr6.eq) goto loc_827887CC;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,71
	ctx.r3.s64 = 71;
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_827887AC:
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// bne cr6,0x827887cc
	if (!ctx.cr6.eq) goto loc_827887CC;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,17
	ctx.r3.s64 = 17;
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_827887CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8278A318) {
	REX_FUNC_PROLOGUE();
	// lwz r11,14560(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14560);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x8278a32c
	if (!ctx.cr6.gt) goto loc_8278A32C;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,14560(r3)
	REX_STORE_U32(ctx.r3.u32 + 14560, ctx.r11.u32);
loc_8278A32C:
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
	// beq cr6,0x8278a358
	if (ctx.cr6.eq) goto loc_8278A358;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
loc_8278A358:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8278a364
	if (!ctx.cr6.eq) goto loc_8278A364;
	// stw r10,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
loc_8278A364:
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x8278a374
	if (!ctx.cr6.eq) goto loc_8278A374;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8278a37c
	goto loc_8278A37C;
loc_8278A374:
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_8278A37C:
	// stw r11,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// beq cr6,0x8278a390
	if (ctx.cr6.eq) goto loc_8278A390;
	// stw r10,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// blr 
	return;
loc_8278A390:
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8278B918) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_8278B928:
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// addi r9,r10,-128
	ctx.r9.s64 = ctx.r10.s64 + -128;
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8278b928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278B928;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8278C9E0) {
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
	ctx.lr = 0x8278C9E8;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r26,92(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r10,r8,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,-21960
	ctx.r11.s64 = ctx.r11.s64 + -21960;
	// rlwinm r9,r9,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r31,r9,r11
	r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r28,r26,1
	r28.s64 = r26.s64 + 1;
	// subf r27,r6,r4
	r27.u64 = ctx.r4.u64 - ctx.r6.u64;
	// li r25,8
	r25.s64 = 8;
loc_8278CA14:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x8278ca5c
	if (!ctx.cr6.gt) goto loc_8278CA5C;
	// addi r11,r1,-208
	ctx.r11.s64 = ctx.r1.s64 + -208;
	// lhz r9,2(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 2);
	// lhz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U16(r30.u32 + 0);
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// add r11,r27,r6
	ctx.r11.u64 = r27.u64 + ctx.r6.u64;
loc_8278CA3C:
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r24,0(r11)
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mullw r8,r9,r4
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// mullw r9,r24,r3
	ctx.r9.s64 = int64_t(r24.s32) * int64_t(ctx.r3.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8278ca3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278CA3C;
loc_8278CA5C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x8278cac4
	if (!ctx.cr6.gt) goto loc_8278CAC4;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// subf r8,r7,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r7.u64;
	// addi r10,r1,-208
	ctx.r10.s64 = ctx.r1.s64 + -208;
loc_8278CA70:
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// lhz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 0);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mullw r11,r3,r11
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r11,r29,r4
	ctx.r11.u64 = ctx.r4.u64 - r29.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// srawi. r11,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8278caac
	if (!ctx.cr0.lt) goto loc_8278CAAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8278cab8
	goto loc_8278CAB8;
loc_8278CAAC:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x8278cab8
	if (!ctx.cr6.gt) goto loc_8278CAB8;
	// li r11,255
	ctx.r11.s64 = 255;
loc_8278CAB8:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stbux r11,r8,r7
	ea = ctx.r8.u32 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x8278ca70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278CA70;
loc_8278CAC4:
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// bne 0x8278ca14
	if (!ctx.cr0.eq) goto loc_8278CA14;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82792330) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f1,1676(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1676);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82135630
	ctx.lr = 0x8279234C;
	sub_82135630(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stfs f1,4368(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 4368, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82792718) {
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
	// li r5,502
	ctx.r5.s64 = 502;
	// addi r31,r11,-12400
	r31.s64 = ctx.r11.s64 + -12400;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,26
	ctx.r3.s64 = r31.s64 + 26;
	// bl 0x826a2e60
	ctx.lr = 0x82792740;
	sub_826A2E60(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r31,528
	ctx.r3.s64 = r31.s64 + 528;
	// addi r4,r11,-14032
	ctx.r4.s64 = ctx.r11.s64 + -14032;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x826a1e70
	ctx.lr = 0x82792754;
	sub_826A1E70(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = r31.s64 + 600;
	// bl 0x826a2e60
	ctx.lr = 0x82792764;
	sub_826A2E60(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1040(r31)
	REX_STORE_U32(r31.u32 + 1040, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,1048(r31)
	REX_STORE_U32(r31.u32 + 1048, ctx.r9.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,1044(r31)
	REX_STORE_U32(r31.u32 + 1044, ctx.r10.u32);
	// stw r11,1052(r31)
	REX_STORE_U32(r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	REX_STORE_U32(r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	REX_STORE_U32(r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	REX_STORE_U32(r31.u32 + 1064, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82793518) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-10824
	ctx.r3.s64 = ctx.r11.s64 + -10824;
	// b 0x822f6630
	sub_822F6630(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82793658) {
	REX_FUNC_PROLOGUE();
	// .long 0x20002dc
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793748) {
	REX_FUNC_PROLOGUE();
	// .long 0x20001f4
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793878) {
	REX_FUNC_PROLOGUE();
	// .long 0x20001f8
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_827939A8) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010081
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793B18) {
	REX_FUNC_PROLOGUE();
	// .long 0x201012b
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793CB8) {
	REX_FUNC_PROLOGUE();
	// .long 0x201025b
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793E78) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101c5
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82794058) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000002
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82794268) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101ff
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82799670) {
	REX_FUNC_PROLOGUE();
	// lwz r10,1368(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1368);
	// srawi r9,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 16;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r10,256
	ctx.r9.s64 = ctx.r10.s64 + 256;
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// rlwinm r4,r9,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// addi r6,r5,64
	ctx.r6.s64 = ctx.r5.s64 + 64;
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// cmplwi cr6,r3,128
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 128, ctx.xer);
	// blt cr6,0x82799760
	if (ctx.cr6.lt) goto loc_82799760;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// blt cr6,0x827996ec
	if (ctx.cr6.lt) goto loc_827996EC;
	// lhz r8,62(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 62);
	// neg r4,r8
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// subf r7,r4,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r4.u64;
	// subf r3,r9,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r9.u64;
	// xor r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// srawi r8,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 31;
	// srawi r7,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 31;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// and r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 & ctx.r4.u64;
	// andc r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// or r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 | ctx.r7.u64;
	// or r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 | ctx.r10.u64;
	// b 0x827996fc
	goto loc_827996FC;
loc_827996EC:
	// lwz r10,1484(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1484);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
loc_827996FC:
	// cmplwi cr6,r6,128
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 128, ctx.xer);
	// blt cr6,0x82799748
	if (ctx.cr6.lt) goto loc_82799748;
	// lhz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 64);
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// neg r7,r10
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// subf r6,r11,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r5,r7,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r7.u64;
	// xor r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// srawi r10,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 31;
	// srawi r9,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 31;
	// and r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 & ctx.r8.u64;
	// or r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 | ctx.r9.u64;
	// and r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 & ctx.r7.u64;
	// andc r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// or r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 | ctx.r5.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// blr 
	return;
loc_82799748:
	// lwz r11,1480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1480);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// blr 
	return;
loc_82799760:
	// lwz r10,1484(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1484);
	// rlwinm r7,r6,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,1480(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 1480);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// lhzx r5,r8,r7
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827B05F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x827B0600;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltish v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x4)));
	// li r9,1120
	ctx.r9.s64 = 1120;
	// vspltish v1,3
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x3)));
	// addi r29,r1,112
	r29.s64 = ctx.r1.s64 + 112;
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vrlh v0,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, result);
	}
	// li r8,0
	ctx.r8.s64 = 0;
	// lvx128 v13,r6,r9
	ea = (ctx.r6.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// vaddshs v2,v1,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// vsubshs v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// stvx128 v0,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x827af878
	ctx.lr = 0x827B0648;
	sub_827AF878(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lvx128 v2,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// vspltish v1,7
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x7)));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827afb20
	ctx.lr = 0x827B0660;
	sub_827AFB20(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_827B2A28) {
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
	ctx.lr = 0x827B2A30;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 + ctx.r4.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v11,4
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x4)));
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lvx128 v61,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvsl v6,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// vperm128 v5,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// add r31,r9,r4
	r31.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vperm128 v4,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r30,r7,r4
	r30.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lvx128 v59,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1104
	ctx.r3.s64 = 1104;
	// lvsl v1,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v3,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v58,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v5,v59,v56,v1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// lvx128 v52,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,48
	r28.s64 = 48;
	// lvsl v4,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r27,96
	r27.s64 = 96;
	// lvx128 v57,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v2,v10,v3
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// lvx128 v55,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v30,v52,v53,v4
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v54,r30,r11
	ea = (r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v9,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v7,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r26,144
	r26.s64 = 144;
	// lvsl v6,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r9,192
	ctx.r9.s64 = 192;
	// vperm128 v1,v58,v55,v7
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v49,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v31,v57,v54,v6
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v47,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v29,v0,v30
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v51,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,240
	r31.s64 = 240;
	// lvx128 v50,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v8,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v48,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v4,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vsubshs v1,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// lvsl v5,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r8,288
	ctx.r8.s64 = 288;
	// lvsl v7,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v28,v50,v47,v6
	simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v26,v49,v46,v5
	simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vsubshs v31,v8,v9
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vperm128 v30,v51,v48,v7
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vsubshs v27,v29,v4
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// lvx128 v12,r6,r3
	ea = (ctx.r6.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v25,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v6,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r7,336
	ctx.r7.s64 = 336;
	// vmrghb v5,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v23,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v7,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v24,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v19,v5,v6
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubshs v21,v7,v8
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v20,v6,v7
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsubshs v18,v4,v5
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v17,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v0,v24,v12
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v13,v25,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v2,v23,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v1,v22,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v31,v17,v12
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v30,v16,v12
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v29,v15,v12
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v28,v14,v12
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsrah v27,v0,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v13,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v2,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v1,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v23,v31,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v22,v30,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v21,v29,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v28,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v19,v27,v4
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v18,v26,v3
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v17,v25,v10
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v16,v24,v9
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v15,v23,v8
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvx128 v19,r29,r7
	ea = (r29.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v14,v22,v7
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// stvx128 v18,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v0,v21,v6
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvx128 v17,r29,r28
	ea = (r29.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v13,v20,v5
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvx128 v16,r29,r27
	ea = (r29.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v15,r29,r26
	ea = (r29.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v14,r29,r9
	ea = (r29.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r29,r31
	ea = (r29.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r29,r8
	ea = (r29.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_827BEAC0) {
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
	ctx.lr = 0x827BEAC8;
	// lwz r11,1148(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 1148);
	// addi r31,r1,-96
	r31.s64 = ctx.r1.s64 + -96;
	// lwz r30,1156(r7)
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 1156);
	// addi r26,r1,-80
	r26.s64 = ctx.r1.s64 + -80;
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r29,1164(r7)
	r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 1164);
	// subf r8,r4,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r4.u64;
	// cntlzw r7,r28
	ctx.r7.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// vspltish v8,3
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x3)));
	// stw r11,-96(r1)
	REX_STORE_U32(ctx.r1.u32 + -96, ctx.r11.u32);
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// stw r30,-80(r1)
	REX_STORE_U32(ctx.r1.u32 + -80, r30.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// li r7,1
	ctx.r7.s64 = 1;
	// vspltish v26,7
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_set1_epi16(short(0x7)));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// vspltish v31,1
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// li r27,-32
	r27.s64 = -32;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// slw r8,r7,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// vspltish v30,5
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_set1_epi16(short(0x5)));
	// lvx128 v11,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,-16
	r28.s64 = -16;
	// lvx128 v10,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// vsplth v1,v11,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_set1_epi16(short(0xD0C))));
	// li r31,16
	r31.s64 = 16;
	// vsplth v25,v10,1
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_set1_epi16(short(0xD0C))));
	// add r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 + ctx.r4.u64;
	// bne cr6,0x827bec90
	if (!ctx.cr6.eq) goto loc_827BEC90;
	// lvx128 v60,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lvx128 v61,r9,r31
	ea = (ctx.r9.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v62,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
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
	// ble cr6,0x827bee70
	if (!ctx.cr6.gt) goto loc_827BEE70;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_827BEBB4:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
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
	// vslh v2,v11,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// vadduhm v22,v6,v11
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// lvx128 v57,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v29,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v28,v10,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v27,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
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
	// vslh v19,v9,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
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
	// vslh v17,v7,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
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
	// vadduhm v16,v29,v2
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v15,v27,v28
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v3,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v29,v17,v18
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v2,v22,v16
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vadduhm v28,v21,v15
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
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
	// vsubshs v27,v0,v24
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vadduhm v24,v2,v3
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsubshs v21,v9,v14
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vsubshs v20,v7,v6
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubshs v23,v0,v23
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vadduhm v22,v28,v29
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v19,v24,v1
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v17,v21,v27
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v16,v20,v23
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v18,v22,v1
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
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
	// stvx128 v15,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v14,r7,r31
	ea = (ctx.r7.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r7,48
	ctx.r7.s64 = ctx.r7.s64 + 48;
	// blt cr6,0x827bebb4
	if (ctx.cr6.lt) goto loc_827BEBB4;
	// b 0x827bee70
	goto loc_827BEE70;
loc_827BEC90:
	// li r30,32
	r30.s64 = 32;
	// lvrx128 v52,r31,r11
	temp.u32 = r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v50,r31,r11
	temp.u32 = r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lvlx128 v55,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v54,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r31,r9
	temp.u32 = r31.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v6,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvrx128 v51,r30,r11
	temp.u32 = r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvrx128 v49,r30,r9
	temp.u32 = r30.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v10,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvlx128 v48,r31,r9
	temp.u32 = r31.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v5,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vor128 v9,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v7,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r31,r11
	temp.u32 = r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r30,r11
	temp.u32 = r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v2,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r31,r11
	temp.u32 = r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v4,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v3,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v2,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x827bee70
	if (!ctx.cr6.gt) goto loc_827BEE70;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r29,32
	ctx.r9.s64 = r29.s64 + 32;
loc_827BED14:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v29,v11,v11
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor v11,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// vor v7,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vor v28,v10,v10
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v10,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v41,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor v6,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v2,v11,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v42,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
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
	// lvsl v1,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v23,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v19,v63,v42,v1
	simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vslh v22,v10,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
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
	// vadduhm v15,v24,v2
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrghb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v7,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
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
	// vor v2,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)v18.u8));
	// vadduhm v18,v21,v22
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v24,v23,v11
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vor v27,v9,v9
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v9,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vadduhm v22,v20,v10
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v23,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v6,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v16,v17
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v16,v24,v15
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vslh v21,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v19,v23
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v29,v22,v18
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vslh v24,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v9,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v5,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vslh v23,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v4,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)v14.u8));
	// vadduhm v15,v29,v15
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vadduhm v28,v24,v28
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vor128 v1,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// vadduhm v24,v23,v9
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v14,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v5,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v16,v17
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vsubshs v18,v0,v21
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vsubshs v23,v3,v22
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vsubshs v16,v0,v20
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vsubshs v22,v2,v19
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vadduhm v20,v15,v1
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v15,v29,v14
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vadduhm v21,v17,v1
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v14,v24,v28
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v29,v23,v18
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v28,v22,v16
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vslh v19,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
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
	// vadduhm v22,v21,v29
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v21,v20,v28
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vsubshs v27,v0,v19
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vsubshs v24,v4,v17
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vadduhm v23,v14,v15
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
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
	// vadduhm v20,v24,v27
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v19,v23,v1
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// stvx128 v18,r9,r27
	ea = (ctx.r9.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r9,r28
	ea = (ctx.r9.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v16,v19,v20
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vsrah v15,v16,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// stvx128 v15,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// blt cr6,0x827bed14
	if (ctx.cr6.lt) goto loc_827BED14;
loc_827BEE70:
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// li r11,0
	ctx.r11.s64 = 0;
	// vspltish v12,-1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// vspltish v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x0)));
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// vslh v9,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// bne cr6,0x827beef8
	if (!ctx.cr6.eq) goto loc_827BEEF8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x827bef94
	if (!ctx.cr6.gt) goto loc_827BEF94;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r10,4
	ctx.r10.s64 = 4;
loc_827BEEA4:
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r9,r31
	ea = (ctx.r9.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// vsldoi128 v12,v13,v40,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 12));
	// vsldoi128 v10,v13,v40,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 14));
	// vsldoi128 v7,v13,v40,6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 10));
	// vadduhm v12,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v6,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vslh v5,v12,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v4,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vadduhm v3,v12,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v2,v3,v25
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v1,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsrah v31,v1,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v39,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vor v11,v11,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// stvewx128 v39,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bdnz 0x827beea4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BEEA4;
	// b 0x827bef94
	goto loc_827BEF94;
loc_827BEEF8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x827bef94
	if (!ctx.cr6.gt) goto loc_827BEF94;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r10,r29,32
	ctx.r10.s64 = r29.s64 + 32;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
loc_827BEF10:
	// lvx128 v13,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v10,v13,v38,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 12));
	// vsldoi128 v7,v13,v38,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 14));
	// vsldoi128 v6,v13,v38,6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 10));
	// vsldoi v5,v12,v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 12));
	// vsldoi v4,v12,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 14));
	// vadduhm v3,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsldoi v2,v12,v13,6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 10));
	// vadduhm v1,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v10,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vor v13,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vadduhm v31,v12,v2
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsubshs v30,v0,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v10,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v13,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v27,v0,v31
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vadduhm v24,v10,v29
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v23,v13,v28
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v22,v24,v25
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v21,v23,v25
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v12,v22,v27
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v20,v21,v30
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vsrah v19,v12,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v20,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v37,v11,v19
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)v19.u8)));
	// vpkshus128 v36,v19,v18
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vor128 v11,v37,v18
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)v18.u8)));
	// stvx128 v36,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bdnz 0x827bef10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BEF10;
loc_827BEF94:
	// vand v13,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vcmpgtuh. v12,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), 0xFFFF);
	// mfocrf r11,2
	ctx.r11.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x826a1d00
	return;
}

