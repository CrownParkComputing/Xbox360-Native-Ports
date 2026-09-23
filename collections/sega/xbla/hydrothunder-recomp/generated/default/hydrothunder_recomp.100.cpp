#include "hydrothunder_funcs.100.h"

DEFINE_REX_FUNC(sub_82125C20) {
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
	ctx.lr = 0x82125C28;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82125c8c
	if (!ctx.cr6.gt) goto loc_82125C8C;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r31,r4
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x82125c58
	if (ctx.cr6.gt) goto loc_82125C58;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_82125C58:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82125c8c
	if (!ctx.cr6.gt) goto loc_82125C8C;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269d1d0
	ctx.lr = 0x82125C6C;
	sub_8269D1D0(ctx, base);
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82125C7C;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x82125C84;
	sub_8269D1B8(ctx, base);
	// stw r28,0(r30)
	REX_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r31,8(r30)
	REX_STORE_U32(r30.u32 + 8, r31.u32);
loc_82125C8C:
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8212A934) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212A9B0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,65(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,65(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 65);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8212aa0c
	if (!ctx.cr0.eq) goto loc_8212AA0C;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8212a9e0
	goto loc_8212A9E0;
loc_8212A9D8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8212A9E0:
	// lbz r9,65(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8212a9d8
	if (ctx.cr0.eq) goto loc_8212A9D8;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_8212A9F4:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8212aa1c
	if (!ctx.cr6.eq) goto loc_8212AA1C;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_8212AA0C:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,65(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8212a9f4
	if (ctx.cr0.eq) goto loc_8212A9F4;
loc_8212AA1C:
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212E260) {
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
	// addi r11,r11,-22472
	ctx.r11.s64 = ctx.r11.s64 + -22472;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8212e28c
	if (ctx.cr0.eq) goto loc_8212E28C;
	// bl 0x8269ce98
	ctx.lr = 0x8212E28C;
	sub_8269CE98(ctx, base);
loc_8212E28C:
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

DEFINE_REX_FUNC(sub_82130940) {
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
	// addi r11,r11,26960
	ctx.r11.s64 = ctx.r11.s64 + 26960;
	// li r30,0
	r30.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// bl 0x82120ac0
	ctx.lr = 0x82130984;
	sub_82120AC0(ctx, base);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x82130990;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821309d4
	if (ctx.cr0.eq) goto loc_821309D4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-21632
	ctx.r11.s64 = ctx.r11.s64 + -21632;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r10,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
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
loc_821309D4:
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
	ctx.lr = 0x821309EC;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82134D08) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// mulli r11,r4,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(24));
	// lbz r8,3(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 3);
	// lbz r7,2(r5)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + 2);
	// lbz r6,1(r5)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// addi r8,r4,32
	ctx.r8.s64 = ctx.r4.s64 + 32;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rldicr r5,r5,63,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// or r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 | ctx.r6.u64;
	// srd r8,r5,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r8.u8 & 0x7F));
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// lwz r7,1172(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 1172);
	// addi r9,r11,1172
	ctx.r9.s64 = ctx.r11.s64 + 1172;
	// subfe r9,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r5.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r9,r7,0,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// stw r9,1172(r11)
	REX_STORE_U32(ctx.r11.u32 + 1172, ctx.r9.u32);
	// ld r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 24);
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// std r11,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213A5B8) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82120ac0
	ctx.lr = 0x8213A5E4;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-19028
	ctx.r11.s64 = ctx.r11.s64 + -19028;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x8213a600
	if (ctx.cr0.eq) goto loc_8213A600;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8213A600;
	sub_8269CE98(ctx, base);
loc_8213A600:
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

DEFINE_REX_FUNC(sub_8213C280) {
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
	// stw r4,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,20
	ctx.r4.s64 = ctx.r3.s64 + 20;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8213c958
	ctx.lr = 0x8213C2A8;
	sub_8213C958(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213c2c0
	if (ctx.cr6.eq) goto loc_8213C2C0;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x8213c2c4
	goto loc_8213C2C4;
loc_8213C2C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213C2C4:
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

DEFINE_REX_FUNC(sub_8213F588) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,25(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 25);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8213f5a8
	if (!ctx.cr0.eq) goto loc_8213F5A8;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_8213F5A8:
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
	// bne cr6,0x8213f5c8
	if (!ctx.cr6.eq) goto loc_8213F5C8;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x8213f5e4
	goto loc_8213F5E4;
loc_8213F5C8:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8213f5e0
	if (!ctx.cr6.eq) goto loc_8213F5E0;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x8213f5e4
	goto loc_8213F5E4;
loc_8213F5E0:
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_8213F5E4:
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82143D18) {
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
	ctx.lr = 0x82143D20;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,248(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82143e18
	if (!ctx.cr6.gt) goto loc_82143E18;
	// addi r25,r3,244
	r25.s64 = ctx.r3.s64 + 244;
loc_82143D44:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r31,0(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8228ca78
	ctx.lr = 0x82143D54;
	sub_8228CA78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8228ca78
	ctx.lr = 0x82143D60;
	sub_8228CA78(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// bctrl 
	ctx.lr = 0x82143D78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82143e08
	if (ctx.cr0.eq) goto loc_82143E08;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8228ca78
	ctx.lr = 0x82143D8C;
	sub_8228CA78(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r28,4(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r30,r28,1
	r30.s64 = r28.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82143df0
	if (!ctx.cr6.gt) goto loc_82143DF0;
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
	// bgt cr6,0x82143dbc
	if (ctx.cr6.gt) goto loc_82143DBC;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82143DBC:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82143df0
	if (!ctx.cr6.gt) goto loc_82143DF0;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269d1d0
	ctx.lr = 0x82143DD0;
	sub_8269D1D0(ctx, base);
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82143DE0;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x82143DE8;
	sub_8269D1B8(ctx, base);
	// stw r23,0(r31)
	REX_STORE_U32(r31.u32 + 0, r23.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
loc_82143DF0:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r4,r30,-1
	ctx.r4.s64 = r30.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228ca78
	ctx.lr = 0x82143E00;
	sub_8228CA78(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
loc_82143E08:
	// lwz r11,248(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 248);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82143d44
	if (ctx.cr6.lt) goto loc_82143D44;
loc_82143E18:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82143edc
	if (!ctx.cr0.eq) goto loc_82143EDC;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x822f6280
	ctx.lr = 0x82143E28;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82143e40
	if (ctx.cr0.eq) goto loc_82143E40;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82143b98
	ctx.lr = 0x82143E38;
	sub_82143B98(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x82143e44
	goto loc_82143E44;
loc_82143E40:
	// li r27,0
	r27.s64 = 0;
loc_82143E44:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x82143e64
	if (!ctx.cr6.eq) goto loc_82143E64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-17048
	ctx.r4.s64 = ctx.r11.s64 + -17048;
	// addi r3,r10,-15832
	ctx.r3.s64 = ctx.r10.s64 + -15832;
	// li r5,1737
	ctx.r5.s64 = 1737;
	// bl 0x821231d0
	ctx.lr = 0x82143E64;
	sub_821231D0(ctx, base);
loc_82143E64:
	// lwz r28,248(r24)
	r28.u64 = REX_LOAD_U32(r24.u32 + 248);
	// addi r31,r24,244
	r31.s64 = r24.s64 + 244;
	// lwz r11,252(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 252);
	// addi r29,r28,1
	r29.s64 = r28.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82143ec8
	if (!ctx.cr6.gt) goto loc_82143EC8;
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
	// bgt cr6,0x82143e94
	if (ctx.cr6.gt) goto loc_82143E94;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_82143E94:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82143ec8
	if (!ctx.cr6.gt) goto loc_82143EC8;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269d1d0
	ctx.lr = 0x82143EA8;
	sub_8269D1D0(ctx, base);
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82143EB8;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x82143EC0;
	sub_8269D1B8(ctx, base);
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
loc_82143EC8:
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r4,r29,-1
	ctx.r4.s64 = r29.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228ca78
	ctx.lr = 0x82143ED8;
	sub_8228CA78(ctx, base);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
loc_82143EDC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82151768) {
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
	ctx.lr = 0x82151770;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,12(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82151d50
	ctx.lr = 0x82151784;
	sub_82151D50(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x821517a4
	if (!ctx.cr0.eq) goto loc_821517A4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-11428
	ctx.r4.s64 = ctx.r11.s64 + -11428;
	// addi r3,r10,-11208
	ctx.r3.s64 = ctx.r10.s64 + -11208;
	// li r5,89
	ctx.r5.s64 = 89;
	// bl 0x821231d0
	ctx.lr = 0x821517A4;
	sub_821231D0(ctx, base);
loc_821517A4:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x823fbd18
	ctx.lr = 0x821517C4;
	sub_823FBD18(ctx, base);
	// ld r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// ld r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r28,8(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// addi r30,r28,1
	r30.s64 = r28.s64 + 1;
	// std r8,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// std r7,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// std r8,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// std r7,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// ble cr6,0x8215185c
	if (!ctx.cr6.gt) goto loc_8215185C;
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
	// bgt cr6,0x82151828
	if (ctx.cr6.gt) goto loc_82151828;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82151828:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8215185c
	if (!ctx.cr6.gt) goto loc_8215185C;
	// li r4,16
	ctx.r4.s64 = 16;
	// mulli r3,r29,80
	ctx.r3.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(80));
	// bl 0x8269d1d0
	ctx.lr = 0x8215183C;
	sub_8269D1D0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mulli r5,r28,80
	ctx.r5.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(80));
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8215184C;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x82151854;
	sub_8269D1B8(ctx, base);
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
loc_8215185C:
	// addic. r29,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r29.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// blt 0x82151870
	if (ctx.cr0.lt) goto loc_82151870;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(r29.s32, r30.s32, ctx.xer);
	// blt cr6,0x82151888
	if (ctx.cr6.lt) goto loc_82151888;
loc_82151870:
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
	ctx.lr = 0x82151888;
	sub_821231D0(ctx, base);
loc_82151888:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mulli r9,r29,80
	ctx.r9.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(80));
	// li r11,10
	ctx.r11.s64 = 10;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r10,-8
	ctx.r8.s64 = ctx.r10.s64 + -8;
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821518A8:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r8)
	ea = 8 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x821518a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821518A8;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8215BED0) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215bf74
	if (!ctx.cr6.eq) goto loc_8215BF74;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x822f6830
	ctx.lr = 0x8215BF04;
	sub_822F6830(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8215bf74
	if (ctx.cr0.eq) goto loc_8215BF74;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215c018
	ctx.lr = 0x8215BF18;
	sub_8215C018(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bl 0x8215cbf0
	ctx.lr = 0x8215BF2C;
	sub_8215CBF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215c448
	ctx.lr = 0x8215BF34;
	sub_8215C448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215c230
	ctx.lr = 0x8215BF40;
	sub_8215C230(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8215bf6c
	if (ctx.cr6.eq) goto loc_8215BF6C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215cee0
	ctx.lr = 0x8215BF50;
	sub_8215CEE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8215bf6c
	if (ctx.cr0.eq) goto loc_8215BF6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215BF6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215BF6C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8215bf78
	goto loc_8215BF78;
loc_8215BF74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215BF78:
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

DEFINE_REX_FUNC(sub_8215FA30) {
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
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,8572
	r31.s64 = ctx.r11.s64 + 8572;
	// lwz r11,8600(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8600);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8215fa84
	if (!ctx.cr0.eq) goto loc_8215FA84;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8600(r10)
	REX_STORE_U32(ctx.r10.u32 + 8600, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120ac0
	ctx.lr = 0x8215FA78;
	sub_82120AC0(ctx, base);
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r3,r11,12104
	ctx.r3.s64 = ctx.r11.s64 + 12104;
	// bl 0x8269d008
	ctx.lr = 0x8215FA84;
	sub_8269D008(ctx, base);
loc_8215FA84:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8215fa98
	if (!ctx.cr6.eq) goto loc_8215FA98;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// b 0x8215fa9c
	goto loc_8215FA9C;
loc_8215FA98:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8215FA9C:
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

DEFINE_REX_FUNC(sub_82166DF8) {
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
	ctx.lr = 0x82166E20;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215fb50
	ctx.lr = 0x82166E28;
	sub_8215FB50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82166e54
	if (ctx.cr0.eq) goto loc_82166E54;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-21088
	ctx.r4.s64 = ctx.r11.s64 + -21088;
	// bl 0x8215f338
	ctx.lr = 0x82166E40;
	sub_8215F338(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// bl 0x8215fb50
	ctx.lr = 0x82166E48;
	sub_8215FB50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82166e58
	if (!ctx.cr0.eq) goto loc_82166E58;
loc_82166E54:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82166E58:
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

DEFINE_REX_FUNC(sub_82169B58) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,165(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 165);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82169b78
	if (!ctx.cr0.eq) goto loc_82169B78;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82169B78:
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
	// bne cr6,0x82169b98
	if (!ctx.cr6.eq) goto loc_82169B98;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82169bb4
	goto loc_82169BB4;
loc_82169B98:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82169bb0
	if (!ctx.cr6.eq) goto loc_82169BB0;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82169bb4
	goto loc_82169BB4;
loc_82169BB0:
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_82169BB4:
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216D0F8) {
	REX_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8216dd90
	sub_8216DD90(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8216D8D8) {
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
	ctx.lr = 0x8216D8E0;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r30,0(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r29,4(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r11,464
	ctx.r3.s64 = ctx.r11.s64 + 464;
	// addi r4,r30,208
	ctx.r4.s64 = r30.s64 + 208;
	// addi r5,r10,160
	ctx.r5.s64 = ctx.r10.s64 + 160;
	// bl 0x821d21d0
	ctx.lr = 0x8216D910;
	sub_821D21D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216d9dc
	if (ctx.cr0.eq) goto loc_8216D9DC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82183948
	ctx.lr = 0x8216D924;
	sub_82183948(ctx, base);
	// fsqrts f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(sqrt(ctx.f1.f64)));
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lis r31,-32106
	r31.s64 = -2104098816;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// lfs f11,444(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 444);
	ctx.f11.f64 = double(temp.f32);
	// li r4,12
	ctx.r4.s64 = 12;
	// lfs f13,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,6060(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6060);
	// fdivs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
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
	// lfsx f13,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f31,f13,f12,f0
	f31.f64 = ctx.f13.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// bl 0x8212dd28
	ctx.lr = 0x8216D97C;
	sub_8212DD28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,6060(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6060);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r10,-12056
	ctx.r7.s64 = ctx.r10.s64 + -12056;
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r30.u32);
	// lwz r5,152(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 152);
	// bl 0x82139a08
	ctx.lr = 0x8216D9AC;
	sub_82139A08(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r11,6096(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6096);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,6060(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6060);
	// addi r7,r10,-12040
	ctx.r7.s64 = ctx.r10.s64 + -12040;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,76(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x82139b18
	ctx.lr = 0x8216D9DC;
	sub_82139B18(ctx, base);
loc_8216D9DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82178D28) {
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
	ctx.lr = 0x82178D30;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	r23.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r23,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r23.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// bl 0x822f6280
	ctx.lr = 0x82178D4C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82178ff8
	if (ctx.cr0.eq) goto loc_82178FF8;
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r29,r23
	r29.u64 = r23.u64;
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lis r26,-32106
	r26.s64 = -2104098816;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r30,r9,-18652
	r30.s64 = ctx.r9.s64 + -18652;
	// stw r11,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stb r10,44(r11)
	REX_STORE_U8(ctx.r11.u32 + 44, ctx.r10.u8);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stb r10,45(r11)
	REX_STORE_U8(ctx.r11.u32 + 45, ctx.r10.u8);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r28,r11,-17568
	r28.s64 = ctx.r11.s64 + -17568;
	// addi r25,r10,-17552
	r25.s64 = ctx.r10.s64 + -17552;
loc_82178DA0:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82178dc4
	if (!ctx.cr6.eq) goto loc_82178DC4;
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x82178dc8
	goto loc_82178DC8;
loc_82178DC4:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82178DC8:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82178f04
	if (!ctx.cr6.lt) goto loc_82178F04;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82178DDC;
	sub_8215F1B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x82178DF0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82178E00;
	sub_82120AC0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x82178E0C;
	sub_8215F338(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x8215fba8
	ctx.lr = 0x82178E14;
	sub_8215FBA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82178edc
	if (ctx.cr0.eq) goto loc_82178EDC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x82178E28;
	sub_8215F338(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8215fba8
	ctx.lr = 0x82178E30;
	sub_8215FBA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82178edc
	if (ctx.cr0.eq) goto loc_82178EDC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8214fcc8
	ctx.lr = 0x82178E44;
	sub_8214FCC8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x82178E54;
	sub_8215F338(ctx, base);
	// stw r3,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r3.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82178ad8
	ctx.lr = 0x82178E64;
	sub_82178AD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82178edc
	if (!ctx.cr0.eq) goto loc_82178EDC;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,6132(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6132);
	// bl 0x8213ae28
	ctx.lr = 0x82178E78;
	sub_8213AE28(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82178edc
	if (ctx.cr0.eq) goto loc_82178EDC;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x82120b20
	ctx.lr = 0x82178E94;
	sub_82120B20(ctx, base);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r3,r27,64
	ctx.r3.s64 = r27.s64 + 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x82178EA4;
	sub_82145710(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r27,60(r4)
	REX_STORE_U32(ctx.r4.u32 + 60, r27.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82178EC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lwz r4,68(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 68);
	// addi r6,r11,-31968
	ctx.r6.s64 = ctx.r11.s64 + -31968;
	// lwz r3,64(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 64);
	// subf r11,r3,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// srawi r5,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// bl 0x82179780
	ctx.lr = 0x82178EDC;
	sub_82179780(ctx, base);
loc_82178EDC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82178EEC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x82178EFC;
	sub_82120AC0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x82178da0
	goto loc_82178DA0;
loc_82178F04:
	// lwz r3,64(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 64);
	// addi r31,r27,64
	r31.s64 = r27.s64 + 64;
	// lwz r11,68(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 68);
	// mr r30,r23
	r30.u64 = r23.u64;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82178f64
	if (!ctx.cr0.gt) goto loc_82178F64;
	// mr r29,r23
	r29.u64 = r23.u64;
loc_82178F24:
	// lwzx r28,r3,r29
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r28,32
	ctx.r4.s64 = r28.s64 + 32;
	// bl 0x8214fcc8
	ctx.lr = 0x82178F34;
	sub_8214FCC8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82178528
	ctx.lr = 0x82178F44;
	sub_82178528(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82178f24
	if (ctx.cr6.lt) goto loc_82178F24;
loc_82178F64:
	// lwz r4,68(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 68);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// subf r10,r3,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r3.u64;
	// addi r6,r11,-31968
	ctx.r6.s64 = ctx.r11.s64 + -31968;
	// srawi r5,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 2;
	// bl 0x82179780
	ctx.lr = 0x82178F7C;
	sub_82179780(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r31
	r30.u64 = r31.u64;
	// lbz r10,45(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 45);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82178fd0
	if (!ctx.cr0.eq) goto loc_82178FD0;
loc_82178F94:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x821f6700
	ctx.lr = 0x82178FA0;
	sub_821F6700(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82120ac0
	ctx.lr = 0x82178FB4;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82178FBC;
	sub_8269CE98(ctx, base);
	// lbz r11,45(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 45);
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82178f94
	if (ctx.cr0.eq) goto loc_82178F94;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_82178FD0:
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r23,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r23.u32);
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8269ce98
	ctx.lr = 0x82178FF0;
	sub_8269CE98(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cf0
	return;
loc_82178FF8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x82179010;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_8218E918) {
	REX_FUNC_PROLOGUE();
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// bl 0x826a1ca8
	ctx.lr = 0x8218E920;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2c9c
	ctx.lr = 0x8218E928;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
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
	// li r26,0
	r26.s64 = 0;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// addi r28,r11,8
	r28.s64 = ctx.r11.s64 + 8;
	// addi r30,r11,12
	r30.s64 = ctx.r11.s64 + 12;
	// addi r27,r11,20
	r27.s64 = ctx.r11.s64 + 20;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8218eba8
	if (!ctx.cr6.gt) goto loc_8218EBA8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r24,r11,16592
	r24.s64 = ctx.r11.s64 + 16592;
	// lfs f31,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// lfs f26,12(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 12);
	f26.f64 = double(temp.f32);
loc_8218E96C:
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f28,f0,f13
	f28.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,4(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f27,f0,f13
	f27.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,108(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f28,f28
	ctx.f0.f64 = double(float(f28.f64 * f28.f64));
	// fmadds f0,f27,f27,f0
	ctx.f0.f64 = double(float(std::fma(f27.f64, f27.f64, ctx.f0.f64)));
	// fsqrts f29,f0
	f29.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f29,f10
	ctx.cr6.compare(f29.f64, ctx.f10.f64);
	// bge cr6,0x8218eb80
	if (!ctx.cr6.lt) goto loc_8218EB80;
	// lfs f13,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r24,256
	ctx.r11.s64 = r24.s64 + 256;
	// fsubs f0,f29,f13
	ctx.f0.f64 = double(float(f29.f64 - ctx.f13.f64));
	// lfs f9,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
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
	// fsel f11,f11,f0,f31
	ctx.f11.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : f31.f64;
	// fmuls f0,f9,f11
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8218eb80
	if (!ctx.cr6.gt) goto loc_8218EB80;
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f13,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f9,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// fmuls f12,f11,f9
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f30,f12,f8
	f30.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// bge cr6,0x8218eb24
	if (!ctx.cr6.lt) goto loc_8218EB24;
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(f30.f64, f31.f64);
	// ble cr6,0x8218eb24
	if (!ctx.cr6.gt) goto loc_8218EB24;
	// lfs f12,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,140(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f12,116(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmuls f25,f13,f11
	f25.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// bl 0x821265f8
	ctx.lr = 0x8218EA30;
	sub_821265F8(ctx, base);
	// fmuls f12,f25,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f25.f64 * f30.f64));
	// lfs f11,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f10,f26,f29
	ctx.f10.f64 = double(float(f26.f64 / f29.f64));
	// addi r11,r24,256
	ctx.r11.s64 = r24.s64 + 256;
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r24,256
	ctx.r10.s64 = r24.s64 + 256;
	// fmadds f11,f12,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f11.f64)));
	// stfs f11,0(r28)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// lfs f11,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f10,f28
	ctx.f9.f64 = double(float(ctx.f10.f64 * f28.f64));
	// lfs f8,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f8,f29,f8
	ctx.f8.f64 = double(float(f29.f64 - ctx.f8.f64));
	// lfs f5,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// fcmpu cr6,f8,f31
	ctx.cr6.compare(ctx.f8.f64, f31.f64);
	// lfs f6,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f6.f64 = double(temp.f32);
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
	// lfs f7,116(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f8,f31
	ctx.cr6.compare(ctx.f8.f64, f31.f64);
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
	// rlwinm r7,r9,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r6,r8,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// fmuls f10,f10,f27
	ctx.f10.f64 = double(float(ctx.f10.f64 * f27.f64));
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// lfs f8,140(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r8,r8,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// lfs f4,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// lfs f3,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// fmuls f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// lfsx f2,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f2.f64 = double(temp.f32);
	// lfsx f1,r10,r8
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
	// fsel f9,f2,f9,f31
	ctx.f9.f64 = ctx.f2.f64 >= 0.0 ? ctx.f9.f64 : f31.f64;
	// fsel f10,f1,f10,f31
	ctx.f10.f64 = ctx.f1.f64 >= 0.0 ? ctx.f10.f64 : f31.f64;
	// fmuls f2,f11,f9
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f10,f6,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f9,f6,f9
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fmuls f5,f7,f2
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fmuls f7,f7,f11
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f8,f8,f2
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// fneg f6,f5
	ctx.f6.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fneg f7,f7
	ctx.f7.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fmuls f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 * f30.f64));
	// fneg f9,f9
	ctx.f9.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fmuls f8,f8,f30
	ctx.f8.f64 = double(float(ctx.f8.f64 * f30.f64));
	// fmuls f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmadds f11,f10,f25,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, f25.f64, ctx.f11.f64)));
	// fmadds f10,f9,f25,f8
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, f25.f64, ctx.f8.f64)));
	// fmuls f9,f6,f13
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmadds f12,f10,f0,f9
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f9.f64)));
	// fmadds f0,f11,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f13.f64)));
	// fadds f13,f12,f3
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// fadds f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
loc_8218EB24:
	// lfs f13,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r24,256
	ctx.r11.s64 = r24.s64 + 256;
	// lfs f0,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,112(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,144(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,120(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fnmsubs f0,f0,f12,f26
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f12.f64, -f26.f64)));
	// fsubs f13,f26,f0
	ctx.f13.f64 = double(float(f26.f64 - ctx.f0.f64));
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
	// rlwinm r9,r10,27,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r10,r10,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lfsx f13,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f13,f0,f26
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : f26.f64;
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmadds f0,f0,f30,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, ctx.f9.f64)));
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 0, temp.u32);
loc_8218EB80:
	// lwz r11,96(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 96);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8218e96c
	if (ctx.cr6.lt) goto loc_8218E96C;
loc_8218EBA8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ce8
	ctx.lr = 0x8218EBB4;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_821AC158) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,104(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// addi r11,r11,-24136
	ctx.r11.s64 = ctx.r11.s64 + -24136;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x821ac1a4
	if (ctx.cr6.eq) goto loc_821AC1A4;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821AC1A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821AC1A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8219be30
	ctx.lr = 0x821AC1AC;
	sub_8219BE30(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ac1bc
	if (ctx.cr0.eq) goto loc_821AC1BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821AC1BC;
	sub_8269CE98(ctx, base);
loc_821AC1BC:
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

DEFINE_REX_FUNC(sub_821B0538) {
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
	// li r3,156
	ctx.r3.s64 = 156;
	// bl 0x822f6280
	ctx.lr = 0x821B0550;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821b0580
	if (ctx.cr0.eq) goto loc_821B0580;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821df450
	ctx.lr = 0x821B0560;
	sub_821DF450(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,-23408
	ctx.r11.s64 = ctx.r11.s64 + -23408;
	// addi r10,r10,12876
	ctx.r10.s64 = ctx.r10.s64 + 12876;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// b 0x821b0584
	goto loc_821B0584;
loc_821B0580:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B0584:
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

DEFINE_REX_FUNC(sub_821B2540) {
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
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x822f6280
	ctx.lr = 0x821B2554;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b2564
	if (ctx.cr0.eq) goto loc_821B2564;
	// bl 0x821b2578
	ctx.lr = 0x821B2560;
	sub_821B2578(ctx, base);
	// b 0x821b2568
	goto loc_821B2568;
loc_821B2564:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B2568:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B44D8) {
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
	ctx.lr = 0x821B44E0;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821B44FC:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821b44fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B44FC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r7,r11,96
	ctx.r7.s64 = ctx.r11.s64 + 96;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// ld r7,96(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 96);
	// ld r6,104(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// lfs f0,15048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	f31.f64 = double(temp.f32);
	// std r7,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// std r6,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f11,f13,f13,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f11.f64)));
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x821b455c
	if (!ctx.cr6.gt) goto loc_821B455C;
	// fdivs f10,f31,f11
	ctx.f10.f64 = double(float(f31.f64 / ctx.f11.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
loc_821B455C:
	// lfs f9,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 - f31.f64));
	// lfs f10,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// ld r6,80(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 80);
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// ld r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 88);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f6,44(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r9,r9,16592
	ctx.r9.s64 = ctx.r9.s64 + 16592;
	// ld r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// addi r8,r8,16592
	ctx.r8.s64 = ctx.r8.s64 + 16592;
	// lfs f12,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// std r11,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r11.u64);
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// std r6,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r6.u64);
	// stfs f6,140(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r8,r8,256
	ctx.r8.s64 = ctx.r8.s64 + 256;
	// lfs f9,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lwz r30,56(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 56);
	// fdivs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// lfs f7,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,920(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 920);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// fsubs f6,f11,f31
	ctx.f6.f64 = double(float(ctx.f11.f64 - f31.f64));
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
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
	// rlwinm r6,r11,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// std r7,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// rlwinm r11,r11,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// lfsx f6,r9,r11
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsel f11,f6,f31,f11
	ctx.f11.f64 = ctx.f6.f64 >= 0.0 ? f31.f64 : ctx.f11.f64;
	// fneg f6,f11
	ctx.f6.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
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
	// lfsx f6,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsel f11,f6,f0,f11
	ctx.f11.f64 = ctx.f6.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f9,f8,f11
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f9,f7,f11
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// stfs f9,124(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
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
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// lfsx f0,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsel f0,f0,f12,f13
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bne cr6,0x821b4670
	if (!ctx.cr6.eq) goto loc_821B4670;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6168(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6168);
	// b 0x821b46c8
	goto loc_821B46C8;
loc_821B4670:
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x826a1e70
	ctx.lr = 0x821B4680;
	sub_826A1E70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821840d8
	ctx.lr = 0x821B4688;
	sub_821840D8(ctx, base);
	// lis r28,-32106
	r28.s64 = -2104098816;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r29,6168(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 6168);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82149f18
	ctx.lr = 0x821B469C;
	sub_82149F18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82149e08
	ctx.lr = 0x821B46A8;
	sub_82149E08(ctx, base);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 / ctx.f0.f64));
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lfs f13,208(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x821b46d8
	if (ctx.cr6.lt) goto loc_821B46D8;
	// bl 0x821357c8
	ctx.lr = 0x821B46C4;
	sub_821357C8(ctx, base);
	// lwz r3,6168(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6168);
loc_821B46C8:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// bl 0x82149510
	ctx.lr = 0x821B46D4;
	sub_82149510(ctx, base);
	// stw r3,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r3.u32);
loc_821B46D8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821CD620) {
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
	ctx.lr = 0x821CD628;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821cd6d4
	if (ctx.cr0.eq) goto loc_821CD6D4;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r5,r11,176
	ctx.r5.s64 = ctx.r11.s64 + 176;
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// bl 0x823fbf60
	ctx.lr = 0x821CD654;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821CD664:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821cd664
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821CD664;
	// li r29,255
	r29.s64 = 255;
	// lfs f1,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f1.f64 = double(temp.f32);
	// li r30,64
	r30.s64 = 64;
	// stb r29,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r29.u8);
	// lis r28,-32106
	r28.s64 = -2104098816;
	// stb r30,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r30.u8);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stb r30,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r30.u8);
	// li r7,16
	ctx.r7.s64 = 16;
	// stb r29,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6096(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6096);
	// bl 0x82137838
	ctx.lr = 0x821CD6A8;
	sub_82137838(ctx, base);
	// stb r30,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r30.u8);
	// stb r29,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r29.u8);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stb r30,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r30.u8);
	// li r7,16
	ctx.r7.s64 = 16;
	// stb r29,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6096(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6096);
	// lfs f1,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82137838
	ctx.lr = 0x821CD6D4;
	sub_82137838(ctx, base);
loc_821CD6D4:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821D4270) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14604
	ctx.r3.s64 = ctx.r11.s64 + -14604;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D4ED0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,216(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821d4efc
	if (ctx.cr6.gt) goto loc_821D4EFC;
	// lfs f13,124(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,128(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,120(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,216(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 216, temp.u32);
loc_821D4EFC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D62E0) {
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
	// lwz r30,72(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,48(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r4,80(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
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
	ctx.lr = 0x821D6328;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,88(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821d6360
	if (ctx.cr6.eq) goto loc_821D6360;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// addi r5,r31,64
	ctx.r5.s64 = r31.s64 + 64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D6360;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821D6360:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,92(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821d6398
	if (ctx.cr6.eq) goto loc_821D6398;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// lfs f1,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D6398;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821D6398:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r6,r30,64
	ctx.r6.s64 = r30.s64 + 64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lbz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 76);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x821e2560
	ctx.lr = 0x821D63B0;
	sub_821E2560(ctx, base);
	// lis r31,-32106
	r31.s64 = -2104098816;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,6092(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,188(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D63CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6092);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r9,60(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 60);
	// lwz r8,56(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 56);
	// lwz r7,52(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 52);
	// lwz r6,44(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,244(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D63F8;
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
	ctx.lr = 0x821D6410;
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

DEFINE_REX_FUNC(sub_821DE3C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821DE3D0;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x821de484
	if (!ctx.cr6.eq) goto loc_821DE484;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// addi r31,r11,29744
	r31.s64 = ctx.r11.s64 + 29744;
	// bge cr6,0x821de40c
	if (!ctx.cr6.lt) goto loc_821DE40C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,30080
	ctx.r3.s64 = ctx.r11.s64 + 30080;
	// li r5,173
	ctx.r5.s64 = 173;
	// bl 0x821231d0
	ctx.lr = 0x821DE40C;
	sub_821231D0(ctx, base);
loc_821DE40C:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x821de42c
	if (ctx.cr6.eq) goto loc_821DE42C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,30128
	ctx.r3.s64 = ctx.r11.s64 + 30128;
	// li r5,177
	ctx.r5.s64 = 177;
	// bl 0x821231d0
	ctx.lr = 0x821DE42C;
	sub_821231D0(ctx, base);
loc_821DE42C:
	// lbz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 2);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 20);
	// beq 0x821de45c
	if (ctx.cr0.eq) goto loc_821DE45C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821de47c
	if (!ctx.cr0.eq) goto loc_821DE47C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// addi r4,r29,-112
	ctx.r4.s64 = r29.s64 + -112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821de180
	ctx.lr = 0x821DE458;
	sub_821DE180(ctx, base);
	// b 0x821de47c
	goto loc_821DE47C;
loc_821DE45C:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821de47c
	if (ctx.cr0.eq) goto loc_821DE47C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r29,-112
	ctx.r4.s64 = r29.s64 + -112;
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821de278
	ctx.lr = 0x821DE47C;
	sub_821DE278(ctx, base);
loc_821DE47C:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x821de488
	goto loc_821DE488;
loc_821DE484:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821DE488:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821E3310) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// lfs f0,128(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
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
	// blt cr6,0x821e3390
	if (ctx.cr6.lt) goto loc_821E3390;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821E3390:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e33a0
	if (ctx.cr0.eq) goto loc_821E33A0;
	// addi r3,r3,272
	ctx.r3.s64 = ctx.r3.s64 + 272;
	// blr 
	return;
loc_821E33A0:
	// lfs f13,132(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821e33b8
	if (!ctx.cr6.lt) goto loc_821E33B8;
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// blr 
	return;
loc_821E33B8:
	// lfs f13,136(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821e33d0
	if (!ctx.cr6.lt) goto loc_821E33D0;
	// addi r3,r3,208
	ctx.r3.s64 = ctx.r3.s64 + 208;
	// blr 
	return;
loc_821E33D0:
	// addi r3,r3,240
	ctx.r3.s64 = ctx.r3.s64 + 240;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EA0E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821EA0E8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x821ea168
	ctx.lr = 0x821EA0FC;
	sub_821EA168(ctx, base);
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821ea110
	if (!ctx.cr0.eq) goto loc_821EA110;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821ea160
	goto loc_821EA160;
loc_821EA110:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
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
	ctx.lr = 0x821EA13C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x821ea158
	if (!ctx.cr0.eq) goto loc_821EA158;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-24376
	ctx.r4.s64 = ctx.r11.s64 + -24376;
	// bl 0x822fbf60
	ctx.lr = 0x821EA158;
	sub_822FBF60(ctx, base);
loc_821EA158:
	// cntlzw r11,r29
	ctx.r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_821EA160:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821EEEC0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6316(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6316);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_821EF950) {
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
	ctx.lr = 0x821EF958;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r30,r10,16584
	r30.s64 = ctx.r10.s64 + 16584;
	// addi r29,r11,1624
	r29.s64 = ctx.r11.s64 + 1624;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r26,0
	r26.s64 = 0;
	// bl 0x8215f338
	ctx.lr = 0x821EF980;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r28,r11,16592
	r28.s64 = ctx.r11.s64 + 16592;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x821EF990;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x821EF998;
	sub_8215F1B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821ef9ac
	if (!ctx.cr6.eq) goto loc_821EF9AC;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x821ef9b0
	goto loc_821EF9B0;
loc_821EF9AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821EF9B0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821ef9c4
	if (!ctx.cr0.eq) goto loc_821EF9C4;
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r26,r11,r31
	r26.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r31.u8 & 0x3F));
	// b 0x821efa80
	goto loc_821EFA80;
loc_821EF9C4:
	// lis r27,-32106
	r27.s64 = -2104098816;
	// li r31,0
	r31.s64 = 0;
	// lwz r3,6192(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EF9E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x821efa80
	if (!ctx.cr0.gt) goto loc_821EFA80;
loc_821EF9E8:
	// lwz r3,6192(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6192);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EFA00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EFA10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821efa60
	if (ctx.cr0.eq) goto loc_821EFA60;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x821EFA24;
	sub_8215F338(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x821EFA2C;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x821EFA34;
	sub_8215F1B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821efa48
	if (!ctx.cr6.eq) goto loc_821EFA48;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x821efa4c
	goto loc_821EFA4C;
loc_821EFA48:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821EFA4C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821efa60
	if (ctx.cr0.eq) goto loc_821EFA60;
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r31.u8 & 0x3F));
	// or r26,r11,r26
	r26.u64 = ctx.r11.u64 | r26.u64;
loc_821EFA60:
	// lwz r3,6192(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6192);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EFA78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x821ef9e8
	if (ctx.cr6.lt) goto loc_821EF9E8;
loc_821EFA80:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821FAA68) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r4,r11,24948
	ctx.r4.s64 = ctx.r11.s64 + 24948;
	// bl 0x8215f670
	ctx.lr = 0x821FAA8C;
	sub_8215F670(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215efb0
	ctx.lr = 0x821FAA94;
	sub_8215EFB0(ctx, base);
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

DEFINE_REX_FUNC(sub_821FB480) {
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
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821fb4b8
	if (ctx.cr6.eq) goto loc_821FB4B8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,25200
	ctx.r4.s64 = ctx.r11.s64 + 25200;
	// addi r3,r10,25300
	ctx.r3.s64 = ctx.r10.s64 + 25300;
	// li r5,283
	ctx.r5.s64 = 283;
	// bl 0x821231d0
	ctx.lr = 0x821FB4B8;
	sub_821231D0(ctx, base);
loc_821FB4B8:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
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

DEFINE_REX_FUNC(sub_821FD248) {
	REX_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// mulli r10,r4,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(12));
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FE1B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821FE1C0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FE1E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x821fe228
	if (!ctx.cr0.gt) goto loc_821FE228;
loc_821FE1E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FE200;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x821fe24c
	if (ctx.cr6.eq) goto loc_821FE24C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FE220;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x821fe1e8
	if (ctx.cr6.lt) goto loc_821FE1E8;
loc_821FE228:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,26164
	ctx.r4.s64 = ctx.r11.s64 + 26164;
	// addi r3,r10,26544
	ctx.r3.s64 = ctx.r10.s64 + 26544;
	// li r5,440
	ctx.r5.s64 = 440;
	// bl 0x821231d0
	ctx.lr = 0x821FE240;
	sub_821231D0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821FE244:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_821FE24C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x821fe244
	goto loc_821FE244;
}

DEFINE_REX_FUNC(sub_82202AF8) {
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
	// lfs f0,172(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f13,152(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r10,132(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// addi r4,r11,160
	ctx.r4.s64 = ctx.r11.s64 + 160;
	// lfs f12,176(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r10,544
	ctx.r5.s64 = ctx.r10.s64 + 544;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// lfs f9,136(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,152(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,128(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,144(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,132(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,148(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f8,f8,f9
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f11,f9,f8
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r10,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// std r11,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// bl 0x821efa90
	ctx.lr = 0x82202BA8;
	sub_821EFA90(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 132);
	// bl 0x82151d50
	ctx.lr = 0x82202BB0;
	sub_82151D50(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x821a1f88
	ctx.lr = 0x82202BBC;
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

DEFINE_REX_FUNC(sub_82207DB0) {
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
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x82207dd4
	if (!ctx.cr6.eq) goto loc_82207DD4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82207DD4:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82207DEC;
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
	ctx.lr = 0x82207E08;
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

DEFINE_REX_FUNC(sub_8220A8C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f0,24(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// stfs f0,32(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// stfs f0,36(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// stfs f0,40(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,48(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// stfs f13,52(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// stfs f13,56(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// stfs f13,60(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// stfs f13,64(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 64, temp.u32);
	// stfs f0,68(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 68, temp.u32);
	// stfs f0,72(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 72, temp.u32);
	// stfs f0,80(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 80, temp.u32);
	// stfs f0,84(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 84, temp.u32);
	// stfs f0,88(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 88, temp.u32);
	// stfs f0,96(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 96, temp.u32);
	// stfs f0,100(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 100, temp.u32);
	// stfs f0,104(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 104, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220EB40) {
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
	ctx.lr = 0x8220EB48;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822e8048
	ctx.lr = 0x8220EB54;
	sub_822E8048(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-30288
	ctx.r11.s64 = ctx.r11.s64 + -30288;
	// addi r4,r10,-30452
	ctx.r4.s64 = ctx.r10.s64 + -30452;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,260
	ctx.r3.s64 = r31.s64 + 260;
	// bl 0x82120600
	ctx.lr = 0x8220EB70;
	sub_82120600(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// stb r11,289(r31)
	REX_STORE_U8(r31.u32 + 289, ctx.r11.u8);
	// li r3,108
	ctx.r3.s64 = 108;
	// stb r29,288(r31)
	REX_STORE_U8(r31.u32 + 288, r29.u8);
	// bl 0x822f6280
	ctx.lr = 0x8220EB88;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r27,r11,-15424
	r27.s64 = ctx.r11.s64 + -15424;
	// addi r28,r10,-23836
	r28.s64 = ctx.r10.s64 + -23836;
	// beq 0x8220ebfc
	if (ctx.cr0.eq) goto loc_8220EBFC;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-30444
	ctx.r4.s64 = ctx.r11.s64 + -30444;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x8220EBBC;
	sub_821DBB48(ctx, base);
	// stw r28,0(r30)
	REX_STORE_U32(r30.u32 + 0, r28.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x8220EBC8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220ebec
	if (ctx.cr0.eq) goto loc_8220EBEC;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-4368
	ctx.r10.s64 = ctx.r10.s64 + -4368;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8220ebf0
	goto loc_8220EBF0;
loc_8220EBEC:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8220EBF0:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x8220ec00
	goto loc_8220EC00;
loc_8220EBFC:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8220EC00:
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
	ctx.lr = 0x8220EC18;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x8220EC20;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8220ec84
	if (ctx.cr0.eq) goto loc_8220EC84;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-30428
	ctx.r4.s64 = ctx.r11.s64 + -30428;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x8220EC44;
	sub_821DBB48(ctx, base);
	// stw r28,0(r30)
	REX_STORE_U32(r30.u32 + 0, r28.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x8220EC50;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220ec74
	if (ctx.cr0.eq) goto loc_8220EC74;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-4344
	ctx.r10.s64 = ctx.r10.s64 + -4344;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8220ec78
	goto loc_8220EC78;
loc_8220EC74:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8220EC78:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x8220ec88
	goto loc_8220EC88;
loc_8220EC84:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8220EC88:
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
	ctx.lr = 0x8220ECA0;
	sub_82264568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8221C568) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14020
	ctx.r3.s64 = ctx.r11.s64 + -14020;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8221CEA8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c80
	ctx.lr = 0x8221CEB0;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-1024(r1)
	ea = -1024 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	r22.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r22.u32);
	// mr r29,r22
	r29.u64 = r22.u64;
	// bl 0x82178268
	ctx.lr = 0x8221CED0;
	sub_82178268(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r7,r11,15048
	ctx.r7.s64 = ctx.r11.s64 + 15048;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lfs f31,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// addi r11,r9,-25644
	ctx.r11.s64 = ctx.r9.s64 + -25644;
	// addi r10,r10,-8472
	ctx.r10.s64 = ctx.r10.s64 + -8472;
	// addi r9,r8,-25604
	ctx.r9.s64 = ctx.r8.s64 + -25604;
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// lfs f0,-22312(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -22312);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// stw r9,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// addi r30,r31,124
	r30.s64 = r31.s64 + 124;
	// stfs f31,132(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// addi r21,r31,132
	r21.s64 = r31.s64 + 132;
	// stfs f31,136(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// addi r19,r31,140
	r19.s64 = r31.s64 + 140;
	// stfs f31,140(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// bl 0x822e6df0
	ctx.lr = 0x8221CF2C;
	sub_822E6DF0(ctx, base);
	// li r11,255
	ctx.r11.s64 = 255;
	// li r10,200
	ctx.r10.s64 = 200;
	// stb r22,237(r31)
	REX_STORE_U8(r31.u32 + 237, r22.u8);
	// stb r11,239(r31)
	REX_STORE_U8(r31.u32 + 239, ctx.r11.u8);
	// addi r17,r31,256
	r17.s64 = r31.s64 + 256;
	// stb r10,238(r31)
	REX_STORE_U8(r31.u32 + 238, ctx.r10.u8);
	// addi r28,r31,236
	r28.s64 = r31.s64 + 236;
	// stb r11,236(r31)
	REX_STORE_U8(r31.u32 + 236, ctx.r11.u8);
	// stfs f31,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 240, temp.u32);
	// stfs f31,244(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 244, temp.u32);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stfs f31,248(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 248, temp.u32);
	// addi r27,r31,240
	r27.s64 = r31.s64 + 240;
	// stfs f31,252(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 252, temp.u32);
	// bl 0x822e6df0
	ctx.lr = 0x8221CF68;
	sub_822E6DF0(ctx, base);
	// stfs f31,348(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 348, temp.u32);
	// stfs f31,352(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 352, temp.u32);
	// addi r16,r31,364
	r16.s64 = r31.s64 + 364;
	// stfs f31,356(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 356, temp.u32);
	// addi r26,r31,348
	r26.s64 = r31.s64 + 348;
	// stfs f31,360(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 360, temp.u32);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x822e6df0
	ctx.lr = 0x8221CF88;
	sub_822E6DF0(ctx, base);
	// stfs f31,456(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 456, temp.u32);
	// stfs f31,460(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 460, temp.u32);
	// addi r15,r31,472
	r15.s64 = r31.s64 + 472;
	// stfs f31,464(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 464, temp.u32);
	// addi r25,r31,456
	r25.s64 = r31.s64 + 456;
	// stfs f31,468(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 468, temp.u32);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x822e6df0
	ctx.lr = 0x8221CFA8;
	sub_822E6DF0(ctx, base);
	// stfs f31,564(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 564, temp.u32);
	// stfs f31,568(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 568, temp.u32);
	// addi r14,r31,580
	r14.s64 = r31.s64 + 580;
	// stfs f31,572(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 572, temp.u32);
	// addi r24,r31,564
	r24.s64 = r31.s64 + 564;
	// stfs f31,576(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 576, temp.u32);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x822e6df0
	ctx.lr = 0x8221CFC8;
	sub_822E6DF0(ctx, base);
	// stfs f31,672(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 672, temp.u32);
	// stfs f31,676(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 676, temp.u32);
	// addi r3,r31,688
	ctx.r3.s64 = r31.s64 + 688;
	// stfs f31,680(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 680, temp.u32);
	// addi r23,r31,672
	r23.s64 = r31.s64 + 672;
	// stfs f31,684(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 684, temp.u32);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// bl 0x822e6df0
	ctx.lr = 0x8221CFE8;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,788
	ctx.r3.s64 = r31.s64 + 788;
	// stfs f31,780(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 780, temp.u32);
	// addi r18,r31,780
	r18.s64 = r31.s64 + 780;
	// stfs f31,784(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 784, temp.u32);
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8226b010
	ctx.lr = 0x8221D004;
	sub_8226B010(ctx, base);
	// stw r22,1020(r31)
	REX_STORE_U32(r31.u32 + 1020, r22.u32);
	// stw r22,1024(r31)
	REX_STORE_U32(r31.u32 + 1024, r22.u32);
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r22,1028(r31)
	REX_STORE_U32(r31.u32 + 1028, r22.u32);
	// stw r22,1036(r31)
	REX_STORE_U32(r31.u32 + 1036, r22.u32);
	// bl 0x822f6280
	ctx.lr = 0x8221D01C;
	sub_822F6280(ctx, base);
	// mr. r20,r3
	r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq 0x8221d04c
	if (ctx.cr0.eq) goto loc_8221D04C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// addi r4,r11,32356
	ctx.r4.s64 = ctx.r11.s64 + 32356;
	// bl 0x82120600
	ctx.lr = 0x8221D034;
	sub_82120600(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r29,1
	r29.s64 = 1;
	// bl 0x821d13f8
	ctx.lr = 0x8221D048;
	sub_821D13F8(ctx, base);
	// b 0x8221d050
	goto loc_8221D050;
loc_8221D04C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_8221D050:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82145710
	ctx.lr = 0x8221D064;
	sub_82145710(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221d080
	if (ctx.cr0.eq) goto loc_8221D080;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// rlwinm r29,r29,0,0,30
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x8221D080;
	sub_82120AC0(ctx, base);
loc_8221D080:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8221D088;
	sub_822F6280(ctx, base);
	// mr. r20,r3
	r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq 0x8221d0b8
	if (ctx.cr0.eq) goto loc_8221D0B8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// addi r4,r11,32504
	ctx.r4.s64 = ctx.r11.s64 + 32504;
	// bl 0x82120600
	ctx.lr = 0x8221D0A0;
	sub_82120600(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r1,832
	ctx.r4.s64 = ctx.r1.s64 + 832;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// ori r29,r29,2
	r29.u64 = r29.u64 | 2;
	// bl 0x82196ba8
	ctx.lr = 0x8221D0B4;
	sub_82196BA8(ctx, base);
	// b 0x8221d0bc
	goto loc_8221D0BC;
loc_8221D0B8:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_8221D0BC:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82145710
	ctx.lr = 0x8221D0CC;
	sub_82145710(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221d0e8
	if (ctx.cr0.eq) goto loc_8221D0E8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// rlwinm r29,r29,0,31,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x8221D0E8;
	sub_82120AC0(ctx, base);
loc_8221D0E8:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8221D0F0;
	sub_822F6280(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq 0x8221d120
	if (ctx.cr0.eq) goto loc_8221D120;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,32516
	ctx.r4.s64 = ctx.r11.s64 + 32516;
	// bl 0x82120600
	ctx.lr = 0x8221D108;
	sub_82120600(ctx, base);
	// addi r5,r31,136
	ctx.r5.s64 = r31.s64 + 136;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// ori r29,r29,4
	r29.u64 = r29.u64 | 4;
	// bl 0x82196ba8
	ctx.lr = 0x8221D11C;
	sub_82196BA8(ctx, base);
	// b 0x8221d124
	goto loc_8221D124;
loc_8221D120:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_8221D124:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82145710
	ctx.lr = 0x8221D134;
	sub_82145710(ctx, base);
	// rlwinm. r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221d150
	if (ctx.cr0.eq) goto loc_8221D150;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r29,r29,0,30,28
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x8221D150;
	sub_82120AC0(ctx, base);
loc_8221D150:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8221D158;
	sub_822F6280(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq 0x8221d188
	if (ctx.cr0.eq) goto loc_8221D188;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// addi r4,r11,-28492
	ctx.r4.s64 = ctx.r11.s64 + -28492;
	// bl 0x82120600
	ctx.lr = 0x8221D170;
	sub_82120600(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// ori r29,r29,8
	r29.u64 = r29.u64 | 8;
	// bl 0x82196ba8
	ctx.lr = 0x8221D184;
	sub_82196BA8(ctx, base);
	// b 0x8221d18c
	goto loc_8221D18C;
loc_8221D188:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_8221D18C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82145710
	ctx.lr = 0x8221D19C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221d1b8
	if (ctx.cr0.eq) goto loc_8221D1B8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// rlwinm r29,r29,0,29,27
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x8221D1B8;
	sub_82120AC0(ctx, base);
loc_8221D1B8:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8221D1C0;
	sub_822F6280(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq 0x8221d1f0
	if (ctx.cr0.eq) goto loc_8221D1F0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,-27220
	ctx.r4.s64 = ctx.r11.s64 + -27220;
	// bl 0x82120600
	ctx.lr = 0x8221D1D8;
	sub_82120600(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// ori r29,r29,16
	r29.u64 = r29.u64 | 16;
	// bl 0x8219d708
	ctx.lr = 0x8221D1EC;
	sub_8219D708(ctx, base);
	// b 0x8221d1f4
	goto loc_8221D1F4;
loc_8221D1F0:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_8221D1F4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82145710
	ctx.lr = 0x8221D204;
	sub_82145710(ctx, base);
	// rlwinm. r11,r29,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221d220
	if (ctx.cr0.eq) goto loc_8221D220;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// rlwinm r29,r29,0,28,26
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x8221D220;
	sub_82120AC0(ctx, base);
loc_8221D220:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// addi r4,r11,-27196
	ctx.r4.s64 = ctx.r11.s64 + -27196;
	// bl 0x82120600
	ctx.lr = 0x8221D230;
	sub_82120600(ctx, base);
	// addi r5,r1,800
	ctx.r5.s64 = ctx.r1.s64 + 800;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822e7ad8
	ctx.lr = 0x8221D240;
	sub_822E7AD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82120ac0
	ctx.lr = 0x8221D250;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r11,-27184
	ctx.r4.s64 = ctx.r11.s64 + -27184;
	// bl 0x82120600
	ctx.lr = 0x8221D260;
	sub_82120600(ctx, base);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x822e7f20
	ctx.lr = 0x8221D270;
	sub_822E7F20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82120ac0
	ctx.lr = 0x8221D280;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// addi r4,r11,-27172
	ctx.r4.s64 = ctx.r11.s64 + -27172;
	// bl 0x82120600
	ctx.lr = 0x8221D290;
	sub_82120600(ctx, base);
	// addi r5,r1,608
	ctx.r5.s64 = ctx.r1.s64 + 608;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822e7ad8
	ctx.lr = 0x8221D2A0;
	sub_822E7AD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82120ac0
	ctx.lr = 0x8221D2B0;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r4,r11,-27160
	ctx.r4.s64 = ctx.r11.s64 + -27160;
	// bl 0x82120600
	ctx.lr = 0x8221D2C0;
	sub_82120600(ctx, base);
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x822e7f20
	ctx.lr = 0x8221D2D0;
	sub_822E7F20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82120ac0
	ctx.lr = 0x8221D2E0;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-28484
	ctx.r4.s64 = ctx.r11.s64 + -28484;
	// bl 0x82120600
	ctx.lr = 0x8221D2F0;
	sub_82120600(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822e7ad8
	ctx.lr = 0x8221D300;
	sub_822E7AD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x8221D310;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r4,r11,-28472
	ctx.r4.s64 = ctx.r11.s64 + -28472;
	// bl 0x82120600
	ctx.lr = 0x8221D320;
	sub_82120600(ctx, base);
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x822e7f20
	ctx.lr = 0x8221D330;
	sub_822E7F20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82120ac0
	ctx.lr = 0x8221D340;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// addi r4,r11,-27148
	ctx.r4.s64 = ctx.r11.s64 + -27148;
	// bl 0x82120600
	ctx.lr = 0x8221D350;
	sub_82120600(ctx, base);
	// addi r5,r1,672
	ctx.r5.s64 = ctx.r1.s64 + 672;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822e7ad8
	ctx.lr = 0x8221D360;
	sub_822E7AD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82120ac0
	ctx.lr = 0x8221D370;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-27136
	ctx.r4.s64 = ctx.r11.s64 + -27136;
	// bl 0x82120600
	ctx.lr = 0x8221D380;
	sub_82120600(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x822e7f20
	ctx.lr = 0x8221D390;
	sub_822E7F20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120ac0
	ctx.lr = 0x8221D3A0;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-27124
	ctx.r4.s64 = ctx.r11.s64 + -27124;
	// bl 0x82120600
	ctx.lr = 0x8221D3B0;
	sub_82120600(ctx, base);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x822e7ad8
	ctx.lr = 0x8221D3C0;
	sub_822E7AD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82120ac0
	ctx.lr = 0x8221D3D0;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r11,-27112
	ctx.r4.s64 = ctx.r11.s64 + -27112;
	// bl 0x82120600
	ctx.lr = 0x8221D3E0;
	sub_82120600(ctx, base);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x822e7f20
	ctx.lr = 0x8221D3F0;
	sub_822E7F20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82120ac0
	ctx.lr = 0x8221D400;
	sub_82120AC0(ctx, base);
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8221D408;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8221d438
	if (ctx.cr0.eq) goto loc_8221D438;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r4,r11,-25916
	ctx.r4.s64 = ctx.r11.s64 + -25916;
	// bl 0x82120600
	ctx.lr = 0x8221D420;
	sub_82120600(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r29,r29,32
	r29.u64 = r29.u64 | 32;
	// bl 0x82196ba8
	ctx.lr = 0x8221D434;
	sub_82196BA8(ctx, base);
	// b 0x8221d43c
	goto loc_8221D43C;
loc_8221D438:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_8221D43C:
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82145710
	ctx.lr = 0x8221D44C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r29,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221d468
	if (ctx.cr0.eq) goto loc_8221D468;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// rlwinm r29,r29,0,27,25
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// bl 0x82120ac0
	ctx.lr = 0x8221D468;
	sub_82120AC0(ctx, base);
loc_8221D468:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8221D470;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8221d4a0
	if (ctx.cr0.eq) goto loc_8221D4A0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r4,r11,-25904
	ctx.r4.s64 = ctx.r11.s64 + -25904;
	// bl 0x82120600
	ctx.lr = 0x8221D488;
	sub_82120600(ctx, base);
	// addi r5,r31,784
	ctx.r5.s64 = r31.s64 + 784;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r29,r29,64
	r29.u64 = r29.u64 | 64;
	// bl 0x82196ba8
	ctx.lr = 0x8221D49C;
	sub_82196BA8(ctx, base);
	// b 0x8221d4a4
	goto loc_8221D4A4;
loc_8221D4A0:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_8221D4A4:
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82145710
	ctx.lr = 0x8221D4B4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r29,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221d4cc
	if (ctx.cr0.eq) goto loc_8221D4CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82120ac0
	ctx.lr = 0x8221D4CC;
	sub_82120AC0(ctx, base);
loc_8221D4CC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// bl 0x82120600
	ctx.lr = 0x8221D4DC;
	sub_82120600(ctx, base);
	// lwz r28,88(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r5,r1,512
	ctx.r5.s64 = ctx.r1.s64 + 512;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8226b670
	ctx.lr = 0x8221D4F0;
	sub_8226B670(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82120ac0
	ctx.lr = 0x8221D500;
	sub_82120AC0(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822f6280
	ctx.lr = 0x8221D508;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8221d57c
	if (ctx.cr0.eq) goto loc_8221D57C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r22,8(r30)
	REX_STORE_U32(r30.u32 + 8, r22.u32);
	// addi r11,r11,32616
	ctx.r11.s64 = ctx.r11.s64 + 32616;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r11,r10,-8768
	ctx.r11.s64 = ctx.r10.s64 + -8768;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x8221D544;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221d56c
	if (ctx.cr0.eq) goto loc_8221D56C;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,-12728
	ctx.r9.s64 = ctx.r9.s64 + -12728;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x8221d570
	goto loc_8221D570;
loc_8221D56C:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_8221D570:
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x8221d580
	goto loc_8221D580;
loc_8221D57C:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
loc_8221D580:
	// addi r29,r31,96
	r29.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d3988
	ctx.lr = 0x8221D58C;
	sub_821D3988(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x822f6280
	ctx.lr = 0x8221D594;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8221d614
	if (ctx.cr0.eq) goto loc_8221D614;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stfs f31,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 20, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
	// addi r11,r11,32576
	ctx.r11.s64 = ctx.r11.s64 + 32576;
	// stw r22,8(r30)
	REX_STORE_U32(r30.u32 + 8, r22.u32);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r11,r10,-8096
	ctx.r11.s64 = ctx.r10.s64 + -8096;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x8221D5D4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221d5fc
	if (ctx.cr0.eq) goto loc_8221D5FC;
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
	// b 0x8221d600
	goto loc_8221D600;
loc_8221D5FC:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_8221D600:
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e7a50
	ctx.lr = 0x8221D60C;
	sub_822E7A50(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x8221d618
	goto loc_8221D618;
loc_8221D614:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
loc_8221D618:
	// stw r4,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d3988
	ctx.lr = 0x8221D624;
	sub_821D3988(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x8221D62C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221d64c
	if (ctx.cr0.eq) goto loc_8221D64C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x8221D644;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8221d650
	goto loc_8221D650;
loc_8221D64C:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
loc_8221D650:
	// stw r4,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d3988
	ctx.lr = 0x8221D65C;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x8221D664;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221d6a4
	if (ctx.cr0.eq) goto loc_8221D6A4;
	// stw r22,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r22.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// addi r11,r11,-9560
	ctx.r11.s64 = ctx.r11.s64 + -9560;
	// addi r4,r10,-27916
	ctx.r4.s64 = ctx.r10.s64 + -27916;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8221f030
	ctx.lr = 0x8221D69C;
	sub_8221F030(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8221d6a8
	goto loc_8221D6A8;
loc_8221D6A4:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_8221D6A8:
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
	ctx.lr = 0x8221D6C0;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x8221D6C8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221d708
	if (ctx.cr0.eq) goto loc_8221D708;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stw r22,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r22.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-9520
	ctx.r11.s64 = ctx.r11.s64 + -9520;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r4,r10,-27904
	ctx.r4.s64 = ctx.r10.s64 + -27904;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// ld r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8221f030
	ctx.lr = 0x8221D700;
	sub_8221F030(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8221d70c
	goto loc_8221D70C;
loc_8221D708:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_8221D70C:
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
	ctx.lr = 0x8221D724;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x8221D72C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221d76c
	if (ctx.cr0.eq) goto loc_8221D76C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stw r22,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r22.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// addi r11,r11,-9464
	ctx.r11.s64 = ctx.r11.s64 + -9464;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r10,-27892
	ctx.r4.s64 = ctx.r10.s64 + -27892;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// ld r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8221f030
	ctx.lr = 0x8221D764;
	sub_8221F030(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8221d770
	goto loc_8221D770;
loc_8221D76C:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_8221D770:
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
	ctx.lr = 0x8221D788;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x8221D790;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221d7d0
	if (ctx.cr0.eq) goto loc_8221D7D0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stw r22,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r22.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// addi r11,r11,-9248
	ctx.r11.s64 = ctx.r11.s64 + -9248;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r10,-25892
	ctx.r4.s64 = ctx.r10.s64 + -25892;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// ld r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8221f030
	ctx.lr = 0x8221D7C8;
	sub_8221F030(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8221d7d4
	goto loc_8221D7D4;
loc_8221D7D0:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_8221D7D4:
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
	ctx.lr = 0x8221D7EC;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x8221D7F4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221d834
	if (ctx.cr0.eq) goto loc_8221D834;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stw r22,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r22.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// addi r11,r11,-9112
	ctx.r11.s64 = ctx.r11.s64 + -9112;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r10,-25872
	ctx.r4.s64 = ctx.r10.s64 + -25872;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// ld r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8221f030
	ctx.lr = 0x8221D82C;
	sub_8221F030(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8221d838
	goto loc_8221D838;
loc_8221D834:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_8221D838:
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
	ctx.lr = 0x8221D850;
	sub_82264568(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// addi r4,r11,16348
	ctx.r4.s64 = ctx.r11.s64 + 16348;
	// bl 0x82120600
	ctx.lr = 0x8221D860;
	sub_82120600(ctx, base);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x8221D870;
	sub_82180E18(ctx, base);
	// stw r3,1004(r31)
	REX_STORE_U32(r31.u32 + 1004, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82120ac0
	ctx.lr = 0x8221D884;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// addi r4,r11,-25848
	ctx.r4.s64 = ctx.r11.s64 + -25848;
	// bl 0x82120600
	ctx.lr = 0x8221D894;
	sub_82120600(ctx, base);
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x82154c08
	ctx.lr = 0x8221D8A0;
	sub_82154C08(ctx, base);
	// stw r3,1008(r31)
	REX_STORE_U32(r31.u32 + 1008, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x82120ac0
	ctx.lr = 0x8221D8B4;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// addi r4,r11,-25832
	ctx.r4.s64 = ctx.r11.s64 + -25832;
	// bl 0x82120600
	ctx.lr = 0x8221D8C4;
	sub_82120600(ctx, base);
	// addi r4,r1,704
	ctx.r4.s64 = ctx.r1.s64 + 704;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x82154c08
	ctx.lr = 0x8221D8D0;
	sub_82154C08(ctx, base);
	// stw r3,1012(r31)
	REX_STORE_U32(r31.u32 + 1012, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82120ac0
	ctx.lr = 0x8221D8E4;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// addi r4,r11,-25816
	ctx.r4.s64 = ctx.r11.s64 + -25816;
	// bl 0x82120600
	ctx.lr = 0x8221D8F4;
	sub_82120600(ctx, base);
	// addi r4,r1,768
	ctx.r4.s64 = ctx.r1.s64 + 768;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x82154c08
	ctx.lr = 0x8221D900;
	sub_82154C08(ctx, base);
	// stw r3,1016(r31)
	REX_STORE_U32(r31.u32 + 1016, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x82120ac0
	ctx.lr = 0x8221D914;
	sub_82120AC0(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82213de8
	ctx.lr = 0x8221D920;
	sub_82213DE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r22,968(r31)
	REX_STORE_U32(r31.u32 + 968, r22.u32);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82264F30) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82265098
	sub_82265098(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822654A8) {
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
	ctx.lr = 0x822654B0;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,-15352(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -15352);
	// lwz r29,6040(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x82120600
	ctx.lr = 0x822654D0;
	sub_82120600(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822654EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x82265500;
	sub_82120AC0(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82265760
	if (ctx.cr0.eq) goto loc_82265760;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x82205f30
	ctx.lr = 0x82265514;
	sub_82205F30(ctx, base);
	// li r27,0
	r27.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// addi r29,r28,96
	r29.s64 = r28.s64 + 96;
	// bl 0x822f6280
	ctx.lr = 0x8226552C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82265768
	if (ctx.cr0.eq) goto loc_82265768;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r31,r27
	r31.u64 = r27.u64;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// lis r26,-32106
	r26.s64 = -2104098816;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
loc_8226554C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82265570
	if (!ctx.cr6.eq) goto loc_82265570;
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
	// b 0x82265574
	goto loc_82265574;
loc_82265570:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_82265574:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8226567c
	if (!ctx.cr6.lt) goto loc_8226567C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82265588;
	sub_8215F1B0(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8226558C;
	sub_8215FA30(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x822655A0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82120ac0
	ctx.lr = 0x822655B0;
	sub_82120AC0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8217a160
	ctx.lr = 0x822655BC;
	sub_8217A160(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120700
	ctx.lr = 0x822655C8;
	sub_82120700(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82120ac0
	ctx.lr = 0x822655D8;
	sub_82120AC0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8217a1d8
	ctx.lr = 0x822655E4;
	sub_8217A1D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82120700
	ctx.lr = 0x822655F0;
	sub_82120700(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x82265600;
	sub_82120AC0(ctx, base);
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226561C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82265654
	if (ctx.cr0.eq) goto loc_82265654;
	// lwz r3,6316(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6316);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82265640;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82265654
	if (!ctx.cr0.eq) goto loc_82265654;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82205e20
	ctx.lr = 0x82265654;
	sub_82205E20(ctx, base);
loc_82265654:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82120ac0
	ctx.lr = 0x82265664;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82265674;
	sub_82120AC0(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x8226554c
	goto loc_8226554C;
loc_8226567C:
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82265694;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822656c4
	goto loc_822656C4;
loc_822656A0:
	// lwz r3,6316(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6316);
	// addi r5,r31,36
	ctx.r5.s64 = r31.s64 + 36;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822656BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_822656C4:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822656a0
	if (!ctx.cr6.eq) goto loc_822656A0;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822656E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822656F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, ctx.xer);
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// beq cr6,0x8226575c
	if (ctx.cr6.eq) goto loc_8226575C;
loc_8226571C:
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x82265734;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120ac0
	ctx.lr = 0x82265744;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8226574C;
	sub_8269CE98(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8226571c
	if (!ctx.cr6.eq) goto loc_8226571C;
loc_8226575C:
	// bl 0x8269ce98
	ctx.lr = 0x82265760;
	sub_8269CE98(ctx, base);
loc_82265760:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1cfc
	return;
loc_82265768:
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
	ctx.lr = 0x82265780;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82277BC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82277BD0;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82178268
	ctx.lr = 0x82277BE4;
	sub_82178268(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r10,r10,-736
	ctx.r10.s64 = ctx.r10.s64 + -736;
	// li r30,0
	r30.s64 = 0;
	// stw r9,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r9.u32);
	// lfs f31,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stfs f31,120(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// stb r30,113(r31)
	REX_STORE_U8(r31.u32 + 113, r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// bl 0x82120ac0
	ctx.lr = 0x82277C1C;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,152(r31)
	REX_STORE_U32(r31.u32 + 152, r30.u32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// lfd f0,136(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 136);
	// lfd f13,608(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 608);
	// stfd f0,160(r31)
	REX_STORE_U64(r31.u32 + 160, ctx.f0.u64);
	// stfd f0,168(r31)
	REX_STORE_U64(r31.u32 + 168, ctx.f0.u64);
	// stfd f13,176(r31)
	REX_STORE_U64(r31.u32 + 176, ctx.f13.u64);
	// stb r10,188(r31)
	REX_STORE_U8(r31.u32 + 188, ctx.r10.u8);
	// stw r30,192(r31)
	REX_STORE_U32(r31.u32 + 192, r30.u32);
	// stfs f31,196(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// bl 0x82120ac0
	ctx.lr = 0x82277C5C;
	sub_82120AC0(ctx, base);
	// stw r30,228(r31)
	REX_STORE_U32(r31.u32 + 228, r30.u32);
	// stw r30,232(r31)
	REX_STORE_U32(r31.u32 + 232, r30.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r30,236(r31)
	REX_STORE_U32(r31.u32 + 236, r30.u32);
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// stw r30,240(r31)
	REX_STORE_U32(r31.u32 + 240, r30.u32);
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// stw r30,244(r31)
	REX_STORE_U32(r31.u32 + 244, r30.u32);
	// stw r30,248(r31)
	REX_STORE_U32(r31.u32 + 248, r30.u32);
	// stw r30,252(r31)
	REX_STORE_U32(r31.u32 + 252, r30.u32);
	// bl 0x82120600
	ctx.lr = 0x82277C88;
	sub_82120600(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// stw r30,284(r31)
	REX_STORE_U32(r31.u32 + 284, r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,288(r31)
	REX_STORE_U32(r31.u32 + 288, r30.u32);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r30,292(r31)
	REX_STORE_U32(r31.u32 + 292, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,296(r31)
	REX_STORE_U32(r31.u32 + 296, r30.u32);
	// addi r3,r31,324
	ctx.r3.s64 = r31.s64 + 324;
	// stw r30,300(r31)
	REX_STORE_U32(r31.u32 + 300, r30.u32);
	// stw r30,304(r31)
	REX_STORE_U32(r31.u32 + 304, r30.u32);
	// std r30,312(r31)
	REX_STORE_U64(r31.u32 + 312, r30.u64);
	// stw r11,320(r31)
	REX_STORE_U32(r31.u32 + 320, ctx.r11.u32);
	// bl 0x82120ac0
	ctx.lr = 0x82277CC0;
	sub_82120AC0(ctx, base);
	// stfs f31,352(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 352, temp.u32);
	// stfs f31,356(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 356, temp.u32);
	// stw r30,360(r31)
	REX_STORE_U32(r31.u32 + 360, r30.u32);
	// stb r30,364(r31)
	REX_STORE_U8(r31.u32 + 364, r30.u8);
	// addi r3,r31,372
	ctx.r3.s64 = r31.s64 + 372;
	// stb r30,365(r31)
	REX_STORE_U8(r31.u32 + 365, r30.u8);
	// stb r30,366(r31)
	REX_STORE_U8(r31.u32 + 366, r30.u8);
	// stb r30,367(r31)
	REX_STORE_U8(r31.u32 + 367, r30.u8);
	// stb r30,368(r31)
	REX_STORE_U8(r31.u32 + 368, r30.u8);
	// bl 0x822e6df0
	ctx.lr = 0x82277CE8;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,464
	ctx.r3.s64 = r31.s64 + 464;
	// bl 0x822e6df0
	ctx.lr = 0x82277CF0;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,556
	ctx.r3.s64 = r31.s64 + 556;
	// bl 0x822e6df0
	ctx.lr = 0x82277CF8;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,648
	ctx.r3.s64 = r31.s64 + 648;
	// bl 0x822e6df0
	ctx.lr = 0x82277D00;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,740
	ctx.r3.s64 = r31.s64 + 740;
	// bl 0x822e6df0
	ctx.lr = 0x82277D08;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,832
	ctx.r3.s64 = r31.s64 + 832;
	// bl 0x822e6df0
	ctx.lr = 0x82277D10;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,924
	ctx.r3.s64 = r31.s64 + 924;
	// bl 0x822e6df0
	ctx.lr = 0x82277D18;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,1016
	ctx.r3.s64 = r31.s64 + 1016;
	// bl 0x822e6df0
	ctx.lr = 0x82277D20;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,1108
	ctx.r3.s64 = r31.s64 + 1108;
	// bl 0x822e6df0
	ctx.lr = 0x82277D28;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,1200
	ctx.r3.s64 = r31.s64 + 1200;
	// bl 0x822e6df0
	ctx.lr = 0x82277D30;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,1292
	ctx.r3.s64 = r31.s64 + 1292;
	// bl 0x822e6df0
	ctx.lr = 0x82277D38;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,1384
	ctx.r3.s64 = r31.s64 + 1384;
	// bl 0x822e6df0
	ctx.lr = 0x82277D40;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,1476
	ctx.r3.s64 = r31.s64 + 1476;
	// bl 0x822e6df0
	ctx.lr = 0x82277D48;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,1568
	ctx.r3.s64 = r31.s64 + 1568;
	// bl 0x822e6df0
	ctx.lr = 0x82277D50;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,1660
	ctx.r3.s64 = r31.s64 + 1660;
	// bl 0x822e6df0
	ctx.lr = 0x82277D58;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,1752
	ctx.r3.s64 = r31.s64 + 1752;
	// bl 0x822e6df0
	ctx.lr = 0x82277D60;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,1844
	ctx.r3.s64 = r31.s64 + 1844;
	// bl 0x822e6df0
	ctx.lr = 0x82277D68;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,1936
	ctx.r3.s64 = r31.s64 + 1936;
	// bl 0x822e6df0
	ctx.lr = 0x82277D70;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,2028
	ctx.r3.s64 = r31.s64 + 2028;
	// bl 0x822e6df0
	ctx.lr = 0x82277D78;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,2120
	ctx.r3.s64 = r31.s64 + 2120;
	// bl 0x822e6df0
	ctx.lr = 0x82277D80;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,2212
	ctx.r3.s64 = r31.s64 + 2212;
	// bl 0x822e6df0
	ctx.lr = 0x82277D88;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,2304
	ctx.r3.s64 = r31.s64 + 2304;
	// bl 0x822e6df0
	ctx.lr = 0x82277D90;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,2396
	ctx.r3.s64 = r31.s64 + 2396;
	// bl 0x822e6df0
	ctx.lr = 0x82277D98;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,2488
	ctx.r3.s64 = r31.s64 + 2488;
	// bl 0x822e6df0
	ctx.lr = 0x82277DA0;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,2580
	ctx.r3.s64 = r31.s64 + 2580;
	// bl 0x822e6df0
	ctx.lr = 0x82277DA8;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,2672
	ctx.r3.s64 = r31.s64 + 2672;
	// bl 0x822e6df0
	ctx.lr = 0x82277DB0;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,2764
	ctx.r3.s64 = r31.s64 + 2764;
	// bl 0x822e6df0
	ctx.lr = 0x82277DB8;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,2856
	ctx.r3.s64 = r31.s64 + 2856;
	// bl 0x822e6df0
	ctx.lr = 0x82277DC0;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,2948
	ctx.r3.s64 = r31.s64 + 2948;
	// bl 0x822e6df0
	ctx.lr = 0x82277DC8;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,3040
	ctx.r3.s64 = r31.s64 + 3040;
	// bl 0x822e6df0
	ctx.lr = 0x82277DD0;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,3132
	ctx.r3.s64 = r31.s64 + 3132;
	// bl 0x822e6df0
	ctx.lr = 0x82277DD8;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,3224
	ctx.r3.s64 = r31.s64 + 3224;
	// bl 0x822e6df0
	ctx.lr = 0x82277DE0;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,3316
	ctx.r3.s64 = r31.s64 + 3316;
	// bl 0x822e6df0
	ctx.lr = 0x82277DE8;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,3408
	ctx.r3.s64 = r31.s64 + 3408;
	// bl 0x822e6df0
	ctx.lr = 0x82277DF0;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,3500
	ctx.r3.s64 = r31.s64 + 3500;
	// bl 0x822e6df0
	ctx.lr = 0x82277DF8;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,3592
	ctx.r3.s64 = r31.s64 + 3592;
	// bl 0x822e6df0
	ctx.lr = 0x82277E00;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,3684
	ctx.r3.s64 = r31.s64 + 3684;
	// bl 0x822e6df0
	ctx.lr = 0x82277E08;
	sub_822E6DF0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r29,r31,12
	r29.s64 = r31.s64 + 12;
	// addi r11,r11,-32184
	ctx.r11.s64 = ctx.r11.s64 + -32184;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,17116
	ctx.r5.s64 = ctx.r10.s64 + 17116;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82277E34;
	sub_822568A0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,-29816
	ctx.r11.s64 = ctx.r11.s64 + -29816;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-20712
	ctx.r5.s64 = ctx.r10.s64 + -20712;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82277E5C;
	sub_822568A0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,-29528
	ctx.r11.s64 = ctx.r11.s64 + -29528;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-27088
	ctx.r5.s64 = ctx.r10.s64 + -27088;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82277E84;
	sub_822568A0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,-29368
	ctx.r11.s64 = ctx.r11.s64 + -29368;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-18700
	ctx.r5.s64 = ctx.r10.s64 + -18700;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82277EAC;
	sub_822568A0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,-29160
	ctx.r11.s64 = ctx.r11.s64 + -29160;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-14272
	ctx.r5.s64 = ctx.r10.s64 + -14272;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82277ED4;
	sub_822568A0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,-28968
	ctx.r11.s64 = ctx.r11.s64 + -28968;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-14248
	ctx.r5.s64 = ctx.r10.s64 + -14248;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82277EFC;
	sub_822568A0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,22008
	ctx.r11.s64 = ctx.r11.s64 + 22008;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-2620
	ctx.r5.s64 = ctx.r10.s64 + -2620;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82277F24;
	sub_822568A0(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,31296
	ctx.r11.s64 = ctx.r11.s64 + 31296;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-13300
	ctx.r5.s64 = ctx.r10.s64 + -13300;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82277F4C;
	sub_822568A0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,31672
	ctx.r11.s64 = ctx.r11.s64 + 31672;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-14292
	ctx.r5.s64 = ctx.r10.s64 + -14292;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82277F74;
	sub_822568A0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,31672
	ctx.r11.s64 = ctx.r11.s64 + 31672;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,26148
	ctx.r5.s64 = ctx.r10.s64 + 26148;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82277F9C;
	sub_822568A0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,-28776
	ctx.r11.s64 = ctx.r11.s64 + -28776;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-23268
	ctx.r5.s64 = ctx.r10.s64 + -23268;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82277FC4;
	sub_822568A0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-28672
	ctx.r11.s64 = ctx.r11.s64 + -28672;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r10,-23236
	ctx.r5.s64 = ctx.r10.s64 + -23236;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82277FEC;
	sub_822568A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822912D8) {
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
	ctx.lr = 0x822912E0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r7,0(r6)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// ld r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ld r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// ld r6,8(r6)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r5,60(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// std r7,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// std r6,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// bne cr6,0x82291354
	if (!ctx.cr6.eq) goto loc_82291354;
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// lwz r4,48(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// bl 0x82293d58
	ctx.lr = 0x82291338;
	sub_82293D58(ctx, base);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82293ac8
	ctx.lr = 0x8229134C;
	sub_82293AC8(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// b 0x822914cc
	goto loc_822914CC;
loc_82291354:
	// lwz r11,128(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 128);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,128(r30)
	REX_STORE_U32(r30.u32 + 128, ctx.r11.u32);
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lfs f13,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x822913c8
	if (ctx.cr6.gt) goto loc_822913C8;
	// lfs f0,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x822913c8
	if (ctx.cr6.lt) goto loc_822913C8;
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822913c8
	if (ctx.cr6.gt) goto loc_822913C8;
	// lfs f0,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x822913c8
	if (ctx.cr6.lt) goto loc_822913C8;
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822913c8
	if (ctx.cr6.gt) goto loc_822913C8;
	// lfs f0,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822913cc
	if (!ctx.cr6.lt) goto loc_822913CC;
loc_822913C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822913CC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822914b0
	if (ctx.cr0.eq) goto loc_822914B0;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f13,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// fsubs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,100(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f11,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f5,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f11,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fsubs f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// fmuls f0,f7,f6
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f10,f7,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bge cr6,0x82291470
	if (!ctx.cr6.lt) goto loc_82291470;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82291470:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82291480
	if (!ctx.cr6.lt) goto loc_82291480;
	// fneg f0,f10
	ctx.f0.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82291480:
	// fcmpu cr6,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x82291490
	if (!ctx.cr6.lt) goto loc_82291490;
	// fneg f0,f9
	ctx.f0.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82291490:
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82293be8
	ctx.lr = 0x822914A4;
	sub_82293BE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822914d0
	if (ctx.cr0.eq) goto loc_822914D0;
	// b 0x822914c0
	goto loc_822914C0;
loc_822914B0:
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82293b58
	ctx.lr = 0x822914C0;
	sub_82293B58(ctx, base);
loc_822914C0:
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 132);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,132(r30)
	REX_STORE_U32(r30.u32 + 132, ctx.r11.u32);
loc_822914CC:
	// li r26,1
	r26.s64 = 1;
loc_822914D0:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// addi r10,r11,21
	ctx.r10.s64 = ctx.r11.s64 + 21;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822914f4
	if (ctx.cr6.eq) goto loc_822914F4;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// b 0x822914fc
	goto loc_822914FC;
loc_822914F4:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// stwx r11,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r11.u32);
loc_822914FC:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82291510
	if (ctx.cr6.eq) goto loc_82291510;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// stw r10,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_82291510:
	// ld r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U64(r28.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r31,16
	ctx.r9.s64 = r31.s64 + 16;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// ld r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U64(r28.u32 + 8);
	// std r11,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r11.u64);
	// ld r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U64(r27.u32 + 0);
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
	// ld r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U64(r27.u32 + 8);
	// std r11,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r11.u64);
	// lwz r11,104(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 104);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// lwz r11,104(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 104);
	// addi r11,r11,21
	ctx.r11.s64 = ctx.r11.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// lwzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// lwzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82291568
	if (ctx.cr6.eq) goto loc_82291568;
	// stw r31,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, r31.u32);
loc_82291568:
	// clrlwi. r10,r26,24
	ctx.r10.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwx r31,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, r31.u32);
	// beq 0x822915b4
	if (ctx.cr0.eq) goto loc_822915B4;
	// lbz r11,153(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 153);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r10,154(r30)
	REX_STORE_U8(r30.u32 + 154, ctx.r10.u8);
	// bne 0x822915b4
	if (!ctx.cr0.eq) goto loc_822915B4;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r30,44
	ctx.r3.s64 = r30.s64 + 44;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,48(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r4,44(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 44);
	// bl 0x82292828
	ctx.lr = 0x822915A0;
	sub_82292828(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,48(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x82292828
	ctx.lr = 0x822915B4;
	sub_82292828(ctx, base);
loc_822915B4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_822ADF60) {
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
	ctx.lr = 0x822ADF68;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,36(r3)
	r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r29,12(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r22,r29
	ctx.cr6.compare<int32_t>(r22.s32, r29.s32, ctx.xer);
	// bge cr6,0x822ae248
	if (!ctx.cr6.lt) goto loc_822AE248;
	// rotlwi r28,r22,0
	r28.u64 = __builtin_rotateleft32(r22.u32, 0);
	// addi r31,r3,32
	r31.s64 = ctx.r3.s64 + 32;
	// li r23,0
	r23.s64 = 0;
	// li r24,1
	r24.s64 = 1;
	// lis r25,-32126
	r25.s64 = -2105409536;
	// lis r26,-32106
	r26.s64 = -2104098816;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// blt cr6,0x822ae074
	if (ctx.cr6.lt) goto loc_822AE074;
	// ble cr6,0x822ae048
	if (!ctx.cr6.gt) goto loc_822AE048;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bge cr6,0x822ae048
	if (!ctx.cr6.lt) goto loc_822AE048;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x822adfc8
	if (ctx.cr6.eq) goto loc_822ADFC8;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822c1a70
	ctx.lr = 0x822ADFC0;
	sub_822C1A70(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x822adfcc
	goto loc_822ADFCC;
loc_822ADFC8:
	// mr r30,r23
	r30.u64 = r23.u64;
loc_822ADFCC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822ae004
	if (!ctx.cr6.gt) goto loc_822AE004;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_822ADFE4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822adff8
	if (ctx.cr6.eq) goto loc_822ADFF8;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_822ADFF8:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822adfe4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822ADFE4;
loc_822AE004:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ae03c
	if (ctx.cr6.eq) goto loc_822AE03C;
	// lbz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822ae038
	if (ctx.cr0.eq) goto loc_822AE038;
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
	ctx.lr = 0x822AE038;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822AE038:
	// stw r23,12(r31)
	REX_STORE_U32(r31.u32 + 12, r23.u32);
loc_822AE03C:
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// stb r24,16(r31)
	REX_STORE_U8(r31.u32 + 16, r24.u8);
loc_822AE048:
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(r28.s32, r29.s32, ctx.xer);
	// bge cr6,0x822ae074
	if (!ctx.cr6.lt) goto loc_822AE074;
	// subf r11,r28,r29
	ctx.r11.u64 = r29.u64 - r28.u64;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822AE05C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ae06c
	if (ctx.cr0.eq) goto loc_822AE06C;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r23.u32);
loc_822AE06C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822ae05c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822AE05C;
loc_822AE074:
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r30,r27,52
	r30.s64 = r27.s64 + 52;
	// lwz r28,56(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 56);
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// blt cr6,0x822ae15c
	if (ctx.cr6.lt) goto loc_822AE15C;
	// ble cr6,0x822ae130
	if (!ctx.cr6.gt) goto loc_822AE130;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bge cr6,0x822ae130
	if (!ctx.cr6.lt) goto loc_822AE130;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x822ae0b0
	if (ctx.cr6.eq) goto loc_822AE0B0;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822c1a70
	ctx.lr = 0x822AE0A8;
	sub_822C1A70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x822ae0b4
	goto loc_822AE0B4;
loc_822AE0B0:
	// mr r31,r23
	r31.u64 = r23.u64;
loc_822AE0B4:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822ae0ec
	if (!ctx.cr6.gt) goto loc_822AE0EC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_822AE0CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ae0e0
	if (ctx.cr6.eq) goto loc_822AE0E0;
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_822AE0E0:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822ae0cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822AE0CC;
loc_822AE0EC:
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ae124
	if (ctx.cr6.eq) goto loc_822AE124;
	// lbz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822ae120
	if (ctx.cr0.eq) goto loc_822AE120;
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
	ctx.lr = 0x822AE120;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822AE120:
	// stw r23,12(r30)
	REX_STORE_U32(r30.u32 + 12, r23.u32);
loc_822AE124:
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
	// stb r24,16(r30)
	REX_STORE_U8(r30.u32 + 16, r24.u8);
loc_822AE130:
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(r28.s32, r29.s32, ctx.xer);
	// bge cr6,0x822ae15c
	if (!ctx.cr6.lt) goto loc_822AE15C;
	// subf r11,r28,r29
	ctx.r11.u64 = r29.u64 - r28.u64;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822AE144:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ae154
	if (ctx.cr0.eq) goto loc_822AE154;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r23.u32);
loc_822AE154:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822ae144
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822AE144;
loc_822AE15C:
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x822ae1a4
	if (!ctx.cr6.gt) goto loc_822AE1A4;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_822AE174:
	// lwz r9,44(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 44);
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822ae174
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822AE174;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x822ae1a4
	if (!ctx.cr6.gt) goto loc_822AE1A4;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_822AE194:
	// lwz r9,64(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 64);
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822ae194
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822AE194;
loc_822AE1A4:
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x822ae248
	if (!ctx.cr6.gt) goto loc_822AE248;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_822AE1BC:
	// lwz r9,16(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 16);
	// lwz r7,12(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 12);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r6,44(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 44);
	// addi r5,r7,-1
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// lwz r4,64(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 64);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,12(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rlwinm r7,r9,15,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0xFFFF8000;
	// not r7,r7
	ctx.r7.u64 = ~ctx.r7.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r7,r9,10
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 10;
	// xor r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// mulli r9,r9,9
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(9));
	// srawi r7,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 6;
	// xor r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// rlwinm r7,r9,11,0,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// not r7,r7
	ctx.r7.u64 = ~ctx.r7.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r7,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 16;
	// xor r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// and r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 & ctx.r5.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// stwx r7,r10,r4
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r7,44(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 44);
	// stwx r8,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x822ae1bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822AE1BC;
loc_822AE248:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_822C2BD8) {
	REX_FUNC_PROLOGUE();
	// stb r4,10499(r3)
	REX_STORE_U8(ctx.r3.u32 + 10499, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2EC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12616(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12616);
	// li r12,1
	ctx.r12.s64 = 1;
	// lwz r9,10460(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 10460);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// stw r4,12036(r3)
	REX_STORE_U32(ctx.r3.u32 + 12036, ctx.r4.u32);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// rlwimi r11,r9,0,0,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// stw r11,10460(r3)
	REX_STORE_U32(ctx.r3.u32 + 10460, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3AA8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12028(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12028);
	// rlwinm r3,r11,9,25,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x7F;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C40C8) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,3180
	ctx.r11.s64 = ctx.r4.s64 + 3180;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c4128
	if (ctx.cr6.eq) goto loc_822C4128;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// rlwinm r11,r11,30,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xF;
	// mulli r10,r10,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x822c40fc
	if (ctx.cr6.gt) goto loc_822C40FC;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_822C40FC:
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// addi r8,r4,32
	ctx.r8.s64 = ctx.r4.s64 + 32;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwimi r9,r11,2,26,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFC3);
	// rldicr r11,r7,63,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stw r9,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// clrldi r10,r8,32
	ctx.r10.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// srd r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
loc_822C4128:
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,12126(r11)
	REX_STORE_U8(ctx.r11.u32 + 12126, ctx.r5.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C9108) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r10,r4,2535
	ctx.r10.s64 = ctx.r4.s64 + 2535;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_822C9118:
	// lbz r9,7(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lbz r8,3(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,-1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bne 0x822c9118
	if (!ctx.cr0.eq) goto loc_822C9118;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CBC40) {
	REX_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi r11,r9,20
	ctx.r11.u64 = ctx.r9.u32 & 0xFFF;
	// rlwinm. r7,r9,20,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r4,r9,16,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFF;
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r5,0
	ctx.r5.s64 = 0;
loc_822CBC68:
	// slw r11,r3,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r5.u8 & 0x3F));
	// and. r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822cbcc8
	if (!ctx.cr0.eq) goto loc_822CBCC8;
	// lbz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r9,r9,6,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3F;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// blt cr6,0x822cbc98
	if (ctx.cr6.lt) goto loc_822CBC98;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ble cr6,0x822cbc9c
	if (!ctx.cr6.gt) goto loc_822CBC9C;
loc_822CBC98:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822CBC9C:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 27, ctx.xer);
	// blt cr6,0x822cbcb4
	if (ctx.cr6.lt) goto loc_822CBCB4;
	// cmplwi cr6,r9,34
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 34, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ble cr6,0x822cbcb8
	if (!ctx.cr6.gt) goto loc_822CBCB8;
loc_822CBCB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822CBCB8:
	// clrlwi. r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822cbce0
	if (!ctx.cr0.eq) goto loc_822CBCE0;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822cbce0
	if (!ctx.cr0.eq) goto loc_822CBCE0;
loc_822CBCC8:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x822cbc68
	if (ctx.cr6.lt) goto loc_822CBC68;
	// blr 
	return;
loc_822CBCE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CF268) {
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
	ctx.lr = 0x822CF270;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82793a84
	ctx.lr = 0x822CF27C;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822cf290
	if (!ctx.cr6.eq) goto loc_822CF290;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2064(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2064);
	// b 0x822cf298
	goto loc_822CF298;
loc_822CF290:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2068(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2068);
loc_822CF298:
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r26,r31,16924
	r26.s64 = r31.s64 + 16924;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82793c94
	ctx.lr = 0x822CF2A8;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r10,16776(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16776);
	// lwz r11,21768(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21768);
	// rlwinm r29,r30,24,28,31
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 24) & 0xF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r27,r30,24
	r27.u64 = r30.u32 & 0xFF;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r10,16776(r31)
	REX_STORE_U32(r31.u32 + 16776, ctx.r10.u32);
	// rlwinm r30,r30,0,0,19
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFF000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// bne cr6,0x822cf2d8
	if (!ctx.cr6.eq) goto loc_822CF2D8;
	// li r28,60
	r28.s64 = 60;
loc_822CF2D8:
	// mftb r11
	ctx.r11.u64 = REX_QUERY_TIMEBASE();
	// lwz r10,16764(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16764);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r24,r10,r11
	r24.u64 = ctx.r11.u64 - ctx.r10.u64;
	// bl 0x82793944
	ctx.lr = 0x822CF2EC;
	__imp__KeQueryPerformanceFrequency(ctx, base);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// mulli r10,r24,100
	ctx.r10.s64 = static_cast<int64_t>(r24.u64 * static_cast<uint64_t>(100));
	// divwu r11,r11,r28
	ctx.r11.u64 = uint32_t(r28.u32 ? ctx.r11.u32 / r28.u32 : 0);
	// twllei r28,0
	if (r28.s32 == 0 || r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r10,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r7,100
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 100, ctx.xer);
	// ble cr6,0x822cf314
	if (!ctx.cr6.gt) goto loc_822CF314;
	// li r7,100
	ctx.r7.s64 = 100;
loc_822CF314:
	// lwz r8,16768(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16768);
	// lwz r10,16760(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16760);
	// add r11,r8,r29
	ctx.r11.u64 = ctx.r8.u64 + r29.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x822cf340
	if (ctx.cr6.gt) goto loc_822CF340;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822cf340
	if (ctx.cr6.eq) goto loc_822CF340;
	// cmplw cr6,r7,r27
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r27.u32, ctx.xer);
	// ble cr6,0x822cf340
	if (!ctx.cr6.gt) goto loc_822CF340;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822CF340:
	// lwz r9,16752(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16752);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822cf380
	if (ctx.cr6.eq) goto loc_822CF380;
	// lwz r6,16776(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16776);
	// addic r5,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r5.s64 = r30.s64 + -1;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subfe r11,r5,r30
	temp.u8 = (~ctx.r5.u32 + r30.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r5.u64 + r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x822CF37C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_822CF380:
	// lwz r10,16760(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16760);
	// stw r11,16768(r31)
	REX_STORE_U32(r31.u32 + 16768, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822cf3c8
	if (ctx.cr6.eq) goto loc_822CF3C8;
	// lwz r10,16776(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16776);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x822cf3c8
	if (ctx.cr6.eq) goto loc_822CF3C8;
	// lwz r10,16916(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16916);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// addi r10,r10,2098
	ctx.r10.s64 = ctx.r10.s64 + 2098;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r30,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// lwz r11,16916(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16916);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16916(r31)
	REX_STORE_U32(r31.u32 + 16916, ctx.r11.u32);
	// b 0x822cf404
	goto loc_822CF404;
loc_822CF3C8:
	// lwz r11,16780(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16780);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16780(r31)
	REX_STORE_U32(r31.u32 + 16780, ctx.r11.u32);
	// beq cr6,0x822cf3f0
	if (ctx.cr6.eq) goto loc_822CF3F0;
	// lis r11,32712
	ctx.r11.s64 = 2143813632;
	// stw r30,24848(r11)
	REX_MM_STORE_U32(ctx.r11.u32 + 24848, r30.u32);
	// eieio 
	// sync 
	// b 0x822cf3fc
	goto loc_822CF3FC;
loc_822CF3F0:
	// lwz r11,10900(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10900);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	REX_MM_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_822CF3FC:
	// mftb r11
	ctx.r11.u64 = REX_QUERY_TIMEBASE();
	// stw r11,23588(r31)
	REX_STORE_U32(r31.u32 + 23588, ctx.r11.u32);
loc_822CF404:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82793ca4
	ctx.lr = 0x822CF410;
	__imp__KfReleaseSpinLock(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_822DD890) {
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
	ctx.lr = 0x822DD898;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82793a84
	ctx.lr = 0x822DD8A8;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822dd8bc
	if (!ctx.cr6.eq) goto loc_822DD8BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2064(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2064);
	// b 0x822dd8c4
	goto loc_822DD8C4;
loc_822DD8BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2068(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2068);
loc_822DD8C4:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r26,0(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ddbf8
	if (ctx.cr0.eq) goto loc_822DDBF8;
	// lis r24,-30976
	r24.s64 = -2030043136;
	// lis r25,-16384
	r25.s64 = -1073741824;
loc_822DD8DC:
	// rlwinm r11,r10,0,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF000000;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// bgt cr6,0x822dda68
	if (ctx.cr6.gt) goto loc_822DDA68;
	// beq cr6,0x822dda38
	if (ctx.cr6.eq) goto loc_822DDA38;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822dda04
	if (ctx.cr6.eq) goto loc_822DDA04;
	// lis r9,-32512
	ctx.r9.s64 = -2130706432;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822dd9e0
	if (ctx.cr6.eq) goto loc_822DD9E0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822ddbec
	if (ctx.cr6.eq) goto loc_822DDBEC;
	// lis r9,-32000
	ctx.r9.s64 = -2097152000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822dd9a0
	if (ctx.cr6.eq) goto loc_822DD9A0;
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822dd980
	if (ctx.cr6.eq) goto loc_822DD980;
	// lis r9,-31488
	ctx.r9.s64 = -2063597568;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822dd954
	if (ctx.cr6.eq) goto loc_822DD954;
	// lis r9,-31232
	ctx.r9.s64 = -2046820352;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822ddabc
	if (!ctx.cr6.eq) goto loc_822DDABC;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// stw r31,372(r30)
	REX_STORE_U32(r30.u32 + 372, r31.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// b 0x822dd9d0
	goto loc_822DD9D0;
loc_822DD954:
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// stw r31,368(r30)
	REX_STORE_U32(r30.u32 + 368, r31.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwimi r11,r10,26,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r11.u32);
	// beq 0x822dd9d4
	if (ctx.cr0.eq) goto loc_822DD9D4;
	// lwz r31,364(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 364);
	// b 0x822ddbec
	goto loc_822DDBEC;
loc_822DD980:
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r11.u32);
	// beq 0x822dd9d4
	if (ctx.cr0.eq) goto loc_822DD9D4;
	// lwz r31,368(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 368);
	// b 0x822ddbec
	goto loc_822DDBEC;
loc_822DD9A0:
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 52);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r31,364(r30)
	REX_STORE_U32(r30.u32 + 364, r31.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r11.u32);
	// ble cr6,0x822dd9d4
	if (!ctx.cr6.gt) goto loc_822DD9D4;
	// lwz r10,108(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 108);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822dd9d4
	if (ctx.cr0.eq) goto loc_822DD9D4;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
loc_822DD9D0:
	// stw r11,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r11.u32);
loc_822DD9D4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822dd398
	ctx.lr = 0x822DD9DC;
	sub_822DD398(ctx, base);
	// b 0x822ddbec
	goto loc_822DDBEC;
loc_822DD9E0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822d53d0
	ctx.lr = 0x822DD9FC;
	sub_822D53D0(ctx, base);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// b 0x822ddbec
	goto loc_822DDBEC;
loc_822DDA04:
	// addi r3,r30,108
	ctx.r3.s64 = r30.s64 + 108;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// li r5,248
	ctx.r5.s64 = 248;
	// bl 0x826a1e70
	ctx.lr = 0x822DDA14;
	sub_826A1E70(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r10.u32);
	// addi r31,r31,252
	r31.s64 = r31.s64 + 252;
	// stw r11,356(r30)
	REX_STORE_U32(r30.u32 + 356, ctx.r11.u32);
	// stw r9,360(r30)
	REX_STORE_U32(r30.u32 + 360, ctx.r9.u32);
	// b 0x822ddbec
	goto loc_822DDBEC;
loc_822DDA38:
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r9,112(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,0,3,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r11,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r10,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r10.u32);
	// bge cr6,0x822dd9d4
	if (!ctx.cr6.lt) goto loc_822DD9D4;
	// lwz r31,372(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 372);
	// b 0x822ddbec
	goto loc_822DDBEC;
loc_822DDA68:
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822ddbd0
	if (ctx.cr6.eq) goto loc_822DDBD0;
	// lis r9,-30464
	ctx.r9.s64 = -1996488704;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822ddb6c
	if (ctx.cr6.eq) goto loc_822DDB6C;
	// lis r9,-30208
	ctx.r9.s64 = -1979711488;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822ddb0c
	if (ctx.cr6.eq) goto loc_822DDB0C;
	// lis r9,-29952
	ctx.r9.s64 = -1962934272;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822ddb04
	if (ctx.cr6.eq) goto loc_822DDB04;
	// lis r9,-29696
	ctx.r9.s64 = -1946157056;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822ddbf8
	if (ctx.cr6.eq) goto loc_822DDBF8;
	// lis r9,-29440
	ctx.r9.s64 = -1929379840;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822ddbf8
	if (ctx.cr6.eq) goto loc_822DDBF8;
	// lis r9,-29184
	ctx.r9.s64 = -1912602624;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822ddacc
	if (ctx.cr6.eq) goto loc_822DDACC;
loc_822DDABC:
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r25.u32, ctx.xer);
	// beq cr6,0x822ddbf8
	if (ctx.cr6.eq) goto loc_822DDBF8;
	// addi r31,r10,4
	r31.s64 = ctx.r10.s64 + 4;
	// b 0x822ddbec
	goto loc_822DDBEC;
loc_822DDACC:
	// lwz r11,356(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 356);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ddaf4
	if (ctx.cr0.eq) goto loc_822DDAF4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x822d53d0
	ctx.lr = 0x822DDAF4;
	sub_822D53D0(ctx, base);
loc_822DDAF4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// stw r11,360(r30)
	REX_STORE_U32(r30.u32 + 360, ctx.r11.u32);
	// b 0x822ddbec
	goto loc_822DDBEC;
loc_822DDB04:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x822ddbec
	goto loc_822DDBEC;
loc_822DDB0C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r27,4(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r29,8(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r28,12(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x822dd158
	ctx.lr = 0x822DDB28;
	sub_822DD158(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822dd478
	ctx.lr = 0x822DDB30;
	sub_822DD478(ctx, base);
	// lwz r11,356(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 356);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ddb4c
	if (ctx.cr0.eq) goto loc_822DDB4C;
	// addi r3,r30,108
	ctx.r3.s64 = r30.s64 + 108;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822dd558
	ctx.lr = 0x822DDB48;
	sub_822DD558(ctx, base);
	// b 0x822ddb64
	goto loc_822DDB64;
loc_822DDB4C:
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822ddb64
	if (!ctx.cr6.eq) goto loc_822DDB64;
	// addi r3,r30,108
	ctx.r3.s64 = r30.s64 + 108;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822dd698
	ctx.lr = 0x822DDB64;
	sub_822DD698(ctx, base);
loc_822DDB64:
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
	// b 0x822ddbec
	goto loc_822DDBEC;
loc_822DDB6C:
	// lwz r11,356(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 356);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ddbc8
	if (ctx.cr0.eq) goto loc_822DDBC8;
	// addi r27,r30,108
	r27.s64 = r30.s64 + 108;
	// lwz r29,8(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822dd790
	ctx.lr = 0x822DDB90;
	sub_822DD790(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_822DDB94:
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r29,r11,4
	r29.s64 = ctx.r11.s64 + 4;
	// b 0x822ddbb4
	goto loc_822DDBB4;
loc_822DDBA0:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822dd790
	ctx.lr = 0x822DDBB0;
	sub_822DD790(ctx, base);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
loc_822DDBB4:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// blt cr6,0x822ddba0
	if (ctx.cr6.lt) goto loc_822DDBA0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bne cr6,0x822ddb94
	if (!ctx.cr6.eq) goto loc_822DDB94;
loc_822DDBC8:
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// b 0x822ddbec
	goto loc_822DDBEC;
loc_822DDBD0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// lwz r10,356(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 356);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ddbec
	if (ctx.cr0.eq) goto loc_822DDBEC;
	// stw r31,72(r30)
	REX_STORE_U32(r30.u32 + 72, r31.u32);
	// addi r31,r30,84
	r31.s64 = r30.s64 + 84;
loc_822DDBEC:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822dd8dc
	if (!ctx.cr0.eq) goto loc_822DD8DC;
loc_822DDBF8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_822F5B58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822F5B60;
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
	// bne cr6,0x822f5b84
	if (!ctx.cr6.eq) goto loc_822F5B84;
loc_822F5B74:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_822F5B84:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// stw r8,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r8.u32);
	// beq cr6,0x822f5cbc
	if (ctx.cr6.eq) goto loc_822F5CBC;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,52
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 52, ctx.xer);
	// bne cr6,0x822f5b74
	if (!ctx.cr6.eq) goto loc_822F5B74;
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// addi r11,r11,23088
	ctx.r11.s64 = ctx.r11.s64 + 23088;
	// addi r9,r9,23104
	ctx.r9.s64 = ctx.r9.s64 + 23104;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f5bd0
	if (ctx.cr6.eq) goto loc_822F5BD0;
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822f5b74
	if (ctx.cr6.eq) goto loc_822F5B74;
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822F5BD0:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r7,r10,0,23,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822f5c28
	if (!ctx.cr6.eq) goto loc_822F5C28;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822f5c28
	if (!ctx.cr6.eq) goto loc_822F5C28;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822f5c28
	if (!ctx.cr6.eq) goto loc_822F5C28;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822f5c28
	if (!ctx.cr6.eq) goto loc_822F5C28;
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822f5c28
	if (!ctx.cr6.eq) goto loc_822F5C28;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822f5c28
	if (!ctx.cr6.eq) goto loc_822F5C28;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822f5c84
	if (ctx.cr6.eq) goto loc_822F5C84;
loc_822F5C28:
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r6,r10,30,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// rlwinm r5,r10,29,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x822f5d24
	if (ctx.cr6.eq) goto loc_822F5D24;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822f5d24
	if (ctx.cr6.eq) goto loc_822F5D24;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x822f4a18
	ctx.lr = 0x822F5C64;
	sub_822F4A18(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f5d24
	if (ctx.cr6.eq) goto loc_822F5D24;
	// li r5,28
	ctx.r5.s64 = 28;
	// lwz r3,76(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x822F5C80;
	sub_826A1E70(ctx, base);
	// b 0x822f5d1c
	goto loc_822F5D1C;
loc_822F5C84:
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r6,r10,30,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// rlwinm r5,r10,29,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x822f5d24
	if (ctx.cr6.eq) goto loc_822F5D24;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822f5d24
	if (ctx.cr6.eq) goto loc_822F5D24;
	// b 0x822f5d10
	goto loc_822F5D10;
loc_822F5CBC:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r9,-32209
	ctx.r9.s64 = -2110849024;
	// addi r8,r11,23088
	ctx.r8.s64 = ctx.r11.s64 + 23088;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r10,23088
	ctx.r6.s64 = ctx.r10.s64 + 23088;
	// addi r5,r9,23104
	ctx.r5.s64 = ctx.r9.s64 + 23104;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// beq cr6,0x822f5d24
	if (ctx.cr6.eq) goto loc_822F5D24;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r10,r11,23104
	ctx.r10.s64 = ctx.r11.s64 + 23104;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f5d24
	if (ctx.cr6.eq) goto loc_822F5D24;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822F5D10:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x822f45e0
	ctx.lr = 0x822F5D18;
	sub_822F45E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_822F5D1C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x822f5d34
	if (!ctx.cr6.eq) goto loc_822F5D34;
loc_822F5D24:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_822F5D34:
	// stw r30,0(r29)
	REX_STORE_U32(r29.u32 + 0, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822FF648) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// fcmpu cr6,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// bge cr6,0x822ff6bc
	if (!ctx.cr6.lt) goto loc_822FF6BC;
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822ff6ac
	if (!ctx.cr6.gt) goto loc_822FF6AC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_822FF668:
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x822ff694
	if (ctx.cr6.lt) goto loc_822FF694;
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bgt cr6,0x822ff694
	if (ctx.cr6.gt) goto loc_822FF694;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ff6b4
	if (ctx.cr6.eq) goto loc_822FF6B4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_822FF694:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r8,36(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x822ff668
	if (ctx.cr6.lt) goto loc_822FF668;
loc_822FF6AC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_822FF6B4:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
loc_822FF6BC:
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x822ff6ac
	if (ctx.cr0.lt) goto loc_822FF6AC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_822FF6CC:
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,32(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lfsx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x822ff6fc
	if (ctx.cr6.gt) goto loc_822FF6FC;
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// blt cr6,0x822ff6fc
	if (ctx.cr6.lt) goto loc_822FF6FC;
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822ff70c
	if (ctx.cr6.eq) goto loc_822FF70C;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
loc_822FF6FC:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bge 0x822ff6cc
	if (!ctx.cr0.lt) goto loc_822FF6CC;
	// b 0x822ff6ac
	goto loc_822FF6AC;
loc_822FF70C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823039A8) {
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
	ctx.lr = 0x823039B0;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823039d8
	if (!ctx.cr6.eq) goto loc_823039D8;
	// li r3,31
	ctx.r3.s64 = 31;
	// b 0x82303aa8
	goto loc_82303AA8;
loc_823039D8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x823039e8
	if (!ctx.cr6.eq) goto loc_823039E8;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82303aa8
	goto loc_82303AA8;
loc_823039E8:
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// addi r29,r30,136
	r29.s64 = r30.s64 + 136;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82303a00
	if (!ctx.cr6.eq) goto loc_82303A00;
loc_823039FC:
	// li r31,0
	r31.s64 = 0;
loc_82303A00:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// bne cr6,0x82303a10
	if (!ctx.cr6.eq) goto loc_82303A10;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82303A10:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x82303aa4
	if (ctx.cr6.eq) goto loc_82303AA4;
	// lwz r4,32(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82303a38
	if (ctx.cr6.eq) goto loc_82303A38;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331480
	ctx.lr = 0x82303A2C;
	sub_82331480(ctx, base);
	// addi r4,r31,17
	ctx.r4.s64 = r31.s64 + 17;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823314c8
	ctx.lr = 0x82303A38;
	sub_823314C8(ctx, base);
loc_82303A38:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,17
	ctx.r3.s64 = r31.s64 + 17;
	// bl 0x82331668
	ctx.lr = 0x82303A44;
	sub_82331668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82303a6c
	if (ctx.cr0.eq) goto loc_82303A6C;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82303a78
	if (ctx.cr6.eq) goto loc_82303A78;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331668
	ctx.lr = 0x82303A64;
	sub_82331668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82303a78
	if (!ctx.cr0.eq) goto loc_82303A78;
loc_82303A6C:
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82303a8c
	if (ctx.cr6.eq) goto loc_82303A8C;
loc_82303A78:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823039fc
	if (ctx.cr6.eq) goto loc_823039FC;
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// b 0x82303a00
	goto loc_82303A00;
loc_82303A8C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82303a9c
	if (ctx.cr6.eq) goto loc_82303A9C;
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
loc_82303A9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82303aa8
	goto loc_82303AA8;
loc_82303AA4:
	// li r3,23
	ctx.r3.s64 = 23;
loc_82303AA8:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8230DCF8) {
	REX_FUNC_PROLOGUE();
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x8230d050
	sub_8230D050(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8230ECC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8230ECD0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r30,-32129
	r30.s64 = -2105606144;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r31,r11,5120
	r31.s64 = ctx.r11.s64 + 5120;
	// beq cr6,0x8230ed08
	if (ctx.cr6.eq) goto loc_8230ED08;
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,26
	ctx.r6.s64 = 26;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8230ED08;
	sub_82330D00(ctx, base);
loc_8230ED08:
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,29
	ctx.r6.s64 = 29;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8230ED24;
	sub_82330D00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823107A0) {
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
	// lhz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x823107d8
	if (!ctx.cr0.eq) goto loc_823107D8;
	// lhz r10,54(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 54);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x823107d8
	if (!ctx.cr0.eq) goto loc_823107D8;
loc_823107D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82310860
	goto loc_82310860;
loc_823107D8:
	// lhz r10,54(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 54);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823107ec
	if (!ctx.cr6.eq) goto loc_823107EC;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// b 0x82310820
	goto loc_82310820;
loc_823107EC:
	// lhz r30,52(r31)
	r30.u64 = REX_LOAD_U16(r31.u32 + 52);
	// bl 0x826a1b88
	ctx.lr = 0x823107F4;
	sub_826A1B88(ctx, base);
	// lhz r11,54(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 54);
	// subf r10,r30,r11
	ctx.r10.u64 = ctx.r11.u64 - r30.u64;
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw r9,r3,r10
	ctx.r9.u64 = uint32_t((ctx.r10.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r3.s32 / ctx.r10.s32 : 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// subf r11,r9,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r9.u64;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// add r31,r11,r30
	r31.u64 = ctx.r11.u64 + r30.u64;
loc_82310820:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,-10820(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -10820);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8232f230
	ctx.lr = 0x82310848;
	sub_8232F230(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823107d0
	if (!ctx.cr0.eq) goto loc_823107D0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// divw r11,r11,r10
	ctx.r11.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// mullw r3,r11,r31
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
loc_82310860:
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

DEFINE_REX_FUNC(sub_823149B8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82331a00
	ctx.lr = 0x823149E8;
	sub_82331A00(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82314a14
	if (ctx.cr6.eq) goto loc_82314A14;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82314A0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82314a18
	if (!ctx.cr0.eq) goto loc_82314A18;
loc_82314A14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82314A18:
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

DEFINE_REX_FUNC(sub_82317318) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,5948
	ctx.r11.s64 = ctx.r11.s64 + 5948;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82317344
	if (ctx.cr0.eq) goto loc_82317344;
	// bl 0x8269ce98
	ctx.lr = 0x82317344;
	sub_8269CE98(ctx, base);
loc_82317344:
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

DEFINE_REX_FUNC(sub_82318CF0) {
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
	// lwz r4,16(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82318d30
	if (ctx.cr6.eq) goto loc_82318D30;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,6576
	ctx.r5.s64 = ctx.r10.s64 + 6576;
	// li r6,1094
	ctx.r6.s64 = 1094;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82318D30;
	sub_82330D00(ctx, base);
loc_82318D30:
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82318d48
	if (ctx.cr6.eq) goto loc_82318D48;
	// bl 0x823151e8
	ctx.lr = 0x82318D40;
	sub_823151E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82318d64
	if (!ctx.cr0.eq) goto loc_82318D64;
loc_82318D48:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// bl 0x82316468
	ctx.lr = 0x82318D60;
	sub_82316468(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82318D64:
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

DEFINE_REX_FUNC(sub_8231D638) {
	REX_FUNC_PROLOGUE();
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// addi r9,r9,6800
	ctx.r9.s64 = ctx.r9.s64 + 6800;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,156(r3)
	REX_STORE_U32(ctx.r3.u32 + 156, ctx.r10.u32);
	// stw r10,160(r3)
	REX_STORE_U32(ctx.r3.u32 + 160, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8231F708) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231f738
	if (ctx.cr6.eq) goto loc_8231F738;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lha r11,100(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 100));
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r4,r11,26,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// bl 0x823132b8
	ctx.lr = 0x8231F738;
	sub_823132B8(ctx, base);
loc_8231F738:
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

DEFINE_REX_FUNC(sub_82321830) {
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
	ctx.lr = 0x82321838;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82340718
	ctx.lr = 0x82321860;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823219cc
	if (!ctx.cr0.eq) goto loc_823219CC;
	// lis r29,-32129
	r29.s64 = -2105606144;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r30,r11,7236
	r30.s64 = ctx.r11.s64 + 7236;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r6,1830
	ctx.r6.s64 = 1830;
	// li r4,60
	ctx.r4.s64 = 60;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x82321894;
	sub_82330A38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823218a8
	if (ctx.cr0.eq) goto loc_823218A8;
	// bl 0x82313250
	ctx.lr = 0x823218A0;
	sub_82313250(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x823218ac
	goto loc_823218AC;
loc_823218A8:
	// li r31,0
	r31.s64 = 0;
loc_823218AC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x823218bc
	if (!ctx.cr6.eq) goto loc_823218BC;
loc_823218B4:
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x823219cc
	goto loc_823219CC;
loc_823218BC:
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1838
	ctx.r6.s64 = 1838;
	// li r4,148
	ctx.r4.s64 = 148;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x823218DC;
	sub_82330A38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823218f0
	if (ctx.cr0.eq) goto loc_823218F0;
	// bl 0x82312d20
	ctx.lr = 0x823218E8;
	sub_82312D20(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x823218f4
	goto loc_823218F4;
loc_823218F0:
	// li r30,0
	r30.s64 = 0;
loc_823218F4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x82321908
	if (!ctx.cr6.eq) goto loc_82321908;
	// bl 0x82312c48
	ctx.lr = 0x82321904;
	sub_82312C48(ctx, base);
	// b 0x823218b4
	goto loc_823218B4;
loc_82321908:
	// bl 0x82312be0
	ctx.lr = 0x8232190C;
	sub_82312BE0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823114d8
	ctx.lr = 0x82321918;
	sub_823114D8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r11,172(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232193c
	if (ctx.cr6.eq) goto loc_8232193C;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82321940
	goto loc_82321940;
loc_8232193C:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82321940:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82321964
	if (ctx.cr6.eq) goto loc_82321964;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82321958
	if (ctx.cr6.eq) goto loc_82321958;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8232195c
	goto loc_8232195C;
loc_82321958:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232195C:
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// b 0x82321968
	goto loc_82321968;
loc_82321964:
	// lwz r11,168(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 168);
loc_82321968:
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r10,168(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 168);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r11,r11,148
	ctx.r11.s64 = ctx.r11.s64 + 148;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,64(r10)
	REX_STORE_U32(ctx.r10.u32 + 64, ctx.r11.u32);
	// bl 0x82312088
	ctx.lr = 0x82321988;
	sub_82312088(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x823219a4
	if (ctx.cr0.eq) goto loc_823219A4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823132b8
	ctx.lr = 0x8232199C;
	sub_823132B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x823219cc
	goto loc_823219CC;
loc_823219A4:
	// bl 0x82311998
	ctx.lr = 0x823219A8;
	sub_82311998(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823219bc
	if (ctx.cr0.eq) goto loc_823219BC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4);
	// bl 0x822f7a68
	ctx.lr = 0x823219BC;
	sub_822F7A68(ctx, base);
loc_823219BC:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
	// stw r30,16(r28)
	REX_STORE_U32(r28.u32 + 16, r30.u32);
loc_823219CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8232D028) {
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
	// beq cr6,0x8232d064
	if (ctx.cr6.eq) goto loc_8232D064;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,168(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232D05C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232d068
	if (!ctx.cr0.eq) goto loc_8232D068;
loc_8232D064:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232D068:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232F438) {
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
	ctx.lr = 0x8232F45C;
	sub_82332760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232f474
	if (!ctx.cr6.eq) goto loc_8232F474;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82338bc8
	ctx.lr = 0x8232F474;
	sub_82338BC8(ctx, base);
loc_8232F474:
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

DEFINE_REX_FUNC(sub_823301A8) {
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
	ctx.lr = 0x823301C4;
	sub_82351018(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823301dc
	if (!ctx.cr6.eq) goto loc_823301DC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82351328
	ctx.lr = 0x823301DC;
	sub_82351328(ctx, base);
loc_823301DC:
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

DEFINE_REX_FUNC(sub_82333350) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82333358;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82333380
	if (!ctx.cr6.eq) goto loc_82333380;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82333380:
	// cmpwi cr6,r4,-2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2, ctx.xer);
	// bne cr6,0x823333bc
	if (!ctx.cr6.eq) goto loc_823333BC;
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8233339c
	if (!ctx.cr6.eq) goto loc_8233339C;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x823333bc
	goto loc_823333BC;
loc_8233339C:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823333e0
	if (ctx.cr6.eq) goto loc_823333E0;
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r4,-2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2, ctx.xer);
	// beq cr6,0x823334dc
	if (ctx.cr6.eq) goto loc_823334DC;
loc_823333BC:
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// stw r29,0(r28)
	REX_STORE_U32(r28.u32 + 0, r29.u32);
	// beq cr6,0x823333f0
	if (ctx.cr6.eq) goto loc_823333F0;
	// lwz r11,308(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 308);
	// mulli r10,r4,424
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(424));
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82350470
	ctx.lr = 0x823333DC;
	sub_82350470(ctx, base);
	// b 0x8233348c
	goto loc_8233348C;
loc_823333E0:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234f290
	ctx.lr = 0x823333EC;
	sub_8234F290(ctx, base);
	// b 0x823334dc
	goto loc_823334DC;
loc_823333F0:
	// lwz r11,744(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 744);
	// addi r10,r30,744
	ctx.r10.s64 = r30.s64 + 744;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82333410
	if (!ctx.cr6.eq) goto loc_82333410;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82333414
	if (ctx.cr6.eq) goto loc_82333414;
loc_82333410:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_82333414:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233343c
	if (!ctx.cr6.eq) goto loc_8233343C;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82333434
	if (ctx.cr6.eq) goto loc_82333434;
	// addi r31,r11,-8
	r31.s64 = ctx.r11.s64 + -8;
	// b 0x8233348c
	goto loc_8233348C;
loc_82333434:
	// mr r31,r29
	r31.u64 = r29.u64;
	// b 0x8233348c
	goto loc_8233348C;
loc_8233343C:
	// lwz r10,1160(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1160);
	// addi r11,r30,1160
	ctx.r11.s64 = r30.s64 + 1160;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8233345c
	if (!ctx.cr6.eq) goto loc_8233345C;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82333460
	if (ctx.cr6.eq) goto loc_82333460;
loc_8233345C:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_82333460:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82333478
	if (ctx.cr6.eq) goto loc_82333478;
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82333478:
	// lwz r11,1164(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1164);
	// li r4,21
	ctx.r4.s64 = 21;
	// lwz r31,8(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234f290
	ctx.lr = 0x8233348C;
	sub_8234F290(ctx, base);
loc_8233348C:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addic. r8,r30,312
	ctx.xer.ca = r30.u32 > 4294966983;
	ctx.r8.s64 = r30.s64 + 312;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r30,320
	ctx.r10.s64 = r30.s64 + 320;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r6,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r29,16(r31)
	REX_STORE_U32(r31.u32 + 16, r29.u32);
	// bne 0x823334c4
	if (!ctx.cr0.eq) goto loc_823334C4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_823334C4:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_823334DC:
	// lwz r3,20884(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20884);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82333508;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82333544
	if (ctx.cr6.eq) goto loc_82333544;
	// lwz r3,1208(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 1208);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233353C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233355c
	if (!ctx.cr6.eq) goto loc_8233355C;
loc_82333544:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// stw r31,0(r28)
	REX_STORE_U32(r28.u32 + 0, r31.u32);
loc_8233355C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82349BB8) {
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
	ctx.lr = 0x82349BC0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82349c48
	if (ctx.cr6.eq) goto loc_82349C48;
	// li r28,0
	r28.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bl 0x82349190
	ctx.lr = 0x82349BEC;
	sub_82349190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82349c74
	if (!ctx.cr6.eq) goto loc_82349C74;
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x82349c48
	if (!ctx.cr6.gt) goto loc_82349C48;
loc_82349C04:
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82349998
	ctx.lr = 0x82349C20;
	sub_82349998(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82349C3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(r31.s32, r29.s32, ctx.xer);
	// blt cr6,0x82349c04
	if (ctx.cr6.lt) goto loc_82349C04;
loc_82349C48:
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82349c60
	if (!ctx.cr6.eq) goto loc_82349C60;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_82349C60:
	// stw r30,28(r30)
	REX_STORE_U32(r30.u32 + 28, r30.u32);
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82349C74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82349C74:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8234D560) {
	REX_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8234d388
	sub_8234D388(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8234D618) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8234d628
	if (!ctx.cr6.eq) goto loc_8234D628;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_8234D628:
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234d63c
	if (!ctx.cr6.eq) goto loc_8234D63C;
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_8234D63C:
	// lwz r3,76(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8234EA28) {
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
	ctx.lr = 0x8234EA30;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,76(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r31,r3,76
	r31.s64 = ctx.r3.s64 + 76;
	// li r26,0
	r26.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234ea60
	if (!ctx.cr6.eq) goto loc_8234EA60;
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_8234EA60:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// beq cr6,0x8234ea78
	if (ctx.cr6.eq) goto loc_8234EA78;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// beq cr6,0x8234ea78
	if (ctx.cr6.eq) goto loc_8234EA78;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bne cr6,0x8234ea90
	if (!ctx.cr6.eq) goto loc_8234EA90;
loc_8234EA78:
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x8234ea9c
	if (ctx.cr6.eq) goto loc_8234EA9C;
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// beq cr6,0x8234ea9c
	if (ctx.cr6.eq) goto loc_8234EA9C;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// beq cr6,0x8234ea9c
	if (ctx.cr6.eq) goto loc_8234EA9C;
loc_8234EA90:
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_8234EA9C:
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234eab4
	if (!ctx.cr6.eq) goto loc_8234EAB4;
loc_8234EAA8:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_8234EAB4:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r9,168(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 168);
	// li r3,36
	ctx.r3.s64 = 36;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// lfs f0,4104(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4104);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x8234ead4
	if (!ctx.cr6.eq) goto loc_8234EAD4;
loc_8234EACC:
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// b 0x8234ec44
	goto loc_8234EC44;
loc_8234EAD4:
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bne cr6,0x8234ec10
	if (!ctx.cr6.eq) goto loc_8234EC10;
	// lwz r8,72(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// lwz r10,28(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8234ec44
	if (ctx.cr6.eq) goto loc_8234EC44;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bgt cr6,0x8234ec44
	if (ctx.cr6.gt) goto loc_8234EC44;
	// lis r12,-32203
	ctx.r12.s64 = -2110455808;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-5364
	ctx.r12.s64 = ctx.r12.s64 + -5364;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8234EB7C;
	case 1:
		goto loc_8234EB3C;
	case 2:
		goto loc_8234EB44;
	case 3:
		goto loc_8234EB4C;
	case 4:
		goto loc_8234EB54;
	case 5:
		goto loc_8234EB54;
	case 6:
		goto loc_8234EB7C;
	case 7:
		goto loc_8234EB7C;
	case 8:
		goto loc_8234EB7C;
	case 9:
		goto loc_8234EB7C;
	case 10:
		goto loc_8234EB7C;
	case 11:
		goto loc_8234EB7C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8234EB3C:
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x8234eb58
	goto loc_8234EB58;
loc_8234EB44:
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x8234eb58
	goto loc_8234EB58;
loc_8234EB4C:
	// li r10,24
	ctx.r10.s64 = 24;
	// b 0x8234eb58
	goto loc_8234EB58;
loc_8234EB54:
	// li r10,32
	ctx.r10.s64 = 32;
loc_8234EB58:
	// li r6,0
	ctx.r6.s64 = 0;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// rldimi r6,r4,3,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u64, 3) & 0x7FFFFFFF8) | (ctx.r6.u64 & 0xFFFFFFF800000007);
	// tdllei r10,0
	if (ctx.r10.s64 == 0ll || ctx.r10.u64 < 0ull) ppc_trap(ctx, base, 0);
	// divdu r5,r6,r10
	ctx.r5.u64 = ctx.r10.u64 ? ctx.r6.u64 / ctx.r10.u64 : 0;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r10,r5,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// divwu r28,r10,r8
	r28.u64 = uint32_t(ctx.r8.u32 ? ctx.r10.u32 / ctx.r8.u32 : 0);
	// b 0x8234ec44
	goto loc_8234EC44;
loc_8234EB7C:
	// lis r12,-32203
	ctx.r12.s64 = -2110455808;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-5228
	ctx.r12.s64 = ctx.r12.s64 + -5228;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8234EC00;
	case 1:
		goto loc_8234EC44;
	case 2:
		goto loc_8234EC44;
	case 3:
		goto loc_8234EC44;
	case 4:
		goto loc_8234EC44;
	case 5:
		goto loc_8234EC44;
	case 6:
		goto loc_8234EBC4;
	case 7:
		goto loc_8234EBD8;
	case 8:
		goto loc_8234EBEC;
	case 9:
		goto loc_8234EACC;
	case 10:
		goto loc_8234EACC;
	case 11:
		goto loc_8234EACC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8234EBC4:
	// mulli r10,r4,14
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(14));
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r28,r10,r8
	r28.u64 = uint32_t(ctx.r8.u32 ? ctx.r10.u32 / ctx.r8.u32 : 0);
	// b 0x8234ec44
	goto loc_8234EC44;
loc_8234EBD8:
	// rlwinm r10,r4,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r10,r10,r3
	ctx.r10.u64 = uint32_t(ctx.r3.u32 ? ctx.r10.u32 / ctx.r3.u32 : 0);
	// divwu r28,r10,r8
	r28.u64 = uint32_t(ctx.r8.u32 ? ctx.r10.u32 / ctx.r8.u32 : 0);
	// b 0x8234ec44
	goto loc_8234EC44;
loc_8234EBEC:
	// mulli r10,r4,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(28));
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r28,r10,r8
	r28.u64 = uint32_t(ctx.r8.u32 ? ctx.r10.u32 / ctx.r8.u32 : 0);
	// b 0x8234ec44
	goto loc_8234EC44;
loc_8234EC00:
	// li r10,0
	ctx.r10.s64 = 0;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r28,r10,r8
	r28.u64 = uint32_t(ctx.r8.u32 ? ctx.r10.u32 / ctx.r8.u32 : 0);
	// b 0x8234ec44
	goto loc_8234EC44;
loc_8234EC10:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x8234ec44
	if (!ctx.cr6.eq) goto loc_8234EC44;
	// clrldi r10,r4,32
	ctx.r10.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lfs f13,80(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fctidz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8234EC44:
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// beq cr6,0x8234edbc
	if (ctx.cr6.eq) goto loc_8234EDBC;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// bne cr6,0x8234ed88
	if (!ctx.cr6.eq) goto loc_8234ED88;
	// lwz r8,72(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// lwz r10,28(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8234eaa8
	if (ctx.cr6.eq) goto loc_8234EAA8;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bgt cr6,0x8234eaa8
	if (ctx.cr6.gt) goto loc_8234EAA8;
	// lis r12,-32203
	ctx.r12.s64 = -2110455808;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-4988
	ctx.r12.s64 = ctx.r12.s64 + -4988;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8234ECF4;
	case 1:
		goto loc_8234ECB4;
	case 2:
		goto loc_8234ECBC;
	case 3:
		goto loc_8234ECC4;
	case 4:
		goto loc_8234ECCC;
	case 5:
		goto loc_8234ECCC;
	case 6:
		goto loc_8234ECF4;
	case 7:
		goto loc_8234ECF4;
	case 8:
		goto loc_8234ECF4;
	case 9:
		goto loc_8234ECF4;
	case 10:
		goto loc_8234ECF4;
	case 11:
		goto loc_8234ECF4;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8234ECB4:
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x8234ecd0
	goto loc_8234ECD0;
loc_8234ECBC:
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x8234ecd0
	goto loc_8234ECD0;
loc_8234ECC4:
	// li r10,24
	ctx.r10.s64 = 24;
	// b 0x8234ecd0
	goto loc_8234ECD0;
loc_8234ECCC:
	// li r10,32
	ctx.r10.s64 = 32;
loc_8234ECD0:
	// rldicl r11,r11,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 3) & 0x7FFFFFFFF;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// rldicr r11,r11,0,60
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFFFF8;
	// tdllei r10,0
	if (ctx.r10.s64 == 0ll || ctx.r10.u64 < 0ull) ppc_trap(ctx, base, 0);
	// divdu r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 ? ctx.r11.u64 / ctx.r10.u64 : 0;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// divwu r11,r11,r8
	ctx.r11.u64 = uint32_t(ctx.r8.u32 ? ctx.r11.u32 / ctx.r8.u32 : 0);
	// b 0x8234edbc
	goto loc_8234EDBC;
loc_8234ECF4:
	// lis r12,-32203
	ctx.r12.s64 = -2110455808;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-4852
	ctx.r12.s64 = ctx.r12.s64 + -4852;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8234ED78;
	case 1:
		goto loc_8234EAA8;
	case 2:
		goto loc_8234EAA8;
	case 3:
		goto loc_8234EAA8;
	case 4:
		goto loc_8234EAA8;
	case 5:
		goto loc_8234EAA8;
	case 6:
		goto loc_8234ED3C;
	case 7:
		goto loc_8234ED50;
	case 8:
		goto loc_8234ED64;
	case 9:
		goto loc_8234EDBC;
	case 10:
		goto loc_8234EDBC;
	case 11:
		goto loc_8234EDBC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8234ED3C:
	// mulli r11,r11,14
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(14));
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r11,r8
	ctx.r11.u64 = uint32_t(ctx.r8.u32 ? ctx.r11.u32 / ctx.r8.u32 : 0);
	// b 0x8234edbc
	goto loc_8234EDBC;
loc_8234ED50:
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r11,r3
	ctx.r11.u64 = uint32_t(ctx.r3.u32 ? ctx.r11.u32 / ctx.r3.u32 : 0);
	// divwu r11,r11,r8
	ctx.r11.u64 = uint32_t(ctx.r8.u32 ? ctx.r11.u32 / ctx.r8.u32 : 0);
	// b 0x8234edbc
	goto loc_8234EDBC;
loc_8234ED64:
	// mulli r11,r11,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r11,r8
	ctx.r11.u64 = uint32_t(ctx.r8.u32 ? ctx.r11.u32 / ctx.r8.u32 : 0);
	// b 0x8234edbc
	goto loc_8234EDBC;
loc_8234ED78:
	// li r11,0
	ctx.r11.s64 = 0;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r11,r8
	ctx.r11.u64 = uint32_t(ctx.r8.u32 ? ctx.r11.u32 / ctx.r8.u32 : 0);
	// b 0x8234edbc
	goto loc_8234EDBC;
loc_8234ED88:
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x8234eaa8
	if (!ctx.cr6.eq) goto loc_8234EAA8;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f13,80(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fctidz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8234EDBC:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8234eaa8
	if (!ctx.cr6.lt) goto loc_8234EAA8;
	// lwz r10,72(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 72);
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - r28.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8234ee18
	if (!ctx.cr6.gt) goto loc_8234EE18;
loc_8234EDDC:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234EDF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x8234ee04
	if (!ctx.cr6.eq) goto loc_8234EE04;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_8234EE04:
	// lwz r11,72(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 72);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8234eddc
	if (ctx.cr6.lt) goto loc_8234EDDC;
loc_8234EE18:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8236A798) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8236a7a8
	if (!ctx.cr6.eq) goto loc_8236A7A8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236A7A8:
	// b 0x8236a660
	sub_8236A660(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236AF18) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8236af28
	if (!ctx.cr6.eq) goto loc_8236AF28;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236AF28:
	// b 0x8236ad68
	sub_8236AD68(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236B608) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,792(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 792);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8236b694
	if (!ctx.cr6.gt) goto loc_8236B694;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f0,456(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 456);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r3,652
	ctx.r10.s64 = ctx.r3.s64 + 652;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236B644:
	// lwz r8,-188(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + -188);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// std r5,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfsx f7,r11,r7
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfsx f6,r11,r6
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8236b644
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236B644;
loc_8236B694:
	// lwz r11,788(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 788);
	// lfs f13,312(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 312);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f1,f10,f13
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// stfs f1,412(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 412, temp.u32);
	// fdivs f9,f0,f1
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// stfs f9,456(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 456, temp.u32);
	// bl 0x826a2f00
	ctx.lr = 0x8236B6CC;
	sub_826A2F00(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// lfs f1,412(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 412);
	ctx.f1.f64 = double(temp.f32);
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// li r12,416
	ctx.r12.s64 = 416;
	// stfiwx f7,r31,r12
	REX_STORE_U32(r31.u32 + ctx.r12.u32, ctx.f7.u32);
	// bl 0x826a2f00
	ctx.lr = 0x8236B6E4;
	sub_826A2F00(ctx, base);
	// lfs f10,384(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 384);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,380(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 380);
	ctx.f9.f64 = double(temp.f32);
	// frsp f6,f1
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// fsubs f5,f10,f9
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f8,392(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 392);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,388(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 388);
	ctx.f7.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f4,460(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 460);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f8,f7
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f0,412(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 412);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,428(r31)
	REX_STORE_U32(r31.u32 + 428, r30.u32);
	// lfs f13,3716(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,424(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 424, temp.u32);
	// fsubs f2,f0,f6
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// stfs f2,420(r31)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r31.u32 + 420, temp.u32);
	// fmuls f1,f5,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmuls f11,f3,f4
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f12,432(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 432, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,436(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 436, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x8236b74c
	if (ctx.cr6.gt) goto loc_8236B74C;
	// stfs f13,432(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 432, temp.u32);
	// stfs f13,440(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 440, temp.u32);
	// b 0x8236b758
	goto loc_8236B758;
loc_8236B74C:
	// lfs f6,320(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 320);
	ctx.f6.f64 = double(temp.f32);
	// fdivs f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 / ctx.f12.f64));
	// stfs f5,440(r31)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r31.u32 + 440, temp.u32);
loc_8236B758:
	// fcmpu cr6,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bgt cr6,0x8236b76c
	if (ctx.cr6.gt) goto loc_8236B76C;
	// stfs f13,436(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 436, temp.u32);
	// stfs f13,444(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 444, temp.u32);
	// b 0x8236b778
	goto loc_8236B778;
loc_8236B76C:
	// lfs f13,320(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// stfs f12,444(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 444, temp.u32);
loc_8236B778:
	// fmuls f13,f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// li r11,396
	ctx.r11.s64 = 396;
	// fmuls f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// li r10,400
	ctx.r10.s64 = 400;
	// fmuls f11,f7,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// li r9,404
	ctx.r9.s64 = 404;
	// fmuls f10,f8,f0
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// li r7,408
	ctx.r7.s64 = 408;
	// lwz r6,792(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 792);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// fctiwz f9,f13
	ctx.f9.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f9,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, ctx.f9.u32);
	// fctiwz f8,f12
	ctx.f8.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f8,r31,r10
	REX_STORE_U32(r31.u32 + ctx.r10.u32, ctx.f8.u32);
	// fctiwz f7,f11
	ctx.f7.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfiwx f7,r31,r9
	REX_STORE_U32(r31.u32 + ctx.r9.u32, ctx.f7.u32);
	// fctiwz f6,f10
	ctx.f6.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfiwx f6,r31,r7
	REX_STORE_U32(r31.u32 + ctx.r7.u32, ctx.f6.u32);
	// ble cr6,0x8236b860
	if (!ctx.cr6.gt) goto loc_8236B860;
	// addi r11,r31,656
	ctx.r11.s64 = r31.s64 + 656;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
loc_8236B7D4:
	// lfs f0,412(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 412);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r10,r9
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// stw r9,-192(r11)
	REX_STORE_U32(ctx.r11.u32 + -192, ctx.r9.u32);
	// lfs f7,412(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 412);
	ctx.f7.f64 = double(temp.f32);
	// lfd f10,88(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// blt cr6,0x8236b814
	if (ctx.cr6.lt) goto loc_8236B814;
	// stw r30,-192(r11)
	REX_STORE_U32(ctx.r11.u32 + -192, r30.u32);
loc_8236B814:
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lfs f0,412(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 412);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r10,r9
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r6,416(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 416);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8236b844
	if (ctx.cr6.lt) goto loc_8236B844;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
loc_8236B844:
	// lwz r9,792(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 792);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// blt cr6,0x8236b7d4
	if (ctx.cr6.lt) goto loc_8236B7D4;
loc_8236B860:
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

DEFINE_REX_FUNC(sub_8238DD30) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8238dd40
	if (!ctx.cr6.eq) goto loc_8238DD40;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8238DD40:
	// b 0x8238dc50
	sub_8238DC50(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8238F590) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8238F598;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32129
	r31.s64 = -2105606144;
	// li r5,116
	ctx.r5.s64 = 116;
	// addi r28,r31,15160
	r28.s64 = r31.s64 + 15160;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8238F5B4;
	sub_823EF5F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r11,19824
	ctx.r11.s64 = ctx.r11.s64 + 19824;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// li r9,1794
	ctx.r9.s64 = 1794;
	// stw r11,15160(r31)
	REX_STORE_U32(r31.u32 + 15160, ctx.r11.u32);
	// lis r29,-32199
	r29.s64 = -2110193664;
	// stw r10,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// lis r30,-32199
	r30.s64 = -2110193664;
	// stw r9,12(r28)
	REX_STORE_U32(r28.u32 + 12, ctx.r9.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r29,-2696
	ctx.r10.s64 = r29.s64 + -2696;
	// addi r9,r30,-8936
	ctx.r9.s64 = r30.s64 + -8936;
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
	// lis r3,-32195
	ctx.r3.s64 = -2109931520;
	// stw r10,16(r28)
	REX_STORE_U32(r28.u32 + 16, ctx.r10.u32);
	// lis r31,-32199
	r31.s64 = -2110193664;
	// stw r9,20(r28)
	REX_STORE_U32(r28.u32 + 20, ctx.r9.u32);
	// lis r4,-32199
	ctx.r4.s64 = -2110193664;
	// addi r10,r3,-29712
	ctx.r10.s64 = ctx.r3.s64 + -29712;
	// addi r11,r31,-7808
	ctx.r11.s64 = r31.s64 + -7808;
	// addi r9,r4,-8912
	ctx.r9.s64 = ctx.r4.s64 + -8912;
	// stw r10,28(r28)
	REX_STORE_U32(r28.u32 + 28, ctx.r10.u32);
	// lis r5,-32195
	ctx.r5.s64 = -2109931520;
	// stw r11,24(r28)
	REX_STORE_U32(r28.u32 + 24, ctx.r11.u32);
	// lis r6,-32195
	ctx.r6.s64 = -2109931520;
	// stw r9,32(r28)
	REX_STORE_U32(r28.u32 + 32, ctx.r9.u32);
	// lis r7,-32195
	ctx.r7.s64 = -2109931520;
	// addi r11,r5,-29600
	ctx.r11.s64 = ctx.r5.s64 + -29600;
	// addi r10,r6,-29504
	ctx.r10.s64 = ctx.r6.s64 + -29504;
	// addi r9,r7,-29456
	ctx.r9.s64 = ctx.r7.s64 + -29456;
	// stw r11,36(r28)
	REX_STORE_U32(r28.u32 + 36, ctx.r11.u32);
	// lis r8,-32195
	ctx.r8.s64 = -2109931520;
	// stw r10,92(r28)
	REX_STORE_U32(r28.u32 + 92, ctx.r10.u32);
	// stw r9,96(r28)
	REX_STORE_U32(r28.u32 + 96, ctx.r9.u32);
	// li r10,17
	ctx.r10.s64 = 17;
	// addi r11,r8,-29352
	ctx.r11.s64 = ctx.r8.s64 + -29352;
	// li r9,7352
	ctx.r9.s64 = 7352;
	// stw r10,64(r28)
	REX_STORE_U32(r28.u32 + 64, ctx.r10.u32);
	// stw r11,100(r28)
	REX_STORE_U32(r28.u32 + 100, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r9,68(r28)
	REX_STORE_U32(r28.u32 + 68, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82393F98) {
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
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82393fb4
	if (!ctx.cr6.eq) goto loc_82393FB4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82393FB4:
	// addi r4,r3,272
	ctx.r4.s64 = ctx.r3.s64 + 272;
	// clrldi r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// bl 0x823cf3f0
	ctx.lr = 0x82393FC0;
	sub_823CF3F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82393ff8
	if (!ctx.cr6.lt) goto loc_82393FF8;
	// cmpwi cr6,r3,-139
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -139, ctx.xer);
	// bne cr6,0x82393fe4
	if (!ctx.cr6.eq) goto loc_82393FE4;
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82393FE4:
	// li r3,20
	ctx.r3.s64 = 20;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82393FF8:
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

DEFINE_REX_FUNC(sub_82398350) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82398360
	if (!ctx.cr6.eq) goto loc_82398360;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82398360:
	// b 0x82398088
	sub_82398088(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8239B358) {
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
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lis r9,-32129
	ctx.r9.s64 = -2105606144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1000
	ctx.r8.s64 = 1000;
	// rlwinm r7,r4,0,6,6
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2000000;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,1012(r9)
	REX_STORE_U32(ctx.r9.u32 + 1012, ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r8,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r8.u32);
	// stw r11,252(r3)
	REX_STORE_U32(ctx.r3.u32 + 252, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// bne cr6,0x8239b420
	if (!ctx.cr6.eq) goto loc_8239B420;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82340e38
	ctx.lr = 0x8239B3AC;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239b424
	if (!ctx.cr6.eq) goto loc_8239B424;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239b0c8
	ctx.lr = 0x8239B3BC;
	sub_8239B0C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239b408
	if (!ctx.cr6.eq) goto loc_8239B408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340ff0
	ctx.lr = 0x8239B3D0;
	sub_82340FF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239b424
	if (!ctx.cr6.eq) goto loc_8239B424;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82341060
	ctx.lr = 0x8239B3E4;
	sub_82341060(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239b424
	if (!ctx.cr6.eq) goto loc_8239B424;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82341030
	ctx.lr = 0x8239B400;
	sub_82341030(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239b424
	if (!ctx.cr6.eq) goto loc_8239B424;
loc_8239B408:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82340e38
	ctx.lr = 0x8239B418;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239b424
	if (!ctx.cr6.eq) goto loc_8239B424;
loc_8239B420:
	// li r3,25
	ctx.r3.s64 = 25;
loc_8239B424:
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

DEFINE_REX_FUNC(sub_8239FF70) {
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
	ctx.lr = 0x8239FF78;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stb r11,92(r3)
	REX_STORE_U8(ctx.r3.u32 + 92, ctx.r11.u8);
	// li r29,0
	r29.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r29
	r27.u64 = r29.u64;
	// bl 0x8233e398
	ctx.lr = 0x8239FF98;
	sub_8233E398(ctx, base);
	// lwz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 32);
	// rlwinm r9,r10,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8239ffbc
	if (ctx.cr6.eq) goto loc_8239FFBC;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8239fff0
	if (ctx.cr6.eq) goto loc_8239FFF0;
loc_8239FFBC:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239ffe4
	if (ctx.cr6.eq) goto loc_8239FFE4;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239ffe4
	if (ctx.cr6.eq) goto loc_8239FFE4;
	// lwz r3,256(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239ffe4
	if (ctx.cr6.eq) goto loc_8239FFE4;
	// bl 0x82340100
	ctx.lr = 0x8239FFE4;
	sub_82340100(ctx, base);
loc_8239FFE4:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r3,23376(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 23376);
	// bl 0x8233e7e0
	ctx.lr = 0x8239FFF0;
	sub_8233E7E0(ctx, base);
loc_8239FFF0:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r3,23372(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 23372);
	// bl 0x8233e7e0
	ctx.lr = 0x8239FFFC;
	sub_8233E7E0(ctx, base);
	// lwz r10,124(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 124);
	// mr r28,r29
	r28.u64 = r29.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823a00b0
	if (!ctx.cr6.gt) goto loc_823A00B0;
	// addi r31,r30,128
	r31.s64 = r30.s64 + 128;
loc_823A0010:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a009c
	if (ctx.cr6.eq) goto loc_823A009C;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,0,24,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// rlwinm r6,r7,0,28,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r6,36(r8)
	REX_STORE_U32(ctx.r8.u32 + 36, ctx.r6.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,36(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 36);
	// rlwinm r3,r4,0,26,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r3,36(r5)
	REX_STORE_U32(ctx.r5.u32 + 36, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,0,27,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r7,36(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// ori r6,r7,128
	ctx.r6.u64 = ctx.r7.u64 | 128;
	// stw r6,36(r8)
	REX_STORE_U32(ctx.r8.u32 + 36, ctx.r6.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,44(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x823A007C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r29,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r29.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r29,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, r29.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r29,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, r29.u32);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
loc_823A009C:
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 124);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823a0010
	if (ctx.cr6.lt) goto loc_823A0010;
loc_823A00B0:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r3,23372(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 23372);
	// bl 0x8233e820
	ctx.lr = 0x823A00BC;
	sub_8233E820(ctx, base);
	// lwz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 32);
	// rlwinm r9,r10,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823a00e0
	if (ctx.cr6.eq) goto loc_823A00E0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823a00ec
	if (ctx.cr6.eq) goto loc_823A00EC;
loc_823A00E0:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r3,23376(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 23376);
	// bl 0x8233e820
	ctx.lr = 0x823A00EC;
	sub_8233E820(ctx, base);
loc_823A00EC:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r3,23380(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 23380);
	// bl 0x8233e7e0
	ctx.lr = 0x823A00F8;
	sub_8233E7E0(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r30,112
	ctx.r11.s64 = r30.s64 + 112;
	// lwz r9,23056(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 23056);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823a0114
	if (!ctx.cr6.eq) goto loc_823A0114;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,23056(r10)
	REX_STORE_U32(ctx.r10.u32 + 23056, ctx.r9.u32);
loc_823A0114:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r29.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r29,120(r30)
	REX_STORE_U32(r30.u32 + 120, r29.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r3,23380(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 23380);
	// bl 0x8233e820
	ctx.lr = 0x823A0148;
	sub_8233E820(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823AD180) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823ad1b4
	if (!ctx.cr6.gt) goto loc_823AD1B4;
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
loc_823AD1B4:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// beq cr6,0x823ad1e0
	if (ctx.cr6.eq) goto loc_823AD1E0;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// beq cr6,0x823ad1e0
	if (ctx.cr6.eq) goto loc_823AD1E0;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// beq cr6,0x823ad1e0
	if (ctx.cr6.eq) goto loc_823AD1E0;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823AD1E0:
	// lwz r8,780(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 780);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823ad200
	if (ctx.cr6.eq) goto loc_823AD200;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r9,140(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// lfs f0,260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,208(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// b 0x823ad23c
	goto loc_823AD23C;
loc_823AD200:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ad220
	if (ctx.cr6.eq) goto loc_823AD220;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,72(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lfs f0,80(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x823ad23c
	goto loc_823AD23C;
loc_823AD220:
	// lwz r11,768(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ad508
	if (ctx.cr6.eq) goto loc_823AD508;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r9,140(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 140);
	// lfs f0,260(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
loc_823AD23C:
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bne cr6,0x823ad24c
	if (!ctx.cr6.eq) goto loc_823AD24C;
loc_823AD244:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// b 0x823ad3bc
	goto loc_823AD3BC;
loc_823AD24C:
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bne cr6,0x823ad384
	if (!ctx.cr6.eq) goto loc_823AD384;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823ad3bc
	if (ctx.cr6.eq) goto loc_823AD3BC;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x823ad3bc
	if (ctx.cr6.gt) goto loc_823AD3BC;
	// lis r12,-32197
	ctx.r12.s64 = -2110062592;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-11652
	ctx.r12.s64 = ctx.r12.s64 + -11652;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823AD2EC;
	case 1:
		goto loc_823AD2AC;
	case 2:
		goto loc_823AD2B4;
	case 3:
		goto loc_823AD2BC;
	case 4:
		goto loc_823AD2C4;
	case 5:
		goto loc_823AD2C4;
	case 6:
		goto loc_823AD2EC;
	case 7:
		goto loc_823AD2EC;
	case 8:
		goto loc_823AD2EC;
	case 9:
		goto loc_823AD2EC;
	case 10:
		goto loc_823AD2EC;
	case 11:
		goto loc_823AD2EC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823AD2AC:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x823ad2c8
	goto loc_823AD2C8;
loc_823AD2B4:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x823ad2c8
	goto loc_823AD2C8;
loc_823AD2BC:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x823ad2c8
	goto loc_823AD2C8;
loc_823AD2C4:
	// li r11,32
	ctx.r11.s64 = 32;
loc_823AD2C8:
	// rldicl r10,r10,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 3) & 0x7FFFFFFFF;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicr r10,r10,0,60
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFFFFFFFFFF8;
	// tdllei r11,0
	if (ctx.r11.s64 == 0ll || ctx.r11.u64 < 0ull) ppc_trap(ctx, base, 0);
	// divdu r7,r10,r11
	ctx.r7.u64 = ctx.r11.u64 ? ctx.r10.u64 / ctx.r11.u64 : 0;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// divwu r4,r11,r9
	ctx.r4.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// b 0x823ad3bc
	goto loc_823AD3BC;
loc_823AD2EC:
	// lis r12,-32197
	ctx.r12.s64 = -2110062592;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-11516
	ctx.r12.s64 = ctx.r12.s64 + -11516;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823AD374;
	case 1:
		goto loc_823AD3BC;
	case 2:
		goto loc_823AD3BC;
	case 3:
		goto loc_823AD3BC;
	case 4:
		goto loc_823AD3BC;
	case 5:
		goto loc_823AD3BC;
	case 6:
		goto loc_823AD334;
	case 7:
		goto loc_823AD348;
	case 8:
		goto loc_823AD360;
	case 9:
		goto loc_823AD244;
	case 10:
		goto loc_823AD244;
	case 11:
		goto loc_823AD244;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823AD334:
	// mulli r11,r10,14
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(14));
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r4,r11,r9
	ctx.r4.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// b 0x823ad3bc
	goto loc_823AD3BC;
loc_823AD348:
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// li r10,36
	ctx.r10.s64 = 36;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r11,r10
	ctx.r11.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// divwu r4,r11,r9
	ctx.r4.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// b 0x823ad3bc
	goto loc_823AD3BC;
loc_823AD360:
	// mulli r11,r10,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(28));
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r4,r11,r9
	ctx.r4.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// b 0x823ad3bc
	goto loc_823AD3BC;
loc_823AD374:
	// li r11,0
	ctx.r11.s64 = 0;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r4,r11,r9
	ctx.r4.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// b 0x823ad3bc
	goto loc_823AD3BC;
loc_823AD384:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x823ad3bc
	if (!ctx.cr6.eq) goto loc_823AD3BC;
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f13,4104(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4104);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fctidz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_823AD3BC:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ad3f8
	if (ctx.cr6.eq) goto loc_823AD3F8;
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823ad3e4
	if (ctx.cr6.eq) goto loc_823AD3E4;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x823ad3fc
	goto loc_823AD3FC;
loc_823AD3E4:
	// lwz r10,60(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x823ad3fc
	goto loc_823AD3FC;
loc_823AD3F8:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_823AD3FC:
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823ad418
	if (!ctx.cr6.gt) goto loc_823AD418;
	// li r3,38
	ctx.r3.s64 = 38;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823AD418:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823ad448
	if (ctx.cr6.eq) goto loc_823AD448;
	// lwz r3,780(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 780);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AD438;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823AD448:
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ad47c
	if (ctx.cr6.eq) goto loc_823AD47C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AD46C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823AD47C:
	// lwz r11,396(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ad4b0
	if (ctx.cr6.eq) goto loc_823AD4B0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AD4A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823AD4B0:
	// lwz r11,768(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 768);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ad4e4
	if (ctx.cr6.eq) goto loc_823AD4E4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AD4D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823AD4E4:
	// lwz r3,84(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AD4F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823AD508:
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823CC908) {
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
	ctx.lr = 0x823CC910;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r30,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r30.u32);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// addi r9,r11,-31944
	ctx.r9.s64 = ctx.r11.s64 + -31944;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lbz r8,3581(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 3581);
	// lwz r3,60(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// lbz r7,3580(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 3580);
	// rotlwi r6,r7,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwzx r5,r6,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// rlwinm r4,r5,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// xor r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r4.u64;
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// xor r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// bl 0x823dcb28
	ctx.lr = 0x823CC96C;
	sub_823DCB28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823cb378
	ctx.lr = 0x823CC978;
	sub_823CB378(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823cc98c
	if (!ctx.cr6.eq) goto loc_823CC98C;
loc_823CC980:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_823CC98C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x823ccd78
	if (ctx.cr6.eq) goto loc_823CCD78;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,1144(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 1144);
	// lwz r4,1136(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1136);
	// bl 0x823c9308
	ctx.lr = 0x823CC9B0;
	sub_823C9308(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cc980
	if (ctx.cr6.eq) goto loc_823CC980;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r29,r30
	r29.u64 = r30.u64;
	// lwz r10,1144(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1144);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x823cca3c
	if (!ctx.cr6.gt) goto loc_823CCA3C;
loc_823CC9CC:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,1148(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1148);
	// lwz r6,1152(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 1152);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823cc9f0
	if (ctx.cr6.eq) goto loc_823CC9F0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823ccba4
	if (ctx.cr6.eq) goto loc_823CCBA4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x823cc9fc
	if (!ctx.cr6.eq) goto loc_823CC9FC;
loc_823CC9F0:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(r29.u32, 1, ctx.xer);
loc_823CC9F4:
	// bne cr6,0x823cc9fc
	if (!ctx.cr6.eq) goto loc_823CC9FC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_823CC9FC:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823cc560
	ctx.lr = 0x823CCA10;
	sub_823CC560(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cc980
	if (ctx.cr6.eq) goto loc_823CC980;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x823ccd78
	if (ctx.cr6.eq) goto loc_823CCD78;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,1144(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1144);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823cc9cc
	if (ctx.cr6.lt) goto loc_823CC9CC;
loc_823CCA3C:
	// lwz r3,60(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x823dcbc8
	ctx.lr = 0x823CCA44;
	sub_823DCBC8(ctx, base);
	// li r27,2
	r27.s64 = 2;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ccac0
	if (!ctx.cr6.eq) goto loc_823CCAC0;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,60(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x823dcbe0
	ctx.lr = 0x823CCA60;
	sub_823DCBE0(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r4,60(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823dcc18
	ctx.lr = 0x823CCA78;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cc980
	if (ctx.cr6.eq) goto loc_823CC980;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ccac0
	if (ctx.cr6.eq) goto loc_823CCAC0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,3624(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3624);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823ccab8
	if (!ctx.cr6.eq) goto loc_823CCAB8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r5,52(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CCAB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823CCAB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
loc_823CCAC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x823ccd78
	if (ctx.cr6.eq) goto loc_823CCD78;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,60(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x823dcb40
	ctx.lr = 0x823CCADC;
	sub_823DCB40(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// clrlwi r29,r3,16
	r29.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r6,-4240(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + -4240);
	// lwz r4,60(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// bl 0x823dcc18
	ctx.lr = 0x823CCAFC;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cc980
	if (ctx.cr6.eq) goto loc_823CC980;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823ccc4c
	if (!ctx.cr6.eq) goto loc_823CCC4C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x823cccc4
	if (ctx.cr6.eq) goto loc_823CCCC4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,1148(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1148);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x823ccbfc
	if (ctx.cr6.eq) goto loc_823CCBFC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x823ccbac
	if (ctx.cr6.eq) goto loc_823CCBAC;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x823cccc4
	if (!ctx.cr6.eq) goto loc_823CCCC4;
	// lwz r11,1136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1136);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823cccc4
	if (!ctx.cr6.gt) goto loc_823CCCC4;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_823CCB4C:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r9,68(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// lwz r7,64(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r6,r7,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// rlwimi r10,r6,1,0,30
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r10.u64 & 0xFFFFFFFF00000001);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r4,r9,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r9.u64;
	// srawi r3,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 1;
	// srawi r10,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 1;
	// stwx r3,r7,r11
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r7,68(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 68);
	// stwx r10,r7,r11
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r5,1136(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 1136);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x823ccb4c
	if (ctx.cr6.lt) goto loc_823CCB4C;
	// b 0x823cccc4
	goto loc_823CCCC4;
loc_823CCBA4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// b 0x823cc9f4
	goto loc_823CC9F4;
loc_823CCBAC:
	// lwz r11,1136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1136);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823cccc4
	if (!ctx.cr6.gt) goto loc_823CCCC4;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_823CCBC0:
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,64(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 64);
	// lwz r7,68(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 68);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r6,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,1136(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 1136);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x823ccbc0
	if (ctx.cr6.lt) goto loc_823CCBC0;
	// b 0x823cccc4
	goto loc_823CCCC4;
loc_823CCBFC:
	// lwz r11,1136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1136);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823cccc4
	if (!ctx.cr6.gt) goto loc_823CCCC4;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_823CCC10:
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,68(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 68);
	// lwz r7,64(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 64);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r6,r7,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subf r4,r5,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r5.u64;
	// stw r4,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r9,1136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1136);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823ccc10
	if (ctx.cr6.lt) goto loc_823CCC10;
	// b 0x823cccc4
	goto loc_823CCCC4;
loc_823CCC4C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,3624(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3624);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823ccc78
	if (!ctx.cr6.eq) goto loc_823CCC78;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r5,52(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CCC78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823CCC78:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x823cccc4
	if (ctx.cr6.eq) goto loc_823CCCC4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,1144(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1144);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x823cccc4
	if (!ctx.cr6.gt) goto loc_823CCCC4;
	// li r29,64
	r29.s64 = 64;
loc_823CCC94:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,1136(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1136);
	// lwzx r3,r29,r11
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823ef5f0
	ctx.lr = 0x823CCCAC;
	sub_823EF5F0(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r8,1144(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 1144);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823ccc94
	if (ctx.cr6.lt) goto loc_823CCC94;
loc_823CCCC4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r9,236(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 236);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823ccce8
	if (ctx.cr6.eq) goto loc_823CCCE8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,236(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 236);
	// stw r10,232(r11)
	REX_STORE_U32(ctx.r11.u32 + 232, ctx.r10.u32);
loc_823CCCE8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,1144(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1144);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r6,1148(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 1148);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r6,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,1152(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 1152);
	// stw r3,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,1140(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1140);
	// stw r9,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r6,1136(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 1136);
	// stw r6,20(r7)
	REX_STORE_U32(ctx.r7.u32 + 20, ctx.r6.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,1136(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 1136);
	// ld r11,1160(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 1160);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r4,240(r5)
	REX_STORE_U64(ctx.r5.u32 + 240, ctx.r4.u64);
	// beq cr6,0x823ccd70
	if (ctx.cr6.eq) goto loc_823CCD70;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,64
	ctx.r5.s64 = ctx.r11.s64 + 64;
	// addi r4,r11,1136
	ctx.r4.s64 = ctx.r11.s64 + 1136;
	// bl 0x823ca1f8
	ctx.lr = 0x823CCD68;
	sub_823CA1F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823cc980
	if (!ctx.cr6.eq) goto loc_823CC980;
loc_823CCD70:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
loc_823CCD78:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_823E48E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823e48f8
	if (!ctx.cr6.eq) goto loc_823E48F8;
	// li r3,-102
	ctx.r3.s64 = -102;
	// blr 
	return;
loc_823E48F8:
	// fsubs f0,f4,f3
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x823e4914
	if (ctx.cr6.gt) goto loc_823E4914;
	// li r3,-105
	ctx.r3.s64 = -105;
	// blr 
	return;
loc_823E4914:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// lfs f12,4104(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4104);
	ctx.f12.f64 = double(temp.f32);
	// ble cr6,0x823e494c
	if (!ctx.cr6.gt) goto loc_823E494C;
	// clrldi r11,r7,32
	ctx.r11.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fdivs f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 / ctx.f7.f64));
	// stfs f6,24(r8)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r8.u32 + 24, temp.u32);
	// b 0x823e4950
	goto loc_823E4950;
loc_823E494C:
	// stfs f0,24(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 24, temp.u32);
loc_823E4950:
	// stfs f1,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// fcmpu cr6,f2,f13
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// ble cr6,0x823e4988
	if (!ctx.cr6.gt) goto loc_823E4988;
	// clrldi r11,r7,32
	ctx.r11.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f2
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmuls f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fdivs f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 / ctx.f7.f64));
	// fneg f5,f6
	ctx.f5.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// stfs f5,28(r8)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r8.u32 + 28, temp.u32);
	// b 0x823e4990
	goto loc_823E4990;
loc_823E4988:
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,28(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 28, temp.u32);
loc_823E4990:
	// stfs f2,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stw r7,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stfs f3,12(r8)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f4,16(r8)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// stfs f13,20(r8)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E8E38) {
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
	ctx.lr = 0x823E8E40;
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823e8eb8
	if (ctx.cr6.eq) goto loc_823E8EB8;
loc_823E8E60:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823e83f0
	ctx.lr = 0x823E8E6C;
	sub_823E83F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823e8ee4
	if (!ctx.cr6.eq) goto loc_823E8EE4;
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823d95e8
	ctx.lr = 0x823E8E80;
	sub_823D95E8(ctx, base);
	// addi r11,r26,1
	ctx.r11.s64 = r26.s64 + 1;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addze r28,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	r28.s64 = temp.s64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823e8e38
	ctx.lr = 0x823E8EA4;
	sub_823E8E38(ctx, base);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r30,r25,r30
	r30.u64 = r30.u64 - r25.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// subf r26,r28,r26
	r26.u64 = r26.u64 - r28.u64;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// bne 0x823e8e60
	if (!ctx.cr0.eq) goto loc_823E8E60;
loc_823E8EB8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x823e9170
	if (!ctx.cr6.gt) goto loc_823E9170;
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x823e9170
	if (ctx.cr6.eq) goto loc_823E9170;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
loc_823E8ED4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823e8ed4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E8ED4;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x826a1cfc
	return;
loc_823E8EE4:
	// addi r11,r26,-1
	ctx.r11.s64 = r26.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x823e908c
	if (ctx.cr6.gt) goto loc_823E908C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823e8f2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823E8F2C;
	// bdzf 4*cr6+eq,0x823e8fb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823E8FB8;
	// bdzf 4*cr6+eq,0x823e8ff4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823E8FF4;
	// bne cr6,0x823e903c
	if (!ctx.cr6.eq) goto loc_823E903C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823d9548
	ctx.lr = 0x823E8F14;
	sub_823D9548(ctx, base);
	// neg r11,r3
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// stw r9,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x826a1cfc
	return;
loc_823E8F2C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x823e8f3c
	if (!ctx.cr6.eq) goto loc_823E8F3C;
	// li r4,1
	ctx.r4.s64 = 1;
loc_823E8F3C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823d95e8
	ctx.lr = 0x823E8F44;
	sub_823D95E8(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// and r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 & ctx.r7.u64;
	// subfc r11,r5,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r5.u32;
	ctx.r11.u64 = ctx.r3.u64 - ctx.r5.u64;
	// subfze r4,r6
	temp.u8 = ~ctx.r6.u32 + ctx.xer.ca < ~ctx.r6.u32;
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// neg r8,r4
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r4.u64);
	// and r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 & ctx.r5.u64;
	// subf r10,r7,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r7.u64;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r6,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// subfic r5,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r5.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subf r9,r11,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r11.u64;
	// and r6,r3,r7
	ctx.r6.u64 = ctx.r3.u64 & ctx.r7.u64;
	// add r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 + r30.u64;
	// subf r10,r10,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r10.u64;
	// xor r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r8.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r4.u32);
	// xor r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x826a1cfc
	return;
loc_823E8FB8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x823e8fd0
	if (ctx.cr6.eq) goto loc_823E8FD0;
	// mullw r11,r30,r30
	ctx.r11.s64 = int64_t(r30.s32) * int64_t(r30.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// b 0x823e8fd4
	goto loc_823E8FD4;
loc_823E8FD0:
	// li r4,1
	ctx.r4.s64 = 1;
loc_823E8FD4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823d95e8
	ctx.lr = 0x823E8FDC;
	sub_823D95E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x823e8620
	ctx.lr = 0x823E8FEC;
	sub_823E8620(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x826a1cfc
	return;
loc_823E8FF4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x823e9018
	if (ctx.cr6.eq) goto loc_823E9018;
	// mullw r11,r30,r30
	ctx.r11.s64 = int64_t(r30.s32) * int64_t(r30.s32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// li r10,3
	ctx.r10.s64 = 3;
	// mullw r9,r11,r30
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// divwu r8,r9,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// rlwinm r4,r8,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x823e901c
	goto loc_823E901C;
loc_823E9018:
	// li r4,1
	ctx.r4.s64 = 1;
loc_823E901C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823d95e8
	ctx.lr = 0x823E9024;
	sub_823D95E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x823e8770
	ctx.lr = 0x823E9034;
	sub_823E8770(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x826a1cfc
	return;
loc_823E903C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x823e9068
	if (ctx.cr6.eq) goto loc_823E9068;
	// mullw r11,r30,r30
	ctx.r11.s64 = int64_t(r30.s32) * int64_t(r30.s32);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// li r10,3
	ctx.r10.s64 = 3;
	// mullw r9,r11,r30
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// mullw r8,r9,r30
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// divwu r7,r8,r10
	ctx.r7.u64 = uint32_t(ctx.r10.u32 ? ctx.r8.u32 / ctx.r10.u32 : 0);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// b 0x823e906c
	goto loc_823E906C;
loc_823E9068:
	// li r4,1
	ctx.r4.s64 = 1;
loc_823E906C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823d95e8
	ctx.lr = 0x823E9074;
	sub_823D95E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x823e8868
	ctx.lr = 0x823E9084;
	sub_823E8868(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x826a1cfc
	return;
loc_823E908C:
	// addi r11,r30,2
	ctx.r11.s64 = r30.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rlwinm r12,r9,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x826a2d14
	ctx.lr = 0x823E90A0;
	sub_826A2D14(ctx, base);
	// lwz r8,0(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stwux r8,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r1.u32 = ea;
	// addi r28,r1,80
	r28.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x823e8460
	ctx.lr = 0x823E90BC;
	sub_823E8460(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823d95e8
	ctx.lr = 0x823E90C8;
	sub_823D95E8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
loc_823E90D0:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + r28.u64;
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// subfc r10,r4,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r4.u32;
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// subfze r10,r5
	temp.u8 = ~ctx.r5.u32 + ctx.xer.ca < ~ctx.r5.u32;
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// and r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 & ctx.r4.u64;
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823e9110
	if (!ctx.cr6.gt) goto loc_823E9110;
loc_823E9100:
	// lwzu r11,-4(r9)
	ea = -4 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823e9100
	if (ctx.cr6.gt) goto loc_823E9100;
loc_823E9110:
	// subf r9,r30,r7
	ctx.r9.u64 = ctx.r7.u64 - r30.u64;
	// subf r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// xor r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r8,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r8.u32);
	// addi r8,r30,2
	ctx.r8.s64 = r30.s64 + 2;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
loc_823E9134:
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// subf r7,r7,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r7.u64;
	// subf r9,r9,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r9.u64;
	// blt cr6,0x823e9134
	if (ctx.cr6.lt) goto loc_823E9134;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r6,r26
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r26.s32, ctx.xer);
	// stw r9,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// blt cr6,0x823e90d0
	if (ctx.cr6.lt) goto loc_823E90D0;
loc_823E9170:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_823FA148) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c94
	ctx.lr = 0x823FA150;
	// add r28,r4,r5
	r28.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r21,11016(r3)
	r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 11016);
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r8,11956(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 11956);
	// addi r25,r3,3644
	r25.s64 = ctx.r3.s64 + 3644;
	// lwz r10,11952(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 11952);
	// addi r24,r3,9020
	r24.s64 = ctx.r3.s64 + 9020;
	// lwz r5,11012(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 11012);
	// addi r23,r3,24
	r23.s64 = ctx.r3.s64 + 24;
	// addi r22,r3,2072
	r22.s64 = ctx.r3.s64 + 2072;
	// addi r27,r3,2584
	r27.s64 = ctx.r3.s64 + 2584;
	// addi r26,r3,3256
	r26.s64 = ctx.r3.s64 + 3256;
	// addi r29,r3,12
	r29.s64 = ctx.r3.s64 + 12;
	// b 0x823fa3e4
	goto loc_823FA3E4;
loc_823FA18C:
	// rlwinm r9,r10,11,21,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x7FE;
	// lhax r7,r9,r23
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + r23.u32));
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge 0x823fa1cc
	if (!ctx.cr0.lt) goto loc_823FA1CC;
	// lis r9,32
	ctx.r9.s64 = 2097152;
loc_823FA1A0:
	// and r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 & ctx.r10.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r6,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// xori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 ^ 1;
	// subf r7,r7,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r7.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r7,r7,r25
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r7.u32 + r25.u32));
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt 0x823fa1a0
	if (ctx.cr0.lt) goto loc_823FA1A0;
loc_823FA1CC:
	// cmplw cr6,r5,r21
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r21.u32, ctx.xer);
	// bge cr6,0x823fa400
	if (!ctx.cr6.lt) goto loc_823FA400;
	// lbzx r9,r7,r27
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + r27.u32);
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// mr. r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x823fa214
	if (ctx.cr0.gt) goto loc_823FA214;
	// lbz r8,1(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lbz r3,0(r5)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// or r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 | ctx.r3.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// slw r9,r3,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r6.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_823FA214:
	// addic. r6,r7,-256
	ctx.xer.ca = ctx.r7.u32 > 255;
	ctx.r6.s64 = ctx.r7.s64 + -256;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge 0x823fa238
	if (!ctx.cr0.lt) goto loc_823FA238;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// stbx r7,r30,r4
	REX_STORE_U8(r30.u32 + ctx.r4.u32, ctx.r7.u8);
	// stbx r7,r9,r4
	REX_STORE_U8(ctx.r9.u32 + ctx.r4.u32, ctx.r7.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x823fa3e4
	goto loc_823FA3E4;
loc_823FA238:
	// clrlwi r3,r6,29
	ctx.r3.u64 = ctx.r6.u32 & 0x7;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x823fa2c8
	if (!ctx.cr6.eq) goto loc_823FA2C8;
	// rlwinm r9,r10,9,23,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1FE;
	// lhax r9,r9,r22
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + r22.u32));
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823fa284
	if (!ctx.cr0.lt) goto loc_823FA284;
	// lis r7,128
	ctx.r7.s64 = 8388608;
loc_823FA258:
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r3,r3
	ctx.r3.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r3,r3,27,5,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// xori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 ^ 1;
	// subf r9,r9,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r9.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r9,r9,r24
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + r24.u32));
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x823fa258
	if (ctx.cr0.lt) goto loc_823FA258;
loc_823FA284:
	// lbzx r7,r9,r26
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + r26.u32);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// slw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// mr. r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bgt 0x823fa2c4
	if (ctx.cr0.gt) goto loc_823FA2C4;
	// lbz r8,1(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// neg r3,r7
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// lbz r31,0(r5)
	r31.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// or r31,r8,r31
	r31.u64 = ctx.r8.u64 | r31.u64;
	// extsb r8,r7
	ctx.r8.s64 = ctx.r7.s8;
	// slw r7,r31,r3
	ctx.r7.u64 = ctx.r3.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r3.u8 & 0x3F));
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
loc_823FA2C4:
	// addi r3,r9,7
	ctx.r3.s64 = ctx.r9.s64 + 7;
loc_823FA2C8:
	// srawi r9,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 3;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// ble cr6,0x823fa38c
	if (!ctx.cr6.gt) goto loc_823FA38C;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// ble cr6,0x823fa374
	if (!ctx.cr6.gt) goto loc_823FA374;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r9,12004(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 12004);
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subfic r6,r31,32
	ctx.xer.ca = r31.u32 <= 32;
	ctx.r6.u64 = static_cast<uint64_t>(32) - r31.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// srw r6,r10,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// mr. r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// slw r10,r10,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r31.u8 & 0x3F));
	// bgt 0x823fa360
	if (ctx.cr0.gt) goto loc_823FA360;
	// lbz r8,1(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// addi r31,r9,16
	r31.s64 = ctx.r9.s64 + 16;
	// neg r19,r9
	r19.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lbz r20,0(r5)
	r20.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// rotlwi r9,r8,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// extsb r8,r31
	ctx.r8.s64 = r31.s8;
	// or r31,r9,r20
	r31.u64 = ctx.r9.u64 | r20.u64;
	// mr. r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// slw r31,r31,r19
	r31.u64 = r19.u8 & 0x20 ? 0 : (r31.u32 << (r19.u8 & 0x3F));
	// or r10,r31,r10
	ctx.r10.u64 = r31.u64 | ctx.r10.u64;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// bgt 0x823fa360
	if (ctx.cr0.gt) goto loc_823FA360;
	// lbz r8,1(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// neg r31,r9
	r31.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lbz r20,0(r5)
	r20.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// or r20,r8,r20
	r20.u64 = ctx.r8.u64 | r20.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// slw r9,r20,r31
	ctx.r9.u64 = r31.u8 & 0x20 ? 0 : (r20.u32 << (r31.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_823FA360:
	// addi r9,r7,3014
	ctx.r9.s64 = ctx.r7.s64 + 3014;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// b 0x823fa378
	goto loc_823FA378;
loc_823FA374:
	// li r9,1
	ctx.r9.s64 = 1;
loc_823FA378:
	// lwz r7,4(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r7,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r7.u32);
	// stw r6,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r6.u32);
	// b 0x823fa3a4
	goto loc_823FA3A4;
loc_823FA38C:
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwzx r9,r6,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + r29.u32);
	// beq cr6,0x823fa3a8
	if (ctx.cr6.eq) goto loc_823FA3A8;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stwx r7,r6,r29
	REX_STORE_U32(ctx.r6.u32 + r29.u32, ctx.r7.u32);
loc_823FA3A4:
	// stw r9,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r9.u32);
loc_823FA3A8:
	// lwz r31,8(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// subf r7,r9,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r9.u64;
loc_823FA3B4:
	// and r9,r7,r31
	ctx.r9.u64 = ctx.r7.u64 & r31.u64;
	// cmpwi cr6,r4,257
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 257, ctx.xer);
	// lbzx r9,r9,r30
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + r30.u32);
	// stbx r9,r30,r4
	REX_STORE_U8(r30.u32 + ctx.r4.u32, ctx.r9.u8);
	// bge cr6,0x823fa3d4
	if (!ctx.cr6.lt) goto loc_823FA3D4;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// stbx r9,r6,r4
	REX_STORE_U8(ctx.r6.u32 + ctx.r4.u32, ctx.r9.u8);
loc_823FA3D4:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bgt 0x823fa3b4
	if (ctx.cr0.gt) goto loc_823FA3B4;
loc_823FA3E4:
	// cmpw cr6,r4,r28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r28.s32, ctx.xer);
	// blt cr6,0x823fa18c
	if (ctx.cr6.lt) goto loc_823FA18C;
	// stb r8,11956(r11)
	REX_STORE_U8(ctx.r11.u32 + 11956, ctx.r8.u8);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r10,11952(r11)
	REX_STORE_U32(ctx.r11.u32 + 11952, ctx.r10.u32);
	// stw r5,11012(r11)
	REX_STORE_U32(ctx.r11.u32 + 11012, ctx.r5.u32);
loc_823FA3FC:
	// b 0x826a1ce4
	return;
loc_823FA400:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823fa3fc
	goto loc_823FA3FC;
}

DEFINE_REX_FUNC(sub_8240DE40) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1ca8
	ctx.lr = 0x8240DE48;
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f29.u64);
	// stfd f30,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
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
	// beq cr6,0x8240de80
	if (ctx.cr6.eq) goto loc_8240DE80;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82408848
	ctx.lr = 0x8240DE7C;
	sub_82408848(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8240DE80:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240de9c
	if (ctx.cr6.eq) goto loc_8240DE9C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824094e0
	ctx.lr = 0x8240DE98;
	sub_824094E0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8240DE9C:
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
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
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
	// bne 0x8240df08
	if (!ctx.cr0.eq) goto loc_8240DF08;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x8240df10
	goto loc_8240DF10;
loc_8240DF08:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_8240DF10:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240df28
	if (ctx.cr6.eq) goto loc_8240DF28;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409a88
	ctx.lr = 0x8240DF28;
	sub_82409A88(ctx, base);
loc_8240DF28:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8240e1f8
	if (!ctx.cr6.gt) goto loc_8240E1F8;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r25,r30,1,0,30
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfd f11,20216(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r7.u32 + 20216);
	// subf r30,r25,r28
	r30.u64 = r28.u64 - r25.u64;
	// lfs f5,20236(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20236);
	ctx.f5.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r28,-32255
	r28.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f12,15196(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 15196);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,20208(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,17280(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 17280);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f7,20244(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 20244);
	ctx.f7.f64 = double(temp.f32);
	// addi r29,r27,12
	r29.s64 = r27.s64 + 12;
	// lfs f4,20228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20228);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,20240(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 20240);
	ctx.f6.f64 = double(temp.f32);
loc_8240DF9C:
	// add r11,r29,r10
	ctx.r11.u64 = r29.u64 + ctx.r10.u64;
	// lfsx f10,r29,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f10,f29,f10
	ctx.f10.f64 = double(float(f29.f64 + ctx.f10.f64));
	// rlwinm r7,r26,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xC;
	// lwz r6,92(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f9,-12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 + f31.f64));
	// fadds f8,f8,f30
	ctx.f8.f64 = double(float(ctx.f8.f64 + f30.f64));
	// lfsx f3,r7,r24
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f10,f10,f4
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fmuls f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fadds f2,f10,f3
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// fadds f1,f9,f3
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// fadds f3,f8,f3
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// fctiwz f2,f2
	ctx.f2.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f2,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f2,f1
	ctx.f2.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f2,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// fctiwz f3,f3
	ctx.f3.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f3.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// beq cr6,0x8240e14c
	if (ctx.cr6.eq) goto loc_8240E14C;
	// extsw r28,r4
	r28.s64 = ctx.r4.s32;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r7,r5
	ctx.r7.s64 = ctx.r5.s32;
	// std r28,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r28.u64);
	// extsw r28,r6
	r28.s64 = ctx.r6.s32;
	// std r7,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f3,96(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r28,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r28.u64);
	// lfd f31,112(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f3
	ctx.f3.f64 = double(ctx.f3.s64);
	// lfd f2,104(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// frsp f3,f3
	ctx.f3.f64 = double(float(ctx.f3.f64));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fcfid f31,f31
	f31.f64 = double(f31.s64);
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lfs f1,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f9,f9,f3
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// frsp f3,f31
	ctx.f3.f64 = double(float(f31.f64));
	// fmuls f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fsubs f8,f8,f3
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f3.f64));
	// frsp f3,f2
	ctx.f3.f64 = double(float(ctx.f2.f64));
	// fmadds f2,f9,f0,f1
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f2,16(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmuls f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fsubs f10,f10,f3
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// fmul f2,f8,f11
	ctx.f2.f64 = ctx.f8.f64 * ctx.f11.f64;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// fmul f3,f9,f11
	ctx.f3.f64 = ctx.f9.f64 * ctx.f11.f64;
	// fmuls f10,f10,f5
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// frsp f30,f2
	f30.f64 = double(float(ctx.f2.f64));
	// lfs f2,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f2,f9,f13,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f2.f64)));
	// stfs f2,16(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f2,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f9,f9,f12,f2
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f2.f64)));
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f9,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f8,f0,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f9,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f8,f13,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f9,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f8,f12,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f9.f64)));
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f9,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f10,f0,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfs f9,28(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f9,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// frsp f31,f3
	f31.f64 = double(float(ctx.f3.f64));
	// fmadds f9,f10,f13,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfs f9,28(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fmul f3,f10,f11
	ctx.f3.f64 = ctx.f10.f64 * ctx.f11.f64;
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f9,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f10,f10,f12,f9
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f9.f64)));
	// stfs f10,28(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// frsp f29,f3
	f29.f64 = double(float(ctx.f3.f64));
loc_8240E14C:
	// cmpwi cr6,r5,15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 15, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x8240e15c
	if (ctx.cr6.lt) goto loc_8240E15C;
	// li r11,15
	ctx.r11.s64 = 15;
loc_8240E15C:
	// cmpwi cr6,r11,-15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -15, ctx.xer);
	// ble cr6,0x8240e174
	if (!ctx.cr6.gt) goto loc_8240E174;
	// cmpwi cr6,r5,15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 15, ctx.xer);
	// blt cr6,0x8240e178
	if (ctx.cr6.lt) goto loc_8240E178;
	// li r5,15
	ctx.r5.s64 = 15;
	// b 0x8240e178
	goto loc_8240E178;
loc_8240E174:
	// li r5,-15
	ctx.r5.s64 = -15;
loc_8240E178:
	// cmpwi cr6,r6,15
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 15, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x8240e188
	if (ctx.cr6.lt) goto loc_8240E188;
	// li r11,15
	ctx.r11.s64 = 15;
loc_8240E188:
	// cmpwi cr6,r11,-15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -15, ctx.xer);
	// ble cr6,0x8240e1a0
	if (!ctx.cr6.gt) goto loc_8240E1A0;
	// cmpwi cr6,r6,15
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 15, ctx.xer);
	// blt cr6,0x8240e1a4
	if (ctx.cr6.lt) goto loc_8240E1A4;
	// li r6,15
	ctx.r6.s64 = 15;
	// b 0x8240e1a4
	goto loc_8240E1A4;
loc_8240E1A0:
	// li r6,-15
	ctx.r6.s64 = -15;
loc_8240E1A4:
	// cmpwi cr6,r4,63
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 63, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x8240e1b4
	if (ctx.cr6.lt) goto loc_8240E1B4;
	// li r11,63
	ctx.r11.s64 = 63;
loc_8240E1B4:
	// cmpwi cr6,r11,-63
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -63, ctx.xer);
	// ble cr6,0x8240e1cc
	if (!ctx.cr6.gt) goto loc_8240E1CC;
	// cmpwi cr6,r4,63
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 63, ctx.xer);
	// blt cr6,0x8240e1d0
	if (ctx.cr6.lt) goto loc_8240E1D0;
	// li r4,63
	ctx.r4.s64 = 63;
	// b 0x8240e1d0
	goto loc_8240E1D0;
loc_8240E1CC:
	// li r4,-63
	ctx.r4.s64 = -63;
loc_8240E1D0:
	// rlwimi r6,r4,5,0,26
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0) | (ctx.r6.u64 & 0xFFFFFFFF0000001F);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// rlwimi r5,r6,5,0,26
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0) | (ctx.r5.u64 & 0xFFFFFFFF0000001F);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// sthux r5,r30,r25
	ea = r30.u32 + r25.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	r30.u32 = ea;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8240df9c
	if (ctx.cr6.lt) goto loc_8240DF9C;
loc_8240E1F8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82423E40) {
	REX_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82423ae0
	sub_82423AE0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82423F70) {
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
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c88
	ctx.lr = 0x82423F78;
	// stfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -144, f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r20,8272
	r20.s64 = 542113792;
	// rlwinm r10,r5,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFF00000;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r16,r4
	r16.u64 = ctx.r4.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// cmplw cr6,r10,r20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r20.u32, ctx.xer);
	// bne cr6,0x82424014
	if (!ctx.cr6.eq) goto loc_82424014;
	// rlwinm. r10,r9,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82424014
	if (ctx.cr0.eq) goto loc_82424014;
	// clrlwi. r7,r5,12
	ctx.r7.u64 = ctx.r5.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// beq 0x82424004
	if (ctx.cr0.eq) goto loc_82424004;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// subf r6,r24,r26
	ctx.r6.u64 = r26.u64 - r24.u64;
loc_82423FC8:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r5,r6,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82424004
	if (!ctx.cr6.eq) goto loc_82424004;
	// lwz r5,8(r23)
	ctx.r5.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,20(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// lwzx r9,r5,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82424004
	if (ctx.cr0.eq) goto loc_82424004;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82423fc8
	if (ctx.cr6.lt) goto loc_82423FC8;
loc_82424004:
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82424014
	if (!ctx.cr6.eq) goto loc_82424014;
	// clrlwi r11,r7,12
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFFF;
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
loc_82424014:
	// lis r10,20480
	ctx.r10.s64 = 1342177280;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82424054
	if (!ctx.cr6.eq) goto loc_82424054;
	// lis r5,8272
	ctx.r5.s64 = 542113792;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
loc_82424030:
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82423f70
	ctx.lr = 0x82424048;
	sub_82423F70(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// b 0x82424af8
	goto loc_82424AF8;
loc_82424054:
	// lis r10,20480
	ctx.r10.s64 = 1342177280;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824240f0
	if (!ctx.cr6.eq) goto loc_824240F0;
	// lwz r10,8(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lwz r10,108(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// rlwinm. r10,r10,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824240f0
	if (!ctx.cr0.eq) goto loc_824240F0;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// li r11,-1
	ctx.r11.s64 = -1;
	// rlwinm r31,r21,0,25,25
	r31.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x40;
	// lis r5,8272
	ctx.r5.s64 = 542113792;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82423f70
	ctx.lr = 0x824240AC;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82424af8
	if (ctx.cr0.lt) goto loc_82424AF8;
	// lis r5,8272
	ctx.r5.s64 = 542113792;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// addi r8,r26,4
	ctx.r8.s64 = r26.s64 + 4;
	// addi r7,r24,4
	ctx.r7.s64 = r24.s64 + 4;
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82423f70
	ctx.lr = 0x824240D8;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82424af8
	if (ctx.cr0.lt) goto loc_82424AF8;
	// lis r5,8256
	ctx.r5.s64 = 541065216;
	// addi r8,r1,148
	ctx.r8.s64 = ctx.r1.s64 + 148;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// b 0x82424030
	goto loc_82424030;
loc_824240F0:
	// lwz r3,8(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lis r18,8192
	r18.s64 = 536870912;
	// lis r17,8208
	r17.s64 = 537919488;
	// lwz r10,108(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824242f4
	if (ctx.cr0.eq) goto loc_824242F4;
	// rlwinm r31,r11,0,0,11
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// lis r28,8224
	r28.s64 = 538968064;
	// lis r30,8240
	r30.s64 = 540016640;
	// cmplw cr6,r31,r18
	ctx.cr6.compare<uint32_t>(r31.u32, r18.u32, ctx.xer);
	// beq cr6,0x82424134
	if (ctx.cr6.eq) goto loc_82424134;
	// cmplw cr6,r31,r17
	ctx.cr6.compare<uint32_t>(r31.u32, r17.u32, ctx.xer);
	// beq cr6,0x82424134
	if (ctx.cr6.eq) goto loc_82424134;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// beq cr6,0x82424134
	if (ctx.cr6.eq) goto loc_82424134;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x824242f4
	if (!ctx.cr6.eq) goto loc_824242F4;
loc_82424134:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,4,8,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFF0;
	// clrlwi r29,r11,12
	r29.u64 = ctx.r11.u32 & 0xFFFFF;
	// bl 0x823f02b8
	ctx.lr = 0x82424144;
	sub_823F02B8(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne 0x82424158
	if (!ctx.cr0.eq) goto loc_82424158;
loc_8242414C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82424af8
	goto loc_82424AF8;
loc_82424158:
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82424170:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x82424170
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82424170;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82424204
	if (ctx.cr6.eq) goto loc_82424204;
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// lwz r10,172(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// subf r9,r11,r26
	ctx.r9.u64 = r26.u64 - ctx.r11.u64;
	// subf r8,r11,r24
	ctx.r8.u64 = r24.u64 - ctx.r11.u64;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8242419C:
	// cmplw cr6,r31,r18
	ctx.cr6.compare<uint32_t>(r31.u32, r18.u32, ctx.xer);
	// beq cr6,0x824241ec
	if (ctx.cr6.eq) goto loc_824241EC;
	// cmplw cr6,r31,r17
	ctx.cr6.compare<uint32_t>(r31.u32, r17.u32, ctx.xer);
	// beq cr6,0x824241dc
	if (ctx.cr6.eq) goto loc_824241DC;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// beq cr6,0x824241cc
	if (ctx.cr6.eq) goto loc_824241CC;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x824241fc
	if (!ctx.cr6.eq) goto loc_824241FC;
	// lwz r7,32(r23)
	ctx.r7.u64 = REX_LOAD_U32(r23.u32 + 32);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,36(r23)
	ctx.r7.u64 = REX_LOAD_U32(r23.u32 + 36);
	// b 0x824241f8
	goto loc_824241F8;
loc_824241CC:
	// lwz r7,36(r23)
	ctx.r7.u64 = REX_LOAD_U32(r23.u32 + 36);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,32(r23)
	ctx.r7.u64 = REX_LOAD_U32(r23.u32 + 32);
	// b 0x824241f8
	goto loc_824241F8;
loc_824241DC:
	// lwzx r7,r8,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x824241f8
	goto loc_824241F8;
loc_824241EC:
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwzx r7,r8,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
loc_824241F8:
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
loc_824241FC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8242419c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242419C;
loc_82424204:
	// lwz r27,160(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r6,-1
	ctx.r6.s64 = -1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82424230
	if (ctx.cr6.eq) goto loc_82424230;
	// addi r11,r27,-4
	ctx.r11.s64 = r27.s64 + -4;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq 0x82424230
	if (ctx.cr0.eq) goto loc_82424230;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_82424228:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82424228
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82424228;
loc_82424230:
	// lwz r28,164(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82424254
	if (ctx.cr6.eq) goto loc_82424254;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq 0x82424254
	if (ctx.cr0.eq) goto loc_82424254;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_8242424C:
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242424c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242424C;
loc_82424254:
	// rlwinm r30,r21,0,25,25
	r30.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x40;
	// clrlwi r31,r29,12
	r31.u64 = r29.u32 & 0xFFFFF;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// oris r5,r31,4112
	ctx.r5.u64 = r31.u64 | 269484032;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242427C;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824242dc
	if (ctx.cr0.lt) goto loc_824242DC;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// oris r5,r31,8256
	ctx.r5.u64 = r31.u64 | 541065216;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82423f70
	ctx.lr = 0x824242A4;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824242dc
	if (ctx.cr0.lt) goto loc_824242DC;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// add r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 + r25.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// oris r5,r31,12288
	ctx.r5.u64 = r31.u64 | 805306368;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82423f70
	ctx.lr = 0x824242D0;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r31,0
	r31.s64 = 0;
	// bge 0x824242e0
	if (!ctx.cr0.lt) goto loc_824242E0;
loc_824242DC:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_824242E0:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823f0350
	ctx.lr = 0x824242EC;
	sub_823F0350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82424af8
	goto loc_82424AF8;
loc_824242F4:
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x824787f8
	ctx.lr = 0x82424304;
	sub_824787F8(ctx, base);
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82424328
	if (!ctx.cr6.lt) goto loc_82424328;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x8242432c
	goto loc_8242432C;
loc_82424328:
	// li r31,0
	r31.s64 = 0;
loc_8242432C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8242414c
	if (ctx.cr6.eq) goto loc_8242414C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82424354
	if (!ctx.cr6.eq) goto loc_82424354;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82424354
	if (!ctx.cr6.eq) goto loc_82424354;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x82424af4
	goto loc_82424AF4;
loc_82424354:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477fa0
	ctx.lr = 0x82424364;
	sub_82477FA0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477448
	ctx.lr = 0x82424378;
	sub_82477448(ctx, base);
	// rlwinm r30,r3,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// subf r29,r11,r10
	r29.u64 = ctx.r10.u64 - ctx.r11.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82424398;
	sub_826A1E70(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824243AC;
	sub_826A1E70(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824244b4
	if (!ctx.cr6.gt) goto loc_824244B4;
	// li r29,0
	r29.s64 = 0;
loc_824243C0:
	// lwz r10,8(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x824243e8
	if (!ctx.cr6.lt) goto loc_824243E8;
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r9
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x824243ec
	goto loc_824243EC;
loc_824243E8:
	// li r30,0
	r30.s64 = 0;
loc_824243EC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824244a0
	if (ctx.cr6.eq) goto loc_824244A0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,136(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 136);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82424494
	if (!ctx.cr6.eq) goto loc_82424494;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82424494
	if (ctx.cr0.eq) goto loc_82424494;
	// lwz r11,104(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82424494
	if (!ctx.cr6.eq) goto loc_82424494;
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 92);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfd f1,32(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r30.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r30)
	REX_STORE_U32(r30.u32 + 92, ctx.r11.u32);
	// lwz r3,8(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lwz r4,120(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// bl 0x82478758
	ctx.lr = 0x82424440;
	sub_82478758(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stwx r3,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, ctx.r3.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8242414c
	if (ctx.cr6.eq) goto loc_8242414C;
	// lwz r10,8(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x824781d0
	ctx.lr = 0x82424470;
	sub_824781D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,8(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lwz r9,48(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// b 0x824244a0
	goto loc_824244A0;
loc_82424494:
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 92);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r30)
	REX_STORE_U32(r30.u32 + 92, ctx.r11.u32);
loc_824244A0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824243c0
	if (ctx.cr6.lt) goto loc_824243C0;
loc_824244B4:
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8242464c
	if (ctx.cr6.eq) goto loc_8242464C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r29,0
	r29.s64 = 0;
	// addi r27,r11,-23600
	r27.s64 = ctx.r11.s64 + -23600;
	// lfd f31,-3744(r10)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
loc_824244D4:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x82424518
	if (ctx.cr6.eq) goto loc_82424518;
	// lwzx r11,r29,r19
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r19.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82424518
	if (ctx.cr6.eq) goto loc_82424518;
	// lwz r10,8(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8242450c
	if (!ctx.cr6.lt) goto loc_8242450C;
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82424510
	goto loc_82424510;
loc_8242450C:
	// li r30,0
	r30.s64 = 0;
loc_82424510:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242480c
	if (ctx.cr6.eq) goto loc_8242480C;
loc_82424518:
	// lwz r3,8(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r4,136(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// bl 0x82478758
	ctx.lr = 0x82424530;
	sub_82478758(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8242414c
	if (ctx.cr6.eq) goto loc_8242414C;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8242455c
	if (!ctx.cr6.lt) goto loc_8242455C;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82424560
	goto loc_82424560;
loc_8242455C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82424560:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242414c
	if (ctx.cr6.eq) goto loc_8242414C;
	// rlwinm. r10,r21,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r21,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r21.u32);
	// stw r22,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, r22.u32);
	// stw r28,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r28.u32);
	// bne 0x82424588
	if (!ctx.cr0.eq) goto loc_82424588;
	// lwz r10,100(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 100);
	// or r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 | r21.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82424588:
	// lwz r10,48(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 48);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r10,52(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 52);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stwx r7,r29,r10
	REX_STORE_U32(r29.u32 + ctx.r10.u32, ctx.r7.u32);
	// beq cr6,0x824245ac
	if (ctx.cr6.eq) goto loc_824245AC;
	// stwx r7,r29,r19
	REX_STORE_U32(r29.u32 + r19.u32, ctx.r7.u32);
loc_824245AC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824245cc
	if (ctx.cr6.eq) goto loc_824245CC;
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// lwz r10,96(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 96);
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r10,100(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 100);
	// stw r10,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
loc_824245CC:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8242460c
	if (ctx.cr6.eq) goto loc_8242460C;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,24(r23)
	ctx.r8.u64 = REX_LOAD_U32(r23.u32 + 24);
	// lwzx r9,r29,r9
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + ctx.r9.u32);
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242460c
	if (!ctx.cr6.eq) goto loc_8242460C;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82423e58
	ctx.lr = 0x8242460C;
	sub_82423E58(ctx, base);
loc_8242460C:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(r28.u32, r25.u32, ctx.xer);
	// blt cr6,0x824244d4
	if (ctx.cr6.lt) goto loc_824244D4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8242464c
	if (ctx.cr6.eq) goto loc_8242464C;
	// li r29,0
	r29.s64 = 0;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_8242462C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwzx r4,r29,r11
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// bl 0x82422288
	ctx.lr = 0x82424640;
	sub_82422288(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x8242462c
	if (!ctx.cr0.eq) goto loc_8242462C;
loc_8242464C:
	// lwz r11,20(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 20);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82424744
	if (!ctx.cr0.eq) goto loc_82424744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824777d8
	ctx.lr = 0x82424660;
	sub_824777D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82424744
	if (!ctx.cr0.eq) goto loc_82424744;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x824246c0
	if (ctx.cr6.eq) goto loc_824246C0;
	// li r30,0
	r30.s64 = 0;
loc_82424678:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,8(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lwzx r4,r30,r11
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824246c0
	if (!ctx.cr0.eq) goto loc_824246C0;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82423c70
	ctx.lr = 0x824246A8;
	sub_82423C70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824246c0
	if (ctx.cr0.lt) goto loc_824246C0;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(r29.u32, r25.u32, ctx.xer);
	// blt cr6,0x82424678
	if (ctx.cr6.lt) goto loc_82424678;
loc_824246C0:
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(r29.u32, r25.u32, ctx.xer);
	// bne cr6,0x82424744
	if (!ctx.cr6.eq) goto loc_82424744;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// rlwimi r10,r9,28,0,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82424744
	if (ctx.cr6.eq) goto loc_82424744;
	// li r30,0
	r30.s64 = 0;
loc_824246F0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,8(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,120(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lfd f1,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// bl 0x82478758
	ctx.lr = 0x8242471C;
	sub_82478758(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stwx r3,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r3.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8242414c
	if (ctx.cr6.eq) goto loc_8242414C;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(r29.u32, r25.u32, ctx.xer);
	// blt cr6,0x824246f0
	if (ctx.cr6.lt) goto loc_824246F0;
loc_82424744:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r10,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r20.u32, ctx.xer);
	// bgt cr6,0x824248f0
	if (ctx.cr6.gt) goto loc_824248F0;
	// beq cr6,0x82424a54
	if (ctx.cr6.eq) goto loc_82424A54;
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82424888
	if (ctx.cr6.eq) goto loc_82424888;
	// lis r10,4112
	ctx.r10.s64 = 269484032;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82424830
	if (ctx.cr6.eq) goto loc_82424830;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r18.u32, ctx.xer);
	// beq cr6,0x82424a54
	if (ctx.cr6.eq) goto loc_82424A54;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r17.u32, ctx.xer);
	// beq cr6,0x82424a54
	if (ctx.cr6.eq) goto loc_82424A54;
	// lis r10,8256
	ctx.r10.s64 = 541065216;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82424ae8
	if (!ctx.cr6.eq) goto loc_82424AE8;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82424ae8
	if (ctx.cr6.eq) goto loc_82424AE8;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824247A0:
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r7,8(r23)
	ctx.r7.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r7,20(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r5,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwz r7,0(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// rlwinm r9,r9,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// bdnz 0x824247a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824247A0;
	// b 0x82424ae8
	goto loc_82424AE8;
loc_8242480C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-23640
	ctx.r6.s64 = ctx.r11.s64 + -23640;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82423e58
	ctx.lr = 0x82424824;
	sub_82423E58(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82424af8
	goto loc_82424AF8;
loc_82424830:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82424ae8
	if (ctx.cr6.eq) goto loc_82424AE8;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82424840:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,8(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,20(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// bdnz 0x82424840
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82424840;
	// b 0x82424ae8
	goto loc_82424AE8;
loc_82424888:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82424ae8
	if (ctx.cr6.eq) goto loc_82424AE8;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82424898:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r8,8(r23)
	ctx.r8.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r8,20(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r9,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, ctx.r9.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lfd f0,32(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 32);
	// stfd f0,32(r10)
	REX_STORE_U64(ctx.r10.u32 + 32, ctx.f0.u64);
	// lfd f0,40(r8)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 40);
	// stfd f0,40(r10)
	REX_STORE_U64(ctx.r10.u32 + 40, ctx.f0.u64);
	// bdnz 0x82424898
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82424898;
	// b 0x82424ae8
	goto loc_82424AE8;
loc_824248F0:
	// lis r9,8304
	ctx.r9.s64 = 544210944;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82424a54
	if (ctx.cr6.eq) goto loc_82424A54;
	// lis r9,8320
	ctx.r9.s64 = 545259520;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82424a54
	if (ctx.cr6.eq) goto loc_82424A54;
	// lis r9,12288
	ctx.r9.s64 = 805306368;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824249b0
	if (ctx.cr6.eq) goto loc_824249B0;
	// lis r9,20480
	ctx.r9.s64 = 1342177280;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82424ae8
	if (!ctx.cr6.eq) goto loc_82424AE8;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// clrlwi. r11,r10,12
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,8(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwzx r5,r9,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// beq 0x82424998
	if (ctx.cr0.eq) goto loc_82424998;
	// lwz r7,8(r23)
	ctx.r7.u64 = REX_LOAD_U32(r23.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,20(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
loc_82424958:
	// lwzx r4,r9,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r3,r10,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r4,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// lwzx r3,r3,r7
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// and r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 & ctx.r3.u64;
	// rlwinm. r4,r4,0,30,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82424998
	if (ctx.cr0.eq) goto loc_82424998;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82424958
	if (ctx.cr6.lt) goto loc_82424958;
loc_82424998:
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82424ae8
	if (!ctx.cr6.eq) goto loc_82424AE8;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// b 0x82424ae8
	goto loc_82424AE8;
loc_824249B0:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82424ae8
	if (ctx.cr6.eq) goto loc_82424AE8;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// li r8,0
	ctx.r8.s64 = 0;
loc_824249C4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,8(r23)
	ctx.r6.u64 = REX_LOAD_U32(r23.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 16);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,20(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// lwzx r5,r8,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r5,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwzx r7,r7,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// clrlwi. r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82424a30
	if (ctx.cr0.eq) goto loc_82424A30;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// b 0x82424a40
	goto loc_82424A40;
loc_82424A30:
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82424a44
	if (ctx.cr0.eq) goto loc_82424A44;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_82424A40:
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82424A44:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x824249c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824249C4;
	// b 0x82424ae8
	goto loc_82424AE8;
loc_82424A54:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82424ae8
	if (ctx.cr6.eq) goto loc_82424AE8;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82424A68:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,8(r23)
	ctx.r7.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r7,20(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r5,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r7,0(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	// clrlwi. r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82424ac8
	if (ctx.cr0.eq) goto loc_82424AC8;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ori r10,r10,23
	ctx.r10.u64 = ctx.r10.u64 | 23;
	// b 0x82424ad8
	goto loc_82424AD8;
loc_82424AC8:
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82424adc
	if (ctx.cr0.eq) goto loc_82424ADC;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
loc_82424AD8:
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82424ADC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82424a68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82424A68;
loc_82424AE8:
	// stw r16,60(r31)
	REX_STORE_U32(r31.u32 + 60, r16.u32);
	// lwz r11,56(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 56);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
loc_82424AF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82424AF8:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_82481E58) {
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
	ctx.lr = 0x82481E60;
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
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x82478b60
	ctx.lr = 0x82481E78;
	sub_82478B60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82481f78
	if (ctx.cr0.lt) goto loc_82481F78;
	// lwz r11,192(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 192);
	// li r29,0
	r29.s64 = 0;
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// stw r11,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r11.u32);
	// lwz r11,196(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 196);
	// stw r11,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r11.u32);
	// stw r28,200(r31)
	REX_STORE_U32(r31.u32 + 200, r28.u32);
	// stw r27,204(r31)
	REX_STORE_U32(r31.u32 + 204, r27.u32);
	// stw r29,212(r31)
	REX_STORE_U32(r31.u32 + 212, r29.u32);
	// stw r29,216(r31)
	REX_STORE_U32(r31.u32 + 216, r29.u32);
	// stw r29,220(r31)
	REX_STORE_U32(r31.u32 + 220, r29.u32);
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 116);
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 120);
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 124);
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// lwz r11,128(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 128);
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 132);
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// stw r11,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r11.u32);
	// lwz r11,140(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 140);
	// stw r11,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r11.u32);
	// lwz r11,144(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 144);
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
	// lwz r11,148(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 148);
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
	// lwz r11,152(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 152);
	// stw r11,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r11.u32);
	// lwz r11,156(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 156);
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 160);
	// stw r11,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r11.u32);
	// lwz r11,164(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 164);
	// stw r11,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r11.u32);
	// lwz r11,168(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 168);
	// stw r11,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r11.u32);
	// lwz r11,172(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 172);
	// stw r11,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r11.u32);
	// lwz r11,176(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 176);
	// stw r11,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r11.u32);
	// lwz r11,180(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 180);
	// stw r11,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r11.u32);
	// lwz r11,184(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 184);
	// stw r11,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r11.u32);
	// bl 0x826a2e60
	ctx.lr = 0x82481F48;
	sub_826A2E60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82481F5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82481f78
	if (ctx.cr0.lt) goto loc_82481F78;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,208(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 208);
	// bl 0x823f0350
	ctx.lr = 0x82481F70;
	sub_823F0350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,208(r31)
	REX_STORE_U32(r31.u32 + 208, r29.u32);
loc_82481F78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82493DA0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_82493DBC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82493e64
	if (ctx.cr6.eq) goto loc_82493E64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82493dec
	if (!ctx.cr6.eq) goto loc_82493DEC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82493da0
	ctx.lr = 0x82493DDC;
	sub_82493DA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82493e5c
	if (!ctx.cr0.eq) goto loc_82493E5C;
	// lwz r31,12(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 12);
	// b 0x82493dbc
	goto loc_82493DBC;
loc_82493DEC:
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x82493e28
	if (ctx.cr6.eq) goto loc_82493E28;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x82493e64
	if (!ctx.cr6.eq) goto loc_82493E64;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// bgt cr6,0x82493e4c
	if (ctx.cr6.gt) goto loc_82493E4C;
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// bge cr6,0x82493e20
	if (!ctx.cr6.lt) goto loc_82493E20;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82493e5c
	if (ctx.cr6.lt) goto loc_82493E5C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82493e3c
	if (ctx.cr6.gt) goto loc_82493E3C;
loc_82493E20:
	// lwz r31,32(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 32);
	// b 0x82493dbc
	goto loc_82493DBC;
loc_82493E28:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82493e68
	goto loc_82493E68;
loc_82493E3C:
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// ble cr6,0x82493e5c
	if (!ctx.cr6.gt) goto loc_82493E5C;
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// b 0x82493e58
	goto loc_82493E58;
loc_82493E4C:
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// blt cr6,0x82493e5c
	if (ctx.cr6.lt) goto loc_82493E5C;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
loc_82493E58:
	// ble cr6,0x82493e64
	if (!ctx.cr6.gt) goto loc_82493E64;
loc_82493E5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82493e68
	goto loc_82493E68;
loc_82493E64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82493E68:
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

DEFINE_REX_FUNC(sub_82497848) {
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
	ctx.lr = 0x82497850;
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// stw r7,516(r1)
	REX_STORE_U32(ctx.r1.u32 + 516, ctx.r7.u32);
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// stw r10,540(r1)
	REX_STORE_U32(ctx.r1.u32 + 540, ctx.r10.u32);
	// mr r14,r6
	r14.u64 = ctx.r6.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// mr r16,r9
	r16.u64 = ctx.r9.u64;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// li r15,0
	r15.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82497884
	if (ctx.cr6.eq) goto loc_82497884;
	// stw r15,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r15.u32);
loc_82497884:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82497890
	if (ctx.cr6.eq) goto loc_82497890;
	// stw r15,0(r30)
	REX_STORE_U32(r30.u32 + 0, r15.u32);
loc_82497890:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x824978f0
	if (ctx.cr6.eq) goto loc_824978F0;
loc_8249789C:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824978e0
	if (ctx.cr6.eq) goto loc_824978E0;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,14
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 14, ctx.xer);
	// bne cr6,0x824978e0
	if (!ctx.cr6.eq) goto loc_824978E0;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824978e0
	if (ctx.cr6.eq) goto loc_824978E0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x824978d4
	if (ctx.cr6.eq) goto loc_824978D4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824978e0
	if (!ctx.cr6.eq) goto loc_824978E0;
loc_824978D4:
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8249789c
	if (!ctx.cr6.eq) goto loc_8249789C;
loc_824978E0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824978f0
	if (ctx.cr6.eq) goto loc_824978F0;
loc_824978E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82498388
	goto loc_82498388;
loc_824978F0:
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82497a14
	if (ctx.cr6.eq) goto loc_82497A14;
	// lwz r4,8(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
loc_82497904:
	// add r11,r25,r6
	ctx.r11.u64 = r25.u64 + ctx.r6.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mulli r9,r11,228
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(228));
	// add r8,r9,r18
	ctx.r8.u64 = ctx.r9.u64 + r18.u64;
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
loc_8249791C:
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// subf r7,r3,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r3.u64;
	// beq 0x82497940
	if (ctx.cr0.eq) goto loc_82497940;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8249791c
	if (ctx.cr6.eq) goto loc_8249791C;
loc_82497940:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble 0x82497950
	if (!ctx.cr0.gt) goto loc_82497950;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// b 0x8249795c
	goto loc_8249795C;
loc_82497950:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x82497968
	if (!ctx.cr6.lt) goto loc_82497968;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
loc_8249795C:
	// cmplw cr6,r6,r25
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r25.u32, ctx.xer);
	// blt cr6,0x82497904
	if (ctx.cr6.lt) goto loc_82497904;
	// b 0x82497a14
	goto loc_82497A14;
loc_82497968:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r25,r11,1
	r25.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824979bc
	if (ctx.cr6.eq) goto loc_824979BC;
	// addi r8,r8,-224
	ctx.r8.s64 = ctx.r8.s64 + -224;
loc_8249797C:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82497984:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x824979a8
	if (ctx.cr0.eq) goto loc_824979A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82497984
	if (ctx.cr6.eq) goto loc_82497984;
loc_824979A8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824979bc
	if (!ctx.cr0.eq) goto loc_824979BC;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r8,r8,-228
	ctx.r8.s64 = ctx.r8.s64 + -228;
	// bne 0x8249797c
	if (!ctx.cr0.eq) goto loc_8249797C;
loc_824979BC:
	// cmplw cr6,r25,r5
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82497a14
	if (!ctx.cr6.lt) goto loc_82497A14;
	// mulli r11,r25,228
	ctx.r11.s64 = static_cast<int64_t>(r25.u64 * static_cast<uint64_t>(228));
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + r18.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
loc_824979D0:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_824979D8:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// beq 0x824979fc
	if (ctx.cr0.eq) goto loc_824979FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x824979d8
	if (ctx.cr6.eq) goto loc_824979D8;
loc_824979FC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82497a14
	if (!ctx.cr0.eq) goto loc_82497A14;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r9,r9,228
	ctx.r9.s64 = ctx.r9.s64 + 228;
	// cmplw cr6,r25,r5
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x824979d0
	if (ctx.cr6.lt) goto loc_824979D0;
loc_82497A14:
	// cmplw cr6,r6,r25
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r25.u32, ctx.xer);
	// beq cr6,0x824978e8
	if (ctx.cr6.eq) goto loc_824978E8;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// li r21,-1
	r21.s64 = -1;
	// li r19,1
	r19.s64 = 1;
	// bge cr6,0x82497ebc
	if (!ctx.cr6.lt) goto loc_82497EBC;
	// mulli r11,r6,228
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(228));
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + r18.u64;
	// addi r26,r11,12
	r26.s64 = ctx.r11.s64 + 12;
loc_82497A38:
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r27,r26,-12
	r27.s64 = r26.s64 + -12;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82497A4C:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82497a4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82497A4C;
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// li r9,55
	ctx.r9.s64 = 55;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82497A64:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82497a64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82497A64;
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82497A7C:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82497a7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82497A7C;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82446180
	ctx.lr = 0x82497A8C;
	sub_82446180(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82446180
	ctx.lr = 0x82497A94;
	sub_82446180(ctx, base);
	// mr r29,r19
	r29.u64 = r19.u64;
	// mr r28,r22
	r28.u64 = r22.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82497ce8
	if (ctx.cr6.eq) goto loc_82497CE8;
	// addi r30,r26,24
	r30.s64 = r26.s64 + 24;
loc_82497AA8:
	// cmplwi cr6,r29,7
	ctx.cr6.compare<uint32_t>(r29.u32, 7, ctx.xer);
	// bge cr6,0x82497cb0
	if (!ctx.cr6.lt) goto loc_82497CB0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82497cb0
	if (ctx.cr6.eq) goto loc_82497CB0;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82497c9c
	if (ctx.cr6.eq) goto loc_82497C9C;
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r31,16(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x82497cb0
	if (!ctx.cr6.eq) goto loc_82497CB0;
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x82497be4
	if (ctx.cr6.eq) goto loc_82497BE4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x82497b44
	if (ctx.cr6.eq) goto loc_82497B44;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82497b14
	if (!ctx.cr6.eq) goto loc_82497B14;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82497b44
	if (ctx.cr6.eq) goto loc_82497B44;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82497b44
	if (ctx.cr6.eq) goto loc_82497B44;
loc_82497B14:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82497b3c
	if (!ctx.cr6.eq) goto loc_82497B3C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82497b64
	if (ctx.cr6.eq) goto loc_82497B64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82497b64
	if (ctx.cr6.eq) goto loc_82497B64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
loc_82497B34:
	// bne cr6,0x82497cb0
	if (!ctx.cr6.eq) goto loc_82497CB0;
	// b 0x82497b64
	goto loc_82497B64;
loc_82497B3C:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// b 0x82497b34
	goto loc_82497B34;
loc_82497B44:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// lwz r7,12(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// stwx r7,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u32);
loc_82497B64:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,55
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 55, ctx.xer);
	// bne cr6,0x82497ba0
	if (!ctx.cr6.eq) goto loc_82497BA0;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// lwz r7,20(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// stwx r7,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u32);
	// b 0x82497be4
	goto loc_82497BE4;
loc_82497BA0:
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r10,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r10,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82493930
	ctx.lr = 0x82497BDC;
	sub_82493930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82497cb0
	if (ctx.cr0.lt) goto loc_82497CB0;
loc_82497BE4:
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82497c70
	if (ctx.cr6.eq) goto loc_82497C70;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82497c20
	if (!ctx.cr6.lt) goto loc_82497C20;
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82497c2c
	if (!ctx.cr6.gt) goto loc_82497C2C;
	// stwx r11,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// b 0x82497c2c
	goto loc_82497C2C;
loc_82497C20:
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82497cb0
	if (ctx.cr6.lt) goto loc_82497CB0;
loc_82497C2C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82497c70
	if (ctx.cr6.eq) goto loc_82497C70;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82497c64
	if (!ctx.cr6.lt) goto loc_82497C64;
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82497c70
	if (!ctx.cr6.gt) goto loc_82497C70;
	// stwx r11,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// b 0x82497c70
	goto loc_82497C70;
loc_82497C64:
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82497cb0
	if (ctx.cr6.lt) goto loc_82497CB0;
loc_82497C70:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82497c90
	if (ctx.cr0.eq) goto loc_82497C90;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x824956c8
	ctx.lr = 0x82497C88;
	sub_824956C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82497cb0
	if (!ctx.cr0.eq) goto loc_82497CB0;
loc_82497C90:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x82497ca4
	if (ctx.cr6.eq) goto loc_82497CA4;
loc_82497C9C:
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_82497CA4:
	// lwz r28,12(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82497aa8
	if (!ctx.cr6.eq) goto loc_82497AA8;
loc_82497CB0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82497ea8
	if (!ctx.cr6.eq) goto loc_82497EA8;
	// cmplwi cr6,r29,7
	ctx.cr6.compare<uint32_t>(r29.u32, 7, ctx.xer);
	// bge cr6,0x82497d08
	if (!ctx.cr6.lt) goto loc_82497D08;
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82497ce0
	if (ctx.cr6.eq) goto loc_82497CE0;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// bne cr6,0x82497ea8
	if (!ctx.cr6.eq) goto loc_82497EA8;
loc_82497CE0:
	// cmplwi cr6,r29,7
	ctx.cr6.compare<uint32_t>(r29.u32, 7, ctx.xer);
	// bge cr6,0x82497d08
	if (!ctx.cr6.lt) goto loc_82497D08;
loc_82497CE8:
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82497d08
	if (ctx.cr6.eq) goto loc_82497D08;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// bne cr6,0x82497ea8
	if (!ctx.cr6.eq) goto loc_82497EA8;
loc_82497D08:
	// lwz r11,-4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82497d64
	if (ctx.cr6.eq) goto loc_82497D64;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82497d64
	if (ctx.cr6.eq) goto loc_82497D64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// bne cr6,0x82497d40
	if (!ctx.cr6.eq) goto loc_82497D40;
	// lwz r9,4(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_82497D40:
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 8);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,55
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 55, ctx.xer);
	// bne cr6,0x82497d64
	if (!ctx.cr6.eq) goto loc_82497D64;
	// lwz r9,12(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 12);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_82497D64:
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// addi r6,r26,12
	ctx.r6.s64 = r26.s64 + 12;
	// mr r9,r15
	ctx.r9.u64 = r15.u64;
loc_82497D70:
	// lwz r11,-12(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + -12);
	// lwz r8,-8(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + -8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82497e8c
	if (ctx.cr6.eq) goto loc_82497E8C;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82497dec
	if (ctx.cr6.eq) goto loc_82497DEC;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r7,5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 5, ctx.xer);
	// beq cr6,0x82497de4
	if (ctx.cr6.eq) goto loc_82497DE4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82497dbc
	if (!ctx.cr6.eq) goto loc_82497DBC;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82497db4
	if (ctx.cr6.eq) goto loc_82497DB4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82497dbc
	if (!ctx.cr6.eq) goto loc_82497DBC;
loc_82497DB4:
	// stwx r11,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// b 0x82497dd8
	goto loc_82497DD8;
loc_82497DBC:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x82497dd0
	goto loc_82497DD0;
loc_82497DC4:
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82497dd8
	if (ctx.cr6.eq) goto loc_82497DD8;
	// lwzu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
loc_82497DD0:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82497dc4
	if (!ctx.cr6.eq) goto loc_82497DC4;
loc_82497DD8:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82497ea0
	if (ctx.cr6.eq) goto loc_82497EA0;
	// b 0x82497dec
	goto loc_82497DEC;
loc_82497DE4:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stwx r11,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
loc_82497DEC:
	// lwz r8,0(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82497e78
	if (ctx.cr0.eq) goto loc_82497E78;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r9,r7
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpwi cr6,r3,55
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 55, ctx.xer);
	// beq cr6,0x82497e70
	if (ctx.cr6.eq) goto loc_82497E70;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x82497e28
	goto loc_82497E28;
loc_82497E14:
	// cmpwi cr6,r10,54
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 54, ctx.xer);
	// beq cr6,0x82497ea0
	if (ctx.cr6.eq) goto loc_82497EA0;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82497e30
	if (ctx.cr6.eq) goto loc_82497E30;
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
loc_82497E28:
	// cmpwi cr6,r10,55
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 55, ctx.xer);
	// bne cr6,0x82497e14
	if (!ctx.cr6.eq) goto loc_82497E14;
loc_82497E30:
	// cmpwi cr6,r10,54
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 54, ctx.xer);
	// beq cr6,0x82497ea0
	if (ctx.cr6.eq) goto loc_82497EA0;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82497e60
	if (!ctx.cr6.eq) goto loc_82497E60;
	// cmpwi cr6,r10,55
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 55, ctx.xer);
	// bne cr6,0x82497e78
	if (!ctx.cr6.eq) goto loc_82497E78;
	// lwz r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x82493588
	ctx.lr = 0x82497E58;
	sub_82493588(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82497ea0
	if (ctx.cr0.eq) goto loc_82497EA0;
loc_82497E60:
	// cmpwi cr6,r10,55
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 55, ctx.xer);
	// bne cr6,0x82497e78
	if (!ctx.cr6.eq) goto loc_82497E78;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x82497e74
	goto loc_82497E74;
loc_82497E70:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82497E74:
	// stwx r11,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r11.u32);
loc_82497E78:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82497e8c
	if (!ctx.cr6.eq) goto loc_82497E8C;
	// stwx r19,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, r19.u32);
loc_82497E8C:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// cmplwi cr6,r9,28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 28, ctx.xer);
	// blt cr6,0x82497d70
	if (ctx.cr6.lt) goto loc_82497D70;
loc_82497EA0:
	// cmplwi cr6,r5,7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 7, ctx.xer);
	// beq cr6,0x82497eb8
	if (ctx.cr6.eq) goto loc_82497EB8;
loc_82497EA8:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r26,r26,228
	r26.s64 = r26.s64 + 228;
	// cmplw cr6,r20,r25
	ctx.cr6.compare<uint32_t>(r20.u32, r25.u32, ctx.xer);
	// blt cr6,0x82497a38
	if (ctx.cr6.lt) goto loc_82497A38;
loc_82497EB8:
	// lwz r30,540(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
loc_82497EBC:
	// cmplw cr6,r20,r25
	ctx.cr6.compare<uint32_t>(r20.u32, r25.u32, ctx.xer);
	// beq cr6,0x82498058
	if (ctx.cr6.eq) goto loc_82498058;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x82498308
	if (ctx.cr6.eq) goto loc_82498308;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82444750
	ctx.lr = 0x82497ED4;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82497ee8
	if (ctx.cr0.eq) goto loc_82497EE8;
	// bl 0x824463c8
	ctx.lr = 0x82497EE0;
	sub_824463C8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// b 0x82497eec
	goto loc_82497EEC;
loc_82497EE8:
	// mr r23,r15
	r23.u64 = r15.u64;
loc_82497EEC:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82498094
	if (ctx.cr6.eq) goto loc_82498094;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// addi r24,r23,44
	r24.s64 = r23.s64 + 44;
	// mr r31,r15
	r31.u64 = r15.u64;
	// mulli r25,r20,228
	r25.s64 = static_cast<int64_t>(r20.u64 * static_cast<uint64_t>(228));
	// addi r22,r11,-11700
	r22.s64 = ctx.r11.s64 + -11700;
loc_82497F0C:
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r27,r31,1
	r27.s64 = r31.s64 + 1;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + r18.u64;
	// addi r28,r11,4
	r28.s64 = ctx.r11.s64 + 4;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// bne cr6,0x82497f38
	if (!ctx.cr6.eq) goto loc_82497F38;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82498304
	if (ctx.cr6.eq) goto loc_82498304;
	// mr r27,r31
	r27.u64 = r31.u64;
loc_82497F38:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82498304
	if (ctx.cr6.eq) goto loc_82498304;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// beq cr6,0x82497f54
	if (ctx.cr6.eq) goto loc_82497F54;
	// lwz r26,12(r10)
	r26.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
loc_82497F54:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824982f0
	if (ctx.cr6.eq) goto loc_824982F0;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8249806c
	if (!ctx.cr6.eq) goto loc_8249806C;
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82498060
	if (ctx.cr6.eq) goto loc_82498060;
	// lwz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82498060
	if (ctx.cr6.eq) goto loc_82498060;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x82497F8C;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82497fa0
	if (ctx.cr0.eq) goto loc_82497FA0;
	// bl 0x82446180
	ctx.lr = 0x82497F98;
	sub_82446180(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82497fa4
	goto loc_82497FA4;
loc_82497FA0:
	// mr r30,r15
	r30.u64 = r15.u64;
loc_82497FA4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82498094
	if (ctx.cr6.eq) goto loc_82498094;
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82497fdc
	if (!ctx.cr6.lt) goto loc_82497FDC;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r11,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r11.u32);
	// bne cr6,0x82497fe8
	if (!ctx.cr6.eq) goto loc_82497FE8;
	// stw r19,28(r30)
	REX_STORE_U32(r30.u32 + 28, r19.u32);
	// b 0x82497fe8
	goto loc_82497FE8;
loc_82497FDC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82497fe8
	if (ctx.cr6.eq) goto loc_82497FE8;
	// stw r11,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r11.u32);
loc_82497FE8:
	// lwz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82498018
	if (!ctx.cr6.lt) goto loc_82498018;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
	// bne cr6,0x82498024
	if (!ctx.cr6.eq) goto loc_82498024;
	// stw r19,32(r30)
	REX_STORE_U32(r30.u32 + 32, r19.u32);
	// b 0x82498024
	goto loc_82498024;
loc_82498018:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82498024
	if (ctx.cr6.eq) goto loc_82498024;
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
loc_82498024:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82498058
	if (!ctx.cr6.eq) goto loc_82498058;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82498058
	if (!ctx.cr6.eq) goto loc_82498058;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82495d70
	ctx.lr = 0x82498050;
	sub_82495D70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x824981b4
	if (!ctx.cr0.lt) goto loc_824981B4;
loc_82498058:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// b 0x82498388
	goto loc_82498388;
loc_82498060:
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// b 0x82498080
	goto loc_82498080;
loc_8249806C:
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// bne cr6,0x824980a0
	if (!ctx.cr6.eq) goto loc_824980A0;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_82498080:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8249808C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x824981b4
	if (!ctx.cr0.eq) goto loc_824981B4;
loc_82498094:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82498388
	goto loc_82498388;
loc_824980A0:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824980A8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824980bc
	if (ctx.cr0.eq) goto loc_824980BC;
	// bl 0x82446180
	ctx.lr = 0x824980B4;
	sub_82446180(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x824980c0
	goto loc_824980C0;
loc_824980BC:
	// mr r30,r15
	r30.u64 = r15.u64;
loc_824980C0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82498094
	if (ctx.cr6.eq) goto loc_82498094;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82498120
	if (!ctx.cr6.lt) goto loc_82498120;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r11,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r11.u32);
	// bne cr6,0x82498124
	if (!ctx.cr6.eq) goto loc_82498124;
	// stw r19,28(r30)
	REX_STORE_U32(r30.u32 + 28, r19.u32);
	// b 0x82498124
	goto loc_82498124;
loc_82498120:
	// stw r11,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r11.u32);
loc_82498124:
	// lwz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82498154
	if (!ctx.cr6.lt) goto loc_82498154;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
	// bne cr6,0x82498158
	if (!ctx.cr6.eq) goto loc_82498158;
	// stw r19,32(r30)
	REX_STORE_U32(r30.u32 + 32, r19.u32);
	// b 0x82498158
	goto loc_82498158;
loc_82498154:
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
loc_82498158:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// rlwinm r11,r11,0,20,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00;
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
	// beq cr6,0x82498178
	if (ctx.cr6.eq) goto loc_82498178;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82498184
	if (!ctx.cr0.eq) goto loc_82498184;
loc_82498178:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
loc_82498184:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82498198
	if (ctx.cr6.eq) goto loc_82498198;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x824981b4
	if (!ctx.cr6.eq) goto loc_824981B4;
loc_82498198:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x824981b4
	if (!ctx.cr6.eq) goto loc_824981B4;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x824981b4
	if (!ctx.cr6.eq) goto loc_824981B4;
	// stw r15,16(r30)
	REX_STORE_U32(r30.u32 + 16, r15.u32);
loc_824981B4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824981dc
	if (!ctx.cr6.eq) goto loc_824981DC;
	// add r11,r25,r18
	ctx.r11.u64 = r25.u64 + r18.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824982f0
	if (ctx.cr6.eq) goto loc_824982F0;
	// stw r30,40(r23)
	REX_STORE_U32(r23.u32 + 40, r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82498094
	if (ctx.cr6.eq) goto loc_82498094;
	// b 0x824982f0
	goto loc_824982F0;
loc_824981DC:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824981E4;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82498200
	if (ctx.cr0.eq) goto loc_82498200;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82444918
	ctx.lr = 0x824981FC;
	sub_82444918(ctx, base);
	// b 0x82498204
	goto loc_82498204;
loc_82498200:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
loc_82498204:
	// stw r3,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82498094
	if (ctx.cr6.eq) goto loc_82498094;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82444750
	ctx.lr = 0x82498218;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82498240
	if (ctx.cr0.eq) goto loc_82498240;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824453f8
	ctx.lr = 0x82498238;
	sub_824453F8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82498244
	goto loc_82498244;
loc_82498240:
	// mr r29,r15
	r29.u64 = r15.u64;
loc_82498244:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82498094
	if (ctx.cr6.eq) goto loc_82498094;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r29.u32);
	// bl 0x82444750
	ctx.lr = 0x8249825C;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82498274
	if (ctx.cr0.eq) goto loc_82498274;
	// lwz r4,516(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// bl 0x82444d78
	ctx.lr = 0x8249826C;
	sub_82444D78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82498278
	goto loc_82498278;
loc_82498274:
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
loc_82498278:
	// stw r11,20(r29)
	REX_STORE_U32(r29.u32 + 20, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82498094
	if (ctx.cr6.eq) goto loc_82498094;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r3,88
	ctx.r3.s64 = 88;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// bl 0x82444750
	ctx.lr = 0x82498294;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824982a8
	if (ctx.cr0.eq) goto loc_824982A8;
	// bl 0x82446980
	ctx.lr = 0x824982A0;
	sub_82446980(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824982ac
	goto loc_824982AC;
loc_824982A8:
	// mr r31,r15
	r31.u64 = r15.u64;
loc_824982AC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82498094
	if (ctx.cr6.eq) goto loc_82498094;
	// stw r31,24(r29)
	REX_STORE_U32(r29.u32 + 24, r31.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r21,16(r31)
	REX_STORE_U32(r31.u32 + 16, r21.u32);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82495868
	ctx.lr = 0x824982C8;
	sub_82495868(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// beq cr6,0x82498094
	if (ctx.cr6.eq) goto loc_82498094;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r24,r11,12
	r24.s64 = ctx.r11.s64 + 12;
loc_824982F0:
	// lwz r30,540(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// mr r31,r27
	r31.u64 = r27.u64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// cmplwi cr6,r27,7
	ctx.cr6.compare<uint32_t>(r27.u32, 7, ctx.xer);
	// blt cr6,0x82497f0c
	if (ctx.cr6.lt) goto loc_82497F0C;
loc_82498304:
	// stw r23,0(r16)
	REX_STORE_U32(r16.u32 + 0, r23.u32);
loc_82498308:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82498384
	if (ctx.cr6.eq) goto loc_82498384;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x82498318;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249833c
	if (ctx.cr0.eq) goto loc_8249833C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-11708
	ctx.r6.s64 = ctx.r11.s64 + -11708;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82444918
	ctx.lr = 0x82498334;
	sub_82444918(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82498340
	goto loc_82498340;
loc_8249833C:
	// mr r31,r15
	r31.u64 = r15.u64;
loc_82498340:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82498094
	if (ctx.cr6.eq) goto loc_82498094;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82444750
	ctx.lr = 0x82498350;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82498370
	if (ctx.cr0.eq) goto loc_82498370;
	// mulli r11,r20,228
	ctx.r11.s64 = static_cast<int64_t>(r20.u64 * static_cast<uint64_t>(228));
	// lwz r6,516(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// lwzx r5,r11,r18
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + r18.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82447910
	ctx.lr = 0x8249836C;
	sub_82447910(ctx, base);
	// b 0x82498374
	goto loc_82498374;
loc_82498370:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
loc_82498374:
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82498094
	if (ctx.cr6.eq) goto loc_82498094;
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
loc_82498384:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
loc_82498388:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_824DFB20) {
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
	ctx.lr = 0x824DFB28;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824dfc04
	if (!ctx.cr0.eq) goto loc_824DFC04;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r11,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// andi. r10,r10,24702
	ctx.r10.u64 = ctx.r10.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x824dfc04
	if (ctx.cr0.eq) goto loc_824DFC04;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r9,r11,4,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x30;
	// li r27,0
	r27.s64 = 0;
	// rlwinm r8,r10,4,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF;
	// rlwinm. r11,r10,20,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r27,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, r27.u64);
	// clrlwi r30,r10,20
	r30.u64 = ctx.r10.u32 & 0xFFF;
	// rlwinm r31,r10,16,20,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFF;
	// or r29,r9,r8
	r29.u64 = ctx.r9.u64 | ctx.r8.u64;
	// beq 0x824dfc04
	if (ctx.cr0.eq) goto loc_824DFC04;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
loc_824DFB88:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822cdf00
	ctx.lr = 0x824DFB98;
	sub_822CDF00(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// clrlwi r4,r31,31
	ctx.r4.u64 = r31.u32 & 0x1;
	// rlwinm r5,r31,31,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x1;
	// clrlwi r6,r29,31
	ctx.r6.u64 = r29.u32 & 0x1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwinm r29,r29,31,1,31
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r31,r31,30,2,31
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x824ddfd0
	ctx.lr = 0x824DFBB8;
	sub_824DDFD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824dfbdc
	if (ctx.cr0.eq) goto loc_824DFBDC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// slw r11,r11,r27
	ctx.r11.u64 = r27.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r27.u8 & 0x3F));
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r11,r10,0,16,3
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF000FFFF) | (ctx.r11.u64 & 0xFFF0000);
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
loc_824DFBDC:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bne 0x824dfb88
	if (!ctx.cr0.eq) goto loc_824DFB88;
	// ld r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U64(r28.u32 + 0);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// beq cr6,0x824dfc04
	if (ctx.cr6.eq) goto loc_824DFC04;
	// addi r4,r24,1
	ctx.r4.s64 = r24.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824df838
	ctx.lr = 0x824DFC04;
	sub_824DF838(ctx, base);
loc_824DFC04:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_824E7BD8) {
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
	ctx.lr = 0x824E7BE0;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r16,r7
	r16.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824e7c08
	if (!ctx.cr6.eq) goto loc_824E7C08;
	// li r21,0
	r21.s64 = 0;
	// b 0x824e7c14
	goto loc_824E7C14;
loc_824E7C08:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r21,r11,27,31,31
	r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_824E7C14:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r30,r11,512
	r30.u64 = ctx.r11.u64 | 512;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(r28.u32, r30.u32, ctx.xer);
	// bge cr6,0x824e7c28
	if (!ctx.cr6.lt) goto loc_824E7C28;
	// bl 0x826b40a0
	ctx.lr = 0x824E7C28;
	sub_826B40A0(ctx, base);
loc_824E7C28:
	// lwz r31,0(r17)
	r31.u64 = REX_LOAD_U32(r17.u32 + 0);
	// lwz r26,0(r16)
	r26.u64 = REX_LOAD_U32(r16.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzu r10,4(r31)
	ea = 4 + r31.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// rlwinm r20,r11,0,3,3
	r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r22,r11,16
	r22.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x824e7c4c
	if (!ctx.cr0.eq) goto loc_824E7C4C;
	// bl 0x826b40a0
	ctx.lr = 0x824E7C4C;
	sub_826B40A0(ctx, base);
loc_824E7C4C:
	// lwz r27,0(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r11,15
	ctx.r11.s64 = 983040;
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// ori r24,r11,33
	r24.u64 = ctx.r11.u64 | 33;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// mr r18,r27
	r18.u64 = r27.u64;
	// beq cr6,0x824e7ca0
	if (ctx.cr6.eq) goto loc_824E7CA0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824e7c78
	if (!ctx.cr0.eq) goto loc_824E7C78;
	// bl 0x826b40a0
	ctx.lr = 0x824E7C78;
	sub_826B40A0(ctx, base);
loc_824E7C78:
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(r28.u32, r30.u32, ctx.xer);
	// bgt cr6,0x824e7c84
	if (ctx.cr6.gt) goto loc_824E7C84;
	// bl 0x826b40a0
	ctx.lr = 0x824E7C84;
	sub_826B40A0(ctx, base);
loc_824E7C84:
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// lwz r19,0(r29)
	r19.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// and r11,r27,r12
	ctx.r11.u64 = r27.u64 & ctx.r12.u64;
	// or r27,r11,r24
	r27.u64 = ctx.r11.u64 | r24.u64;
	// b 0x824e7ca4
	goto loc_824E7CA4;
loc_824E7CA0:
	// lwz r19,80(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_824E7CA4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r25,0
	r25.s64 = 0;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824e7d1c
	if (ctx.cr0.eq) goto loc_824E7D1C;
	// li r31,0
	r31.s64 = 0;
loc_824E7CB8:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// stwx r11,r31,r10
	REX_STORE_U32(r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stwx r9,r31,r30
	REX_STORE_U32(r31.u32 + r30.u32, ctx.r9.u32);
	// rlwinm r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x824e7cfc
	if (!ctx.cr6.eq) goto loc_824E7CFC;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824e7cf0
	if (!ctx.cr0.eq) goto loc_824E7CF0;
	// bl 0x826b40a0
	ctx.lr = 0x824E7CF0;
	sub_826B40A0(ctx, base);
loc_824E7CF0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// stwx r11,r31,r30
	REX_STORE_U32(r31.u32 + r30.u32, ctx.r11.u32);
loc_824E7CFC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824e7cb8
	if (!ctx.cr0.eq) goto loc_824E7CB8;
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(r25.u32, 4, ctx.xer);
	// ble cr6,0x824e7d1c
	if (!ctx.cr6.gt) goto loc_824E7D1C;
	// bl 0x826b40a0
	ctx.lr = 0x824E7D1C;
	sub_826B40A0(ctx, base);
loc_824E7D1C:
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r8,r26,4
	ctx.r8.s64 = r26.s64 + 4;
	// cmplwi cr6,r22,95
	ctx.cr6.compare<uint32_t>(r22.u32, 95, ctx.xer);
	// clrlwi r11,r10,21
	ctx.r11.u64 = ctx.r10.u32 & 0x7FF;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// rlwimi r11,r21,8,23,23
	ctx.r11.u64 = (__builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 8) & 0x100) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// bne cr6,0x824e7d44
	if (!ctx.cr6.eq) goto loc_824E7D44;
	// lis r9,2560
	ctx.r9.s64 = 167772160;
	// ori r9,r9,94
	ctx.r9.u64 = ctx.r9.u64 | 94;
	// b 0x824e7d4c
	goto loc_824E7D4C;
loc_824E7D44:
	// lis r9,2048
	ctx.r9.s64 = 134217728;
	// ori r9,r9,95
	ctx.r9.u64 = ctx.r9.u64 | 95;
loc_824E7D4C:
	// rlwimi r9,r11,16,7,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1FF0000) | (ctx.r9.u64 & 0xFFFFFFFFFE00FFFF);
	// rlwinm r28,r10,0,8,15
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF0000;
	// stw r9,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r9.u32);
	// lis r26,228
	r26.s64 = 14942208;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(r28.u32, r26.u32, ctx.xer);
	// beq cr6,0x824e7d80
	if (ctx.cr6.eq) goto loc_824E7D80;
	// oris r27,r27,15
	r27.u64 = r27.u64 | 983040;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x824e7d80
	if (!ctx.cr6.eq) goto loc_824E7D80;
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// and r11,r27,r12
	ctx.r11.u64 = r27.u64 & ctx.r12.u64;
	// or r27,r11,r24
	r27.u64 = ctx.r11.u64 | r24.u64;
loc_824E7D80:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e6318
	ctx.lr = 0x824E7D90;
	sub_824E6318(ctx, base);
	// lwz r30,112(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e6438
	ctx.lr = 0x824E7DB0;
	sub_824E6438(ctx, base);
	// cmplwi cr6,r22,95
	ctx.cr6.compare<uint32_t>(r22.u32, 95, ctx.xer);
	// bne cr6,0x824e7dd4
	if (!ctx.cr6.eq) goto loc_824E7DD4;
	// andis. r11,r31,2816
	ctx.r11.u64 = r31.u64 & 184549376;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824e7dc8
	if (ctx.cr0.eq) goto loc_824E7DC8;
	// bl 0x826b40a0
	ctx.lr = 0x824E7DC8;
	sub_826B40A0(ctx, base);
loc_824E7DC8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x824e7e00
	goto loc_824E7E00;
loc_824E7DD4:
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(r25.u32, 4, ctx.xer);
	// beq cr6,0x824e7de0
	if (ctx.cr6.eq) goto loc_824E7DE0;
	// bl 0x826b40a0
	ctx.lr = 0x824E7DE0;
	sub_826B40A0(ctx, base);
loc_824E7DE0:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r4,120(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x824e6438
	ctx.lr = 0x824E7DF8;
	sub_824E6438(ctx, base);
	// lwz r4,124(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,108(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_824E7E00:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x824e6438
	ctx.lr = 0x824E7E10;
	sub_824E6438(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq cr6,0x824e7e34
	if (ctx.cr6.eq) goto loc_824E7E34;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824e6688
	ctx.lr = 0x824E7E30;
	sub_824E6688(ctx, base);
	// b 0x824e7e54
	goto loc_824E7E54;
loc_824E7E34:
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(r28.u32, r26.u32, ctx.xer);
	// beq cr6,0x824e7e54
	if (ctx.cr6.eq) goto loc_824E7E54;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824e6868
	ctx.lr = 0x824E7E54;
	sub_824E6868(ctx, base);
loc_824E7E54:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r16)
	REX_STORE_U32(r16.u32 + 0, ctx.r11.u32);
	// stw r29,0(r17)
	REX_STORE_U32(r17.u32 + 0, r29.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_824FB7B8) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c80
	ctx.lr = 0x824FB7C0;
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -176, f29.u64);
	// stfd f30,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lis r14,-1
	r14.s64 = -65536;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// stw r4,444(r1)
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r4.u32);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r6,460(r1)
	REX_STORE_U32(ctx.r1.u32 + 460, ctx.r6.u32);
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// stw r7,468(r1)
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r7.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r31,128
	r31.s64 = 128;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r14.u32, ctx.xer);
	// bne cr6,0x824fb804
	if (!ctx.cr6.eq) goto loc_824FB804;
	// li r31,132
	r31.s64 = 132;
loc_824FB804:
	// lwz r11,44(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 44);
	// li r19,0
	r19.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824fb824
	if (ctx.cr0.eq) goto loc_824FB824;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// beq 0x824fb828
	if (ctx.cr0.eq) goto loc_824FB828;
loc_824FB824:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_824FB828:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fb834
	if (ctx.cr0.eq) goto loc_824FB834;
	// ori r31,r31,64
	r31.u64 = r31.u64 | 64;
loc_824FB834:
	// bl 0x822ce510
	ctx.lr = 0x824FB838;
	sub_822CE510(ctx, base);
	// stw r3,768(r22)
	REX_STORE_U32(r22.u32 + 768, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822cd7e8
	ctx.lr = 0x824FB844;
	sub_822CD7E8(ctx, base);
	// lwz r3,56(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 56);
	// mr r20,r19
	r20.u64 = r19.u64;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824fb86c
	if (ctx.cr6.eq) goto loc_824FB86C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fb86c
	if (ctx.cr0.eq) goto loc_824FB86C;
	// lwz r20,20(r3)
	r20.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r20.u32);
loc_824FB86C:
	// lwz r11,48(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 48);
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// stw r19,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r19.u32);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r19,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r19.u32);
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r14.u32, ctx.xer);
	// beq cr6,0x824fba20
	if (ctx.cr6.eq) goto loc_824FBA20;
	// lwz r11,336(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 336);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824fb8fc
	if (!ctx.cr6.gt) goto loc_824FB8FC;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r9,r22,128
	ctx.r9.s64 = r22.s64 + 128;
loc_824FB8A8:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r8,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x824fb8c8
	if (ctx.cr6.gt) goto loc_824FB8C8;
	// rlwinm r31,r10,12,28,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xF;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// ble cr6,0x824fb8c8
	if (!ctx.cr6.gt) goto loc_824FB8C8;
	// rlwimi r10,r11,20,8,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF00000) | (ctx.r10.u64 & 0xFFFFFFFFFF0FFFFF);
loc_824FB8C8:
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bne cr6,0x824fb8d8
	if (!ctx.cr6.eq) goto loc_824FB8D8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// b 0x824fb8e8
	goto loc_824FB8E8;
loc_824FB8D8:
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bne cr6,0x824fb8e8
	if (!ctx.cr6.eq) goto loc_824FB8E8;
	// clrlwi r11,r8,28
	ctx.r11.u64 = ctx.r8.u32 & 0xF;
	// or r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 | ctx.r6.u64;
loc_824FB8E8:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x824fb8a8
	if (ctx.cr6.lt) goto loc_824FB8A8;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_824FB8FC:
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x824fba14
	if (ctx.cr6.gt) goto loc_824FBA14;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,-22504
	ctx.r12.s64 = ctx.r12.s64 + -22504;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32176
	ctx.r12.s64 = -2108686336;
	// nop 
	// addi r12,r12,-18120
	ctx.r12.s64 = ctx.r12.s64 + -18120;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_824FB938;
	case 1:
		goto loc_824FB950;
	case 2:
		goto loc_824FB95C;
	case 3:
		goto loc_824FB968;
	case 4:
		goto loc_824FB95C;
	case 5:
		goto loc_824FB970;
	case 6:
		goto loc_824FB95C;
	case 7:
		goto loc_824FB97C;
	case 8:
		goto loc_824FB95C;
	case 9:
		goto loc_824FB988;
	case 10:
		goto loc_824FB95C;
	case 11:
		goto loc_824FB990;
	case 12:
		goto loc_824FB95C;
	case 13:
		goto loc_824FB998;
	case 14:
		goto loc_824FB95C;
	case 15:
		goto loc_824FB97C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_824FB938:
	// oris r11,r10,1792
	ctx.r11.u64 = ctx.r10.u64 | 117440512;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x824fb9a4
	if (ctx.cr6.eq) goto loc_824FB9A4;
	// stw r30,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r30.u32);
	// b 0x824fb9a4
	goto loc_824FB9A4;
loc_824FB950:
	// rlwinm r11,r10,0,8,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF8FFFFFF;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x824fb9a4
	goto loc_824FB9A4;
loc_824FB95C:
	// li r4,3547
	ctx.r4.s64 = 3547;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824e4368
	ctx.lr = 0x824FB968;
	sub_824E4368(ctx, base);
loc_824FB968:
	// rlwimi r10,r30,25,5,7
	ctx.r10.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 25) & 0x7000000) | (ctx.r10.u64 & 0xFFFFFFFFF8FFFFFF);
	// b 0x824fb9a0
	goto loc_824FB9A0;
loc_824FB970:
	// li r11,3
	ctx.r11.s64 = 3;
loc_824FB974:
	// rlwimi r10,r11,24,5,7
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7000000) | (ctx.r10.u64 & 0xFFFFFFFFF8FFFFFF);
	// b 0x824fb9a0
	goto loc_824FB9A0;
loc_824FB97C:
	// li r4,3635
	ctx.r4.s64 = 3635;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824e4368
	ctx.lr = 0x824FB988;
	sub_824E4368(ctx, base);
loc_824FB988:
	// rlwimi r10,r30,26,5,7
	ctx.r10.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 26) & 0x7000000) | (ctx.r10.u64 & 0xFFFFFFFFF8FFFFFF);
	// b 0x824fb9a0
	goto loc_824FB9A0;
loc_824FB990:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x824fb974
	goto loc_824FB974;
loc_824FB998:
	// li r11,3
	ctx.r11.s64 = 3;
	// rlwimi r10,r11,25,5,7
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7000000) | (ctx.r10.u64 & 0xFFFFFFFFF8FFFFFF);
loc_824FB9A0:
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_824FB9A4:
	// lwz r11,536(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 536);
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824fb9e8
	if (!ctx.cr6.gt) goto loc_824FB9E8;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r22,348
	ctx.r11.s64 = r22.s64 + 348;
loc_824FB9BC:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// cmplwi cr6,r8,18
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 18, ctx.xer);
	// bne cr6,0x824fb9d8
	if (!ctx.cr6.eq) goto loc_824FB9D8;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// oris r8,r8,32768
	ctx.r8.u64 = ctx.r8.u64 | 2147483648;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
loc_824FB9D8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824fb9bc
	if (ctx.cr6.lt) goto loc_824FB9BC;
loc_824FB9E8:
	// addi r4,r22,972
	ctx.r4.s64 = r22.s64 + 972;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x824f7610
	ctx.lr = 0x824FB9F4;
	sub_824F7610(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x824fbbd0
	if (ctx.cr0.eq) goto loc_824FBBD0;
	// lis r4,16961
	ctx.r4.s64 = 1111556096;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,21571
	ctx.r4.u64 = ctx.r4.u64 | 21571;
	// bl 0x82449658
	ctx.lr = 0x824FBA0C;
	sub_82449658(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x824fbbd4
	goto loc_824FBBD4;
loc_824FBA14:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824e4368
	ctx.lr = 0x824FBA20;
	sub_824E4368(ctx, base);
loc_824FBA20:
	// lwz r11,536(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 536);
	// mr r30,r19
	r30.u64 = r19.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824fb9e8
	if (!ctx.cr6.gt) goto loc_824FB9E8;
	// addi r31,r22,348
	r31.s64 = r22.s64 + 348;
loc_824FBA34:
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// beq cr6,0x824fbbb8
	if (ctx.cr6.eq) goto loc_824FBBB8;
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
loc_824FBA4C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824fba84
	if (ctx.cr6.eq) goto loc_824FBA84;
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824fba7c
	if (ctx.cr6.eq) goto loc_824FBA7C;
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r7,r7,0,4,6
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x824fba7c
	if (ctx.cr0.eq) goto loc_824FBA7C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14976
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14976, ctx.xer);
	// bne cr6,0x824fba84
	if (!ctx.cr6.eq) goto loc_824FBA84;
loc_824FBA7C:
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x824fba4c
	goto loc_824FBA4C;
loc_824FBA84:
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi. r11,r7,27
	ctx.r11.u64 = ctx.r7.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fbb74
	if (ctx.cr0.eq) goto loc_824FBB74;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x824fbb58
	if (ctx.cr6.eq) goto loc_824FBB58;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// beq cr6,0x824fbafc
	if (ctx.cr6.eq) goto loc_824FBAFC;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bne cr6,0x824fbb90
	if (!ctx.cr6.eq) goto loc_824FBB90;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824fbbb8
	if (ctx.cr6.eq) goto loc_824FBBB8;
	// oris r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 262144;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
loc_824FBABC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824fbad8
	if (ctx.cr6.eq) goto loc_824FBAD8;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824fbad8
	if (!ctx.cr0.eq) goto loc_824FBAD8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x824fbabc
	goto loc_824FBABC;
loc_824FBAD8:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// rlwimi r9,r11,20,19,26
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1FE0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r11,r9,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwimi r6,r11,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// b 0x824fbb50
	goto loc_824FBB50;
loc_824FBAFC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824fbbb8
	if (ctx.cr6.eq) goto loc_824FBBB8;
	// oris r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 262144;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
loc_824FBB10:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824fbb2c
	if (ctx.cr6.eq) goto loc_824FBB2C;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824fbb2c
	if (!ctx.cr0.eq) goto loc_824FBB2C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x824fbb10
	goto loc_824FBB10;
loc_824FBB2C:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r7,17,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 17) & 0x2;
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r7,r6,0,31,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwimi r8,r11,20,19,26
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1FE0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r7,r7,0,24,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r11,r8,3,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFF00;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// or r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 | ctx.r7.u64;
loc_824FBB50:
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// b 0x824fbbb8
	goto loc_824FBBB8;
loc_824FBB58:
	// rlwinm. r11,r7,0,23,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1E0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824fbb90
	if (!ctx.cr0.eq) goto loc_824FBB90;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824fbbb8
	if (ctx.cr6.eq) goto loc_824FBBB8;
	// li r4,3550
	ctx.r4.s64 = 3550;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824e4368
	ctx.lr = 0x824FBB74;
	sub_824E4368(ctx, base);
loc_824FBB74:
	// rlwinm. r11,r7,0,23,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1E0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824fbb90
	if (!ctx.cr0.eq) goto loc_824FBB90;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824fbbb8
	if (ctx.cr6.eq) goto loc_824FBBB8;
	// li r4,3549
	ctx.r4.s64 = 3549;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824e4368
	ctx.lr = 0x824FBB90;
	sub_824E4368(ctx, base);
loc_824FBB90:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824fbbb8
	if (!ctx.cr6.eq) goto loc_824FBBB8;
	// rlwinm. r11,r7,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824fbbb8
	if (!ctx.cr0.eq) goto loc_824FBBB8;
	// li r4,3596
	ctx.r4.s64 = 3596;
	// lwz r5,-4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + -4);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824e4270
	ctx.lr = 0x824FBBB0;
	sub_824E4270(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_824FBBB8:
	// lwz r11,536(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 536);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824fba34
	if (ctx.cr6.lt) goto loc_824FBA34;
	// b 0x824fb9e8
	goto loc_824FB9E8;
loc_824FBBD0:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_824FBBD4:
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stw r3,772(r22)
	REX_STORE_U32(r22.u32 + 772, ctx.r3.u32);
	// li r10,28
	ctx.r10.s64 = 28;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// std r19,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r19.u64);
	// li r5,28
	ctx.r5.s64 = 28;
	// std r19,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r19.u64);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// std r19,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, r19.u64);
	// stw r19,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r19.u32);
	// stw r10,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stw r21,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, r21.u32);
	// stw r29,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, r29.u32);
	// bl 0x82449708
	ctx.lr = 0x824FBC14;
	sub_82449708(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x824fbc2c
	if (!ctx.cr0.lt) goto loc_824FBC2C;
	// stw r5,2480(r22)
	REX_STORE_U32(r22.u32 + 2480, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824e4368
	ctx.lr = 0x824FBC2C;
	sub_824E4368(ctx, base);
loc_824FBC2C:
	// lwz r31,16(r22)
	r31.u64 = REX_LOAD_U32(r22.u32 + 16);
	// mr r17,r19
	r17.u64 = r19.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824fbc68
	if (ctx.cr6.eq) goto loc_824FBC68;
	// lwz r7,12(r22)
	ctx.r7.u64 = REX_LOAD_U32(r22.u32 + 12);
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
loc_824FBC48:
	// add r3,r7,r9
	ctx.r3.u64 = ctx.r7.u64 + ctx.r9.u64;
	// bl 0x824f7330
	ctx.lr = 0x824FBC50;
	sub_824F7330(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fbc5c
	if (ctx.cr0.eq) goto loc_824FBC5C;
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
loc_824FBC5C:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// bne 0x824fbc48
	if (!ctx.cr0.eq) goto loc_824FBC48;
loc_824FBC68:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r17,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, r17.u32);
	// li r15,-1
	r15.s64 = -1;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// lfd f29,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// beq cr6,0x824fc220
	if (ctx.cr6.eq) goto loc_824FC220;
	// rlwinm r27,r17,2,0,29
	r27.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824f7dc0
	ctx.lr = 0x824FBC94;
	sub_824F7DC0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r18,r19
	r18.u64 = r19.u64;
	// mr r16,r19
	r16.u64 = r19.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824fbd9c
	if (ctx.cr6.eq) goto loc_824FBD9C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r19
	r28.u64 = r19.u64;
	// mr r24,r19
	r24.u64 = r19.u64;
	// mr r23,r31
	r23.u64 = r31.u64;
	// addi r26,r11,-22408
	r26.s64 = ctx.r11.s64 + -22408;
loc_824FBCBC:
	// lwz r11,12(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 12);
	// add r9,r24,r11
	ctx.r9.u64 = r24.u64 + ctx.r11.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x824f7330
	ctx.lr = 0x824FBCCC;
	sub_824F7330(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fbd90
	if (ctx.cr0.eq) goto loc_824FBD90;
	// stwx r9,r28,r25
	REX_STORE_U32(r28.u32 + r25.u32, ctx.r9.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r29,r11,24
	r29.s64 = ctx.r11.s64 + 24;
	// lwz r30,24(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// beq 0x824fbd8c
	if (ctx.cr0.eq) goto loc_824FBD8C;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// beq cr6,0x824fbd8c
	if (ctx.cr6.eq) goto loc_824FBD8C;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_824FBD04:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824fbd04
	if (!ctx.cr6.eq) goto loc_824FBD04;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r11,2
	r31.s64 = ctx.r11.s64 + 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x824f7e68
	ctx.lr = 0x824FBD34;
	sub_824F7E68(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// bl 0x826a1a58
	ctx.lr = 0x824FBD4C;
	sub_826A1A58(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// bne cr6,0x824fbd84
	if (!ctx.cr6.eq) goto loc_824FBD84;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824f7dc0
	ctx.lr = 0x824FBD6C;
	sub_824F7DC0(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824f7dc0
	ctx.lr = 0x824FBD80;
	sub_824F7DC0(ctx, base);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
loc_824FBD84:
	// stwx r30,r28,r18
	REX_STORE_U32(r28.u32 + r18.u32, r30.u32);
	// stwx r29,r28,r16
	REX_STORE_U32(r28.u32 + r16.u32, r29.u32);
loc_824FBD8C:
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
loc_824FBD90:
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// addi r24,r24,40
	r24.s64 = r24.s64 + 40;
	// bne 0x824fbcbc
	if (!ctx.cr0.eq) goto loc_824FBCBC;
loc_824FBD9C:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,29240
	ctx.r6.s64 = ctx.r11.s64 + 29240;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826a0028
	ctx.lr = 0x824FBDB4;
	sub_826A0028(ctx, base);
	// mulli r30,r17,20
	r30.s64 = static_cast<int64_t>(r17.u64 * static_cast<uint64_t>(20));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824f7dc0
	ctx.lr = 0x824FBDC8;
	sub_824F7DC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r3,772(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 772);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82449708
	ctx.lr = 0x824FBDE8;
	sub_82449708(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x824fbe00
	if (!ctx.cr0.lt) goto loc_824FBE00;
	// stw r5,2480(r22)
	REX_STORE_U32(r22.u32 + 2480, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824e4368
	ctx.lr = 0x824FBE00;
	sub_824E4368(ctx, base);
loc_824FBE00:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x824fc1e8
	if (ctx.cr6.eq) goto loc_824FC1E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r21,r31,6
	r21.s64 = r31.s64 + 6;
	// lfs f30,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f30.f64 = double(temp.f32);
	// lfs f31,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	f31.f64 = double(temp.f32);
loc_824FBE1C:
	// lwz r28,0(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r20,r21,-6
	r20.s64 = r21.s64 + -6;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f7330
	ctx.lr = 0x824FBE2C;
	sub_824F7330(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fc1c8
	if (ctx.cr0.eq) goto loc_824FC1C8;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824fbe4c
	if (ctx.cr6.eq) goto loc_824FBE4C;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824fc254
	if (!ctx.cr6.eq) goto loc_824FC254;
loc_824FBE4C:
	// lwz r11,12(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 12);
	// li r10,40
	ctx.r10.s64 = 40;
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// subf r11,r11,r28
	ctx.r11.u64 = r28.u64 - ctx.r11.u64;
	// rlwinm r30,r9,29,18,31
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x3FFF;
	// divw r4,r11,r10
	ctx.r4.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// bl 0x8257f6f8
	ctx.lr = 0x824FBE6C;
	sub_8257F6F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// lwz r3,772(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 772);
	// li r6,7
	ctx.r6.s64 = 7;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x82449708
	ctx.lr = 0x824FBE88;
	sub_82449708(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt 0x824fc268
	if (ctx.cr0.lt) goto loc_824FC268;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,12,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1FF;
	// sth r11,0(r21)
	REX_STORE_U16(r21.u32 + 0, ctx.r11.u16);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm r11,r11,25,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FF;
	// sth r11,2(r21)
	REX_STORE_U16(r21.u32 + 2, ctx.r11.u16);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// sth r11,-2(r21)
	REX_STORE_U16(r21.u32 + -2, ctx.r11.u16);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x824fbf08
	if (ctx.cr6.lt) goto loc_824FBF08;
	// beq cr6,0x824fbee8
	if (ctx.cr6.eq) goto loc_824FBEE8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x824fbf28
	if (ctx.cr6.lt) goto loc_824FBF28;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bne cr6,0x824fc278
	if (!ctx.cr6.eq) goto loc_824FC278;
	// bl 0x824f7120
	ctx.lr = 0x824FBEDC;
	sub_824F7120(ctx, base);
	// lhz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 0);
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// b 0x824fbf24
	goto loc_824FBF24;
loc_824FBEE8:
	// lwz r11,48(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r14.u32, ctx.xer);
	// bne cr6,0x824fbf28
	if (!ctx.cr6.eq) goto loc_824FBF28;
	// lhz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 0);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// b 0x824fbf24
	goto loc_824FBF24;
loc_824FBF08:
	// lwz r11,48(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r14.u32, ctx.xer);
	// bne cr6,0x824fbf28
	if (!ctx.cr6.eq) goto loc_824FBF28;
	// lhz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 0);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
loc_824FBF24:
	// sth r11,0(r21)
	REX_STORE_U16(r21.u32 + 0, ctx.r11.u16);
loc_824FBF28:
	// addi r7,r21,6
	ctx.r7.s64 = r21.s64 + 6;
	// lwz r4,20(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,772(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 772);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8246cb48
	ctx.lr = 0x824FBF40;
	sub_8246CB48(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt 0x824fc280
	if (ctx.cr0.lt) goto loc_824FC280;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x824fc1c8
	if (ctx.cr6.eq) goto loc_824FC1C8;
	// lwz r24,16(r28)
	r24.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x824fc1c8
	if (ctx.cr6.eq) goto loc_824FC1C8;
	// lwz r11,76(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824fbf7c
	if (!ctx.cr6.eq) goto loc_824FBF7C;
	// lwz r11,56(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824fc1c8
	if (ctx.cr6.eq) goto loc_824FC1C8;
loc_824FBF7C:
	// lhz r11,2(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 2);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r27,r11,0,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r23,r27,2,0,29
	r23.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x824f7dc0
	ctx.lr = 0x824FBFA0;
	sub_824F7DC0(ctx, base);
	// lwz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 28);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,56(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 56);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r31,0
	r31.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r11,-8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// rlwinm r11,r11,28,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// divwu r30,r30,r11
	r30.u64 = uint32_t(ctx.r11.u32 ? r30.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// beq cr6,0x824fbfe4
	if (ctx.cr6.eq) goto loc_824FBFE4;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8257e8f0
	ctx.lr = 0x824FBFE0;
	sub_8257E8F0(ctx, base);
	// lwz r26,32(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
loc_824FBFE4:
	// lwz r11,56(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824fc010
	if (ctx.cr6.eq) goto loc_824FC010;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x824fc170
	if (ctx.cr6.eq) goto loc_824FC170;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r4,8(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 8);
	// bl 0x8257e9d0
	ctx.lr = 0x824FC004;
	sub_8257E9D0(ctx, base);
	// lwz r26,12(r26)
	r26.u64 = REX_LOAD_U32(r26.u32 + 12);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// b 0x824fc028
	goto loc_824FC028;
loc_824FC010:
	// lwz r11,76(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 76);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824fc170
	if (!ctx.cr6.lt) goto loc_824FC170;
	// lwz r11,80(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 80);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_824FC028:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824fc14c
	if (ctx.cr6.eq) goto loc_824FC14C;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(r31.u32, r27.u32, ctx.xer);
	// bge cr6,0x824fc170
	if (!ctx.cr6.lt) goto loc_824FC170;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm r10,r10,28,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x7;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x824fc104
	if (ctx.cr6.lt) goto loc_824FC104;
	// beq cr6,0x824fc0cc
	if (ctx.cr6.eq) goto loc_824FC0CC;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x824fc2a0
	if (!ctx.cr6.lt) goto loc_824FC2A0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x824fc0a8
	if (ctx.cr6.lt) goto loc_824FC0A8;
	// beq cr6,0x824fc088
	if (ctx.cr6.eq) goto loc_824FC088;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x824fc078
	if (ctx.cr6.lt) goto loc_824FC078;
	// bne cr6,0x824fc2ac
	if (!ctx.cr6.eq) goto loc_824FC2AC;
	// lfd f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// b 0x824fc098
	goto loc_824FC098;
loc_824FC078:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// b 0x824fc094
	goto loc_824FC094;
loc_824FC088:
	// lwa r11,8(r11)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + 8));
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
loc_824FC094:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
loc_824FC098:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsx f0,r10,r29
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + r29.u32, temp.u32);
	// b 0x824fc14c
	goto loc_824FC14C;
loc_824FC0A8:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824fc0bc
	if (ctx.cr6.eq) goto loc_824FC0BC;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64;
	// b 0x824fc0c0
	goto loc_824FC0C0;
loc_824FC0BC:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f30.f64;
loc_824FC0C0:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r11,r29
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + r29.u32, temp.u32);
	// b 0x824fc14c
	goto loc_824FC14C;
loc_824FC0CC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x824fc138
	if (ctx.cr6.lt) goto loc_824FC138;
	// beq cr6,0x824fc0fc
	if (ctx.cr6.eq) goto loc_824FC0FC;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x824fc0fc
	if (ctx.cr6.lt) goto loc_824FC0FC;
	// bne cr6,0x824fc2b8
	if (!ctx.cr6.eq) goto loc_824FC2B8;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, ctx.f0.u32);
	// b 0x824fc14c
	goto loc_824FC14C;
loc_824FC0FC:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x824fc144
	goto loc_824FC144;
loc_824FC104:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x824fc138
	if (ctx.cr6.lt) goto loc_824FC138;
	// beq cr6,0x824fc138
	if (ctx.cr6.eq) goto loc_824FC138;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x824fc138
	if (ctx.cr6.lt) goto loc_824FC138;
	// bne cr6,0x824fc2c4
	if (!ctx.cr6.eq) goto loc_824FC2C4;
	// lfd f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bne cr6,0x824fc144
	if (!ctx.cr6.eq) goto loc_824FC144;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x824fc144
	goto loc_824FC144;
loc_824FC138:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_824FC144:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r11.u32);
loc_824FC14C:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r31,r30
	ctx.r11.u64 = uint32_t(r30.u32 ? r31.u32 / r30.u32 : 0);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// subf. r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824fbfe4
	if (!ctx.cr0.eq) goto loc_824FBFE4;
	// addi r11,r31,3
	ctx.r11.s64 = r31.s64 + 3;
	// rlwinm r31,r11,0,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x824fbfe4
	goto loc_824FBFE4;
loc_824FC170:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x824fc1a4
	if (!ctx.cr6.eq) goto loc_824FC1A4;
	// rlwinm. r9,r27,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x824fc1a4
	if (ctx.cr0.eq) goto loc_824FC1A4;
	// addi r10,r29,-8
	ctx.r10.s64 = r29.s64 + -8;
loc_824FC190:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stwu r8,16(r10)
	ea = 16 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// blt cr6,0x824fc190
	if (ctx.cr6.lt) goto loc_824FC190;
loc_824FC1A4:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,772(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 772);
	// addi r7,r20,16
	ctx.r7.s64 = r20.s64 + 16;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82449708
	ctx.lr = 0x824FC1C0;
	sub_82449708(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt 0x824fc290
	if (ctx.cr0.lt) goto loc_824FC290;
loc_824FC1C8:
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// addi r21,r21,20
	r21.s64 = r21.s64 + 20;
	// cmplw cr6,r19,r17
	ctx.cr6.compare<uint32_t>(r19.u32, r17.u32, ctx.xer);
	// blt cr6,0x824fbe1c
	if (ctx.cr6.lt) goto loc_824FBE1C;
	// lwz r20,92(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r19,0
	r19.s64 = 0;
	// lwz r21,444(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
loc_824FC1E8:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x824fc220
	if (ctx.cr6.eq) goto loc_824FC220;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x824fc220
	if (ctx.cr6.eq) goto loc_824FC220;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// mtctr r17
	ctx.ctr.u64 = r17.u64;
	// subf r9,r18,r16
	ctx.r9.u64 = r16.u64 - r18.u64;
loc_824FC204:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824fc218
	if (ctx.cr6.eq) goto loc_824FC218;
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
loc_824FC218:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824fc204
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824FC204;
loc_824FC220:
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// std r19,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r19.u64);
	// stw r19,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r19.u32);
	// bl 0x823ff340
	ctx.lr = 0x824FC23C;
	sub_823FF340(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x824fc2d0
	if (!ctx.cr0.lt) goto loc_824FC2D0;
	// stw r5,2480(r22)
	REX_STORE_U32(r22.u32 + 2480, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824e4368
	ctx.lr = 0x824FC254;
	sub_824E4368(ctx, base);
loc_824FC254:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,-22220
	ctx.r5.s64 = ctx.r11.s64 + -22220;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824e4368
	ctx.lr = 0x824FC268;
	sub_824E4368(ctx, base);
loc_824FC268:
	// stw r5,2480(r22)
	REX_STORE_U32(r22.u32 + 2480, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824e4368
	ctx.lr = 0x824FC278;
	sub_824E4368(ctx, base);
loc_824FC278:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x824e4368
	ctx.lr = 0x824FC280;
	sub_824E4368(ctx, base);
loc_824FC280:
	// stw r5,2480(r22)
	REX_STORE_U32(r22.u32 + 2480, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824e4368
	ctx.lr = 0x824FC290;
	sub_824E4368(ctx, base);
loc_824FC290:
	// stw r5,2480(r22)
	REX_STORE_U32(r22.u32 + 2480, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824e4368
	ctx.lr = 0x824FC2A0;
	sub_824E4368(ctx, base);
loc_824FC2A0:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824e4368
	ctx.lr = 0x824FC2AC;
	sub_824E4368(ctx, base);
loc_824FC2AC:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824e4368
	ctx.lr = 0x824FC2B8;
	sub_824E4368(ctx, base);
loc_824FC2B8:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824e4368
	ctx.lr = 0x824FC2C4;
	sub_824E4368(ctx, base);
loc_824FC2C4:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824e4368
	ctx.lr = 0x824FC2D0;
	sub_824E4368(ctx, base);
loc_824FC2D0:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,772(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 772);
	// addi r7,r1,232
	ctx.r7.s64 = ctx.r1.s64 + 232;
	// lwz r4,120(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// bl 0x82449708
	ctx.lr = 0x824FC2EC;
	sub_82449708(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x824fc304
	if (!ctx.cr0.lt) goto loc_824FC304;
	// stw r5,2480(r22)
	REX_STORE_U32(r22.u32 + 2480, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824e4368
	ctx.lr = 0x824FC304;
	sub_824E4368(ctx, base);
loc_824FC304:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,772(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 772);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,-22232
	ctx.r4.s64 = ctx.r11.s64 + -22232;
	// addi r7,r1,212
	ctx.r7.s64 = ctx.r1.s64 + 212;
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// bl 0x82449708
	ctx.lr = 0x824FC324;
	sub_82449708(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x824fc33c
	if (!ctx.cr0.lt) goto loc_824FC33C;
	// stw r5,2480(r22)
	REX_STORE_U32(r22.u32 + 2480, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824e4368
	ctx.lr = 0x824FC33C;
	sub_824E4368(ctx, base);
loc_824FC33C:
	// lwz r3,772(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 772);
	// bl 0x82449678
	ctx.lr = 0x824FC344;
	sub_82449678(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,32768
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32768, ctx.xer);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// ble cr6,0x824fc35c
	if (!ctx.cr6.gt) goto loc_824FC35C;
	// li r4,4548
	ctx.r4.s64 = 4548;
	// bl 0x824e4368
	ctx.lr = 0x824FC35C;
	sub_824E4368(ctx, base);
loc_824FC35C:
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r31,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824f7dc0
	ctx.lr = 0x824FC368;
	sub_824F7DC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,772(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 772);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824499e8
	ctx.lr = 0x824FC380;
	sub_824499E8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x824fc398
	if (!ctx.cr0.lt) goto loc_824FC398;
	// stw r5,2480(r22)
	REX_STORE_U32(r22.u32 + 2480, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824e4368
	ctx.lr = 0x824FC398;
	sub_824E4368(ctx, base);
loc_824FC398:
	// addi r11,r31,-2
	ctx.r11.s64 = r31.s64 + -2;
	// lwz r3,768(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 768);
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x822cda80
	ctx.lr = 0x824FC3B4;
	sub_822CDA80(ctx, base);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x824fc3cc
	if (ctx.cr6.eq) goto loc_824FC3CC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x824da028
	ctx.lr = 0x824FC3CC;
	sub_824DA028(ctx, base);
loc_824FC3CC:
	// lwz r11,40(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 40);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fc58c
	if (ctx.cr0.eq) goto loc_824FC58C;
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fc514
	if (!ctx.cr0.eq) goto loc_824FC514;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824fc514
	if (ctx.cr0.eq) goto loc_824FC514;
loc_824FC3F0:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fc4f8
	if (!ctx.cr0.eq) goto loc_824FC4F8;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824fc4f8
	if (ctx.cr0.eq) goto loc_824FC4F8;
loc_824FC408:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 25, ctx.xer);
	// blt cr6,0x824fc420
	if (ctx.cr6.lt) goto loc_824FC420;
	// cmplwi cr6,r10,28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 28, ctx.xer);
	// ble cr6,0x824fc430
	if (!ctx.cr6.gt) goto loc_824FC430;
loc_824FC420:
	// cmplwi cr6,r10,67
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 67, ctx.xer);
	// blt cr6,0x824fc438
	if (ctx.cr6.lt) goto loc_824FC438;
	// cmplwi cr6,r10,71
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 71, ctx.xer);
	// bgt cr6,0x824fc438
	if (ctx.cr6.gt) goto loc_824FC438;
loc_824FC430:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824fc43c
	goto loc_824FC43C;
loc_824FC438:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_824FC43C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fc4dc
	if (ctx.cr0.eq) goto loc_824FC4DC;
	// cmplwi cr6,r10,26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 26, ctx.xer);
	// bne cr6,0x824fc490
	if (!ctx.cr6.eq) goto loc_824FC490;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x824f8b38
	ctx.lr = 0x824FC458;
	sub_824F8B38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fc490
	if (ctx.cr0.eq) goto loc_824FC490;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x824fc484
	if (ctx.cr6.eq) goto loc_824FC484;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// bne cr6,0x824fc488
	if (!ctx.cr6.eq) goto loc_824FC488;
loc_824FC484:
	// li r11,1
	ctx.r11.s64 = 1;
loc_824FC488:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fc4dc
	if (ctx.cr0.eq) goto loc_824FC4DC;
loc_824FC490:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,8704
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8704, ctx.xer);
	// bne cr6,0x824fc4d0
	if (!ctx.cr6.eq) goto loc_824FC4D0;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x824fc4c4
	if (ctx.cr6.eq) goto loc_824FC4C4;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// bne cr6,0x824fc4c8
	if (!ctx.cr6.eq) goto loc_824FC4C8;
loc_824FC4C4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_824FC4C8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fc4dc
	if (ctx.cr0.eq) goto loc_824FC4DC;
loc_824FC4D0:
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r11,68(r30)
	REX_STORE_U32(r30.u32 + 68, ctx.r11.u32);
loc_824FC4DC:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fc4f8
	if (!ctx.cr0.eq) goto loc_824FC4F8;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824fc408
	if (!ctx.cr6.eq) goto loc_824FC408;
loc_824FC4F8:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fc514
	if (!ctx.cr0.eq) goto loc_824FC514;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824fc3f0
	if (!ctx.cr6.eq) goto loc_824FC3F0;
loc_824FC514:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
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
	// b 0x824fc56c
	goto loc_824FC56C;
loc_824FC530:
	// lwz r9,68(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm. r10,r9,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fc56c
	if (!ctx.cr0.eq) goto loc_824FC56C;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_824FC540:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824fc560
	if (ctx.cr6.eq) goto loc_824FC560;
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,68(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 68);
	// rlwinm. r7,r7,0,3,3
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x824fc56c
	if (ctx.cr0.eq) goto loc_824FC56C;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x824fc540
	goto loc_824FC540;
loc_824FC560:
	// oris r10,r9,4096
	ctx.r10.u64 = ctx.r9.u64 | 268435456;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
loc_824FC56C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fc584
	if (!ctx.cr0.eq) goto loc_824FC584;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824fc530
	if (!ctx.cr6.eq) goto loc_824FC530;
loc_824FC584:
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824fc514
	if (!ctx.cr0.eq) goto loc_824FC514;
loc_824FC58C:
	// lwz r11,736(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 736);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,760(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 760);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// stw r10,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// stw r8,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r20,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r20.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r11,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stw r9,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x824f8ea0
	ctx.lr = 0x824FC5D4;
	sub_824F8EA0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x824fc5f8
	if (ctx.cr6.eq) goto loc_824FC5F8;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x824dcb20
	ctx.lr = 0x824FC5EC;
	sub_824DCB20(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// lwz r3,768(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 768);
	// bl 0x822cd848
	ctx.lr = 0x824FC5F8;
	sub_822CD848(ctx, base);
loc_824FC5F8:
	// lwz r11,44(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 44);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824fc610
	if (ctx.cr0.eq) goto loc_824FC610;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x824fc614
	if (ctx.cr0.eq) goto loc_824FC614;
loc_824FC610:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_824FC614:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fc630
	if (ctx.cr0.eq) goto loc_824FC630;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824f8ea0
	ctx.lr = 0x824FC630;
	sub_824F8EA0(ctx, base);
loc_824FC630:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x824fc664
	if (ctx.cr6.eq) goto loc_824FC664;
	// lwz r11,56(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 56);
	// lwz r3,768(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 768);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822cdcc0
	ctx.lr = 0x824FC64C;
	sub_822CDCC0(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x824dcb20
	ctx.lr = 0x824FC658;
	sub_824DCB20(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// lwz r3,768(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 768);
	// bl 0x822cd848
	ctx.lr = 0x824FC664;
	sub_822CD848(ctx, base);
loc_824FC664:
	// lwz r3,768(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 768);
	// bl 0x822cdf90
	ctx.lr = 0x824FC66C;
	sub_822CDF90(ctx, base);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x824fc68c
	if (ctx.cr6.eq) goto loc_824FC68C;
	// lwz r3,768(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 768);
	// bl 0x822cdda0
	ctx.lr = 0x824FC67C;
	sub_822CDDA0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// rlwinm r4,r11,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x824d7fb8
	ctx.lr = 0x824FC68C;
	sub_824D7FB8(ctx, base);
loc_824FC68C:
	// lwz r3,768(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 768);
	// bl 0x822cdfe8
	ctx.lr = 0x824FC694;
	sub_822CDFE8(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82400740
	ctx.lr = 0x824FC69C;
	sub_82400740(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x824fc6b4
	if (!ctx.cr0.lt) goto loc_824FC6B4;
	// stw r5,2480(r22)
	REX_STORE_U32(r22.u32 + 2480, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824e4368
	ctx.lr = 0x824FC6B4;
	sub_824E4368(ctx, base);
loc_824FC6B4:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824FC6C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
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
	ctx.lr = 0x824FC6E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x826a2e60
	ctx.lr = 0x824FC6F0;
	sub_826A2E60(ctx, base);
	// stw r19,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r19.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824FC708;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
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
	ctx.lr = 0x824FC724;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,768(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 768);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822ce078
	ctx.lr = 0x824FC73C;
	sub_822CE078(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,768(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 768);
	// bl 0x822cd730
	ctx.lr = 0x824FC748;
	sub_822CD730(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r19,768(r22)
	REX_STORE_U32(r22.u32 + 768, r19.u32);
	// blt cr6,0x824fc7c8
	if (ctx.cr6.lt) goto loc_824FC7C8;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x824fc780
	if (ctx.cr6.eq) goto loc_824FC780;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824FC770;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r5,r11,-13424
	ctx.r5.s64 = ctx.r11.s64 + -13424;
	// bl 0x822cee40
	ctx.lr = 0x824FC780;
	sub_822CEE40(ctx, base);
loc_824FC780:
	// lwz r30,468(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824fc7c8
	if (ctx.cr6.eq) goto loc_824FC7C8;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824FC7A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823ffeb8
	ctx.lr = 0x824FC7A8;
	sub_823FFEB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x824fc7c8
	if (!ctx.cr0.lt) goto loc_824FC7C8;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824FC7C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r19.u32);
loc_824FC7C8:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// lwz r10,460(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bge cr6,0x824fc7f0
	if (!ctx.cr6.lt) goto loc_824FC7F0;
	// stw r31,2480(r22)
	REX_STORE_U32(r22.u32 + 2480, r31.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824e4368
	ctx.lr = 0x824FC7F0;
	sub_824E4368(ctx, base);
loc_824FC7F0:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_825A62A0) {
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
	ctx.lr = 0x825A62A8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// lwz r28,28(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r6,12(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x825d4b90
	ctx.lr = 0x825A62E8;
	sub_825D4B90(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,12(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,20(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 20);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x825d4520
	ctx.lr = 0x825A6304;
	sub_825D4520(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,12(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,20(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 20);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825d47c0
	ctx.lr = 0x825A6324;
	sub_825D47C0(ctx, base);
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 28);
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r3,16(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 16);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x825b6ea8
	ctx.lr = 0x825A6344;
	sub_825B6EA8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r24,r11,22852
	r24.s64 = ctx.r11.s64 + 22852;
	// addi r23,r10,-8552
	r23.s64 = ctx.r10.s64 + -8552;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825a637c
	if (ctx.cr6.eq) goto loc_825A637C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r5,r11,-8388
	ctx.r5.s64 = ctx.r11.s64 + -8388;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,1272
	ctx.r7.s64 = 1272;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A637C;
	sub_824EA978(ctx, base);
loc_825A637C:
	// rlwimi r30,r31,7,19,24
	r30.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 7) & 0x1F80) | (r30.u64 & 0xFFFFFFFFFFFFE07F);
	// lwz r31,12024(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 12024);
	// clrlwi r11,r29,30
	ctx.r11.u64 = r29.u32 & 0x3;
	// rlwinm r10,r30,14,5,17
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 14) & 0x7FFC000;
	// li r26,3
	r26.s64 = 3;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
	// rlwinm r9,r9,0,20,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFC;
	// rlwinm r8,r8,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r8,r8,0,24,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwimi r10,r11,7,20,24
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xF80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF07F);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwimi r11,r10,5,25,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x60) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF9F);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stb r11,8(r31)
	REX_STORE_U8(r31.u32 + 8, ctx.r11.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,144(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// rlwimi r10,r26,2,27,29
	ctx.r10.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0x1C) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE3);
	// rlwimi r11,r9,1,8,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFE) | (ctx.r11.u64 & 0xFFFFFFFFFF000001);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r27,r11,-8408
	r27.s64 = ctx.r11.s64 + -8408;
loc_825A6424:
	// lbzx r10,r29,r9
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// beq cr6,0x825a64c8
	if (ctx.cr6.eq) goto loc_825A64C8;
	// cmplwi cr6,r10,49
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 49, ctx.xer);
	// beq cr6,0x825a64c0
	if (ctx.cr6.eq) goto loc_825A64C0;
	// cmplwi cr6,r10,95
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 95, ctx.xer);
	// beq cr6,0x825a64b8
	if (ctx.cr6.eq) goto loc_825A64B8;
	// cmplwi cr6,r10,119
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 119, ctx.xer);
	// beq cr6,0x825a64b0
	if (ctx.cr6.eq) goto loc_825A64B0;
	// cmplwi cr6,r10,120
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 120, ctx.xer);
	// beq cr6,0x825a64a8
	if (ctx.cr6.eq) goto loc_825A64A8;
	// cmplwi cr6,r10,121
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 121, ctx.xer);
	// beq cr6,0x825a64a0
	if (ctx.cr6.eq) goto loc_825A64A0;
	// cmplwi cr6,r10,122
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 122, ctx.xer);
	// beq cr6,0x825a6498
	if (ctx.cr6.eq) goto loc_825A6498;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x825a648c
	if (!ctx.cr6.gt) goto loc_825A648C;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,1324
	ctx.r7.s64 = 1324;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A6488;
	sub_824EA978(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_825A648C:
	// lbzx r11,r29,r9
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + ctx.r9.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x825a64cc
	goto loc_825A64CC;
loc_825A6498:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x825a64cc
	goto loc_825A64CC;
loc_825A64A0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x825a64cc
	goto loc_825A64CC;
loc_825A64A8:
	// stw r25,0(r30)
	REX_STORE_U32(r30.u32 + 0, r25.u32);
	// b 0x825a64d0
	goto loc_825A64D0;
loc_825A64B0:
	// stw r26,0(r30)
	REX_STORE_U32(r30.u32 + 0, r26.u32);
	// b 0x825a64d0
	goto loc_825A64D0;
loc_825A64B8:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x825a64cc
	goto loc_825A64CC;
loc_825A64C0:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x825a64cc
	goto loc_825A64CC;
loc_825A64C8:
	// li r11,4
	ctx.r11.s64 = 4;
loc_825A64CC:
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_825A64D0:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(r29.u32, 4, ctx.xer);
	// blt cr6,0x825a6424
	if (ctx.cr6.lt) goto loc_825A6424;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r11,r10,3,26,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x38) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC7);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// clrlwi r9,r9,12
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFFF;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r8,r8,29,0,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0xE0000000;
	// rlwimi r10,r11,3,0,28
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8) | (ctx.r10.u64 & 0xFFFFFFFF00000007);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r10,r10,20,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFF00000;
	// rlwinm r11,r9,0,12,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFE00FFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// rlwimi r10,r11,19,12,12
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x80000) | (ctx.r10.u64 & 0xFFFFFFFFFFF7FFFF);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// rlwimi r10,r11,18,13,13
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x40000) | (ctx.r10.u64 & 0xFFFFFFFFFFFBFFFF);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// rlwimi r10,r11,10,16,21
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFC00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF03FF);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r11,10820(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 10820);
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x825a656c
	if (!ctx.cr6.gt) goto loc_825A656C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r5,r11,-8456
	ctx.r5.s64 = ctx.r11.s64 + -8456;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,1338
	ctx.r7.s64 = 1338;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A656C;
	sub_824EA978(ctx, base);
loc_825A656C:
	// lwz r11,12024(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12024);
	// lwz r10,10820(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 10820);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,12024(r28)
	REX_STORE_U32(r28.u32 + 12024, ctx.r11.u32);
	// stw r10,10820(r28)
	REX_STORE_U32(r28.u32 + 10820, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_825B81B8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,240(r1)
	REX_STORE_U64(ctx.r1.u32 + 240, ctx.r4.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// std r5,248(r1)
	REX_STORE_U64(ctx.r1.u32 + 248, ctx.r5.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,536(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 536);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825b8220
	if (ctx.cr6.eq) goto loc_825B8220;
	// lwz r3,244(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// addi r11,r31,348
	ctx.r11.s64 = r31.s64 + 348;
	// clrlwi r4,r3,27
	ctx.r4.u64 = ctx.r3.u32 & 0x1F;
loc_825B81F4:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r30,r10,27
	r30.u64 = ctx.r10.u32 & 0x1F;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x825b8210
	if (!ctx.cr6.eq) goto loc_825B8210;
	// xor r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r3.u64;
	// rlwinm. r10,r10,0,23,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1E0;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825b823c
	if (ctx.cr0.eq) goto loc_825B823C;
loc_825B8210:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x825b81f4
	if (ctx.cr6.lt) goto loc_825B81F4;
loc_825B8220:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B8224:
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
loc_825B823C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x825b8278
	if (ctx.cr6.eq) goto loc_825B8278;
	// lwz r11,28(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,100
	ctx.r5.s64 = 100;
	// lwz r6,8(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r7,r11,5,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xF;
	// bl 0x825b7e00
	ctx.lr = 0x825B8268;
	sub_825B7E00(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3513
	ctx.r4.s64 = 3513;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x825B8278;
	sub_824E4368(ctx, base);
loc_825B8278:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825b8224
	goto loc_825B8224;
}

DEFINE_REX_FUNC(sub_825BBE98) {
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
	ctx.lr = 0x825BBEA0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r4.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r28,212(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// clrlwi r25,r28,27
	r25.u64 = r28.u32 & 0x1F;
	// std r5,216(r1)
	REX_STORE_U64(ctx.r1.u32 + 216, ctx.r5.u64);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// li r22,1
	r22.s64 = 1;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// rlwinm r24,r28,27,28,31
	r24.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 27) & 0xF;
	// mr r27,r25
	r27.u64 = r25.u64;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r25,16
	ctx.cr6.compare<uint32_t>(r25.u32, 16, ctx.xer);
	// beq cr6,0x825bbefc
	if (ctx.cr6.eq) goto loc_825BBEFC;
	// cmplwi cr6,r25,14
	ctx.cr6.compare<uint32_t>(r25.u32, 14, ctx.xer);
	// beq cr6,0x825bbefc
	if (ctx.cr6.eq) goto loc_825BBEFC;
	// cmplwi cr6,r25,15
	ctx.cr6.compare<uint32_t>(r25.u32, 15, ctx.xer);
	// beq cr6,0x825bbefc
	if (ctx.cr6.eq) goto loc_825BBEFC;
	// cmplwi cr6,r25,18
	ctx.cr6.compare<uint32_t>(r25.u32, 18, ctx.xer);
	// beq cr6,0x825bbefc
	if (ctx.cr6.eq) goto loc_825BBEFC;
	// li r27,16
	r27.s64 = 16;
	// mr r29,r22
	r29.u64 = r22.u64;
	// mr r26,r22
	r26.u64 = r22.u64;
loc_825BBEFC:
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(r29.u32, 4, ctx.xer);
	// ble cr6,0x825bbf10
	if (!ctx.cr6.gt) goto loc_825BBF10;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x825BBF10;
	sub_824E4368(ctx, base);
loc_825BBF10:
	// lwz r10,536(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 536);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x825bbf98
	if (!ctx.cr6.gt) goto loc_825BBF98;
	// addi r10,r31,348
	ctx.r10.s64 = r31.s64 + 348;
loc_825BBF24:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825bbf4c
	if (ctx.cr6.eq) goto loc_825BBF4C;
	// lwz r9,536(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 536);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x825bbf24
	if (ctx.cr6.lt) goto loc_825BBF24;
	// b 0x825bbf98
	goto loc_825BBF98;
loc_825BBF4C:
	// addi r10,r11,29
	ctx.r10.s64 = ctx.r11.s64 + 29;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// rlwinm. r9,r9,0,12,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r30,352(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 352);
	// beq 0x825bbf90
	if (ctx.cr0.eq) goto loc_825BBF90;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r9,r11,18,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x825bbf90
	if (!ctx.cr6.gt) goto loc_825BBF90;
	// rlwimi r11,r29,14,15,17
	ctx.r11.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 14) & 0x1C000) | (ctx.r11.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwzx r11,r10,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// rlwinm r11,r11,0,13,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// stwx r11,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r11.u32);
loc_825BBF90:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x825bc15c
	if (!ctx.cr6.eq) goto loc_825BC15C;
loc_825BBF98:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,113
	ctx.r4.s64 = 113;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f71b8
	ctx.lr = 0x825BBFAC;
	sub_824F71B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,35
	ctx.r5.s64 = 35;
	// bl 0x824ff930
	ctx.lr = 0x825BBFBC;
	sub_824FF930(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r6,113
	ctx.r6.s64 = 113;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// and r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 & ctx.r11.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb1e0
	ctx.lr = 0x825BBFE8;
	sub_825BB1E0(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// oris r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 8388608;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
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
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// addi r8,r8,-36
	ctx.r8.s64 = ctx.r8.s64 + -36;
	// lwz r6,16(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
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
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
	// andi. r9,r11,34952
	ctx.r9.u64 = ctx.r11.u64 & 34952;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r9,34952
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 34952, ctx.xer);
	// beq cr6,0x825bc064
	if (ctx.cr6.eq) goto loc_825BC064;
	// ori r11,r11,34952
	ctx.r11.u64 = ctx.r11.u64 | 34952;
	// sth r11,14(r30)
	REX_STORE_U16(r30.u32 + 14, ctx.r11.u16);
loc_825BC064:
	// lwz r11,536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 536);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x825bc07c
	if (!ctx.cr6.eq) goto loc_825BC07C;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x825BC07C;
	sub_824E4368(ctx, base);
loc_825BC07C:
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(r27.u32, r25.u32, ctx.xer);
	// bne cr6,0x825bc098
	if (!ctx.cr6.eq) goto loc_825BC098;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x825bc098
	if (ctx.cr6.eq) goto loc_825BC098;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x825BC098;
	sub_824E4368(ctx, base);
loc_825BC098:
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// clrlwi r9,r26,24
	ctx.r9.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r27,16
	ctx.cr6.compare<uint32_t>(r27.u32, 16, ctx.xer);
	// stw r30,352(r11)
	REX_STORE_U32(ctx.r11.u32 + 352, r30.u32);
	// slw r11,r22,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (r22.u32 << (r29.u8 & 0x3F));
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 536);
	// addi r11,r11,29
	ctx.r11.s64 = ctx.r11.s64 + 29;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// rlwimi r8,r27,0,27,31
	ctx.r8.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x1F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE0);
	// stwx r8,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r8.u32);
	// lwz r11,536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 536);
	// addi r11,r11,29
	ctx.r11.s64 = ctx.r11.s64 + 29;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// rlwinm r8,r8,0,27,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFE1F;
	// stwx r8,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r8.u32);
	// lwz r11,536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 536);
	// addi r11,r11,29
	ctx.r11.s64 = ctx.r11.s64 + 29;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// rlwimi r8,r10,9,19,22
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1E00) | (ctx.r8.u64 & 0xFFFFFFFFFFFFE1FF);
	// stwx r8,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r8.u32);
	// lwz r11,536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 536);
	// addi r11,r11,29
	ctx.r11.s64 = ctx.r11.s64 + 29;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// rlwimi r28,r10,0,19,17
	r28.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF) | (r28.u64 & 0x2000);
	// stwx r28,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r28.u32);
	// lwz r11,536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 536);
	// addi r11,r11,29
	ctx.r11.s64 = ctx.r11.s64 + 29;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// rlwimi r10,r9,19,12,12
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x80000) | (ctx.r10.u64 & 0xFFFFFFFFFFF7FFFF);
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r10.u32);
	// lwz r11,536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 536);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// bne cr6,0x825bc148
	if (!ctx.cr6.eq) goto loc_825BC148;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r10,r10,-20944
	ctx.r10.s64 = ctx.r10.s64 + -20944;
	// b 0x825bc14c
	goto loc_825BC14C;
loc_825BC148:
	// lwz r10,208(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
loc_825BC14C:
	// stw r10,344(r11)
	REX_STORE_U32(ctx.r11.u32 + 344, ctx.r10.u32);
	// lwz r11,536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 536);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,536(r31)
	REX_STORE_U32(r31.u32 + 536, ctx.r11.u32);
loc_825BC15C:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825bc17c
	if (!ctx.cr0.eq) goto loc_825BC17C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825bc268
	if (ctx.cr6.eq) goto loc_825BC268;
	// stw r22,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r22.u32);
	// b 0x825bc268
	goto loc_825BC268;
loc_825BC17C:
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f71b8
	ctx.lr = 0x825BC190;
	sub_824F71B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,35
	ctx.r5.s64 = 35;
	// bl 0x824ff930
	ctx.lr = 0x825BC1A0;
	sub_824FF930(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r6,96
	ctx.r6.s64 = 96;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// and r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 & ctx.r11.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825bb1e0
	ctx.lr = 0x825BC1CC;
	sub_825BB1E0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x825BC1E4;
	sub_824F71B8(ctx, base);
	// addi r11,r29,-20
	ctx.r11.s64 = r29.s64 + -20;
	// rlwimi r24,r25,4,0,27
	r24.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 4) & 0xFFFFFFF0) | (r24.u64 & 0xFFFFFFFF0000000F);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stb r24,15(r11)
	REX_STORE_U8(ctx.r11.u32 + 15, r24.u8);
	// oris r10,r9,8
	ctx.r10.u64 = ctx.r9.u64 | 524288;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x8250ab60
	ctx.lr = 0x825BC20C;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825BC218;
	sub_8250AD28(ctx, base);
	// stw r3,44(r29)
	REX_STORE_U32(r29.u32 + 44, ctx.r3.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// addi r8,r10,24
	ctx.r8.s64 = ctx.r10.s64 + 24;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r8,-36
	ctx.r8.s64 = ctx.r8.s64 + -36;
	// lwz r6,24(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// lwz r6,24(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r9,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
loc_825BC268:
	// cmplwi cr6,r25,14
	ctx.cr6.compare<uint32_t>(r25.u32, 14, ctx.xer);
	// beq cr6,0x825bc2c0
	if (ctx.cr6.eq) goto loc_825BC2C0;
	// cmplwi cr6,r25,15
	ctx.cr6.compare<uint32_t>(r25.u32, 15, ctx.xer);
	// beq cr6,0x825bc29c
	if (ctx.cr6.eq) goto loc_825BC29C;
	// cmplwi cr6,r25,18
	ctx.cr6.compare<uint32_t>(r25.u32, 18, ctx.xer);
	// bne cr6,0x825bc2f8
	if (!ctx.cr6.eq) goto loc_825BC2F8;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// andi. r10,r11,61166
	ctx.r10.u64 = ctx.r11.u64 & 61166;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,61166
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 61166, ctx.xer);
	// beq cr6,0x825bc2f8
	if (ctx.cr6.eq) goto loc_825BC2F8;
	// ori r11,r11,61166
	ctx.r11.u64 = ctx.r11.u64 | 61166;
	// sth r11,14(r29)
	REX_STORE_U16(r29.u32 + 14, ctx.r11.u16);
	// b 0x825bc2f8
	goto loc_825BC2F8;
loc_825BC29C:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// andi. r10,r11,61166
	ctx.r10.u64 = ctx.r11.u64 & 61166;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,61166
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 61166, ctx.xer);
	// beq cr6,0x825bc2b4
	if (ctx.cr6.eq) goto loc_825BC2B4;
	// ori r11,r11,61166
	ctx.r11.u64 = ctx.r11.u64 | 61166;
	// sth r11,14(r29)
	REX_STORE_U16(r29.u32 + 14, ctx.r11.u16);
loc_825BC2B4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfd f2,-1536(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + -1536);
	// b 0x825bc2e0
	goto loc_825BC2E0;
loc_825BC2C0:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// andi. r10,r11,43690
	ctx.r10.u64 = ctx.r11.u64 & 43690;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,43690
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 43690, ctx.xer);
	// beq cr6,0x825bc2d8
	if (ctx.cr6.eq) goto loc_825BC2D8;
	// ori r11,r11,43690
	ctx.r11.u64 = ctx.r11.u64 | 43690;
	// sth r11,14(r29)
	REX_STORE_U16(r29.u32 + 14, ctx.r11.u16);
loc_825BC2D8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f2,3728(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
loc_825BC2E0:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfd f1,-3744(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
	// bl 0x825b99f0
	ctx.lr = 0x825BC2F8;
	sub_825B99F0(ctx, base);
loc_825BC2F8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_825D4B90) {
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
	ctx.lr = 0x825D4B98;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825d4bdc
	if (!ctx.cr6.eq) goto loc_825D4BDC;
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
	// li r7,3264
	ctx.r7.s64 = 3264;
	// bl 0x824ea978
	ctx.lr = 0x825D4BDC;
	sub_824EA978(ctx, base);
loc_825D4BDC:
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(r27.s32, -1, ctx.xer);
	// bne cr6,0x825d4bf0
	if (!ctx.cr6.eq) goto loc_825D4BF0;
	// li r30,23
	r30.s64 = 23;
	// li r26,1
	r26.s64 = 1;
	// b 0x825d4c18
	goto loc_825D4C18;
loc_825D4BF0:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825D4C00;
	sub_824F05F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825D4C14;
	sub_824F05F0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_825D4C18:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// ble cr6,0x825d4c34
	if (!ctx.cr6.gt) goto loc_825D4C34;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825a1088
	ctx.lr = 0x825D4C2C;
	sub_825A1088(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x825d4c38
	goto loc_825D4C38;
loc_825D4C34:
	// li r31,1
	r31.s64 = 1;
loc_825D4C38:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r11,r11,5024
	ctx.r11.s64 = ctx.r11.s64 + 5024;
	// beq cr6,0x825d4c68
	if (ctx.cr6.eq) goto loc_825D4C68;
	// addi r10,r11,-576
	ctx.r10.s64 = ctx.r11.s64 + -576;
	// mulli r9,r30,24
	ctx.r9.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(24));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,-576
	ctx.r11.s64 = ctx.r11.s64 + -576;
	// lhzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x825d4c7c
	goto loc_825D4C7C;
loc_825D4C68:
	// mulli r10,r30,24
	ctx.r10.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(24));
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lhzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// stw r9,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_825D4C7C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825d4c9c
	if (!ctx.cr6.eq) goto loc_825D4C9C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825d4c98
	if (ctx.cr6.eq) goto loc_825D4C98;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// b 0x825d4c9c
	goto loc_825D4C9C;
loc_825D4C98:
	// stw r26,0(r29)
	REX_STORE_U32(r29.u32 + 0, r26.u32);
loc_825D4C9C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x825d4cf8
	if (ctx.cr6.eq) goto loc_825D4CF8;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x825d4cf8
	if (ctx.cr6.eq) goto loc_825D4CF8;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// addi r30,r11,-28232
	r30.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5728
	ctx.r4.s64 = ctx.r10.s64 + 5728;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,28
	ctx.r6.s64 = 28;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r5,112(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 112);
	// bctrl 
	ctx.lr = 0x825D4CD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r5,396(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 396);
	// addi r4,r11,5608
	ctx.r4.s64 = ctx.r11.s64 + 5608;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// li r6,99
	ctx.r6.s64 = 99;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bctrl 
	ctx.lr = 0x825D4CF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D4CF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_825DE7F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825DE800;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,12248
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 12248, ctx.xer);
	// bge cr6,0x825de814
	if (!ctx.cr6.lt) goto loc_825DE814;
	// li r4,12248
	ctx.r4.s64 = 12248;
loc_825DE814:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r30,r4,8
	r30.s64 = ctx.r4.s64 + 8;
	// lwz r29,4(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,1440(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1440);
	// lwz r3,1444(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1444);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825DE834;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825E0808) {
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
	ctx.lr = 0x825E0810;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r29,1
	r29.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E0830;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x825e08a8
	if (ctx.cr6.lt) goto loc_825E08A8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,236
	r30.s64 = r31.s64 + 236;
	// addi r28,r11,-17760
	r28.s64 = ctx.r11.s64 + -17760;
loc_825E0844:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825e0884
	if (!ctx.cr6.eq) goto loc_825E0884;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// addi r10,r28,6
	ctx.r10.s64 = r28.s64 + 6;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825e0878
	if (ctx.cr0.eq) goto loc_825E0878;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x825e087c
	if (!ctx.cr6.gt) goto loc_825E087C;
loc_825E0878:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825E087C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e08b4
	if (ctx.cr0.eq) goto loc_825E08B4;
loc_825E0884:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E08A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x825e0844
	if (!ctx.cr6.gt) goto loc_825E0844;
loc_825E08A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825E08AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_825E08B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825e08ac
	goto loc_825E08AC;
}

DEFINE_REX_FUNC(sub_825E7100) {
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
	// addi r10,r4,928
	ctx.r10.s64 = ctx.r4.s64 + 928;
loc_825E7114:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825e7130
	if (ctx.cr6.eq) goto loc_825E7130;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x825e7114
	if (ctx.cr6.lt) goto loc_825E7114;
loc_825E7130:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r7,16(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x825f7b50
	ctx.lr = 0x825E7164;
	sub_825F7B50(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825ED1A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825ED1B0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// b 0x825ed1dc
	goto loc_825ED1DC;
loc_825ED1C4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825ec558
	ctx.lr = 0x825ED1D0;
	sub_825EC558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x825ed1fc
	if (ctx.cr0.gt) goto loc_825ED1FC;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_825ED1DC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825ed1c4
	if (!ctx.cr6.eq) goto loc_825ED1C4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x825f74e0
	ctx.lr = 0x825ED1F4;
	sub_825F74E0(ctx, base);
loc_825ED1F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_825ED1FC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f7420
	ctx.lr = 0x825ED208;
	sub_825F7420(ctx, base);
	// b 0x825ed1f4
	goto loc_825ED1F4;
}

DEFINE_REX_FUNC(sub_825F0B98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825F0BA0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,28(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r30,r11,22852
	r30.s64 = ctx.r11.s64 + 22852;
	// addi r28,r10,15448
	r28.s64 = ctx.r10.s64 + 15448;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x825f0be4
	if (ctx.cr6.eq) goto loc_825F0BE4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,15944
	ctx.r5.s64 = ctx.r11.s64 + 15944;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,1780
	ctx.r7.s64 = 1780;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F0BE4;
	sub_824EA978(ctx, base);
loc_825F0BE4:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825f0c0c
	if (ctx.cr6.eq) goto loc_825F0C0C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,15920
	ctx.r5.s64 = ctx.r11.s64 + 15920;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,1781
	ctx.r7.s64 = 1781;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F0C0C;
	sub_824EA978(ctx, base);
loc_825F0C0C:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,28(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x825f0c38
	if (!ctx.cr6.gt) goto loc_825F0C38;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,16948
	ctx.r5.s64 = ctx.r11.s64 + 16948;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,1782
	ctx.r7.s64 = 1782;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F0C38;
	sub_824EA978(ctx, base);
loc_825F0C38:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,32(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 32);
	// bl 0x825ecc78
	ctx.lr = 0x825F0C44;
	sub_825ECC78(ctx, base);
	// lwz r10,28(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 28);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// lwz r10,112(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 112);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x825f0c64
	if (!ctx.cr6.lt) goto loc_825F0C64;
	// stw r11,112(r29)
	REX_STORE_U32(r29.u32 + 112, ctx.r11.u32);
loc_825F0C64:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825ef6e8
	ctx.lr = 0x825F0C70;
	sub_825EF6E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825efce8
	ctx.lr = 0x825F0C7C;
	sub_825EFCE8(ctx, base);
	// lwz r11,120(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825f0d40
	if (ctx.cr6.eq) goto loc_825F0D40;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,172(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// lwz r11,68(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F0CA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825f0cdc
	if (ctx.cr0.eq) goto loc_825F0CDC;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r10,56(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 56);
	// lwz r11,236(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 236);
	// lwz r9,56(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825f0d40
	if (!ctx.cr6.eq) goto loc_825F0D40;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x825f0d40
	if (ctx.cr6.eq) goto loc_825F0D40;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825d7c78
	ctx.lr = 0x825F0CD8;
	sub_825D7C78(ctx, base);
	// b 0x825f0d40
	goto loc_825F0D40;
loc_825F0CDC:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x825f0d40
	if (!ctx.cr6.eq) goto loc_825F0D40;
	// lwz r10,228(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// rlwinm. r10,r10,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825f0d40
	if (ctx.cr0.eq) goto loc_825F0D40;
	// lwz r10,120(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 120);
	// lwz r9,228(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// rlwinm. r9,r9,23,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r9,236(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 236);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// beq 0x825f0d20
	if (ctx.cr0.eq) goto loc_825F0D20;
	// addi r10,r10,58
	ctx.r10.s64 = ctx.r10.s64 + 58;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// b 0x825f0d40
	goto loc_825F0D40;
loc_825F0D20:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r10,58
	ctx.r8.s64 = ctx.r10.s64 + 58;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r10,228(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// ori r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 512;
	// stw r10,228(r11)
	REX_STORE_U32(ctx.r11.u32 + 228, ctx.r10.u32);
loc_825F0D40:
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F0D54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825f0d60
	if (ctx.cr0.eq) goto loc_825F0D60;
	// stw r31,120(r29)
	REX_STORE_U32(r29.u32 + 120, r31.u32);
loc_825F0D60:
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F0D78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// bl 0x8260a6d0
	ctx.lr = 0x825F0D84;
	sub_8260A6D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,12(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x825eda50
	ctx.lr = 0x825F0D90;
	sub_825EDA50(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825F9590) {
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
	// bl 0x825f7fb8
	ctx.lr = 0x825F95B0;
	sub_825F7FB8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,28736
	ctx.r11.s64 = ctx.r11.s64 + 28736;
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

DEFINE_REX_FUNC(sub_825FA4D0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,2736(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 2736);
	// lbz r11,2144(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2144);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825fa568
	if (ctx.cr0.eq) goto loc_825FA568;
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bgt cr6,0x825fa518
	if (ctx.cr6.gt) goto loc_825FA518;
	// cmpwi cr6,r3,19
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 19, ctx.xer);
	// bge cr6,0x825fa540
	if (!ctx.cr6.lt) goto loc_825FA540;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x825fa540
	if (ctx.cr6.eq) goto loc_825FA540;
	// ble cr6,0x825fa560
	if (!ctx.cr6.gt) goto loc_825FA560;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x825fa548
	if (ctx.cr6.eq) goto loc_825FA548;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x825fa560
	goto loc_825FA560;
loc_825FA518:
	// cmpwi cr6,r3,33
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 33, ctx.xer);
	// bgt cr6,0x825fa550
	if (ctx.cr6.gt) goto loc_825FA550;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// bge cr6,0x825fa540
	if (!ctx.cr6.lt) goto loc_825FA540;
	// cmpwi cr6,r3,21
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 21, ctx.xer);
	// blt cr6,0x825fa560
	if (ctx.cr6.lt) goto loc_825FA560;
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// ble cr6,0x825fa548
	if (!ctx.cr6.gt) goto loc_825FA548;
	// cmpwi cr6,r3,24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 24, ctx.xer);
	// bgt cr6,0x825fa560
	if (ctx.cr6.gt) goto loc_825FA560;
loc_825FA540:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_825FA548:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_825FA550:
	// cmpwi cr6,r3,43
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 43, ctx.xer);
	// blt cr6,0x825fa560
	if (ctx.cr6.lt) goto loc_825FA560;
	// cmpwi cr6,r3,44
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 44, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_825FA560:
	// li r3,48
	ctx.r3.s64 = 48;
	// blr 
	return;
loc_825FA568:
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x825fa57c
	if (ctx.cr6.eq) goto loc_825FA57C;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x825fa548
	if (ctx.cr6.eq) goto loc_825FA548;
	// b 0x825fa560
	goto loc_825FA560;
loc_825FA57C:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825FC3A8) {
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
	ctx.lr = 0x825FC3B0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x825db6e8
	ctx.lr = 0x825FC3C0;
	sub_825DB6E8(ctx, base);
	// lwz r11,28(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 28);
	// li r21,1
	r21.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825fc504
	if (ctx.cr6.lt) goto loc_825FC504;
	// addi r22,r3,4
	r22.s64 = ctx.r3.s64 + 4;
loc_825FC3D4:
	// lwz r25,0(r22)
	r25.u64 = REX_LOAD_U32(r22.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// lwz r24,72(r25)
	r24.u64 = REX_LOAD_U32(r25.u32 + 72);
loc_825FC3E8:
	// lwz r11,56(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825fc400
	if (!ctx.cr6.gt) goto loc_825FC400;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825fc40c
	goto loc_825FC40C;
loc_825FC400:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r31,r10,r30
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
loc_825FC40C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825fc444
	if (ctx.cr0.eq) goto loc_825FC444;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r10,8(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// beq cr6,0x825fc438
	if (ctx.cr6.eq) goto loc_825FC438;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825fd118
	ctx.lr = 0x825FC438;
	sub_825FD118(ctx, base);
loc_825FC438:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// b 0x825fc3e8
	goto loc_825FC3E8;
loc_825FC444:
	// li r27,0
	r27.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// li r26,1
	r26.s64 = 1;
loc_825FC450:
	// lwz r11,88(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 88);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825fc468
	if (!ctx.cr6.gt) goto loc_825FC468;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825fc474
	goto loc_825FC474;
loc_825FC468:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r27,r10,r28
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
loc_825FC474:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825fc4f0
	if (ctx.cr0.eq) goto loc_825FC4F0;
	// li r31,0
	r31.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// li r29,1
	r29.s64 = 1;
loc_825FC488:
	// lwz r11,92(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 92);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825fc4a0
	if (!ctx.cr6.gt) goto loc_825FC4A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825fc4ac
	goto loc_825FC4AC;
loc_825FC4A0:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r31,r10,r30
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
loc_825FC4AC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825fc4e4
	if (ctx.cr0.eq) goto loc_825FC4E4;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r10,8(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// beq cr6,0x825fc4d8
	if (ctx.cr6.eq) goto loc_825FC4D8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825fd118
	ctx.lr = 0x825FC4D8;
	sub_825FD118(ctx, base);
loc_825FC4D8:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// b 0x825fc488
	goto loc_825FC488;
loc_825FC4E4:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// b 0x825fc450
	goto loc_825FC450;
loc_825FC4F0:
	// lwz r11,28(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 28);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x825fc3d4
	if (!ctx.cr6.gt) goto loc_825FC3D4;
loc_825FC504:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_8260C188) {
	REX_FUNC_PROLOGUE();
	// lwz r10,108(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8260c1dc
	if (ctx.cr6.eq) goto loc_8260C1DC;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// beq cr6,0x8260c1b8
	if (ctx.cr6.eq) goto loc_8260C1B8;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// b 0x8260c1c0
	goto loc_8260C1C0;
loc_8260C1B8:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
loc_8260C1C0:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,116(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r10,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// blr 
	return;
loc_8260C1DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8260DCF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8260DD00;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r28,r11,20576
	r28.s64 = ctx.r11.s64 + 20576;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8260b4a0
	ctx.lr = 0x8260DD18;
	sub_8260B4A0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8260dd2c
	if (!ctx.cr6.eq) goto loc_8260DD2C;
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16387
	r30.u64 = r30.u64 | 16387;
	// b 0x8260dda4
	goto loc_8260DDA4;
loc_8260DD2C:
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,388
	ctx.r4.s64 = 388;
	// bl 0x8260b5b8
	ctx.lr = 0x8260DD44;
	sub_8260B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8260dd58
	if (ctx.cr0.eq) goto loc_8260DD58;
	// bl 0x82617148
	ctx.lr = 0x8260DD50;
	sub_82617148(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8260dd5c
	goto loc_8260DD5C;
loc_8260DD58:
	// li r31,0
	r31.s64 = 0;
loc_8260DD5C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8260dd70
	if (!ctx.cr6.eq) goto loc_8260DD70;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x8260dda4
	goto loc_8260DDA4;
loc_8260DD70:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826160c0
	ctx.lr = 0x8260DD78;
	sub_826160C0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8260dd88
	if (ctx.cr0.lt) goto loc_8260DD88;
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
	// b 0x8260dda4
	goto loc_8260DDA4;
loc_8260DD88:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260DDA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8264c3d0
	ctx.lr = 0x8260DDA4;
	sub_8264C3D0(ctx, base);
loc_8260DDA4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8260b538
	ctx.lr = 0x8260DDAC;
	sub_8260B538(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82611408) {
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
	ctx.lr = 0x82611410;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r3,96
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(96));
	// addi r10,r11,143
	ctx.r10.s64 = ctx.r11.s64 + 143;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r31,r10,0,0,24
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82611464
	if (ctx.cr6.eq) goto loc_82611464;
	// addi r10,r4,-8
	ctx.r10.s64 = ctx.r4.s64 + -8;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
loc_82611444:
	// lbz r8,16(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 16);
	// lwzu r9,12(r10)
	ea = 12 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rotlwi r6,r8,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bdnz 0x82611444
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82611444;
loc_82611464:
	// add r29,r11,r31
	r29.u64 = ctx.r11.u64 + r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82611510
	if (ctx.cr6.eq) goto loc_82611510;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
loc_82611474:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// subf r29,r31,r29
	r29.u64 = r29.u64 - r31.u64;
	// bl 0x823ef010
	ctx.lr = 0x82611488;
	sub_823EF010(ctx, base);
	// addi r10,r28,16
	ctx.r10.s64 = r28.s64 + 16;
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
	// add r26,r31,r28
	r26.u64 = r31.u64 + r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r10.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x826114c0
	if (!ctx.cr6.gt) goto loc_826114C0;
	// addi r10,r29,-1
	ctx.r10.s64 = r29.s64 + -1;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826114B4:
	// dcbf r11,r26
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x826114b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826114B4;
loc_826114C0:
	// rlwinm. r23,r22,0,29,29
	r23.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// stw r22,4(r28)
	REX_STORE_U32(r28.u32 + 4, r22.u32);
	// oris r11,r22,2
	ctx.r11.u64 = r22.u64 | 131072;
	// bne 0x826114d4
	if (!ctx.cr0.eq) goto loc_826114D4;
	// oris r11,r22,3
	ctx.r11.u64 = r22.u64 | 196608;
loc_826114D4:
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82611680
	if (ctx.cr6.eq) goto loc_82611680;
	// addi r29,r27,8
	r29.s64 = r27.s64 + 8;
	// li r25,0
	r25.s64 = 0;
	// mr r24,r30
	r24.u64 = r30.u64;
	// li r27,1
	r27.s64 = 1;
loc_826114F0:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// add r31,r25,r11
	r31.u64 = r25.u64 + ctx.r11.u64;
	// stw r26,68(r31)
	REX_STORE_U32(r31.u32 + 68, r26.u32);
	// lwz r11,-8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -8);
	// cmplwi cr6,r11,24000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24000, ctx.xer);
	// bgt cr6,0x82611530
	if (ctx.cr6.gt) goto loc_82611530;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82611558
	goto loc_82611558;
loc_82611510:
	// lis r4,-22633
	ctx.r4.s64 = -1483276288;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f02b8
	ctx.lr = 0x8261151C;
	sub_823F02B8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x82611474
	if (!ctx.cr0.eq) goto loc_82611474;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x826116e8
	goto loc_826116E8;
loc_82611530:
	// cmplwi cr6,r11,32000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32000, ctx.xer);
	// bgt cr6,0x82611540
	if (ctx.cr6.gt) goto loc_82611540;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x82611558
	goto loc_82611558;
loc_82611540:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,44100
	ctx.r10.u64 = ctx.r10.u64 | 44100;
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
loc_82611558:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r11,5,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x3;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82611574
	if (ctx.cr6.eq) goto loc_82611574;
	// rlwimi r11,r10,27,3,4
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x18000000) | (ctx.r11.u64 & 0xFFFFFFFFE7FFFFFF);
	// stw r27,48(r31)
	REX_STORE_U32(r31.u32 + 48, r27.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_82611574:
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r11,3,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82611598
	if (ctx.cr6.eq) goto loc_82611598;
	// rlwimi r11,r10,29,2,2
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x20000000) | (ctx.r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r27,48(r31)
	REX_STORE_U32(r31.u32 + 48, r27.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_82611598:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lbz r10,1(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 1);
	// rlwinm r9,r11,12,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826115b8
	if (ctx.cr6.eq) goto loc_826115B8;
	// rlwimi r11,r10,20,8,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF00000) | (ctx.r11.u64 & 0xFFFFFFFFFF0FFFFF);
	// stw r27,48(r31)
	REX_STORE_U32(r31.u32 + 48, r27.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_826115B8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82793cf4
	ctx.lr = 0x826115C0;
	__imp__MmGetPhysicalAddress(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x826115dc
	if (ctx.cr6.eq) goto loc_826115DC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82793cf4
	ctx.lr = 0x826115D4;
	__imp__MmGetPhysicalAddress(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// stw r27,52(r31)
	REX_STORE_U32(r31.u32 + 52, r27.u32);
loc_826115DC:
	// lwz r9,-4(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + -4);
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// rlwinm r9,r11,17,20,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xF80;
	// rlwinm r8,r10,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82611608
	if (ctx.cr6.eq) goto loc_82611608;
	// rlwimi r11,r10,15,5,9
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7C00000) | (ctx.r11.u64 & 0xFFFFFFFFF83FFFFF);
	// stw r27,48(r31)
	REX_STORE_U32(r31.u32 + 48, r27.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82611608:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82611628
	if (ctx.cr6.eq) goto loc_82611628;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r27,48(r31)
	REX_STORE_U32(r31.u32 + 48, r27.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_82611628:
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// lwz r10,-4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + -4);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r11,r26
	r30.u64 = ctx.r11.u64 + r26.u64;
	// stw r30,72(r31)
	REX_STORE_U32(r31.u32 + 72, r30.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82793cf4
	ctx.lr = 0x82611648;
	__imp__MmGetPhysicalAddress(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82611664
	if (ctx.cr6.eq) goto loc_82611664;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82793cf4
	ctx.lr = 0x8261165C;
	__imp__MmGetPhysicalAddress(ctx, base);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// stw r27,56(r31)
	REX_STORE_U32(r31.u32 + 56, r27.u32);
loc_82611664:
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// addi r25,r25,96
	r25.s64 = r25.s64 + 96;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// add r26,r11,r30
	r26.u64 = ctx.r11.u64 + r30.u64;
	// bne 0x826114f0
	if (!ctx.cr0.eq) goto loc_826114F0;
loc_82611680:
	// clrlwi. r11,r22,31
	ctx.r11.u64 = r22.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826116a8
	if (!ctx.cr0.eq) goto loc_826116A8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82610748
	ctx.lr = 0x82611690;
	sub_82610748(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x826116a8
	if (!ctx.cr0.lt) goto loc_826116A8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82611208
	ctx.lr = 0x826116A0;
	sub_82611208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x826116e8
	goto loc_826116E8;
loc_826116A8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x826116e0
	if (ctx.cr6.eq) goto loc_826116E0;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r31,r11,-13532
	r31.s64 = ctx.r11.s64 + -13532;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827938a4
	ctx.lr = 0x826116C0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,20704
	ctx.r11.s64 = ctx.r11.s64 + 20704;
	// lhz r10,80(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 80);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// stwx r28,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r28.u32);
	// bl 0x827938b4
	ctx.lr = 0x826116E0;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_826116E0:
	// stw r28,0(r21)
	REX_STORE_U32(r21.u32 + 0, r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_826116E8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_826282C0) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826282EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82628304;
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

DEFINE_REX_FUNC(sub_82629630) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82629638;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r6,-32106
	ctx.r6.s64 = -2104098816;
	// addi r10,r10,2712
	ctx.r10.s64 = ctx.r10.s64 + 2712;
	// addi r7,r7,2668
	ctx.r7.s64 = ctx.r7.s64 + 2668;
	// li r11,6144
	ctx.r11.s64 = 6144;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lis r5,-32126
	ctx.r5.s64 = -2105409536;
	// stw r7,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,31748(r6)
	REX_STORE_U32(ctx.r6.u32 + 31748, ctx.r11.u32);
	// li r30,0
	r30.s64 = 0;
	// addi r10,r5,-11312
	ctx.r10.s64 = ctx.r5.s64 + -11312;
loc_82629670:
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
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r30.s32, ctx.xer);
	// bne cr6,0x82629694
	if (!ctx.cr6.eq) goto loc_82629694;
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
	// bne 0x82629670
	if (!ctx.cr0.eq) goto loc_82629670;
	// b 0x8262969c
	goto loc_8262969C;
loc_82629694:
	// stwcx. r9,0,r10
	ea = ctx.r10.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8262969C:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82629728
	if (ctx.cr6.eq) goto loc_82629728;
	// bl 0x82793ec4
	ctx.lr = 0x826296AC;
	__imp__KeEnterCriticalRegion(ctx, base);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r29,r11,-5944
	r29.s64 = ctx.r11.s64 + -5944;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827938a4
	ctx.lr = 0x826296BC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// lwz r11,22040(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 22040);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,22040(r10)
	REX_STORE_U32(ctx.r10.u32 + 22040, ctx.r11.u32);
	// bne 0x826296e0
	if (!ctx.cr0.eq) goto loc_826296E0;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-5960
	ctx.r3.s64 = ctx.r11.s64 + -5960;
	// bl 0x82793df4
	ctx.lr = 0x826296E0;
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
loc_826296E0:
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// addi r9,r10,22008
	ctx.r9.s64 = ctx.r10.s64 + 22008;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_826296F0:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r31.u32, ctx.xer);
	// beq cr6,0x82629710
	if (ctx.cr6.eq) goto loc_82629710;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x826296f0
	if (ctx.cr6.lt) goto loc_826296F0;
	// b 0x8262971c
	goto loc_8262971C;
loc_82629710:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r30.u32);
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
loc_8262971C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827938b4
	ctx.lr = 0x82629724;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// bl 0x82793eb4
	ctx.lr = 0x82629728;
	__imp__KeLeaveCriticalRegion(ctx, base);
loc_82629728:
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x82629508
	ctx.lr = 0x82629730;
	sub_82629508(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x82629508
	ctx.lr = 0x82629738;
	sub_82629508(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x82629508
	ctx.lr = 0x82629740;
	sub_82629508(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82629754
	if (ctx.cr6.eq) goto loc_82629754;
	// bl 0x8264c3d0
	ctx.lr = 0x82629750;
	sub_8264C3D0(ctx, base);
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
loc_82629754:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82629768
	if (ctx.cr6.eq) goto loc_82629768;
	// bl 0x8264c3d0
	ctx.lr = 0x82629764;
	sub_8264C3D0(ctx, base);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
loc_82629768:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r11,r11,31396
	ctx.r11.s64 = ctx.r11.s64 + 31396;
	// addi r10,r10,2624
	ctx.r10.s64 = ctx.r10.s64 + 2624;
	// addi r9,r9,2580
	ctx.r9.s64 = ctx.r9.s64 + 2580;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82637B80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// bl 0x826a1ca8
	ctx.lr = 0x82637B88;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2c80
	ctx.lr = 0x82637B90;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82637ea8
	if (ctx.cr6.lt) goto loc_82637EA8;
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// li r27,1
	r27.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82637ea8
	if (ctx.cr6.lt) goto loc_82637EA8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
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
	// lfs f24,16236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16236);
	f24.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f25,5912(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 5912);
	f25.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f31,15196(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15196);
	f31.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f26,3720(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3720);
	f26.f64 = double(temp.f32);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lfs f22,3704(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3704);
	f22.f64 = double(temp.f32);
	// lfd f21,8312(r6)
	f21.u64 = REX_LOAD_U64(ctx.r6.u32 + 8312);
	// lfs f18,3804(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 3804);
	f18.f64 = double(temp.f32);
	// addi r25,r11,-5704
	r25.s64 = ctx.r11.s64 + -5704;
	// lfs f19,8300(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8300);
	f19.f64 = double(temp.f32);
	// lfd f20,3728(r3)
	f20.u64 = REX_LOAD_U64(ctx.r3.u32 + 3728);
loc_82637C04:
	// cmplwi cr6,r27,6
	ctx.cr6.compare<uint32_t>(r27.u32, 6, ctx.xer);
	// bgt cr6,0x82637d94
	if (ctx.cr6.gt) goto loc_82637D94;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x82637e98
	if (ctx.cr6.eq) goto loc_82637E98;
	// bdz 0x82637c30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82637C30;
	// bdz 0x82637c40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82637C40;
	// bdz 0x82637c64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82637C64;
	// bdz 0x82637c98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82637C98;
	// bdz 0x82637cdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82637CDC;
	// b 0x82637d30
	goto loc_82637D30;
loc_82637C30:
	// lwz r11,548(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r25,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r25.u32);
	// b 0x82637e98
	goto loc_82637E98;
loc_82637C40:
	// lwz r11,548(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 548);
	// addi r10,r25,4
	ctx.r10.s64 = r25.s64 + 4;
	// addi r9,r25,12
	ctx.r9.s64 = r25.s64 + 12;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r7,548(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r6,8(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r9,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// b 0x82637e98
	goto loc_82637E98;
loc_82637C64:
	// lwz r11,548(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 548);
	// addi r10,r25,20
	ctx.r10.s64 = r25.s64 + 20;
	// addi r9,r25,32
	ctx.r9.s64 = r25.s64 + 32;
	// addi r8,r25,44
	ctx.r8.s64 = r25.s64 + 44;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// lwz r6,548(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r5,12(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// stw r9,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// lwz r4,548(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r3,12(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// b 0x82637e98
	goto loc_82637E98;
loc_82637C98:
	// lwz r11,548(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 548);
	// addi r10,r25,56
	ctx.r10.s64 = r25.s64 + 56;
	// addi r9,r25,72
	ctx.r9.s64 = r25.s64 + 72;
	// addi r8,r25,88
	ctx.r8.s64 = r25.s64 + 88;
	// addi r7,r25,104
	ctx.r7.s64 = r25.s64 + 104;
	// lwz r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r5,548(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r4,16(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// stw r9,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r3,548(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r10,548(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r7,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r7.u32);
	// b 0x82637e98
	goto loc_82637E98;
loc_82637CDC:
	// lwz r11,548(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 548);
	// addi r10,r25,120
	ctx.r10.s64 = r25.s64 + 120;
	// addi r9,r25,140
	ctx.r9.s64 = r25.s64 + 140;
	// addi r8,r25,160
	ctx.r8.s64 = r25.s64 + 160;
	// addi r7,r25,180
	ctx.r7.s64 = r25.s64 + 180;
	// addi r6,r25,200
	ctx.r6.s64 = r25.s64 + 200;
	// lwz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r4,548(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r3,20(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r11,548(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r9,548(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// stw r7,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r7.u32);
	// lwz r7,548(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r5,20(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// stw r6,16(r5)
	REX_STORE_U32(ctx.r5.u32 + 16, ctx.r6.u32);
	// b 0x82637e98
	goto loc_82637E98;
loc_82637D30:
	// lwz r11,548(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 548);
	// addi r10,r25,220
	ctx.r10.s64 = r25.s64 + 220;
	// addi r9,r25,244
	ctx.r9.s64 = r25.s64 + 244;
	// addi r8,r25,268
	ctx.r8.s64 = r25.s64 + 268;
	// addi r7,r25,292
	ctx.r7.s64 = r25.s64 + 292;
	// addi r6,r25,316
	ctx.r6.s64 = r25.s64 + 316;
	// lwz r5,24(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r25,340
	ctx.r4.s64 = r25.s64 + 340;
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r3,548(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r10,548(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// stw r8,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r8,548(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r5,24(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// stw r7,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r7.u32);
	// lwz r3,548(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stw r6,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// lwz r10,548(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 548);
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// stw r4,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r4.u32);
	// b 0x82637e98
	goto loc_82637E98;
loc_82637D94:
	// lwz r11,548(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 548);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f1,f20
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f20.f64;
	// lwzx r24,r11,r10
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8269d440
	ctx.lr = 0x82637DA8;
	sub_8269D440(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// fmuls f27,f0,f19
	f27.f64 = double(float(ctx.f0.f64 * f19.f64));
	// ble cr6,0x82637e98
	if (!ctx.cr6.gt) goto loc_82637E98;
	// extsw r11,r27
	ctx.r11.s64 = r27.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f28,f13
	f28.f64 = double(float(ctx.f13.f64));
	// fdivs f12,f18,f28
	ctx.f12.f64 = double(float(f18.f64 / f28.f64));
	// fsqrts f23,f12
	f23.f64 = double(float(sqrt(ctx.f12.f64)));
loc_82637DD8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x82637dec
	if (!ctx.cr6.eq) goto loc_82637DEC;
	// fsqrts f0,f21
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(f21.f64)));
	// fdivs f0,f22,f0
	ctx.f0.f64 = double(float(f22.f64 / ctx.f0.f64));
	// b 0x82637df0
	goto loc_82637DF0;
loc_82637DEC:
	// fmr f0,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f22.f64;
loc_82637DF0:
	// extsw r11,r28
	ctx.r11.s64 = r28.s32;
	// fmuls f30,f23,f0
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(f23.f64 * ctx.f0.f64));
	// li r31,0
	r31.s64 = 0;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r29,r28,2,0,29
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f29,f13
	f29.f64 = double(float(ctx.f13.f64));
	// addi r30,r24,-4
	r30.s64 = r24.s64 + -4;
loc_82637E14:
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fadds f11,f12,f26
	ctx.f11.f64 = double(float(ctx.f12.f64 + f26.f64));
	// fmuls f10,f11,f29
	ctx.f10.f64 = double(float(ctx.f11.f64 * f29.f64));
	// fmuls f9,f10,f27
	ctx.f9.f64 = double(float(ctx.f10.f64 * f27.f64));
	// fdivs f1,f9,f28
	ctx.f1.f64 = double(float(ctx.f9.f64 / f28.f64));
	// bl 0x826a15c0
	ctx.lr = 0x82637E3C;
	sub_826A15C0(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// lwzu r11,4(r30)
	ea = 4 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(r31.s32, r27.s32, ctx.xer);
	// fmuls f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 * f30.f64));
	// fsubs f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 - f31.f64));
	// fadds f5,f7,f31
	ctx.f5.f64 = double(float(ctx.f7.f64 + f31.f64));
	// fsel f4,f7,f5,f6
	ctx.f4.f64 = ctx.f7.f64 >= 0.0 ? ctx.f5.f64 : ctx.f6.f64;
	// fmuls f3,f4,f25
	ctx.f3.f64 = double(float(ctx.f4.f64 * f25.f64));
	// fctiwz f2,f3
	ctx.f2.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f2.u64);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f1,112(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// fmuls f12,f13,f24
	ctx.f12.f64 = double(float(ctx.f13.f64 * f24.f64));
	// stfsx f12,r11,r29
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + r29.u32, temp.u32);
	// blt cr6,0x82637e14
	if (ctx.cr6.lt) goto loc_82637E14;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(r28.s32, r27.s32, ctx.xer);
	// blt cr6,0x82637dd8
	if (ctx.cr6.lt) goto loc_82637DD8;
loc_82637E98:
	// lhz r11,34(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 34);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82637c04
	if (!ctx.cr6.gt) goto loc_82637C04;
loc_82637EA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ccc
	ctx.lr = 0x82637EB8;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8264C7F0) {
	REX_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82793f54
	__imp__NetDll_XNetRandom(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8264C850) {
	REX_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82793fa4
	__imp__NetDll_XNetConnect(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8264C908) {
	REX_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82793ff4
	__imp__NetDll_XNetQosRelease(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8264C9E8) {
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
	// bl 0x8264ce48
	ctx.lr = 0x8264C9F8;
	sub_8264CE48(ctx, base);
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

DEFINE_REX_FUNC(sub_8264CEB0) {
	REX_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827940a4
	__imp__NetDll_bind(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8264CFD8) {
	REX_FUNC_PROLOGUE();
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
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
	// b 0x82794134
	__imp__NetDll_sendto(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8264DBC8) {
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
	ctx.lr = 0x8264DBD0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// rlwinm. r11,r4,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8264dbfc
	if (ctx.cr0.eq) goto loc_8264DBFC;
	// rlwinm. r11,r4,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8264dbfc
	if (ctx.cr0.eq) goto loc_8264DBFC;
	// li r30,87
	r30.s64 = 87;
	// b 0x8264dc78
	goto loc_8264DC78;
loc_8264DBFC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82794164
	ctx.lr = 0x8264DC04;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8264dc78
	if (!ctx.cr0.eq) goto loc_8264DC78;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r28,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// ori r4,r4,24
	ctx.r4.u64 = ctx.r4.u64 | 24;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x827937c4
	ctx.lr = 0x8264DC3C;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8264dc4c
	if (!ctx.cr0.lt) goto loc_8264DC4C;
	// li r30,1627
	r30.s64 = 1627;
	// b 0x8264dc70
	goto loc_8264DC70;
loc_8264DC4C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8264dc6c
	if (!ctx.cr6.eq) goto loc_8264DC6C;
	// bl 0x823f0058
	ctx.lr = 0x8264DC58;
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
	// and r30,r11,r10
	r30.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8264dc70
	goto loc_8264DC70;
loc_8264DC6C:
	// li r30,997
	r30.s64 = 997;
loc_8264DC70:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82793974
	ctx.lr = 0x8264DC78;
	__imp__ObDereferenceObject(ctx, base);
loc_8264DC78:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8264FB60) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,64
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 64, ctx.xer);
	// bge cr6,0x8264fbd0
	if (!ctx.cr6.lt) goto loc_8264FBD0;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// bgt cr6,0x8264fbd0
	if (ctx.cr6.gt) goto loc_8264FBD0;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8264fb90
	if (ctx.cr0.eq) goto loc_8264FB90;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_8264FB90:
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8264fbb8
	if (ctx.cr6.eq) goto loc_8264FBB8;
	// lbz r8,1(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8264fbb8
	if (ctx.cr0.eq) goto loc_8264FBB8;
	// clrldi r8,r5,32
	ctx.r8.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// sld r8,r10,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r8.u8 & 0x7F));
	// divdu r6,r6,r8
	ctx.r6.u64 = ctx.r8.u64 ? ctx.r6.u64 / ctx.r8.u64 : 0;
	// tdllei r8,0
	if (ctx.r8.s64 == 0ll || ctx.r8.u64 < 0ull) ppc_trap(ctx, base, 0);
loc_8264FBB8:
	// rlwimi r5,r10,31,0,29
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xFFFFFFFC) | (ctx.r5.u64 & 0xFFFFFFFF00000003);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// std r6,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// blr 
	return;
loc_8264FBD0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82653450) {
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
	ctx.lr = 0x82653458;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,744
	ctx.r4.s64 = 744;
	// li r3,260
	ctx.r3.s64 = 260;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x8265d838
	ctx.lr = 0x8265347C;
	sub_8265D838(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x826534a0
	if (ctx.cr0.eq) goto loc_826534A0;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
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
	// bl 0x82651f78
	ctx.lr = 0x826534A0;
	sub_82651F78(ctx, base);
loc_826534A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82655A20) {
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
	ctx.lr = 0x82655A28;
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	r24.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r24.u32);
	// mr r23,r24
	r23.u64 = r24.u64;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// bge cr6,0x82655a58
	if (!ctx.cr6.lt) goto loc_82655A58;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// b 0x82655df4
	goto loc_82655DF4;
loc_82655A58:
	// addi r25,r31,380
	r25.s64 = r31.s64 + 380;
	// mr r26,r24
	r26.u64 = r24.u64;
	// mr r30,r24
	r30.u64 = r24.u64;
	// addi r27,r1,224
	r27.s64 = ctx.r1.s64 + 224;
	// mr r28,r25
	r28.u64 = r25.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
loc_82655A70:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82655ab4
	if (ctx.cr6.eq) goto loc_82655AB4;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82653a08
	ctx.lr = 0x82655A8C;
	sub_82653A08(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stwx r30,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, r30.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r11,396(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm r11,r11,3,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// stwx r11,r29,r10
	REX_STORE_U32(r29.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// b 0x82655ac4
	goto loc_82655AC4;
loc_82655AB4:
	// li r5,42
	ctx.r5.s64 = 42;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82655AC4;
	sub_826A2E60(ctx, base);
loc_82655AC4:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r27,r27,42
	r27.s64 = r27.s64 + 42;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// blt cr6,0x82655a70
	if (ctx.cr6.lt) goto loc_82655A70;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82655b28
	if (ctx.cr6.eq) goto loc_82655B28;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8264dd38
	ctx.lr = 0x82655AF8;
	sub_8264DD38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82655b1c
	if (ctx.cr0.eq) goto loc_82655B1C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823ede70
	ctx.lr = 0x82655B08;
	sub_823EDE70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82655df4
	if (ctx.cr0.lt) goto loc_82655DF4;
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
	// b 0x82655df4
	goto loc_82655DF4;
loc_82655B1C:
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
loc_82655B28:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82655d18
	if (ctx.cr6.eq) goto loc_82655D18;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82655b44
	if (!ctx.cr6.eq) goto loc_82655B44;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82655b48
	goto loc_82655B48;
loc_82655B44:
	// bl 0x8264ca10
	ctx.lr = 0x82655B48;
	sub_8264CA10(ctx, base);
loc_82655B48:
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// rlwinm r9,r3,2,24,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFC;
	// stb r9,392(r1)
	REX_STORE_U8(ctx.r1.u32 + 392, ctx.r9.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82655b64
	if (ctx.cr6.eq) goto loc_82655B64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82655b68
	goto loc_82655B68;
loc_82655B64:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_82655B68:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,392(r1)
	REX_STORE_U8(ctx.r1.u32 + 392, ctx.r10.u8);
	// beq cr6,0x82655b8c
	if (ctx.cr6.eq) goto loc_82655B8C;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// b 0x82655b90
	goto loc_82655B90;
loc_82655B8C:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_82655B90:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82655ba0
	if (ctx.cr6.eq) goto loc_82655BA0;
	// ori r11,r10,16
	ctx.r11.u64 = ctx.r10.u64 | 16;
	// stb r11,392(r1)
	REX_STORE_U8(ctx.r1.u32 + 392, ctx.r11.u8);
loc_82655BA0:
	// li r11,1000
	ctx.r11.s64 = 1000;
	// stw r24,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,116(r1)
	REX_STORE_U16(ctx.r1.u32 + 116, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82652980
	ctx.lr = 0x82655BD0;
	sub_82652980(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82655ddc
	if (ctx.cr0.lt) goto loc_82655DDC;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826500f8
	ctx.lr = 0x82655BE4;
	sub_826500F8(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r23,100(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r29,r31,400
	r29.s64 = r31.s64 + 400;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r24.u32);
	// sth r6,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r6.u16);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// sth r5,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, ctx.r5.u16);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,31
	ctx.r6.s64 = 31;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// li r5,169
	ctx.r5.s64 = 169;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8265d620
	ctx.lr = 0x82655C2C;
	sub_8265D620(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82650248
	ctx.lr = 0x82655C3C;
	sub_82650248(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82655de0
	if (ctx.cr6.lt) goto loc_82655DE0;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r7,r31,560
	ctx.r7.s64 = r31.s64 + 560;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8265d7b8
	ctx.lr = 0x82655C60;
	sub_8265D7B8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82655ca0
	if (!ctx.cr6.eq) goto loc_82655CA0;
	// addi r29,r31,408
	r29.s64 = r31.s64 + 408;
	// li r6,1199
	ctx.r6.s64 = 1199;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r5,1001
	ctx.r5.s64 = 1001;
	// addi r4,r31,92
	ctx.r4.s64 = r31.s64 + 92;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x82660f48
	ctx.lr = 0x82655C88;
	sub_82660F48(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82655de0
	if (ctx.cr0.lt) goto loc_82655DE0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x826609f0
	ctx.lr = 0x82655CA0;
	sub_826609F0(ctx, base);
loc_82655CA0:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x8265d850
	ctx.lr = 0x82655CAC;
	sub_8265D850(ctx, base);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,524(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 524);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// lwz r4,520(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 520);
	// bl 0x8264c870
	ctx.lr = 0x82655CC4;
	sub_8264C870(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82655ce8
	if (ctx.cr0.eq) goto loc_82655CE8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82655cdc
	if (ctx.cr6.gt) goto loc_82655CDC;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82655df4
	goto loc_82655DF4;
loc_82655CDC:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r30,r11,32775
	r30.u64 = ctx.r11.u64 | 2147942400;
	// b 0x82655df4
	goto loc_82655DF4;
loc_82655CE8:
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
	// beq 0x82655dd4
	if (ctx.cr0.eq) goto loc_82655DD4;
	// rlwinm r11,r11,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
	// bl 0x826558c0
	ctx.lr = 0x82655D0C;
	sub_826558C0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82655df4
	if (ctx.cr0.lt) goto loc_82655DF4;
	// b 0x82655dd4
	goto loc_82655DD4;
loc_82655D18:
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82655d3c
	if (ctx.cr0.eq) goto loc_82655D3C;
	// rlwinm r11,r11,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
	// bl 0x826558c0
	ctx.lr = 0x82655D34;
	sub_826558C0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82655de0
	if (ctx.cr0.lt) goto loc_82655DE0;
loc_82655D3C:
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r24,24(r31)
	REX_STORE_U32(r31.u32 + 24, r24.u32);
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
	ctx.lr = 0x82655D68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r25
	r30.u64 = r25.u64;
	// li r29,4
	r29.s64 = 4;
loc_82655D70:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82655dc8
	if (ctx.cr6.eq) goto loc_82655DC8;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x8264c918
	ctx.lr = 0x82655D84;
	sub_8264C918(ctx, base);
	// li r5,255
	ctx.r5.s64 = 255;
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8265dd20
	ctx.lr = 0x82655D94;
	sub_8265DD20(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
	// stw r10,396(r11)
	REX_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r11.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82655DC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82655DC8:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82655d70
	if (!ctx.cr0.eq) goto loc_82655D70;
loc_82655DD4:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x826a1cf4
	return;
loc_82655DDC:
	// lwz r23,100(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_82655DE0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82655df4
	if (ctx.cr6.eq) goto loc_82655DF4;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x8265d850
	ctx.lr = 0x82655DF4;
	sub_8265D850(ctx, base);
loc_82655DF4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654f40
	ctx.lr = 0x82655E00;
	sub_82654F40(ctx, base);
	// b 0x82655dd4
	goto loc_82655DD4;
}

DEFINE_REX_FUNC(sub_8266C788) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8266C790;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,61(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 61);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r28,65(r4)
	r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 65);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8266c808
	if (!ctx.cr6.eq) goto loc_8266C808;
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8266c7e0
	if (!ctx.cr6.eq) goto loc_8266C7E0;
	// lis r5,-32646
	ctx.r5.s64 = -2139488256;
loc_8266C7C4:
	// ori r5,r5,4106
	ctx.r5.u64 = ctx.r5.u64 | 4106;
loc_8266C7C8:
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826748e8
	ctx.lr = 0x8266C7D4;
	sub_826748E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266C7D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8266C7E0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt cr6,0x8266c7f0
	if (ctx.cr6.lt) goto loc_8266C7F0;
	// lis r28,-32646
	r28.s64 = -2139488256;
	// ori r28,r28,4106
	r28.u64 = r28.u64 | 4106;
loc_8266C7F0:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82665e68
	ctx.lr = 0x8266C804;
	sub_82665E68(ctx, base);
	// b 0x8266c8bc
	goto loc_8266C8BC;
loc_8266C808:
	// lwz r11,240(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 240);
	// addi r10,r30,240
	ctx.r10.s64 = r30.s64 + 240;
	// b 0x8266c828
	goto loc_8266C828;
loc_8266C814:
	// lwz r8,56(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8266c83c
	if (ctx.cr6.eq) goto loc_8266C83C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8266C828:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8266c838
	if (ctx.cr6.eq) goto loc_8266C838;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8266c814
	if (!ctx.cr0.eq) goto loc_8266C814;
loc_8266C838:
	// li r31,0
	r31.s64 = 0;
loc_8266C83C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8266c8bc
	if (ctx.cr6.eq) goto loc_8266C8BC;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8266c868
	if (!ctx.cr0.eq) goto loc_8266C868;
	// lwz r11,172(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 172);
	// lis r5,-32646
	ctx.r5.s64 = -2139488256;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8266c7c4
	if (ctx.cr6.lt) goto loc_8266C7C4;
	// ori r5,r5,4114
	ctx.r5.u64 = ctx.r5.u64 | 4114;
	// b 0x8266c7c8
	goto loc_8266C7C8;
loc_8266C868:
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
	// bne 0x8266c868
	if (!ctx.cr0.eq) goto loc_8266C868;
	// stw r31,56(r29)
	REX_STORE_U32(r29.u32 + 56, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826652d0
	ctx.lr = 0x8266C894;
	sub_826652D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826708d8
	ctx.lr = 0x8266C8A0;
	sub_826708D8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8266bfc8
	ctx.lr = 0x8266C8B4;
	sub_8266BFC8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x8266c7c8
	if (!ctx.cr0.eq) goto loc_8266C7C8;
loc_8266C8BC:
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826748e8
	ctx.lr = 0x8266C8CC;
	sub_826748E8(ctx, base);
	// b 0x8266c7d8
	goto loc_8266C7D8;
}

DEFINE_REX_FUNC(sub_82673878) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826738c8
	if (ctx.cr6.eq) goto loc_826738C8;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 + 28;
	// b 0x826738b8
	goto loc_826738B8;
loc_826738A4:
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x826738e8
	if (ctx.cr6.eq) goto loc_826738E8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_826738B8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826738c8
	if (ctx.cr6.eq) goto loc_826738C8;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826738a4
	if (!ctx.cr0.eq) goto loc_826738A4;
loc_826738C8:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4106
	ctx.r3.u64 = ctx.r3.u64 | 4106;
loc_826738D0:
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
loc_826738E8:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82673910
	if (ctx.cr0.eq) goto loc_82673910;
	// subf r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
	// lis r10,-32646
	ctx.r10.s64 = -2139488256;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// ori r10,r10,4106
	ctx.r10.u64 = ctx.r10.u64 | 4106;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x826738d0
	goto loc_826738D0;
loc_82673910:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826738c8
	if (!ctx.cr6.eq) goto loc_826738C8;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// subf r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// bgt cr6,0x826738c8
	if (ctx.cr6.gt) goto loc_826738C8;
	// stw r5,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r5.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// subf. r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x8267394c
	if (ctx.cr0.gt) goto loc_8267394C;
	// addic. r11,r5,1
	ctx.xer.ca = ctx.r5.u32 > 4294967294;
	ctx.r11.s64 = ctx.r5.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82673948
	if (!ctx.cr0.eq) goto loc_82673948;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82673948:
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
loc_8267394C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82672e28
	ctx.lr = 0x82673958;
	sub_82672E28(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82672ce8
	ctx.lr = 0x82673968;
	sub_82672CE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82672e90
	ctx.lr = 0x82673970;
	sub_82672E90(ctx, base);
	// b 0x826738d0
	goto loc_826738D0;
}

DEFINE_REX_FUNC(sub_82678AD0) {
	REX_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// b 0x82677508
	sub_82677508(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82678BA8) {
	REX_FUNC_PROLOGUE();
	// lhz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r9,2(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82678bc4
	if (!ctx.cr6.eq) goto loc_82678BC4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82678BC4:
	// lbz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82678be4
	if (!ctx.cr6.eq) goto loc_82678BE4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r8,128
	ctx.r8.s64 = 128;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r8,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, ctx.r8.u8);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82678BE4:
	// lbz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// stb r10,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8267A038) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8267A040;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8267A05C;
	sub_826A2E60(ctx, base);
	// addi r28,r30,40
	r28.s64 = r30.s64 + 40;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827938a4
	ctx.lr = 0x8267A068;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,1104(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1104);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8267a0ac
	if (ctx.cr6.eq) goto loc_8267A0AC;
	// lwz r29,1132(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 1132);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x8267a0fc
	if (ctx.cr6.lt) goto loc_8267A0FC;
	// lwz r11,1180(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1180);
	// ld r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// ld r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// rldicl r10,r10,59,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 59) & 0x7FFFFFFFFFFFFFF;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lbz r10,73(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 73);
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// lbz r11,74(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 74);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// b 0x8267a0fc
	goto loc_8267A0FC;
loc_8267A0AC:
	// lwz r4,1180(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 1180);
	// li r10,24
	ctx.r10.s64 = 24;
	// addi r6,r31,16
	ctx.r6.s64 = r31.s64 + 16;
	// addi r5,r31,12
	ctx.r5.s64 = r31.s64 + 12;
	// lbz r11,21(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 21);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// subf r3,r11,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r11.u64;
	// subf r11,r3,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// ld r9,816(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 816);
	// divw r10,r11,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// rldicr r11,r9,5,58
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 5) & 0xFFFFFFFFFFFFFFE0;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
	// ld r11,816(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 816);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x82681618
	ctx.lr = 0x8267A0F8;
	sub_82681618(ctx, base);
	// li r29,0
	r29.s64 = 0;
loc_8267A0FC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827938b4
	ctx.lr = 0x8267A104;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8267FC18) {
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
	ctx.lr = 0x8267FC20;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r24,0
	r24.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8267fe68
	if (!ctx.cr6.eq) goto loc_8267FE68;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,40(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// lwz r5,44(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 44);
	// bl 0x82680c88
	ctx.lr = 0x8267FC4C;
	sub_82680C88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8267fe68
	if (ctx.cr0.eq) goto loc_8267FE68;
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r8,152(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r10,r1,98
	ctx.r10.s64 = ctx.r1.s64 + 98;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lbz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lbz r30,2(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r29,5(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r6,r6,8,22,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0x300;
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r30,r30,8,22,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0x300;
	// or r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 | r29.u64;
	// lwz r7,132(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// or r11,r30,r11
	ctx.r11.u64 = r30.u64 | ctx.r11.u64;
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8267aae8
	ctx.lr = 0x8267FCB4;
	sub_8267AAE8(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq 0x8267fe68
	if (ctx.cr0.eq) goto loc_8267FE68;
	// lhz r26,96(r1)
	r26.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(r25.s32, 2, ctx.xer);
	// bne cr6,0x8267fd38
	if (!ctx.cr6.eq) goto loc_8267FD38;
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// ld r6,632(r31)
	ctx.r6.u64 = REX_LOAD_U64(r31.u32 + 632);
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r5,r11,0,27,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// bl 0x82681520
	ctx.lr = 0x8267FCE4;
	sub_82681520(ctx, base);
	// lwz r6,140(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8267fd18
	if (ctx.cr6.eq) goto loc_8267FD18;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,136(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x8267ad28
	ctx.lr = 0x8267FD08;
	sub_8267AD28(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq 0x8267fe68
	if (ctx.cr0.eq) goto loc_8267FE68;
	// std r30,632(r31)
	REX_STORE_U64(r31.u32 + 632, r30.u64);
	// b 0x8267fd2c
	goto loc_8267FD2C;
loc_8267FD18:
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267fd2c
	if (ctx.cr0.eq) goto loc_8267FD2C;
	// li r24,1
	r24.s64 = 1;
loc_8267FD2C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,896
	ctx.r3.s64 = r31.s64 + 896;
	// bl 0x826866d0
	ctx.lr = 0x8267FD38;
	sub_826866D0(ctx, base);
loc_8267FD38:
	// lwz r30,824(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 824);
	// lwz r11,1200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1200);
	// ld r10,1224(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 1224);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1200(r31)
	REX_STORE_U32(r31.u32 + 1200, ctx.r11.u32);
	// stw r30,468(r31)
	REX_STORE_U32(r31.u32 + 468, r30.u32);
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 44);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,1224(r31)
	REX_STORE_U64(r31.u32 + 1224, ctx.r11.u64);
	// bl 0x823ef900
	ctx.lr = 0x8267FD60;
	sub_823EF900(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8267fdac
	if (ctx.cr6.lt) goto loc_8267FDAC;
	// lhz r28,98(r1)
	r28.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267d208
	ctx.lr = 0x8267FD8C;
	sub_8267D208(ctx, base);
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x8267cd38
	ctx.lr = 0x8267FDA8;
	sub_8267CD38(ctx, base);
	// b 0x8267fdb8
	goto loc_8267FDB8;
loc_8267FDAC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,688
	ctx.r3.s64 = r31.s64 + 688;
	// bl 0x82684320
	ctx.lr = 0x8267FDB8;
	sub_82684320(ctx, base);
loc_8267FDB8:
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r4,r11,27,30,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// bl 0x8267ac40
	ctx.lr = 0x8267FDD0;
	sub_8267AC40(ctx, base);
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(r25.s32, 2, ctx.xer);
	// bne cr6,0x8267fe68
	if (!ctx.cr6.eq) goto loc_8267FE68;
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8267fdf4
	if (ctx.cr6.eq) goto loc_8267FDF4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r6,148(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267acb8
	ctx.lr = 0x8267FDF4;
	sub_8267ACB8(ctx, base);
loc_8267FDF4:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x8267fe68
	if (ctx.cr6.eq) goto loc_8267FE68;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826792c8
	ctx.lr = 0x8267FE08;
	sub_826792C8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267fb30
	ctx.lr = 0x8267FE14;
	sub_8267FB30(ctx, base);
	// lwz r11,616(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267fe68
	if (!ctx.cr6.eq) goto loc_8267FE68;
	// lwz r11,672(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 672);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8267fe68
	if (!ctx.cr6.gt) goto loc_8267FE68;
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8267fe68
	if (ctx.cr6.eq) goto loc_8267FE68;
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// addi r3,r31,364
	ctx.r3.s64 = r31.s64 + 364;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267fe60
	if (ctx.cr0.eq) goto loc_8267FE60;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subf r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8267fe68
	if (ctx.cr6.lt) goto loc_8267FE68;
loc_8267FE60:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x826829f0
	ctx.lr = 0x8267FE68;
	sub_826829F0(ctx, base);
loc_8267FE68:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8268C4D8) {
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
	ctx.lr = 0x8268C4E0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8268c550
	if (ctx.cr6.eq) goto loc_8268C550;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r30,r3,36
	r30.s64 = ctx.r3.s64 + 36;
	// subf r27,r5,r4
	r27.u64 = ctx.r4.u64 - ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
loc_8268C500:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r4,r27,r31
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + r31.u32);
	// bl 0x8268bc78
	ctx.lr = 0x8268C50C;
	sub_8268BC78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268c538
	if (ctx.cr0.eq) goto loc_8268C538;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8268c538
	if (ctx.cr6.eq) goto loc_8268C538;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268C530;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8268c53c
	goto loc_8268C53C;
loc_8268C538:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8268C53C:
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x8268c500
	if (!ctx.cr0.eq) goto loc_8268C500;
loc_8268C550:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82691720) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82691728;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 + 20;
	// lwz r28,0(r5)
	r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwzx r3,r11,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// bl 0x8268e9f0
	ctx.lr = 0x82691754;
	sub_8268E9F0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8269176c
	if (!ctx.cr0.lt) goto loc_8269176C;
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
loc_8269176C:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82691790
	if (ctx.cr6.eq) goto loc_82691790;
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// b 0x82691794
	goto loc_82691794;
loc_82691790:
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
loc_82691794:
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826951A8) {
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
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,1492
	ctx.r4.s64 = 1492;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-5960(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -5960);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826951DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826951ec
	if (!ctx.cr0.eq) goto loc_826951EC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82695200
	goto loc_82695200;
loc_826951EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82695200:
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

DEFINE_REX_FUNC(sub_826980C0) {
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
	ctx.lr = 0x826980C8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r5)
	r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r26,0(r6)
	r26.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-2976
	ctx.r9.s64 = ctx.r11.s64 + -2976;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lfs f0,32352(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 32352);
	ctx.f0.f64 = double(temp.f32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r31,-4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfsx f12,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x826981ec
	if (ctx.cr6.gt) goto loc_826981EC;
	// lfsx f11,r11,r3
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f11.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,14180(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 14180);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3804(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3804);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
loc_82698130:
	// lfsu f13,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82698130
	if (ctx.cr6.lt) goto loc_82698130;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lfs f0,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82698164
	if (!ctx.cr6.lt) goto loc_82698164;
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82698164
	if (!ctx.cr6.lt) goto loc_82698164;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82698164:
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f0,8620(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8620);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
loc_82698174:
	// lfsu f13,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82698174
	if (ctx.cr6.lt) goto loc_82698174;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f0,-4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x826981a8
	if (!ctx.cr6.lt) goto loc_826981A8;
	// lfs f0,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x826981a8
	if (!ctx.cr6.lt) goto loc_826981A8;
	// li r8,1
	ctx.r8.s64 = 1;
loc_826981A8:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x826981ec
	if (!ctx.cr6.eq) goto loc_826981EC;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x826981d8
	if (!ctx.cr6.eq) goto loc_826981D8;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// subfic r4,r31,74
	ctx.xer.ca = r31.u32 <= 74;
	ctx.r4.u64 = static_cast<uint64_t>(74) - r31.u64;
	// bl 0x826956a8
	ctx.lr = 0x826981C8;
	sub_826956A8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// b 0x826981ec
	goto loc_826981EC;
loc_826981D8:
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// subf r11,r26,r30
	ctx.r11.u64 = r30.u64 - r26.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r26,r11,r26
	r26.u64 = ctx.r11.u64 & r26.u64;
loc_826981EC:
	// stw r26,0(r27)
	REX_STORE_U32(r27.u32 + 0, r26.u32);
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8269E7FC) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
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
	ctx.lr = 0x8269E81C;
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

DEFINE_REX_FUNC(sub_8269FC60) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r10,r1,-33
	ctx.r10.s64 = ctx.r1.s64 + -33;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8269FC74:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8269fc74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8269FC74;
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8269fcb4
	if (ctx.cr0.eq) goto loc_8269FCB4;
loc_8269FC8C:
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// lbzu r7,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// clrlwi r5,r11,29
	ctx.r5.u64 = ctx.r11.u32 & 0x7;
	// mr. r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r7,r6,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r5.u8 & 0x3F));
	// lbzx r5,r9,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// or r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 | ctx.r5.u64;
	// stbx r7,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// bne 0x8269fc8c
	if (!ctx.cr0.eq) goto loc_8269FC8C;
loc_8269FCB4:
	// lbz r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + -32);
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// lbz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// rlwinm r7,r8,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// stb r10,-32(r1)
	REX_STORE_U8(ctx.r1.u32 + -32, ctx.r10.u8);
	// clrlwi r8,r8,29
	ctx.r8.u64 = ctx.r8.u32 & 0x7;
	// slw r10,r6,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r8.u8 & 0x3F));
	// lbzx r9,r7,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8269fd08
	if (!ctx.cr0.eq) goto loc_8269FD08;
loc_8269FCE4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// lbzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r8,r9,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// slw r9,r6,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// lbzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// and. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8269fce4
	if (ctx.cr0.eq) goto loc_8269FCE4;
loc_8269FD08:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__restfpr_28) {
	REX_FUNC_PROLOGUE();
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f28,-32(r12)
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_826A3640) {
	REX_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x826a9928
	sub_826A9928(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826A38D8) {
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
	// bl 0x826a5c60
	ctx.lr = 0x826A38F0;
	sub_826A5C60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a5c30
	ctx.lr = 0x826A38F8;
	sub_826A5C30(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826a36f0
	ctx.lr = 0x826A3904;
	sub_826A36F0(ctx, base);
}

DEFINE_REX_FUNC(__savevmx_84) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826AA818) {
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
	ctx.lr = 0x826AA820;
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r3.u32);
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// mr r28,r26
	r28.u64 = r26.u64;
	// mr r27,r26
	r27.u64 = r26.u64;
	// stw r26,84(r31)
	REX_STORE_U32(r31.u32 + 84, r26.u32);
	// stw r26,88(r31)
	REX_STORE_U32(r31.u32 + 88, r26.u32);
	// bgt cr6,0x826aa8f4
	if (ctx.cr6.gt) goto loc_826AA8F4;
	// beq cr6,0x826aa870
	if (ctx.cr6.eq) goto loc_826AA870;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x826aa888
	if (ctx.cr6.eq) goto loc_826AA888;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x826aa870
	if (ctx.cr6.eq) goto loc_826AA870;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x826aa920
	if (ctx.cr6.eq) goto loc_826AA920;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bne cr6,0x826aa90c
	if (!ctx.cr6.eq) goto loc_826AA90C;
loc_826AA870:
	// bl 0x826a3990
	ctx.lr = 0x826AA874;
	sub_826A3990(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// stw r27,88(r31)
	REX_STORE_U32(r31.u32 + 88, r27.u32);
	// bne 0x826aa898
	if (!ctx.cr0.eq) goto loc_826AA898;
loc_826AA880:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x826aaa98
	goto loc_826AAA98;
loc_826AA888:
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// addi r30,r11,9432
	r30.s64 = ctx.r11.s64 + 9432;
	// lwz r11,9432(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 9432);
	// b 0x826aa958
	goto loc_826AA958;
loc_826AA898:
	// lwz r10,92(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 92);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lwz r8,22028(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 22028);
loc_826AA8A8:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r29.s32, ctx.xer);
	// beq cr6,0x826aa8c8
	if (ctx.cr6.eq) goto loc_826AA8C8;
	// mulli r9,r8,12
	ctx.r9.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(12));
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x826aa8a8
	if (ctx.cr6.lt) goto loc_826AA8A8;
loc_826AA8C8:
	// mulli r9,r8,12
	ctx.r9.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(12));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826aa8e4
	if (!ctx.cr6.lt) goto loc_826AA8E4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// beq cr6,0x826aa8e8
	if (ctx.cr6.eq) goto loc_826AA8E8;
loc_826AA8E4:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_826AA8E8:
	// addi r30,r11,8
	r30.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x826aa960
	goto loc_826AA960;
loc_826AA8F4:
	// cmpwi cr6,r29,15
	ctx.cr6.compare<int32_t>(r29.s32, 15, ctx.xer);
	// beq cr6,0x826aa948
	if (ctx.cr6.eq) goto loc_826AA948;
	// cmpwi cr6,r29,21
	ctx.cr6.compare<int32_t>(r29.s32, 21, ctx.xer);
	// beq cr6,0x826aa934
	if (ctx.cr6.eq) goto loc_826AA934;
	// cmpwi cr6,r29,22
	ctx.cr6.compare<int32_t>(r29.s32, 22, ctx.xer);
	// beq cr6,0x826aa920
	if (ctx.cr6.eq) goto loc_826AA920;
loc_826AA90C:
	// bl 0x826a33d0
	ctx.lr = 0x826AA910;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826AA91C;
	sub_8269CB20(ctx, base);
	// b 0x826aa880
	goto loc_826AA880;
loc_826AA920:
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// addi r11,r11,9432
	ctx.r11.s64 = ctx.r11.s64 + 9432;
	// addi r30,r11,8
	r30.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x826aa958
	goto loc_826AA958;
loc_826AA934:
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// addi r11,r11,9432
	ctx.r11.s64 = ctx.r11.s64 + 9432;
	// addi r30,r11,4
	r30.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x826aa958
	goto loc_826AA958;
loc_826AA948:
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// addi r11,r11,9432
	ctx.r11.s64 = ctx.r11.s64 + 9432;
	// addi r30,r11,12
	r30.s64 = ctx.r11.s64 + 12;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_826AA958:
	// li r28,1
	r28.s64 = 1;
	// stw r28,84(r31)
	REX_STORE_U32(r31.u32 + 84, r28.u32);
loc_826AA960:
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x826aaa94
	if (ctx.cr6.eq) goto loc_826AAA94;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826aa97c
	if (!ctx.cr6.eq) goto loc_826AA97C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x826a38b8
	ctx.lr = 0x826AA97C;
	sub_826A38B8(ctx, base);
loc_826AA97C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x826aa98c
	if (ctx.cr6.eq) goto loc_826AA98C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826a9928
	ctx.lr = 0x826AA98C;
	sub_826A9928(ctx, base);
loc_826AA98C:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(r29.s32, 8, ctx.xer);
	// beq cr6,0x826aa9ac
	if (ctx.cr6.eq) goto loc_826AA9AC;
	// cmpwi cr6,r29,11
	ctx.cr6.compare<int32_t>(r29.s32, 11, ctx.xer);
	// beq cr6,0x826aa9ac
	if (ctx.cr6.eq) goto loc_826AA9AC;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// bne cr6,0x826aa9d0
	if (!ctx.cr6.eq) goto loc_826AA9D0;
loc_826AA9AC:
	// lwz r11,96(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 96);
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(r29.s32, 8, ctx.xer);
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// stw r26,96(r27)
	REX_STORE_U32(r27.u32 + 96, r26.u32);
	// bne cr6,0x826aaa20
	if (!ctx.cr6.eq) goto loc_826AAA20;
	// lwz r11,100(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 100);
	// li r10,140
	ctx.r10.s64 = 140;
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// stw r10,100(r27)
	REX_STORE_U32(r27.u32 + 100, ctx.r10.u32);
loc_826AA9D0:
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(r29.s32, 8, ctx.xer);
	// bne cr6,0x826aaa20
	if (!ctx.cr6.eq) goto loc_826AAA20;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lwz r10,22016(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 22016);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
loc_826AA9EC:
	// lwz r9,22020(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 22020);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x826aaa24
	if (!ctx.cr6.lt) goto loc_826AAA24;
	// lwz r9,92(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 92);
	// mulli r10,r11,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r26,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r26.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// lwz r10,22016(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 22016);
	// b 0x826aa9ec
	goto loc_826AA9EC;
loc_826AAA20:
	// stw r26,0(r30)
	REX_STORE_U32(r30.u32 + 0, r26.u32);
loc_826AAA24:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = r31.s64 + 160;
	// bl 0x826aaac0
	ctx.lr = 0x826AAA30;
	ctx.r26 = r26;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_826AAAC0(ctx, base);
	r26 = ctx.r26;
	r27 = ctx.r27;
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r30,180(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 180);
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bne cr6,0x826aaa58
	if (!ctx.cr6.eq) goto loc_826AAA58;
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r29,88(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwz r4,100(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 100);
	// bctrl 
	ctx.lr = 0x826AAA54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826aaa64
	goto loc_826AAA64;
loc_826AAA58:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bctrl 
	ctx.lr = 0x826AAA60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,88(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 88);
loc_826AAA64:
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// beq cr6,0x826aaa7c
	if (ctx.cr6.eq) goto loc_826AAA7C;
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(r30.s32, 11, ctx.xer);
	// beq cr6,0x826aaa7c
	if (ctx.cr6.eq) goto loc_826AAA7C;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// bne cr6,0x826aaa94
	if (!ctx.cr6.eq) goto loc_826AAA94;
loc_826AAA7C:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// stw r11,96(r29)
	REX_STORE_U32(r29.u32 + 96, ctx.r11.u32);
	// bne cr6,0x826aaa94
	if (!ctx.cr6.eq) goto loc_826AAA94;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// stw r11,100(r29)
	REX_STORE_U32(r29.u32 + 100, ctx.r11.u32);
loc_826AAA94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AAA98:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826BF220) {
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
	ctx.lr = 0x826BF228;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// sth r28,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r28.u16);
	// stw r28,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r28,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// beq cr6,0x826bf45c
	if (ctx.cr6.eq) goto loc_826BF45C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826bf45c
	if (ctx.cr6.eq) goto loc_826BF45C;
	// lwz r11,528(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826bf45c
	if (ctx.cr6.eq) goto loc_826BF45C;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpld cr6,r4,r10
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x826bf45c
	if (ctx.cr6.gt) goto loc_826BF45C;
	// std r28,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, r28.u64);
	// bl 0x826bd020
	ctx.lr = 0x826BF290;
	sub_826BD020(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826bf430
	if (ctx.cr6.lt) goto loc_826BF430;
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// li r23,4096
	r23.s64 = 4096;
	// ori r25,r11,168
	r25.u64 = ctx.r11.u64 | 168;
loc_826BF2A8:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826bf0d0
	ctx.lr = 0x826BF2BC;
	sub_826BF0D0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826bf41c
	if (ctx.cr6.eq) goto loc_826BF41C;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x826c6cf0
	ctx.lr = 0x826BF2E4;
	sub_826C6CF0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826bf430
	if (ctx.cr6.lt) goto loc_826BF430;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x826bf34c
	if (!ctx.cr6.eq) goto loc_826BF34C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826bd678
	ctx.lr = 0x826BF310;
	sub_826BD678(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826bf430
	if (ctx.cr6.lt) goto loc_826BF430;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r6,12(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// mullw r5,r7,r9
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r5,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// rlwinm r3,r4,30,2,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r11,r3,r6
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x826bf35c
	goto loc_826BF35C;
loc_826BF34C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r8,r23
	r29.u64 = ctx.r8.u64 & r23.u64;
loc_826BF35C:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,608(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 608);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x826c6880
	ctx.lr = 0x826BF370;
	sub_826C6880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826bf430
	if (ctx.cr6.lt) goto loc_826BF430;
loc_826BF37C:
	// lwz r3,536(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 536);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826bf390
	if (!ctx.cr6.eq) goto loc_826BF390;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// b 0x826bf3c8
	goto loc_826BF3C8;
loc_826BF390:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x826c7250
	ctx.lr = 0x826BF3B0;
	sub_826C7250(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826bf3c8
	if (ctx.cr6.lt) goto loc_826BF3C8;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826bf3c8
	if (!ctx.cr6.eq) goto loc_826BF3C8;
	// stw r28,536(r30)
	REX_STORE_U32(r30.u32 + 536, r28.u32);
loc_826BF3C8:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826bf430
	if (ctx.cr6.lt) goto loc_826BF430;
	// ld r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// cmpd cr6,r11,r27
	ctx.cr6.compare<int64_t>(ctx.r11.s64, r27.s64, ctx.xer);
	// blt cr6,0x826bf3f4
	if (ctx.cr6.lt) goto loc_826BF3F4;
	// lwz r10,556(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 556);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826bf3f0
	if (ctx.cr6.eq) goto loc_826BF3F0;
	// std r11,0(r26)
	REX_STORE_U64(r26.u32 + 0, ctx.r11.u64);
loc_826BF3F0:
	// stw r28,556(r30)
	REX_STORE_U32(r30.u32 + 556, r28.u32);
loc_826BF3F4:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826bf37c
	if (!ctx.cr6.eq) goto loc_826BF37C;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,608(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x826c68d8
	ctx.lr = 0x826BF410;
	sub_826C68D8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826bf430
	if (ctx.cr6.lt) goto loc_826BF430;
loc_826BF41C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x826bf430
	if (!ctx.cr6.eq) goto loc_826BF430;
	// lwz r11,556(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 556);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826bf2a8
	if (!ctx.cr6.eq) goto loc_826BF2A8;
loc_826BF430:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826bf44c
	if (ctx.cr6.eq) goto loc_826BF44C;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,608(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x826c68d8
	ctx.lr = 0x826BF44C;
	sub_826C68D8(ctx, base);
loc_826BF44C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bd9a0
	ctx.lr = 0x826BF454;
	sub_826BD9A0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf4
	return;
loc_826BF45C:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_826D4658) {
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
	ctx.lr = 0x826D4660;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// lwz r24,28(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r25,r4,-24
	r25.s64 = ctx.r4.s64 + -24;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826D4698;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4a68
	if (ctx.cr6.lt) goto loc_826D4A68;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// lhz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 60);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826d46cc
	if (!ctx.cr6.gt) goto loc_826D46CC;
loc_826D46B8:
	// lis r31,-32688
	r31.s64 = -2142240768;
	// ori r31,r31,12
	r31.u64 = r31.u64 | 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
loc_826D46CC:
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// addi r6,r11,120
	ctx.r6.s64 = ctx.r11.s64 + 120;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826d4710
	if (!ctx.cr6.eq) goto loc_826D4710;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,224(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c6880
	ctx.lr = 0x826D46EC;
	sub_826C6880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4a68
	if (ctx.cr6.lt) goto loc_826D4A68;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// stw r29,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// stw r29,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r29.u32);
	// stw r29,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, r29.u32);
loc_826D4710:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// lwz r30,120(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826d46b8
	if (!ctx.cr6.eq) goto loc_826D46B8;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r3,224(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 224);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c6880
	ctx.lr = 0x826D4738;
	sub_826C6880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4a68
	if (ctx.cr6.lt) goto loc_826D4A68;
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826D4758:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x826d4758
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826D4758;
	// lwz r27,0(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(r25.u32, 4, ctx.xer);
	// blt cr6,0x826d4a04
	if (ctx.cr6.lt) goto loc_826D4A04;
	// addi r29,r27,16
	r29.s64 = r27.s64 + 16;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826d3d18
	ctx.lr = 0x826D4788;
	sub_826D3D18(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4a0c
	if (ctx.cr6.lt) goto loc_826D4A0C;
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r11,4
	ctx.r11.s64 = 4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826d480c
	if (ctx.cr6.eq) goto loc_826D480C;
	// addi r30,r27,20
	r30.s64 = r27.s64 + 20;
	// lwz r3,224(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x826c6880
	ctx.lr = 0x826D47B8;
	sub_826C6880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4a0c
	if (ctx.cr6.lt) goto loc_826D4A0C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x826a2e60
	ctx.lr = 0x826D47D4;
	sub_826A2E60(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r29,r5,4
	r29.s64 = ctx.r5.s64 + 4;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(r29.u32, r25.u32, ctx.xer);
	// bgt cr6,0x826d4a04
	if (ctx.cr6.gt) goto loc_826D4A04;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826d4230
	ctx.lr = 0x826D47FC;
	sub_826D4230(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4a0c
	if (ctx.cr6.lt) goto loc_826D4A0C;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_826D480C:
	// addi r29,r11,4
	r29.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(r29.u32, r25.u32, ctx.xer);
	// bgt cr6,0x826d4a04
	if (ctx.cr6.gt) goto loc_826D4A04;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826d3d18
	ctx.lr = 0x826D4830;
	sub_826D3D18(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4a0c
	if (ctx.cr6.lt) goto loc_826D4A0C;
	// lwz r5,0(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826d48ac
	if (ctx.cr6.eq) goto loc_826D48AC;
	// addi r30,r27,4
	r30.s64 = r27.s64 + 4;
	// lwz r3,224(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x826c6880
	ctx.lr = 0x826D485C;
	sub_826C6880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4a0c
	if (ctx.cr6.lt) goto loc_826D4A0C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x826a2e60
	ctx.lr = 0x826D4878;
	sub_826A2E60(ctx, base);
	// lwz r5,0(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 0);
	// add r29,r29,r5
	r29.u64 = r29.u64 + ctx.r5.u64;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(r29.u32, r25.u32, ctx.xer);
	// bgt cr6,0x826d4a04
	if (ctx.cr6.gt) goto loc_826D4A04;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826d4230
	ctx.lr = 0x826D48A0;
	sub_826D4230(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4a0c
	if (ctx.cr6.lt) goto loc_826D4A0C;
loc_826D48AC:
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// bgt cr6,0x826d4a04
	if (ctx.cr6.gt) goto loc_826D4A04;
	// addi r29,r27,8
	r29.s64 = r27.s64 + 8;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826d3d18
	ctx.lr = 0x826D48D4;
	sub_826D3D18(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4a0c
	if (ctx.cr6.lt) goto loc_826D4A0C;
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r28,r30
	r28.u64 = r30.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826d4958
	if (ctx.cr6.eq) goto loc_826D4958;
	// addi r30,r27,12
	r30.s64 = r27.s64 + 12;
	// lwz r3,224(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x826c6880
	ctx.lr = 0x826D4904;
	sub_826C6880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4a0c
	if (ctx.cr6.lt) goto loc_826D4A0C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x826a2e60
	ctx.lr = 0x826D4920;
	sub_826A2E60(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// add r29,r28,r5
	r29.u64 = r28.u64 + ctx.r5.u64;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(r29.u32, r25.u32, ctx.xer);
	// bgt cr6,0x826d4a04
	if (ctx.cr6.gt) goto loc_826D4A04;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826d4230
	ctx.lr = 0x826D4948;
	sub_826D4230(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4a0c
	if (ctx.cr6.lt) goto loc_826D4A0C;
	// mr r28,r29
	r28.u64 = r29.u64;
loc_826D4958:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d49a4
	if (ctx.cr6.eq) goto loc_826D49A4;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r10,r10,31304
	ctx.r10.s64 = ctx.r10.s64 + 31304;
loc_826D496C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq cr6,0x826d4990
	if (ctx.cr6.eq) goto loc_826D4990;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826d496c
	if (ctx.cr6.eq) goto loc_826D496C;
loc_826D4990:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826d49a4
	if (!ctx.cr6.eq) goto loc_826D49A4;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
loc_826D49A4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r10,r11,r25
	ctx.r10.u64 = r25.u64 - ctx.r11.u64;
	// subf. r30,r28,r10
	r30.u64 = ctx.r10.u64 - r28.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x826d49e8
	if (ctx.cr0.eq) goto loc_826D49E8;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826D49CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4a0c
	if (ctx.cr6.lt) goto loc_826D4A0C;
	// ld r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U64(r24.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r24)
	REX_STORE_U64(r24.u32 + 8, ctx.r11.u64);
loc_826D49E8:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 60);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,60(r11)
	REX_STORE_U16(ctx.r11.u32 + 60, ctx.r9.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
loc_826D4A04:
	// lis r31,-32688
	r31.s64 = -2142240768;
	// ori r31,r31,12
	r31.u64 = r31.u64 | 12;
loc_826D4A0C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x826d4a68
	if (ctx.cr6.eq) goto loc_826D4A68;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// addi r5,r27,4
	ctx.r5.s64 = r27.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d4a30
	if (ctx.cr6.eq) goto loc_826D4A30;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 224);
	// bl 0x826c68d8
	ctx.lr = 0x826D4A30;
	sub_826C68D8(ctx, base);
loc_826D4A30:
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// addi r5,r27,12
	ctx.r5.s64 = r27.s64 + 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d4a4c
	if (ctx.cr6.eq) goto loc_826D4A4C;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 224);
	// bl 0x826c68d8
	ctx.lr = 0x826D4A4C;
	sub_826C68D8(ctx, base);
loc_826D4A4C:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// addi r5,r27,20
	ctx.r5.s64 = r27.s64 + 20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d4a68
	if (ctx.cr6.eq) goto loc_826D4A68;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 224);
	// bl 0x826c68d8
	ctx.lr = 0x826D4A68;
	sub_826C68D8(ctx, base);
loc_826D4A68:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_826F0170) {
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
	ctx.lr = 0x826F0178;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r22,r28
	r22.u64 = r28.u64;
	// lhz r10,34(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 34);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826f01b0
	if (ctx.cr6.lt) goto loc_826F01B0;
loc_826F01A0:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
loc_826F01B0:
	// lwz r10,120(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 120);
	// mulli r11,r11,152
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(152));
	// stwx r28,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r28.u32);
	// lhz r9,34(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 34);
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r5,r9,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x826a2e60
	ctx.lr = 0x826F01D4;
	sub_826A2E60(ctx, base);
	// lwz r8,92(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 92);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bgt cr6,0x826f0244
	if (ctx.cr6.gt) goto loc_826F0244;
	// lhz r11,34(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 34);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826f0238
	if (ctx.cr6.eq) goto loc_826F0238;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// li r25,1
	r25.s64 = 1;
loc_826F01FC:
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addic r5,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// subfe r4,r5,r8
	temp.u8 = (~ctx.r5.u32 + ctx.r8.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stwx r4,r6,r10
	REX_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r25,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r25.u32);
	// lhz r3,34(r30)
	ctx.r3.u64 = REX_LOAD_U16(r30.u32 + 34);
	// cmpw cr6,r7,r3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x826f01fc
	if (ctx.cr6.lt) goto loc_826F01FC;
loc_826F0238:
	// lwz r11,92(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 92);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x826f02dc
	goto loc_826F02DC;
loc_826F0244:
	// lhz r11,580(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 580);
	// mr r23,r28
	r23.u64 = r28.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826f02dc
	if (!ctx.cr6.gt) goto loc_826F02DC;
	// mr r24,r28
	r24.u64 = r28.u64;
	// li r25,1
	r25.s64 = 1;
loc_826F0260:
	// lwz r11,584(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 584);
	// lwz r26,8(r29)
	r26.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lhzx r10,r24,r11
	ctx.r10.u64 = REX_LOAD_U16(r24.u32 + ctx.r11.u32);
	// extsh r28,r10
	r28.s64 = ctx.r10.s16;
	// rlwinm r27,r28,3,0,28
	r27.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r27,r26
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + r26.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826f02c4
	if (!ctx.cr6.eq) goto loc_826F02C4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,224
	ctx.r3.s64 = r29.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826F0290;
	sub_826E58B8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f02e8
	if (ctx.cr6.lt) goto loc_826F02E8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826f02c4
	if (!ctx.cr6.eq) goto loc_826F02C4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r25,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r25.u32);
	// stwx r25,r27,r26
	REX_STORE_U32(r27.u32 + r26.u32, r25.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
loc_826F02C4:
	// lhz r11,580(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 580);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r24,r24,2
	r24.s64 = r24.s64 + 2;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826f0260
	if (ctx.cr6.lt) goto loc_826F0260;
loc_826F02DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x826f01a0
	if (ctx.cr6.lt) goto loc_826F01A0;
loc_826F02E8:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_826FB080) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826fb0ac
	if (!ctx.cr6.eq) goto loc_826FB0AC;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_826FB0AC:
	// lwz r11,15504(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15504);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x826fb0f0
	if (ctx.cr6.eq) goto loc_826FB0F0;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x826fb0f0
	if (ctx.cr6.eq) goto loc_826FB0F0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x826fb0dc
	if (!ctx.cr6.eq) goto loc_826FB0DC;
	// bl 0x827053c8
	ctx.lr = 0x826FB0CC;
	sub_827053C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_826FB0DC:
	// bl 0x82713d88
	ctx.lr = 0x826FB0E0;
	sub_82713D88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_826FB0F0:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82709d70
	ctx.lr = 0x826FB104;
	sub_82709D70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826FF418) {
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
	ctx.lr = 0x826FF420;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// stw r4,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r6,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r6.u32);
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// stw r5,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r5.u32);
	// mr r22,r27
	r22.u64 = r27.u64;
	// sth r27,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, r27.u16);
	// mr r29,r27
	r29.u64 = r27.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x826ff47c
	if (ctx.cr6.eq) goto loc_826FF47C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826ff468
	if (ctx.cr6.eq) goto loc_826FF468;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x826ff47c
	if (!ctx.cr6.eq) goto loc_826FF47C;
loc_826FF468:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fb1d0
	ctx.lr = 0x826FF470;
	sub_826FB1D0(ctx, base);
	// li r3,11
	ctx.r3.s64 = 11;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf0
	return;
loc_826FF47C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x826ff4b4
	if (!ctx.cr6.eq) goto loc_826FF4B4;
loc_826FF484:
	// lwz r11,3692(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3692);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826ff49c
	if (!ctx.cr6.eq) goto loc_826FF49C;
loc_826FF490:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf0
	return;
loc_826FF49C:
	// li r24,1
	r24.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r24,15584(r31)
	REX_STORE_U32(r31.u32 + 15584, r24.u32);
	// stw r24,3448(r31)
	REX_STORE_U32(r31.u32 + 3448, r24.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf0
	return;
loc_826FF4B4:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x826ff518
	if (!ctx.cr6.eq) goto loc_826FF518;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x826ff518
	if (!ctx.cr6.eq) goto loc_826FF518;
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x826ff490
	if (ctx.cr6.lt) goto loc_826FF490;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x826ff518
	if (ctx.cr6.eq) goto loc_826FF518;
	// lwz r11,3692(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3692);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ff490
	if (ctx.cr6.eq) goto loc_826FF490;
	// lwz r11,14804(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ff500
	if (ctx.cr6.eq) goto loc_826FF500;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827039d0
	ctx.lr = 0x826FF4F8;
	sub_827039D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827002a8
	if (!ctx.cr6.eq) goto loc_827002A8;
loc_826FF500:
	// li r24,1
	r24.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r24,3448(r31)
	REX_STORE_U32(r31.u32 + 3448, r24.u32);
	// stw r24,15584(r31)
	REX_STORE_U32(r31.u32 + 15584, r24.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf0
	return;
loc_826FF518:
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x826ff570
	if (!ctx.cr6.eq) goto loc_826FF570;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826ff570
	if (!ctx.cr6.eq) goto loc_826FF570;
	// addi r8,r1,236
	ctx.r8.s64 = ctx.r1.s64 + 236;
	// addi r7,r1,228
	ctx.r7.s64 = ctx.r1.s64 + 228;
	// addi r6,r1,220
	ctx.r6.s64 = ctx.r1.s64 + 220;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82715ad8
	ctx.lr = 0x826FF540;
	sub_82715AD8(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x826ff550
	if (!ctx.cr6.eq) goto loc_826FF550;
	// li r22,4
	r22.s64 = 4;
	// b 0x826ff558
	goto loc_826FF558;
loc_826FF550:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827002a8
	if (!ctx.cr6.eq) goto loc_827002A8;
loc_826FF558:
	// lwz r11,3696(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ffd10
	if (ctx.cr6.eq) goto loc_826FFD10;
	// lwz r6,236(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r5,228(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,220(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
loc_826FF570:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x826ff580
	if (!ctx.cr6.eq) goto loc_826FF580;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x826ff484
	if (ctx.cr6.eq) goto loc_826FF484;
loc_826FF580:
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82725b68
	ctx.lr = 0x826FF598;
	sub_82725B68(ctx, base);
	// lwz r9,80(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r8,236(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// stw r8,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,3700(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3700);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x826ffd10
	if (!ctx.cr6.eq) goto loc_826FFD10;
	// ld r11,3600(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 3600);
	// ld r10,3608(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 3608);
	// lwz r9,3476(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3476);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r27,3448(r31)
	REX_STORE_U32(r31.u32 + 3448, r27.u32);
	// std r8,3600(r31)
	REX_STORE_U64(r31.u32 + 3600, ctx.r8.u64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// std r7,3608(r31)
	REX_STORE_U64(r31.u32 + 3608, ctx.r7.u64);
	// stw r27,22200(r31)
	REX_STORE_U32(r31.u32 + 22200, r27.u32);
	// stw r27,15596(r31)
	REX_STORE_U32(r31.u32 + 15596, r27.u32);
	// stw r27,3432(r31)
	REX_STORE_U32(r31.u32 + 3432, r27.u32);
	// bne cr6,0x826ff5f0
	if (!ctx.cr6.eq) goto loc_826FF5F0;
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// b 0x826ff5f4
	goto loc_826FF5F4;
loc_826FF5F0:
	// stw r27,3476(r31)
	REX_STORE_U32(r31.u32 + 3476, r27.u32);
loc_826FF5F4:
	// lwz r10,15504(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x826ff614
	if (ctx.cr6.eq) goto loc_826FF614;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x826ff698
	if (!ctx.cr6.eq) goto loc_826FF698;
	// lwz r11,20904(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20904);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826ff698
	if (!ctx.cr6.eq) goto loc_826FF698;
loc_826FF614:
	// lwz r11,3396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ff674
	if (ctx.cr6.eq) goto loc_826FF674;
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// lwz r9,3188(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3188);
	// addi r8,r11,29896
	ctx.r8.s64 = ctx.r11.s64 + 29896;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x826ff674
	if (ctx.cr6.eq) goto loc_826FF674;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x826ff674
	if (ctx.cr6.eq) goto loc_826FF674;
	// lwz r11,3388(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3388);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x826ff674
	if (ctx.cr6.gt) goto loc_826FF674;
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// lis r9,-32129
	ctx.r9.s64 = -2105606144;
	// lis r8,-32131
	ctx.r8.s64 = -2105737216;
	// addi r7,r11,24832
	ctx.r7.s64 = ctx.r11.s64 + 24832;
	// addi r6,r9,-26376
	ctx.r6.s64 = ctx.r9.s64 + -26376;
	// addi r5,r8,-6000
	ctx.r5.s64 = ctx.r8.s64 + -6000;
	// stw r7,15808(r31)
	REX_STORE_U32(r31.u32 + 15808, ctx.r7.u32);
	// stw r6,3080(r31)
	REX_STORE_U32(r31.u32 + 3080, ctx.r6.u32);
	// stw r5,15804(r31)
	REX_STORE_U32(r31.u32 + 15804, ctx.r5.u32);
	// b 0x826ff698
	goto loc_826FF698;
loc_826FF674:
	// lis r11,-32144
	ctx.r11.s64 = -2106589184;
	// lis r9,-32139
	ctx.r9.s64 = -2106261504;
	// lis r8,-32140
	ctx.r8.s64 = -2106327040;
	// addi r7,r11,15400
	ctx.r7.s64 = ctx.r11.s64 + 15400;
	// addi r6,r9,22776
	ctx.r6.s64 = ctx.r9.s64 + 22776;
	// addi r5,r8,31776
	ctx.r5.s64 = ctx.r8.s64 + 31776;
	// stw r7,15804(r31)
	REX_STORE_U32(r31.u32 + 15804, ctx.r7.u32);
	// stw r6,15808(r31)
	REX_STORE_U32(r31.u32 + 15808, ctx.r6.u32);
	// stw r5,3080(r31)
	REX_STORE_U32(r31.u32 + 3080, ctx.r5.u32);
loc_826FF698:
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x826ff6cc
	if (ctx.cr6.lt) goto loc_826FF6CC;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r27,15596(r31)
	REX_STORE_U32(r31.u32 + 15596, r27.u32);
	// addi r9,r31,2664
	ctx.r9.s64 = r31.s64 + 2664;
	// addi r8,r31,2704
	ctx.r8.s64 = r31.s64 + 2704;
	// stw r11,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r11.u32);
	// stw r9,2928(r31)
	REX_STORE_U32(r31.u32 + 2928, ctx.r9.u32);
	// stw r8,2940(r31)
	REX_STORE_U32(r31.u32 + 2940, ctx.r8.u32);
	// stw r11,348(r31)
	REX_STORE_U32(r31.u32 + 348, ctx.r11.u32);
	// stw r11,20932(r31)
	REX_STORE_U32(r31.u32 + 20932, ctx.r11.u32);
	// stw r11,14836(r31)
	REX_STORE_U32(r31.u32 + 14836, ctx.r11.u32);
	// stw r11,21868(r31)
	REX_STORE_U32(r31.u32 + 21868, ctx.r11.u32);
loc_826FF6CC:
	// li r24,1
	r24.s64 = 1;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x826ff700
	if (ctx.cr6.eq) goto loc_826FF700;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8270f440
	ctx.lr = 0x826FF6E0;
	sub_8270F440(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826ffcbc
	if (ctx.cr6.eq) goto loc_826FFCBC;
loc_826FF6EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fb1d0
	ctx.lr = 0x826FF6F4;
	sub_826FB1D0(ctx, base);
loc_826FF6F4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf0
	return;
loc_826FF700:
	// lwz r11,22088(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22088);
	// li r26,2
	r26.s64 = 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ff888
	if (ctx.cr6.eq) goto loc_826FF888;
	// lwz r30,84(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mr r29,r24
	r29.u64 = r24.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x826ff784
	if (!ctx.cr6.lt) goto loc_826FF784;
loc_826FF72C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826ff784
	if (ctx.cr6.eq) goto loc_826FF784;
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
	// bge 0x826ff774
	if (!ctx.cr0.lt) goto loc_826FF774;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FF774;
	sub_82725E38(ctx, base);
loc_826FF774:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826ff72c
	if (ctx.cr6.gt) goto loc_826FF72C;
loc_826FF784:
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
	// bge 0x826ff7bc
	if (!ctx.cr0.lt) goto loc_826FF7BC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FF7BC;
	sub_82725E38(ctx, base);
loc_826FF7BC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x826ff888
	if (ctx.cr6.eq) goto loc_826FF888;
	// lwz r30,84(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mr r29,r24
	r29.u64 = r24.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x826ff838
	if (!ctx.cr6.lt) goto loc_826FF838;
loc_826FF7E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826ff838
	if (ctx.cr6.eq) goto loc_826FF838;
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
	// bge 0x826ff828
	if (!ctx.cr0.lt) goto loc_826FF828;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FF828;
	sub_82725E38(ctx, base);
loc_826FF828:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826ff7e0
	if (ctx.cr6.gt) goto loc_826FF7E0;
loc_826FF838:
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
	// bge 0x826ff870
	if (!ctx.cr0.lt) goto loc_826FF870;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x826FF870;
	sub_82725E38(ctx, base);
loc_826FF870:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x826ff880
	if (!ctx.cr6.eq) goto loc_826FF880;
	// stw r26,22364(r31)
	REX_STORE_U32(r31.u32 + 22364, r26.u32);
	// b 0x826ff88c
	goto loc_826FF88C;
loc_826FF880:
	// stw r24,22364(r31)
	REX_STORE_U32(r31.u32 + 22364, r24.u32);
	// b 0x826ff88c
	goto loc_826FF88C;
loc_826FF888:
	// stw r27,22364(r31)
	REX_STORE_U32(r31.u32 + 22364, r27.u32);
loc_826FF88C:
	// lwz r11,22364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22364);
	// mr r28,r27
	r28.u64 = r27.u64;
	// stw r27,20908(r31)
	REX_STORE_U32(r31.u32 + 20908, r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,20904(r31)
	REX_STORE_U32(r31.u32 + 20904, r27.u32);
	// bne cr6,0x826ffac8
	if (!ctx.cr6.eq) goto loc_826FFAC8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r3,r11,28064
	ctx.r3.s64 = ctx.r11.s64 + 28064;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// addi r11,r10,27976
	ctx.r11.s64 = ctx.r10.s64 + 27976;
	// stw r3,1824(r31)
	REX_STORE_U32(r31.u32 + 1824, ctx.r3.u32);
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// addi r10,r9,27308
	ctx.r10.s64 = ctx.r9.s64 + 27308;
	// stw r11,1828(r31)
	REX_STORE_U32(r31.u32 + 1828, ctx.r11.u32);
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// addi r9,r8,27708
	ctx.r9.s64 = ctx.r8.s64 + 27708;
	// stw r10,1836(r31)
	REX_STORE_U32(r31.u32 + 1836, ctx.r10.u32);
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// addi r8,r7,27540
	ctx.r8.s64 = ctx.r7.s64 + 27540;
	// stw r9,1840(r31)
	REX_STORE_U32(r31.u32 + 1840, ctx.r9.u32);
	// lis r4,-32247
	ctx.r4.s64 = -2113339392;
	// addi r7,r6,27812
	ctx.r7.s64 = ctx.r6.s64 + 27812;
	// stw r8,1844(r31)
	REX_STORE_U32(r31.u32 + 1844, ctx.r8.u32);
	// addi r6,r5,28044
	ctx.r6.s64 = ctx.r5.s64 + 28044;
	// addi r5,r4,28128
	ctx.r5.s64 = ctx.r4.s64 + 28128;
	// stw r7,1848(r31)
	REX_STORE_U32(r31.u32 + 1848, ctx.r7.u32);
	// stw r6,1864(r31)
	REX_STORE_U32(r31.u32 + 1864, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,1868(r31)
	REX_STORE_U32(r31.u32 + 1868, ctx.r5.u32);
	// bl 0x82703840
	ctx.lr = 0x826FF90C;
	sub_82703840(ctx, base);
	// stw r27,20904(r31)
	REX_STORE_U32(r31.u32 + 20904, r27.u32);
	// stw r27,20908(r31)
	REX_STORE_U32(r31.u32 + 20908, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r27,20912(r31)
	REX_STORE_U32(r31.u32 + 20912, r27.u32);
	// mr r29,r27
	r29.u64 = r27.u64;
	// bl 0x8271a7f0
	ctx.lr = 0x826FF924;
	sub_8271A7F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8270da78
	ctx.lr = 0x826FF92C;
	sub_8270DA78(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826ff6ec
	if (!ctx.cr6.eq) goto loc_826FF6EC;
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826ff958
	if (ctx.cr6.eq) goto loc_826FF958;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x826ff958
	if (ctx.cr6.eq) goto loc_826FF958;
	// lwz r10,22444(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22444);
	// stw r27,22444(r31)
	REX_STORE_U32(r31.u32 + 22444, r27.u32);
	// stw r10,22448(r31)
	REX_STORE_U32(r31.u32 + 22448, ctx.r10.u32);
loc_826FF958:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x826ffcbc
	if (!ctx.cr6.eq) goto loc_826FFCBC;
	// lwz r11,22408(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ffaa4
	if (ctx.cr6.eq) goto loc_826FFAA4;
	// lwz r11,14820(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14820);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ffaa4
	if (ctx.cr6.eq) goto loc_826FFAA4;
	// lwz r11,14804(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826ffaa4
	if (!ctx.cr6.gt) goto loc_826FFAA4;
	// lwz r11,3400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3400);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826ff994
	if (!ctx.cr6.eq) goto loc_826FF994;
	// stw r27,3400(r31)
	REX_STORE_U32(r31.u32 + 3400, r27.u32);
loc_826FF994:
	// lwz r11,3420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3420);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ff9ac
	if (ctx.cr6.eq) goto loc_826FF9AC;
	// bl 0x827460b0
	ctx.lr = 0x826FF9A8;
	sub_827460B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_826FF9AC:
	// bl 0x82746150
	ctx.lr = 0x826FF9B0;
	sub_82746150(ctx, base);
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lwz r4,3756(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3756);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r3,3744(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// bl 0x826a1e70
	ctx.lr = 0x826FF9C8;
	sub_826A1E70(ctx, base);
	// lwz r8,208(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r9,216(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lwz r4,3760(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3760);
	// lwz r3,3748(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3748);
	// mullw r5,r9,r8
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// bl 0x826a1e70
	ctx.lr = 0x826FF9E0;
	sub_826A1E70(ctx, base);
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r7,216(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lwz r4,3764(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3764);
	// lwz r3,3752(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3752);
	// mullw r5,r7,r6
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// bl 0x826a1e70
	ctx.lr = 0x826FF9F8;
	sub_826A1E70(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// lwz r3,1772(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x826a2e60
	ctx.lr = 0x826FFA0C;
	sub_826A2E60(ctx, base);
	// lwz r10,144(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 144);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1780(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1780);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x826FFA20;
	sub_826A2E60(ctx, base);
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826ffaa4
	if (!ctx.cr6.gt) goto loc_826FFAA4;
	// addi r8,r11,-24
	ctx.r8.s64 = ctx.r11.s64 + -24;
loc_826FFA38:
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826ffa94
	if (!ctx.cr6.gt) goto loc_826FFA94;
loc_826FFA48:
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r6,3072(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3072);
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// sthx r27,r9,r6
	REX_STORE_U16(ctx.r9.u32 + ctx.r6.u32, r27.u16);
	// lwz r10,3072(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3072);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r27,2(r4)
	REX_STORE_U16(ctx.r4.u32 + 2, r27.u16);
	// lwz r3,3076(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3076);
	// stwx r27,r5,r3
	REX_STORE_U32(ctx.r5.u32 + ctx.r3.u32, r27.u32);
	// lwz r10,24(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// oris r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 131072;
	// stwu r9,24(r8)
	ea = 24 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// lwz r6,136(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x826ffa48
	if (ctx.cr6.lt) goto loc_826FFA48;
loc_826FFA94:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826ffa38
	if (ctx.cr6.lt) goto loc_826FFA38;
loc_826FFAA4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,20912(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20912);
	// bl 0x8274d2d8
	ctx.lr = 0x826FFAB0;
	sub_8274D2D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fb118
	ctx.lr = 0x826FFAB8;
	sub_826FB118(ctx, base);
	// stw r24,3448(r31)
	REX_STORE_U32(r31.u32 + 3448, r24.u32);
	// stw r24,22316(r31)
	REX_STORE_U32(r31.u32 + 22316, r24.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf0
	return;
loc_826FFAC8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r3,r11,28288
	ctx.r3.s64 = ctx.r11.s64 + 28288;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// stw r3,1824(r31)
	REX_STORE_U32(r31.u32 + 1824, ctx.r3.u32);
	// addi r11,r10,28184
	ctx.r11.s64 = ctx.r10.s64 + 28184;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// addi r10,r9,28148
	ctx.r10.s64 = ctx.r9.s64 + 28148;
	// stw r11,1828(r31)
	REX_STORE_U32(r31.u32 + 1828, ctx.r11.u32);
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// addi r9,r8,28352
	ctx.r9.s64 = ctx.r8.s64 + 28352;
	// stw r10,1836(r31)
	REX_STORE_U32(r31.u32 + 1836, ctx.r10.u32);
	// addi r8,r7,28252
	ctx.r8.s64 = ctx.r7.s64 + 28252;
	// lis r4,-32247
	ctx.r4.s64 = -2113339392;
	// stw r9,1840(r31)
	REX_STORE_U32(r31.u32 + 1840, ctx.r9.u32);
	// addi r7,r6,28388
	ctx.r7.s64 = ctx.r6.s64 + 28388;
	// stw r8,1844(r31)
	REX_STORE_U32(r31.u32 + 1844, ctx.r8.u32);
	// addi r6,r5,28424
	ctx.r6.s64 = ctx.r5.s64 + 28424;
	// addi r5,r4,28444
	ctx.r5.s64 = ctx.r4.s64 + 28444;
	// stw r7,1848(r31)
	REX_STORE_U32(r31.u32 + 1848, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r6,1864(r31)
	REX_STORE_U32(r31.u32 + 1864, ctx.r6.u32);
	// stw r5,1868(r31)
	REX_STORE_U32(r31.u32 + 1868, ctx.r5.u32);
	// bne cr6,0x827004dc
	if (!ctx.cr6.eq) goto loc_827004DC;
	// bl 0x82703840
	ctx.lr = 0x826FFB38;
	sub_82703840(ctx, base);
	// stw r24,20904(r31)
	REX_STORE_U32(r31.u32 + 20904, r24.u32);
	// stw r27,20912(r31)
	REX_STORE_U32(r31.u32 + 20912, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// bl 0x8271a7f0
	ctx.lr = 0x826FFB4C;
	sub_8271A7F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8273aa48
	ctx.lr = 0x826FFB54;
	sub_8273AA48(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826ff6ec
	if (!ctx.cr6.eq) goto loc_826FF6EC;
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826ffb80
	if (ctx.cr6.eq) goto loc_826FFB80;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x826ffb80
	if (ctx.cr6.eq) goto loc_826FFB80;
	// lwz r10,22444(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22444);
	// stw r26,22444(r31)
	REX_STORE_U32(r31.u32 + 22444, r26.u32);
	// stw r10,22448(r31)
	REX_STORE_U32(r31.u32 + 22448, ctx.r10.u32);
loc_826FFB80:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x826ffcbc
	if (!ctx.cr6.eq) goto loc_826FFCBC;
	// lwz r11,22408(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ffc20
	if (ctx.cr6.eq) goto loc_826FFC20;
	// lwz r11,14820(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14820);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ffc20
	if (ctx.cr6.eq) goto loc_826FFC20;
	// lwz r11,14804(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826ffc20
	if (!ctx.cr6.gt) goto loc_826FFC20;
	// lwz r11,3400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3400);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826ffbbc
	if (!ctx.cr6.eq) goto loc_826FFBBC;
	// stw r27,3400(r31)
	REX_STORE_U32(r31.u32 + 3400, r27.u32);
loc_826FFBBC:
	// lwz r11,3420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3420);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ffbd4
	if (ctx.cr6.eq) goto loc_826FFBD4;
	// bl 0x827460b0
	ctx.lr = 0x826FFBD0;
	sub_827460B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_826FFBD4:
	// bl 0x82746150
	ctx.lr = 0x826FFBD8;
	sub_82746150(ctx, base);
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lwz r4,3756(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3756);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r3,3744(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// bl 0x826a1e70
	ctx.lr = 0x826FFBF0;
	sub_826A1E70(ctx, base);
	// lwz r8,208(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r9,216(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lwz r4,3760(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3760);
	// lwz r3,3748(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3748);
	// mullw r5,r9,r8
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// bl 0x826a1e70
	ctx.lr = 0x826FFC08;
	sub_826A1E70(ctx, base);
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r7,216(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lwz r4,3764(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3764);
	// lwz r3,3752(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3752);
	// mullw r5,r7,r6
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// bl 0x826a1e70
	ctx.lr = 0x826FFC20;
	sub_826A1E70(ctx, base);
loc_826FFC20:
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 140);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x826ffc74
	if (!ctx.cr6.gt) goto loc_826FFC74;
	// addi r10,r11,-24
	ctx.r10.s64 = ctx.r11.s64 + -24;
loc_826FFC38:
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x826ffc64
	if (!ctx.cr6.gt) goto loc_826FFC64;
loc_826FFC48:
	// lwz r8,24(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// oris r7,r8,2
	ctx.r7.u64 = ctx.r8.u64 | 131072;
	// stwu r7,24(r10)
	ea = 24 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// lwz r6,136(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x826ffc48
	if (ctx.cr6.lt) goto loc_826FFC48;
loc_826FFC64:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826ffc38
	if (ctx.cr6.lt) goto loc_826FFC38;
loc_826FFC74:
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 140);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r3,3076(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3076);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x826FFC98;
	sub_826A2E60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,20912(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20912);
	// bl 0x8274d2d8
	ctx.lr = 0x826FFCA4;
	sub_8274D2D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fb118
	ctx.lr = 0x826FFCAC;
	sub_826FB118(ctx, base);
	// stw r24,3448(r31)
	REX_STORE_U32(r31.u32 + 3448, r24.u32);
	// stw r24,22316(r31)
	REX_STORE_U32(r31.u32 + 22316, r24.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf0
	return;
loc_826FFCBC:
	// lwz r11,22512(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22512);
	// stw r24,1968(r31)
	REX_STORE_U32(r31.u32 + 1968, r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,20988(r31)
	REX_STORE_U32(r31.u32 + 20988, r27.u32);
	// beq cr6,0x826ffce0
	if (ctx.cr6.eq) goto loc_826FFCE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82716b50
	ctx.lr = 0x826FFCD8;
	sub_82716B50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827002a8
	if (!ctx.cr6.eq) goto loc_827002A8;
loc_826FFCE0:
	// lwz r10,284(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 284);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826ffd1c
	if (ctx.cr6.eq) goto loc_826FFD1C;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x826ffd1c
	if (ctx.cr6.eq) goto loc_826FFD1C;
	// lwz r11,3692(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3692);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826ffe18
	if (!ctx.cr6.eq) goto loc_826FFE18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fb118
	ctx.lr = 0x826FFD08;
	sub_826FB118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827002a8
	if (!ctx.cr6.eq) goto loc_827002A8;
loc_826FFD10:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf0
	return;
loc_826FFD1C:
	// lwz r11,14820(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14820);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ffe18
	if (ctx.cr6.eq) goto loc_826FFE18;
	// lwz r11,14804(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826ffe08
	if (!ctx.cr6.gt) goto loc_826FFE08;
	// lwz r11,3400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3400);
	// cmpwi cr6,r11,-3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -3, ctx.xer);
	// bne cr6,0x826ffd78
	if (!ctx.cr6.eq) goto loc_826FFD78;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x826ff490
	if (ctx.cr6.eq) goto loc_826FF490;
	// lwz r11,22296(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22296);
	// lwz r10,3420(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3420);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,3400(r31)
	REX_STORE_U32(r31.u32 + 3400, ctx.r8.u32);
	// beq cr6,0x826ffd6c
	if (ctx.cr6.eq) goto loc_826FFD6C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827460b0
	ctx.lr = 0x826FFD6C;
	sub_827460B0(ctx, base);
loc_826FFD6C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82746150
	ctx.lr = 0x826FFD74;
	sub_82746150(ctx, base);
	// b 0x826ffe18
	goto loc_826FFE18;
loc_826FFD78:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x826ffdbc
	if (ctx.cr6.eq) goto loc_826FFDBC;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x826ffdbc
	if (ctx.cr6.eq) goto loc_826FFDBC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826ffd98
	if (!ctx.cr6.eq) goto loc_826FFD98;
	// stw r27,3400(r31)
	REX_STORE_U32(r31.u32 + 3400, r27.u32);
	// b 0x826ffda4
	goto loc_826FFDA4;
loc_826FFD98:
	// lwz r11,3420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ffdac
	if (ctx.cr6.eq) goto loc_826FFDAC;
loc_826FFDA4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827460b0
	ctx.lr = 0x826FFDAC;
	sub_827460B0(ctx, base);
loc_826FFDAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82746150
	ctx.lr = 0x826FFDB4;
	sub_82746150(ctx, base);
	// stw r27,3408(r31)
	REX_STORE_U32(r31.u32 + 3408, r27.u32);
	// b 0x826ffe18
	goto loc_826FFE18;
loc_826FFDBC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826ffdf0
	if (!ctx.cr6.eq) goto loc_826FFDF0;
	// lwz r11,22296(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826ffdf0
	if (!ctx.cr6.eq) goto loc_826FFDF0;
	// stw r24,3432(r31)
	REX_STORE_U32(r31.u32 + 3432, r24.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r24,3708(r31)
	REX_STORE_U16(r31.u32 + 3708, r24.u16);
	// bl 0x826fb118
	ctx.lr = 0x826FFDE0;
	sub_826FB118(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r24,15584(r31)
	REX_STORE_U32(r31.u32 + 15584, r24.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf0
	return;
loc_826FFDF0:
	// lwz r11,3420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ffe18
	if (ctx.cr6.eq) goto loc_826FFE18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827460b0
	ctx.lr = 0x826FFE04;
	sub_827460B0(ctx, base);
	// b 0x826ffe18
	goto loc_826FFE18;
loc_826FFE08:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x827077d0
	ctx.lr = 0x826FFE18;
	sub_827077D0(ctx, base);
loc_826FFE18:
	// lwz r11,248(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 248);
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// stw r11,12680(r10)
	REX_STORE_U32(ctx.r10.u32 + 12680, ctx.r11.u32);
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827002b0
	if (ctx.cr6.eq) goto loc_827002B0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x827002b0
	if (ctx.cr6.eq) goto loc_827002B0;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// stw r27,12676(r10)
	REX_STORE_U32(ctx.r10.u32 + 12676, r27.u32);
	// bl 0x82703500
	ctx.lr = 0x826FFE4C;
	sub_82703500(ctx, base);
	// lwz r9,14820(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 14820);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82700010
	if (ctx.cr6.eq) goto loc_82700010;
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82700010
	if (ctx.cr6.eq) goto loc_82700010;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x827001d0
	if (!ctx.cr6.eq) goto loc_827001D0;
	// lwz r11,3400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3400);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826ffea0
	if (!ctx.cr6.eq) goto loc_826FFEA0;
	// lwz r11,22296(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826ffea0
	if (!ctx.cr6.eq) goto loc_826FFEA0;
	// stw r24,3432(r31)
	REX_STORE_U32(r31.u32 + 3432, r24.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r24,3708(r31)
	REX_STORE_U16(r31.u32 + 3708, r24.u16);
	// bl 0x826fb118
	ctx.lr = 0x826FFE94;
	sub_826FB118(ctx, base);
	// stw r24,15584(r31)
	REX_STORE_U32(r31.u32 + 15584, r24.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf0
	return;
loc_826FFEA0:
	// lwz r11,3408(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826fff20
	if (ctx.cr6.eq) goto loc_826FFF20;
	// lwz r11,3420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3420);
	// stw r27,3408(r31)
	REX_STORE_U32(r31.u32 + 3408, r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ffec4
	if (ctx.cr6.eq) goto loc_826FFEC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827460b0
	ctx.lr = 0x826FFEC4;
	sub_827460B0(ctx, base);
loc_826FFEC4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82746150
	ctx.lr = 0x826FFECC;
	sub_82746150(ctx, base);
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r4,3756(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3756);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r3,3744(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// bl 0x826a1e70
	ctx.lr = 0x826FFEE4;
	sub_826A1E70(ctx, base);
	// lwz r9,212(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lwz r8,204(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r4,3760(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3760);
	// lwz r3,3748(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3748);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// srawi r5,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 2;
	// bl 0x826a1e70
	ctx.lr = 0x826FFF00;
	sub_826A1E70(ctx, base);
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r6,212(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lwz r4,3764(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3764);
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lwz r3,3752(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3752);
	// srawi r5,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// bl 0x826a1e70
	ctx.lr = 0x826FFF1C;
	sub_826A1E70(ctx, base);
	// stw r24,3420(r31)
	REX_STORE_U32(r31.u32 + 3420, r24.u32);
loc_826FFF20:
	// rlwinm r11,r25,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 16) & 0xFFFF0000;
	// srawi r11,r11,28
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 28;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x826fffdc
	if (ctx.cr6.eq) goto loc_826FFFDC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x826fffdc
	if (ctx.cr6.eq) goto loc_826FFFDC;
	// lwz r11,3420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826fff4c
	if (ctx.cr6.eq) goto loc_826FFF4C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827460b0
	ctx.lr = 0x826FFF4C;
	sub_827460B0(ctx, base);
loc_826FFF4C:
	// lwz r11,3948(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826fff90
	if (!ctx.cr6.eq) goto loc_826FFF90;
	// lwz r11,20904(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20904);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826fff90
	if (!ctx.cr6.eq) goto loc_826FFF90;
	// lwz r11,3080(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3080);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FFF74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3712(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3712);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,22480(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22480);
	// stw r10,608(r11)
	REX_STORE_U32(ctx.r11.u32 + 608, ctx.r10.u32);
	// stw r24,15592(r31)
	REX_STORE_U32(r31.u32 + 15592, r24.u32);
	// stw r24,15568(r31)
	REX_STORE_U32(r31.u32 + 15568, r24.u32);
	// b 0x827001d0
	goto loc_827001D0;
loc_826FFF90:
	// lwz r11,20904(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20904);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826fffc0
	if (ctx.cr6.eq) goto loc_826FFFC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827d15f8
	ctx.lr = 0x826FFFA4;
	sub_827D15F8(ctx, base);
	// lwz r11,3712(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3712);
	// lwz r10,22480(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22480);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r10,608(r11)
	REX_STORE_U32(ctx.r11.u32 + 608, ctx.r10.u32);
	// stw r24,15592(r31)
	REX_STORE_U32(r31.u32 + 15592, r24.u32);
	// stw r24,15568(r31)
	REX_STORE_U32(r31.u32 + 15568, r24.u32);
	// b 0x827001d0
	goto loc_827001D0;
loc_826FFFC0:
	// lwz r11,3712(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3712);
	// li r30,6
	r30.s64 = 6;
	// lwz r10,22480(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22480);
	// stw r10,608(r11)
	REX_STORE_U32(ctx.r11.u32 + 608, ctx.r10.u32);
	// stw r24,15592(r31)
	REX_STORE_U32(r31.u32 + 15592, r24.u32);
	// stw r24,15568(r31)
	REX_STORE_U32(r31.u32 + 15568, r24.u32);
	// b 0x827001d0
	goto loc_827001D0;
loc_826FFFDC:
	// lwz r11,3948(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ffff8
	if (ctx.cr6.eq) goto loc_826FFFF8;
	// stw r24,15592(r31)
	REX_STORE_U32(r31.u32 + 15592, r24.u32);
	// li r30,6
	r30.s64 = 6;
	// stw r24,15568(r31)
	REX_STORE_U32(r31.u32 + 15568, r24.u32);
	// b 0x827001d0
	goto loc_827001D0;
loc_826FFFF8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82746088
	ctx.lr = 0x82700000;
	sub_82746088(ctx, base);
	// stw r24,15592(r31)
	REX_STORE_U32(r31.u32 + 15592, r24.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r24,15568(r31)
	REX_STORE_U32(r31.u32 + 15568, r24.u32);
	// b 0x827001d0
	goto loc_827001D0;
loc_82700010:
	// lwz r11,14804(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827000d8
	if (!ctx.cr6.eq) goto loc_827000D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827077d0
	ctx.lr = 0x82700028;
	sub_827077D0(ctx, base);
	// lwz r11,14852(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14852);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82700044
	if (ctx.cr6.eq) goto loc_82700044;
	// lwz r11,14856(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14856);
	// lwz r10,14860(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 14860);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82700108
	if (!ctx.cr6.eq) goto loc_82700108;
loc_82700044:
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x82700108
	if (!ctx.cr6.lt) goto loc_82700108;
	// lwz r11,20624(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20624);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82700108
	if (ctx.cr6.eq) goto loc_82700108;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r30,15888(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 15888);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lwz r9,164(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 164);
	// lwz r6,220(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r5,172(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lwz r3,3756(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3756);
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x82700094;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,168(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lwz r7,224(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r6,176(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 176);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r4,3764(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3764);
	// lwz r3,3760(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3760);
	// lwz r30,196(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 196);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// lwz r11,15884(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827000D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82700108
	goto loc_82700108;
loc_827000D8:
	// lwz r11,3400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3400);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827000ec
	if (!ctx.cr6.eq) goto loc_827000EC;
	// stw r27,3400(r31)
	REX_STORE_U32(r31.u32 + 3400, r27.u32);
	// b 0x827000f8
	goto loc_827000F8;
loc_827000EC:
	// lwz r11,3420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82700100
	if (ctx.cr6.eq) goto loc_82700100;
loc_827000F8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827460b0
	ctx.lr = 0x82700100;
	sub_827460B0(ctx, base);
loc_82700100:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82746150
	ctx.lr = 0x82700108;
	sub_82746150(ctx, base);
loc_82700108:
	// stw r27,3408(r31)
	REX_STORE_U32(r31.u32 + 3408, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82716c40
	ctx.lr = 0x82700114;
	sub_82716C40(ctx, base);
	// lwz r11,15932(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15932);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82700124
	if (ctx.cr6.eq) goto loc_82700124;
	// stw r27,15940(r31)
	REX_STORE_U32(r31.u32 + 15940, r27.u32);
loc_82700124:
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x82700194
	if (ctx.cr6.lt) goto loc_82700194;
	// lwz r11,14852(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14852);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82700144
	if (ctx.cr6.eq) goto loc_82700144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8270c900
	ctx.lr = 0x82700144;
	sub_8270C900(ctx, base);
loc_82700144:
	// lwz r11,14804(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82700158
	if (ctx.cr6.eq) goto loc_82700158;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82703a00
	ctx.lr = 0x82700158;
	sub_82703A00(ctx, base);
loc_82700158:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82743a88
	ctx.lr = 0x82700160;
	sub_82743A88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827422f8
	ctx.lr = 0x82700168;
	sub_827422F8(ctx, base);
	// lwz r11,20904(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20904);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82700180
	if (ctx.cr6.eq) goto loc_82700180;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827d1488
	ctx.lr = 0x8270017C;
	sub_827D1488(ctx, base);
	// b 0x827001a4
	goto loc_827001A4;
loc_82700180:
	// lwz r11,3948(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82700194
	if (ctx.cr6.eq) goto loc_82700194;
	// li r30,6
	r30.s64 = 6;
	// b 0x827001a8
	goto loc_827001A8;
loc_82700194:
	// lwz r11,15808(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15808);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827001A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827001A4:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_827001A8:
	// lwz r11,3712(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3712);
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// lwz r10,22480(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22480);
	// stw r10,608(r11)
	REX_STORE_U32(ctx.r11.u32 + 608, ctx.r10.u32);
	// bne cr6,0x827001c8
	if (!ctx.cr6.eq) goto loc_827001C8;
	// li r22,4
	r22.s64 = 4;
	// mr r30,r27
	r30.u64 = r27.u64;
	// b 0x827001d0
	goto loc_827001D0;
loc_827001C8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x826ff6ec
	if (!ctx.cr6.eq) goto loc_826FF6EC;
loc_827001D0:
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827001e0
	if (!ctx.cr6.eq) goto loc_827001E0;
	// stw r27,3404(r31)
	REX_STORE_U32(r31.u32 + 3404, r27.u32);
loc_827001E0:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// bne cr6,0x82700578
	if (!ctx.cr6.eq) goto loc_82700578;
loc_827001E8:
	// li r22,4
	r22.s64 = 4;
loc_827001EC:
	// sth r24,3708(r31)
	REX_STORE_U16(r31.u32 + 3708, r24.u16);
	// sth r24,0(r23)
	REX_STORE_U16(r23.u32 + 0, r24.u16);
	// lwz r11,3476(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3476);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r10,20904(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20904);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// stw r8,15584(r31)
	REX_STORE_U32(r31.u32 + 15584, ctx.r8.u32);
	// bne cr6,0x82700290
	if (!ctx.cr6.eq) goto loc_82700290;
	// lwz r9,20908(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20908);
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r28.s32, ctx.xer);
	// bne cr6,0x82700290
	if (!ctx.cr6.eq) goto loc_82700290;
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82700238
	if (ctx.cr6.eq) goto loc_82700238;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82700254
	if (!ctx.cr6.eq) goto loc_82700254;
loc_82700238:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82700248
	if (ctx.cr6.eq) goto loc_82700248;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82700254
	if (!ctx.cr6.eq) goto loc_82700254;
loc_82700248:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,20912(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20912);
	// bl 0x8274d2d8
	ctx.lr = 0x82700254;
	sub_8274D2D8(ctx, base);
loc_82700254:
	// lwz r11,22364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22364);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82700290
	if (!ctx.cr6.eq) goto loc_82700290;
	// lwz r11,22000(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22000);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82700290
	if (!ctx.cr6.eq) goto loc_82700290;
	// lwz r11,22004(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22004);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82700290
	if (!ctx.cr6.eq) goto loc_82700290;
	// lwz r11,22360(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22360);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82700290
	if (ctx.cr6.eq) goto loc_82700290;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fb370
	ctx.lr = 0x8270028C;
	sub_826FB370(ctx, base);
	// stw r24,15596(r31)
	REX_STORE_U32(r31.u32 + 15596, r24.u32);
loc_82700290:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fb118
	ctx.lr = 0x82700298;
	sub_826FB118(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bne cr6,0x827002a4
	if (!ctx.cr6.eq) goto loc_827002A4;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
loc_827002A4:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_827002A8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf0
	return;
loc_827002B0:
	// lwz r10,15932(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15932);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827002c8
	if (ctx.cr6.eq) goto loc_827002C8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x827002c8
	if (ctx.cr6.eq) goto loc_827002C8;
	// stw r27,15940(r31)
	REX_STORE_U32(r31.u32 + 15940, r27.u32);
loc_827002C8:
	// lwz r11,14852(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14852);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827002dc
	if (ctx.cr6.eq) goto loc_827002DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8270c900
	ctx.lr = 0x827002DC;
	sub_8270C900(ctx, base);
loc_827002DC:
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// stw r24,12676(r10)
	REX_STORE_U32(ctx.r10.u32 + 12676, r24.u32);
	// lwz r9,20904(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20904);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82700300
	if (ctx.cr6.eq) goto loc_82700300;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827d1368
	ctx.lr = 0x827002FC;
	sub_827D1368(ctx, base);
	// b 0x8270033c
	goto loc_8270033C;
loc_82700300:
	// lwz r11,3972(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3972);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82700318
	if (ctx.cr6.eq) goto loc_82700318;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8273fb88
	ctx.lr = 0x82700314;
	sub_8273FB88(ctx, base);
	// b 0x8270033c
	goto loc_8270033C;
loc_82700318:
	// lwz r11,3948(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270032c
	if (ctx.cr6.eq) goto loc_8270032C;
	// li r30,6
	r30.s64 = 6;
	// b 0x82700340
	goto loc_82700340;
loc_8270032C:
	// lwz r11,15804(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15804);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270033C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8270033C:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82700340:
	// lwz r11,3712(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3712);
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// lwz r10,22480(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22480);
	// stw r10,608(r11)
	REX_STORE_U32(ctx.r11.u32 + 608, ctx.r10.u32);
	// bne cr6,0x82700360
	if (!ctx.cr6.eq) goto loc_82700360;
	// li r22,4
	r22.s64 = 4;
	// mr r30,r27
	r30.u64 = r27.u64;
	// b 0x82700368
	goto loc_82700368;
loc_82700360:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x826ff6ec
	if (!ctx.cr6.eq) goto loc_826FF6EC;
loc_82700368:
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827004d4
	if (ctx.cr6.eq) goto loc_827004D4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82700384
	if (ctx.cr6.eq) goto loc_82700384;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82700390
	if (!ctx.cr6.eq) goto loc_82700390;
loc_82700384:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82704f80
	ctx.lr = 0x8270038C;
	sub_82704F80(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82700390:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x826ff6f4
	if (!ctx.cr6.eq) goto loc_826FF6F4;
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x82700454
	if (ctx.cr6.lt) goto loc_82700454;
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82700454
	if (ctx.cr6.eq) goto loc_82700454;
	// lwz r11,14804(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82700454
	if (!ctx.cr6.gt) goto loc_82700454;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82700430
	if (!ctx.cr6.gt) goto loc_82700430;
loc_827003CC:
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82700420
	if (!ctx.cr6.gt) goto loc_82700420;
loc_827003DC:
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r8,3072(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3072);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// sthx r27,r6,r8
	REX_STORE_U16(ctx.r6.u32 + ctx.r8.u32, r27.u16);
	// lwz r8,3072(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3072);
	// lwz r5,136(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mullw r9,r5,r10
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sth r27,2(r3)
	REX_STORE_U16(ctx.r3.u32 + 2, r27.u16);
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x827003dc
	if (ctx.cr6.lt) goto loc_827003DC;
loc_82700420:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827003cc
	if (ctx.cr6.lt) goto loc_827003CC;
loc_82700430:
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 140);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r3,3076(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3076);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x82700454;
	sub_826A2E60(ctx, base);
loc_82700454:
	// lwz r11,14804(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827004d4
	if (!ctx.cr6.gt) goto loc_827004D4;
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x827004d4
	if (ctx.cr6.eq) goto loc_827004D4;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x827004d4
	if (!ctx.cr6.gt) goto loc_827004D4;
loc_8270047C:
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x827004c4
	if (!ctx.cr6.gt) goto loc_827004C4;
loc_8270048C:
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r9,276(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 276);
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r5,r6,0,15,13
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// stwx r5,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u32);
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8270048c
	if (ctx.cr6.lt) goto loc_8270048C;
loc_827004C4:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8270047c
	if (ctx.cr6.lt) goto loc_8270047C;
loc_827004D4:
	// stw r24,3692(r31)
	REX_STORE_U32(r31.u32 + 3692, r24.u32);
	// b 0x827001ec
	goto loc_827001EC;
loc_827004DC:
	// bl 0x82703840
	ctx.lr = 0x827004E0;
	sub_82703840(ctx, base);
	// stw r24,20904(r31)
	REX_STORE_U32(r31.u32 + 20904, r24.u32);
	// stw r24,20908(r31)
	REX_STORE_U32(r31.u32 + 20908, r24.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
	// bl 0x8271a7f0
	ctx.lr = 0x827004F8;
	sub_8271A7F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8273cf58
	ctx.lr = 0x82700500;
	sub_8273CF58(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826ff6ec
	if (!ctx.cr6.eq) goto loc_826FF6EC;
	// lwz r11,22000(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22000);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82700530
	if (ctx.cr6.eq) goto loc_82700530;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82700530
	if (ctx.cr6.eq) goto loc_82700530;
	// lwz r11,22444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22444);
	// stw r24,22444(r31)
	REX_STORE_U32(r31.u32 + 22444, r24.u32);
	// stw r11,22448(r31)
	REX_STORE_U32(r31.u32 + 22448, ctx.r11.u32);
	// b 0x82700534
	goto loc_82700534;
loc_82700530:
	// stw r26,284(r31)
	REX_STORE_U32(r31.u32 + 284, r26.u32);
loc_82700534:
	// rlwinm r11,r25,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 16) & 0xFFFF0000;
	// srawi r11,r11,28
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 28;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82700558
	if (ctx.cr6.eq) goto loc_82700558;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82700558
	if (ctx.cr6.eq) goto loc_82700558;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82739b48
	ctx.lr = 0x82700554;
	sub_82739B48(ctx, base);
	// b 0x82700560
	goto loc_82700560;
loc_82700558:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82746088
	ctx.lr = 0x82700560;
	sub_82746088(ctx, base);
loc_82700560:
	// lwz r11,3712(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3712);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,22480(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22480);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// stw r10,608(r11)
	REX_STORE_U32(ctx.r11.u32 + 608, ctx.r10.u32);
	// beq cr6,0x827001e8
	if (ctx.cr6.eq) goto loc_827001E8;
loc_82700578:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x827001ec
	if (ctx.cr6.eq) goto loc_827001EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fb1d0
	ctx.lr = 0x82700588;
	sub_826FB1D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_827824A0) {
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
	ctx.lr = 0x827824A8;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r31,4
	r31.s64 = 4;
	// stw r6,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// slw r18,r31,r10
	r18.u64 = ctx.r10.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// subfic r19,r9,8
	ctx.xer.ca = ctx.r9.u32 <= 8;
	r19.u64 = static_cast<uint64_t>(8) - ctx.r9.u64;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// slw. r11,r6,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82782698
	if (!ctx.cr0.gt) goto loc_82782698;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stw r11,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r11.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
loc_827824E8:
	// li r20,0
	r20.s64 = 0;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// ble cr6,0x827825d4
	if (!ctx.cr6.gt) goto loc_827825D4;
	// addi r11,r18,-1
	ctx.r11.s64 = r18.s64 + -1;
	// addi r10,r1,-194
	ctx.r10.s64 = ctx.r1.s64 + -194;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r24,r4,1
	r24.s64 = ctx.r4.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r23,r4,2
	r23.s64 = ctx.r4.s64 + 2;
	// addi r22,r4,3
	r22.s64 = ctx.r4.s64 + 3;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addi r21,r4,-1
	r21.s64 = ctx.r4.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r20,r9,2,0,29
	r20.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82782520:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lbz r31,0(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r29,1(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// lbz r27,2(r11)
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,-1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// lbzx r25,r21,r11
	r25.u64 = REX_LOAD_U8(r21.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbzx r16,r9,r24
	r16.u64 = REX_LOAD_U8(ctx.r9.u32 + r24.u32);
	// lbzx r14,r9,r23
	r14.u64 = REX_LOAD_U8(ctx.r9.u32 + r23.u32);
	// subf r28,r6,r25
	r28.u64 = r25.u64 - ctx.r6.u64;
	// subf r26,r31,r16
	r26.u64 = r16.u64 - r31.u64;
	// lbzx r9,r9,r22
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + r22.u32);
	// mr r16,r31
	r16.u64 = r31.u64;
	// stw r27,-196(r1)
	REX_STORE_U32(ctx.r1.u32 + -196, r27.u32);
	// mr r31,r29
	r31.u64 = r29.u64;
	// subf r15,r27,r9
	r15.u64 = ctx.r9.u64 - r27.u64;
	// stw r31,-204(r1)
	REX_STORE_U32(ctx.r1.u32 + -204, r31.u32);
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// mullw r31,r28,r30
	r31.s64 = int64_t(r28.s32) * int64_t(r30.s32);
	// stw r9,-200(r1)
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r9.u32);
	// rotlwi r9,r6,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// extsh r25,r8
	r25.s64 = ctx.r8.s16;
	// subf r17,r29,r14
	r17.u64 = r14.u64 - r29.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
	// mullw r29,r26,r25
	r29.s64 = int64_t(r26.s32) * int64_t(r25.s32);
	// lwz r6,-204(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// rlwinm r28,r6,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,-200(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// extsh r14,r8
	r14.s64 = ctx.r8.s16;
	// mullw r25,r15,r6
	r25.s64 = int64_t(r15.s32) * int64_t(ctx.r6.s32);
	// lwz r6,-196(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// rlwinm r30,r16,2,0,29
	r30.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r27,r17,r14
	r27.s64 = int64_t(r17.s32) * int64_t(r14.s32);
	// rlwinm r26,r6,2,0,29
	r26.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r31,r9
	ctx.r9.u64 = r31.u64 + ctx.r9.u64;
	// add r6,r29,r30
	ctx.r6.u64 = r29.u64 + r30.u64;
	// add r31,r27,r28
	r31.u64 = r27.u64 + r28.u64;
	// sth r9,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// add r30,r25,r26
	r30.u64 = r25.u64 + r26.u64;
	// sth r6,4(r10)
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r6.u16);
	// sth r31,6(r10)
	REX_STORE_U16(ctx.r10.u32 + 6, r31.u16);
	// sthu r30,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U16(ea, r30.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x82782520
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82782520;
	// lwz r6,-208(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
loc_827825D4:
	// add r11,r20,r3
	ctx.r11.u64 = r20.u64 + ctx.r3.u64;
	// lbzx r10,r20,r3
	ctx.r10.u64 = REX_LOAD_U8(r20.u32 + ctx.r3.u32);
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// rlwinm r30,r20,1,0,30
	r30.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r28,r1,-192
	r28.s64 = ctx.r1.s64 + -192;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// lbzx r29,r11,r4
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// rotlwi r11,r10,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// subf r31,r10,r29
	r31.u64 = r29.u64 - ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mullw r9,r31,r9
	ctx.r9.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// sthx r9,r30,r28
	REX_STORE_U16(r30.u32 + r28.u32, ctx.r9.u16);
	// ble cr6,0x82782680
	if (!ctx.cr6.gt) goto loc_82782680;
	// addi r11,r18,-1
	ctx.r11.s64 = r18.s64 + -1;
	// addi r28,r5,1
	r28.s64 = ctx.r5.s64 + 1;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r1,-190
	ctx.r11.s64 = ctx.r1.s64 + -190;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82782624:
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r31,-2(r11)
	r31.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r30,2(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r27,r9
	r27.s64 = ctx.r9.s16;
	// extsh r9,r31
	ctx.r9.s64 = r31.s16;
	// extsh r31,r30
	r31.s64 = r30.s16;
	// subf r30,r9,r27
	r30.u64 = r27.u64 - ctx.r9.u64;
	// subf r26,r27,r31
	r26.u64 = r31.u64 - r27.u64;
	// rlwinm r31,r9,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r29,r30,r7
	r29.s64 = int64_t(r30.s32) * int64_t(ctx.r7.s32);
	// mullw r9,r26,r7
	ctx.r9.s64 = int64_t(r26.s32) * int64_t(ctx.r7.s32);
	// rlwinm r30,r27,2,0,29
	r30.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r29,r31
	r31.u64 = r29.u64 + r31.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// add r31,r31,r19
	r31.u64 = r31.u64 + r19.u64;
	// add r9,r9,r19
	ctx.r9.u64 = ctx.r9.u64 + r19.u64;
	// srawi r31,r31,4
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xF) != 0);
	r31.s64 = r31.s32 >> 4;
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// stbx r31,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, r31.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stbx r9,r28,r10
	REX_STORE_U8(r28.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x82782624
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82782624;
loc_82782680:
	// lwz r11,44(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stw r6,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r6.u32);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// bne 0x827824e8
	if (!ctx.cr0.eq) goto loc_827824E8;
loc_82782698:
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8278A5F0) {
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
	ctx.lr = 0x8278A5F8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8278a908
	if (!ctx.cr6.gt) goto loc_8278A908;
	// rlwinm r31,r5,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r31,r5,r31
	r31.u64 = ctx.r5.u64 + r31.u64;
	// rlwinm r28,r5,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r31,1,0,30
	r27.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r29,r8,r4
	r29.u64 = ctx.r4.u64 - ctx.r8.u64;
	// add r31,r11,r27
	r31.u64 = ctx.r11.u64 + r27.u64;
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
loc_8278A624:
	// lbzx r31,r31,r3
	r31.u64 = REX_LOAD_U8(r31.u32 + ctx.r3.u32);
	// lbzx r30,r30,r3
	r30.u64 = REX_LOAD_U8(r30.u32 + ctx.r3.u32);
	// mulli r31,r31,29
	r31.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(29));
	// lbzx r26,r11,r3
	r26.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// mulli r30,r30,88
	r30.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(88));
	// subf r30,r31,r30
	r30.u64 = r30.u64 - r31.u64;
	// mulli r31,r26,197
	r31.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(197));
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// srawi r30,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	r30.s64 = r31.s32 >> 8;
	// add r31,r11,r27
	r31.u64 = ctx.r11.u64 + r27.u64;
	// addze r26,r30
	temp.s64 = r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r30.u32;
	r26.s64 = temp.s64;
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// stbux r26,r29,r8
	ea = r29.u32 + ctx.r8.u32;
	REX_STORE_U8(ea, r26.u8);
	r29.u32 = ea;
	// bdnz 0x8278a624
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278A624;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8278a908
	if (!ctx.cr6.gt) goto loc_8278A908;
	// rlwinm r31,r5,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r30,r5,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r5,r31
	r25.u64 = ctx.r5.u64 + r31.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r24,r5,r30
	r24.u64 = ctx.r5.u64 + r30.u64;
	// rlwinm r23,r5,1,0,30
	r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r31,r8,r4
	r31.u64 = ctx.r4.u64 - ctx.r8.u64;
	// add r29,r11,r23
	r29.u64 = ctx.r11.u64 + r23.u64;
	// add r26,r31,r6
	r26.u64 = r31.u64 + ctx.r6.u64;
	// add r28,r11,r25
	r28.u64 = ctx.r11.u64 + r25.u64;
	// add r27,r11,r24
	r27.u64 = ctx.r11.u64 + r24.u64;
loc_8278A698:
	// lbzx r30,r29,r3
	r30.u64 = REX_LOAD_U8(r29.u32 + ctx.r3.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbzx r31,r28,r3
	r31.u64 = REX_LOAD_U8(r28.u32 + ctx.r3.u32);
	// lbzx r22,r27,r3
	r22.u64 = REX_LOAD_U8(r27.u32 + ctx.r3.u32);
	// add r29,r11,r23
	r29.u64 = ctx.r11.u64 + r23.u64;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// add r28,r11,r25
	r28.u64 = ctx.r11.u64 + r25.u64;
	// rlwinm r21,r31,3,0,28
	r21.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r11,r24
	r27.u64 = ctx.r11.u64 + r24.u64;
	// subf r31,r31,r21
	r31.u64 = r21.u64 - r31.u64;
	// add r31,r31,r22
	r31.u64 = r31.u64 + r22.u64;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// srawi r31,r31,4
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xF) != 0);
	r31.s64 = r31.s32 >> 4;
	// addze r31,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	r31.s64 = temp.s64;
	// stbux r31,r26,r8
	ea = r26.u32 + ctx.r8.u32;
	REX_STORE_U8(ea, r31.u8);
	r26.u32 = ea;
	// bdnz 0x8278a698
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278A698;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8278a908
	if (!ctx.cr6.gt) goto loc_8278A908;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r26,r5,2,0,29
	r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r5,3,0,28
	r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r31,r8,r4
	r31.u64 = ctx.r4.u64 - ctx.r8.u64;
	// rlwinm r24,r5,1,0,30
	r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r31,r6
	r28.u64 = r31.u64 + ctx.r6.u64;
	// add r30,r11,r25
	r30.u64 = ctx.r11.u64 + r25.u64;
	// add r29,r11,r26
	r29.u64 = ctx.r11.u64 + r26.u64;
loc_8278A704:
	// lbzx r27,r30,r3
	r27.u64 = REX_LOAD_U8(r30.u32 + ctx.r3.u32);
	// add r23,r11,r24
	r23.u64 = ctx.r11.u64 + r24.u64;
	// lbzx r31,r11,r3
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbzx r30,r29,r3
	r30.u64 = REX_LOAD_U8(r29.u32 + ctx.r3.u32);
	// add r29,r27,r31
	r29.u64 = r27.u64 + r31.u64;
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// lbzx r30,r23,r3
	r30.u64 = REX_LOAD_U8(r23.u32 + ctx.r3.u32);
	// mulli r29,r29,29
	r29.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(29));
	// mulli r31,r31,88
	r31.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(88));
	// subf r31,r29,r31
	r31.u64 = r31.u64 - r29.u64;
	// mulli r30,r30,138
	r30.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(138));
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// add r29,r11,r26
	r29.u64 = ctx.r11.u64 + r26.u64;
	// srawi r31,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	r31.s64 = r31.s32 >> 8;
	// add r30,r11,r25
	r30.u64 = ctx.r11.u64 + r25.u64;
	// addze r31,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	r31.s64 = temp.s64;
	// stbux r31,r28,r8
	ea = r28.u32 + ctx.r8.u32;
	REX_STORE_U8(ea, r31.u8);
	r28.u32 = ea;
	// bdnz 0x8278a704
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278A704;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8278a908
	if (!ctx.cr6.gt) goto loc_8278A908;
	// rlwinm r30,r5,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r31,r5,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r5,3,0,28
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r24,r5,r30
	r24.u64 = ctx.r5.u64 + r30.u64;
	// add r22,r5,r31
	r22.u64 = ctx.r5.u64 + r31.u64;
	// subf r23,r5,r29
	r23.u64 = r29.u64 - ctx.r5.u64;
	// rlwinm r21,r6,1,0,30
	r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r31,0
	r31.s64 = 0;
	// add r28,r11,r22
	r28.u64 = ctx.r11.u64 + r22.u64;
	// add r27,r11,r24
	r27.u64 = ctx.r11.u64 + r24.u64;
	// add r30,r11,r23
	r30.u64 = ctx.r11.u64 + r23.u64;
loc_8278A78C:
	// lbzx r29,r28,r3
	r29.u64 = REX_LOAD_U8(r28.u32 + ctx.r3.u32);
	// add r20,r31,r21
	r20.u64 = r31.u64 + r21.u64;
	// lbzx r28,r27,r3
	r28.u64 = REX_LOAD_U8(r27.u32 + ctx.r3.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbzx r25,r30,r3
	r25.u64 = REX_LOAD_U8(r30.u32 + ctx.r3.u32);
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// add r30,r28,r29
	r30.u64 = r28.u64 + r29.u64;
	// add r28,r11,r22
	r28.u64 = ctx.r11.u64 + r22.u64;
	// rlwinm r26,r30,3,0,28
	r26.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r11,r24
	r27.u64 = ctx.r11.u64 + r24.u64;
	// subf r26,r30,r26
	r26.u64 = r26.u64 - r30.u64;
	// add r30,r11,r23
	r30.u64 = ctx.r11.u64 + r23.u64;
	// add r26,r26,r25
	r26.u64 = r26.u64 + r25.u64;
	// add r29,r26,r29
	r29.u64 = r26.u64 + r29.u64;
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// addze r29,r29
	temp.s64 = r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r29.u32;
	r29.s64 = temp.s64;
	// stbx r29,r20,r4
	REX_STORE_U8(r20.u32 + ctx.r4.u32, r29.u8);
	// bdnz 0x8278a78c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278A78C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8278a908
	if (!ctx.cr6.gt) goto loc_8278A908;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r31,r5,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r5,r11
	r30.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r31,r5,r31
	r31.u64 = ctx.r5.u64 + r31.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r26,r31,1,0,30
	r26.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r30,1,0,30
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r5,1,0,30
	r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r23,r5,2,0,29
	r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r22,r6,1,0,30
	r22.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r31,0
	r31.s64 = 0;
	// add r30,r24,r11
	r30.u64 = r24.u64 + ctx.r11.u64;
	// add r29,r25,r11
	r29.u64 = r25.u64 + ctx.r11.u64;
	// add r28,r26,r11
	r28.u64 = r26.u64 + ctx.r11.u64;
loc_8278A818:
	// lbzx r27,r29,r3
	r27.u64 = REX_LOAD_U8(r29.u32 + ctx.r3.u32);
	// add r21,r23,r11
	r21.u64 = r23.u64 + ctx.r11.u64;
	// lbzx r30,r30,r3
	r30.u64 = REX_LOAD_U8(r30.u32 + ctx.r3.u32);
	// add r20,r22,r31
	r20.u64 = r22.u64 + r31.u64;
	// lbzx r29,r28,r3
	r29.u64 = REX_LOAD_U8(r28.u32 + ctx.r3.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r28,r27,r30
	r28.u64 = r27.u64 + r30.u64;
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// lbzx r29,r21,r3
	r29.u64 = REX_LOAD_U8(r21.u32 + ctx.r3.u32);
	// mulli r28,r28,29
	r28.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(29));
	// mulli r30,r30,88
	r30.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(88));
	// subf r30,r28,r30
	r30.u64 = r30.u64 - r28.u64;
	// mulli r29,r29,138
	r29.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(138));
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// srawi r29,r30,8
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFF) != 0);
	r29.s64 = r30.s32 >> 8;
	// add r30,r24,r11
	r30.u64 = r24.u64 + ctx.r11.u64;
	// addze r27,r29
	temp.s64 = r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r29.u32;
	r27.s64 = temp.s64;
	// add r29,r25,r11
	r29.u64 = r25.u64 + ctx.r11.u64;
	// add r28,r26,r11
	r28.u64 = r26.u64 + ctx.r11.u64;
	// stbx r27,r20,r4
	REX_STORE_U8(r20.u32 + ctx.r4.u32, r27.u8);
	// bdnz 0x8278a818
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278A818;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8278a908
	if (!ctx.cr6.gt) goto loc_8278A908;
	// rlwinm r30,r5,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r31,r5,3,0,28
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r29,r5,3,0,28
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r23,r5,r31
	r23.u64 = ctx.r5.u64 + r31.u64;
	// add r25,r5,r30
	r25.u64 = ctx.r5.u64 + r30.u64;
	// rlwinm r30,r5,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r6,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r24,r5,r29
	r24.u64 = r29.u64 - ctx.r5.u64;
	// add r22,r5,r30
	r22.u64 = ctx.r5.u64 + r30.u64;
	// add r21,r6,r31
	r21.u64 = ctx.r6.u64 + r31.u64;
	// li r31,0
	r31.s64 = 0;
	// add r29,r24,r11
	r29.u64 = r24.u64 + ctx.r11.u64;
	// add r30,r25,r11
	r30.u64 = r25.u64 + ctx.r11.u64;
	// add r28,r23,r11
	r28.u64 = r23.u64 + ctx.r11.u64;
loc_8278A8B8:
	// lbzx r29,r29,r3
	r29.u64 = REX_LOAD_U8(r29.u32 + ctx.r3.u32);
	// add r26,r22,r11
	r26.u64 = r22.u64 + ctx.r11.u64;
	// lbzx r30,r30,r3
	r30.u64 = REX_LOAD_U8(r30.u32 + ctx.r3.u32);
	// add r20,r21,r31
	r20.u64 = r21.u64 + r31.u64;
	// lbzx r27,r28,r3
	r27.u64 = REX_LOAD_U8(r28.u32 + ctx.r3.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// rlwinm r28,r30,3,0,28
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r26,r26,r3
	r26.u64 = REX_LOAD_U8(r26.u32 + ctx.r3.u32);
	// add r29,r24,r11
	r29.u64 = r24.u64 + ctx.r11.u64;
	// subf r28,r30,r28
	r28.u64 = r28.u64 - r30.u64;
	// add r30,r25,r11
	r30.u64 = r25.u64 + ctx.r11.u64;
	// add r27,r28,r27
	r27.u64 = r28.u64 + r27.u64;
	// add r28,r23,r11
	r28.u64 = r23.u64 + ctx.r11.u64;
	// add r27,r27,r26
	r27.u64 = r27.u64 + r26.u64;
	// srawi r27,r27,4
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0xF) != 0);
	r27.s64 = r27.s32 >> 4;
	// addze r27,r27
	temp.s64 = r27.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r27.u32;
	r27.s64 = temp.s64;
	// stbx r27,r20,r4
	REX_STORE_U8(r20.u32 + ctx.r4.u32, r27.u8);
	// bdnz 0x8278a8b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278A8B8;
loc_8278A908:
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// li r19,3
	r19.s64 = 3;
	// addze r15,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r15.s64 = temp.s64;
	// addi r16,r15,-2
	r16.s64 = r15.s64 + -2;
	// cmpwi cr6,r16,3
	ctx.cr6.compare<int32_t>(r16.s32, 3, ctx.xer);
	// ble cr6,0x8278aa9c
	if (!ctx.cr6.gt) goto loc_8278AA9C;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r5,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r5,r11
	r30.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r31,r5,r31
	r31.u64 = ctx.r5.u64 + r31.u64;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r22,r31,2,0,29
	r22.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r20,r6,r10
	r20.u64 = ctx.r6.u64 + ctx.r10.u64;
	// li r21,6
	r21.s64 = 6;
	// rlwinm r24,r30,1,0,30
	r24.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r5,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r18,r5,r11
	r18.u64 = ctx.r5.u64 + ctx.r11.u64;
	// li r23,0
	r23.s64 = 0;
	// rlwinm r31,r5,3,0,28
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
loc_8278A958:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8278a9d8
	if (!ctx.cr6.gt) goto loc_8278A9D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r30,r31,r11
	r30.u64 = r31.u64 + ctx.r11.u64;
loc_8278A970:
	// add r27,r23,r11
	r27.u64 = r23.u64 + ctx.r11.u64;
	// lbzx r25,r30,r3
	r25.u64 = REX_LOAD_U8(r30.u32 + ctx.r3.u32);
	// addi r28,r21,-2
	r28.s64 = r21.s64 + -2;
	// add r17,r24,r11
	r17.u64 = r24.u64 + ctx.r11.u64;
	// mullw r30,r28,r5
	r30.s64 = int64_t(r28.s32) * int64_t(ctx.r5.s32);
	// lbzx r28,r27,r3
	r28.u64 = REX_LOAD_U8(r27.u32 + ctx.r3.u32);
	// add r30,r30,r11
	r30.u64 = r30.u64 + ctx.r11.u64;
	// add r27,r22,r11
	r27.u64 = r22.u64 + ctx.r11.u64;
	// add r14,r20,r10
	r14.u64 = r20.u64 + ctx.r10.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r26,r30,r3
	r26.u64 = REX_LOAD_U8(r30.u32 + ctx.r3.u32);
	// add r30,r31,r11
	r30.u64 = r31.u64 + ctx.r11.u64;
	// lbzx r27,r27,r3
	r27.u64 = REX_LOAD_U8(r27.u32 + ctx.r3.u32);
	// add r26,r26,r25
	r26.u64 = r26.u64 + r25.u64;
	// lbzx r25,r17,r3
	r25.u64 = REX_LOAD_U8(r17.u32 + ctx.r3.u32);
	// add r28,r28,r27
	r28.u64 = r28.u64 + r27.u64;
	// mulli r27,r26,88
	r27.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(88));
	// mulli r28,r28,29
	r28.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(29));
	// subf r28,r28,r27
	r28.u64 = r27.u64 - r28.u64;
	// mulli r27,r25,138
	r27.s64 = static_cast<int64_t>(r25.u64 * static_cast<uint64_t>(138));
	// add r28,r28,r27
	r28.u64 = r28.u64 + r27.u64;
	// srawi r28,r28,8
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0xFF) != 0);
	r28.s64 = r28.s32 >> 8;
	// addze r28,r28
	temp.s64 = r28.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r28.u32;
	r28.s64 = temp.s64;
	// stbx r28,r14,r4
	REX_STORE_U8(r14.u32 + ctx.r4.u32, r28.u8);
	// bdnz 0x8278a970
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278A970;
loc_8278A9D8:
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// add r24,r24,r29
	r24.u64 = r24.u64 + r29.u64;
	// add r23,r23,r29
	r23.u64 = r23.u64 + r29.u64;
	// add r22,r22,r29
	r22.u64 = r22.u64 + r29.u64;
	// addi r10,r21,2
	ctx.r10.s64 = r21.s64 + 2;
	// add r17,r31,r29
	r17.u64 = r31.u64 + r29.u64;
	// add r25,r18,r29
	r25.u64 = r18.u64 + r29.u64;
	// add r20,r20,r6
	r20.u64 = r20.u64 + ctx.r6.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8278aa74
	if (!ctx.cr6.gt) goto loc_8278AA74;
	// li r31,0
	r31.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8278AA0C:
	// addi r30,r10,-1
	r30.s64 = ctx.r10.s64 + -1;
	// addi r27,r10,1
	r27.s64 = ctx.r10.s64 + 1;
	// mullw r28,r30,r5
	r28.s64 = int64_t(r30.s32) * int64_t(ctx.r5.s32);
	// mullw r30,r27,r5
	r30.s64 = int64_t(r27.s32) * int64_t(ctx.r5.s32);
	// add r30,r30,r11
	r30.u64 = r30.u64 + ctx.r11.u64;
	// add r28,r28,r11
	r28.u64 = r28.u64 + ctx.r11.u64;
	// addi r27,r10,-3
	r27.s64 = ctx.r10.s64 + -3;
	// add r21,r25,r11
	r21.u64 = r25.u64 + ctx.r11.u64;
	// mullw r27,r27,r5
	r27.s64 = int64_t(r27.s32) * int64_t(ctx.r5.s32);
	// lbzx r26,r30,r3
	r26.u64 = REX_LOAD_U8(r30.u32 + ctx.r3.u32);
	// lbzx r30,r28,r3
	r30.u64 = REX_LOAD_U8(r28.u32 + ctx.r3.u32);
	// lbzx r28,r21,r3
	r28.u64 = REX_LOAD_U8(r21.u32 + ctx.r3.u32);
	// add r30,r30,r26
	r30.u64 = r30.u64 + r26.u64;
	// add r27,r27,r11
	r27.u64 = r27.u64 + ctx.r11.u64;
	// rlwinm r26,r30,3,0,28
	r26.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r21,r20,r31
	r21.u64 = r20.u64 + r31.u64;
	// subf r30,r30,r26
	r30.u64 = r26.u64 - r30.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbzx r27,r27,r3
	r27.u64 = REX_LOAD_U8(r27.u32 + ctx.r3.u32);
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// add r30,r30,r27
	r30.u64 = r30.u64 + r27.u64;
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// addze r30,r30
	temp.s64 = r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r30.u32;
	r30.s64 = temp.s64;
	// stbx r30,r21,r4
	REX_STORE_U8(r21.u32 + ctx.r4.u32, r30.u8);
	// bdnz 0x8278aa0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278AA0C;
loc_8278AA74:
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// add r24,r24,r29
	r24.u64 = r24.u64 + r29.u64;
	// add r23,r23,r29
	r23.u64 = r23.u64 + r29.u64;
	// add r22,r22,r29
	r22.u64 = r22.u64 + r29.u64;
	// addi r21,r10,2
	r21.s64 = ctx.r10.s64 + 2;
	// add r31,r17,r29
	r31.u64 = r17.u64 + r29.u64;
	// add r18,r25,r29
	r18.u64 = r25.u64 + r29.u64;
	// add r20,r20,r6
	r20.u64 = r20.u64 + ctx.r6.u64;
	// cmpw cr6,r19,r16
	ctx.cr6.compare<int32_t>(r19.s32, r16.s32, ctx.xer);
	// blt cr6,0x8278a958
	if (ctx.cr6.lt) goto loc_8278A958;
loc_8278AA9C:
	// addi r23,r15,-3
	r23.s64 = r15.s64 + -3;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8278ab3c
	if (!ctx.cr6.gt) goto loc_8278AB3C;
	// rlwinm r28,r23,1,0,30
	r28.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r11,r23,-3
	ctx.r11.s64 = r23.s64 + -3;
	// addi r10,r28,2
	ctx.r10.s64 = r28.s64 + 2;
	// mullw r31,r11,r5
	r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// mullw r27,r10,r5
	r27.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// mullw r10,r23,r5
	ctx.r10.s64 = int64_t(r23.s32) * int64_t(ctx.r5.s32);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r26,r31,1,0,30
	r26.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r10,1,0,30
	r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r24,r23,r6
	r24.s64 = int64_t(r23.s32) * int64_t(ctx.r6.s32);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r31,r11,r27
	r31.u64 = ctx.r11.u64 + r27.u64;
loc_8278AADC:
	// add r22,r11,r26
	r22.u64 = ctx.r11.u64 + r26.u64;
	// lbzx r31,r31,r3
	r31.u64 = REX_LOAD_U8(r31.u32 + ctx.r3.u32);
	// addi r30,r28,-2
	r30.s64 = r28.s64 + -2;
	// mullw r29,r30,r5
	r29.s64 = int64_t(r30.s32) * int64_t(ctx.r5.s32);
	// lbzx r30,r22,r3
	r30.u64 = REX_LOAD_U8(r22.u32 + ctx.r3.u32);
	// add r29,r29,r11
	r29.u64 = r29.u64 + ctx.r11.u64;
	// add r30,r30,r31
	r30.u64 = r30.u64 + r31.u64;
	// add r22,r11,r25
	r22.u64 = ctx.r11.u64 + r25.u64;
	// mulli r21,r30,29
	r21.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(29));
	// lbzx r30,r29,r3
	r30.u64 = REX_LOAD_U8(r29.u32 + ctx.r3.u32);
	// lbzx r29,r22,r3
	r29.u64 = REX_LOAD_U8(r22.u32 + ctx.r3.u32);
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// mulli r30,r29,138
	r30.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(138));
	// mulli r31,r31,88
	r31.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(88));
	// subf r31,r21,r31
	r31.u64 = r31.u64 - r21.u64;
	// add r29,r10,r24
	r29.u64 = ctx.r10.u64 + r24.u64;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// srawi r31,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	r31.s64 = r31.s32 >> 8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addze r30,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	r30.s64 = temp.s64;
	// add r31,r11,r27
	r31.u64 = ctx.r11.u64 + r27.u64;
	// stbx r30,r29,r4
	REX_STORE_U8(r29.u32 + ctx.r4.u32, r30.u8);
	// bdnz 0x8278aadc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278AADC;
loc_8278AB3C:
	// addi r11,r23,1
	ctx.r11.s64 = r23.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8278ac68
	if (!ctx.cr6.gt) goto loc_8278AC68;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mullw r26,r11,r6
	r26.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// addi r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 3;
	// li r31,0
	r31.s64 = 0;
	// mullw r25,r11,r5
	r25.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8278AB64:
	// addi r30,r10,-1
	r30.s64 = ctx.r10.s64 + -1;
	// addi r28,r10,1
	r28.s64 = ctx.r10.s64 + 1;
	// mullw r29,r30,r5
	r29.s64 = int64_t(r30.s32) * int64_t(ctx.r5.s32);
	// mullw r30,r28,r5
	r30.s64 = int64_t(r28.s32) * int64_t(ctx.r5.s32);
	// add r30,r30,r11
	r30.u64 = r30.u64 + ctx.r11.u64;
	// add r29,r29,r11
	r29.u64 = r29.u64 + ctx.r11.u64;
	// addi r28,r10,-3
	r28.s64 = ctx.r10.s64 + -3;
	// add r24,r11,r25
	r24.u64 = ctx.r11.u64 + r25.u64;
	// mullw r28,r28,r5
	r28.s64 = int64_t(r28.s32) * int64_t(ctx.r5.s32);
	// lbzx r27,r30,r3
	r27.u64 = REX_LOAD_U8(r30.u32 + ctx.r3.u32);
	// lbzx r30,r29,r3
	r30.u64 = REX_LOAD_U8(r29.u32 + ctx.r3.u32);
	// lbzx r29,r24,r3
	r29.u64 = REX_LOAD_U8(r24.u32 + ctx.r3.u32);
	// add r30,r30,r27
	r30.u64 = r30.u64 + r27.u64;
	// add r28,r28,r11
	r28.u64 = r28.u64 + ctx.r11.u64;
	// rlwinm r27,r30,3,0,28
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r24,r31,r26
	r24.u64 = r31.u64 + r26.u64;
	// subf r30,r30,r27
	r30.u64 = r27.u64 - r30.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbzx r28,r28,r3
	r28.u64 = REX_LOAD_U8(r28.u32 + ctx.r3.u32);
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// addze r30,r30
	temp.s64 = r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r30.u32;
	r30.s64 = temp.s64;
	// stbx r30,r24,r4
	REX_STORE_U8(r24.u32 + ctx.r4.u32, r30.u8);
	// bdnz 0x8278ab64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278AB64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8278ac68
	if (!ctx.cr6.gt) goto loc_8278AC68;
	// rlwinm r28,r16,1,0,30
	r28.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r11,r16,-3
	ctx.r11.s64 = r16.s64 + -3;
	// addi r10,r28,2
	ctx.r10.s64 = r28.s64 + 2;
	// mullw r31,r11,r5
	r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// mullw r27,r10,r5
	r27.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// mullw r10,r16,r5
	ctx.r10.s64 = int64_t(r16.s32) * int64_t(ctx.r5.s32);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r26,r31,1,0,30
	r26.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r10,1,0,30
	r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r24,r16,r6
	r24.s64 = int64_t(r16.s32) * int64_t(ctx.r6.s32);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r31,r11,r27
	r31.u64 = ctx.r11.u64 + r27.u64;
loc_8278AC08:
	// add r23,r11,r26
	r23.u64 = ctx.r11.u64 + r26.u64;
	// lbzx r31,r31,r3
	r31.u64 = REX_LOAD_U8(r31.u32 + ctx.r3.u32);
	// addi r30,r28,-2
	r30.s64 = r28.s64 + -2;
	// mullw r29,r30,r5
	r29.s64 = int64_t(r30.s32) * int64_t(ctx.r5.s32);
	// lbzx r30,r23,r3
	r30.u64 = REX_LOAD_U8(r23.u32 + ctx.r3.u32);
	// add r29,r29,r11
	r29.u64 = r29.u64 + ctx.r11.u64;
	// add r30,r30,r31
	r30.u64 = r30.u64 + r31.u64;
	// add r23,r11,r25
	r23.u64 = ctx.r11.u64 + r25.u64;
	// mulli r22,r30,29
	r22.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(29));
	// lbzx r30,r29,r3
	r30.u64 = REX_LOAD_U8(r29.u32 + ctx.r3.u32);
	// lbzx r29,r23,r3
	r29.u64 = REX_LOAD_U8(r23.u32 + ctx.r3.u32);
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// mulli r30,r29,138
	r30.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(138));
	// mulli r31,r31,88
	r31.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(88));
	// subf r31,r22,r31
	r31.u64 = r31.u64 - r22.u64;
	// add r29,r10,r24
	r29.u64 = ctx.r10.u64 + r24.u64;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// srawi r31,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	r31.s64 = r31.s32 >> 8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addze r30,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	r30.s64 = temp.s64;
	// add r31,r11,r27
	r31.u64 = ctx.r11.u64 + r27.u64;
	// stbx r30,r29,r4
	REX_STORE_U8(r29.u32 + ctx.r4.u32, r30.u8);
	// bdnz 0x8278ac08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278AC08;
loc_8278AC68:
	// addi r11,r16,1
	ctx.r11.s64 = r16.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8278acf8
	if (!ctx.cr6.gt) goto loc_8278ACF8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mullw r26,r11,r6
	r26.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// addi r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 3;
	// li r31,0
	r31.s64 = 0;
	// mullw r25,r11,r5
	r25.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8278AC90:
	// addi r30,r10,-1
	r30.s64 = ctx.r10.s64 + -1;
	// addi r28,r10,1
	r28.s64 = ctx.r10.s64 + 1;
	// mullw r29,r30,r5
	r29.s64 = int64_t(r30.s32) * int64_t(ctx.r5.s32);
	// mullw r30,r28,r5
	r30.s64 = int64_t(r28.s32) * int64_t(ctx.r5.s32);
	// add r30,r30,r11
	r30.u64 = r30.u64 + ctx.r11.u64;
	// add r29,r29,r11
	r29.u64 = r29.u64 + ctx.r11.u64;
	// addi r28,r10,-3
	r28.s64 = ctx.r10.s64 + -3;
	// add r24,r11,r25
	r24.u64 = ctx.r11.u64 + r25.u64;
	// mullw r28,r28,r5
	r28.s64 = int64_t(r28.s32) * int64_t(ctx.r5.s32);
	// lbzx r27,r30,r3
	r27.u64 = REX_LOAD_U8(r30.u32 + ctx.r3.u32);
	// lbzx r30,r29,r3
	r30.u64 = REX_LOAD_U8(r29.u32 + ctx.r3.u32);
	// lbzx r29,r24,r3
	r29.u64 = REX_LOAD_U8(r24.u32 + ctx.r3.u32);
	// add r30,r30,r27
	r30.u64 = r30.u64 + r27.u64;
	// add r28,r28,r11
	r28.u64 = r28.u64 + ctx.r11.u64;
	// rlwinm r27,r30,3,0,28
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r24,r31,r26
	r24.u64 = r31.u64 + r26.u64;
	// subf r30,r30,r27
	r30.u64 = r27.u64 - r30.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbzx r28,r28,r3
	r28.u64 = REX_LOAD_U8(r28.u32 + ctx.r3.u32);
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// addze r30,r30
	temp.s64 = r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r30.u32;
	r30.s64 = temp.s64;
	// stbx r30,r24,r4
	REX_STORE_U8(r24.u32 + ctx.r4.u32, r30.u8);
	// bdnz 0x8278ac90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278AC90;
loc_8278ACF8:
	// addi r24,r15,-1
	r24.s64 = r15.s64 + -1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8278ad88
	if (!ctx.cr6.gt) goto loc_8278AD88;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r24,-3
	ctx.r10.s64 = r24.s64 + -3;
	// addi r31,r11,-2
	r31.s64 = ctx.r11.s64 + -2;
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// mullw r30,r24,r5
	r30.s64 = int64_t(r24.s32) * int64_t(ctx.r5.s32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw r28,r31,r5
	r28.s64 = int64_t(r31.s32) * int64_t(ctx.r5.s32);
	// rlwinm r27,r10,1,0,30
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r30,1,0,30
	r26.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r25,r24,r6
	r25.s64 = int64_t(r24.s32) * int64_t(ctx.r6.s32);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r31,r11,r27
	r31.u64 = ctx.r11.u64 + r27.u64;
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// add r29,r11,r26
	r29.u64 = ctx.r11.u64 + r26.u64;
loc_8278AD40:
	// lbzx r31,r31,r3
	r31.u64 = REX_LOAD_U8(r31.u32 + ctx.r3.u32);
	// add r23,r10,r25
	r23.u64 = ctx.r10.u64 + r25.u64;
	// lbzx r30,r30,r3
	r30.u64 = REX_LOAD_U8(r30.u32 + ctx.r3.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mulli r31,r31,29
	r31.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(29));
	// lbzx r29,r29,r3
	r29.u64 = REX_LOAD_U8(r29.u32 + ctx.r3.u32);
	// mulli r30,r30,88
	r30.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(88));
	// subf r31,r31,r30
	r31.u64 = r30.u64 - r31.u64;
	// mulli r30,r29,197
	r30.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(197));
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r30,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	r30.s64 = r31.s32 >> 8;
	// add r31,r11,r27
	r31.u64 = ctx.r11.u64 + r27.u64;
	// addze r22,r30
	temp.s64 = r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r30.u32;
	r22.s64 = temp.s64;
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// add r29,r11,r26
	r29.u64 = ctx.r11.u64 + r26.u64;
	// stbx r22,r23,r4
	REX_STORE_U8(r23.u32 + ctx.r4.u32, r22.u8);
	// bdnz 0x8278ad40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278AD40;
loc_8278AD88:
	// addi r10,r24,1
	ctx.r10.s64 = r24.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8278ae0c
	if (!ctx.cr6.gt) goto loc_8278AE0C;
	// rlwinm r31,r10,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,1
	ctx.r9.s64 = r31.s64 + 1;
	// mullw r27,r10,r6
	r27.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// mullw r28,r9,r5
	r28.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r9,r28,r11
	ctx.r9.u64 = r28.u64 + ctx.r11.u64;
loc_8278ADB4:
	// addi r30,r31,-1
	r30.s64 = r31.s64 + -1;
	// lbzx r6,r9,r3
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// addi r29,r31,-3
	r29.s64 = r31.s64 + -3;
	// mullw r9,r30,r5
	ctx.r9.s64 = int64_t(r30.s32) * int64_t(ctx.r5.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mullw r30,r29,r5
	r30.s64 = int64_t(r29.s32) * int64_t(ctx.r5.s32);
	// lbzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// add r30,r30,r11
	r30.u64 = r30.u64 + ctx.r11.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r26,r27,r10
	r26.u64 = r27.u64 + ctx.r10.u64;
	// rlwinm r25,r9,3,0,28
	r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbzx r29,r30,r3
	r29.u64 = REX_LOAD_U8(r30.u32 + ctx.r3.u32);
	// subf r30,r9,r25
	r30.u64 = r25.u64 - ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// add r9,r28,r11
	ctx.r9.u64 = r28.u64 + ctx.r11.u64;
	// add r6,r30,r6
	ctx.r6.u64 = r30.u64 + ctx.r6.u64;
	// srawi r6,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 4;
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// stbx r6,r26,r4
	REX_STORE_U8(r26.u32 + ctx.r4.u32, ctx.r6.u8);
	// bdnz 0x8278adb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278ADB4;
loc_8278AE0C:
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_827BBAD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// bl 0x826a1cac
	ctx.lr = 0x827BBAD8;
	// stwu r1,-928(r1)
	ea = -928 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lwz r29,1012(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1012);
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v62,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + ctx.r11.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// lvx128 v60,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v58,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subfic r9,r9,8
	ctx.xer.ca = ctx.r9.u32 <= 8;
	ctx.r9.u64 = static_cast<uint64_t>(8) - ctx.r9.u64;
	// lvx128 v56,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,80
	r28.s64 = ctx.r1.s64 + 80;
	// lvx128 v59,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lvx128 v57,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cntlzw r9,r29
	ctx.r9.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// lvx128 v61,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,96
	r29.s64 = ctx.r1.s64 + 96;
	// lvsl v5,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lvsl v3,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v4,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v2,v62,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v31,v57,v56,v3
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// add r8,r31,r3
	ctx.r8.u64 = r31.u64 + ctx.r3.u64;
	// vperm128 v1,v60,v58,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v55,r31,r3
	ea = (r31.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v8,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// and r9,r7,r30
	ctx.r9.u64 = ctx.r7.u64 & r30.u64;
	// vmrghb v12,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r31,r1,144
	r31.s64 = ctx.r1.s64 + 144;
	// vmrghb v10,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r27,r1,192
	r27.s64 = ctx.r1.s64 + 192;
	// vmrghb v11,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v54,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v5,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r26,r1,240
	r26.s64 = ctx.r1.s64 + 240;
	// vperm128 v6,v55,v54,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v2,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r6,1
	ctx.r6.s64 = 1;
	// vadduhm v1,v5,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// vadduhm v31,v4,v12
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// li r25,4
	r25.s64 = 4;
	// vmrghb v9,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v29,v2,v10
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v30,v3,v11
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// slw r7,r6,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// vadduhm v28,v1,v12
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvx128 v27,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v26,v31,v11
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// slw r6,r25,r30
	ctx.r6.u64 = r30.u8 & 0x20 ? 0 : (r25.u32 << (r30.u8 & 0x3F));
	// vadduhm v25,v30,v10
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsplth v1,v27,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vadduhm v24,v29,v9
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// stvx128 v28,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x827bbcb8
	if (!ctx.cr6.eq) goto loc_827BBCB8;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lvx128 v53,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r31,r11,3,0,28
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vslh v12,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r31,r31,r3
	r31.u64 = r31.u64 + ctx.r3.u64;
	// add r30,r8,r11
	r30.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lvx128 v52,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v9,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// lvx128 v51,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,288
	r29.s64 = ctx.r1.s64 + 288;
	// lvx128 v50,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,336
	r28.s64 = ctx.r1.s64 + 336;
	// lvx128 v49,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,384
	r27.s64 = ctx.r1.s64 + 384;
	// lvx128 v48,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,432
	r26.s64 = ctx.r1.s64 + 432;
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v53,v51,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v3,v52,v49,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v47,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v2,v50,v48,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v46,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v12,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v46,v47,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v5,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v2,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v31,v9,v12
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v30,v5,v12
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v29,v4,v11
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v28,v3,v10
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v31,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v27,v30,v11
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v26,v29,v10
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v25,v28,v2
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// stvx128 v27,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_827BBCB8:
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// blt cr6,0x827bbd28
	if (ctx.cr6.lt) goto loc_827BBD28;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x827bbd28
	if (!ctx.cr6.gt) goto loc_827BBD28;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// subf r27,r9,r11
	r27.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r3,r10,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// subf r3,r9,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r9.u64;
	// addi r11,r30,-48
	ctx.r11.s64 = r30.s64 + -48;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_827BBCF4:
	// lbzux r8,r3,r9
	ea = ctx.r3.u32 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// lbzx r26,r27,r10
	r26.u64 = REX_LOAD_U8(r27.u32 + ctx.r10.u32);
	// rotlwi r30,r8,1
	r30.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lbz r31,0(r10)
	r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r28,r26,1
	r28.u64 = __builtin_rotateleft32(r26.u32, 1);
	// add r30,r8,r30
	r30.u64 = ctx.r8.u64 + r30.u64;
	// add r8,r26,r28
	ctx.r8.u64 = r26.u64 + r28.u64;
	// add r30,r30,r26
	r30.u64 = r30.u64 + r26.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// sth r30,48(r11)
	REX_STORE_U16(ctx.r11.u32 + 48, r30.u16);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sthu r8,96(r11)
	ea = 96 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x827bbcf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BBCF4;
loc_827BBD28:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827b93f0
	ctx.lr = 0x827BBD30;
	sub_827B93F0(ctx, base);
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x826a1cfc
	return;
}

