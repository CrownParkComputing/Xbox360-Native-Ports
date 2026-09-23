#include "hydrothunder_funcs.74.h"

DEFINE_REX_FUNC(sub_82124EB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82124EB8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// addic. r31,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	r31.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82124ee8
	if (ctx.cr0.lt) goto loc_82124EE8;
loc_82124ED0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// bctrl 
	ctx.lr = 0x82124EDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// bge 0x82124ed0
	if (!ctx.cr0.lt) goto loc_82124ED0;
loc_82124EE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821276A8) {
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
	ctx.lr = 0x821276B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,68(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// b 0x821276e4
	goto loc_821276E4;
loc_821276C8:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82129ee0
	ctx.lr = 0x821276D8;
	sub_82129EE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821276f4
	if (!ctx.cr0.eq) goto loc_821276F4;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_821276E4:
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821276c8
	if (!ctx.cr6.eq) goto loc_821276C8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821276F4:
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8212C0F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8212C0F8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82120780
	ctx.lr = 0x8212C114;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8212c128
	if (!ctx.cr0.lt) goto loc_8212C128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212c058
	ctx.lr = 0x8212C128;
	sub_8212C058(ctx, base);
loc_8212C128:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120780
	ctx.lr = 0x8212C134;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8212c148
	if (!ctx.cr0.lt) goto loc_8212C148;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8212c058
	ctx.lr = 0x8212C148;
	sub_8212C058(ctx, base);
loc_8212C148:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120780
	ctx.lr = 0x8212C154;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8212c168
	if (!ctx.cr0.lt) goto loc_8212C168;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212c058
	ctx.lr = 0x8212C168;
	sub_8212C058(ctx, base);
loc_8212C168:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8212FD70) {
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
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8212fe24
	if (!ctx.cr6.gt) goto loc_8212FE24;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
loc_8212FDA4:
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8212fdc4
	if (ctx.cr6.eq) goto loc_8212FDC4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8212fda4
	if (ctx.cr6.lt) goto loc_8212FDA4;
	// b 0x8212fe24
	goto loc_8212FE24;
loc_8212FDC4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8212fdd8
	if (ctx.cr6.lt) goto loc_8212FDD8;
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x8212fdf0
	if (!ctx.cr6.gt) goto loc_8212FDF0;
loc_8212FDD8:
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
	ctx.lr = 0x8212FDF0;
	sub_821231D0(ctx, base);
loc_8212FDF0:
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
	ctx.lr = 0x8212FE14;
	sub_826A1E70(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x8212fcf0
	ctx.lr = 0x8212FE24;
	sub_8212FCF0(ctx, base);
loc_8212FE24:
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

DEFINE_REX_FUNC(sub_821354B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
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

DEFINE_REX_FUNC(sub_82136798) {
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
	ctx.lr = 0x821367A0;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32106
	r28.s64 = -2104098816;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r3,6060(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6060);
	// bl 0x8212dd28
	ctx.lr = 0x821367C8;
	sub_8212DD28(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82135fb8
	ctx.lr = 0x821367D4;
	sub_82135FB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821367E4;
	sub_826A1E70(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,6060(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6060);
	// addi r7,r11,26712
	ctx.r7.s64 = ctx.r11.s64 + 26712;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r4,7
	ctx.r4.s64 = 7;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// stb r11,64(r27)
	REX_STORE_U8(r27.u32 + 64, ctx.r11.u8);
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1);
	// stb r11,65(r27)
	REX_STORE_U8(r27.u32 + 65, ctx.r11.u8);
	// lbz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 2);
	// stb r11,66(r27)
	REX_STORE_U8(r27.u32 + 66, ctx.r11.u8);
	// lbz r11,3(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 3);
	// stb r11,67(r27)
	REX_STORE_U8(r27.u32 + 67, ctx.r11.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r11,68(r27)
	REX_STORE_U32(r27.u32 + 68, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r11,72(r27)
	REX_STORE_U32(r27.u32 + 72, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stw r11,76(r27)
	REX_STORE_U32(r27.u32 + 76, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// stw r11,80(r27)
	REX_STORE_U32(r27.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82139a08
	ctx.lr = 0x8213684C;
	sub_82139A08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8213BCE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82178a50
	ctx.lr = 0x8213BD04;
	sub_82178A50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8213bc98
	ctx.lr = 0x8213BD10;
	sub_8213BC98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82120ac0
	ctx.lr = 0x8213BD28;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_8213EF58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8213EF60;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// lwz r3,6088(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6088);
	// blt cr6,0x8213ef88
	if (ctx.cr6.lt) goto loc_8213EF88;
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
loc_8213EF88:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213EF9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213efac
	if (!ctx.cr0.eq) goto loc_8213EFAC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8213eff4
	goto loc_8213EFF4;
loc_8213EFAC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-17344
	ctx.r4.s64 = ctx.r11.s64 + -17344;
	// bl 0x8215f670
	ctx.lr = 0x8213EFBC;
	sub_8215F670(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215fbf8
	ctx.lr = 0x8213EFC4;
	sub_8215FBF8(ctx, base);
	// li r11,28234
	ctx.r11.s64 = 28234;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// sth r11,92(r1)
	REX_STORE_U16(ctx.r1.u32 + 92, ctx.r11.u16);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213EFF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8213EFF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82144DB8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82145AC8) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82145CC0) {
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
	ctx.lr = 0x82145CC8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r4.u64;
	// addi r30,r5,-4
	r30.s64 = ctx.r5.s64 + -4;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// subf r10,r4,r30
	ctx.r10.u64 = r30.u64 - ctx.r4.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// add r31,r10,r4
	r31.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// ble cr6,0x82145d6c
	if (!ctx.cr6.gt) goto loc_82145D6C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r11,3,0,28
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r29,r4
	r27.u64 = r29.u64 + ctx.r4.u64;
	// add r5,r26,r4
	ctx.r5.u64 = r26.u64 + ctx.r4.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x821461d0
	ctx.lr = 0x82145D30;
	sub_821461D0(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// add r5,r29,r31
	ctx.r5.u64 = r29.u64 + r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// subf r3,r29,r31
	ctx.r3.u64 = r31.u64 - r29.u64;
	// bl 0x821461d0
	ctx.lr = 0x82145D44;
	sub_821461D0(ctx, base);
	// subf r29,r29,r30
	r29.u64 = r30.u64 - r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// subf r3,r26,r30
	ctx.r3.u64 = r30.u64 - r26.u64;
	// bl 0x821461d0
	ctx.lr = 0x82145D5C;
	sub_821461D0(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x82145d70
	goto loc_82145D70;
loc_82145D6C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_82145D70:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821461d0
	ctx.lr = 0x82145D78;
	sub_821461D0(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// cmplw cr6,r25,r31
	ctx.cr6.compare<uint32_t>(r25.u32, r31.u32, ctx.xer);
	// bge cr6,0x82145e10
	if (!ctx.cr6.lt) goto loc_82145E10;
loc_82145D88:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// lwz r7,-4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + r28.u64;
	// mulli r10,r7,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(12));
	// lwz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,8(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// subf r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	// srawi r7,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r6,r4,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r4.u64;
	// srawi r6,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82145e10
	if (ctx.cr6.lt) goto loc_82145E10;
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r6,8(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// subf r10,r10,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r10.u64;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// subf r9,r9,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r9.u64;
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
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82145e10
	if (ctx.cr6.lt) goto loc_82145E10;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplw cr6,r25,r8
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82145d88
	if (ctx.cr6.lt) goto loc_82145D88;
loc_82145E10:
	// cmplw cr6,r5,r24
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r24.u32, ctx.xer);
	// bge cr6,0x82145e9c
	if (!ctx.cr6.lt) goto loc_82145E9C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + r28.u64;
loc_82145E24:
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	// srawi r7,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82145e9c
	if (ctx.cr6.lt) goto loc_82145E9C;
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r7,8(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82145e9c
	if (ctx.cr6.lt) goto loc_82145E9C;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplw cr6,r5,r24
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r24.u32, ctx.xer);
	// blt cr6,0x82145e24
	if (ctx.cr6.lt) goto loc_82145E24;
loc_82145E9C:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// b 0x82145f38
	goto loc_82145F38;
loc_82145EA8:
	// lwz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r10,r8,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(12));
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + r28.u64;
	// mulli r10,r4,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(12));
	// lwz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r4,8(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// subf r4,r3,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r3.u64;
	// srawi r4,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 1;
	// lwz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addze r4,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r4.s64 = temp.s64;
	// lwz r31,0(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r3,r31,r3
	ctx.r3.u64 = ctx.r3.u64 - r31.u64;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// addze r3,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r3.s64 = temp.s64;
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82145f34
	if (ctx.cr6.lt) goto loc_82145F34;
	// lwz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(r31.u32, 0);
	// lwz r3,8(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// subf r10,r10,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r10.u64;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// subf r9,r9,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r9.u64;
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
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82145f40
	if (ctx.cr6.lt) goto loc_82145F40;
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// stw r8,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// stw r9,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
loc_82145F30:
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
loc_82145F34:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
loc_82145F38:
	// cmplw cr6,r7,r24
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r24.u32, ctx.xer);
	// blt cr6,0x82145ea8
	if (ctx.cr6.lt) goto loc_82145EA8;
loc_82145F40:
	// cmplw cr6,r6,r25
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r25.u32, ctx.xer);
	// ble cr6,0x82145fe4
	if (!ctx.cr6.gt) goto loc_82145FE4;
loc_82145F48:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r6,-4
	ctx.r8.s64 = ctx.r6.s64 + -4;
	// lwz r4,-4(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + -4);
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + r28.u64;
	// mulli r10,r4,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(12));
	// lwz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r4,8(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// subf r4,r3,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r3.u64;
	// srawi r4,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 1;
	// lwz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addze r4,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r4.s64 = temp.s64;
	// lwz r31,0(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r3,r31,r3
	ctx.r3.u64 = ctx.r3.u64 - r31.u64;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// addze r3,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r3.s64 = temp.s64;
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82145fd4
	if (ctx.cr6.lt) goto loc_82145FD4;
	// lwz r4,8(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(r31.u32, 0);
	// subf r9,r9,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r9.u64;
	// subf r10,r10,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r10.u64;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82145fe0
	if (ctx.cr6.lt) goto loc_82145FE0;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwzu r10,-4(r11)
	ea = -4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
loc_82145FD4:
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// cmplw cr6,r25,r8
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82145f48
	if (ctx.cr6.lt) goto loc_82145F48;
loc_82145FE0:
	// cmplw cr6,r6,r25
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r25.u32, ctx.xer);
loc_82145FE4:
	// bne cr6,0x82146028
	if (!ctx.cr6.eq) goto loc_82146028;
	// cmplw cr6,r7,r24
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r24.u32, ctx.xer);
	// beq cr6,0x8214607c
	if (ctx.cr6.eq) goto loc_8214607C;
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82146008
	if (ctx.cr6.eq) goto loc_82146008;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
loc_82146008:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r4,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// b 0x82145f30
	goto loc_82145F30;
loc_82146028:
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// cmplw cr6,r7,r24
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r24.u32, ctx.xer);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// bne cr6,0x82146068
	if (!ctx.cr6.eq) goto loc_82146068;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82146054
	if (ctx.cr6.eq) goto loc_82146054;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82146054:
	// lwzu r10,-4(r5)
	ea = -4 + ctx.r5.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// b 0x82145f38
	goto loc_82145F38;
loc_82146068:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r8,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x82145f34
	goto loc_82145F34;
loc_8214607C:
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r5,4(r23)
	REX_STORE_U32(r23.u32 + 4, ctx.r5.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82167708) {
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
	ctx.lr = 0x82167710;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82162a30
	ctx.lr = 0x82167730;
	sub_82162A30(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821678e4
	if (ctx.cr6.eq) goto loc_821678E4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82167760
	if (!ctx.cr6.eq) goto loc_82167760;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f990
	ctx.lr = 0x82167750;
	sub_8215F990(ctx, base);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// b 0x82167798
	goto loc_82167798;
loc_82167760:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82167780
	if (!ctx.cr6.eq) goto loc_82167780;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f9e0
	ctx.lr = 0x82167770;
	sub_8215F9E0(ctx, base);
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// b 0x82167798
	goto loc_82167798;
loc_82167780:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821677a4
	if (!ctx.cr6.eq) goto loc_821677A4;
	// lbz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
loc_82167798:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82162a30
	ctx.lr = 0x821677A0;
	sub_82162A30(ctx, base);
	// b 0x821677cc
	goto loc_821677CC;
loc_821677A4:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821677d4
	if (!ctx.cr6.eq) goto loc_821677D4;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821677c0
	if (ctx.cr6.lt) goto loc_821677C0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821677C0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82162af8
	ctx.lr = 0x821677CC;
	sub_82162AF8(ctx, base);
loc_821677CC:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x821678e4
	goto loc_821678E4;
loc_821677D4:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8216783c
	if (!ctx.cr6.eq) goto loc_8216783C;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r28,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	r28.s64 = ctx.r11.s32 >> 4;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// bl 0x82162a30
	ctx.lr = 0x82167804;
	sub_82162A30(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x821678e4
	if (!ctx.cr6.gt) goto loc_821678E4;
loc_82167814:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82167820;
	sub_8215F1B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82167708
	ctx.lr = 0x82167828;
	sub_82167708(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// blt cr6,0x82167814
	if (ctx.cr6.lt) goto loc_82167814;
	// b 0x821678e4
	goto loc_821678E4;
loc_8216783C:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821678cc
	if (!ctx.cr6.eq) goto loc_821678CC;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r27,8(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// bl 0x82162a30
	ctx.lr = 0x82167860;
	sub_82162A30(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x821678e4
	if (!ctx.cr6.gt) goto loc_821678E4;
loc_82167870:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f530
	ctx.lr = 0x8216787C;
	sub_8215F530(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82167894
	if (ctx.cr6.lt) goto loc_82167894;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82167898
	goto loc_82167898;
loc_82167894:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82167898:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82162af8
	ctx.lr = 0x821678A0;
	sub_82162AF8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x821678B0;
	sub_8215F2D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82167708
	ctx.lr = 0x821678B8;
	sub_82167708(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// blt cr6,0x82167870
	if (ctx.cr6.lt) goto loc_82167870;
	// b 0x821678e4
	goto loc_821678E4;
loc_821678CC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,23224
	ctx.r4.s64 = ctx.r11.s64 + 23224;
	// addi r3,r10,23256
	ctx.r3.s64 = ctx.r10.s64 + 23256;
	// li r5,615
	ctx.r5.s64 = 615;
	// bl 0x821231d0
	ctx.lr = 0x821678E4;
	sub_821231D0(ctx, base);
loc_821678E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82174E70) {
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
	ctx.lr = 0x82174E78;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// bl 0x82173db8
	ctx.lr = 0x82174E9C;
	sub_82173DB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r3,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r3.u16);
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82174ef8
	if (ctx.cr0.eq) goto loc_82174EF8;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r27,r9,27668
	r27.s64 = ctx.r9.s64 + 27668;
	// addi r26,r10,27664
	r26.s64 = ctx.r10.s64 + 27664;
loc_82174EC4:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82174f00
	if (!ctx.cr6.eq) goto loc_82174F00;
	// rlwinm. r11,r23,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82174ee8
	if (!ctx.cr0.eq) goto loc_82174EE8;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8216fa20
	ctx.lr = 0x82174EE8;
	sub_8216FA20(ctx, base);
loc_82174EE8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82174EEC:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82174ec4
	if (!ctx.cr0.eq) goto loc_82174EC4;
loc_82174EF8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf4
	return;
loc_82174F00:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82174f2c
	if (!ctx.cr6.eq) goto loc_82174F2C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x82174ee8
	if (!ctx.cr6.gt) goto loc_82174EE8;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_82174F14:
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8216fa20
	ctx.lr = 0x82174F20;
	sub_8216FA20(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82174f14
	if (!ctx.cr0.eq) goto loc_82174F14;
	// b 0x82174ee8
	goto loc_82174EE8;
loc_82174F2C:
	// cmpwi cr6,r11,123
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 123, ctx.xer);
	// bne cr6,0x82174fd8
	if (!ctx.cr6.eq) goto loc_82174FD8;
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1);
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// bne cr6,0x82174fd8
	if (!ctx.cr6.eq) goto loc_82174FD8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269f078
	ctx.lr = 0x82174F4C;
	sub_8269F078(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82174ef8
	if (ctx.cr0.eq) goto loc_82174EF8;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82174fd0
	if (ctx.cr6.eq) goto loc_82174FD0;
	// li r11,255
	ctx.r11.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r31,0
	r31.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// ori r31,r31,65533
	r31.u64 = r31.u64 | 65533;
	// bl 0x8269d898
	ctx.lr = 0x82174F88;
	sub_8269D898(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// blt cr6,0x82174fc0
	if (ctx.cr6.lt) goto loc_82174FC0;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r11,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// stb r10,86(r1)
	REX_STORE_U8(ctx.r1.u32 + 86, ctx.r10.u8);
	// stb r9,85(r1)
	REX_STORE_U8(ctx.r1.u32 + 85, ctx.r9.u8);
	// stb r8,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r8.u8);
	// bl 0x82175020
	ctx.lr = 0x82174FBC;
	sub_82175020(ctx, base);
	// clrlwi r31,r3,16
	r31.u64 = ctx.r3.u32 & 0xFFFF;
loc_82174FC0:
	// sth r31,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r31.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8216fa20
	ctx.lr = 0x82174FD0;
	sub_8216FA20(ctx, base);
loc_82174FD0:
	// addi r31,r30,2
	r31.s64 = r30.s64 + 2;
	// b 0x82174eec
	goto loc_82174EEC;
loc_82174FD8:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82170d90
	ctx.lr = 0x82174FE4;
	sub_82170D90(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82174ee8
	if (ctx.cr0.eq) goto loc_82174EE8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82173db8
	ctx.lr = 0x82174FF8;
	sub_82173DB8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r3,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x82175014
	if (ctx.cr6.eq) goto loc_82175014;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8216fa20
	ctx.lr = 0x82175014;
	sub_8216FA20(ctx, base);
loc_82175014:
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// b 0x82174eec
	goto loc_82174EEC;
}

DEFINE_REX_FUNC(sub_82180508) {
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
	ctx.lr = 0x82180510;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r9,r11,31196
	ctx.r9.s64 = ctx.r11.s64 + 31196;
	// li r27,0
	r27.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r29,r3,32
	r29.s64 = ctx.r3.s64 + 32;
	// lwz r3,32(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// stw r27,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82180568
	if (ctx.cr6.eq) goto loc_82180568;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82180564
	if (ctx.cr6.eq) goto loc_82180564;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82180558:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82180558
	if (!ctx.cr6.eq) goto loc_82180558;
loc_82180564:
	// bl 0x8269ce98
	ctx.lr = 0x82180568;
	sub_8269CE98(ctx, base);
loc_82180568:
	// stw r27,0(r29)
	REX_STORE_U32(r29.u32 + 0, r27.u32);
	// addi r31,r30,16
	r31.s64 = r30.s64 + 16;
	// stw r27,4(r29)
	REX_STORE_U32(r29.u32 + 4, r27.u32);
	// stw r27,8(r29)
	REX_STORE_U32(r29.u32 + 8, r27.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r29,4(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r28,r29
	r28.u64 = r29.u64;
	// lbz r11,45(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 45);
	// b 0x821805bc
	goto loc_821805BC;
loc_8218058C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 8);
	// bl 0x821f6700
	ctx.lr = 0x82180598;
	sub_821F6700(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,12
	ctx.r3.s64 = r29.s64 + 12;
	// lwz r28,0(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x82120ac0
	ctx.lr = 0x821805AC;
	sub_82120AC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821805B4;
	sub_8269CE98(ctx, base);
	// lbz r11,45(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 45);
	// mr r29,r28
	r29.u64 = r28.u64;
loc_821805BC:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8218058c
	if (ctx.cr0.eq) goto loc_8218058C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
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
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x8269ce98
	ctx.lr = 0x821805E8;
	sub_8269CE98(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// stw r27,8(r30)
	REX_STORE_U32(r30.u32 + 8, r27.u32);
	// beq cr6,0x82180624
	if (ctx.cr6.eq) goto loc_82180624;
loc_8218060C:
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x82180614;
	sub_8269CE98(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8218060c
	if (!ctx.cr6.eq) goto loc_8218060C;
loc_82180624:
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x8269ce98
	ctx.lr = 0x8218062C;
	sub_8269CE98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8218BFF0) {
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
	ctx.lr = 0x8218BFF8;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2ca4
	ctx.lr = 0x8218C000;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,164(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,92(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 92);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
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
	// addi r29,r11,32
	r29.s64 = ctx.r11.s64 + 32;
	// add r23,r10,r3
	r23.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r30,r11,16
	r30.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8218c160
	if (!ctx.cr6.gt) goto loc_8218C160;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f30,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f30.f64 = double(temp.f32);
loc_8218C048:
	// lfs f13,212(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f0,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,208(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 208);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f12,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f13,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmsubs f10,f13,f11,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, -ctx.f10.f64)));
	// fmadds f9,f12,f11,f0
	ctx.f9.f64 = double(float(std::fma(ctx.f12.f64, ctx.f11.f64, ctx.f0.f64)));
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// fmr f2,f9
	ctx.f2.f64 = ctx.f9.f64;
	// bl 0x8218aa80
	ctx.lr = 0x8218C090;
	sub_8218AA80(ctx, base);
	// fmuls f0,f10,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f13,224(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,12(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 12);
	// rlwinm r25,r3,6,0,25
	r25.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// add r3,r25,r11
	ctx.r3.u64 = r25.u64 + ctx.r11.u64;
	// fmadds f0,f9,f9,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f0.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, f30.f64);
	// bge cr6,0x8218c140
	if (!ctx.cr6.lt) goto loc_8218C140;
	// lfs f0,228(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// fmr f31,f30
	f31.f64 = f30.f64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8218c0d4
	if (!ctx.cr6.gt) goto loc_8218C0D4;
	// fsubs f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 - f30.f64));
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - f30.f64));
	// fdivs f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_8218C0D4:
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
	ctx.lr = 0x8218C0E8;
	sub_8218CA70(ctx, base);
	// fmuls f27,f1,f31
	ctx.fpscr.disableFlushMode();
	f27.f64 = double(float(ctx.f1.f64 * f31.f64));
	// lfs f0,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + f27.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r28,r11,r31
	r28.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + r25.u64;
	// bl 0x8218ca70
	ctx.lr = 0x8218C11C;
	sub_8218CA70(ctx, base);
	// lfd f13,0(r28)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(r28.u32 + 0);
	// lfd f0,136(r31)
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 136);
	// fnmsubs f12,f1,f31,f27
	ctx.f12.f64 = double(float(-std::fma(ctx.f1.f64, f31.f64, -f27.f64)));
	// fsub f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 - ctx.f13.f64;
	// lfs f13,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fdiv f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 / ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
loc_8218C140:
	// lwz r11,96(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 96);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// cmpw cr6,r24,r10
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8218c048
	if (ctx.cr6.lt) goto loc_8218C048;
loc_8218C160:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2cf0
	ctx.lr = 0x8218C16C;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82195F90) {
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
	ctx.lr = 0x82195F98;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r18,0
	r18.s64 = 0;
	// lis r27,-32106
	r27.s64 = -2104098816;
	// addi r23,r11,-11728
	r23.s64 = ctx.r11.s64 + -11728;
	// addi r22,r10,-31512
	r22.s64 = ctx.r10.s64 + -31512;
	// addi r21,r9,-31520
	r21.s64 = ctx.r9.s64 + -31520;
	// addi r20,r8,-31528
	r20.s64 = ctx.r8.s64 + -31528;
	// addi r26,r7,-31536
	r26.s64 = ctx.r7.s64 + -31536;
	// addi r25,r6,-31548
	r25.s64 = ctx.r6.s64 + -31548;
	// addi r24,r5,-17344
	r24.s64 = ctx.r5.s64 + -17344;
loc_82195FE4:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82195ffc
	if (!ctx.cr6.eq) goto loc_82195FFC;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82196000
	goto loc_82196000;
loc_82195FFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82196000:
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(r18.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82196224
	if (!ctx.cr6.lt) goto loc_82196224;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f530
	ctx.lr = 0x82196014;
	sub_8215F530(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x82196024;
	sub_8215F2D0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8215f338
	ctx.lr = 0x8219602C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82196030;
	sub_8215FA30(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x82196040;
	sub_8215F2D0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8215f338
	ctx.lr = 0x82196048;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8219604C;
	sub_8215FA30(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82125d00
	ctx.lr = 0x82196058;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82196080
	if (!ctx.cr0.eq) goto loc_82196080;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x822f6280
	ctx.lr = 0x82196068;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821960fc
	if (ctx.cr0.eq) goto loc_821960FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8214f4f0
	ctx.lr = 0x82196078;
	sub_8214F4F0(ctx, base);
	// stw r23,0(r31)
	REX_STORE_U32(r31.u32 + 0, r23.u32);
	// b 0x821961cc
	goto loc_821961CC;
loc_82196080:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125d00
	ctx.lr = 0x8219608C;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821960b0
	if (!ctx.cr0.eq) goto loc_821960B0;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x822f6280
	ctx.lr = 0x8219609C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821960fc
	if (ctx.cr0.eq) goto loc_821960FC;
	// bl 0x821962e0
	ctx.lr = 0x821960A8;
	sub_821962E0(ctx, base);
loc_821960A8:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x821961cc
	goto loc_821961CC;
loc_821960B0:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125d00
	ctx.lr = 0x821960BC;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82196104
	if (!ctx.cr0.eq) goto loc_82196104;
	// lwz r11,6180(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 6180);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8219a8b8
	ctx.lr = 0x821960DC;
	sub_8219A8B8(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821960fc
	if (ctx.cr6.eq) goto loc_821960FC;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821960F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821960a8
	goto loc_821960A8;
loc_821960FC:
	// li r31,0
	r31.s64 = 0;
	// b 0x821961cc
	goto loc_821961CC;
loc_82196104:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125d00
	ctx.lr = 0x82196110;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8219621c
	if (!ctx.cr0.eq) goto loc_8219621C;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219612C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82120600
	ctx.lr = 0x8219613C;
	sub_82120600(ctx, base);
	// lwz r11,6180(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 6180);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// bl 0x8219a6b0
	ctx.lr = 0x82196154;
	sub_8219A6B0(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82196178
	if (ctx.cr6.eq) goto loc_82196178;
loc_82196164:
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82196170;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x821961bc
	goto loc_821961BC;
loc_82196178:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8219a8b8
	ctx.lr = 0x82196188;
	sub_8219A8B8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821961b8
	if (ctx.cr6.eq) goto loc_821961B8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,72
	ctx.r4.s64 = r31.s64 + 72;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8219a6b0
	ctx.lr = 0x821961A8;
	sub_8219A6B0(ctx, base);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82196164
	if (!ctx.cr6.eq) goto loc_82196164;
loc_821961B8:
	// li r31,0
	r31.s64 = 0;
loc_821961BC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821961CC;
	sub_82120AC0(ctx, base);
loc_821961CC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8219621c
	if (ctx.cr6.eq) goto loc_8219621C;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x82120b20
	ctx.lr = 0x821961E8;
	sub_82120B20(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8215f2d0
	ctx.lr = 0x821961F8;
	sub_8215F2D0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219620C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r19,12
	ctx.r3.s64 = r19.s64 + 12;
	// bl 0x8214fcc8
	ctx.lr = 0x82196218;
	sub_8214FCC8(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_8219621C:
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// b 0x82195fe4
	goto loc_82195FE4;
loc_82196224:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_821A68C0) {
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
	ctx.lr = 0x821A68C8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x821a6a80
	ctx.lr = 0x821A68DC;
	sub_821A6A80(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d7e38
	ctx.lr = 0x821A68E8;
	sub_821D7E38(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a6970
	if (ctx.cr0.eq) goto loc_821A6970;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x822f6280
	ctx.lr = 0x821A68FC;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821a6960
	if (ctx.cr0.eq) goto loc_821A6960;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ea508
	ctx.lr = 0x821A690C;
	sub_821EA508(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,10776
	ctx.r11.s64 = ctx.r11.s64 + 10776;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r30,148(r31)
	REX_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x822f6280
	ctx.lr = 0x821A6928;
	sub_822F6280(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a6948
	if (ctx.cr0.eq) goto loc_821A6948;
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// b 0x821a6964
	goto loc_821A6964;
loc_821A6948:
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
	ctx.lr = 0x821A6960;
	sub_82120018(ctx, base);
loc_821A6960:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A6964:
	// stw r3,96(r28)
	REX_STORE_U32(r28.u32 + 96, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821d8170
	ctx.lr = 0x821A6970;
	sub_821D8170(ctx, base);
loc_821A6970:
	// lwz r30,88(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// beq cr6,0x821a69a8
	if (ctx.cr6.eq) goto loc_821A69A8;
	// lis r29,-32106
	r29.s64 = -2104098816;
loc_821A6984:
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
	ctx.lr = 0x821A699C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x821a6984
	if (!ctx.cr6.eq) goto loc_821A6984;
loc_821A69A8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821a6af8
	ctx.lr = 0x821A69B0;
	sub_821A6AF8(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8269ce98
	ctx.lr = 0x821A69B8;
	sub_8269CE98(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821AC270) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821AC278;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r11,-15296
	r30.s64 = ctx.r11.s64 + -15296;
	// lwz r4,-15296(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -15296);
	// bl 0x82120600
	ctx.lr = 0x821AC298;
	sub_82120600(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821AC2B4;
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
	ctx.lr = 0x821AC2C8;
	sub_82120AC0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821ac2fc
	if (ctx.cr6.eq) goto loc_821AC2FC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82121ec8
	ctx.lr = 0x821AC2DC;
	sub_82121EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821ac2fc
	if (!ctx.cr0.eq) goto loc_821AC2FC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-26528
	ctx.r4.s64 = ctx.r11.s64 + -26528;
	// addi r3,r10,-26456
	ctx.r3.s64 = ctx.r10.s64 + -26456;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x821231d0
	ctx.lr = 0x821AC2FC;
	sub_821231D0(ctx, base);
loc_821AC2FC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821B0A08) {
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
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x822f6280
	ctx.lr = 0x821B0A1C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b0a2c
	if (ctx.cr0.eq) goto loc_821B0A2C;
	// bl 0x821b0a40
	ctx.lr = 0x821B0A28;
	sub_821B0A40(ctx, base);
	// b 0x821b0a30
	goto loc_821B0A30;
loc_821B0A2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B0A30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B1580) {
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
	// lwz r11,6168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b15b8
	if (ctx.cr6.eq) goto loc_821B15B8;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// addi r4,r4,116
	ctx.r4.s64 = ctx.r4.s64 + 116;
	// li r5,28
	ctx.r5.s64 = 28;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x826a1e70
	ctx.lr = 0x821B15B8;
	sub_826A1E70(ctx, base);
loc_821B15B8:
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

DEFINE_REX_FUNC(sub_821B4770) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca0
	ctx.lr = 0x821B4778;
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x82178268
	ctx.lr = 0x821B4794;
	sub_82178268(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r22,r11,16592
	r22.s64 = ctx.r11.s64 + 16592;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r10,r10,-21752
	ctx.r10.s64 = ctx.r10.s64 + -21752;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// lfs f0,68(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r22.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r31,124
	r29.s64 = r31.s64 + 124;
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// addi r27,r31,132
	r27.s64 = r31.s64 + 132;
	// lfs f13,220(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
	// addi r26,r31,136
	r26.s64 = r31.s64 + 136;
	// stfs f13,128(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// stw r9,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r9.u32);
	// lfs f31,12(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 12);
	f31.f64 = double(temp.f32);
	// addi r25,r31,140
	r25.s64 = r31.s64 + 140;
	// lfs f12,-19392(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -19392);
	ctx.f12.f64 = double(temp.f32);
	// addi r24,r31,144
	r24.s64 = r31.s64 + 144;
	// lfs f11,228(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 228);
	ctx.f11.f64 = double(temp.f32);
	// addi r23,r31,148
	r23.s64 = r31.s64 + 148;
	// lfs f0,48(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,132(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f31,136(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// stfs f31,140(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// stfs f11,144(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B4808;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x821b4838
	if (ctx.cr0.eq) goto loc_821B4838;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r11,-22144
	ctx.r4.s64 = ctx.r11.s64 + -22144;
	// bl 0x82120600
	ctx.lr = 0x821B4820;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r30,1
	r30.s64 = 1;
	// bl 0x821a0530
	ctx.lr = 0x821B4834;
	sub_821A0530(ctx, base);
	// b 0x821b483c
	goto loc_821B483C;
loc_821B4838:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B483C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r28,r31,80
	r28.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B4850;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b50f8
	ctx.lr = 0x821B485C;
	sub_821B50F8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b4878
	if (ctx.cr0.eq) goto loc_821B4878;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821B4878;
	sub_82120AC0(ctx, base);
loc_821B4878:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B4880;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b48b0
	if (ctx.cr0.eq) goto loc_821B48B0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-22124
	ctx.r4.s64 = ctx.r11.s64 + -22124;
	// bl 0x82120600
	ctx.lr = 0x821B4898;
	sub_82120600(ctx, base);
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,2
	r30.u64 = r30.u64 | 2;
	// bl 0x821a0530
	ctx.lr = 0x821B48AC;
	sub_821A0530(ctx, base);
	// b 0x821b48b4
	goto loc_821B48B4;
loc_821B48B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B48B4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B48C4;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b50f8
	ctx.lr = 0x821B48D0;
	sub_821B50F8(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b48ec
	if (ctx.cr0.eq) goto loc_821B48EC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwinm r30,r30,0,31,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x821B48EC;
	sub_82120AC0(ctx, base);
loc_821B48EC:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B48F4;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b4924
	if (ctx.cr0.eq) goto loc_821B4924;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-22488
	ctx.r4.s64 = ctx.r11.s64 + -22488;
	// bl 0x82120600
	ctx.lr = 0x821B490C;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,4
	r30.u64 = r30.u64 | 4;
	// bl 0x82196ba8
	ctx.lr = 0x821B4920;
	sub_82196BA8(ctx, base);
	// b 0x821b4928
	goto loc_821B4928;
loc_821B4924:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B4928:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B4938;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b50f8
	ctx.lr = 0x821B4944;
	sub_821B50F8(ctx, base);
	// rlwinm. r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b4960
	if (ctx.cr0.eq) goto loc_821B4960;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r30,r30,0,30,28
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x821B4960;
	sub_82120AC0(ctx, base);
loc_821B4960:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B4968;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b4998
	if (ctx.cr0.eq) goto loc_821B4998;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-21900
	ctx.r4.s64 = ctx.r11.s64 + -21900;
	// bl 0x82120600
	ctx.lr = 0x821B4980;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,8
	r30.u64 = r30.u64 | 8;
	// bl 0x82196ba8
	ctx.lr = 0x821B4994;
	sub_82196BA8(ctx, base);
	// b 0x821b499c
	goto loc_821B499C;
loc_821B4998:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B499C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B49AC;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b50f8
	ctx.lr = 0x821B49B8;
	sub_821B50F8(ctx, base);
	// rlwinm. r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b49d4
	if (ctx.cr0.eq) goto loc_821B49D4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// rlwinm r30,r30,0,29,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x821B49D4;
	sub_82120AC0(ctx, base);
loc_821B49D4:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B49DC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b4a0c
	if (ctx.cr0.eq) goto loc_821B4A0C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-20952
	ctx.r4.s64 = ctx.r11.s64 + -20952;
	// bl 0x82120600
	ctx.lr = 0x821B49F4;
	sub_82120600(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,16
	r30.u64 = r30.u64 | 16;
	// bl 0x82196ba8
	ctx.lr = 0x821B4A08;
	sub_82196BA8(ctx, base);
	// b 0x821b4a10
	goto loc_821B4A10;
loc_821B4A0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B4A10:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B4A20;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b50f8
	ctx.lr = 0x821B4A2C;
	sub_821B50F8(ctx, base);
	// rlwinm. r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b4a48
	if (ctx.cr0.eq) goto loc_821B4A48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r30,r30,0,28,26
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x821B4A48;
	sub_82120AC0(ctx, base);
loc_821B4A48:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B4A50;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b4a80
	if (ctx.cr0.eq) goto loc_821B4A80;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-23528
	ctx.r4.s64 = ctx.r11.s64 + -23528;
	// bl 0x82120600
	ctx.lr = 0x821B4A68;
	sub_82120600(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,32
	r30.u64 = r30.u64 | 32;
	// bl 0x82196ba8
	ctx.lr = 0x821B4A7C;
	sub_82196BA8(ctx, base);
	// b 0x821b4a84
	goto loc_821B4A84;
loc_821B4A80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B4A84:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B4A94;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b50f8
	ctx.lr = 0x821B4AA0;
	sub_821B50F8(ctx, base);
	// rlwinm. r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b4abc
	if (ctx.cr0.eq) goto loc_821B4ABC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r30,r30,0,27,25
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// bl 0x82120ac0
	ctx.lr = 0x821B4ABC;
	sub_82120AC0(ctx, base);
loc_821B4ABC:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821B4AC4;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b4af4
	if (ctx.cr0.eq) goto loc_821B4AF4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,-22448
	ctx.r4.s64 = ctx.r11.s64 + -22448;
	// bl 0x82120600
	ctx.lr = 0x821B4ADC;
	sub_82120600(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,64
	r30.u64 = r30.u64 | 64;
	// bl 0x82196ba8
	ctx.lr = 0x821B4AF0;
	sub_82196BA8(ctx, base);
	// b 0x821b4af8
	goto loc_821B4AF8;
loc_821B4AF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B4AF8:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821B4B08;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b50f8
	ctx.lr = 0x821B4B14;
	sub_821B50F8(ctx, base);
	// rlwinm. r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b4b2c
	if (ctx.cr0.eq) goto loc_821B4B2C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82120ac0
	ctx.lr = 0x821B4B2C;
	sub_82120AC0(ctx, base);
loc_821B4B2C:
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x822f6280
	ctx.lr = 0x821B4B34;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b4b4c
	if (ctx.cr0.eq) goto loc_821B4B4C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821a1e80
	ctx.lr = 0x821B4B44;
	sub_821A1E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821b4b50
	goto loc_821B4B50;
loc_821B4B4C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821B4B50:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821B4B60;
	sub_821D3988(ctx, base);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821B4B68;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b4b80
	if (ctx.cr0.eq) goto loc_821B4B80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dffe8
	ctx.lr = 0x821B4B78;
	sub_821DFFE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821b4b84
	goto loc_821B4B84;
loc_821B4B80:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821B4B84:
	// stw r4,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821B4B90;
	sub_821D3988(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x821B4B98;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b4bb0
	if (ctx.cr0.eq) goto loc_821B4BB0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821b5178
	ctx.lr = 0x821B4BA8;
	sub_821B5178(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821b4bb4
	goto loc_821B4BB4;
loc_821B4BB0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821B4BB4:
	// stw r4,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821B4BC0;
	sub_821D3988(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r30,112(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x822f6280
	ctx.lr = 0x821B4BCC;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-29688
	r29.s64 = ctx.r11.s64 + -29688;
	// beq 0x821b4bfc
	if (ctx.cr0.eq) goto loc_821B4BFC;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,19808
	ctx.r9.s64 = ctx.r9.s64 + 19808;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x821b4c00
	goto loc_821B4C00;
loc_821B4BFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B4C00:
	// stw r11,96(r30)
	REX_STORE_U32(r30.u32 + 96, ctx.r11.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r30,116(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 116);
	// bl 0x822f6280
	ctx.lr = 0x821B4C10;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b4c38
	if (ctx.cr0.eq) goto loc_821B4C38;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,19808
	ctx.r9.s64 = ctx.r9.s64 + 19808;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x821b4c3c
	goto loc_821B4C3C;
loc_821B4C38:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B4C3C:
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
	// li r4,39
	ctx.r4.s64 = 39;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x821a1ff8
	ctx.lr = 0x821B4C4C;
	sub_821A1FF8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,116(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 116);
	// bl 0x821e00d0
	ctx.lr = 0x821B4C58;
	sub_821E00D0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f0,8(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r22.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r7,r1,368
	ctx.r7.s64 = ctx.r1.s64 + 368;
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r9,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// std r5,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r5.u64);
	// std r4,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r4.u64);
	// std r10,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// ld r7,0(r6)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// ld r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// ld r5,24(r6)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r6.u32 + 24);
	// ld r9,16(r6)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r6.u32 + 16);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r9,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// std r10,40(r11)
	REX_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// std r7,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r7.u64);
	// std r5,56(r11)
	REX_STORE_U64(ctx.r11.u32 + 56, ctx.r5.u64);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_821DC4B0) {
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
	// bl 0x821dbeb0
	ctx.lr = 0x821DC4C8;
	sub_821DBEB0(ctx, base);
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

DEFINE_REX_FUNC(sub_821DD4B0) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8215f338
	ctx.lr = 0x821DD4D8;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x821DD4DC;
	sub_8215FA30(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,60(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// b 0x821dd4f8
	goto loc_821DD4F8;
loc_821DD4F0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
loc_821DD4F8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821dd4f0
	if (!ctx.cr6.eq) goto loc_821DD4F0;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82178b60
	ctx.lr = 0x821DD508;
	sub_82178B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821dd544
	if (ctx.cr0.eq) goto loc_821DD544;
	// bl 0x821dc4e0
	ctx.lr = 0x821DD514;
	sub_821DC4E0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821dd544
	if (ctx.cr0.eq) goto loc_821DD544;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dd350
	ctx.lr = 0x821DD528;
	sub_821DD350(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821dd544
	if (ctx.cr0.eq) goto loc_821DD544;
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r3,r30,48
	ctx.r3.s64 = r30.s64 + 48;
	// bl 0x82145710
	ctx.lr = 0x821DD544;
	sub_82145710(ctx, base);
loc_821DD544:
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

DEFINE_REX_FUNC(sub_821E0478) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822d6ce8
	ctx.lr = 0x821E048C;
	sub_822D6CE8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_821E2360) {
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
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r10,27528
	ctx.r4.s64 = ctx.r10.s64 + 27528;
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
	ctx.lr = 0x821E239C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821e23c0
	if (!ctx.cr0.eq) goto loc_821E23C0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,13428
	ctx.r4.s64 = ctx.r11.s64 + 13428;
	// addi r3,r10,13476
	ctx.r3.s64 = ctx.r10.s64 + 13476;
	// li r5,503
	ctx.r5.s64 = 503;
	// bl 0x821231d0
	ctx.lr = 0x821E23C0;
	sub_821231D0(ctx, base);
loc_821E23C0:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,27544
	ctx.r4.s64 = ctx.r10.s64 + 27544;
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
	ctx.lr = 0x821E23E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// addi r4,r10,27484
	ctx.r4.s64 = ctx.r10.s64 + 27484;
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
	ctx.lr = 0x821E2414;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// addi r4,r10,32236
	ctx.r4.s64 = ctx.r10.s64 + 32236;
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
	ctx.lr = 0x821E2440;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// addi r4,r10,32528
	ctx.r4.s64 = ctx.r10.s64 + 32528;
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
	ctx.lr = 0x821E246C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// addi r4,r10,32548
	ctx.r4.s64 = ctx.r10.s64 + 32548;
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
	ctx.lr = 0x821E2498;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// addi r4,r10,32572
	ctx.r4.s64 = ctx.r10.s64 + 32572;
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
	ctx.lr = 0x821E24C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// addi r4,r10,32596
	ctx.r4.s64 = ctx.r10.s64 + 32596;
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
	ctx.lr = 0x821E24F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// addi r4,r10,32624
	ctx.r4.s64 = ctx.r10.s64 + 32624;
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
	ctx.lr = 0x821E251C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// addi r4,r10,32652
	ctx.r4.s64 = ctx.r10.s64 + 32652;
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
	ctx.lr = 0x821E2548;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_821F4F50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821F4F58;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
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
	// beq cr6,0x821f4f8c
	if (ctx.cr6.eq) goto loc_821F4F8C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,22816
	ctx.r4.s64 = ctx.r11.s64 + 22816;
	// addi r3,r10,22864
	ctx.r3.s64 = ctx.r10.s64 + 22864;
	// li r5,255
	ctx.r5.s64 = 255;
	// bl 0x821231d0
	ctx.lr = 0x821F4F8C;
	sub_821231D0(ctx, base);
loc_821F4F8C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x821F4FA0;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,23152
	ctx.r4.s64 = ctx.r11.s64 + 23152;
	// bl 0x8215f338
	ctx.lr = 0x821F4FAC;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x821f6130
	ctx.lr = 0x821F4FB8;
	sub_821F6130(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821F67C0) {
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
	ctx.lr = 0x821F67C8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-14552
	ctx.r11.s64 = ctx.r11.s64 + -14552;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r30,0
	r30.s64 = 0;
	// addi r10,r10,24020
	ctx.r10.s64 = ctx.r10.s64 + 24020;
	// addi r11,r9,24040
	ctx.r11.s64 = ctx.r9.s64 + 24040;
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// bl 0x821f7dd0
	ctx.lr = 0x821F6810;
	sub_821F7DD0(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x821f7dd0
	ctx.lr = 0x821F6818;
	sub_821F7DD0(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x821f7dd0
	ctx.lr = 0x821F6820;
	sub_821F7DD0(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x821f7dd0
	ctx.lr = 0x821F6828;
	sub_821F7DD0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,384
	ctx.r3.s64 = 384;
	// stw r30,72(r31)
	REX_STORE_U32(r31.u32 + 72, r30.u32);
	// addi r29,r31,72
	r29.s64 = r31.s64 + 72;
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x821F6844;
	sub_8269D1D0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x821F6850;
	sub_8269D1B8(ctx, base);
	// li r27,8
	r27.s64 = 8;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r28,72(r31)
	REX_STORE_U32(r31.u32 + 72, r28.u32);
	// li r3,224
	ctx.r3.s64 = 224;
	// stw r27,80(r31)
	REX_STORE_U32(r31.u32 + 80, r27.u32);
	// addi r28,r31,84
	r28.s64 = r31.s64 + 84;
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x821F6878;
	sub_8269D1D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x821F6884;
	sub_8269D1B8(ctx, base);
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r27,92(r31)
	REX_STORE_U32(r31.u32 + 92, r27.u32);
	// li r30,32
	r30.s64 = 32;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x821f68cc
	if (!ctx.cr6.lt) goto loc_821F68CC;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,1536
	ctx.r3.s64 = 1536;
	// bl 0x8269d1d0
	ctx.lr = 0x821F68A8;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mulli r5,r11,48
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(48));
	// bl 0x826a1e70
	ctx.lr = 0x821F68BC;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x821F68C4;
	sub_8269D1B8(ctx, base);
	// stw r27,0(r29)
	REX_STORE_U32(r29.u32 + 0, r27.u32);
	// stw r30,8(r29)
	REX_STORE_U32(r29.u32 + 8, r30.u32);
loc_821F68CC:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x821f6908
	if (!ctx.cr6.lt) goto loc_821F6908;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,896
	ctx.r3.s64 = 896;
	// bl 0x8269d1d0
	ctx.lr = 0x821F68E4;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mulli r5,r11,28
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// bl 0x826a1e70
	ctx.lr = 0x821F68F8;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x821F6900;
	sub_8269D1B8(ctx, base);
	// stw r29,0(r28)
	REX_STORE_U32(r28.u32 + 0, r29.u32);
	// stw r30,8(r28)
	REX_STORE_U32(r28.u32 + 8, r30.u32);
loc_821F6908:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,23740
	ctx.r4.s64 = ctx.r9.s64 + 23740;
	// lwz r3,6116(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6116);
	// lfs f0,556(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 556);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,228(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,580(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 580);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,584(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 584);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F6954;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82201E50) {
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
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r31,6048(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// bl 0x822f6280
	ctx.lr = 0x82201E78;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82201ea4
	if (ctx.cr0.eq) goto loc_82201EA4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,21984
	ctx.r10.s64 = ctx.r10.s64 + 21984;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82201ea8
	goto loc_82201EA8;
loc_82201EA4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82201EA8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r10,-23868
	ctx.r5.s64 = ctx.r10.s64 + -23868;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82201EC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r10,28892
	ctx.r4.s64 = ctx.r10.s64 + 28892;
	// lwz r3,6076(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6076);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82201EE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215efb0
	ctx.lr = 0x82201EF8;
	sub_8215EFB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28904
	ctx.r4.s64 = ctx.r11.s64 + 28904;
	// bl 0x8215f670
	ctx.lr = 0x82201F08;
	sub_8215F670(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82201f20
	if (!ctx.cr6.eq) goto loc_82201F20;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// stb r11,15(r10)
	REX_STORE_U8(ctx.r10.u32 + 15, ctx.r11.u8);
loc_82201F20:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28920
	ctx.r4.s64 = ctx.r11.s64 + 28920;
	// bl 0x8215f670
	ctx.lr = 0x82201F30;
	sub_8215F670(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82201f48
	if (!ctx.cr6.eq) goto loc_82201F48;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// stb r11,16(r10)
	REX_STORE_U8(ctx.r10.u32 + 16, ctx.r11.u8);
loc_82201F48:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28932
	ctx.r4.s64 = ctx.r11.s64 + 28932;
	// bl 0x8215f670
	ctx.lr = 0x82201F58;
	sub_8215F670(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r11,-19004
	ctx.r4.s64 = ctx.r11.s64 + -19004;
	// bl 0x8215fb50
	ctx.lr = 0x82201F64;
	sub_8215FB50(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28956
	ctx.r4.s64 = ctx.r11.s64 + 28956;
	// bl 0x8215f670
	ctx.lr = 0x82201F74;
	sub_8215F670(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r11,-19000
	ctx.r4.s64 = ctx.r11.s64 + -19000;
	// bl 0x8215fb50
	ctx.lr = 0x82201F80;
	sub_8215FB50(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28980
	ctx.r4.s64 = ctx.r11.s64 + 28980;
	// bl 0x8215f670
	ctx.lr = 0x82201F90;
	sub_8215F670(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82201fa4
	if (!ctx.cr6.eq) goto loc_82201FA4;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// stb r11,24(r30)
	REX_STORE_U8(r30.u32 + 24, ctx.r11.u8);
loc_82201FA4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,29000
	ctx.r4.s64 = ctx.r11.s64 + 29000;
	// bl 0x8215f670
	ctx.lr = 0x82201FB4;
	sub_8215F670(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82201fc8
	if (!ctx.cr6.eq) goto loc_82201FC8;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// stb r11,25(r30)
	REX_STORE_U8(r30.u32 + 25, ctx.r11.u8);
loc_82201FC8:
	// lbz r11,26(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 26);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82202024
	if (ctx.cr0.eq) goto loc_82202024;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82160340
	ctx.lr = 0x82201FE4;
	sub_82160340(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,29020
	ctx.r4.s64 = ctx.r11.s64 + 29020;
	// bl 0x82120600
	ctx.lr = 0x82201FF4;
	sub_82120600(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82160388
	ctx.lr = 0x82202004;
	sub_82160388(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82202014;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82120ac0
	ctx.lr = 0x82202024;
	sub_82120AC0(ctx, base);
loc_82202024:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f0f0
	ctx.lr = 0x8220202C;
	sub_8215F0F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

DEFINE_REX_FUNC(sub_8220D258) {
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
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x8220D284;
	sub_82120AC0(ctx, base);
	// addi r3,r31,148
	ctx.r3.s64 = r31.s64 + 148;
	// bl 0x822e6f28
	ctx.lr = 0x8220D28C;
	sub_822E6F28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x8220D294;
	sub_82178388(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220d2a4
	if (ctx.cr0.eq) goto loc_8220D2A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8220D2A4;
	sub_8269CE98(ctx, base);
loc_8220D2A4:
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

DEFINE_REX_FUNC(sub_82210170) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r8,204(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r11,208(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// srawi. r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822101ec
	if (ctx.cr0.eq) goto loc_822101EC;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f0,224(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lfs f13,576(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 576);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822101bc
	if (!ctx.cr6.gt) goto loc_822101BC;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,68(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822101BC:
	// lwz r10,228(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// divwu r10,r11,r9
	ctx.r10.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822101ec
	if (ctx.cr6.eq) goto loc_822101EC;
	// lwz r3,96(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// blr 
	return;
loc_822101EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82216E18) {
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
	// li r3,928
	ctx.r3.s64 = 928;
	// bl 0x822f6280
	ctx.lr = 0x82216E2C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82216e3c
	if (ctx.cr0.eq) goto loc_82216E3C;
	// bl 0x82216e50
	ctx.lr = 0x82216E38;
	sub_82216E50(ctx, base);
	// b 0x82216e40
	goto loc_82216E40;
loc_82216E3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82216E40:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82219FA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82219FA8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// addi r11,r11,-26136
	ctx.r11.s64 = ctx.r11.s64 + -26136;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,792(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 792);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82219FDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,796(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 796);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82219FF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,816
	ctx.r3.s64 = r31.s64 + 816;
	// bl 0x8215fce8
	ctx.lr = 0x82219FFC;
	sub_8215FCE8(ctx, base);
	// addi r3,r31,800
	ctx.r3.s64 = r31.s64 + 800;
	// bl 0x8215f0f0
	ctx.lr = 0x8221A004;
	sub_8215F0F0(ctx, base);
	// addi r3,r31,576
	ctx.r3.s64 = r31.s64 + 576;
	// bl 0x8226b588
	ctx.lr = 0x8221A00C;
	sub_8226B588(ctx, base);
	// addi r3,r31,484
	ctx.r3.s64 = r31.s64 + 484;
	// bl 0x822e6f28
	ctx.lr = 0x8221A014;
	sub_822E6F28(ctx, base);
	// addi r3,r31,376
	ctx.r3.s64 = r31.s64 + 376;
	// bl 0x822e6f28
	ctx.lr = 0x8221A01C;
	sub_822E6F28(ctx, base);
	// addi r3,r31,268
	ctx.r3.s64 = r31.s64 + 268;
	// bl 0x822e6f28
	ctx.lr = 0x8221A024;
	sub_822E6F28(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x822e6f28
	ctx.lr = 0x8221A02C;
	sub_822E6F28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x8221A034;
	sub_82178388(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221a044
	if (ctx.cr0.eq) goto loc_8221A044;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8221A044;
	sub_8269CE98(ctx, base);
loc_8221A044:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82221068) {
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
	ctx.lr = 0x82221070;
	// stfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -136, f30.u64);
	// stfd f31,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,484(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 484);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ld r10,144(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 144);
	// addi r18,r3,144
	r18.s64 = ctx.r3.s64 + 144;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// li r19,-1
	r19.s64 = -1;
	// li r30,0
	r30.s64 = 0;
	// addze. r25,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r25.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// ble 0x822211dc
	if (!ctx.cr0.gt) goto loc_822211DC;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lfs f30,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f30.f64 = double(temp.f32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f31,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f31.f64 = double(temp.f32);
	// addi r29,r3,160
	r29.s64 = ctx.r3.s64 + 160;
	// addi r28,r3,268
	r28.s64 = ctx.r3.s64 + 268;
	// addi r27,r3,376
	r27.s64 = ctx.r3.s64 + 376;
	// addi r22,r3,176
	r22.s64 = ctx.r3.s64 + 176;
	// addi r21,r3,284
	r21.s64 = ctx.r3.s64 + 284;
	// addi r20,r3,392
	r20.s64 = ctx.r3.s64 + 392;
	// addi r24,r10,-25212
	r24.s64 = ctx.r10.s64 + -25212;
	// addi r23,r11,-25224
	r23.s64 = ctx.r11.s64 + -25224;
loc_822210D4:
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x822210e8
	if (!ctx.cr6.eq) goto loc_822210E8;
	// li r26,1
	r26.s64 = 1;
	// li r19,0
	r19.s64 = 0;
loc_822210E8:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lfs f12,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 + ctx.f13.f64));
	// lfs f11,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82221588
	ctx.lr = 0x82221128;
	sub_82221588(ctx, base);
	// srawi r11,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r11.s64 = r30.s32 >> 2;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r5,10
	ctx.r5.s64 = 10;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// lfs f13,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f12,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f11,12(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x826a06d8
	ctx.lr = 0x82221170;
	sub_826A06D8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// bl 0x82221588
	ctx.lr = 0x82221188;
	sub_82221588(ctx, base);
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 + ctx.f0.f64));
	// lfs f12,8(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 + ctx.f13.f64));
	// lfs f11,12(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82221588
	ctx.lr = 0x822211C8;
	sub_82221588(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lfs f0,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(r30.s32, r25.s32, ctx.xer);
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// blt cr6,0x822210d4
	if (ctx.cr6.lt) goto loc_822210D4;
loc_822211DC:
	// stw r25,664(r31)
	REX_STORE_U32(r31.u32 + 664, r25.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r19,668(r31)
	REX_STORE_U32(r31.u32 + 668, r19.u32);
	// addi r5,r31,136
	ctx.r5.s64 = r31.s64 + 136;
	// addi r10,r11,16592
	ctx.r10.s64 = ctx.r11.s64 + 16592;
	// lwz r9,132(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 132);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r31,488
	ctx.r3.s64 = r31.s64 + 488;
	// lfs f0,16592(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16592);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// bl 0x8226bf68
	ctx.lr = 0x82221210;
	sub_8226BF68(ctx, base);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_8222D718) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8222D720;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82236b78
	ctx.lr = 0x8222D72C;
	sub_82236B78(ctx, base);
	// lbz r11,1056(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1056);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8222d88c
	if (!ctx.cr0.eq) goto loc_8222D88C;
	// lbz r11,1057(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1057);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8222d750
	if (!ctx.cr0.eq) goto loc_8222D750;
	// lbz r10,1058(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 1058);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8222d88c
	if (ctx.cr0.eq) goto loc_8222D88C;
loc_8222D750:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222d774
	if (ctx.cr6.eq) goto loc_8222D774;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-21320
	ctx.r3.s64 = ctx.r11.s64 + -21320;
	// bl 0x82162af8
	ctx.lr = 0x8222D768;
	sub_82162AF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,884(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 884);
	// bl 0x8217f770
	ctx.lr = 0x8222D774;
	sub_8217F770(ctx, base);
loc_8222D774:
	// addi r3,r31,448
	ctx.r3.s64 = r31.s64 + 448;
	// bl 0x821e44f0
	ctx.lr = 0x8222D77C;
	sub_821E44F0(ctx, base);
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
	ctx.lr = 0x8222D798;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 128);
	// bl 0x82191520
	ctx.lr = 0x8222D7A0;
	sub_82191520(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r3,r31,896
	ctx.r3.s64 = r31.s64 + 896;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82274010
	ctx.lr = 0x8222D7B0;
	sub_82274010(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// li r3,160
	ctx.r3.s64 = 160;
	// addi r30,r31,1008
	r30.s64 = r31.s64 + 1008;
	// ld r9,64(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// lwz r29,6168(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 6168);
	// std r9,1008(r31)
	REX_STORE_U64(r31.u32 + 1008, ctx.r9.u64);
	// ld r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// std r11,1016(r31)
	REX_STORE_U64(r31.u32 + 1016, ctx.r11.u64);
	// bl 0x822f6280
	ctx.lr = 0x8222D7DC;
	sub_822F6280(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222d7f8
	if (ctx.cr0.eq) goto loc_8222D7F8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8218e330
	ctx.lr = 0x8222D7F0;
	sub_8218E330(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8222d7fc
	goto loc_8222D7FC;
loc_8222D7F8:
	// mr r30,r28
	r30.u64 = r28.u64;
loc_8222D7FC:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r5,r29,4
	ctx.r5.s64 = r29.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r29,56
	ctx.r3.s64 = r29.s64 + 56;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// bl 0x8214abd8
	ctx.lr = 0x8222D818;
	sub_8214ABD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82149e08
	ctx.lr = 0x8222D824;
	sub_82149E08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821357c8
	ctx.lr = 0x8222D82C;
	sub_821357C8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r28,1057(r31)
	REX_STORE_U8(r31.u32 + 1057, r28.u8);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stb r11,1056(r31)
	REX_STORE_U8(r31.u32 + 1056, ctx.r11.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r28,1058(r31)
	REX_STORE_U8(r31.u32 + 1058, r28.u8);
	// addi r4,r10,-21332
	ctx.r4.s64 = ctx.r10.s64 + -21332;
	// bl 0x82120600
	ctx.lr = 0x8222D84C;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 136);
	// bl 0x821dd040
	ctx.lr = 0x8222D858;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r28,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, r28.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
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
	ctx.lr = 0x8222D87C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8222D88C;
	sub_82120AC0(ctx, base);
loc_8222D88C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82238090) {
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
	ctx.lr = 0x822380A8;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x822380d0
	if (ctx.cr0.eq) goto loc_822380D0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178268
	ctx.lr = 0x822380BC;
	sub_82178268(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-18352
	ctx.r11.s64 = ctx.r11.s64 + -18352;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x822380d4
	goto loc_822380D4;
loc_822380D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822380D4:
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

DEFINE_REX_FUNC(sub_8223B9B0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,3884(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3884);
	// lwz r3,316(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8223BFB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8223BFC0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82279e68
	ctx.lr = 0x8223BFD0;
	sub_82279E68(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
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
	ctx.lr = 0x8223BFEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3884(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3884);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223c098
	if (!ctx.cr6.eq) goto loc_8223C098;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r31,3776
	ctx.r4.s64 = r31.s64 + 3776;
	// addi r5,r11,16568
	ctx.r5.s64 = ctx.r11.s64 + 16568;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82121610
	ctx.lr = 0x8223C014;
	sub_82121610(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,144
	ctx.r4.s64 = r30.s64 + 144;
	// bl 0x82121dd0
	ctx.lr = 0x8223C024;
	sub_82121DD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120670
	ctx.lr = 0x8223C030;
	sub_82120670(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x8223C040;
	sub_82120AC0(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223C058;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq 0x8223c070
	if (ctx.cr0.eq) goto loc_8223C070;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-31468
	ctx.r4.s64 = ctx.r11.s64 + -31468;
	// b 0x8223c078
	goto loc_8223C078;
loc_8223C070:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-23520
	ctx.r4.s64 = ctx.r11.s64 + -23520;
loc_8223C078:
	// bl 0x82121928
	ctx.lr = 0x8223C07C;
	sub_82121928(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8223db98
	ctx.lr = 0x8223C088;
	sub_8223DB98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x8223C098;
	sub_82120AC0(ctx, base);
loc_8223C098:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82242DA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82242DA8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,3868(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 3868);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r6,r3,3848
	ctx.r6.s64 = ctx.r3.s64 + 3848;
	// lwz r3,3864(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 3864);
	// subf r11,r3,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// srawi r5,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// bl 0x822436b8
	ctx.lr = 0x82242DC8;
	sub_822436B8(ctx, base);
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
	ctx.lr = 0x82242DE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82242e28
	if (!ctx.cr0.gt) goto loc_82242E28;
	// li r29,0
	r29.s64 = 0;
loc_82242DF0:
	// lwz r11,3864(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3864);
	// lwz r10,3880(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3880);
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
	ctx.lr = 0x82242E20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82242df0
	if (ctx.cr6.lt) goto loc_82242DF0;
loc_82242E28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82245C20) {
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
	// bl 0x822455e8
	ctx.lr = 0x82245C3C;
	sub_822455E8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r3,112
	ctx.r3.s64 = 112;
	// addi r11,r11,-15508
	ctx.r11.s64 = ctx.r11.s64 + -15508;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82245C50;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82245c68
	if (ctx.cr0.eq) goto loc_82245C68;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821a1e80
	ctx.lr = 0x82245C60;
	sub_821A1E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82245c6c
	goto loc_82245C6C;
loc_82245C68:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82245C6C:
	// stw r4,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r4.u32);
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x82245C7C;
	sub_821D3988(ctx, base);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x82245C84;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82245c9c
	if (ctx.cr0.eq) goto loc_82245C9C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dffe8
	ctx.lr = 0x82245C94;
	sub_821DFFE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82245ca0
	goto loc_82245CA0;
loc_82245C9C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82245CA0:
	// stw r4,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x82245CAC;
	sub_821D3988(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x82245CB4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82245ccc
	if (ctx.cr0.eq) goto loc_82245CCC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82245f68
	ctx.lr = 0x82245CC4;
	sub_82245F68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82245cd0
	goto loc_82245CD0;
loc_82245CCC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82245CD0:
	// stw r4,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x82245CDC;
	sub_821D3988(ctx, base);
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

DEFINE_REX_FUNC(sub_8224CBA8) {
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
	ctx.lr = 0x8224CBB0;
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f29.u64);
	// stfd f30,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x8224d238
	ctx.lr = 0x8224CBCC;
	sub_8224D238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8224d470
	ctx.lr = 0x8224CBD8;
	sub_8224D470(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8224d8f0
	ctx.lr = 0x8224CBE4;
	sub_8224D8F0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r25,0
	r25.s64 = 0;
	// lfs f30,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f30.f64 = double(temp.f32);
	// lbz r11,696(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 696);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224cc34
	if (ctx.cr0.eq) goto loc_8224CC34;
	// lfs f0,692(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 692);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// stfs f0,692(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 692, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x8224cc34
	if (!ctx.cr6.lt) goto loc_8224CC34;
	// lwz r9,468(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 468);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,200(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 200);
	// sth r10,716(r9)
	REX_STORE_U16(ctx.r9.u32 + 716, ctx.r10.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224cc2c
	if (ctx.cr6.eq) goto loc_8224CC2C;
	// sth r10,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
loc_8224CC2C:
	// stfs f30,692(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 692, temp.u32);
	// stb r25,696(r31)
	REX_STORE_U8(r31.u32 + 696, r25.u8);
loc_8224CC34:
	// lwz r3,460(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 460);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224cc54
	if (ctx.cr6.eq) goto loc_8224CC54;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224CC54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224CC54:
	// lwz r3,472(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 472);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82280070
	ctx.lr = 0x8224CC60;
	sub_82280070(ctx, base);
	// lwz r3,476(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 476);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822824c0
	ctx.lr = 0x8224CC6C;
	sub_822824C0(ctx, base);
	// lwz r3,480(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 480);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82283c58
	ctx.lr = 0x8224CC78;
	sub_82283C58(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r26,1
	r26.s64 = 1;
	// addi r27,r11,16592
	r27.s64 = ctx.r11.s64 + 16592;
	// lfs f29,228(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 228);
	f29.f64 = double(temp.f32);
	// lbz r11,705(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 705);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224cda4
	if (ctx.cr0.eq) goto loc_8224CDA4;
	// lwz r30,488(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 488);
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8224cd54
	if (!ctx.cr6.gt) goto loc_8224CD54;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r29,r11,-25252
	r29.s64 = ctx.r11.s64 + -25252;
	// addi r28,r10,-25320
	r28.s64 = ctx.r10.s64 + -25320;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x8224ccd0
	if (ctx.cr6.gt) goto loc_8224CCD0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x821231d0
	ctx.lr = 0x8224CCD0;
	sub_821231D0(ctx, base);
loc_8224CCD0:
	// lwz r11,156(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 156);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x821a1f88
	ctx.lr = 0x8224CCE8;
	sub_821A1F88(ctx, base);
	// lwz r30,488(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 488);
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8224cd08
	if (ctx.cr6.gt) goto loc_8224CD08;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x821231d0
	ctx.lr = 0x8224CD08;
	sub_821231D0(ctx, base);
loc_8224CD08:
	// lwz r10,156(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 156);
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// addi r9,r11,320
	ctx.r9.s64 = ctx.r11.s64 + 320;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,552(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 552);
	// addi r10,r11,320
	ctx.r10.s64 = ctx.r11.s64 + 320;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// ld r10,320(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 320);
	// std r10,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// ld r10,328(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 328);
	// std r10,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// ld r9,336(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 336);
	// lwz r10,468(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 468);
	// addi r8,r10,336
	ctx.r8.s64 = ctx.r10.s64 + 336;
	// std r9,336(r10)
	REX_STORE_U64(ctx.r10.u32 + 336, ctx.r9.u64);
	// ld r11,344(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 344);
	// std r11,344(r10)
	REX_STORE_U64(ctx.r10.u32 + 344, ctx.r11.u64);
	// lwz r3,468(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 468);
	// bl 0x822c0f18
	ctx.lr = 0x8224CD54;
	sub_822C0F18(ctx, base);
loc_8224CD54:
	// lfs f0,708(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 708);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 + ctx.f0.f64));
	// stfs f0,708(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 708, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// ble cr6,0x8224ce3c
	if (!ctx.cr6.gt) goto loc_8224CE3C;
	// lbz r11,698(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 698);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8224ce3c
	if (!ctx.cr0.eq) goto loc_8224CE3C;
	// lbz r11,705(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 705);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224ce3c
	if (ctx.cr0.eq) goto loc_8224CE3C;
	// stb r25,705(r31)
	REX_STORE_U8(r31.u32 + 705, r25.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224c160
	ctx.lr = 0x8224CD8C;
	sub_8224C160(ctx, base);
	// lbz r11,699(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 699);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8224ce3c
	if (!ctx.cr0.eq) goto loc_8224CE3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224c660
	ctx.lr = 0x8224CDA0;
	sub_8224C660(ctx, base);
	// b 0x8224ce3c
	goto loc_8224CE3C;
loc_8224CDA4:
	// lbz r11,702(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 702);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224cdcc
	if (ctx.cr0.eq) goto loc_8224CDCC;
	// lwz r3,460(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224CDC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224cde4
	if (!ctx.cr0.eq) goto loc_8224CDE4;
loc_8224CDCC:
	// lbz r11,703(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 703);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224ce3c
	if (ctx.cr0.eq) goto loc_8224CE3C;
	// lbz r11,696(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 696);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8224ce3c
	if (!ctx.cr0.eq) goto loc_8224CE3C;
loc_8224CDE4:
	// lbz r11,705(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 705);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8224ce3c
	if (!ctx.cr0.eq) goto loc_8224CE3C;
	// lwz r11,488(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 488);
	// lbz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 216);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224ce3c
	if (ctx.cr0.eq) goto loc_8224CE3C;
	// stfs f30,708(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 708, temp.u32);
	// stb r26,705(r31)
	REX_STORE_U8(r31.u32 + 705, r26.u8);
	// stb r26,704(r31)
	REX_STORE_U8(r31.u32 + 704, r26.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224c5e8
	ctx.lr = 0x8224CE14;
	sub_8224C5E8(ctx, base);
	// lwz r3,488(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 488);
	// bl 0x822852e8
	ctx.lr = 0x8224CE1C;
	sub_822852E8(ctx, base);
	// lwz r10,396(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 396);
	// addi r11,r31,376
	ctx.r11.s64 = r31.s64 + 376;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8224ce30
	if (ctx.cr6.lt) goto loc_8224CE30;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8224CE30:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224df90
	ctx.lr = 0x8224CE3C;
	sub_8224DF90(ctx, base);
loc_8224CE3C:
	// lwz r3,488(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 488);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stb r25,702(r31)
	REX_STORE_U8(r31.u32 + 702, r25.u8);
	// stb r25,703(r31)
	REX_STORE_U8(r31.u32 + 703, r25.u8);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// lfs f0,208(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// lbz r10,148(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 148);
	// lfs f13,144(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 / ctx.f13.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
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
	// fsel f0,f13,f0,f30
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : f30.f64;
	// stfs f0,208(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// beq 0x8224cebc
	if (ctx.cr0.eq) goto loc_8224CEBC;
	// lfs f0,152(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bgt cr6,0x8224cebc
	if (ctx.cr6.gt) goto loc_8224CEBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r11,698(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 698);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8224cebc
	if (!ctx.cr0.eq) goto loc_8224CEBC;
	// stfs f30,152(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// bl 0x822856c8
	ctx.lr = 0x8224CEBC;
	sub_822856C8(ctx, base);
loc_8224CEBC:
	// lwz r3,464(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 464);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822751b8
	ctx.lr = 0x8224CEC8;
	sub_822751B8(ctx, base);
	// lfs f0,1012(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 1012);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// stfs f0,1012(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 1012, temp.u32);
	// lwz r11,472(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 472);
	// lwz r11,436(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 436);
	// lfs f0,96(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x8224ceec
	if (!ctx.cr6.gt) goto loc_8224CEEC;
	// stfs f30,1012(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 1012, temp.u32);
loc_8224CEEC:
	// lbz r11,1008(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1008);
	// lfs f0,1012(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 1012);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224cf0c
	if (ctx.cr0.eq) goto loc_8224CF0C;
	// bne cr6,0x8224cf6c
	if (!ctx.cr6.eq) goto loc_8224CF6C;
	// stb r25,1008(r31)
	REX_STORE_U8(r31.u32 + 1008, r25.u8);
	// b 0x8224cf6c
	goto loc_8224CF6C;
loc_8224CF0C:
	// ble cr6,0x8224cf6c
	if (!ctx.cr6.gt) goto loc_8224CF6C;
	// lbz r11,1009(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1009);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8224cf24
	if (!ctx.cr0.eq) goto loc_8224CF24;
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// ble cr6,0x8224cf6c
	if (!ctx.cr6.gt) goto loc_8224CF6C;
loc_8224CF24:
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f12,1564(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 1564);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r11,320
	ctx.r9.s64 = ctx.r11.s64 + 320;
	// ld r9,320(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 320);
	// ld r11,328(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 328);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f11.f64)));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8224cf6c
	if (!ctx.cr6.lt) goto loc_8224CF6C;
	// stb r26,1008(r31)
	REX_STORE_U8(r31.u32 + 1008, r26.u8);
loc_8224CF6C:
	// stb r25,1009(r31)
	REX_STORE_U8(r31.u32 + 1009, r25.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

DEFINE_REX_FUNC(sub_8226C9A8) {
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
	// li r31,0
	r31.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r31,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r31.u64);
	// bl 0x8226c5f0
	ctx.lr = 0x8226C9D4;
	sub_8226C5F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226c9fc
	if (ctx.cr0.eq) goto loc_8226C9FC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-7936
	ctx.r4.s64 = ctx.r11.s64 + -7936;
	// bl 0x8215f670
	ctx.lr = 0x8226C9EC;
	sub_8215F670(ctx, base);
	// bl 0x8215f270
	ctx.lr = 0x8226C9F0;
	sub_8215F270(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8215efb0
	ctx.lr = 0x8226C9F8;
	sub_8215EFB0(ctx, base);
	// li r31,1
	r31.s64 = 1;
loc_8226C9FC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f0f0
	ctx.lr = 0x8226CA04;
	sub_8215F0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_822702C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822702D0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// std r29,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r29.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-16692
	ctx.r4.s64 = ctx.r11.s64 + -16692;
	// bl 0x8215f670
	ctx.lr = 0x822702F4;
	sub_8215F670(ctx, base);
	// bl 0x8215f270
	ctx.lr = 0x822702F8;
	sub_8215F270(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,16504
	ctx.r4.s64 = ctx.r11.s64 + 16504;
	// bl 0x82120600
	ctx.lr = 0x82270308;
	sub_82120600(ctx, base);
	// lis r31,-32106
	r31.s64 = -2104098816;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,6256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6256);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82270328;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82270358
	if (ctx.cr0.eq) goto loc_82270358;
	// lwz r3,6256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6256);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227034C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8227035c
	if (!ctx.cr0.eq) goto loc_8227035C;
loc_82270358:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8227035C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// clrlwi r31,r11,24
	r31.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82120ac0
	ctx.lr = 0x82270370;
	sub_82120AC0(ctx, base);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x822703bc
	if (ctx.cr0.eq) goto loc_822703BC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8226ff98
	ctx.lr = 0x82270388;
	sub_8226FF98(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822703A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_822703A8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f0f0
	ctx.lr = 0x822703B0;
	sub_8215F0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
loc_822703BC:
	// mr r31,r29
	r31.u64 = r29.u64;
	// b 0x822703a8
	goto loc_822703A8;
}

DEFINE_REX_FUNC(sub_82276420) {
	REX_FUNC_PROLOGUE();
	// b 0x82276ef0
	sub_82276EF0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82276540) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb0
	ctx.lr = 0x82276548;
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 128);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8216b740
	ctx.lr = 0x8227656C;
	sub_8216B740(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120600
	ctx.lr = 0x82276578;
	sub_82120600(ctx, base);
	// lwz r3,212(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 212);
	// bl 0x821e9ec0
	ctx.lr = 0x82276580;
	sub_821E9EC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-2964
	ctx.r4.s64 = ctx.r11.s64 + -2964;
	// bl 0x8215f338
	ctx.lr = 0x8227658C;
	sub_8215F338(ctx, base);
	// li r26,0
	r26.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_82276598:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822765bc
	if (!ctx.cr6.eq) goto loc_822765BC;
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
	// b 0x822765c0
	goto loc_822765C0;
loc_822765BC:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_822765C0:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82276614
	if (!ctx.cr6.lt) goto loc_82276614;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x822765D4;
	sub_8215F1B0(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x822765D8;
	sub_8215FA30(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82120780
	ctx.lr = 0x822765E0;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822765f0
	if (ctx.cr0.eq) goto loc_822765F0;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x82276598
	goto loc_82276598;
loc_822765F0:
	// stb r26,362(r31)
	REX_STORE_U8(r31.u32 + 362, r26.u8);
loc_822765F4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82276604;
	sub_82120AC0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
loc_82276614:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822772d0
	ctx.lr = 0x8227661C;
	sub_822772D0(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r10,r10,27336
	ctx.r10.s64 = ctx.r10.s64 + 27336;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r30,6048(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// bl 0x822f6280
	ctx.lr = 0x8227663C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82276664
	if (ctx.cr0.eq) goto loc_82276664;
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
	// b 0x82276668
	goto loc_82276668;
loc_82276664:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_82276668:
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
	ctx.lr = 0x82276684;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82178a50
	ctx.lr = 0x82276690;
	sub_82178A50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8213bc98
	ctx.lr = 0x8227669C;
	sub_8213BC98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82120ac0
	ctx.lr = 0x822766B4;
	sub_82120AC0(ctx, base);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lwz r3,6152(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822766CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82276710
	if (ctx.cr0.eq) goto loc_82276710;
	// lwz r3,6152(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822766E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82276710
	if (!ctx.cr0.eq) goto loc_82276710;
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x822f6280
	ctx.lr = 0x822766F8;
	sub_822F6280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// beq 0x8227674c
	if (ctx.cr0.eq) goto loc_8227674C;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x8227672c
	goto loc_8227672C;
loc_82276710:
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x822f6280
	ctx.lr = 0x82276718;
	sub_822F6280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// beq 0x8227674c
	if (ctx.cr0.eq) goto loc_8227674C;
	// li r7,1
	ctx.r7.s64 = 1;
loc_8227672C:
	// lfs f2,228(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 228);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r31,116
	ctx.r5.s64 = r31.s64 + 116;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8217f8a0
	ctx.lr = 0x82276744;
	sub_8217F8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82276750
	goto loc_82276750;
loc_8227674C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_82276750:
	// stw r4,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x8227675C;
	sub_821D3988(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// addi r3,r11,76
	ctx.r3.s64 = ctx.r11.s64 + 76;
	// bl 0x82120b20
	ctx.lr = 0x82276774;
	sub_82120B20(ctx, base);
	// lbz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 144);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82276794
	if (ctx.cr0.eq) goto loc_82276794;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82276794;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82276794:
	// lis r27,-32106
	r27.s64 = -2104098816;
	// mr r28,r26
	r28.u64 = r26.u64;
	// lwz r3,6284(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822767B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x822765f4
	if (!ctx.cr0.gt) goto loc_822765F4;
	// lfd f31,1536(r30)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(r30.u32 + 1536);
	// addi r31,r31,332
	r31.s64 = r31.s64 + 332;
	// lfd f30,136(r30)
	f30.u64 = REX_LOAD_U64(r30.u32 + 136);
loc_822767C4:
	// lwz r3,6284(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6284);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822767DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8213bce8
	ctx.lr = 0x822767E0;
	sub_8213BCE8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82276810
	goto loc_82276810;
loc_822767F4:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bge cr6,0x82276808
	if (!ctx.cr6.lt) goto loc_82276808;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82276810
	goto loc_82276810;
loc_82276808:
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82276810:
	// lbz r10,33(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822767f4
	if (ctx.cr0.eq) goto loc_822767F4;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82276838
	if (ctx.cr6.eq) goto loc_82276838;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8227688c
	if (!ctx.cr6.lt) goto loc_8227688C;
loc_82276838:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x822f6280
	ctx.lr = 0x82276840;
	sub_822F6280(ctx, base);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x822768b4
	if (ctx.cr0.eq) goto loc_822768B4;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addic. r11,r6,16
	ctx.xer.ca = ctx.r6.u32 > 4294967279;
	ctx.r11.s64 = ctx.r6.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// stb r26,32(r6)
	REX_STORE_U8(ctx.r6.u32 + 32, r26.u8);
	// stb r26,33(r6)
	REX_STORE_U8(ctx.r6.u32 + 33, r26.u8);
	// beq 0x82276878
	if (ctx.cr0.eq) goto loc_82276878;
	// stfd f30,8(r11)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r11.u32 + 8, f30.u64);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
loc_82276878:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822775f8
	ctx.lr = 0x82276888;
	sub_822775F8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8227688C:
	// stfd f31,24(r11)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r11.u32 + 24, f31.u64);
	// lwz r3,6284(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6284);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822768A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x822767c4
	if (ctx.cr6.lt) goto loc_822767C4;
	// b 0x822765f4
	goto loc_822765F4;
loc_822768B4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x822768CC;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_8228CF18) {
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
	ctx.lr = 0x8228CF20;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8228cfd0
	if (ctx.cr6.eq) goto loc_8228CFD0;
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8228cfd0
	if (ctx.cr6.eq) goto loc_8228CFD0;
	// subfic r26,r3,4
	ctx.xer.ca = ctx.r3.u32 <= 4;
	r26.u64 = static_cast<uint64_t>(4) - ctx.r3.u64;
loc_8228CF48:
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r27,r31
	r27.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8228c648
	ctx.lr = 0x8228CF60;
	sub_8228C648(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228cf90
	if (ctx.cr0.eq) goto loc_8228CF90;
	// add r11,r26,r31
	ctx.r11.u64 = r26.u64 + r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r5,r31
	ctx.r11.u64 = r31.u64 - ctx.r5.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8269cc20
	ctx.lr = 0x8228CF88;
	sub_8269CC20(ctx, base);
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
	// b 0x8228cfc4
	goto loc_8228CFC4;
loc_8228CF90:
	// lwz r5,-4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + -4);
	// addi r29,r31,-4
	r29.s64 = r31.s64 + -4;
	// b 0x8228cfac
	goto loc_8228CFAC;
loc_8228CF9C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// mr r27,r29
	r27.u64 = r29.u64;
	// lwzu r5,-4(r29)
	ea = -4 + r29.u32;
	ctx.r5.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
loc_8228CFAC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8228c648
	ctx.lr = 0x8228CFB8;
	sub_8228C648(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228cf9c
	if (!ctx.cr0.eq) goto loc_8228CF9C;
	// stw r30,0(r27)
	REX_STORE_U32(r27.u32 + 0, r30.u32);
loc_8228CFC4:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(r31.u32, r25.u32, ctx.xer);
	// bne cr6,0x8228cf48
	if (!ctx.cr6.eq) goto loc_8228CF48;
loc_8228CFD0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82291F28) {
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
	ctx.lr = 0x82291F30;
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
	ctx.lr = 0x82291F68;
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
	// beq 0x82291f8c
	if (ctx.cr0.eq) goto loc_82291F8C;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_82291F8C:
	// mr r29,r24
	r29.u64 = r24.u64;
	// lis r23,-32126
	r23.s64 = -2105409536;
	// lis r25,-32106
	r25.s64 = -2104098816;
loc_82291F98:
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
	// bgt cr6,0x8229200c
	if (ctx.cr6.gt) goto loc_8229200C;
	// lfs f0,16(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8229200c
	if (ctx.cr6.lt) goto loc_8229200C;
	// lfs f0,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8229200c
	if (ctx.cr6.gt) goto loc_8229200C;
	// lfs f0,20(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8229200c
	if (ctx.cr6.lt) goto loc_8229200C;
	// lfs f0,8(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8229200c
	if (ctx.cr6.gt) goto loc_8229200C;
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
	// bge cr6,0x82292010
	if (!ctx.cr6.lt) goto loc_82292010;
loc_8229200C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82292010:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822921d0
	if (ctx.cr0.eq) goto loc_822921D0;
	// lwz r11,40(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82292190
	if (ctx.cr6.eq) goto loc_82292190;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// bne cr6,0x822920c0
	if (!ctx.cr6.eq) goto loc_822920C0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// rlwinm r30,r29,1,0,30
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8229203c
	if (!ctx.cr6.eq) goto loc_8229203C;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_8229203C:
	// cmpw cr6,r27,r30
	ctx.cr6.compare<int32_t>(r27.s32, r30.s32, ctx.xer);
	// bge cr6,0x822920c0
	if (!ctx.cr6.lt) goto loc_822920C0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8229205c
	if (ctx.cr6.eq) goto loc_8229205C;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822c1a70
	ctx.lr = 0x82292054;
	sub_822C1A70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82292060
	goto loc_82292060;
loc_8229205C:
	// li r31,0
	r31.s64 = 0;
loc_82292060:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x8229208c
	if (!ctx.cr6.gt) goto loc_8229208C;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// subf r10,r31,r28
	ctx.r10.u64 = r28.u64 - r31.u64;
loc_82292074:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82292084
	if (ctx.cr6.eq) goto loc_82292084;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82292084:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82292074
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82292074;
loc_8229208C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822920b0
	if (ctx.cr6.eq) goto loc_822920B0;
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
	ctx.lr = 0x822920B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822920B0:
	// mr r27,r30
	r27.u64 = r30.u64;
	// stb r24,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, r24.u8);
	// mr r28,r31
	r28.u64 = r31.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
loc_822920C0:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822920d4
	if (ctx.cr0.eq) goto loc_822920D4;
	// lwz r10,36(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 36);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822920D4:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// bne cr6,0x82292174
	if (!ctx.cr6.eq) goto loc_82292174;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// rlwinm r30,r29,1,0,30
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x822920f0
	if (!ctx.cr6.eq) goto loc_822920F0;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_822920F0:
	// cmpw cr6,r27,r30
	ctx.cr6.compare<int32_t>(r27.s32, r30.s32, ctx.xer);
	// bge cr6,0x82292174
	if (!ctx.cr6.lt) goto loc_82292174;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82292110
	if (ctx.cr6.eq) goto loc_82292110;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822c1a70
	ctx.lr = 0x82292108;
	sub_822C1A70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82292114
	goto loc_82292114;
loc_82292110:
	// li r31,0
	r31.s64 = 0;
loc_82292114:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x82292140
	if (!ctx.cr6.gt) goto loc_82292140;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// subf r10,r31,r28
	ctx.r10.u64 = r28.u64 - r31.u64;
loc_82292128:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82292138
	if (ctx.cr6.eq) goto loc_82292138;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82292138:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82292128
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82292128;
loc_82292140:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82292164
	if (ctx.cr6.eq) goto loc_82292164;
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
	ctx.lr = 0x82292164;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82292164:
	// mr r27,r30
	r27.u64 = r30.u64;
	// stb r24,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, r24.u8);
	// mr r28,r31
	r28.u64 = r31.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
loc_82292174:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82292188
	if (ctx.cr0.eq) goto loc_82292188;
	// lwz r10,40(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 40);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82292188:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x822921d0
	goto loc_822921D0;
loc_82292190:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822921d0
	if (ctx.cr6.eq) goto loc_822921D0;
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 0);
	// lwz r5,36(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r4,36(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 36);
	// lwz r3,96(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822921C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,120(r11)
	REX_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
loc_822921D0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bgt cr6,0x82291f98
	if (ctx.cr6.gt) goto loc_82291F98;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// bl 0x821eced8
	ctx.lr = 0x822921E8;
	sub_821ECED8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_822ABD28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822ABD30;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r10,r10,6808
	ctx.r10.s64 = ctx.r10.s64 + 6808;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// ble cr6,0x822abdac
	if (!ctx.cr6.gt) goto loc_822ABDAC;
	// mr r31,r28
	r31.u64 = r28.u64;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_822ABD5C:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822abda0
	if (ctx.cr6.eq) goto loc_822ABDA0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822ABD84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r4,r11,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,48(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822ABDA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822ABDA0:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x822abd5c
	if (!ctx.cr0.eq) goto loc_822ABD5C;
loc_822ABDAC:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822abdf0
	if (ctx.cr6.eq) goto loc_822ABDF0;
	// lbz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822abdec
	if (ctx.cr0.eq) goto loc_822ABDEC;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// lwz r11,112(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// lwz r9,-19400(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,112(r10)
	REX_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822ABDEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822ABDEC:
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
loc_822ABDF0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// addi r11,r11,4552
	ctx.r11.s64 = ctx.r11.s64 + 4552;
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// stb r10,16(r31)
	REX_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822B80D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822B80D8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,7184
	ctx.r11.s64 = ctx.r11.s64 + 7184;
	// addi r30,r3,104
	r30.s64 = ctx.r3.s64 + 104;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r29,0
	r29.s64 = 0;
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b8134
	if (ctx.cr6.eq) goto loc_822B8134;
	// lbz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822b8130
	if (ctx.cr0.eq) goto loc_822B8130;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// lwz r11,112(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// lwz r9,-19400(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,112(r10)
	REX_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B8130;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B8130:
	// stw r29,12(r30)
	REX_STORE_U32(r30.u32 + 12, r29.u32);
loc_822B8134:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,12(r30)
	REX_STORE_U32(r30.u32 + 12, r29.u32);
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stb r11,16(r30)
	REX_STORE_U8(r30.u32 + 16, ctx.r11.u8);
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
	// bl 0x821eced8
	ctx.lr = 0x822B8150;
	sub_821ECED8(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x821eced8
	ctx.lr = 0x822B8158;
	sub_821ECED8(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x821eced8
	ctx.lr = 0x822B8160;
	sub_821ECED8(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x821eced8
	ctx.lr = 0x822B8168;
	sub_821ECED8(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x821eced8
	ctx.lr = 0x822B8170;
	sub_821ECED8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r11,r11,7164
	ctx.r11.s64 = ctx.r11.s64 + 7164;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822BC7C0) {
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
	ctx.lr = 0x822BC7C8;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// addi r4,r11,7260
	ctx.r4.s64 = ctx.r11.s64 + 7260;
	// bl 0x82180150
	ctx.lr = 0x822BC7E8;
	sub_82180150(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bc804
	if (ctx.cr6.eq) goto loc_822BC804;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BC804;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BC804:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BC81C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,0
	r29.s64 = 0;
	// stfs f31,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BC83C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BC854;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BC868;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r31,100
	ctx.r4.s64 = r31.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BC884;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,132(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BC89C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,7292
	ctx.r4.s64 = ctx.r11.s64 + 7292;
	// bl 0x82180150
	ctx.lr = 0x822BC8AC;
	sub_82180150(ctx, base);
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822bc8f0
	if (!ctx.cr6.gt) goto loc_822BC8F0;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_822BC8BC:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BC8DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 252);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822bc8bc
	if (ctx.cr6.lt) goto loc_822BC8BC;
loc_822BC8F0:
	// bl 0x821800b8
	ctx.lr = 0x822BC8F4;
	sub_821800B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822bce08
	ctx.lr = 0x822BC900;
	sub_822BCE08(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bc91c
	if (ctx.cr6.eq) goto loc_822BC91C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BC91C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BC91C:
	// bl 0x821800b8
	ctx.lr = 0x822BC920;
	sub_821800B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822C2860) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10680(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10680);
	// rlwinm r3,r11,22,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2958) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,2,29,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x4) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r11,10548(r3)
	REX_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2B28) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,12,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2C10) {
	REX_FUNC_PROLOGUE();
	// lbz r3,10498(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 10498);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2C90) {
	REX_FUNC_PROLOGUE();
	// lbz r3,10493(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 10493);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2E78) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwimi r11,r4,15,16,16
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 15) & 0x8000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r11,10568(r3)
	REX_STORE_U32(ctx.r3.u32 + 10568, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3328) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwimi r11,r4,28,0,3
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
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

DEFINE_REX_FUNC(sub_822C3960) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12028(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12028);
	// rlwinm r3,r11,12,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3E40) {
	REX_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1164);
	// rlwinm r3,r11,9,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x3;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C4898) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822C48A0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,3154
	ctx.r11.s64 = ctx.r4.s64 + 3154;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stwx r5,r6,r3
	REX_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r5.u32);
	// beq cr6,0x822c49c8
	if (ctx.cr6.eq) goto loc_822C49C8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x822c48cc
	if (ctx.cr6.eq) goto loc_822C48CC;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
loc_822C48CC:
	// addi r10,r11,2593
	ctx.r10.s64 = ctx.r11.s64 + 2593;
	// lwz r7,28(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r8,r9,263
	ctx.r8.u64 = ctx.r9.u64 | 263;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stwx r7,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r7.u32);
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// clrldi r10,r3,56
	ctx.r10.u64 = ctx.r3.u64 & 0xFF;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// srd r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// addi r10,r4,3051
	ctx.r10.s64 = ctx.r4.s64 + 3051;
	// ldx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U64(ctx.r11.u32 + r31.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// or r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 | ctx.r3.u64;
	// stdx r7,r11,r31
	REX_STORE_U64(ctx.r11.u32 + r31.u32, ctx.r7.u64);
	// lwzx r11,r6,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r7,r10,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// stwx r7,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r7.u32);
	// beq cr6,0x822c49c8
	if (ctx.cr6.eq) goto loc_822C49C8;
	// subfic r11,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r4.u64;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r11,r3,2593
	ctx.r11.s64 = ctx.r3.s64 + 2593;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r30,r31
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// rlwinm r11,r6,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x822c4968
	if (ctx.cr6.eq) goto loc_822C4968;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x822c4968
	if (ctx.cr6.eq) goto loc_822C4968;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x822c4968
	if (ctx.cr6.eq) goto loc_822C4968;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x822c49c8
	if (!ctx.cr6.eq) goto loc_822C49C8;
loc_822C4968:
	// rlwinm r10,r6,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 13) & 0x1;
	// xor. r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822c49c8
	if (ctx.cr0.eq) goto loc_822C49C8;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// rlwinm r7,r11,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// not r29,r10
	r29.u64 = ~ctx.r10.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// addi r7,r7,-3
	ctx.r7.s64 = ctx.r7.s64 + -3;
	// rlwinm r11,r11,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// rlwinm r29,r29,16,0,15
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// and r11,r29,r11
	ctx.r11.u64 = r29.u64 & ctx.r11.u64;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// srawi r11,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 16;
	// rlwimi r10,r6,0,16,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF) | (ctx.r10.u64 & 0xF0000);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r10,r30,r31
	REX_STORE_U32(r30.u32 + r31.u32, ctx.r10.u32);
	// clrldi r10,r8,56
	ctx.r10.u64 = ctx.r8.u64 & 0xFF;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// ldx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + r31.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stdx r10,r11,r31
	REX_STORE_U64(ctx.r11.u32 + r31.u32, ctx.r10.u64);
loc_822C49C8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822c4b44
	if (!ctx.cr6.eq) goto loc_822C4B44;
	// lbz r11,10943(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10943);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// andi. r10,r11,247
	ctx.r10.u64 = ctx.r11.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r10,10943(r31)
	REX_STORE_U8(r31.u32 + 10943, ctx.r10.u8);
	// beq cr6,0x822c4a20
	if (ctx.cr6.eq) goto loc_822C4A20;
	// lhz r11,28(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 28);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x822c4a04
	if (ctx.cr6.eq) goto loc_822C4A04;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x822c4a04
	if (ctx.cr6.eq) goto loc_822C4A04;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x822c4a18
	if (!ctx.cr6.eq) goto loc_822C4A18;
loc_822C4A04:
	// ori r11,r10,8
	ctx.r11.u64 = ctx.r10.u64 | 8;
	// stb r11,10943(r31)
	REX_STORE_U8(r31.u32 + 10943, ctx.r11.u8);
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
loc_822C4A18:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x822c4a2c
	goto loc_822C4A2C;
loc_822C4A20:
	// lwz r4,12632(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12632);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822c4a34
	if (ctx.cr6.eq) goto loc_822C4A34;
loc_822C4A2C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c1c00
	ctx.lr = 0x822C4A34;
	sub_822C1C00(ctx, base);
loc_822C4A34:
	// lwz r11,12892(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12892);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c4b0c
	if (!ctx.cr6.eq) goto loc_822C4B0C;
	// lbz r11,10940(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10940);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822c4b0c
	if (!ctx.cr0.eq) goto loc_822C4B0C;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822c4b0c
	if (!ctx.cr0.eq) goto loc_822C4B0C;
	// lbz r10,12363(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 12363);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x822c4b0c
	if (!ctx.cr0.eq) goto loc_822C4B0C;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822c4a70
	if (ctx.cr0.eq) goto loc_822C4A70;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822c4b00
	goto loc_822C4B00;
loc_822C4A70:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c4af8
	if (ctx.cr0.eq) goto loc_822C4AF8;
	// lwz r11,12616(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12616);
	// lwz r10,12904(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12904);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c4a90
	if (ctx.cr6.eq) goto loc_822C4A90;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c4af8
	if (!ctx.cr6.eq) goto loc_822C4AF8;
loc_822C4A90:
	// lwz r11,12620(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12620);
	// lwz r10,12908(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12908);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c4aa8
	if (ctx.cr6.eq) goto loc_822C4AA8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c4af8
	if (!ctx.cr6.eq) goto loc_822C4AF8;
loc_822C4AA8:
	// lwz r11,12624(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12624);
	// lwz r10,12912(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12912);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c4ac0
	if (ctx.cr6.eq) goto loc_822C4AC0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c4af8
	if (!ctx.cr6.eq) goto loc_822C4AF8;
loc_822C4AC0:
	// lwz r11,12628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12628);
	// lwz r10,12916(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12916);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c4ad8
	if (ctx.cr6.eq) goto loc_822C4AD8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c4af8
	if (!ctx.cr6.eq) goto loc_822C4AF8;
loc_822C4AD8:
	// lwz r11,12632(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12632);
	// lwz r10,12920(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12920);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c4af0
	if (ctx.cr6.eq) goto loc_822C4AF0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c4af8
	if (!ctx.cr6.eq) goto loc_822C4AF8;
loc_822C4AF0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822c4afc
	goto loc_822C4AFC;
loc_822C4AF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822C4AFC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_822C4B00:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x822c4b10
	if (!ctx.cr0.eq) goto loc_822C4B10;
loc_822C4B0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822C4B10:
	// lbz r10,10940(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 10940);
	// lwz r9,12036(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12036);
	// rlwimi r10,r11,0,31,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// stb r10,10940(r31)
	REX_STORE_U8(r31.u32 + 10940, ctx.r10.u8);
	// lwz r11,10460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10460);
	// lwz r10,12616(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12616);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,12036(r31)
	REX_STORE_U32(r31.u32 + 12036, ctx.r9.u32);
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// rlwimi r11,r10,0,28,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r11,10460(r31)
	REX_STORE_U32(r31.u32 + 10460, ctx.r11.u32);
	// b 0x822c4bc8
	goto loc_822C4BC8;
loc_822C4B44:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x822c4b70
	if (!ctx.cr6.eq) goto loc_822C4B70;
	// lwz r11,12620(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12620);
	// lwz r10,12040(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12040);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lwz r9,10460(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 10460);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r10,12040(r31)
	REX_STORE_U32(r31.u32 + 12040, ctx.r10.u32);
	// rlwimi r9,r11,4,24,27
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF0F);
	// b 0x822c4bc4
	goto loc_822C4BC4;
loc_822C4B70:
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bne cr6,0x822c4b9c
	if (!ctx.cr6.eq) goto loc_822C4B9C;
	// lwz r11,12624(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12624);
	// lwz r10,12044(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12044);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lwz r9,10460(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 10460);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r10,12044(r31)
	REX_STORE_U32(r31.u32 + 12044, ctx.r10.u32);
	// rlwimi r9,r11,8,20,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF0FF);
	// b 0x822c4bc4
	goto loc_822C4BC4;
loc_822C4B9C:
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bne cr6,0x822c4bdc
	if (!ctx.cr6.eq) goto loc_822C4BDC;
	// lwz r11,12628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12628);
	// lwz r10,12048(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12048);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lwz r9,10460(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 10460);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r10,12048(r31)
	REX_STORE_U32(r31.u32 + 12048, ctx.r10.u32);
	// rlwimi r9,r11,12,16,19
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0FFF);
loc_822C4BC4:
	// stw r9,10460(r31)
	REX_STORE_U32(r31.u32 + 10460, ctx.r9.u32);
loc_822C4BC8:
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
loc_822C4BDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822E3A58) {
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
	// bl 0x826a08a0
	ctx.lr = 0x822E3A68;
	sub_826A08A0(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
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

DEFINE_REX_FUNC(sub_822E5B38) {
	REX_FUNC_PROLOGUE();
	// lis r11,32746
	ctx.r11.s64 = 2146041856;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// ori r9,r11,6144
	ctx.r9.u64 = ctx.r11.u64 | 6144;
	// lwbrx r11,0,r9
	ctx.r11.u64 = __builtin_bswap32(REX_MM_LOAD_U32(ctx.r9.u32));
	// stw r11,-316(r10)
	REX_STORE_U32(ctx.r10.u32 + -316, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E5F68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822E5F70;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r30,r6,21,11,31
	r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 21) & 0x1FFFFF;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r28,r10,12,30,31
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3;
	// clrlwi r9,r28,31
	ctx.r9.u64 = r28.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822e5fc8
	if (!ctx.cr6.eq) goto loc_822E5FC8;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82793cf4
	ctx.lr = 0x822E5FAC;
	__imp__MmGetPhysicalAddress(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// rlwimi r30,r11,0,0,19
	r30.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000) | (r30.u64 & 0xFFFFFFFF00000FFF);
	// oris r10,r30,16
	ctx.r10.u64 = r30.u64 | 1048576;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r29,84(r31)
	REX_STORE_U32(r31.u32 + 84, r29.u32);
	// b 0x822e5ffc
	goto loc_822E5FFC;
loc_822E5FC8:
	// rlwinm r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e6034
	if (!ctx.cr6.eq) goto loc_822E6034;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82793cf4
	ctx.lr = 0x822E5FDC;
	__imp__MmGetPhysicalAddress(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r30,r11,0,0,19
	r30.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000) | (r30.u64 & 0xFFFFFFFF00000FFF);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// oris r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 2097152;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r29,88(r31)
	REX_STORE_U32(r31.u32 + 88, r29.u32);
loc_822E5FFC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x822e6028
	if (!ctx.cr6.eq) goto loc_822E6028;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// beq cr6,0x822e6028
	if (ctx.cr6.eq) goto loc_822E6028;
	// rlwinm r11,r11,21,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x7FFF;
	// addic. r11,r11,32
	ctx.xer.ca = ctx.r11.u32 > 4294967263;
	ctx.r11.s64 = ctx.r11.s64 + 32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e6028
	if (ctx.cr0.eq) goto loc_822E6028;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwimi r11,r10,0,0,5
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFC000000) | (ctx.r11.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_822E6028:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_822E6034:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822EBA40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822EBA48;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822EBA64;
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
	ctx.lr = 0x822EBA78;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822eba9c
	if (ctx.cr0.eq) goto loc_822EBA9C;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// addi r10,r10,-15424
	ctx.r10.s64 = ctx.r10.s64 + -15424;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x822ebaa0
	goto loc_822EBAA0;
loc_822EBA9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822EBAA0:
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822EDC38) {
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
	// addi r3,r3,104
	ctx.r3.s64 = ctx.r3.s64 + 104;
	// bl 0x82120ac0
	ctx.lr = 0x822EDC64;
	sub_82120AC0(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x822e6f28
	ctx.lr = 0x822EDC6C;
	sub_822E6F28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,17212
	ctx.r11.s64 = ctx.r11.s64 + 17212;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x822edc88
	if (ctx.cr0.eq) goto loc_822EDC88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822EDC88;
	sub_8269CE98(ctx, base);
loc_822EDC88:
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

DEFINE_REX_FUNC(sub_822EFB18) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r10,r3,88
	ctx.r10.s64 = ctx.r3.s64 + 88;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lfs f0,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F1450) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm. r11,r8,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r9,0
	ctx.r9.s64 = 0;
loc_822F1464:
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r10,r8,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// slw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// rlwinm r7,r8,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// addic r7,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// subfe r10,r7,r10
	temp.u8 = (~ctx.r7.u32 + ctx.r10.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r7.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subfe r11,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822f14cc
	if (ctx.cr6.lt) goto loc_822F14CC;
	// beq cr6,0x822f14c4
	if (ctx.cr6.eq) goto loc_822F14C4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x822f14bc
	if (ctx.cr6.lt) goto loc_822F14BC;
	// bne cr6,0x822f14d8
	if (!ctx.cr6.eq) goto loc_822F14D8;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// b 0x822f14d8
	goto loc_822F14D8;
loc_822F14BC:
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// b 0x822f14d8
	goto loc_822F14D8;
loc_822F14C4:
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// b 0x822f14d8
	goto loc_822F14D8;
loc_822F14CC:
	// rlwinm. r11,r8,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f14d8
	if (ctx.cr0.eq) goto loc_822F14D8;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
loc_822F14D8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x822f1464
	if (ctx.cr6.lt) goto loc_822F1464;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F64B0) {
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
	// addi r11,r11,2584
	ctx.r11.s64 = ctx.r11.s64 + 2584;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x822f64dc
	if (ctx.cr0.eq) goto loc_822F64DC;
	// bl 0x8269ce98
	ctx.lr = 0x822F64DC;
	sub_8269CE98(ctx, base);
loc_822F64DC:
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

DEFINE_REX_FUNC(sub_822F6F30) {
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
	// bl 0x826a2ba8
	ctx.lr = 0x822F6F4C;
	sub_826A2BA8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x821aae70
	ctx.lr = 0x822F6F58;
	sub_821AAE70(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x826a2b40
	ctx.lr = 0x822F6F68;
	sub_826A2B40(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// beq 0x822f6f90
	if (ctx.cr0.eq) goto loc_822F6F90;
	// bl 0x826a2b30
	ctx.lr = 0x822F6F78;
	sub_826A2B30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x822F6F88;
	sub_826A1E70(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822f6f9c
	goto loc_822F6F9C;
loc_822F6F90:
	// bl 0x826a2b30
	ctx.lr = 0x822F6F94;
	sub_826A2B30(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
loc_822F6F9C:
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_822FB140) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822fb150
	if (!ctx.cr6.eq) goto loc_822FB150;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_822FB150:
	// lfs f0,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// beq cr6,0x822fb188
	if (ctx.cr6.eq) goto loc_822FB188;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x822fb17c
	if (ctx.cr6.eq) goto loc_822FB17C;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x822fb198
	if (!ctx.cr6.eq) goto loc_822FB198;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3812(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3812);
	ctx.f13.f64 = double(temp.f32);
	// b 0x822fb190
	goto loc_822FB190;
loc_822FB17C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3808(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3808);
	ctx.f13.f64 = double(temp.f32);
	// b 0x822fb190
	goto loc_822FB190;
loc_822FB188:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3048);
	ctx.f13.f64 = double(temp.f32);
loc_822FB190:
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_822FB198:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FC578) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822FC580;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fc5f0
	if (ctx.cr6.eq) goto loc_822FC5F0;
	// lhz r10,100(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 100);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822fc5f0
	if (!ctx.cr0.eq) goto loc_822FC5F0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822fc5e8
	if (!ctx.cr6.gt) goto loc_822FC5E8;
	// li r31,0
	r31.s64 = 0;
loc_822FC5B8:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// bl 0x822fc578
	ctx.lr = 0x822FC5C8;
	sub_822FC578(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fc608
	if (!ctx.cr0.eq) goto loc_822FC608;
	// lwz r11,168(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 168);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822fc5b8
	if (ctx.cr6.lt) goto loc_822FC5B8;
loc_822FC5E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822fc608
	goto loc_822FC608;
loc_822FC5F0:
	// lwz r3,312(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 312);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FC608;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822FC608:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822FFB70) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822ffb80
	if (ctx.cr6.eq) goto loc_822FFB80;
	// lfs f0,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_822FFB80:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822ffb90
	if (ctx.cr6.eq) goto loc_822FFB90;
	// lfs f0,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_822FFB90:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82301268) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82301270;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823012d0
	if (ctx.cr6.eq) goto loc_823012D0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823012d0
	if (ctx.cr6.eq) goto loc_823012D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r3,76
	r30.s64 = ctx.r3.s64 + 76;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r31,76(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// b 0x823012c8
	goto loc_823012C8;
loc_823012A0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r11,r31,-8
	ctx.r11.s64 = r31.s64 + -8;
	// bne cr6,0x823012b0
	if (!ctx.cr6.eq) goto loc_823012B0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823012B0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82331668
	ctx.lr = 0x823012BC;
	sub_82331668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823012dc
	if (ctx.cr0.eq) goto loc_823012DC;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_823012C8:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x823012a0
	if (!ctx.cr6.eq) goto loc_823012A0;
loc_823012D0:
	// li r3,37
	ctx.r3.s64 = 37;
loc_823012D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_823012DC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r11,r31,-8
	ctx.r11.s64 = r31.s64 + -8;
	// bne cr6,0x823012ec
	if (!ctx.cr6.eq) goto loc_823012EC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823012EC:
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823012d4
	goto loc_823012D4;
}

DEFINE_REX_FUNC(sub_82304230) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82304238;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,39
	ctx.r11.s64 = 2555904;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823042a0
	if (ctx.cr6.lt) goto loc_823042A0;
	// addi r10,r3,88
	ctx.r10.s64 = ctx.r3.s64 + 88;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82304284
	if (ctx.cr6.eq) goto loc_82304284;
	// lwz r8,20(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
loc_8230426C:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82304284
	if (!ctx.cr6.lt) goto loc_82304284;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8230426c
	if (!ctx.cr6.eq) goto loc_8230426C;
loc_82304284:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82304294
	if (!ctx.cr6.eq) goto loc_82304294;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x8230431c
	goto loc_8230431C;
loc_82304294:
	// lwz r10,20(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 20);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// b 0x82304318
	goto loc_82304318;
loc_823042A0:
	// addi r30,r3,88
	r30.s64 = ctx.r3.s64 + 88;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r30.u32, ctx.xer);
	// beq cr6,0x8230430c
	if (ctx.cr6.eq) goto loc_8230430C;
loc_823042B0:
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82331668
	ctx.lr = 0x823042C0;
	sub_82331668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823042d8
	if (ctx.cr0.eq) goto loc_823042D8;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x823042b0
	if (!ctx.cr6.eq) goto loc_823042B0;
	// b 0x8230430c
	goto loc_8230430C;
loc_823042D8:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r10,20(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 20);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r9,4384
	ctx.r5.s64 = ctx.r9.s64 + 4384;
	// li r6,5170
	ctx.r6.s64 = 5170;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r4,12(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82304300;
	sub_82330D00(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// li r29,1
	r29.s64 = 1;
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r31.u32);
loc_8230430C:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,37
	ctx.r3.s64 = 37;
	// beq 0x8230431c
	if (ctx.cr0.eq) goto loc_8230431C;
loc_82304318:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230431C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8230DBA0) {
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
	ctx.lr = 0x8230DBA8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r25,-10812(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + -10812);
	// bl 0x8230c310
	ctx.lr = 0x8230DBC0;
	sub_8230C310(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8233e7e0
	ctx.lr = 0x8230DBC8;
	sub_8233E7E0(ctx, base);
	// lwz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r29,-32129
	r29.s64 = -2105606144;
	// addi r30,r11,5068
	r30.s64 = ctx.r11.s64 + 5068;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8230dbf8
	if (ctx.cr6.eq) goto loc_8230DBF8;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,273
	ctx.r6.s64 = 273;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8230DBF8;
	sub_82330D00(ctx, base);
loc_8230DBF8:
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230dc1c
	if (ctx.cr6.eq) goto loc_8230DC1C;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8230dc14
	if (!ctx.cr0.eq) goto loc_8230DC14;
	// bl 0x8232fc60
	ctx.lr = 0x8230DC14;
	sub_8232FC60(ctx, base);
loc_8230DC14:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
loc_8230DC1C:
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8230dc40
	if (ctx.cr6.eq) goto loc_8230DC40;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,287
	ctx.r6.s64 = 287;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8230DC40;
	sub_82330D00(ctx, base);
loc_8230DC40:
	// addi r28,r31,32
	r28.s64 = r31.s64 + 32;
	// li r27,2
	r27.s64 = 2;
loc_8230DC48:
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8230dc6c
	if (ctx.cr6.eq) goto loc_8230DC6C;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,294
	ctx.r6.s64 = 294;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8230DC6C;
	sub_82330D00(ctx, base);
loc_8230DC6C:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x8230dc48
	if (!ctx.cr0.eq) goto loc_8230DC48;
	// lwz r4,84(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8230dc9c
	if (ctx.cr6.eq) goto loc_8230DC9C;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,300
	ctx.r6.s64 = 300;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8230DC9C;
	sub_82330D00(ctx, base);
loc_8230DC9C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8230da08
	ctx.lr = 0x8230DCAC;
	sub_8230DA08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8230dccc
	if (ctx.cr0.eq) goto loc_8230DCCC;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8230DCB8:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8233e820
	ctx.lr = 0x8230DCC0;
	sub_8233E820(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_8230DCCC:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230dcf0
	if (ctx.cr0.eq) goto loc_8230DCF0;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,311
	ctx.r6.s64 = 311;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8230DCF0;
	sub_82330D00(ctx, base);
loc_8230DCF0:
	// li r31,0
	r31.s64 = 0;
	// b 0x8230dcb8
	goto loc_8230DCB8;
}

DEFINE_REX_FUNC(sub_82314A30) {
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
	// beq cr6,0x82314a78
	if (ctx.cr6.eq) goto loc_82314A78;
	// lbz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82314aa0
	if (!ctx.cr0.eq) goto loc_82314AA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82314A68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82314aa4
	if (!ctx.cr0.eq) goto loc_82314AA4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82314a9c
	goto loc_82314A9C;
loc_82314A78:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82314A90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82314aa4
	if (!ctx.cr0.eq) goto loc_82314AA4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82314A9C:
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
loc_82314AA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82314AA4:
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

DEFINE_REX_FUNC(sub_823176B8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823178D8) {
	REX_FUNC_PROLOGUE();
	// lis r3,29549
	ctx.r3.s64 = 1936523264;
	// ori r3,r3,29296
	ctx.r3.u64 = ctx.r3.u64 | 29296;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82318140) {
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
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82318178
	if (!ctx.cr6.lt) goto loc_82318178;
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x82318190
	goto loc_82318190;
loc_82318178:
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// bl 0x823ef2f8
	ctx.lr = 0x82318184;
	sub_823EF2F8(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_82318190:
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

DEFINE_REX_FUNC(sub_8231AB58) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,5936
	ctx.r11.s64 = ctx.r11.s64 + 5936;
	// addi r10,r10,6152
	ctx.r10.s64 = ctx.r10.s64 + 6152;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// clrlwi. r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq 0x8231ab90
	if (ctx.cr0.eq) goto loc_8231AB90;
	// bl 0x8269ce98
	ctx.lr = 0x8231AB90;
	sub_8269CE98(ctx, base);
loc_8231AB90:
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

DEFINE_REX_FUNC(sub_8231EC20) {
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
	ctx.lr = 0x8231EC28;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8231ecb8
	if (!ctx.cr6.gt) goto loc_8231ECB8;
	// li r27,0
	r27.s64 = 0;
loc_8231EC48:
	// lwz r11,52(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 52);
	// li r30,0
	r30.s64 = 0;
	// lwzx r11,r27,r11
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x8231eca4
	if (!ctx.cr6.gt) goto loc_8231ECA4;
loc_8231EC68:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231ec94
	if (ctx.cr6.eq) goto loc_8231EC94;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231EC8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231ecbc
	if (!ctx.cr0.eq) goto loc_8231ECBC;
loc_8231EC94:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// blt cr6,0x8231ec68
	if (ctx.cr6.lt) goto loc_8231EC68;
loc_8231ECA4:
	// lwz r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 44);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8231ec48
	if (ctx.cr6.lt) goto loc_8231EC48;
loc_8231ECB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231ECBC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82324A30) {
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
	ctx.lr = 0x82324A38;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82324abc
	if (ctx.cr6.eq) goto loc_82324ABC;
	// lwz r31,36(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addi r30,r3,36
	r30.s64 = ctx.r3.s64 + 36;
	// li r29,0
	r29.s64 = 0;
	// b 0x82324a90
	goto loc_82324A90;
loc_82324A64:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r28,r31,-4
	r28.s64 = r31.s64 + -4;
	// bne cr6,0x82324a74
	if (!ctx.cr6.eq) goto loc_82324A74;
	// li r28,0
	r28.s64 = 0;
loc_82324A74:
	// lwz r4,0(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r3,20(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 20);
	// bl 0x82331668
	ctx.lr = 0x82324A80;
	sub_82331668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82324aa4
	if (ctx.cr0.eq) goto loc_82324AA4;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_82324A90:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x82324a64
	if (!ctx.cr6.eq) goto loc_82324A64;
loc_82324A98:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82324A9C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_82324AA4:
	// addi r11,r29,48
	ctx.r11.s64 = r29.s64 + 48;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82324b24
	if (ctx.cr6.eq) goto loc_82324B24;
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// b 0x82324b20
	goto loc_82324B20;
loc_82324ABC:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addic. r9,r11,-48
	ctx.xer.ca = ctx.r11.u32 > 47;
	ctx.r9.s64 = ctx.r11.s64 + -48;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x82324a98
	if (ctx.cr0.lt) goto loc_82324A98;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addi r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 + 36;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82324b00
	if (ctx.cr6.eq) goto loc_82324B00;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82324af4
	if (!ctx.cr6.gt) goto loc_82324AF4;
loc_82324AE4:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82324b00
	if (ctx.cr6.eq) goto loc_82324B00;
	// bdnz 0x82324ae4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82324AE4;
loc_82324AF4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82324b04
	if (!ctx.cr6.eq) goto loc_82324B04;
loc_82324B00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82324B04:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82324a98
	if (ctx.cr6.eq) goto loc_82324A98;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82324b24
	if (ctx.cr6.eq) goto loc_82324B24;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_82324B20:
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
loc_82324B24:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82324a9c
	goto loc_82324A9C;
}

DEFINE_REX_FUNC(sub_8232CAB0) {
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
	// beq cr6,0x8232caf4
	if (ctx.cr6.eq) goto loc_8232CAF4;
	// lbz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8232cafc
	if (!ctx.cr0.eq) goto loc_8232CAFC;
	// li r6,32
	ctx.r6.s64 = 32;
	// lis r5,256
	ctx.r5.s64 = 16777216;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82331a00
	ctx.lr = 0x8232CAEC;
	sub_82331A00(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8232caf8
	goto loc_8232CAF8;
loc_8232CAF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232CAF8:
	// stb r11,16(r31)
	REX_STORE_U8(r31.u32 + 16, ctx.r11.u8);
loc_8232CAFC:
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

DEFINE_REX_FUNC(sub_8232E100) {
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
	// beq cr6,0x8232e148
	if (ctx.cr6.eq) goto loc_8232E148;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8232e170
	if (!ctx.cr0.eq) goto loc_8232E170;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232E138;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232e174
	if (!ctx.cr0.eq) goto loc_8232E174;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8232e16c
	goto loc_8232E16C;
loc_8232E148:
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
	ctx.lr = 0x8232E160;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232e174
	if (!ctx.cr0.eq) goto loc_8232E174;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232E16C:
	// stb r11,8(r31)
	REX_STORE_U8(r31.u32 + 8, ctx.r11.u8);
loc_8232E170:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232E174:
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

DEFINE_REX_FUNC(sub_82330758) {
	REX_FUNC_PROLOGUE();
	// b 0x8233e098
	sub_8233E098(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82330D00) {
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
	ctx.lr = 0x82330D08;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// lis r27,-32129
	r27.s64 = -2105606144;
	// li r26,0
	r26.s64 = 0;
loc_82330D20:
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 328);
	// addi r28,r31,328
	r28.s64 = r31.s64 + 328;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330d44
	if (!ctx.cr6.eq) goto loc_82330D44;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8233e6b8
	ctx.lr = 0x82330D3C;
	sub_8233E6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82330e34
	if (!ctx.cr6.eq) goto loc_82330E34;
loc_82330D44:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x8233e7e0
	ctx.lr = 0x82330D4C;
	sub_8233E7E0(ctx, base);
	// lbz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330d5c
	if (!ctx.cr6.eq) goto loc_82330D5C;
	// addi r30,r30,-16
	r30.s64 = r30.s64 + -16;
loc_82330D5C:
	// rlwinm r11,r29,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x400000;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82330d7c
	if (ctx.cr6.eq) goto loc_82330D7C;
	// lwz r11,296(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 296);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r9.u32);
	// b 0x82330da4
	goto loc_82330DA4;
loc_82330D7C:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// subf r5,r8,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r8.u64;
	// stwx r5,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r5.u32);
loc_82330DA4:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r26,12(r30)
	REX_STORE_U32(r30.u32 + 12, r26.u32);
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82330de0
	if (ctx.cr6.eq) goto loc_82330DE0;
	// lwz r10,1012(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,36(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// and r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 & r29.u64;
	// bctrl 
	ctx.lr = 0x82330DDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82330e10
	goto loc_82330E10;
loc_82330DE0:
	// lbz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82330dfc
	if (!ctx.cr6.eq) goto loc_82330DFC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,324(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 324);
	// bl 0x82352ca0
	ctx.lr = 0x82330DF8;
	sub_82352CA0(ctx, base);
	// b 0x82330e10
	goto loc_82330E10;
loc_82330DFC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x82330890
	ctx.lr = 0x82330E10;
	sub_82330890(ctx, base);
loc_82330E10:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x8233e820
	ctx.lr = 0x82330E18;
	sub_8233E820(ctx, base);
	// lbz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82330e34
	if (ctx.cr6.eq) goto loc_82330E34;
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82330d20
	goto loc_82330D20;
loc_82330E34:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8233FCD0) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r7,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r31,4(r31)
	REX_STORE_U32(r31.u32 + 4, r31.u32);
	// stw r31,0(r31)
	REX_STORE_U32(r31.u32 + 0, r31.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stb r11,308(r31)
	REX_STORE_U8(r31.u32 + 308, ctx.r11.u8);
	// bl 0x82353708
	ctx.lr = 0x8233FD18;
	sub_82353708(ctx, base);
	// lwz r3,332(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 332);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233fd2c
	if (ctx.cr6.eq) goto loc_8233FD2C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233e770
	ctx.lr = 0x8233FD2C;
	sub_8233E770(ctx, base);
loc_8233FD2C:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,9276
	ctx.r5.s64 = ctx.r10.s64 + 9276;
	// li r6,312
	ctx.r6.s64 = 312;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8233FD50;
	sub_82330D00(ctx, base);
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

DEFINE_REX_FUNC(sub_823439C0) {
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
	ctx.lr = 0x823439C8;
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,192(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r24,23376(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 23376);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8233e7e0
	ctx.lr = 0x823439E8;
	sub_8233E7E0(ctx, base);
	// lwz r10,144(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82343a08
	if (!ctx.cr6.eq) goto loc_82343A08;
loc_823439F4:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8233e820
	ctx.lr = 0x823439FC;
	sub_8233E820(ctx, base);
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x826a1cf4
	return;
loc_82343A08:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82343a18
	if (ctx.cr6.eq) goto loc_82343A18;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x823439f4
	if (ctx.cr6.eq) goto loc_823439F4;
loc_82343A18:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82343a5c
	if (!ctx.cr6.eq) goto loc_82343A5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82343A3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82343a5c
	if (!ctx.cr6.eq) goto loc_82343A5C;
loc_82343A48:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8233e820
	ctx.lr = 0x82343A50;
	sub_8233E820(ctx, base);
	// li r3,51
	ctx.r3.s64 = 51;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x826a1cf4
	return;
loc_82343A5C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 192);
	// bl 0x82334888
	ctx.lr = 0x82343A68;
	sub_82334888(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82343a88
	if (ctx.cr6.eq) goto loc_82343A88;
loc_82343A74:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8233e820
	ctx.lr = 0x82343A7C;
	sub_8233E820(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x826a1cf4
	return;
loc_82343A88:
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82343c44
	if (ctx.cr6.eq) goto loc_82343C44;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82343AA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82343abc
	if (!ctx.cr6.eq) goto loc_82343ABC;
	// stw r26,28(r31)
	REX_STORE_U32(r31.u32 + 28, r26.u32);
	// stw r26,72(r31)
	REX_STORE_U32(r31.u32 + 72, r26.u32);
loc_82343ABC:
	// mr r28,r26
	r28.u64 = r26.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x82343c44
	if (!ctx.cr6.gt) goto loc_82343C44;
	// mr r29,r25
	r29.u64 = r25.u64;
loc_82343ACC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823439f4
	if (ctx.cr6.lt) goto loc_823439F4;
	// lwz r10,144(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 144);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823439f4
	if (!ctx.cr6.lt) goto loc_823439F4;
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r10
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82343c34
	if (ctx.cr6.eq) goto loc_82343C34;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82343B0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r23,r3,24
	r23.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82343B24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r23,r7
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82343cc0
	if (!ctx.cr6.eq) goto loc_82343CC0;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 32);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82343cc0
	if (!ctx.cr6.eq) goto loc_82343CC0;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343bbc
	if (ctx.cr6.eq) goto loc_82343BBC;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bne cr6,0x82343b68
	if (!ctx.cr6.eq) goto loc_82343B68;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82343B68:
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82343B7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82343ba8
	if (!ctx.cr6.eq) goto loc_82343BA8;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82343ba8
	if (!ctx.cr6.eq) goto loc_82343BA8;
	// lwz r11,336(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r10,340(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// stw r10,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// b 0x82343c04
	goto loc_82343C04;
loc_82343BA8:
	// lwz r10,336(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82343cd4
	if (!ctx.cr6.eq) goto loc_82343CD4;
	// lwz r10,340(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// b 0x82343bf8
	goto loc_82343BF8;
loc_82343BBC:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82343be8
	if (!ctx.cr6.eq) goto loc_82343BE8;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82343be8
	if (!ctx.cr6.eq) goto loc_82343BE8;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// lwz r10,72(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 72);
	// stw r10,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// b 0x82343c04
	goto loc_82343C04;
loc_82343BE8:
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82343cd4
	if (!ctx.cr6.eq) goto loc_82343CD4;
	// lwz r10,72(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 72);
loc_82343BF8:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82343cd4
	if (!ctx.cr6.eq) goto loc_82343CD4;
loc_82343C04:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82343c34
	if (!ctx.cr6.eq) goto loc_82343C34;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82343C28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82343a48
	if (ctx.cr6.eq) goto loc_82343A48;
loc_82343C34:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(r28.s32, r27.s32, ctx.xer);
	// blt cr6,0x82343acc
	if (ctx.cr6.lt) goto loc_82343ACC;
loc_82343C44:
	// lwz r4,160(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r29,-32129
	r29.s64 = -2105606144;
	// addi r30,r11,9580
	r30.s64 = ctx.r11.s64 + 9580;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82343c78
	if (ctx.cr6.eq) goto loc_82343C78;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1989
	ctx.r6.s64 = 1989;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82343C74;
	sub_82330D00(ctx, base);
	// stw r26,160(r31)
	REX_STORE_U32(r31.u32 + 160, r26.u32);
loc_82343C78:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// stw r27,164(r31)
	REX_STORE_U32(r31.u32 + 164, r27.u32);
	// beq cr6,0x82343e08
	if (ctx.cr6.eq) goto loc_82343E08;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1997
	ctx.r6.s64 = 1997;
	// rlwinm r4,r27,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82343CA0;
	sub_82330E40(ctx, base);
	// stw r3,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82343ce8
	if (!ctx.cr6.eq) goto loc_82343CE8;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8233e820
	ctx.lr = 0x82343CB4;
	sub_8233E820(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x826a1cf4
	return;
loc_82343CC0:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8233e820
	ctx.lr = 0x82343CC8;
	sub_8233E820(ctx, base);
	// li r3,76
	ctx.r3.s64 = 76;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x826a1cf4
	return;
loc_82343CD4:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8233e820
	ctx.lr = 0x82343CDC;
	sub_8233E820(ctx, base);
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x826a1cf4
	return;
loc_82343CE8:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343d04
	if (ctx.cr6.eq) goto loc_82343D04;
	// lwz r11,204(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82343d08
	if (!ctx.cr6.eq) goto loc_82343D08;
loc_82343D04:
	// stw r26,44(r31)
	REX_STORE_U32(r31.u32 + 44, r26.u32);
loc_82343D08:
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// mr r29,r26
	r29.u64 = r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82343e08
	if (!ctx.cr6.gt) goto loc_82343E08;
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r28,r25
	r28.u64 = r25.u64;
loc_82343D20:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82343d38
	if (ctx.cr6.eq) goto loc_82343D38;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// stwx r11,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r11.u32);
	// b 0x82343d40
	goto loc_82343D40;
loc_82343D38:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// stwx r29,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, r29.u32);
loc_82343D40:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82343dec
	if (ctx.cr6.eq) goto loc_82343DEC;
	// lwz r8,140(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82343da8
	if (ctx.cr6.eq) goto loc_82343DA8;
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r3,r10,28
	ctx.r3.s64 = ctx.r10.s64 + 28;
	// bne cr6,0x82343d80
	if (!ctx.cr6.eq) goto loc_82343D80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82343D80:
	// lwz r10,116(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 116);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82343D94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lwz r8,352(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + r30.u64;
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// b 0x82343db4
	goto loc_82343DB4;
loc_82343DA8:
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r9,44(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82343DB4:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343dd0
	if (ctx.cr6.eq) goto loc_82343DD0;
	// lwz r11,204(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82343df0
	if (!ctx.cr6.eq) goto loc_82343DF0;
loc_82343DD0:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// b 0x82343df0
	goto loc_82343DF0;
loc_82343DEC:
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r26.u32);
loc_82343DF0:
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82343d20
	if (ctx.cr6.lt) goto loc_82343D20;
loc_82343E08:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343e24
	if (ctx.cr6.eq) goto loc_82343E24;
	// lwz r11,204(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82343e30
	if (!ctx.cr6.eq) goto loc_82343E30;
loc_82343E24:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r26,52(r31)
	REX_STORE_U32(r31.u32 + 52, r26.u32);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
loc_82343E30:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82343E44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82343f4c
	if (ctx.cr6.eq) goto loc_82343F4C;
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343f4c
	if (ctx.cr6.eq) goto loc_82343F4C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343f4c
	if (ctx.cr6.eq) goto loc_82343F4C;
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r10,r10,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// rlwinm r8,r9,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000;
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82343f28
	if (ctx.cr6.eq) goto loc_82343F28;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,220(r11)
	REX_STORE_U32(ctx.r11.u32 + 220, ctx.r10.u32);
	// stw r10,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r10.u32);
	// bl 0x82341f30
	ctx.lr = 0x82343EA4;
	sub_82341F30(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82343a74
	if (!ctx.cr6.eq) goto loc_82343A74;
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// stw r31,532(r11)
	REX_STORE_U32(ctx.r11.u32 + 532, r31.u32);
	// lwz r10,216(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lwz r9,520(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 520);
	// lwz r3,324(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 324);
	// bl 0x8233e7e0
	ctx.lr = 0x82343EC8;
	sub_8233E7E0(ctx, base);
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// addi r9,r11,524
	ctx.r9.s64 = ctx.r11.s64 + 524;
	// lwz r10,520(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 520);
	// addi r10,r10,312
	ctx.r10.s64 = ctx.r10.s64 + 312;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,524(r11)
	REX_STORE_U32(ctx.r11.u32 + 524, ctx.r10.u32);
	// stw r8,528(r11)
	REX_STORE_U32(ctx.r11.u32 + 528, ctx.r8.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r7,528(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 528);
	// stw r9,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// lwz r6,216(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lwz r5,520(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 520);
	// lwz r3,324(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 324);
	// bl 0x8233e820
	ctx.lr = 0x82343F00;
	sub_8233E820(ctx, base);
	// lwz r3,216(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 216);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,520(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 520);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x823537f0
	ctx.lr = 0x82343F14;
	sub_823537F0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8233e820
	ctx.lr = 0x82343F1C;
	sub_8233E820(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x826a1cf4
	return;
loc_82343F28:
	// rlwinm r11,r10,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239e9f8
	ctx.lr = 0x82343F3C;
	sub_8239E9F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82343f4c
	if (!ctx.cr6.eq) goto loc_82343F4C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239f860
	ctx.lr = 0x82343F4C;
	sub_8239F860(ctx, base);
loc_82343F4C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8233e820
	ctx.lr = 0x82343F54;
	sub_8233E820(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8236E288) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-28
	ctx.r11.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8236e298
	if (!ctx.cr6.eq) goto loc_8236E298;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8236E298:
	// cmpwi cr6,r4,16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8236e2c4
	if (ctx.cr6.eq) goto loc_8236E2C4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// addi r10,r4,96
	ctx.r10.s64 = ctx.r4.s64 + 96;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// blr 
	return;
loc_8236E2C4:
	// stfs f1,316(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 316, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823716F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-28
	ctx.r11.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82371708
	if (!ctx.cr6.eq) goto loc_82371708;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82371708:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 + 312;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
loc_8237171C:
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfsu f0,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8237171c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237171C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82374470) {
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
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x823744c4
	if (ctx.cr6.lt) goto loc_823744C4;
	// bne cr6,0x82374550
	if (!ctx.cr6.eq) goto loc_82374550;
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
	ctx.lr = 0x823744B0;
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
loc_823744C4:
	// lwz r10,312(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 312);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lwz r11,312(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 312);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82374550
	if (ctx.cr6.gt) goto loc_82374550;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82374514
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82374514;
	// bdzf 4*cr6+eq,0x82374520
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82374520;
	// bdzf 4*cr6+eq,0x8237452c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8237452C;
	// bdzf 4*cr6+eq,0x82374538
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82374538;
	// bne cr6,0x82374544
	if (!ctx.cr6.eq) goto loc_82374544;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,17616
	ctx.r4.s64 = ctx.r11.s64 + 17616;
	// b 0x8237454c
	goto loc_8237454C;
loc_82374514:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,17608
	ctx.r4.s64 = ctx.r11.s64 + 17608;
	// b 0x8237454c
	goto loc_8237454C;
loc_82374520:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,17600
	ctx.r4.s64 = ctx.r11.s64 + 17600;
	// b 0x8237454c
	goto loc_8237454C;
loc_8237452C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,17588
	ctx.r4.s64 = ctx.r11.s64 + 17588;
	// b 0x8237454c
	goto loc_8237454C;
loc_82374538:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,17576
	ctx.r4.s64 = ctx.r11.s64 + 17576;
	// b 0x8237454c
	goto loc_8237454C;
loc_82374544:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,17568
	ctx.r4.s64 = ctx.r11.s64 + 17568;
loc_8237454C:
	// bl 0x82331480
	ctx.lr = 0x82374550;
	sub_82331480(ctx, base);
loc_82374550:
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

DEFINE_REX_FUNC(sub_8237DBF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8237dc5c
	if (ctx.cr6.lt) goto loc_8237DC5C;
	// cmpwi cr6,r4,16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16, ctx.xer);
	// bge cr6,0x8237dc5c
	if (!ctx.cr6.lt) goto loc_8237DC5C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8237dc5c
	if (ctx.cr6.eq) goto loc_8237DC5C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,396
	ctx.r10.s64 = ctx.r3.s64 + 396;
loc_8237DC14:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8237dc2c
	if (ctx.cr6.eq) goto loc_8237DC2C;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8237dc44
	if (ctx.cr6.eq) goto loc_8237DC44;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8237DC2C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x8237dc14
	if (ctx.cr6.lt) goto loc_8237DC14;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8237DC44:
	// mulli r11,r11,704
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(704));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,1056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1056);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
loc_8237DC5C:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82384648) {
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
	// bl 0x823c8da8
	ctx.lr = 0x82384660;
	sub_823C8DA8(ctx, base);
	// lwz r9,1416(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1416);
loc_82384664:
	// lwz r11,2184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2184);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// lbz r10,532(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 532);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8238469c
	if (ctx.cr6.lt) goto loc_8238469C;
	// lwz r8,1408(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1408);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2184(r31)
	REX_STORE_U32(r31.u32 + 2184, ctx.r11.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82384694
	if (!ctx.cr6.lt) goto loc_82384694;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x82384664
	if (ctx.cr6.lt) goto loc_82384664;
loc_82384694:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823846d0
	if (!ctx.cr6.lt) goto loc_823846D0;
loc_8238469C:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 520);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,15520(r31)
	REX_STORE_U32(r31.u32 + 15520, ctx.r10.u32);
	// bl 0x82381b68
	ctx.lr = 0x823846B8;
	sub_82381B68(ctx, base);
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
loc_823846D0:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,2165(r31)
	REX_STORE_U8(r31.u32 + 2165, ctx.r11.u8);
	// li r3,25
	ctx.r3.s64 = 25;
	// stb r10,2164(r31)
	REX_STORE_U8(r31.u32 + 2164, ctx.r10.u8);
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

DEFINE_REX_FUNC(sub_8238D8F0) {
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
	// lwz r11,2168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2168);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238d9b4
	if (!ctx.cr6.eq) goto loc_8238D9B4;
	// lbz r11,2165(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 2165);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238d938
	if (ctx.cr6.eq) goto loc_8238D938;
	// lbz r11,2166(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 2166);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238d938
	if (!ctx.cr6.eq) goto loc_8238D938;
	// bl 0x823c86b8
	ctx.lr = 0x8238D934;
	sub_823C86B8(ctx, base);
	// b 0x8238d9c8
	goto loc_8238D9C8;
loc_8238D938:
	// lwz r11,2200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2200);
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8238d950
	if (ctx.cr6.lt) goto loc_8238D950;
	// stw r11,2184(r31)
	REX_STORE_U32(r31.u32 + 2184, ctx.r11.u32);
	// stw r10,2200(r31)
	REX_STORE_U32(r31.u32 + 2200, ctx.r10.u32);
loc_8238D950:
	// lwz r11,2196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8238d964
	if (ctx.cr6.lt) goto loc_8238D964;
	// stw r11,2180(r31)
	REX_STORE_U32(r31.u32 + 2180, ctx.r11.u32);
	// stw r10,2196(r31)
	REX_STORE_U32(r31.u32 + 2196, ctx.r10.u32);
loc_8238D964:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238c3f8
	ctx.lr = 0x8238D96C;
	sub_8238C3F8(ctx, base);
	// lwz r11,2196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2196);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8238d9c8
	if (!ctx.cr6.eq) goto loc_8238D9C8;
	// lwz r11,2180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2180);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2196(r31)
	REX_STORE_U32(r31.u32 + 2196, ctx.r11.u32);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// blt cr6,0x8238d9c8
	if (ctx.cr6.lt) goto loc_8238D9C8;
	// lwz r11,2184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2184);
	// lwz r10,1408(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1408);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2200(r31)
	REX_STORE_U32(r31.u32 + 2200, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8238d9ac
	if (ctx.cr6.lt) goto loc_8238D9AC;
	// lwz r11,2140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2140);
	// stw r11,2200(r31)
	REX_STORE_U32(r31.u32 + 2200, ctx.r11.u32);
loc_8238D9AC:
	// stw r30,2196(r31)
	REX_STORE_U32(r31.u32 + 2196, r30.u32);
	// b 0x8238d9c8
	goto loc_8238D9C8;
loc_8238D9B4:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238d9c8
	if (ctx.cr6.eq) goto loc_8238D9C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238cf80
	ctx.lr = 0x8238D9C8;
	sub_8238CF80(ctx, base);
loc_8238D9C8:
	// lwz r11,2168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2168);
	// lwz r10,2172(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2172);
	// lwz r9,2188(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 2188);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,2168(r31)
	REX_STORE_U32(r31.u32 + 2168, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8238d9f0
	if (ctx.cr6.lt) goto loc_8238D9F0;
	// stw r30,2188(r31)
	REX_STORE_U32(r31.u32 + 2188, r30.u32);
	// stw r30,2168(r31)
	REX_STORE_U32(r31.u32 + 2168, r30.u32);
loc_8238D9F0:
	// lwz r10,1260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1260);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,1256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1256);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,1260(r31)
	REX_STORE_U32(r31.u32 + 1260, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82396858) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-28
	ctx.r11.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82396868
	if (!ctx.cr6.eq) goto loc_82396868;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82396868:
	// lwz r10,348(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 348);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239687c
	if (ctx.cr6.eq) goto loc_8239687C;
loc_82396874:
	// li r3,45
	ctx.r3.s64 = 45;
	// blr 
	return;
loc_8239687C:
	// lwz r10,356(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 356);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82396874
	if (!ctx.cr6.eq) goto loc_82396874;
	// lwz r11,364(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 364);
	// li r10,45
	ctx.r10.s64 = 45;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8239BA10) {
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
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lis r6,-32129
	ctx.r6.s64 = -2105606144;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// stw r5,1012(r6)
	REX_STORE_U32(ctx.r6.u32 + 1012, ctx.r5.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bgt cr6,0x8239bb6c
	if (ctx.cr6.gt) goto loc_8239BB6C;
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-17832
	ctx.r12.s64 = ctx.r12.s64 + -17832;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8239BABC;
	case 1:
		goto loc_8239BA88;
	case 2:
		goto loc_8239BA90;
	case 3:
		goto loc_8239BA98;
	case 4:
		goto loc_8239BAA0;
	case 5:
		goto loc_8239BAA0;
	case 6:
		goto loc_8239BABC;
	case 7:
		goto loc_8239BABC;
	case 8:
		goto loc_8239BABC;
	case 9:
		goto loc_8239BABC;
	case 10:
		goto loc_8239BABC;
	case 11:
		goto loc_8239BABC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8239BA88:
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x8239baa4
	goto loc_8239BAA4;
loc_8239BA90:
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x8239baa4
	goto loc_8239BAA4;
loc_8239BA98:
	// li r10,24
	ctx.r10.s64 = 24;
	// b 0x8239baa4
	goto loc_8239BAA4;
loc_8239BAA0:
	// li r10,32
	ctx.r10.s64 = 32;
loc_8239BAA4:
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mulld r8,r10,r9
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r9.u64);
	// rldicl r5,r8,61,3
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// stw r5,672(r31)
	REX_STORE_U32(r31.u32 + 672, ctx.r5.u32);
	// b 0x8239bb60
	goto loc_8239BB60;
loc_8239BABC:
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-17708
	ctx.r12.s64 = ctx.r12.s64 + -17708;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8239BB58;
	case 1:
		goto loc_8239BB6C;
	case 2:
		goto loc_8239BB6C;
	case 3:
		goto loc_8239BB6C;
	case 4:
		goto loc_8239BB6C;
	case 5:
		goto loc_8239BB6C;
	case 6:
		goto loc_8239BB04;
	case 7:
		goto loc_8239BB1C;
	case 8:
		goto loc_8239BB38;
	case 9:
		goto loc_8239BB50;
	case 10:
		goto loc_8239BB50;
	case 11:
		goto loc_8239BB50;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8239BB04:
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// li r10,14
	ctx.r10.s64 = 14;
	// divwu r9,r11,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,672(r31)
	REX_STORE_U32(r31.u32 + 672, ctx.r8.u32);
	// b 0x8239bb60
	goto loc_8239BB60;
loc_8239BB1C:
	// addi r11,r11,63
	ctx.r11.s64 = ctx.r11.s64 + 63;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,672(r31)
	REX_STORE_U32(r31.u32 + 672, ctx.r9.u32);
	// b 0x8239bb60
	goto loc_8239BB60;
loc_8239BB38:
	// addi r11,r11,27
	ctx.r11.s64 = ctx.r11.s64 + 27;
	// li r10,28
	ctx.r10.s64 = 28;
	// divwu r9,r11,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r8,672(r31)
	REX_STORE_U32(r31.u32 + 672, ctx.r8.u32);
	// b 0x8239bb60
	goto loc_8239BB60;
loc_8239BB50:
	// stw r11,672(r31)
	REX_STORE_U32(r31.u32 + 672, ctx.r11.u32);
	// b 0x8239bb6c
	goto loc_8239BB6C;
loc_8239BB58:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,672(r31)
	REX_STORE_U32(r31.u32 + 672, ctx.r11.u32);
loc_8239BB60:
	// lwz r11,672(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 672);
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// stw r10,672(r31)
	REX_STORE_U32(r31.u32 + 672, ctx.r10.u32);
loc_8239BB6C:
	// lwz r11,1012(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 1012);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,672(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 672);
	// addi r5,r10,20580
	ctx.r5.s64 = ctx.r10.s64 + 20580;
	// li r6,185
	ctx.r6.s64 = 185;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8239BB8C;
	sub_82330E40(ctx, base);
	// addic r8,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// stw r3,676(r31)
	REX_STORE_U32(r31.u32 + 676, ctx.r3.u32);
	// li r9,44
	ctx.r9.s64 = 44;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 & ctx.r9.u64;
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

DEFINE_REX_FUNC(sub_823A3358) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x823a3368
	if (!ctx.cr6.eq) goto loc_823A3368;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A3368:
	// b 0x823a2ff8
	sub_823A2FF8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823A4710) {
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
	ctx.lr = 0x823A4718;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32129
	r31.s64 = -2105606144;
	// li r5,172
	ctx.r5.s64 = 172;
	// addi r20,r31,16848
	r20.s64 = r31.s64 + 16848;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823A4734;
	sub_823EF5F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r11,21692
	ctx.r11.s64 = ctx.r11.s64 + 21692;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// stw r11,16848(r31)
	REX_STORE_U32(r31.u32 + 16848, ctx.r11.u32);
	// li r9,17
	ctx.r9.s64 = 17;
	// li r11,2048
	ctx.r11.s64 = 2048;
	// stw r10,4(r20)
	REX_STORE_U32(r20.u32 + 4, ctx.r10.u32);
	// lis r21,-32198
	r21.s64 = -2110128128;
	// stw r9,64(r20)
	REX_STORE_U32(r20.u32 + 64, ctx.r9.u32);
	// lis r22,-32198
	r22.s64 = -2110128128;
	// stw r11,68(r20)
	REX_STORE_U32(r20.u32 + 68, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r21,12504
	ctx.r9.s64 = r21.s64 + 12504;
	// addi r11,r22,12520
	ctx.r11.s64 = r22.s64 + 12520;
	// stw r10,8(r20)
	REX_STORE_U32(r20.u32 + 8, ctx.r10.u32);
	// lis r23,-32198
	r23.s64 = -2110128128;
	// stw r9,12(r20)
	REX_STORE_U32(r20.u32 + 12, ctx.r9.u32);
	// lis r24,-32198
	r24.s64 = -2110128128;
	// stw r11,16(r20)
	REX_STORE_U32(r20.u32 + 16, ctx.r11.u32);
	// lis r25,-32198
	r25.s64 = -2110128128;
	// addi r10,r23,12624
	ctx.r10.s64 = r23.s64 + 12624;
	// addi r9,r24,16320
	ctx.r9.s64 = r24.s64 + 16320;
	// addi r11,r25,12704
	ctx.r11.s64 = r25.s64 + 12704;
	// stw r10,92(r20)
	REX_STORE_U32(r20.u32 + 92, ctx.r10.u32);
	// lis r26,-32198
	r26.s64 = -2110128128;
	// stw r9,100(r20)
	REX_STORE_U32(r20.u32 + 100, ctx.r9.u32);
	// lis r27,-32198
	r27.s64 = -2110128128;
	// stw r11,28(r20)
	REX_STORE_U32(r20.u32 + 28, ctx.r11.u32);
	// lis r28,-32198
	r28.s64 = -2110128128;
	// addi r10,r26,12728
	ctx.r10.s64 = r26.s64 + 12728;
	// addi r9,r27,12840
	ctx.r9.s64 = r27.s64 + 12840;
	// addi r11,r28,12888
	ctx.r11.s64 = r28.s64 + 12888;
	// stw r10,104(r20)
	REX_STORE_U32(r20.u32 + 104, ctx.r10.u32);
	// lis r29,-32198
	r29.s64 = -2110128128;
	// stw r9,108(r20)
	REX_STORE_U32(r20.u32 + 108, ctx.r9.u32);
	// lis r30,-32198
	r30.s64 = -2110128128;
	// stw r11,36(r20)
	REX_STORE_U32(r20.u32 + 36, ctx.r11.u32);
	// lis r31,-32198
	r31.s64 = -2110128128;
	// addi r10,r29,12864
	ctx.r10.s64 = r29.s64 + 12864;
	// addi r9,r30,12936
	ctx.r9.s64 = r30.s64 + 12936;
	// addi r11,r31,12960
	ctx.r11.s64 = r31.s64 + 12960;
	// stw r10,32(r20)
	REX_STORE_U32(r20.u32 + 32, ctx.r10.u32);
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// stw r9,40(r20)
	REX_STORE_U32(r20.u32 + 40, ctx.r9.u32);
	// lis r4,-32198
	ctx.r4.s64 = -2110128128;
	// stw r11,44(r20)
	REX_STORE_U32(r20.u32 + 44, ctx.r11.u32);
	// lis r5,-32198
	ctx.r5.s64 = -2110128128;
	// addi r10,r3,12984
	ctx.r10.s64 = ctx.r3.s64 + 12984;
	// addi r9,r4,13096
	ctx.r9.s64 = ctx.r4.s64 + 13096;
	// addi r11,r5,18160
	ctx.r11.s64 = ctx.r5.s64 + 18160;
	// stw r10,128(r20)
	REX_STORE_U32(r20.u32 + 128, ctx.r10.u32);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// stw r9,132(r20)
	REX_STORE_U32(r20.u32 + 132, ctx.r9.u32);
	// lis r7,-32198
	ctx.r7.s64 = -2110128128;
	// stw r11,144(r20)
	REX_STORE_U32(r20.u32 + 144, ctx.r11.u32);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// addi r10,r6,13120
	ctx.r10.s64 = ctx.r6.s64 + 13120;
	// addi r9,r7,16416
	ctx.r9.s64 = ctx.r7.s64 + 16416;
	// addi r11,r8,13144
	ctx.r11.s64 = ctx.r8.s64 + 13144;
	// stw r10,148(r20)
	REX_STORE_U32(r20.u32 + 148, ctx.r10.u32);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// stw r9,152(r20)
	REX_STORE_U32(r20.u32 + 152, ctx.r9.u32);
	// stw r11,156(r20)
	REX_STORE_U32(r20.u32 + 156, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_823AC5E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823AC5F0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823d3730
	ctx.lr = 0x823AC5FC;
	sub_823D3730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ac9d4
	if (!ctx.cr6.eq) goto loc_823AC9D4;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823ac814
	if (!ctx.cr6.eq) goto loc_823AC814;
	// lwz r30,396(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 396);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823ac62c
	if (!ctx.cr6.eq) goto loc_823AC62C;
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_823AC62C:
	// li r29,0
	r29.s64 = 0;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,780(r31)
	REX_STORE_U32(r31.u32 + 780, r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82348e28
	ctx.lr = 0x823AC644;
	sub_82348E28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ac9d4
	if (!ctx.cr6.eq) goto loc_823AC9D4;
	// lwz r3,772(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 772);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ac66c
	if (ctx.cr6.eq) goto loc_823AC66C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82348e28
	ctx.lr = 0x823AC664;
	sub_82348E28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ac9d4
	if (!ctx.cr6.eq) goto loc_823AC9D4;
loc_823AC66C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,396(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 396);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82348e28
	ctx.lr = 0x823AC67C;
	sub_82348E28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ac9d4
	if (!ctx.cr6.eq) goto loc_823AC9D4;
	// lwz r11,772(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 772);
	// addi r7,r31,784
	ctx.r7.s64 = r31.s64 + 784;
	// lwz r4,84(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r3,32(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// beq cr6,0x823ac700
	if (ctx.cr6.eq) goto loc_823AC700;
	// bl 0x82348ca0
	ctx.lr = 0x823AC6B0;
	sub_82348CA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ac9d4
	if (!ctx.cr6.eq) goto loc_823AC9D4;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,772(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 772);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82348ca0
	ctx.lr = 0x823AC6D0;
	sub_82348CA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ac9d4
	if (!ctx.cr6.eq) goto loc_823AC9D4;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,396(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 396);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,772(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 772);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82348ca0
	ctx.lr = 0x823AC6F0;
	sub_82348CA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ac72c
	if (ctx.cr6.eq) goto loc_823AC72C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_823AC700:
	// bl 0x82348ca0
	ctx.lr = 0x823AC704;
	sub_82348CA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ac9d4
	if (!ctx.cr6.eq) goto loc_823AC9D4;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,396(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 396);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82348ca0
	ctx.lr = 0x823AC724;
	sub_82348CA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ac9d4
	if (!ctx.cr6.eq) goto loc_823AC9D4;
loc_823AC72C:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823ac754
	if (!ctx.cr6.eq) goto loc_823AC754;
	// lwz r4,396(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 396);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,776(r31)
	REX_STORE_U32(r31.u32 + 776, ctx.r4.u32);
	// bl 0x823ac2f0
	ctx.lr = 0x823AC74C;
	sub_823AC2F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ac9d4
	if (!ctx.cr6.eq) goto loc_823AC9D4;
loc_823AC754:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r9,96(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r5,56(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r4,52(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823AC774;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ac9d4
	if (!ctx.cr6.eq) goto loc_823AC9D4;
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// stw r29,312(r30)
	REX_STORE_U32(r30.u32 + 312, r29.u32);
	// stw r29,316(r30)
	REX_STORE_U32(r30.u32 + 316, r29.u32);
	// stw r29,296(r30)
	REX_STORE_U32(r30.u32 + 296, r29.u32);
	// stw r29,300(r30)
	REX_STORE_U32(r30.u32 + 300, r29.u32);
	// stw r29,336(r30)
	REX_STORE_U32(r30.u32 + 336, r29.u32);
	// stw r29,340(r30)
	REX_STORE_U32(r30.u32 + 340, r29.u32);
	// stw r29,344(r30)
	REX_STORE_U32(r30.u32 + 344, r29.u32);
	// stw r29,348(r30)
	REX_STORE_U32(r30.u32 + 348, r29.u32);
	// stw r29,352(r30)
	REX_STORE_U32(r30.u32 + 352, r29.u32);
	// stw r29,356(r30)
	REX_STORE_U32(r30.u32 + 356, r29.u32);
	// stw r31,328(r30)
	REX_STORE_U32(r30.u32 + 328, r31.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r11,332(r30)
	REX_STORE_U32(r30.u32 + 332, ctx.r11.u32);
	// stw r29,320(r30)
	REX_STORE_U32(r30.u32 + 320, r29.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r9,284(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 284);
	// rlwinm r8,r9,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r8,284(r10)
	REX_STORE_U32(ctx.r10.u32 + 284, ctx.r8.u32);
	// lwz r11,772(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 772);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ac7e8
	if (ctx.cr6.eq) goto loc_823AC7E8;
	// lwz r10,284(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r9,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r9.u32);
loc_823AC7E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,396(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 396);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823afbf0
	ctx.lr = 0x823AC7F8;
	sub_823AFBF0(ctx, base);
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,284(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r9,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_823AC814:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82348e28
	ctx.lr = 0x823AC824;
	sub_82348E28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ac9d4
	if (!ctx.cr6.eq) goto loc_823AC9D4;
	// lwz r3,772(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 772);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ac84c
	if (ctx.cr6.eq) goto loc_823AC84C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82348e28
	ctx.lr = 0x823AC844;
	sub_82348E28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ac9d4
	if (!ctx.cr6.eq) goto loc_823AC9D4;
loc_823AC84C:
	// lwz r3,396(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 396);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ac86c
	if (ctx.cr6.eq) goto loc_823AC86C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82348e28
	ctx.lr = 0x823AC864;
	sub_82348E28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ac9d4
	if (!ctx.cr6.eq) goto loc_823AC9D4;
loc_823AC86C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,28(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82333ad0
	ctx.lr = 0x823AC880;
	sub_82333AD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ac9d4
	if (!ctx.cr6.eq) goto loc_823AC9D4;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x823ac8bc
	if (!ctx.cr6.eq) goto loc_823AC8BC;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r9,1216(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 1216);
	// bne cr6,0x823ac8b4
	if (!ctx.cr6.eq) goto loc_823AC8B4;
	// lwz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
loc_823AC8B4:
	// lbz r11,261(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 261);
	// stb r11,261(r9)
	REX_STORE_U8(ctx.r9.u32 + 261, ctx.r11.u8);
loc_823AC8BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823aa2b0
	ctx.lr = 0x823AC8C8;
	sub_823AA2B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ac9d4
	if (!ctx.cr6.eq) goto loc_823AC9D4;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,284(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r9,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r9.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8235f3c0
	ctx.lr = 0x823AC8F0;
	sub_8235F3C0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,284(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r7,r8,0,31,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r7,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r7.u32);
	// addi r7,r31,784
	ctx.r7.s64 = r31.s64 + 784;
	// lwz r4,84(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r6,772(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 772);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r3,32(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// beq cr6,0x823ac97c
	if (ctx.cr6.eq) goto loc_823AC97C;
	// bl 0x82348ca0
	ctx.lr = 0x823AC92C;
	sub_82348CA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ac9d4
	if (!ctx.cr6.eq) goto loc_823AC9D4;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,772(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 772);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82348ca0
	ctx.lr = 0x823AC94C;
	sub_82348CA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ac9d4
	if (!ctx.cr6.eq) goto loc_823AC9D4;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,772(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 772);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82348ca0
	ctx.lr = 0x823AC96C;
	sub_82348CA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ac9a8
	if (ctx.cr6.eq) goto loc_823AC9A8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_823AC97C:
	// bl 0x82348ca0
	ctx.lr = 0x823AC980;
	sub_82348CA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ac9d4
	if (!ctx.cr6.eq) goto loc_823AC9D4;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82348ca0
	ctx.lr = 0x823AC9A0;
	sub_82348CA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ac9d4
	if (!ctx.cr6.eq) goto loc_823AC9D4;
loc_823AC9A8:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823ac9d0
	if (!ctx.cr6.eq) goto loc_823AC9D0;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,776(r31)
	REX_STORE_U32(r31.u32 + 776, ctx.r4.u32);
	// bl 0x823ac2f0
	ctx.lr = 0x823AC9C8;
	sub_823AC2F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ac9d4
	if (!ctx.cr6.eq) goto loc_823AC9D4;
loc_823AC9D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AC9D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823CDA70) {
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
	ctx.lr = 0x823CDA78;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823cdaec
	if (!ctx.cr6.eq) goto loc_823CDAEC;
	// li r6,8500
	ctx.r6.s64 = 8500;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x823cd610
	ctx.lr = 0x823CDAB0;
	sub_823CD610(ctx, base);
	// cmpdi cr6,r3,-128
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -128, ctx.xer);
	// bne cr6,0x823cdac0
	if (!ctx.cr6.eq) goto loc_823CDAC0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cec
	return;
loc_823CDAC0:
	// cmpdi cr6,r3,-139
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -139, ctx.xer);
	// bne cr6,0x823cdad4
	if (!ctx.cr6.eq) goto loc_823CDAD4;
loc_823CDAC8:
	// li r3,-139
	ctx.r3.s64 = -139;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cec
	return;
loc_823CDAD4:
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// bge cr6,0x823cdae8
	if (!ctx.cr6.lt) goto loc_823CDAE8;
	// li r3,-132
	ctx.r3.s64 = -132;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cec
	return;
loc_823CDAE8:
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
loc_823CDAEC:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823d0290
	ctx.lr = 0x823CDAF8;
	sub_823D0290(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823cdac8
	if (!ctx.cr6.eq) goto loc_823CDAC8;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823d01a8
	ctx.lr = 0x823CDB08;
	sub_823D01A8(ctx, base);
	// li r21,2
	r21.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r21,88(r26)
	REX_STORE_U32(r26.u32 + 88, r21.u32);
	// bl 0x823e06d8
	ctx.lr = 0x823CDB18;
	sub_823E06D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cdce8
	if (ctx.cr6.eq) goto loc_823CDCE8;
	// li r25,3
	r25.s64 = 3;
loc_823CDB24:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823cdba0
	if (ctx.cr6.eq) goto loc_823CDBA0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,0(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x823cd858
	ctx.lr = 0x823CDB3C;
	sub_823CD858(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823cdc78
	if (!ctx.cr6.eq) goto loc_823CDC78;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e0758
	ctx.lr = 0x823CDB4C;
	sub_823E0758(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823cdb78
	if (ctx.cr6.eq) goto loc_823CDB78;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82393b68
	ctx.lr = 0x823CDB74;
	sub_82393B68(ctx, base);
	// b 0x823cdb80
	goto loc_823CDB80;
loc_823CDB78:
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82393a88
	ctx.lr = 0x823CDB80;
	sub_82393A88(ctx, base);
loc_823CDB80:
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cdac8
	if (ctx.cr6.eq) goto loc_823CDAC8;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r31,-4(r9)
	REX_STORE_U32(ctx.r9.u32 + -4, r31.u32);
loc_823CDBA0:
	// lwz r11,88(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 88);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x823cdc18
	if (!ctx.cr6.lt) goto loc_823CDC18;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r31,r26,112
	r31.s64 = r26.s64 + 112;
	// bl 0x823e0758
	ctx.lr = 0x823CDBB8;
	sub_823E0758(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e11c0
	ctx.lr = 0x823CDBC4;
	sub_823E11C0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823e0cb0
	ctx.lr = 0x823CDBD4;
	sub_823E0CB0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e1340
	ctx.lr = 0x823CDBE0;
	sub_823E1340(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x823cdc18
	if (!ctx.cr6.gt) goto loc_823CDC18;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823d0c08
	ctx.lr = 0x823CDBF0;
	sub_823D0C08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cdc18
	if (ctx.cr6.eq) goto loc_823CDC18;
	// stw r25,88(r26)
	REX_STORE_U32(r26.u32 + 88, r25.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823d0ce8
	ctx.lr = 0x823CDC10;
	sub_823D0CE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823cdc94
	if (!ctx.cr6.eq) goto loc_823CDC94;
loc_823CDC18:
	// li r6,8500
	ctx.r6.s64 = 8500;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823cd610
	ctx.lr = 0x823CDC2C;
	sub_823CD610(ctx, base);
	// cmpdi cr6,r3,-128
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -128, ctx.xer);
	// beq cr6,0x823cdcc0
	if (ctx.cr6.eq) goto loc_823CDCC0;
	// cmpdi cr6,r3,-139
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -139, ctx.xer);
	// beq cr6,0x823cdcc8
	if (ctx.cr6.eq) goto loc_823CDCC8;
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// blt cr6,0x823cdcd0
	if (ctx.cr6.lt) goto loc_823CDCD0;
	// lwz r11,88(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 88);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x823cdc64
	if (!ctx.cr6.eq) goto loc_823CDC64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e0758
	ctx.lr = 0x823CDC58;
	sub_823E0758(ctx, base);
	// lwz r11,448(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 448);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x823cdcd8
	if (ctx.cr6.eq) goto loc_823CDCD8;
loc_823CDC64:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e06d8
	ctx.lr = 0x823CDC6C;
	sub_823E06D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823cdb24
	if (!ctx.cr6.eq) goto loc_823CDB24;
	// b 0x823cdce8
	goto loc_823CDCE8;
loc_823CDC78:
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823cdc8c
	if (ctx.cr6.eq) goto loc_823CDC8C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82393bf0
	ctx.lr = 0x823CDC8C;
	sub_82393BF0(ctx, base);
loc_823CDC8C:
	// stw r24,0(r29)
	REX_STORE_U32(r29.u32 + 0, r24.u32);
	// stw r24,0(r27)
	REX_STORE_U32(r27.u32 + 0, r24.u32);
loc_823CDC94:
	// li r31,-133
	r31.s64 = -133;
loc_823CDC98:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823d02f8
	ctx.lr = 0x823CDCA4;
	sub_823D02F8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823d01b8
	ctx.lr = 0x823CDCB0;
	sub_823D01B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r21,88(r26)
	REX_STORE_U32(r26.u32 + 88, r21.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cec
	return;
loc_823CDCC0:
	// li r31,-128
	r31.s64 = -128;
	// b 0x823cdc98
	goto loc_823CDC98;
loc_823CDCC8:
	// li r31,-139
	r31.s64 = -139;
	// b 0x823cdc98
	goto loc_823CDC98;
loc_823CDCD0:
	// li r31,-132
	r31.s64 = -132;
	// b 0x823cdc98
	goto loc_823CDC98;
loc_823CDCD8:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r26,112
	ctx.r4.s64 = r26.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823e0cb0
	ctx.lr = 0x823CDCE8;
	sub_823E0CB0(ctx, base);
loc_823CDCE8:
	// lwz r11,88(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 88);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x823cdcd0
	if (!ctx.cr6.eq) goto loc_823CDCD0;
	// mr r27,r24
	r27.u64 = r24.u64;
loc_823CDCF8:
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(r27.s32, 2, ctx.xer);
	// bge cr6,0x823cdd4c
	if (!ctx.cr6.lt) goto loc_823CDD4C;
	// addi r29,r26,112
	r29.s64 = r26.s64 + 112;
loc_823CDD04:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823e1340
	ctx.lr = 0x823CDD10;
	sub_823E1340(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cdd58
	if (ctx.cr6.eq) goto loc_823CDD58;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823cdc94
	if (ctx.cr6.eq) goto loc_823CDC94;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823d0ce8
	ctx.lr = 0x823CDD34;
	sub_823D0CE8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823cdc98
	if (!ctx.cr6.eq) goto loc_823CDC98;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(r27.s32, 2, ctx.xer);
	// blt cr6,0x823cdd04
	if (ctx.cr6.lt) goto loc_823CDD04;
loc_823CDD4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cec
	return;
loc_823CDD58:
	// li r6,8500
	ctx.r6.s64 = 8500;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823cd610
	ctx.lr = 0x823CDD6C;
	sub_823CD610(ctx, base);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// blt cr6,0x823cdc94
	if (ctx.cr6.lt) goto loc_823CDC94;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e0758
	ctx.lr = 0x823CDD7C;
	sub_823E0758(ctx, base);
	// lwz r11,448(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 448);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x823cdda8
	if (ctx.cr6.eq) goto loc_823CDDA8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e06d8
	ctx.lr = 0x823CDD90;
	sub_823E06D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cdd58
	if (ctx.cr6.eq) goto loc_823CDD58;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x823cdc94
	if (!ctx.cr6.eq) goto loc_823CDC94;
	// li r24,1
	r24.s64 = 1;
	// b 0x823cdd58
	goto loc_823CDD58;
loc_823CDDA8:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823e0cb0
	ctx.lr = 0x823CDDB8;
	sub_823E0CB0(ctx, base);
	// b 0x823cdcf8
	goto loc_823CDCF8;
}

DEFINE_REX_FUNC(sub_823DD830) {
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
	ctx.lr = 0x823DD838;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x823dcc18
	ctx.lr = 0x823DD85C;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823dd870
	if (!ctx.cr6.eq) goto loc_823DD870;
loc_823DD864:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_823DD870:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x823dd890
	if (ctx.cr6.eq) goto loc_823DD890;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stbx r11,r10,r28
	REX_STORE_U8(ctx.r10.u32 + r28.u32, ctx.r11.u8);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r8.u32);
loc_823DD890:
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823dd8b0
	if (!ctx.cr6.eq) goto loc_823DD8B0;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_823DD8B0:
	// rlwinm r10,r11,0,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823dd8d4
	if (ctx.cr6.eq) goto loc_823DD8D4;
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823dd8d4
	if (!ctx.cr6.eq) goto loc_823DD8D4;
	// clrlwi r30,r11,27
	r30.u64 = ctx.r11.u32 & 0x1F;
	// li r31,1
	r31.s64 = 1;
	// b 0x823dd960
	goto loc_823DD960;
loc_823DD8D4:
	// rlwinm r10,r11,0,24,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823dd8f8
	if (ctx.cr6.eq) goto loc_823DD8F8;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823dd8f8
	if (!ctx.cr6.eq) goto loc_823DD8F8;
	// clrlwi r30,r11,28
	r30.u64 = ctx.r11.u32 & 0xF;
	// li r31,2
	r31.s64 = 2;
	// b 0x823dd960
	goto loc_823DD960;
loc_823DD8F8:
	// rlwinm r10,r11,0,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823dd91c
	if (ctx.cr6.eq) goto loc_823DD91C;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823dd91c
	if (!ctx.cr6.eq) goto loc_823DD91C;
	// clrlwi r30,r11,29
	r30.u64 = ctx.r11.u32 & 0x7;
	// li r31,3
	r31.s64 = 3;
	// b 0x823dd960
	goto loc_823DD960;
loc_823DD91C:
	// rlwinm r10,r11,0,24,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823dd940
	if (ctx.cr6.eq) goto loc_823DD940;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823dd940
	if (!ctx.cr6.eq) goto loc_823DD940;
	// clrlwi r30,r11,30
	r30.u64 = ctx.r11.u32 & 0x3;
	// li r31,4
	r31.s64 = 4;
	// b 0x823dd960
	goto loc_823DD960;
loc_823DD940:
	// rlwinm r10,r11,0,24,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823dd9d4
	if (ctx.cr6.eq) goto loc_823DD9D4;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823dd9d4
	if (!ctx.cr6.eq) goto loc_823DD9D4;
	// clrlwi r30,r11,31
	r30.u64 = ctx.r11.u32 & 0x1;
	// li r31,5
	r31.s64 = 5;
loc_823DD960:
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823dcc18
	ctx.lr = 0x823DD974;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823dd864
	if (ctx.cr6.eq) goto loc_823DD864;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x823dd99c
	if (ctx.cr6.eq) goto loc_823DD99C;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stbx r11,r10,r28
	REX_STORE_U8(ctx.r10.u32 + r28.u32, ctx.r11.u8);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r8.u32);
loc_823DD99C:
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823dd9d4
	if (ctx.cr6.eq) goto loc_823DD9D4;
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823dd9d4
	if (!ctx.cr6.eq) goto loc_823DD9D4;
	// rlwimi r11,r30,6,0,25
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 6) & 0xFFFFFFC0) | (ctx.r11.u64 & 0xFFFFFFFF0000003F);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// bne 0x823dd960
	if (!ctx.cr0.eq) goto loc_823DD960;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_823DD9D4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_823E8620) {
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
	ctx.lr = 0x823E8628;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// li r25,-1
	r25.s64 = -1;
	// and r10,r6,r5
	ctx.r10.u64 = ctx.r6.u64 & ctx.r5.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// subfc r11,r10,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r10.u32;
	ctx.r11.u64 = ctx.r4.u64 - ctx.r10.u64;
	// subfze r9,r25
	temp.u8 = ~r25.u32 + ctx.xer.ca < ~r25.u32;
	ctx.r9.u64 = ~r25.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// neg r28,r9
	r28.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// and r8,r28,r10
	ctx.r8.u64 = r28.u64 & ctx.r10.u64;
	// subf. r27,r8,r4
	r27.u64 = ctx.r4.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x823e86c8
	if (ctx.cr0.eq) goto loc_823E86C8;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// li r30,0
	r30.s64 = 0;
	// addi r31,r11,-1
	r31.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e9178
	ctx.lr = 0x823E8684;
	sub_823E9178(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// slw r11,r10,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
loc_823E8694:
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bgt cr6,0x823e86b0
	if (ctx.cr6.gt) goto loc_823E86B0;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// subf r31,r10,r31
	r31.u64 = r31.u64 - ctx.r10.u64;
loc_823E86B0:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// bge 0x823e8694
	if (!ctx.cr0.lt) goto loc_823E8694;
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x823e86cc
	goto loc_823E86CC;
loc_823E86C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823E86CC:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mullw r9,r7,r11
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r5,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r5.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subfe r9,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r6,r3
	ctx.r7.u64 = ctx.r6.u64 & ctx.r3.u64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subf r5,r7,r27
	ctx.r5.u64 = r27.u64 - ctx.r7.u64;
	// and r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 & ctx.r8.u64;
	// subf r9,r11,r26
	ctx.r9.u64 = r26.u64 - ctx.r11.u64;
	// subfc r10,r6,r5
	ctx.xer.ca = ctx.r5.u32 >= ctx.r6.u32;
	ctx.r10.u64 = ctx.r5.u64 - ctx.r6.u64;
	// add r4,r9,r28
	ctx.r4.u64 = ctx.r9.u64 + r28.u64;
	// subfze r3,r25
	temp.u8 = ~r25.u32 + ctx.xer.ca < ~r25.u32;
	ctx.r3.u64 = ~r25.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// xor r10,r4,r28
	ctx.r10.u64 = ctx.r4.u64 ^ r28.u64;
	// neg r7,r3
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// and r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 & ctx.r6.u64;
	// subf r9,r6,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r6.u64;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// rlwinm r10,r5,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// subfic r4,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r4.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subfe r6,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// subf r8,r10,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r10.u64;
	// and r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ctx.r5.u64;
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// subf r11,r9,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r9.u64;
	// xor r9,r3,r7
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r9.u32);
	// xor r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// stw r7,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_823EDBB8) {
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
	ctx.lr = 0x823EDBC0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bge cr6,0x823edbf0
	if (!ctx.cr6.lt) goto loc_823EDBF0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f03b8
	ctx.lr = 0x823EDBEC;
	sub_823F03B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_823EDBF0:
	// lis r4,9347
	ctx.r4.s64 = 612564992;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f02b8
	ctx.lr = 0x823EDBFC;
	sub_823F02B8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x823edc10
	if (!ctx.cr0.eq) goto loc_823EDC10;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823edc44
	goto loc_823EDC44;
loc_823EDC10:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(r31.u32, 2, ctx.xer);
	// bge cr6,0x823edc30
	if (!ctx.cr6.lt) goto loc_823EDC30;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f0370
	ctx.lr = 0x823EDC2C;
	sub_823F0370(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_823EDC30:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_823EDC44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823EF900) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2184(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2184);
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EFB90) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r30,16
	r30.s64 = 1048576;
	// lwz r11,2172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2172);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823efbe8
	if (ctx.cr6.eq) goto loc_823EFBE8;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,88(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// ori r4,r4,1025
	ctx.r4.u64 = ctx.r4.u64 | 1025;
	// bl 0x82793b14
	ctx.lr = 0x823EFBCC;
	__imp__RtlImageXexHeaderField(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823efbe8
	if (ctx.cr0.eq) goto loc_823EFBE8;
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823efbe8
	if (!ctx.cr6.eq) goto loc_823EFBE8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823efc4c
	goto loc_823EFC4C;
loc_823EFBE8:
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823EFBF8:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x823efbf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EFBF8;
	// lis r31,-32106
	r31.s64 = -2104098816;
	// li r11,48
	ctx.r11.s64 = 48;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,13400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13400);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823efc38
	if (!ctx.cr6.eq) goto loc_823EFC38;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823f3150
	ctx.lr = 0x823EFC34;
	sub_823F3150(ctx, base);
	// stw r3,13400(r31)
	REX_STORE_U32(r31.u32 + 13400, ctx.r3.u32);
loc_823EFC38:
	// bl 0x823f18b0
	ctx.lr = 0x823EFC3C;
	sub_823F18B0(ctx, base);
	// lwz r11,13400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13400);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_823EFC4C:
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

DEFINE_REX_FUNC(sub_823F5C30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823F5C38;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r7,11020(r3)
	REX_STORE_U32(ctx.r3.u32 + 11020, ctx.r7.u32);
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r5,11012(r3)
	REX_STORE_U32(ctx.r3.u32 + 11012, ctx.r5.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,11016(r31)
	REX_STORE_U32(r31.u32 + 11016, ctx.r11.u32);
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// bl 0x82793a44
	ctx.lr = 0x823F5C64;
	__imp__MmQueryAddressProtect(ctx, base);
	// rlwinm r11,r3,0,21,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x600;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,12260(r31)
	REX_STORE_U8(r31.u32 + 12260, ctx.r11.u8);
	// bl 0x823f82b8
	ctx.lr = 0x823F5C7C;
	sub_823F82B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f7fe8
	ctx.lr = 0x823F5C88;
	sub_823F7FE8(ctx, base);
	// lwz r10,11972(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 11972);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,11972(r31)
	REX_STORE_U32(r31.u32 + 11972, ctx.r10.u32);
	// bge 0x823f5cac
	if (!ctx.cr0.lt) goto loc_823F5CAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x823f5cc0
	goto loc_823F5CC0;
loc_823F5CAC:
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,11024(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 11024);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,11024(r31)
	REX_STORE_U32(r31.u32 + 11024, ctx.r11.u32);
loc_823F5CC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823FAF90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823FAF98;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,257
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 257, ctx.xer);
	// bge cr6,0x823fafe8
	if (!ctx.cr6.lt) goto loc_823FAFE8;
	// subfic r5,r4,257
	ctx.xer.ca = ctx.r4.u32 <= 257;
	ctx.r5.u64 = static_cast<uint64_t>(257) - ctx.r4.u64;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r31.s32, ctx.xer);
	// blt cr6,0x823fafc0
	if (ctx.cr6.lt) goto loc_823FAFC0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_823FAFC0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823fa7f0
	ctx.lr = 0x823FAFCC;
	sub_823FA7F0(ctx, base);
	// subf r11,r3,r30
	ctx.r11.u64 = r30.u64 - ctx.r3.u64;
	// stw r3,11960(r29)
	REX_STORE_U32(r29.u32 + 11960, ctx.r3.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// add. r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bgt 0x823fafe8
	if (ctx.cr0.gt) goto loc_823FAFE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x823faff8
	goto loc_823FAFF8;
loc_823FAFE8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823fab68
	ctx.lr = 0x823FAFF8;
	sub_823FAB68(ctx, base);
loc_823FAFF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823FC458) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823FC460;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f3,-80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// vspltisw128 v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// stfs f1,-64(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// addi r8,r1,-48
	ctx.r8.s64 = ctx.r1.s64 + -48;
	// stfs f2,-48(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// lvsr v0,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f0,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// vupkd3d128 v59,v60,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v60.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v60.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v59 = vTemp;
	// stfs f0,-76(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// vor128 v62,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// stfs f0,-72(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// vor128 v61,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// stfs f0,-68(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// lvx128 v58,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,12
	ctx.r6.s64 = 12;
	// stfs f0,-60(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stfs f0,-56(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// stfs f0,-52(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// li r10,24
	ctx.r10.s64 = 24;
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v63,v60,7,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 228), 7));
	// stfs f0,-44(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// vpermwi128 v60,v59,171
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x54));
	// stfs f0,-40(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stfs f0,-36(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// vrlimi128 v61,v58,2,2
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v58.f32), 78), 2));
	// lvx128 v59,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v62,v59,4,3
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v59.f32), 57), 4));
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvewx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// vperm128 v61,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvewx128 v63,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r9,28
	ctx.r9.s64 = 28;
	// stvewx128 v63,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r8,32
	ctx.r8.s64 = 32;
	// stvewx128 v63,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r31,36
	r31.s64 = 36;
	// vperm128 v60,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r30,40
	r30.s64 = 40;
	// li r29,44
	r29.s64 = 44;
	// stvewx128 v62,r3,r5
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// li r7,48
	ctx.r7.s64 = 48;
	// stvewx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// li r11,52
	ctx.r11.s64 = 52;
	// stvewx128 v62,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// li r6,56
	ctx.r6.s64 = 56;
	// stvewx128 v62,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// li r10,60
	ctx.r10.s64 = 60;
	// stvewx128 v61,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r3,r29
	ea = (ctx.r3.u32 + r29.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82409278) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x823f02b8
	ctx.lr = 0x824092A0;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// bne 0x824092b8
	if (!ctx.cr0.eq) goto loc_824092B8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824093dc
	goto loc_824093DC;
loc_824092B8:
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82409394
	if (ctx.cr6.eq) goto loc_82409394;
	// li r9,256
	ctx.r9.s64 = 256;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,20328(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20328);
	ctx.f0.f64 = double(temp.f32);
loc_824092DC:
	// lwz r9,80(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 80);
	// lwz r8,56(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lbzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f13,r10,r8
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// lwz r9,80(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 80);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r9,1(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r8,56(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 56);
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r8,80(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 80);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r8,2(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// std r8,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r8,80(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 80);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r8,3(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 3);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,12(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// bdnz 0x824092dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824092DC;
	// b 0x824093d8
	goto loc_824093D8;
loc_82409394:
	// li r10,256
	ctx.r10.s64 = 256;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
loc_824093A4:
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x824093a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824093A4;
loc_824093D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824093DC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

DEFINE_REX_FUNC(sub_82410EB8) {
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
	// bge cr6,0x82410f88
	if (!ctx.cr6.lt) goto loc_82410F88;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f0,20244(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20244);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
loc_82410F1C:
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
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
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r10,r10,28,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF;
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
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x82410f1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82410F1C;
loc_82410F88:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82410fa4
	if (ctx.cr6.eq) goto loc_82410FA4;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c73b8
	ctx.lr = 0x82410FA4;
	sub_825C73B8(ctx, base);
loc_82410FA4:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82410fc0
	if (ctx.cr6.eq) goto loc_82410FC0;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82409820
	ctx.lr = 0x82410FC0;
	sub_82409820(ctx, base);
loc_82410FC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82414870) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82414878;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824148ac
	if (ctx.cr6.eq) goto loc_824148AC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x824148ac
	if (!ctx.cr6.eq) goto loc_824148AC;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x824148ec
	goto loc_824148EC;
loc_824148AC:
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r6,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r6.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82414588
	ctx.lr = 0x824148C4;
	sub_82414588(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824148ec
	if (ctx.cr0.lt) goto loc_824148EC;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// lwz r5,88(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 88);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824199a8
	ctx.lr = 0x824148EC;
	sub_824199A8(ctx, base);
loc_824148EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82416810) {
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
	// addi r30,r3,640
	r30.s64 = ctx.r3.s64 + 640;
	// lwz r4,672(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 672);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,632(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8241b778
	ctx.lr = 0x8241683C;
	sub_8241B778(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824168ec
	if (ctx.cr0.lt) goto loc_824168EC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82416858
	if (ctx.cr6.eq) goto loc_82416858;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x824168cc
	if (!ctx.cr6.eq) goto loc_824168CC;
loc_82416858:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x823f02b8
	ctx.lr = 0x82416864;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82416884
	if (ctx.cr0.eq) goto loc_82416884;
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 68);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,648(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 648);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x82416888
	goto loc_82416888;
loc_82416884:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82416888:
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824168a0
	if (!ctx.cr6.eq) goto loc_824168A0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824168ec
	goto loc_824168EC;
loc_824168A0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,672(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 672);
	// lwz r3,632(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 632);
	// bl 0x8241b778
	ctx.lr = 0x824168B0;
	sub_8241B778(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824168ec
	if (ctx.cr0.lt) goto loc_824168EC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x824168e8
	if (ctx.cr6.eq) goto loc_824168E8;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x824168e8
	if (ctx.cr6.eq) goto loc_824168E8;
loc_824168CC:
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x824168e8
	if (ctx.cr6.eq) goto loc_824168E8;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x824168e8
	if (ctx.cr6.eq) goto loc_824168E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,632(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 632);
	// bl 0x8241ab70
	ctx.lr = 0x824168E8;
	sub_8241AB70(ctx, base);
loc_824168E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824168EC:
	// li r11,1
	ctx.r11.s64 = 1;
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

DEFINE_REX_FUNC(sub_8241C688) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8241C690;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82400810
	ctx.lr = 0x8241C6A8;
	sub_82400810(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8241c6c8
	if (ctx.cr0.lt) goto loc_8241C6C8;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8241C6C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_8241C6C8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82420990) {
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
	// addi r30,r3,16
	r30.s64 = ctx.r3.s64 + 16;
loc_824209AC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82418988
	ctx.lr = 0x824209B8;
	sub_82418988(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x824209d4
	if (!ctx.cr0.lt) goto loc_824209D4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
loc_824209CC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82420b18
	goto loc_82420B18;
loc_824209D4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x82420b14
	if (ctx.cr6.gt) goto loc_82420B14;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,-29448
	ctx.r12.s64 = ctx.r12.s64 + -29448;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32190
	ctx.r12.s64 = -2109603840;
	// nop 
	// addi r12,r12,2476
	ctx.r12.s64 = ctx.r12.s64 + 2476;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82420B14;
	case 1:
		goto loc_82420A08;
	case 2:
		goto loc_82420A1C;
	case 3:
		goto loc_82420A1C;
	case 4:
		goto loc_82420A1C;
	case 5:
		goto loc_82420A24;
	case 6:
		goto loc_82420A24;
	case 7:
		goto loc_82420A24;
	case 8:
		goto loc_82420A24;
	case 9:
		goto loc_82420A2C;
	case 10:
		goto loc_82420B14;
	case 11:
		goto loc_82420B14;
	case 12:
		goto loc_824209AC;
	case 13:
		goto loc_824209CC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82420A08:
	// lbz r11,25(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 25);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82420b14
	if (!ctx.cr0.eq) goto loc_82420B14;
	// lbz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + 24);
	// b 0x82420b18
	goto loc_82420B18;
loc_82420A1C:
	// li r3,270
	ctx.r3.s64 = 270;
	// b 0x82420b18
	goto loc_82420B18;
loc_82420A24:
	// li r3,271
	ctx.r3.s64 = 271;
	// b 0x82420b18
	goto loc_82420B18;
loc_82420A2C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r10,r11,-26520
	ctx.r10.s64 = ctx.r11.s64 + -26520;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82420A3C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x82420a60
	if (ctx.cr0.eq) goto loc_82420A60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82420a3c
	if (ctx.cr6.eq) goto loc_82420A3C;
loc_82420A60:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82420a70
	if (!ctx.cr0.eq) goto loc_82420A70;
	// li r3,257
	ctx.r3.s64 = 257;
	// b 0x82420b18
	goto loc_82420B18;
loc_82420A70:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,19332
	ctx.r10.s64 = ctx.r10.s64 + 19332;
loc_82420A7C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x82420aa0
	if (ctx.cr0.eq) goto loc_82420AA0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82420a7c
	if (ctx.cr6.eq) goto loc_82420A7C;
loc_82420AA0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82420ab0
	if (!ctx.cr0.eq) goto loc_82420AB0;
	// li r3,273
	ctx.r3.s64 = 273;
	// b 0x82420b18
	goto loc_82420B18;
loc_82420AB0:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,19324
	ctx.r10.s64 = ctx.r10.s64 + 19324;
loc_82420ABC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82420ae0
	if (ctx.cr0.eq) goto loc_82420AE0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82420abc
	if (ctx.cr6.eq) goto loc_82420ABC;
loc_82420AE0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82420af0
	if (!ctx.cr0.eq) goto loc_82420AF0;
	// li r3,274
	ctx.r3.s64 = 274;
	// b 0x82420b18
	goto loc_82420B18;
loc_82420AF0:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82420b0c
	if (ctx.cr6.eq) goto loc_82420B0C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241f6d8
	ctx.lr = 0x82420B08;
	sub_8241F6D8(ctx, base);
	// b 0x82420b18
	goto loc_82420B18;
loc_82420B0C:
	// li r3,269
	ctx.r3.s64 = 269;
	// b 0x82420b18
	goto loc_82420B18;
loc_82420B14:
	// li r3,272
	ctx.r3.s64 = 272;
loc_82420B18:
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

DEFINE_REX_FUNC(sub_824395E8) {
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
	ctx.lr = 0x824395F0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,24(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
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
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lhz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82439980
	if (ctx.cr6.lt) goto loc_82439980;
	// beq cr6,0x824398f0
	if (ctx.cr6.eq) goto loc_824398F0;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x82439838
	if (ctx.cr6.lt) goto loc_82439838;
	// beq cr6,0x824396dc
	if (ctx.cr6.eq) goto loc_824396DC;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x82439640
	if (ctx.cr6.eq) goto loc_82439640;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x82439b54
	goto loc_82439B54;
loc_82439640:
	// lwz r10,52(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 52);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 8);
	// divwu r28,r9,r10
	r28.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82439660
	if (!ctx.cr6.gt) goto loc_82439660;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_82439660:
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824396d4
	if (ctx.cr6.eq) goto loc_824396D4;
loc_8243966C:
	// lhz r11,10(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 10);
	// li r29,0
	r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824396c8
	if (ctx.cr0.eq) goto loc_824396C8;
	// li r30,0
	r30.s64 = 0;
loc_82439680:
	// lwz r11,56(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 56);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwzx r31,r11,r30
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,48(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x82438da8
	ctx.lr = 0x824396A0;
	sub_82438DA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82439b54
	if (ctx.cr0.lt) goto loc_82439B54;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lhz r10,10(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 10);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
	// blt cr6,0x82439680
	if (ctx.cr6.lt) goto loc_82439680;
loc_824396C8:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(r27.u32, r28.u32, ctx.xer);
	// blt cr6,0x8243966c
	if (ctx.cr6.lt) goto loc_8243966C;
loc_824396D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82439b54
	goto loc_82439B54;
loc_824396DC:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x824396f0
	if (!ctx.cr6.gt) goto loc_824396F0;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_824396F0:
	// lhz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 4);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x824397ac
	if (!ctx.cr6.eq) goto loc_824397AC;
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x824397ac
	if (!ctx.cr6.eq) goto loc_824397AC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82439978
	if (ctx.cr6.eq) goto loc_82439978;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r11,r5,32
	ctx.r11.s64 = ctx.r5.s64 + 32;
	// subf r9,r5,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r5.u64;
loc_82439720:
	// lfs f0,-32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,-16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f0,-28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f0,-12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lfs f0,-24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// lfs f0,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// lfs f0,-20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 52, temp.u32);
	// lfs f0,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 60, temp.u32);
	// lfs f0,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stfsu f0,64(r10)
	ea = 64 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82439720
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82439720;
	// b 0x82439978
	goto loc_82439978;
loc_824397AC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82439978
	if (ctx.cr6.eq) goto loc_82439978;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r6,-4
	ctx.r7.s64 = ctx.r6.s64 + -4;
loc_824397C0:
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8243982c
	if (ctx.cr0.eq) goto loc_8243982C;
loc_824397D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8243981c
	if (ctx.cr6.eq) goto loc_8243981C;
loc_824397DC:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82439804
	if (ctx.cr6.gt) goto loc_82439804;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bgt cr6,0x82439804
	if (ctx.cr6.gt) goto loc_82439804;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// b 0x82439808
	goto loc_82439808;
loc_82439804:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82439808:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// lhz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824397dc
	if (ctx.cr6.lt) goto loc_824397DC;
loc_8243981C:
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824397d0
	if (ctx.cr6.lt) goto loc_824397D0;
loc_8243982C:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x824397c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824397C0;
	// b 0x82439978
	goto loc_82439978;
loc_82439838:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8243984c
	if (!ctx.cr6.gt) goto loc_8243984C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_8243984C:
	// lhz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 4);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82439864
	if (!ctx.cr6.eq) goto loc_82439864;
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x82439994
	if (ctx.cr6.eq) goto loc_82439994;
loc_82439864:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82439978
	if (ctx.cr6.eq) goto loc_82439978;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r7,r6,-4
	ctx.r7.s64 = ctx.r6.s64 + -4;
loc_82439878:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824398e4
	if (ctx.cr6.eq) goto loc_824398E4;
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
loc_82439888:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824398d4
	if (ctx.cr6.eq) goto loc_824398D4;
loc_82439894:
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bgt cr6,0x824398bc
	if (ctx.cr6.gt) goto loc_824398BC;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x824398bc
	if (ctx.cr6.gt) goto loc_824398BC;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// b 0x824398c0
	goto loc_824398C0;
loc_824398BC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_824398C0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82439894
	if (ctx.cr6.lt) goto loc_82439894;
loc_824398D4:
	// lhz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82439888
	if (ctx.cr6.lt) goto loc_82439888;
loc_824398E4:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82439878
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82439878;
	// b 0x82439978
	goto loc_82439978;
loc_824398F0:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82439904
	if (!ctx.cr6.gt) goto loc_82439904;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_82439904:
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x82439994
	if (ctx.cr6.eq) goto loc_82439994;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82439978
	if (ctx.cr6.eq) goto loc_82439978;
	// addi r7,r6,-4
	ctx.r7.s64 = ctx.r6.s64 + -4;
loc_82439920:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8243996c
	if (ctx.cr6.eq) goto loc_8243996C;
loc_8243992C:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x8243993c
	if (!ctx.cr6.gt) goto loc_8243993C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82439958
	goto loc_82439958;
loc_8243993C:
	// clrlwi r10,r8,30
	ctx.r10.u64 = ctx.r8.u32 & 0x3;
	// rlwinm r9,r8,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
loc_82439958:
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8243992c
	if (ctx.cr6.lt) goto loc_8243992C;
loc_8243996C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82439920
	if (ctx.cr6.lt) goto loc_82439920;
loc_82439978:
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// b 0x82439994
	goto loc_82439994;
loc_82439980:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82439994
	if (!ctx.cr6.gt) goto loc_82439994;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_82439994:
	// lhz r10,2(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 2);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x82439a24
	if (ctx.cr6.eq) goto loc_82439A24;
	// lwz r11,52(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 52);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// beq cr6,0x824399e4
	if (ctx.cr6.eq) goto loc_824399E4;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82439a20
	if (!ctx.cr6.eq) goto loc_82439A20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82439a20
	if (ctx.cr6.eq) goto loc_82439A20;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// subf r11,r6,r26
	ctx.r11.u64 = r26.u64 - ctx.r6.u64;
loc_824399CC:
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
	// bdnz 0x824399cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824399CC;
	// b 0x82439a20
	goto loc_82439A20;
loc_824399E4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82439a20
	if (ctx.cr6.eq) goto loc_82439A20;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// subf r9,r6,r26
	ctx.r9.u64 = r26.u64 - ctx.r6.u64;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
loc_82439A00:
	// lfsx f13,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82439a14
	if (!ctx.cr6.eq) goto loc_82439A14;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82439A14:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82439a00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82439A00;
loc_82439A20:
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
loc_82439A24:
	// lhz r9,8(r24)
	ctx.r9.u64 = REX_LOAD_U16(r24.u32 + 8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82439b04
	if (ctx.cr0.eq) goto loc_82439B04;
	// lhz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82439a48
	if (ctx.cr6.eq) goto loc_82439A48;
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// lhz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 4);
	// b 0x82439a50
	goto loc_82439A50;
loc_82439A48:
	// lhz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 4);
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
loc_82439A50:
	// clrlwi. r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82439b04
	if (ctx.cr0.eq) goto loc_82439B04;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82439a6c
	if (!ctx.cr6.eq) goto loc_82439A6C;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r4,r9,-21408
	ctx.r4.s64 = ctx.r9.s64 + -21408;
	// b 0x82439a74
	goto loc_82439A74;
loc_82439A6C:
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r4,r9,-21424
	ctx.r4.s64 = ctx.r9.s64 + -21424;
loc_82439A74:
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// mullw. r8,r10,r3
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r7,r9,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// beq 0x82439b00
	if (ctx.cr0.eq) goto loc_82439B00;
	// mullw r9,r8,r7
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// mullw r5,r8,r11
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
loc_82439A8C:
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
	// ble cr6,0x82439ac8
	if (!ctx.cr6.gt) goto loc_82439AC8;
	// subf r31,r11,r7
	r31.u64 = ctx.r7.u64 - ctx.r11.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_82439AAC:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r31,r10,2,28,29
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// add r30,r10,r9
	r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r31,r4
	r31.u64 = REX_LOAD_U32(r31.u32 + ctx.r4.u32);
	// stwx r31,r30,r6
	REX_STORE_U32(r30.u32 + ctx.r6.u32, r31.u32);
	// bdnz 0x82439aac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82439AAC;
loc_82439AC8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82439af8
	if (ctx.cr6.eq) goto loc_82439AF8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82439AD8:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r31,r10,r5
	r31.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r30,r10,r9
	r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r31,r26
	r31.u64 = REX_LOAD_U32(r31.u32 + r26.u32);
	// stwx r31,r30,r6
	REX_STORE_U32(r30.u32 + ctx.r6.u32, r31.u32);
	// bdnz 0x82439ad8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82439AD8;
loc_82439AF8:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82439a8c
	if (!ctx.cr6.eq) goto loc_82439A8C;
loc_82439B00:
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
loc_82439B04:
	// lwz r10,44(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 44);
	// lhz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 12);
	// mullw r7,r10,r3
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82439b1c
	if (!ctx.cr6.gt) goto loc_82439B1C;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82439B1C:
	// lwz r10,28(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82439b34
	if (!ctx.cr6.eq) goto loc_82439B34;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82439b54
	goto loc_82439B54;
loc_82439B34:
	// lhz r11,10(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 10);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + r22.u64;
	// bctrl 
	ctx.lr = 0x82439B4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_82439B54:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8245EF08) {
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
	ctx.lr = 0x8245EF10;
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// lwz r24,0(r4)
	r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r22,0
	r22.s64 = 0;
	// rlwinm r11,r24,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xFFF00000;
	// lis r30,20480
	r30.s64 = 1342177280;
	// std r22,0(r31)
	REX_STORE_U64(r31.u32 + 0, r22.u64);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// std r22,8(r31)
	REX_STORE_U64(r31.u32 + 8, r22.u64);
	// beq cr6,0x8245f0b0
	if (ctx.cr6.eq) goto loc_8245F0B0;
	// lis r31,28800
	r31.s64 = 1887436800;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// beq cr6,0x8245f0b0
	if (ctx.cr6.eq) goto loc_8245F0B0;
	// mr r21,r22
	r21.u64 = r22.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8245f038
	if (ctx.cr6.eq) goto loc_8245F038;
	// lwz r25,20(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// subf r23,r7,r5
	r23.u64 = ctx.r5.u64 - ctx.r7.u64;
loc_8245EF58:
	// lwzx r11,r23,r27
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + r27.u32);
	// mr r26,r22
	r26.u64 = r22.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r11,r25
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// beq cr6,0x8245ef80
	if (ctx.cr6.eq) goto loc_8245EF80;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x8245f028
	if (!ctx.cr6.lt) goto loc_8245F028;
	// b 0x8245ef84
	goto loc_8245EF84;
loc_8245EF80:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_8245EF84:
	// lwz r29,12(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r22
	r31.u64 = r22.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8245f14c
	if (ctx.cr6.eq) goto loc_8245F14C;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_8245EF9C:
	// lwz r3,16(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwzx r20,r30,r5
	r20.u64 = REX_LOAD_U32(r30.u32 + ctx.r5.u32);
	// lwzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmplw cr6,r20,r3
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8245efbc
	if (!ctx.cr6.eq) goto loc_8245EFBC;
	// lwz r3,60(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 60);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8245eff8
	if (ctx.cr6.eq) goto loc_8245EFF8;
loc_8245EFBC:
	// lwz r20,16(r4)
	r20.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r3,56(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 56);
	// lwzx r20,r20,r11
	r20.u64 = REX_LOAD_U32(r20.u32 + ctx.r11.u32);
	// cmplw cr6,r3,r20
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r20.u32, ctx.xer);
	// bne cr6,0x8245f010
	if (!ctx.cr6.eq) goto loc_8245F010;
	// lwz r20,60(r28)
	r20.u64 = REX_LOAD_U32(r28.u32 + 60);
	// cmplw cr6,r20,r9
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8245f010
	if (!ctx.cr6.eq) goto loc_8245F010;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8245f010
	if (ctx.cr6.eq) goto loc_8245F010;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r25
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + r25.u32);
	// lwz r3,60(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8245f010
	if (!ctx.cr6.eq) goto loc_8245F010;
loc_8245EFF8:
	// addi r3,r1,-128
	ctx.r3.s64 = ctx.r1.s64 + -128;
	// addi r20,r1,-144
	r20.s64 = ctx.r1.s64 + -144;
	// li r19,1
	r19.s64 = 1;
	// li r26,1
	r26.s64 = 1;
	// stwx r31,r30,r3
	REX_STORE_U32(r30.u32 + ctx.r3.u32, r31.u32);
	// stwx r19,r11,r20
	REX_STORE_U32(ctx.r11.u32 + r20.u32, r19.u32);
loc_8245F010:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// blt cr6,0x8245ef9c
	if (ctx.cr6.lt) goto loc_8245EF9C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x8245f14c
	if (ctx.cr6.eq) goto loc_8245F14C;
loc_8245F028:
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r21,r6
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8245ef58
	if (ctx.cr6.lt) goto loc_8245EF58;
loc_8245F038:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8245f06c
	if (!ctx.cr6.eq) goto loc_8245F06C;
	// clrlwi. r10,r24,12
	ctx.r10.u64 = r24.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// beq 0x8245f06c
	if (ctx.cr0.eq) goto loc_8245F06C;
	// addi r9,r1,-144
	ctx.r9.s64 = ctx.r1.s64 + -144;
loc_8245F050:
	// lwz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8245f14c
	if (ctx.cr6.eq) goto loc_8245F14C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8245f050
	if (ctx.cr6.lt) goto loc_8245F050;
loc_8245F06C:
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// subf r9,r8,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8245F07C:
	// lwzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x8245f098
	if (!ctx.cr6.lt) goto loc_8245F098;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-128
	ctx.r8.s64 = ctx.r1.s64 + -128;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// b 0x8245f09c
	goto loc_8245F09C;
loc_8245F098:
	// li r10,255
	ctx.r10.s64 = 255;
loc_8245F09C:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8245f07c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8245F07C;
loc_8245F0A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8245F0AC:
	// b 0x826a1ce4
	return;
loc_8245F0B0:
	// li r11,4
	ctx.r11.s64 = 4;
	// clrlwi r7,r24,12
	ctx.r7.u64 = r24.u32 & 0xFFFFF;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8245F0C0:
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8245f0d0
	if (!ctx.cr6.lt) goto loc_8245F0D0;
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// b 0x8245f0d8
	goto loc_8245F0D8;
loc_8245F0D0:
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_8245F0D8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x8245f0c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8245F0C0;
	// mr r31,r22
	r31.u64 = r22.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8245f0a8
	if (ctx.cr6.eq) goto loc_8245F0A8;
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
loc_8245F100:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// lwzx r10,r5,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// bne cr6,0x8245f120
	if (!ctx.cr6.eq) goto loc_8245F120;
	// lwz r5,60(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8245f138
	if (ctx.cr6.eq) goto loc_8245F138;
loc_8245F120:
	// lwz r5,56(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8245f14c
	if (!ctx.cr6.eq) goto loc_8245F14C;
	// lwz r10,60(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8245f14c
	if (!ctx.cr6.eq) goto loc_8245F14C;
loc_8245F138:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r31,r6
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8245f100
	if (ctx.cr6.lt) goto loc_8245F100;
	// b 0x8245f0a8
	goto loc_8245F0A8;
loc_8245F14C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8245f0ac
	goto loc_8245F0AC;
}

DEFINE_REX_FUNC(sub_824726F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82472700;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,260(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,12(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r29,16(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r28,r11,12
	r28.u64 = ctx.r11.u32 & 0xFFFFF;
	// bl 0x82477448
	ctx.lr = 0x82472728;
	sub_82477448(ctx, base);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 260);
	// bl 0x82477448
	ctx.lr = 0x82472738;
	sub_82477448(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,116(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r4,95
	ctx.r4.s64 = 95;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82471828
	ctx.lr = 0x82472770;
	sub_82471828(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82474660) {
	REX_FUNC_PROLOGUE();
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82473f80
	sub_82473F80(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82474750) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82473e60
	sub_82473E60(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824748F0) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x824690e0
	ctx.lr = 0x82474914;
	sub_824690E0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// stw r30,348(r31)
	REX_STORE_U32(r31.u32 + 348, r30.u32);
	// addi r11,r11,29608
	ctx.r11.s64 = ctx.r11.s64 + 29608;
	// lis r9,-32128
	ctx.r9.s64 = -2105540608;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-25960
	ctx.r10.s64 = ctx.r10.s64 + -25960;
	// addi r9,r9,-25384
	ctx.r9.s64 = ctx.r9.s64 + -25384;
	// addi r11,r8,-24696
	ctx.r11.s64 = ctx.r8.s64 + -24696;
	// stw r10,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r10.u32);
	// stw r9,248(r31)
	REX_STORE_U32(r31.u32 + 248, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,252(r31)
	REX_STORE_U32(r31.u32 + 252, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82477448) {
	REX_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r3,r10,12
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFFF;
	// mullw r10,r3,r4
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82477480
	if (!ctx.cr6.gt) goto loc_82477480;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82477478
	if (ctx.cr6.eq) goto loc_82477478;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82477478:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82477480:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824782F0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,30452
	ctx.r10.s64 = ctx.r10.s64 + 30452;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82478CE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82478CE8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,104(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 104);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r9,24(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
loc_82478D04:
	// lbz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82478d24
	if (ctx.cr0.eq) goto loc_82478D24;
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x82478d04
	if (!ctx.cr0.eq) goto loc_82478D04;
loc_82478D24:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82478d30
	if (!ctx.cr6.eq) goto loc_82478D30;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82478D30:
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r31,0
	r31.s64 = 0;
	// lwz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r31.u8);
	// addi r6,r10,30464
	ctx.r6.s64 = ctx.r10.s64 + 30464;
	// lwzx r11,r9,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82478d64
	if (ctx.cr0.eq) goto loc_82478D64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,30456
	ctx.r6.s64 = ctx.r11.s64 + 30456;
loc_82478D64:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,30472
	ctx.r5.s64 = ctx.r11.s64 + 30472;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82404168
	ctx.lr = 0x82478D7C;
	sub_82404168(ctx, base);
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r31,-1(r11)
	REX_STORE_U8(ctx.r11.u32 + -1, r31.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8247CFC0) {
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
	// lwz r3,208(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// addi r11,r11,30492
	ctx.r11.s64 = ctx.r11.s64 + 30492;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x823f0350
	ctx.lr = 0x8247CFEC;
	sub_823F0350(ctx, base);
	// lwz r3,228(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 228);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247d00c
	if (ctx.cr6.eq) goto loc_8247D00C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247D00C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8247D00C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82478a18
	ctx.lr = 0x8247D014;
	sub_82478A18(ctx, base);
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

DEFINE_REX_FUNC(sub_82481B58) {
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
	ctx.lr = 0x82481B60;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82481b7c
	if (!ctx.cr6.eq) goto loc_82481B7C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82481e4c
	goto loc_82481E4C;
loc_82481B7C:
	// li r29,0
	r29.s64 = 0;
	// stw r4,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r4.u32);
	// stw r5,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r5.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r6,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r6.u32);
	// li r30,-1
	r30.s64 = -1;
	// stw r7,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r7.u32);
	// addi r4,r11,17996
	ctx.r4.s64 = ctx.r11.s64 + 17996;
	// stw r29,212(r31)
	REX_STORE_U32(r31.u32 + 212, r29.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r29,216(r31)
	REX_STORE_U32(r31.u32 + 216, r29.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r29,220(r31)
	REX_STORE_U32(r31.u32 + 220, r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824786b8
	ctx.lr = 0x82481BBC;
	sub_824786B8(ctx, base);
	// stw r3,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r11,25272
	ctx.r4.s64 = ctx.r11.s64 + 25272;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,785
	ctx.r5.s64 = 785;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824786b8
	ctx.lr = 0x82481BDC;
	sub_824786B8(ctx, base);
	// stw r3,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r28,r11,25328
	r28.s64 = ctx.r11.s64 + 25328;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,593
	ctx.r5.s64 = 593;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824786b8
	ctx.lr = 0x82481C00;
	sub_824786B8(ctx, base);
	// stw r3,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r11,25332
	ctx.r4.s64 = ctx.r11.s64 + 25332;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,81
	ctx.r5.s64 = 81;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824786b8
	ctx.lr = 0x82481C20;
	sub_824786B8(ctx, base);
	// stw r3,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r3.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r11,17980
	ctx.r4.s64 = ctx.r11.s64 + 17980;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,98
	ctx.r5.s64 = 98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824786b8
	ctx.lr = 0x82481C40;
	sub_824786B8(ctx, base);
	// stw r3,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r11,17984
	ctx.r4.s64 = ctx.r11.s64 + 17984;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824786b8
	ctx.lr = 0x82481C60;
	sub_824786B8(ctx, base);
	// stw r3,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r11,2736
	ctx.r4.s64 = ctx.r11.s64 + 2736;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824786b8
	ctx.lr = 0x82481C80;
	sub_824786B8(ctx, base);
	// stw r3,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r27,r11,25268
	r27.s64 = ctx.r11.s64 + 25268;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824786b8
	ctx.lr = 0x82481CA4;
	sub_824786B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r3.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r4,r11,25300
	ctx.r4.s64 = ctx.r11.s64 + 25300;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,721
	ctx.r5.s64 = 721;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824786b8
	ctx.lr = 0x82481CC4;
	sub_824786B8(ctx, base);
	// stw r3,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r26,r11,25304
	r26.s64 = ctx.r11.s64 + 25304;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r5,4099
	ctx.r5.s64 = 4099;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824786b8
	ctx.lr = 0x82481CE8;
	sub_824786B8(ctx, base);
	// stw r3,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r3.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,8785
	ctx.r5.s64 = 8785;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824786b8
	ctx.lr = 0x82481D04;
	sub_824786B8(ctx, base);
	// stw r3,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r3.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,16394
	ctx.r5.s64 = 16394;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824786b8
	ctx.lr = 0x82481D20;
	sub_824786B8(ctx, base);
	// stw r3,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r3.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r11,30556
	ctx.r4.s64 = ctx.r11.s64 + 30556;
	// li r7,4
	ctx.r7.s64 = 4;
	// ori r5,r5,49162
	ctx.r5.u64 = ctx.r5.u64 | 49162;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824786b8
	ctx.lr = 0x82481D44;
	sub_824786B8(ctx, base);
	// stw r3,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r3.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r4,r11,30552
	ctx.r4.s64 = ctx.r11.s64 + 30552;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,66
	ctx.r5.u64 = ctx.r5.u64 | 66;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824786b8
	ctx.lr = 0x82481D68;
	sub_824786B8(ctx, base);
	// stw r3,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r11,18000
	ctx.r4.s64 = ctx.r11.s64 + 18000;
	// li r7,4
	ctx.r7.s64 = 4;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824786b8
	ctx.lr = 0x82481D8C;
	sub_824786B8(ctx, base);
	// stw r3,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r3.u32);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// ori r5,r5,529
	ctx.r5.u64 = ctx.r5.u64 | 529;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824786b8
	ctx.lr = 0x82481DAC;
	sub_824786B8(ctx, base);
	// stw r3,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r3.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r11,30548
	ctx.r4.s64 = ctx.r11.s64 + 30548;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,8290
	ctx.r5.s64 = 8290;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824786b8
	ctx.lr = 0x82481DCC;
	sub_824786B8(ctx, base);
	// stw r3,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r3.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r5,4
	ctx.r5.s64 = 262144;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r4,r11,30544
	ctx.r4.s64 = ctx.r11.s64 + 30544;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// ori r5,r5,98
	ctx.r5.u64 = ctx.r5.u64 | 98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824786b8
	ctx.lr = 0x82481DF0;
	sub_824786B8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r3,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r3.u32);
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// beq cr6,0x82481e0c
	if (ctx.cr6.eq) goto loc_82481E0C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82481e4c
	goto loc_82481E4C;
loc_82481E0C:
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x826a2e60
	ctx.lr = 0x82481E1C;
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
	ctx.lr = 0x82481E30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82481e4c
	if (ctx.cr0.lt) goto loc_82481E4C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,208(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 208);
	// bl 0x823f0350
	ctx.lr = 0x82481E44;
	sub_823F0350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,208(r31)
	REX_STORE_U32(r31.u32 + 208, r29.u32);
loc_82481E4C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82499DD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82499DD8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82499f84
	if (ctx.cr6.eq) goto loc_82499F84;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// bne cr6,0x82499e0c
	if (!ctx.cr6.eq) goto loc_82499E0C;
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// b 0x82499f88
	goto loc_82499F88;
loc_82499E0C:
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x82499f84
	if (!ctx.cr6.eq) goto loc_82499F84;
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82499f84
	if (ctx.cr6.eq) goto loc_82499F84;
	// lwz r10,52(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 52);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x82499f84
	if (ctx.cr6.lt) goto loc_82499F84;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,4138
	ctx.r10.s64 = 271187968;
	// ori r10,r10,4352
	ctx.r10.u64 = ctx.r10.u64 | 4352;
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82499e58
	if (!ctx.cr6.eq) goto loc_82499E58;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82499e7c
	if (ctx.cr6.eq) goto loc_82499E7C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82499e74
	if (ctx.cr6.eq) goto loc_82499E74;
loc_82499E58:
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82499e7c
	if (ctx.cr6.eq) goto loc_82499E7C;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82499f84
	if (!ctx.cr6.eq) goto loc_82499F84;
loc_82499E74:
	// li r30,42
	r30.s64 = 42;
	// b 0x82499e80
	goto loc_82499E80;
loc_82499E7C:
	// li r30,43
	r30.s64 = 43;
loc_82499E80:
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82444750
	ctx.lr = 0x82499E88;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82499eb4
	if (ctx.cr0.eq) goto loc_82499EB4;
	// addi r9,r29,16
	ctx.r9.s64 = r29.s64 + 16;
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
	ctx.lr = 0x82499EAC;
	sub_824474C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82499eb8
	goto loc_82499EB8;
loc_82499EB4:
	// li r31,0
	r31.s64 = 0;
loc_82499EB8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82499f84
	if (ctx.cr6.eq) goto loc_82499F84;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x82499EC8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82499ef0
	if (ctx.cr0.eq) goto loc_82499EF0;
	// li r9,512
	ctx.r9.s64 = 512;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x824461c0
	ctx.lr = 0x82499EEC;
	sub_824461C0(ctx, base);
	// b 0x82499ef4
	goto loc_82499EF4;
loc_82499EF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82499EF4:
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82499f84
	if (ctx.cr6.eq) goto loc_82499F84;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82444750
	ctx.lr = 0x82499F08;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82499f28
	if (ctx.cr0.eq) goto loc_82499F28;
	// addi r7,r29,16
	ctx.r7.s64 = r29.s64 + 16;
	// lwz r6,52(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 52);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r5,48(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 48);
	// bl 0x824479b0
	ctx.lr = 0x82499F24;
	sub_824479B0(ctx, base);
	// b 0x82499f2c
	goto loc_82499F2C;
loc_82499F28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82499F2C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// beq cr6,0x82499f84
	if (ctx.cr6.eq) goto loc_82499F84;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x82499F40;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82499f60
	if (ctx.cr0.eq) goto loc_82499F60;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-17164
	ctx.r6.s64 = ctx.r11.s64 + -17164;
	// bl 0x82444918
	ctx.lr = 0x82499F5C;
	sub_82444918(ctx, base);
	// b 0x82499f64
	goto loc_82499F64;
loc_82499F60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82499F64:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82499f84
	if (ctx.cr6.eq) goto loc_82499F84;
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824974b0
	ctx.lr = 0x82499F7C;
	sub_824974B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82499f88
	goto loc_82499F88;
loc_82499F84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82499F88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824AAC18) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r10,200(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// lwz r6,112(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r5,204(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// li r9,8
	ctx.r9.s64 = 8;
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r7,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// stw r8,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
	// oris r11,r11,10394
	ctx.r11.u64 = ctx.r11.u64 | 681181184;
	// stw r10,268(r3)
	REX_STORE_U32(ctx.r3.u32 + 268, ctx.r10.u32);
	// li r31,1
	r31.s64 = 1;
	// stw r4,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// li r30,64
	r30.s64 = 64;
	// stw r9,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// ori r11,r11,18228
	ctx.r11.u64 = ctx.r11.u64 | 18228;
	// stw r31,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, r31.u32);
	// oris r6,r6,2048
	ctx.r6.u64 = ctx.r6.u64 | 134217728;
	// stw r30,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, r30.u32);
	// ori r5,r5,256
	ctx.r5.u64 = ctx.r5.u64 | 256;
	// stw r11,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r6,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r6.u32);
	// stw r5,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, ctx.r5.u32);
	// cmplwi cr6,r10,260
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 260, ctx.xer);
	// bne cr6,0x824aacc4
	if (!ctx.cr6.eq) goto loc_824AACC4;
	// lis r12,-4609
	ctx.r12.s64 = -302055424;
	// stw r9,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// stw r8,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r8.u32);
	// ori r12,r12,51071
	ctx.r12.u64 = ctx.r12.u64 | 51071;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// li r11,6
	ctx.r11.s64 = 6;
	// oris r10,r10,1029
	ctx.r10.u64 = ctx.r10.u64 | 67436544;
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r10,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// b 0x824aad00
	goto loc_824AAD00;
loc_824AACC4:
	// addi r9,r10,-257
	ctx.r9.s64 = ctx.r10.s64 + -257;
	// stw r7,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r7.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r10,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r10,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// stw r8,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r8.u32);
	// rlwimi r11,r9,13,18,18
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x2000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFDFFF);
	// rlwinm r11,r11,0,17,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFE7FFF;
	// rlwinm r11,r11,0,14,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// oris r11,r11,5120
	ctx.r11.u64 = ctx.r11.u64 | 335544320;
	// ori r11,r11,6274
	ctx.r11.u64 = ctx.r11.u64 | 6274;
	// stw r11,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
loc_824AAD00:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824B0138) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x824b0218
	if (!ctx.cr6.eq) goto loc_824B0218;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824b0374
	if (ctx.cr6.eq) goto loc_824B0374;
loc_824B0154:
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lis r9,4352
	ctx.r9.s64 = 285212672;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824b01fc
	if (ctx.cr6.eq) goto loc_824B01FC;
	// lis r9,29200
	ctx.r9.s64 = 1913651200;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824b01fc
	if (ctx.cr6.eq) goto loc_824B01FC;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r30,16(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r30.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// andi. r9,r9,2112
	ctx.r9.u64 = ctx.r9.u64 & 2112;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x824b01fc
	if (ctx.cr0.eq) goto loc_824B01FC;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x824b0210
	if (!ctx.cr6.lt) goto loc_824B0210;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824b0210
	if (!ctx.cr6.eq) goto loc_824B0210;
	// lwzx r9,r11,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x824b01dc
	if (!ctx.cr6.eq) goto loc_824B01DC;
	// stwx r8,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r8.u32);
	// b 0x824b01e4
	goto loc_824B01E4;
loc_824B01DC:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824b0210
	if (!ctx.cr6.eq) goto loc_824B0210;
loc_824B01E4:
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r10,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u32);
	// stw r9,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stwx r10,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u32);
loc_824B01FC:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x824b0154
	if (ctx.cr6.lt) goto loc_824B0154;
	// b 0x824b0374
	goto loc_824B0374;
loc_824B0210:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824b0378
	goto loc_824B0378;
loc_824B0218:
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x824b02d8
	if (!ctx.cr6.eq) goto loc_824B02D8;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824b0374
	if (ctx.cr6.eq) goto loc_824B0374;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
loc_824B0230:
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824b02c4
	if (ctx.cr6.eq) goto loc_824B02C4;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lis r10,4352
	ctx.r10.s64 = 285212672;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b02c4
	if (ctx.cr6.eq) goto loc_824B02C4;
	// lis r10,29200
	ctx.r10.s64 = 1913651200;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b02c4
	if (ctx.cr6.eq) goto loc_824B02C4;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// subf r6,r5,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r5.u64;
loc_824B0268:
	// lwzx r8,r6,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x824b0290
	if (!ctx.cr6.eq) goto loc_824B0290;
	// lwz r30,8(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r30.u32, ctx.xer);
	// beq cr6,0x824b02a0
	if (ctx.cr6.eq) goto loc_824B02A0;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x824b02a0
	if (ctx.cr6.eq) goto loc_824B02A0;
loc_824B0290:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// blt cr6,0x824b0268
	if (ctx.cr6.lt) goto loc_824B0268;
loc_824B02A0:
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// beq cr6,0x824b0210
	if (ctx.cr6.eq) goto loc_824B0210;
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r11,r10,r5
	REX_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r11.u32);
	// stwx r9,r10,r4
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r9.u32);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
loc_824B02C4:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x824b0230
	if (ctx.cr6.lt) goto loc_824B0230;
	// b 0x824b0374
	goto loc_824B0374;
loc_824B02D8:
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// bne cr6,0x824b0374
	if (!ctx.cr6.eq) goto loc_824B0374;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824b0374
	if (ctx.cr6.eq) goto loc_824B0374;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_824B02F0:
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824b0364
	if (ctx.cr6.eq) goto loc_824B0364;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lis r10,4352
	ctx.r10.s64 = 285212672;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b031c
	if (ctx.cr6.eq) goto loc_824B031C;
	// lis r10,29200
	ctx.r10.s64 = 1913651200;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824b0364
	if (!ctx.cr6.eq) goto loc_824B0364;
loc_824B031C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_824B0324:
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824b0340
	if (ctx.cr6.eq) goto loc_824B0340;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// blt cr6,0x824b0324
	if (ctx.cr6.lt) goto loc_824B0324;
loc_824B0340:
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x824b0210
	if (ctx.cr6.eq) goto loc_824B0210;
	// lwz r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stwx r10,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u32);
	// stwx r9,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u32);
	// stw r6,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
loc_824B0364:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x824b02f0
	if (ctx.cr6.lt) goto loc_824B02F0;
loc_824B0374:
	// li r3,1
	ctx.r3.s64 = 1;
loc_824B0378:
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C08B0) {
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
	ctx.lr = 0x824C08B8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// add r30,r5,r6
	r30.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// li r28,22
	r28.s64 = 22;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x824c08f8
	if (ctx.cr6.gt) goto loc_824C08F8;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x824c08f8
	if (ctx.cr6.gt) goto loc_824C08F8;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c0914
	if (!ctx.cr6.eq) goto loc_824C0914;
loc_824C08F8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r28,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r28.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824C0914;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824C0914:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c0930
	if (ctx.cr6.lt) goto loc_824C0930;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824c09bc
	if (!ctx.cr6.gt) goto loc_824C09BC;
loc_824C0930:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824c095c
	if (!ctx.cr6.eq) goto loc_824C095C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r10,69
	ctx.r10.s64 = 69;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824C095C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824C095C:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824c0980
	if (ctx.cr6.eq) goto loc_824C0980;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824c06f0
	ctx.lr = 0x824C0978;
	sub_824C06F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
loc_824C0980:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824c0994
	if (!ctx.cr6.gt) goto loc_824C0994;
	// stw r27,24(r31)
	REX_STORE_U32(r31.u32 + 24, r27.u32);
	// b 0x824c09ac
	goto loc_824C09AC;
loc_824C0994:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subf r10,r11,r30
	ctx.r10.u64 = r30.u64 - ctx.r11.u64;
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stw r8,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r8.u32);
loc_824C09AC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824c06f0
	ctx.lr = 0x824C09BC;
	sub_824C06F0(ctx, base);
loc_824C09BC:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bge cr6,0x824c0a4c
	if (!ctx.cr6.lt) goto loc_824C0A4C;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bge cr6,0x824c09f8
	if (!ctx.cr6.lt) goto loc_824C09F8;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x824c09f4
	if (ctx.cr6.eq) goto loc_824C09F4;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r28,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r28.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824C09F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824C09F4:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_824C09F8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x824c0a04
	if (ctx.cr6.eq) goto loc_824C0A04;
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
loc_824C0A04:
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824c0a78
	if (ctx.cr6.eq) goto loc_824C0A78;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r28,8(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r10,r10,r30
	ctx.r10.u64 = r30.u64 - ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824c0a4c
	if (!ctx.cr6.lt) goto loc_824C0A4C;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r11,r10
	r30.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_824C0A30:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// bl 0x824c1c70
	ctx.lr = 0x824C0A40;
	sub_824C1C70(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x824c0a30
	if (!ctx.cr0.eq) goto loc_824C0A30;
loc_824C0A4C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x824c0a5c
	if (ctx.cr6.eq) goto loc_824C0A5C;
loc_824C0A54:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
loc_824C0A5C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r9,r11,r27
	ctx.r9.u64 = r27.u64 - ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_824C0A78:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x824c0a54
	if (!ctx.cr6.eq) goto loc_824C0A54;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r28,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r28.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824C0A9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824c0a5c
	goto loc_824C0A5C;
}

DEFINE_REX_FUNC(sub_824C90A0) {
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
	ctx.lr = 0x824C90A8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,280(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 280);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r21,448(r3)
	r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c914c
	if (ctx.cr6.eq) goto loc_824C914C;
	// lwz r11,36(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c914c
	if (!ctx.cr6.eq) goto loc_824C914C;
	// lwz r10,16(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 16);
	// lwz r11,444(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 444);
	// srawi r9,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// stw r31,16(r21)
	REX_STORE_U32(r21.u32 + 16, r31.u32);
	// lwz r7,444(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 444);
	// lwz r6,8(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x824C9104;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824c9210
	if (ctx.cr6.eq) goto loc_824C9210;
	// lwz r10,332(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 332);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x824c9134
	if (!ctx.cr6.gt) goto loc_824C9134;
	// addi r10,r21,16
	ctx.r10.s64 = r21.s64 + 16;
loc_824C9120:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, r31.u32);
	ctx.r10.u32 = ea;
	// lwz r9,332(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 332);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x824c9120
	if (ctx.cr6.lt) goto loc_824C9120;
loc_824C9134:
	// lwz r11,280(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 280);
	// stw r11,36(r21)
	REX_STORE_U32(r21.u32 + 36, ctx.r11.u32);
	// lwz r10,420(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 420);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x824c914c
	if (!ctx.cr6.eq) goto loc_824C914C;
	// stw r31,8(r21)
	REX_STORE_U32(r21.u32 + 8, r31.u32);
loc_824C914C:
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824c955c
	if (!ctx.cr6.eq) goto loc_824C955C;
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,20(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 20);
	// addi r23,r21,20
	r23.s64 = r21.s64 + 20;
	// lwz r8,24(r21)
	ctx.r8.u64 = REX_LOAD_U32(r21.u32 + 24);
	// mr r18,r31
	r18.u64 = r31.u64;
	// lwz r7,28(r21)
	ctx.r7.u64 = REX_LOAD_U32(r21.u32 + 28);
	// lwz r6,32(r21)
	ctx.r6.u64 = REX_LOAD_U32(r21.u32 + 32);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,360(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 360);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lwz r4,12(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 12);
	// lwz r5,16(r21)
	ctx.r5.u64 = REX_LOAD_U32(r21.u32 + 16);
	// stw r25,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r25.u32);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r6,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// ble cr6,0x824c9518
	if (!ctx.cr6.gt) goto loc_824C9518;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r20,r30
	r20.u64 = r30.u64;
	// addi r22,r25,364
	r22.s64 = r25.s64 + 364;
	// addi r24,r21,112
	r24.s64 = r21.s64 + 112;
	// li r26,1
	r26.s64 = 1;
	// addi r19,r11,5392
	r19.s64 = ctx.r11.s64 + 5392;
	// addi r27,r10,8224
	r27.s64 = ctx.r10.s64 + 8224;
loc_824C91D0:
	// lwz r29,0(r20)
	r29.u64 = REX_LOAD_U32(r20.u32 + 0);
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// lwz r31,-40(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + -40);
	// lwz r28,0(r24)
	r28.u64 = REX_LOAD_U32(r24.u32 + 0);
	// bge cr6,0x824c921c
	if (!ctx.cr6.lt) goto loc_824C921C;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824c8e10
	ctx.lr = 0x824C91F0;
	sub_824C8E10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824c9210
	if (ctx.cr6.eq) goto loc_824C9210;
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bge cr6,0x824c921c
	if (!ctx.cr6.lt) goto loc_824C921C;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// b 0x824c9250
	goto loc_824C9250;
loc_824C9210:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1ce0
	return;
loc_824C921C:
	// addi r11,r5,-8
	ctx.r11.s64 = ctx.r5.s64 + -8;
	// sraw r10,r4,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r10.s64 = ctx.r4.s32 >> temp.u32;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824c924c
	if (ctx.cr6.eq) goto loc_824C924C;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// subf r5,r10,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r10.u64;
	// lbz r31,1168(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 1168);
	// b 0x824c9270
	goto loc_824C9270;
loc_824C924C:
	// li r7,9
	ctx.r7.s64 = 9;
loc_824C9250:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824c8f78
	ctx.lr = 0x824C925C;
	sub_824C8F78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824c9210
	if (ctx.cr6.lt) goto loc_824C9210;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_824C9270:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x824c92cc
	if (ctx.cr6.eq) goto loc_824C92CC;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r31.s32, ctx.xer);
	// bge cr6,0x824c929c
	if (!ctx.cr6.lt) goto loc_824C929C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824c8e10
	ctx.lr = 0x824C928C;
	sub_824C8E10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824c9210
	if (ctx.cr6.eq) goto loc_824C9210;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_824C929C:
	// subf r5,r31,r5
	ctx.r5.u64 = ctx.r5.u64 - r31.u64;
	// slw r10,r26,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (r26.u32 << (r31.u8 & 0x3F));
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sraw r9,r4,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r9.s64 = ctx.r4.s32 >> temp.u32;
	// lwzx r8,r11,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// and r31,r10,r9
	r31.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x824c92cc
	if (!ctx.cr6.lt) goto loc_824C92CC;
	// addi r10,r27,64
	ctx.r10.s64 = r27.s64 + 64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
loc_824C92CC:
	// lwz r11,40(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824c92f4
	if (ctx.cr6.eq) goto loc_824C92F4;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// stwx r11,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// sth r11,0(r29)
	REX_STORE_U16(r29.u32 + 0, ctx.r11.u16);
loc_824C92F4:
	// lwz r11,80(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 80);
	// mr r30,r26
	r30.u64 = r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824c9420
	if (ctx.cr6.eq) goto loc_824C9420;
loc_824C9304:
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bge cr6,0x824c9338
	if (!ctx.cr6.lt) goto loc_824C9338;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824c8e10
	ctx.lr = 0x824C9318;
	sub_824C8E10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824c9210
	if (ctx.cr6.eq) goto loc_824C9210;
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bge cr6,0x824c9338
	if (!ctx.cr6.lt) goto loc_824C9338;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// b 0x824c936c
	goto loc_824C936C;
loc_824C9338:
	// addi r11,r5,-8
	ctx.r11.s64 = ctx.r5.s64 + -8;
	// sraw r10,r4,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r10.s64 = ctx.r4.s32 >> temp.u32;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + r28.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824c9368
	if (ctx.cr6.eq) goto loc_824C9368;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// subf r5,r10,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r10.u64;
	// lbz r3,1168(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 1168);
	// b 0x824c9388
	goto loc_824C9388;
loc_824C9368:
	// li r7,9
	ctx.r7.s64 = 9;
loc_824C936C:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824c8f78
	ctx.lr = 0x824C9378;
	sub_824C8F78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824c9210
	if (ctx.cr6.lt) goto loc_824C9210;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_824C9388:
	// clrlwi r31,r3,28
	r31.u64 = ctx.r3.u32 & 0xF;
	// srawi r11,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x824c9404
	if (ctx.cr6.eq) goto loc_824C9404;
	// add r30,r30,r11
	r30.u64 = r30.u64 + ctx.r11.u64;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r31.s32, ctx.xer);
	// bge cr6,0x824c93c0
	if (!ctx.cr6.lt) goto loc_824C93C0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824c8e10
	ctx.lr = 0x824C93B0;
	sub_824C8E10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824c9210
	if (ctx.cr6.eq) goto loc_824C9210;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_824C93C0:
	// slw r11,r26,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (r26.u32 << (r31.u8 & 0x3F));
	// subf r5,r31,r5
	ctx.r5.u64 = ctx.r5.u64 - r31.u64;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sraw r9,r4,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r9.s64 = ctx.r4.s32 >> temp.u32;
	// lwzx r8,r10,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x824c93f0
	if (!ctx.cr6.lt) goto loc_824C93F0;
	// addi r9,r27,64
	ctx.r9.s64 = r27.s64 + 64;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_824C93F0:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r19
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r19.u32);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r7,r29
	REX_STORE_U16(ctx.r7.u32 + r29.u32, ctx.r11.u16);
	// b 0x824c9410
	goto loc_824C9410;
loc_824C9404:
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x824c94fc
	if (!ctx.cr6.eq) goto loc_824C94FC;
	// addi r30,r30,15
	r30.s64 = r30.s64 + 15;
loc_824C9410:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,64
	ctx.cr6.compare<int32_t>(r30.s32, 64, ctx.xer);
	// blt cr6,0x824c9304
	if (ctx.cr6.lt) goto loc_824C9304;
	// b 0x824c94fc
	goto loc_824C94FC;
loc_824C9420:
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bge cr6,0x824c9454
	if (!ctx.cr6.lt) goto loc_824C9454;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824c8e10
	ctx.lr = 0x824C9434;
	sub_824C8E10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824c9210
	if (ctx.cr6.eq) goto loc_824C9210;
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bge cr6,0x824c9454
	if (!ctx.cr6.lt) goto loc_824C9454;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// b 0x824c9488
	goto loc_824C9488;
loc_824C9454:
	// addi r11,r5,-8
	ctx.r11.s64 = ctx.r5.s64 + -8;
	// sraw r10,r4,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r10.s64 = ctx.r4.s32 >> temp.u32;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + r28.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824c9484
	if (ctx.cr6.eq) goto loc_824C9484;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// subf r5,r10,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r10.u64;
	// lbz r3,1168(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 1168);
	// b 0x824c94a4
	goto loc_824C94A4;
loc_824C9484:
	// li r7,9
	ctx.r7.s64 = 9;
loc_824C9488:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824c8f78
	ctx.lr = 0x824C9494;
	sub_824C8F78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824c9210
	if (ctx.cr6.lt) goto loc_824C9210;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_824C94A4:
	// clrlwi r31,r3,28
	r31.u64 = ctx.r3.u32 & 0xF;
	// srawi r11,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x824c94e4
	if (ctx.cr6.eq) goto loc_824C94E4;
	// add r30,r30,r11
	r30.u64 = r30.u64 + ctx.r11.u64;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r31.s32, ctx.xer);
	// bge cr6,0x824c94dc
	if (!ctx.cr6.lt) goto loc_824C94DC;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824c8e10
	ctx.lr = 0x824C94CC;
	sub_824C8E10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824c9210
	if (ctx.cr6.eq) goto loc_824C9210;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_824C94DC:
	// subf r5,r31,r5
	ctx.r5.u64 = ctx.r5.u64 - r31.u64;
	// b 0x824c94f0
	goto loc_824C94F0;
loc_824C94E4:
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x824c94fc
	if (!ctx.cr6.eq) goto loc_824C94FC;
	// addi r30,r30,15
	r30.s64 = r30.s64 + 15;
loc_824C94F0:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,64
	ctx.cr6.compare<int32_t>(r30.s32, 64, ctx.xer);
	// blt cr6,0x824c9420
	if (ctx.cr6.lt) goto loc_824C9420;
loc_824C94FC:
	// lwz r11,360(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 360);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(r18.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824c91d0
	if (ctx.cr6.lt) goto loc_824C91D0;
loc_824C9518:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,24(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 24);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,24(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 24);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r4,12(r21)
	REX_STORE_U32(r21.u32 + 12, ctx.r4.u32);
	// stw r5,16(r21)
	REX_STORE_U32(r21.u32 + 16, ctx.r5.u32);
	// stw r7,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r7.u32);
	// stw r6,4(r23)
	REX_STORE_U32(r23.u32 + 4, ctx.r6.u32);
	// stw r3,8(r23)
	REX_STORE_U32(r23.u32 + 8, ctx.r3.u32);
	// stw r11,12(r23)
	REX_STORE_U32(r23.u32 + 12, ctx.r11.u32);
loc_824C955C:
	// lwz r11,36(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r21)
	REX_STORE_U32(r21.u32 + 36, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_824E4BF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824E4BF8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82130e88
	ctx.lr = 0x824E4C04;
	sub_82130E88(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// addi r30,r31,812
	r30.s64 = r31.s64 + 812;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// ori r10,r31,1
	ctx.r10.u64 = r31.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r5,132
	ctx.r5.s64 = 132;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x824E4C2C;
	sub_826A2E60(ctx, base);
	// addi r11,r30,152
	ctx.r11.s64 = r30.s64 + 152;
	// addi r29,r31,972
	r29.s64 = r31.s64 + 972;
	// stw r31,960(r31)
	REX_STORE_U32(r31.u32 + 960, r31.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,968(r31)
	REX_STORE_U32(r31.u32 + 968, ctx.r11.u32);
	// li r5,132
	ctx.r5.s64 = 132;
	// stw r10,964(r31)
	REX_STORE_U32(r31.u32 + 964, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x824E4C5C;
	sub_826A2E60(ctx, base);
	// addi r11,r29,152
	ctx.r11.s64 = r29.s64 + 152;
	// stw r31,1120(r31)
	REX_STORE_U32(r31.u32 + 1120, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r11,1128(r31)
	REX_STORE_U32(r31.u32 + 1128, ctx.r11.u32);
	// stw r10,1124(r31)
	REX_STORE_U32(r31.u32 + 1124, ctx.r10.u32);
	// bl 0x824e45a0
	ctx.lr = 0x824E4C80;
	sub_824E45A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r11,944(r31)
	REX_STORE_U32(r31.u32 + 944, ctx.r11.u32);
	// stw r11,948(r31)
	REX_STORE_U32(r31.u32 + 948, ctx.r11.u32);
	// stw r11,952(r31)
	REX_STORE_U32(r31.u32 + 952, ctx.r11.u32);
	// stw r10,956(r31)
	REX_STORE_U32(r31.u32 + 956, ctx.r10.u32);
	// bl 0x824e45a0
	ctx.lr = 0x824E4CA0;
	sub_824E45A0(ctx, base);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,1104(r31)
	REX_STORE_U32(r31.u32 + 1104, ctx.r3.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r3,1108(r31)
	REX_STORE_U32(r31.u32 + 1108, ctx.r3.u32);
	// stw r3,1112(r31)
	REX_STORE_U32(r31.u32 + 1112, ctx.r3.u32);
	// stw r10,1116(r31)
	REX_STORE_U32(r31.u32 + 1116, ctx.r10.u32);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r9,788(r31)
	REX_STORE_U32(r31.u32 + 788, ctx.r9.u32);
	// bl 0x8257a920
	ctx.lr = 0x824E4CC8;
	sub_8257A920(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824EA978) {
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
	ctx.lr = 0x824EA980;
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-32120
	r25.s64 = -2105016320;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,19952(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 19952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824ea9d0
	if (!ctx.cr6.eq) goto loc_824EA9D0;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r11,r11,19964
	ctx.r11.s64 = ctx.r11.s64 + 19964;
	// lwz r10,19960(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 19960);
	// lwz r3,-16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x824eabb4
	goto loc_824EABB4;
loc_824EA9D0:
	// cmpwi cr6,r29,15
	ctx.cr6.compare<int32_t>(r29.s32, 15, ctx.xer);
	// blt cr6,0x824eaa04
	if (ctx.cr6.lt) goto loc_824EAA04;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lwz r10,19952(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 19952);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r11,r11,19964
	ctx.r11.s64 = ctx.r11.s64 + 19964;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r5,r9,-29196
	ctx.r5.s64 = ctx.r9.s64 + -29196;
	// addi r4,r8,-29204
	ctx.r4.s64 = ctx.r8.s64 + -29204;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -16);
	// b 0x824eaae4
	goto loc_824EAAE4;
loc_824EAA04:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// mulli r26,r29,12
	r26.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(12));
	// addi r11,r11,-19872
	ctx.r11.s64 = ctx.r11.s64 + -19872;
	// addi r27,r11,8
	r27.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r26,r27
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824eaa30
	if (!ctx.cr6.eq) goto loc_824EAA30;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x824eabb8
	if (!ctx.cr6.eq) goto loc_824EABB8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824eabb8
	if (ctx.cr6.eq) goto loc_824EABB8;
loc_824EAA30:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r31,r11,18912
	r31.s64 = ctx.r11.s64 + 18912;
	// li r4,1022
	ctx.r4.s64 = 1022;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x8269d1a8
	ctx.lr = 0x824EAA58;
	sub_8269D1A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stb r11,1022(r31)
	REX_STORE_U8(r31.u32 + 1022, ctx.r11.u8);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r10,-16844
	ctx.r5.s64 = ctx.r10.s64 + -16844;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// bl 0x826a1a58
	ctx.lr = 0x824EAA78;
	sub_826A1A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// stb r11,1023(r31)
	REX_STORE_U8(r31.u32 + 1023, ctx.r11.u8);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r10,19964
	r30.s64 = ctx.r10.s64 + 19964;
	// beq cr6,0x824eaa98
	if (ctx.cr6.eq) goto loc_824EAA98;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(r29.s32, 3, ctx.xer);
	// bne cr6,0x824eaabc
	if (!ctx.cr6.eq) goto loc_824EAABC;
loc_824EAA98:
	// addi r11,r29,-3
	ctx.r11.s64 = r29.s64 + -3;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r3,-16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -16);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824EAABC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824EAABC:
	// lwzx r11,r26,r27
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + r27.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824eaaec
	if (!ctx.cr6.eq) goto loc_824EAAEC;
	// lwz r11,19952(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 19952);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r3,-16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -16);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r10,-29204
	ctx.r4.s64 = ctx.r10.s64 + -29204;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824EAAE4:
	// bctrl 
	ctx.lr = 0x824EAAE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824eabb8
	goto loc_824EABB8;
loc_824EAAEC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x824eaba4
	if (!ctx.cr6.eq) goto loc_824EABA4;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// lwz r11,19936(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 19936);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824eaba4
	if (ctx.cr6.eq) goto loc_824EABA4;
	// lis r27,-32120
	r27.s64 = -2105016320;
	// lwz r11,19944(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 19944);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824eaba4
	if (ctx.cr6.eq) goto loc_824EABA4;
	// lis r28,-32120
	r28.s64 = -2105016320;
	// lwz r11,19940(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 19940);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824eaba4
	if (ctx.cr6.eq) goto loc_824EABA4;
	// lwz r11,19936(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 19936);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,-16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -16);
	// addi r4,r10,-29216
	ctx.r4.s64 = ctx.r10.s64 + -29216;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824EAB40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x824eabb8
	if (ctx.cr0.eq) goto loc_824EABB8;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_824EAB50:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824eab50
	if (!ctx.cr6.eq) goto loc_824EAB50;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwz r10,19944(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 19944);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,-16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bctrl 
	ctx.lr = 0x824EAB8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,19940(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 19940);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,-16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824EABA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824eabb8
	goto loc_824EABB8;
loc_824EABA4:
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lwz r3,-16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -16);
	// lwz r11,19960(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 19960);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824EABB4:
	// bctrl 
	ctx.lr = 0x824EABB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824EABB8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824F8870) {
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
	ctx.lr = 0x824F8878;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x824f8940
	if (!ctx.cr6.lt) goto loc_824F8940;
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,123
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 123, ctx.xer);
	// beq cr6,0x824f88e0
	if (ctx.cr6.eq) goto loc_824F88E0;
	// cmplwi cr6,r11,117
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 117, ctx.xer);
	// bne cr6,0x824f88d4
	if (!ctx.cr6.eq) goto loc_824F88D4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// bl 0x824f71b8
	ctx.lr = 0x824F88C0;
	sub_824F71B8(ctx, base);
	// addi r11,r29,-16
	ctx.r11.s64 = r29.s64 + -16;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x824f88e0
	if (ctx.cr6.eq) goto loc_824F88E0;
loc_824F88D4:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4368
	ctx.lr = 0x824F88E0;
	sub_824E4368(ctx, base);
loc_824F88E0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r3,768(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 768);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r28,1
	r28.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r10,6
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// rlwimi r11,r28,25,3,7
	ctx.r11.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 25) & 0x1F000000) | (ctx.r11.u64 & 0xFFFFFFFFE0FFFFFF);
	// oris r10,r10,51200
	ctx.r10.u64 = ctx.r10.u64 | 3355443200;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x822cdca0
	ctx.lr = 0x824F891C;
	sub_822CDCA0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f8770
	ctx.lr = 0x824F8938;
	sub_824F8770(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stw r28,0(r27)
	REX_STORE_U32(r27.u32 + 0, r28.u32);
loc_824F8940:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825021F0) {
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
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82502218
	if (ctx.cr0.eq) goto loc_82502218;
loc_82502210:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825022bc
	goto loc_825022BC;
loc_82502218:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825224e8
	ctx.lr = 0x82502220;
	sub_825224E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82502210
	if (ctx.cr0.eq) goto loc_82502210;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82502244
	if (ctx.cr6.lt) goto loc_82502244;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82502248
	if (!ctx.cr6.gt) goto loc_82502248;
loc_82502244:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82502248:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82502264
	if (ctx.cr0.eq) goto loc_82502264;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7af8
	ctx.lr = 0x82502258;
	sub_824F7AF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825022b8
	if (ctx.cr0.eq) goto loc_825022B8;
	// b 0x82502210
	goto loc_82502210;
loc_82502264:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825022b8
	if (!ctx.cr0.eq) goto loc_825022B8;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r3.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825022b8
	if (ctx.cr0.eq) goto loc_825022B8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8250229c
	if (ctx.cr6.lt) goto loc_8250229C;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x825022a0
	if (!ctx.cr6.gt) goto loc_825022A0;
loc_8250229C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825022A0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825022b8
	if (ctx.cr0.eq) goto loc_825022B8;
	// bl 0x824f7af8
	ctx.lr = 0x825022AC;
	sub_824F7AF8(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x825022bc
	if (ctx.cr6.eq) goto loc_825022BC;
loc_825022B8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825022BC:
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

DEFINE_REX_FUNC(sub_8250A6D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8250A6E0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x8250a728
	if (!ctx.cr6.eq) goto loc_8250A728;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r31,12(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r31,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r31.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_8250A728:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 384, ctx.xer);
	// bne cr6,0x8250a7a4
	if (!ctx.cr6.eq) goto loc_8250A7A4;
	// lwz r30,44(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250a7a4
	if (!ctx.cr0.eq) goto loc_8250A7A4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x824f7010
	ctx.lr = 0x8250A754;
	sub_824F7010(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250a7a4
	if (ctx.cr0.eq) goto loc_8250A7A4;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250a7a4
	if (ctx.cr0.eq) goto loc_8250A7A4;
	// lhz r10,18(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// lhz r9,18(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 18);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// clrlwi. r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250a7a4
	if (!ctx.cr0.eq) goto loc_8250A7A4;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// li r11,57
	ctx.r11.s64 = 57;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r10,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x6;
	// rlwinm r9,r9,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// srw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwimi r10,r11,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
loc_8250A7A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82516938) {
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
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r10,18(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 18);
	// rlwinm r11,r11,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// andc r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r4,r11,31
	ctx.r4.s64 = ctx.r11.s64 + 31;
	// bl 0x825164c0
	ctx.lr = 0x82516970;
	sub_825164C0(ctx, base);
	// lwz r11,688(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 688);
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
}

DEFINE_REX_FUNC(sub_8251E438) {
	REX_FUNC_PROLOGUE();
	// clrldi r10,r4,58
	ctx.r10.u64 = ctx.r4.u64 & 0x3F;
	// rlwinm r11,r4,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// sld r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r10.u8 & 0x7F));
	// bge cr6,0x8251e47c
	if (!ctx.cr6.lt) goto loc_8251E47C;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
loc_8251E458:
	// ld r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x8251e484
	if (!ctx.cr6.eq) goto loc_8251E484;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8251e458
	if (ctx.cr6.lt) goto loc_8251E458;
loc_8251E47C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8251E484:
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

DEFINE_REX_FUNC(sub_8251FE88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8251FE90;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8251f290
	ctx.lr = 0x8251FEA8;
	sub_8251F290(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8251fef0
	if (!ctx.cr6.eq) goto loc_8251FEF0;
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,804(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 804);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251fedc
	if (ctx.cr6.eq) goto loc_8251FEDC;
	// bl 0x8251e050
	ctx.lr = 0x8251FECC;
	sub_8251E050(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3567
	ctx.r4.s64 = 3567;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8251FEDC;
	sub_824E4368(ctx, base);
loc_8251FEDC:
	// bl 0x8251e050
	ctx.lr = 0x8251FEE0;
	sub_8251E050(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3568
	ctx.r4.s64 = 3568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8251FEF0;
	sub_824E4368(ctx, base);
loc_8251FEF0:
	// add r11,r31,r29
	ctx.r11.u64 = r31.u64 + r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x8251e878
	ctx.lr = 0x8251FF04;
	sub_8251E878(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82524780) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82524788;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,37
	ctx.r6.s64 = 37;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x825247AC;
	sub_825BB860(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// beq cr6,0x825247d0
	if (ctx.cr6.eq) goto loc_825247D0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x825247CC;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_825247D0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825247D8;
	sub_8250AD28(ctx, base);
	// stw r3,44(r28)
	REX_STORE_U32(r28.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82524818
	if (ctx.cr6.eq) goto loc_82524818;
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r31,-36
	ctx.r10.s64 = r31.s64 + -36;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82524818:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8252DD00) {
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
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r11,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
	// bl 0x8254fb38
	ctx.lr = 0x8252DD30;
	sub_8254FB38(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x8252dca8
	ctx.lr = 0x8252DD3C;
	sub_8252DCA8(ctx, base);
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

DEFINE_REX_FUNC(sub_82530478) {
	REX_FUNC_PROLOGUE();
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
loc_8253048C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,3968
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3968, ctx.xer);
	// bne cr6,0x825304a8
	if (!ctx.cr6.eq) goto loc_825304A8;
	// li r9,3
	ctx.r9.s64 = 3;
	// rlwimi r10,r9,7,18,24
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x3F80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFC07F);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_825304A8:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8253048c
	if (!ctx.cr6.eq) goto loc_8253048C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825313A8) {
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
	ctx.lr = 0x825313B0;
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
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x825313DC;
	sub_825BB860(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// beq cr6,0x82531400
	if (ctx.cr6.eq) goto loc_82531400;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x825313FC;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82531400:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82531408;
	sub_8250AD28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// rlwimi r11,r10,14,15,17
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x1C000) | (ctx.r11.u64 & 0xFFFFFFFFFFFE3FFF);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824ffc30
	ctx.lr = 0x82531430;
	sub_824FFC30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82537FD8) {
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
	ctx.lr = 0x82537FE0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,52(r7)
	r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 52);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lwz r3,12(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 12);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x82538034
	if (!ctx.cr6.eq) goto loc_82538034;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r4,r11,27,30,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// bl 0x825b8558
	ctx.lr = 0x82538024;
	sub_825B8558(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x825380ac
	if (ctx.cr6.eq) goto loc_825380AC;
loc_82538034:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82538040;
	sub_8250AB60(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82530a10
	ctx.lr = 0x82538058;
	sub_82530A10(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253808c
	if (ctx.cr0.eq) goto loc_8253808C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250a678
	ctx.lr = 0x82538070;
	sub_8250A678(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82503400
	ctx.lr = 0x82538080;
	sub_82503400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8253808C;
	sub_8250AD28(ctx, base);
loc_8253808C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250aed8
	ctx.lr = 0x82538094;
	sub_8250AED8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x825335b8
	ctx.lr = 0x825380AC;
	sub_825335B8(ctx, base);
loc_825380AC:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825380c4
	if (ctx.cr0.eq) goto loc_825380C4;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
loc_825380C4:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82537a20
	ctx.lr = 0x825380D8;
	sub_82537A20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825335b8
	ctx.lr = 0x825380E4;
	sub_825335B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8254A038) {
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
	ctx.lr = 0x8254A040;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// li r26,1
	r26.s64 = 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8254a0e0
	if (ctx.cr6.eq) goto loc_8254A0E0;
	// addi r31,r4,44
	r31.s64 = ctx.r4.s64 + 44;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
loc_8254A06C:
	// and. r11,r26,r24
	ctx.r11.u64 = r26.u64 & r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254a0d0
	if (ctx.cr0.eq) goto loc_8254A0D0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8254A080;
	sub_8250AB60(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// rlwinm r11,r29,5,22,26
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0x3E0;
	// lis r12,-3073
	ctx.r12.s64 = -201392128;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// ori r12,r12,64671
	ctx.r12.u64 = ctx.r12.u64 | 64671;
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 0);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// ori r11,r11,7296
	ctx.r11.u64 = ctx.r11.u64 | 7296;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8250b470
	ctx.lr = 0x8254A0BC;
	sub_8250B470(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8254A0C8;
	sub_8250AD28(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_8254A0D0:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm r26,r26,1,0,30
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x8254a06c
	if (!ctx.cr0.eq) goto loc_8254A06C;
loc_8254A0E0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_825501F0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82550204
	if (ctx.cr0.eq) goto loc_82550204;
loc_825501FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82550204:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82550240
	if (ctx.cr0.eq) goto loc_82550240;
	// clrlwi. r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825501fc
	if (ctx.cr0.eq) goto loc_825501FC;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f0,-3744(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8255022c
	if (!ctx.cr6.gt) goto loc_8255022C;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825501fc
	if (ctx.cr0.eq) goto loc_825501FC;
loc_8255022C:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82550250
	if (!ctx.cr6.lt) goto loc_82550250;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82550250
	if (!ctx.cr0.eq) goto loc_82550250;
	// b 0x825501fc
	goto loc_825501FC;
loc_82550240:
	// lfd f0,8(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// lfd f13,16(r3)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x825501fc
	if (!ctx.cr6.eq) goto loc_825501FC;
loc_82550250:
	// stfd f0,0(r6)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.f0.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82552BD8) {
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
	ctx.lr = 0x82552BE0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// li r24,1
	r24.s64 = 1;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82552e50
	if (!ctx.cr0.eq) goto loc_82552E50;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82552e50
	if (ctx.cr0.eq) goto loc_82552E50;
loc_82552C0C:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r24,r10,r24
	r24.u64 = ctx.r10.u64 & r24.u64;
	// bne cr6,0x82552e34
	if (!ctx.cr6.eq) goto loc_82552E34;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82552e34
	if (ctx.cr0.eq) goto loc_82552E34;
loc_82552C34:
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm. r11,r10,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82552dec
	if (!ctx.cr0.eq) goto loc_82552DEC;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r8,r10,25,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// rlwinm r9,r11,25,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82552dec
	if (!ctx.cr6.eq) goto loc_82552DEC;
	// rlwinm r8,r11,7,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// rlwinm r7,r10,7,25,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7F;
	// xor r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82552dec
	if (!ctx.cr0.eq) goto loc_82552DEC;
	// rlwinm r31,r11,27,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82552dec
	if (!ctx.cr6.eq) goto loc_82552DEC;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82552dec
	if (!ctx.cr0.eq) goto loc_82552DEC;
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 20);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82552dec
	if (!ctx.cr0.eq) goto loc_82552DEC;
	// cmplwi cr6,r9,117
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 117, ctx.xer);
	// bne cr6,0x82552cd4
	if (!ctx.cr6.eq) goto loc_82552CD4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824f71b8
	ctx.lr = 0x82552CB4;
	sub_824F71B8(ctx, base);
	// add r11,r3,r26
	ctx.r11.u64 = ctx.r3.u64 + r26.u64;
	// lwz r11,-16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -16);
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82552e0c
	if (!ctx.cr0.eq) goto loc_82552E0C;
	// add r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 + r27.u64;
	// lwz r11,-16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -16);
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82552e0c
	if (!ctx.cr0.eq) goto loc_82552E0C;
loc_82552CD4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82552d58
	if (ctx.cr6.eq) goto loc_82552D58;
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 4);
loc_82552CE0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82552d08
	if (ctx.cr6.eq) goto loc_82552D08;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82552d00
	if (ctx.cr6.eq) goto loc_82552D00;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82552d08
	if (!ctx.cr0.eq) goto loc_82552D08;
loc_82552D00:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82552ce0
	goto loc_82552CE0;
loc_82552D08:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
loc_82552D0C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82552d34
	if (ctx.cr6.eq) goto loc_82552D34;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82552d2c
	if (ctx.cr6.eq) goto loc_82552D2C;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82552d34
	if (!ctx.cr0.eq) goto loc_82552D34;
loc_82552D2C:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82552d0c
	goto loc_82552D0C;
loc_82552D34:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82552eb0
	if (ctx.cr6.eq) goto loc_82552EB0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82552eb0
	if (ctx.cr6.eq) goto loc_82552EB0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,7,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82552dec
	if (!ctx.cr0.eq) goto loc_82552DEC;
loc_82552D58:
	// li r29,0
	r29.s64 = 0;
	// addi r31,r27,44
	r31.s64 = r27.s64 + 44;
	// subf r28,r27,r26
	r28.u64 = r26.u64 - r27.u64;
loc_82552D64:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82552da8
	if (!ctx.cr6.lt) goto loc_82552DA8;
	// lwzx r30,r28,r31
	r30.u64 = REX_LOAD_U32(r28.u32 + r31.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8254fe68
	ctx.lr = 0x82552D88;
	sub_8254FE68(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82552d9c
	if (ctx.cr0.eq) goto loc_82552D9C;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x82552d64
	goto loc_82552D64;
loc_82552D9C:
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82552dec
	if (!ctx.cr6.eq) goto loc_82552DEC;
loc_82552DA8:
	// lwz r30,0(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 0);
loc_82552DAC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82552e14
	if (ctx.cr6.eq) goto loc_82552E14;
	// lwz r31,0(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 0);
loc_82552DB8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82552de8
	if (ctx.cr6.eq) goto loc_82552DE8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8254fe68
	ctx.lr = 0x82552DD0;
	sub_8254FE68(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82552de0
	if (!ctx.cr0.eq) goto loc_82552DE0;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x82552db8
	goto loc_82552DB8;
loc_82552DE0:
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x82552dac
	goto loc_82552DAC;
loc_82552DE8:
	// li r24,0
	r24.s64 = 0;
loc_82552DEC:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82552e34
	if (!ctx.cr0.eq) goto loc_82552E34;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82552c34
	if (!ctx.cr6.eq) goto loc_82552C34;
	// b 0x82552e34
	goto loc_82552E34;
loc_82552E0C:
	// li r24,0
	r24.s64 = 0;
	// b 0x82552e34
	goto loc_82552E34;
loc_82552E14:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// stw r27,32(r26)
	REX_STORE_U32(r26.u32 + 32, r27.u32);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r26,32(r27)
	REX_STORE_U32(r27.u32 + 32, r26.u32);
	// stw r11,8(r27)
	REX_STORE_U32(r27.u32 + 8, ctx.r11.u32);
loc_82552E34:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82552e50
	if (!ctx.cr0.eq) goto loc_82552E50;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82552c0c
	if (!ctx.cr6.eq) goto loc_82552C0C;
loc_82552E50:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82552ec0
	if (ctx.cr0.eq) goto loc_82552EC0;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82552e78
	if (!ctx.cr0.eq) goto loc_82552E78;
	// lwz r9,4(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 4);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r24,r9,r24
	r24.u64 = ctx.r9.u64 & r24.u64;
loc_82552E78:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82552ec0
	if (!ctx.cr6.eq) goto loc_82552EC0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82552ec0
	if (ctx.cr0.eq) goto loc_82552EC0;
loc_82552E88:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82552ebc
	if (ctx.cr0.eq) goto loc_82552EBC;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82552ec0
	if (!ctx.cr0.eq) goto loc_82552EC0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82552e88
	if (!ctx.cr6.eq) goto loc_82552E88;
	// b 0x82552ec0
	goto loc_82552EC0;
loc_82552EB0:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824e4368
	ctx.lr = 0x82552EBC;
	sub_824E4368(ctx, base);
loc_82552EBC:
	// li r24,0
	r24.s64 = 0;
loc_82552EC0:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8257E740) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,33
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 33, ctx.xer);
	// beq cr6,0x8257e778
	if (ctx.cr6.eq) goto loc_8257E778;
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// ble cr6,0x8257e770
	if (!ctx.cr6.gt) goto loc_8257E770;
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// ble cr6,0x8257e778
	if (!ctx.cr6.gt) goto loc_8257E778;
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// beq cr6,0x8257e778
	if (ctx.cr6.eq) goto loc_8257E778;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// beq cr6,0x8257e778
	if (ctx.cr6.eq) goto loc_8257E778;
loc_8257E770:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8257E778:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8257EA48) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8257ea90
	if (ctx.cr6.eq) goto loc_8257EA90;
	// lwz r3,24(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ff268
	ctx.lr = 0x8257EA80;
	sub_823FF268(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8257ea90
	if (!ctx.cr0.lt) goto loc_8257EA90;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8257EA90:
	// rlwinm. r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8257eaa8
	if (ctx.cr0.eq) goto loc_8257EAA8;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm r9,r9,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8257eabc
	if (!ctx.cr6.eq) goto loc_8257EABC;
loc_8257EAA8:
	// clrlwi. r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8257eac4
	if (ctx.cr0.eq) goto loc_8257EAC4;
	// lhz r9,50(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 50);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8257eac4
	if (ctx.cr6.eq) goto loc_8257EAC4;
loc_8257EABC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8257eacc
	goto loc_8257EACC;
loc_8257EAC4:
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8257EACC:
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

DEFINE_REX_FUNC(sub_8257FFD8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x825800ec
	if (ctx.cr6.eq) goto loc_825800EC;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x825800bc
	if (ctx.cr6.eq) goto loc_825800BC;
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// bne cr6,0x825800d0
	if (!ctx.cr6.eq) goto loc_825800D0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8257f4a0
	ctx.lr = 0x82580018;
	sub_8257F4A0(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mulli r11,r3,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x8258005c
	if (!ctx.cr6.eq) goto loc_8258005C;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825800d0
	if (ctx.cr6.eq) goto loc_825800D0;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x82580070
	if (ctx.cr6.eq) goto loc_82580070;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82580070
	goto loc_82580070;
loc_8258005C:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825800b0
	if (ctx.cr0.eq) goto loc_825800B0;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x825800b0
	if (!ctx.cr6.eq) goto loc_825800B0;
loc_82580070:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825800d0
	if (ctx.cr6.eq) goto loc_825800D0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x825800a0
	if (!ctx.cr6.eq) goto loc_825800A0;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm. r10,r10,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82580098
	if (ctx.cr0.eq) goto loc_82580098;
loc_82580090:
	// lwz r3,32(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x825800f8
	goto loc_825800F8;
loc_82580098:
	// lwz r3,28(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x825800f8
	goto loc_825800F8;
loc_825800A0:
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x825800d0
	if (!ctx.cr6.eq) goto loc_825800D0;
	// b 0x82580090
	goto loc_82580090;
loc_825800B0:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4368
	ctx.lr = 0x825800BC;
	sub_824E4368(ctx, base);
loc_825800BC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x825800e4
	if (ctx.cr6.lt) goto loc_825800E4;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x825800dc
	if (ctx.cr6.eq) goto loc_825800DC;
loc_825800D0:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4368
	ctx.lr = 0x825800DC;
	sub_824E4368(ctx, base);
loc_825800DC:
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// b 0x825800f8
	goto loc_825800F8;
loc_825800E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825800f8
	goto loc_825800F8;
loc_825800EC:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mullw r3,r11,r10
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
loc_825800F8:
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

DEFINE_REX_FUNC(sub_825837C8) {
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
	ctx.lr = 0x825837D0;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lis r17,-1
	r17.s64 = -65536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r17.u32, ctx.xer);
	// beq cr6,0x82583814
	if (ctx.cr6.eq) goto loc_82583814;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// li r28,19
	r28.s64 = 19;
	// addi r20,r11,-17832
	r20.s64 = ctx.r11.s64 + -17832;
	// b 0x82583820
	goto loc_82583820;
loc_82583814:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// li r28,3
	r28.s64 = 3;
	// addi r20,r11,-17680
	r20.s64 = ctx.r11.s64 + -17680;
loc_82583820:
	// li r21,0
	r21.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82583918
	if (ctx.cr6.eq) goto loc_82583918;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r30,r20,4
	r30.s64 = r20.s64 + 4;
	// li r19,1
	r19.s64 = 1;
	// addi r27,r11,-18396
	r27.s64 = ctx.r11.s64 + -18396;
	// addi r29,r10,25920
	r29.s64 = ctx.r10.s64 + 25920;
loc_82583844:
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(r25.s32, -1, ctx.xer);
	// bne cr6,0x82583868
	if (!ctx.cr6.eq) goto loc_82583868;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,-4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + -4);
	// rlwinm r5,r11,4,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// bl 0x826a58b0
	ctx.lr = 0x82583860;
	sub_826A58B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82583878
	if (ctx.cr0.eq) goto loc_82583878;
loc_82583868:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82583908
	if (!ctx.cr6.eq) goto loc_82583908;
loc_82583878:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x825838f0
	if (ctx.cr6.eq) goto loc_825838F0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// add r3,r11,r24
	ctx.r3.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x826a5840
	ctx.lr = 0x82583898;
	sub_826A5840(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r22,r3,r26
	r22.u64 = ctx.r3.u64 + r26.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825838f0
	if (ctx.cr0.eq) goto loc_825838F0;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r10,r10,0,10,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82583918
	if (!ctx.cr0.eq) goto loc_82583918;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x826a4a90
	ctx.lr = 0x825838C4;
	sub_826A4A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825838f0
	if (ctx.cr0.eq) goto loc_825838F0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826a4a90
	ctx.lr = 0x825838D8;
	sub_826A4A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82583918
	if (!ctx.cr0.eq) goto loc_82583918;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825838f0
	if (ctx.cr6.eq) goto loc_825838F0;
	// stw r19,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r19.u32);
loc_825838F0:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r10,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r6,r10,10,26,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3F;
	// beq 0x825839a0
	if (ctx.cr0.eq) goto loc_825839A0;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82583924
	if (ctx.cr6.lt) goto loc_82583924;
loc_82583908:
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r21,r28
	ctx.cr6.compare<uint32_t>(r21.u32, r28.u32, ctx.xer);
	// blt cr6,0x82583844
	if (ctx.cr6.lt) goto loc_82583844;
loc_82583918:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8258391C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1cdc
	return;
loc_82583924:
	// rlwinm r11,r21,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + r20.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r10,24,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258394c
	if (ctx.cr0.eq) goto loc_8258394C;
	// rlwinm r9,r10,16,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x7;
	// cmplw cr6,r23,r9
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82583954
	if (ctx.cr6.eq) goto loc_82583954;
	// rlwinm r3,r10,20,25,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x70;
	// b 0x8258391c
	goto loc_8258391C;
loc_8258394C:
	// slw r11,r19,r23
	ctx.r11.u64 = r23.u8 & 0x20 ? 0 : (r19.u32 << (r23.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82583954:
	// add r9,r6,r22
	ctx.r9.u64 = ctx.r6.u64 + r22.u64;
	// lwz r7,336(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 336);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwimi r11,r9,4,0,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// beq cr6,0x82583a10
	if (ctx.cr6.eq) goto loc_82583A10;
	// addi r11,r31,128
	ctx.r11.s64 = r31.s64 + 128;
loc_82583974:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, ctx.xer);
	// beq cr6,0x82583998
	if (ctx.cr6.eq) goto loc_82583998;
	// lwz r9,336(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 336);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82583974
	if (ctx.cr6.lt) goto loc_82583974;
	// b 0x82583a10
	goto loc_82583A10;
loc_82583998:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8258391c
	goto loc_8258391C;
loc_825839A0:
	// lwz r7,336(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 336);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x825839f4
	if (ctx.cr6.eq) goto loc_825839F4;
	// addi r8,r31,124
	ctx.r8.s64 = r31.s64 + 124;
loc_825839B4:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r10,r11,27,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xF;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r22.u32, ctx.xer);
	// bne cr6,0x825839e0
	if (!ctx.cr6.eq) goto loc_825839E0;
	// rlwinm r10,r21,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r20
	ctx.r10.u64 = ctx.r10.u64 + r20.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r10,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82583ba0
	if (ctx.cr0.eq) goto loc_82583BA0;
loc_825839E0:
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 336);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825839b4
	if (ctx.cr6.lt) goto loc_825839B4;
loc_825839F4:
	// lwz r11,340(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 340);
	// slw r10,r19,r23
	ctx.r10.u64 = r23.u8 & 0x20 ? 0 : (r19.u32 << (r23.u8 & 0x3F));
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r30,r10,-1
	r30.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r30,r9,4,0,27
	r30.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0) | (r30.u64 & 0xFFFFFFFF0000000F);
	// stw r11,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r11.u32);
loc_82583A10:
	// cmplwi cr6,r7,18
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 18, ctx.xer);
	// beq cr6,0x82583918
	if (ctx.cr6.eq) goto loc_82583918;
	// rlwinm r11,r21,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r20
	r29.u64 = ctx.r11.u64 + r20.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82583a3c
	if (ctx.cr0.eq) goto loc_82583A3C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82583a3c
	if (ctx.cr6.eq) goto loc_82583A3C;
	// stw r19,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r19.u32);
loc_82583A3C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x82583ac8
	if (!ctx.cr6.eq) goto loc_82583AC8;
	// lwz r24,0(r29)
	r24.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82583ac8
	if (ctx.cr6.eq) goto loc_82583AC8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// addi r5,r11,-21732
	ctx.r5.s64 = ctx.r11.s64 + -21732;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826a1a58
	ctx.lr = 0x82583A6C;
	sub_826A1A58(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82583A74:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82583a74
	if (!ctx.cr6.eq) goto loc_82583A74;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r4,r11,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// bl 0x8251f360
	ctx.lr = 0x82583AA4;
	sub_8251F360(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// subf r10,r10,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r10.u64;
loc_82583AB4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82583ab4
	if (!ctx.cr0.eq) goto loc_82583AB4;
loc_82583AC8:
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 336);
	// clrlwi r10,r18,24
	ctx.r10.u64 = r18.u32 & 0xFF;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// stwx r24,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r24.u32);
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 336);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// stw r30,128(r11)
	REX_STORE_U32(ctx.r11.u32 + 128, r30.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 336);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// rlwinm r9,r9,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xF;
	// lwz r8,124(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// rlwinm r8,r8,0,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r9,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r9.u32);
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 336);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r9,124(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// rlwimi r9,r22,5,23,26
	ctx.r9.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 5) & 0x1E0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFE1F);
	// stw r9,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r9.u32);
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 336);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r9,124(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// rlwimi r9,r10,18,13,13
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x40000) | (ctx.r9.u64 & 0xFFFFFFFFFFFBFFFF);
	// stw r9,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r9.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82583b8c
	if (ctx.cr0.eq) goto loc_82583B8C;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r17.u32, ctx.xer);
	// beq cr6,0x82583b8c
	if (ctx.cr6.eq) goto loc_82583B8C;
	// rlwinm r11,r30,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplwi cr6,r11,992
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 992, ctx.xer);
	// bne cr6,0x82583b8c
	if (!ctx.cr6.eq) goto loc_82583B8C;
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 336);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r10,124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// oris r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 262144;
	// stw r10,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
loc_82583B8C:
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 336);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,336(r31)
	REX_STORE_U32(r31.u32 + 336, ctx.r11.u32);
	// b 0x8258391c
	goto loc_8258391C;
loc_82583BA0:
	// mulli r11,r9,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r3,128(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// b 0x8258391c
	goto loc_8258391C;
}

DEFINE_REX_FUNC(sub_825ADA88) {
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
	ctx.lr = 0x825ADA90;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lwz r30,28(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// addi r27,r10,22852
	r27.s64 = ctx.r10.s64 + 22852;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// addi r26,r9,-8552
	r26.s64 = ctx.r9.s64 + -8552;
	// beq cr6,0x825adae8
	if (ctx.cr6.eq) goto loc_825ADAE8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x825adae8
	if (ctx.cr6.eq) goto loc_825ADAE8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-7072
	ctx.r5.s64 = ctx.r11.s64 + -7072;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,11951
	ctx.r7.s64 = 11951;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825ADAE8;
	sub_824EA978(ctx, base);
loc_825ADAE8:
	// cmplwi cr6,r25,31
	ctx.cr6.compare<uint32_t>(r25.u32, 31, ctx.xer);
	// ble cr6,0x825adb0c
	if (!ctx.cr6.gt) goto loc_825ADB0C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-7096
	ctx.r5.s64 = ctx.r11.s64 + -7096;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,11954
	ctx.r7.s64 = 11954;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825ADB0C;
	sub_824EA978(ctx, base);
loc_825ADB0C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi r28,r11,16
	r28.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,22,20,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xFC0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r11,r11,4200
	ctx.r11.s64 = ctx.r11.s64 + 4200;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x825adb4c
	if (!ctx.cr6.eq) goto loc_825ADB4C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-7168
	ctx.r5.s64 = ctx.r11.s64 + -7168;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,11959
	ctx.r7.s64 = 11959;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825ADB4C;
	sub_824EA978(ctx, base);
loc_825ADB4C:
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r11,r11,6,20,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFC0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,4200
	ctx.r11.s64 = ctx.r11.s64 + 4200;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// bl 0x825a62a0
	ctx.lr = 0x825ADB78;
	sub_825A62A0(ctx, base);
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// addi r4,r30,13152
	ctx.r4.s64 = r30.s64 + 13152;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// bl 0x825a6210
	ctx.lr = 0x825ADBA0;
	sub_825A6210(ctx, base);
	// lwz r11,1636(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1636);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1636(r31)
	REX_STORE_U32(r31.u32 + 1636, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_825B3810) {
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
	ctx.lr = 0x825B3818;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r30,r5,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r29,r11,-4824
	r29.s64 = ctx.r11.s64 + -4824;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// addi r21,r11,22852
	r21.s64 = ctx.r11.s64 + 22852;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r29.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// addi r20,r10,-4368
	r20.s64 = ctx.r10.s64 + -4368;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x825b3880
	if (ctx.cr6.eq) goto loc_825B3880;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// addi r5,r11,-4428
	ctx.r5.s64 = ctx.r11.s64 + -4428;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,680
	ctx.r7.s64 = 680;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B3880;
	sub_824EA978(ctx, base);
loc_825B3880:
	// addi r11,r29,4
	ctx.r11.s64 = r29.s64 + 4;
	// cmpwi cr6,r31,33
	ctx.cr6.compare<int32_t>(r31.s32, 33, ctx.xer);
	// lwzx r30,r30,r11
	r30.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bne cr6,0x825b38d4
	if (!ctx.cr6.eq) goto loc_825B38D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_825B3898:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 21, ctx.xer);
	// beq cr6,0x825b38c0
	if (ctx.cr6.eq) goto loc_825B38C0;
	// cmpwi cr6,r9,22
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 22, ctx.xer);
	// beq cr6,0x825b38c0
	if (ctx.cr6.eq) goto loc_825B38C0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x825b3898
	if (ctx.cr6.lt) goto loc_825B3898;
	// b 0x825b38d4
	goto loc_825B38D4;
loc_825B38C0:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,4
	ctx.r10.s64 = r29.s64 + 4;
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r30,r11,r10
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_825B38D4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bgt cr6,0x825b38f8
	if (ctx.cr6.gt) goto loc_825B38F8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// addi r5,r11,-4440
	ctx.r5.s64 = ctx.r11.s64 + -4440;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r7,694
	ctx.r7.s64 = 694;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B38F8;
	sub_824EA978(ctx, base);
loc_825B38F8:
	// cntlzw r11,r24
	ctx.r11.u64 = r24.u32 == 0 ? 32 : __builtin_clz(r24.u32);
	// lwz r3,4(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lis r7,257
	ctx.r7.s64 = 16842752;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// ori r7,r7,257
	ctx.r7.u64 = ctx.r7.u64 | 257;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x824f10b8
	ctx.lr = 0x825B392C;
	sub_824F10B8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_825B7990) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lfd f0,-20648(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -20648);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x825b79c4
	if (ctx.cr6.lt) goto loc_825B79C4;
loc_825B79B4:
	// lis r11,32640
	ctx.r11.s64 = 2139095040;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// b 0x825b7a04
	goto loc_825B7A04;
loc_825B79C4:
	// fabs f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = f31.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x825b79fc
	if (!ctx.cr6.lt) goto loc_825B79FC;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x826a1930
	ctx.lr = 0x825B79D8;
	sub_826A1930(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x825b79fc
	if (ctx.cr6.eq) goto loc_825B79FC;
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// beq cr6,0x825b79b4
	if (ctx.cr6.eq) goto loc_825B79B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// lfd f1,8312(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 8312);
	// bl 0x8269f778
	ctx.lr = 0x825B79F8;
	sub_8269F778(ctx, base);
	// b 0x825b7a04
	goto loc_825B7A04;
loc_825B79FC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f1,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_825B7A04:
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

DEFINE_REX_FUNC(sub_825B90A0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_825B90A4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b90fc
	if (ctx.cr6.eq) goto loc_825B90FC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825b90c0
	if (ctx.cr0.eq) goto loc_825B90C0;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825b90c8
	if (!ctx.cr0.eq) goto loc_825B90C8;
loc_825B90C0:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x825b90a4
	goto loc_825B90A4;
loc_825B90C8:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,15104
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15104, ctx.xer);
	// beq cr6,0x825b90f0
	if (ctx.cr6.eq) goto loc_825B90F0;
	// rlwinm r11,r3,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x824e4368
	sub_824E4368(ctx, base);
	return;
loc_825B90F0:
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// blr 
	return;
loc_825B90FC:
	// rlwinm r11,r3,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x824e4368
	sub_824E4368(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825BCF88) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_825BCF8C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825bcfb8
	if (!ctx.cr0.eq) goto loc_825BCFB8;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825bcfb8
	if (ctx.cr0.eq) goto loc_825BCFB8;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x825bcf8c
	if (!ctx.cr6.eq) goto loc_825BCF8C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_825BCFB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825BDD18) {
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
	ctx.lr = 0x825BDD20;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f2,244(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// lwz r9,244(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// stfs f3,252(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// lwz r11,252(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// stfs f4,260(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// lwz r10,260(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f1,236(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,236(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// li r8,7
	ctx.r8.s64 = 7;
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// divwu r10,r11,r8
	ctx.r10.u64 = uint32_t(ctx.r8.u32 ? ctx.r11.u32 / ctx.r8.u32 : 0);
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stfs f4,108(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mulli r10,r10,7
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(7));
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r28,r4
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825bde48
	if (ctx.cr6.eq) goto loc_825BDE48;
	// li r25,1
	r25.s64 = 1;
loc_825BDD94:
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// rlwinm. r11,r11,0,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3FC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825bde3c
	if (!ctx.cr0.eq) goto loc_825BDE3C;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r26,r11,18,29,31
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// cmplw cr6,r26,r29
	ctx.cr6.compare<uint32_t>(r26.u32, r29.u32, ctx.xer);
	// blt cr6,0x825bde3c
	if (ctx.cr6.lt) goto loc_825BDE3C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x825bde28
	if (ctx.cr6.eq) goto loc_825BDE28;
	// addi r6,r4,44
	ctx.r6.s64 = ctx.r4.s64 + 44;
loc_825BDDC8:
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r3,0(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_825BDDE0:
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x825bde08
	if (!ctx.cr6.eq) goto loc_825BDE08;
	// li r9,3
	ctx.r9.s64 = 3;
	// slw r24,r25,r10
	r24.u64 = ctx.r10.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r10.u8 & 0x3F));
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// andc r9,r30,r9
	ctx.r9.u64 = r30.u64 & ~ctx.r9.u64;
	// slw r30,r7,r11
	r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// or r5,r24,r5
	ctx.r5.u64 = r24.u64 | ctx.r5.u64;
	// or r30,r9,r30
	r30.u64 = ctx.r9.u64 | r30.u64;
loc_825BDE08:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x825bdde0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825BDDE0;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r7,r26
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r26.u32, ctx.xer);
	// blt cr6,0x825bddc8
	if (ctx.cr6.lt) goto loc_825BDDC8;
loc_825BDE28:
	// slw r11,r25,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (r25.u32 << (r29.u8 & 0x3F));
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825bdeac
	if (ctx.cr0.eq) goto loc_825BDEAC;
loc_825BDE3C:
	// lwz r4,32(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x825bdd94
	if (!ctx.cr6.eq) goto loc_825BDD94;
loc_825BDE48:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825bd9c0
	ctx.lr = 0x825BDE68;
	sub_825BD9C0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// rlwinm r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// lwzx r9,r28,r31
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + r31.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// stw r9,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// stwx r3,r28,r31
	REX_STORE_U32(r28.u32 + r31.u32, ctx.r3.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r8,0(r27)
	REX_STORE_U64(r27.u32 + 0, ctx.r8.u64);
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
loc_825BDEA0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf8
	return;
loc_825BDEAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x825BDEB4;
	sub_8250AB60(ctx, base);
	// clrlwi r8,r30,24
	ctx.r8.u64 = r30.u32 & 0xFF;
	// rlwinm r10,r29,20,9,11
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 20) & 0x700000;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r9,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000;
	// rlwinm r8,r8,0,27,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r8,r8,0,7,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,0(r27)
	REX_STORE_U64(r27.u32 + 0, ctx.r9.u64);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x825bdea0
	goto loc_825BDEA0;
}

DEFINE_REX_FUNC(sub_825CD0A0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1ca8
	ctx.lr = 0x825CD0A8;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ca8
	ctx.lr = 0x825CD0B0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
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
	// beq cr6,0x825cd0dc
	if (ctx.cr6.eq) goto loc_825CD0DC;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82408848
	ctx.lr = 0x825CD0D8;
	sub_82408848(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_825CD0DC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cd0f8
	if (ctx.cr6.eq) goto loc_825CD0F8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c7448
	ctx.lr = 0x825CD0F4;
	sub_825C7448(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_825CD0F8:
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
	// bne 0x825cd168
	if (!ctx.cr0.eq) goto loc_825CD168;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x825cd170
	goto loc_825CD170;
loc_825CD168:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_825CD170:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cd188
	if (ctx.cr6.eq) goto loc_825CD188;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409a88
	ctx.lr = 0x825CD188;
	sub_82409A88(ctx, base);
loc_825CD188:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825cd510
	if (!ctx.cr6.gt) goto loc_825CD510;
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
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f11,15196(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15196);
	ctx.f11.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// lfd f10,20216(r10)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r10.u32 + 20216);
	// rlwinm r25,r30,3,0,28
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f12,20208(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20208);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,17280(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3800(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 3800);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r30,r30,4,0,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f5,13256(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 13256);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// subf r29,r25,r28
	r29.u64 = r28.u64 - r25.u64;
loc_825CD1EC:
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
	// beq cr6,0x825cd424
	if (ctx.cr6.eq) goto loc_825CD424;
	// extsw r7,r4
	ctx.r7.s64 = ctx.r4.s32;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r28,r3
	r28.s64 = ctx.r3.s32;
	// std r7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f4,104(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r28,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r28.u64);
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
	// extsw r28,r6
	r28.s64 = ctx.r6.s32;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// std r28,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, r28.u64);
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
loc_825CD424:
	// cmpwi cr6,r3,32767
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32767, ctx.xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// blt cr6,0x825cd434
	if (ctx.cr6.lt) goto loc_825CD434;
	// li r10,32767
	ctx.r10.s64 = 32767;
loc_825CD434:
	// cmpwi cr6,r10,-32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32767, ctx.xer);
	// ble cr6,0x825cd44c
	if (!ctx.cr6.gt) goto loc_825CD44C;
	// cmpwi cr6,r3,32767
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32767, ctx.xer);
	// blt cr6,0x825cd450
	if (ctx.cr6.lt) goto loc_825CD450;
	// li r3,32767
	ctx.r3.s64 = 32767;
	// b 0x825cd450
	goto loc_825CD450;
loc_825CD44C:
	// li r3,-32767
	ctx.r3.s64 = -32767;
loc_825CD450:
	// cmpwi cr6,r4,32767
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 32767, ctx.xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt cr6,0x825cd460
	if (ctx.cr6.lt) goto loc_825CD460;
	// li r10,32767
	ctx.r10.s64 = 32767;
loc_825CD460:
	// cmpwi cr6,r10,-32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32767, ctx.xer);
	// ble cr6,0x825cd478
	if (!ctx.cr6.gt) goto loc_825CD478;
	// cmpwi cr6,r4,32767
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 32767, ctx.xer);
	// blt cr6,0x825cd47c
	if (ctx.cr6.lt) goto loc_825CD47C;
	// li r4,32767
	ctx.r4.s64 = 32767;
	// b 0x825cd47c
	goto loc_825CD47C;
loc_825CD478:
	// li r4,-32767
	ctx.r4.s64 = -32767;
loc_825CD47C:
	// cmpwi cr6,r5,32767
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 32767, ctx.xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// blt cr6,0x825cd48c
	if (ctx.cr6.lt) goto loc_825CD48C;
	// li r10,32767
	ctx.r10.s64 = 32767;
loc_825CD48C:
	// cmpwi cr6,r10,-32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32767, ctx.xer);
	// ble cr6,0x825cd4a4
	if (!ctx.cr6.gt) goto loc_825CD4A4;
	// cmpwi cr6,r5,32767
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 32767, ctx.xer);
	// blt cr6,0x825cd4a8
	if (ctx.cr6.lt) goto loc_825CD4A8;
	// li r5,32767
	ctx.r5.s64 = 32767;
	// b 0x825cd4a8
	goto loc_825CD4A8;
loc_825CD4A4:
	// li r5,-32767
	ctx.r5.s64 = -32767;
loc_825CD4A8:
	// cmpwi cr6,r6,32767
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 32767, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// blt cr6,0x825cd4b8
	if (ctx.cr6.lt) goto loc_825CD4B8;
	// li r10,32767
	ctx.r10.s64 = 32767;
loc_825CD4B8:
	// cmpwi cr6,r10,-32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32767, ctx.xer);
	// ble cr6,0x825cd4d0
	if (!ctx.cr6.gt) goto loc_825CD4D0;
	// cmpwi cr6,r6,32767
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 32767, ctx.xer);
	// blt cr6,0x825cd4d4
	if (ctx.cr6.lt) goto loc_825CD4D4;
	// li r6,32767
	ctx.r6.s64 = 32767;
	// b 0x825cd4d4
	goto loc_825CD4D4;
loc_825CD4D0:
	// li r6,-32767
	ctx.r6.s64 = -32767;
loc_825CD4D4:
	// extsw r7,r6
	ctx.r7.s64 = ctx.r6.s32;
	// clrldi r10,r5,48
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFF;
	// clrldi r6,r4,48
	ctx.r6.u64 = ctx.r4.u64 & 0xFFFF;
	// rldimi r10,r7,16,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r7.u64, 16) & 0xFFFFFFFFFFFF0000) | (ctx.r10.u64 & 0xFFFF);
	// clrldi r7,r3,48
	ctx.r7.u64 = ctx.r3.u64 & 0xFFFF;
	// rldimi r6,r10,16,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFFFFFFFFFF0000) | (ctx.r6.u64 & 0xFFFF);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// rldimi r7,r6,16,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r6.u64, 16) & 0xFFFFFFFFFFFF0000) | (ctx.r7.u64 & 0xFFFF);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stdux r7,r29,r25
	ea = r29.u32 + r25.u32;
	REX_STORE_U64(ea, ctx.r7.u64);
	r29.u32 = ea;
	// add r9,r30,r9
	ctx.r9.u64 = r30.u64 + ctx.r9.u64;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// add r8,r30,r8
	ctx.r8.u64 = r30.u64 + ctx.r8.u64;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825cd1ec
	if (ctx.cr6.lt) goto loc_825CD1EC;
loc_825CD510:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2cf4
	ctx.lr = 0x825CD51C;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_825E9368) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r11,r10,31
	ctx.r11.s64 = ctx.r10.s64 + 31;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x825e93cc
	if (!ctx.cr6.eq) goto loc_825E93CC;
	// subf r11,r4,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r4.u64;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x825e93bc
	goto loc_825E93BC;
loc_825E9390:
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r10,r3
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// stwx r9,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
loc_825E93BC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825e9390
	if (ctx.cr6.lt) goto loc_825E9390;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_825E93CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825ED900) {
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
	// addi r30,r3,8
	r30.s64 = ctx.r3.s64 + 8;
loc_825ED91C:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825ED930;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ed964
	if (ctx.cr0.eq) goto loc_825ED964;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(r31.s32, 2, ctx.xer);
	// blt cr6,0x825ed91c
	if (ctx.cr6.lt) goto loc_825ED91C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_825ED94C:
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
loc_825ED964:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825ed94c
	goto loc_825ED94C;
}

DEFINE_REX_FUNC(sub_825F2EE0) {
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
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,2136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2136);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825f2f10
	if (ctx.cr0.eq) goto loc_825F2F10;
	// bl 0x825f1ff8
	ctx.lr = 0x825F2F10;
	sub_825F1FF8(ctx, base);
loc_825F2F10:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,2136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2136);
	// rlwinm. r11,r11,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825f2f2c
	if (ctx.cr0.eq) goto loc_825F2F2C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f2250
	ctx.lr = 0x825F2F2C;
	sub_825F2250(ctx, base);
loc_825F2F2C:
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

DEFINE_REX_FUNC(sub_825F4990) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,61
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 61, ctx.xer);
	// bgt cr6,0x825f4b0c
	if (ctx.cr6.gt) goto loc_825F4B0C;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,19320
	ctx.r12.s64 = ctx.r12.s64 + 19320;
	// lbzx r0,r12,r4
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r4.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32161
	ctx.r12.s64 = -2107703296;
	// nop 
	// addi r12,r12,18884
	ctx.r12.s64 = ctx.r12.s64 + 18884;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_825F4ABC;
	case 1:
		goto loc_825F4ABC;
	case 2:
		goto loc_825F49C4;
	case 3:
		goto loc_825F49D8;
	case 4:
		goto loc_825F49F0;
	case 5:
		goto loc_825F4A10;
	case 6:
		goto loc_825F4A64;
	case 7:
		goto loc_825F4A80;
	case 8:
		goto loc_825F49C4;
	case 9:
		goto loc_825F49C4;
	case 10:
		goto loc_825F4A34;
	case 11:
		goto loc_825F4A64;
	case 12:
		goto loc_825F4A64;
	case 13:
		goto loc_825F4B0C;
	case 14:
		goto loc_825F4A64;
	case 15:
		goto loc_825F4A50;
	case 16:
		goto loc_825F4A8C;
	case 17:
		goto loc_825F4A98;
	case 18:
		goto loc_825F4ADC;
	case 19:
		goto loc_825F4AE4;
	case 20:
		goto loc_825F4AE4;
	case 21:
		goto loc_825F4B0C;
	case 22:
		goto loc_825F4AC4;
	case 23:
		goto loc_825F4AC4;
	case 24:
		goto loc_825F4A5C;
	case 25:
		goto loc_825F4AB4;
	case 26:
		goto loc_825F4AD4;
	case 27:
		goto loc_825F4A5C;
	case 28:
		goto loc_825F4AB4;
	case 29:
		goto loc_825F4AD4;
	case 30:
		goto loc_825F4A5C;
	case 31:
		goto loc_825F4AB4;
	case 32:
		goto loc_825F4AD4;
	case 33:
		goto loc_825F4ABC;
	case 34:
		goto loc_825F4ADC;
	case 35:
		goto loc_825F4AE4;
	case 36:
		goto loc_825F4ABC;
	case 37:
		goto loc_825F4ADC;
	case 38:
		goto loc_825F4AE4;
	case 39:
		goto loc_825F4A64;
	case 40:
		goto loc_825F4A64;
	case 41:
		goto loc_825F4A5C;
	case 42:
		goto loc_825F4AB4;
	case 43:
		goto loc_825F49C4;
	case 44:
		goto loc_825F4A64;
	case 45:
		goto loc_825F4A64;
	case 46:
		goto loc_825F4A5C;
	case 47:
		goto loc_825F4A5C;
	case 48:
		goto loc_825F4AB4;
	case 49:
		goto loc_825F4AE4;
	case 50:
		goto loc_825F4A64;
	case 51:
		goto loc_825F4ADC;
	case 52:
		goto loc_825F4AE4;
	case 53:
		goto loc_825F4AE4;
	case 54:
		goto loc_825F4A80;
	case 55:
		goto loc_825F4A8C;
	case 56:
		goto loc_825F4A98;
	case 57:
		goto loc_825F4AEC;
	case 58:
		goto loc_825F4ADC;
	case 59:
		goto loc_825F4ADC;
	case 60:
		goto loc_825F4ADC;
	case 61:
		goto loc_825F4ADC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_825F49C4:
	// li r9,8
	ctx.r9.s64 = 8;
loc_825F49C8:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825f4b18
	goto loc_825F4B18;
loc_825F49D8:
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,1
	ctx.r9.s64 = 1;
loc_825F49E0:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// b 0x825f4b1c
	goto loc_825F4B1C;
loc_825F49F0:
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// b 0x825f4b20
	goto loc_825F4B20;
loc_825F4A10:
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,6
	ctx.r9.s64 = 6;
loc_825F4A18:
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// blr 
	return;
loc_825F4A34:
	// li r9,8
	ctx.r9.s64 = 8;
loc_825F4A38:
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_825F4A3C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x825f4b20
	goto loc_825F4B20;
loc_825F4A50:
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x825f4b14
	goto loc_825F4B14;
loc_825F4A5C:
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x825f49c8
	goto loc_825F49C8;
loc_825F4A64:
	// li r9,8
	ctx.r9.s64 = 8;
loc_825F4A68:
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// blr 
	return;
loc_825F4A80:
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,2
	ctx.r9.s64 = 2;
	// b 0x825f49e0
	goto loc_825F49E0;
loc_825F4A8C:
	// li r10,11
	ctx.r10.s64 = 11;
	// li r9,10
	ctx.r9.s64 = 10;
	// b 0x825f4a18
	goto loc_825F4A18;
loc_825F4A98:
	// li r9,10
	ctx.r9.s64 = 10;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// b 0x825f4b1c
	goto loc_825F4B1C;
loc_825F4AB4:
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x825f4a38
	goto loc_825F4A38;
loc_825F4ABC:
	// li r9,32
	ctx.r9.s64 = 32;
	// b 0x825f49c8
	goto loc_825F49C8;
loc_825F4AC4:
	// li r8,24
	ctx.r8.s64 = 24;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// b 0x825f4a3c
	goto loc_825F4A3C;
loc_825F4AD4:
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x825f4a68
	goto loc_825F4A68;
loc_825F4ADC:
	// li r9,32
	ctx.r9.s64 = 32;
	// b 0x825f4a38
	goto loc_825F4A38;
loc_825F4AE4:
	// li r9,32
	ctx.r9.s64 = 32;
	// b 0x825f4a68
	goto loc_825F4A68;
loc_825F4AEC:
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
loc_825F4B0C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_825F4B14:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_825F4B18:
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_825F4B1C:
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_825F4B20:
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825FA650) {
	REX_FUNC_PROLOGUE();
	// lwz r10,228(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r6,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// ori r10,r10,66
	ctx.r10.u64 = ctx.r10.u64 | 66;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r5,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r5.u32);
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r10,228(r11)
	REX_STORE_U32(ctx.r11.u32 + 228, ctx.r10.u32);
	// b 0x825d7d20
	sub_825D7D20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825FACB0) {
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
	// bl 0x825fa990
	ctx.lr = 0x825FACC8;
	sub_825FA990(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r9,30976
	ctx.r9.s64 = ctx.r9.s64 + 30976;
	// stw r11,172(r3)
	REX_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,176(r3)
	REX_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// stw r11,180(r3)
	REX_STORE_U32(ctx.r3.u32 + 180, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_825FB7F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825FB7F8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r4,139
	ctx.r4.s64 = 139;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825fa990
	ctx.lr = 0x825FB814;
	sub_825FA990(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, r30.u32);
	// addi r11,r11,-31672
	ctx.r11.s64 = ctx.r11.s64 + -31672;
	// stw r29,172(r3)
	REX_STORE_U32(ctx.r3.u32 + 172, r29.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825FD078) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subfic r11,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r11.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825FDD60) {
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
	ctx.lr = 0x825FDD68;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r28,r11,22852
	r28.s64 = ctx.r11.s64 + 22852;
	// addi r27,r10,-20568
	r27.s64 = ctx.r10.s64 + -20568;
	// blt cr6,0x825fdd94
	if (ctx.cr6.lt) goto loc_825FDD94;
	// cmpwi cr6,r4,136
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 136, ctx.xer);
	// blt cr6,0x825fddb0
	if (ctx.cr6.lt) goto loc_825FDDB0;
loc_825FDD94:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-20620
	ctx.r5.s64 = ctx.r11.s64 + -20620;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,68
	ctx.r7.s64 = 68;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825FDDB0;
	sub_824EA978(ctx, base);
loc_825FDDB0:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mulli r30,r31,36
	r30.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(36));
	// addi r31,r11,-26376
	r31.s64 = ctx.r11.s64 + -26376;
	// addi r11,r31,20
	ctx.r11.s64 = r31.s64 + 20;
	// lwzx r29,r30,r11
	r29.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x825fdde8
	if (!ctx.cr6.eq) goto loc_825FDDE8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-20632
	ctx.r5.s64 = ctx.r11.s64 + -20632;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,71
	ctx.r7.s64 = 71;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825FDDE8;
	sub_824EA978(ctx, base);
loc_825FDDE8:
	// lwz r4,12(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 12);
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// bctrl 
	ctx.lr = 0x825FDDF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8260AA38) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8260aa90
	if (ctx.cr0.eq) goto loc_8260AA90;
	// blt cr6,0x8260aa84
	if (ctx.cr6.lt) goto loc_8260AA84;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// beq cr6,0x8260aa78
	if (ctx.cr6.eq) goto loc_8260AA78;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x8260aa6c
	if (ctx.cr6.lt) goto loc_8260AA6C;
	// bne cr6,0x8260aaa8
	if (!ctx.cr6.eq) goto loc_8260AAA8;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,20,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// blr 
	return;
loc_8260AA6C:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,24,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7;
	// blr 
	return;
loc_8260AA78:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,28,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// blr 
	return;
loc_8260AA84:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// blr 
	return;
loc_8260AA90:
	// blt cr6,0x8260aac8
	if (ctx.cr6.lt) goto loc_8260AAC8;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// beq cr6,0x8260aac0
	if (ctx.cr6.eq) goto loc_8260AAC0;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x8260aab8
	if (ctx.cr6.lt) goto loc_8260AAB8;
	// beq cr6,0x8260aab0
	if (ctx.cr6.eq) goto loc_8260AAB0;
loc_8260AAA8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8260AAB0:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_8260AAB8:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_8260AAC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8260AAC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8260C7A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8260C7A8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8260c7cc
	goto loc_8260C7CC;
loc_8260C7B4:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r9,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r9.u32);
loc_8260C7CC:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8260c7b4
	if (!ctx.cr6.eq) goto loc_8260C7B4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// stw r28,116(r31)
	REX_STORE_U32(r31.u32 + 116, r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r28,112(r31)
	REX_STORE_U32(r31.u32 + 112, r28.u32);
	// beq cr6,0x8260c824
	if (ctx.cr6.eq) goto loc_8260C824;
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
loc_8260C7F4:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x8260c814
	if (ctx.cr6.eq) goto loc_8260C814;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8260c814
	if (ctx.cr6.eq) goto loc_8260C814;
	// bl 0x8264c3d0
	ctx.lr = 0x8260C810;
	sub_8264C3D0(ctx, base);
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
loc_8260C814:
	// rotlwi r11,r30,0
	ctx.r11.u64 = __builtin_rotateleft32(r30.u32, 0);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8260c7f4
	if (!ctx.cr6.eq) goto loc_8260C7F4;
loc_8260C824:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8260F478) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// rlwinm. r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x8260f4d4
	if (ctx.cr0.eq) goto loc_8260F4D4;
	// add r7,r3,r5
	ctx.r7.u64 = ctx.r3.u64 + ctx.r5.u64;
loc_8260F4B4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8260f4d4
	if (!ctx.cr0.eq) goto loc_8260F4D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8260f4b4
	if (!ctx.cr6.eq) goto loc_8260F4B4;
loc_8260F4D4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8260f4f4
	if (ctx.cr0.eq) goto loc_8260F4F4;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8260F4E4;
	sub_826A1E70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260e8f8
	ctx.lr = 0x8260F4F0;
	sub_8260E8F8(ctx, base);
	// b 0x8260f4f8
	goto loc_8260F4F8;
loc_8260F4F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8260F4F8:
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

DEFINE_REX_FUNC(sub_82612838) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r11,-15432
	ctx.r11.s64 = ctx.r11.s64 + -15432;
	// addi r10,r10,-15476
	ctx.r10.s64 = ctx.r10.s64 + -15476;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,140(r3)
	REX_STORE_U32(ctx.r3.u32 + 140, ctx.r10.u32);
	// addi r3,r3,664
	ctx.r3.s64 = ctx.r3.s64 + 664;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// bl 0x8260f8f8
	ctx.lr = 0x82612874;
	sub_8260F8F8(ctx, base);
	// addi r3,r31,624
	ctx.r3.s64 = r31.s64 + 624;
	// bl 0x8260f8f8
	ctx.lr = 0x8261287C;
	sub_8260F8F8(ctx, base);
	// addi r3,r31,616
	ctx.r3.s64 = r31.s64 + 616;
	// bl 0x8260ad58
	ctx.lr = 0x82612884;
	sub_8260AD58(ctx, base);
	// addi r3,r31,548
	ctx.r3.s64 = r31.s64 + 548;
	// bl 0x8260f8f8
	ctx.lr = 0x8261288C;
	sub_8260F8F8(ctx, base);
	// addi r3,r31,508
	ctx.r3.s64 = r31.s64 + 508;
	// bl 0x8260f8f8
	ctx.lr = 0x82612894;
	sub_8260F8F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260fcb0
	ctx.lr = 0x8261289C;
	sub_8260FCB0(ctx, base);
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

DEFINE_REX_FUNC(sub_82614D28) {
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
	ctx.lr = 0x82614D30;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,2(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r29,4(r6)
	r29.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82614d90
	if (!ctx.cr6.eq) goto loc_82614D90;
	// clrldi r10,r29,32
	ctx.r10.u64 = r29.u64 & 0xFFFFFFFF;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-14908(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -14908);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82614db8
	if (ctx.cr6.gt) goto loc_82614DB8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82614dc4
	if (ctx.cr6.eq) goto loc_82614DC4;
loc_82614D90:
	// clrldi r11,r29,32
	ctx.r11.u64 = r29.u64 & 0xFFFFFFFF;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-14912(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -14912);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82614dc4
	if (!ctx.cr6.gt) goto loc_82614DC4;
loc_82614DB8:
	// lis r3,-30570
	ctx.r3.s64 = -2003435520;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// b 0x82614e54
	goto loc_82614E54;
loc_82614DC4:
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r30,492
	ctx.r3.s64 = r30.s64 + 492;
	// bl 0x82612560
	ctx.lr = 0x82614DD0;
	sub_82612560(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82614e54
	if (ctx.cr0.lt) goto loc_82614E54;
	// li r11,128
	ctx.r11.s64 = 128;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r9,16
	ctx.r9.s64 = 16;
	// lhz r6,2(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 2);
	// li r8,16
	ctx.r8.s64 = 16;
	// sth r11,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82615350
	ctx.lr = 0x82614E04;
	sub_82615350(ctx, base);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8260fd68
	ctx.lr = 0x82614E20;
	sub_8260FD68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82614e54
	if (ctx.cr0.lt) goto loc_82614E54;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x826134b8
	ctx.lr = 0x82614E34;
	sub_826134B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82614e54
	if (ctx.cr0.lt) goto loc_82614E54;
	// addi r7,r30,472
	ctx.r7.s64 = r30.s64 + 472;
	// addi r6,r30,452
	ctx.r6.s64 = r30.s64 + 452;
	// addi r5,r30,448
	ctx.r5.s64 = r30.s64 + 448;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82614b30
	ctx.lr = 0x82614E54;
	sub_82614B30(ctx, base);
loc_82614E54:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8261BCC8) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
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
	ctx.lr = 0x8261BCFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261BD1C;
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

DEFINE_REX_FUNC(sub_82623020) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82623028;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82623150
	if (ctx.cr6.eq) goto loc_82623150;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82623150
	if (ctx.cr6.lt) goto loc_82623150;
	// lwz r11,472(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82623150
	if (!ctx.cr6.eq) goto loc_82623150;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ed1d8
	ctx.lr = 0x82623060;
	sub_826ED1D8(ctx, base);
	// lwz r10,488(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 488);
	// lwz r9,484(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 484);
	// li r29,3
	r29.s64 = 3;
	// li r28,1
	r28.s64 = 1;
	// lwz r11,336(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 336);
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r28,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r10,452(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 452);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// blt cr6,0x826230a0
	if (ctx.cr6.lt) goto loc_826230A0;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_826230A0:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lhz r9,110(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 110);
	// stw r9,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// bl 0x8263c5a0
	ctx.lr = 0x826230C0;
	sub_8263C5A0(ctx, base);
	// lwz r8,624(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 624);
	// lwz r7,496(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 496);
	// lwz r6,492(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 492);
	// stw r28,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r28.u32);
	// stw r29,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// stw r8,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// stw r7,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// stw r6,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// stw r29,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r29.u32);
	// stw r28,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, r28.u32);
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82623108
	if (ctx.cr6.eq) goto loc_82623108;
	// bl 0x826ed328
	ctx.lr = 0x826230F8;
	sub_826ED328(ctx, base);
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// bl 0x82634e78
	ctx.lr = 0x82623100;
	sub_82634E78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,568(r31)
	REX_STORE_U32(r31.u32 + 568, ctx.r11.u32);
loc_82623108:
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x826e07e0
	ctx.lr = 0x82623110;
	sub_826E07E0(ctx, base);
	// stw r3,568(r31)
	REX_STORE_U32(r31.u32 + 568, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8262312c
	if (!ctx.cr6.eq) goto loc_8262312C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1d08
	return;
loc_8262312C:
	// bl 0x826ed220
	ctx.lr = 0x82623130;
	sub_826ED220(ctx, base);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8263cb78
	ctx.lr = 0x82623144;
	sub_8263CB78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82623150
	if (ctx.cr6.lt) goto loc_82623150;
	// stw r28,472(r30)
	REX_STORE_U32(r30.u32 + 472, r28.u32);
loc_82623150:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826293B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826293B8;
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-8064(r1)
	ea = -8064 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r3,56
	r30.s64 = ctx.r3.s64 + 56;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// ble cr6,0x826293e4
	if (!ctx.cr6.gt) goto loc_826293E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,40(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82793e24
	ctx.lr = 0x826293E4;
	__imp__KeSetEvent(ctx, base);
loc_826293E4:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r29,r1,96
	r29.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r3,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r3.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// bl 0x82794224
	ctx.lr = 0x82629430;
	__imp__KeWaitForMultipleObjects(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x826294a0
	if (!ctx.cr6.eq) goto loc_826294A0;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r11,r1,1888
	ctx.r11.s64 = ctx.r1.s64 + 1888;
	// li r8,256
	ctx.r8.s64 = 256;
loc_82629444:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r7,r11,-1024
	ctx.r7.s64 = ctx.r11.s64 + -1024;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82629450:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stfsu f0,1024(r7)
	ea = 1024 + ctx.r7.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x82629450
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82629450;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82629444
	if (!ctx.cr0.eq) goto loc_82629444;
	// addi r4,r1,1888
	ctx.r4.s64 = ctx.r1.s64 + 1888;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826291f0
	ctx.lr = 0x82629478;
	sub_826291F0(ctx, base);
	// addi r4,r1,1888
	ctx.r4.s64 = ctx.r1.s64 + 1888;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x82794234
	ctx.lr = 0x82629484;
	__imp__XAudioSubmitRenderDriverFrame(ctx, base);
loc_82629484:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r11,0,r30
	ea = r30.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap64(ctx.reserved.u64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stdcx. r11,0,r30
	ea = r30.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r11.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82629484
	if (!ctx.cr0.eq) goto loc_82629484;
loc_826294A0:
	// addi r1,r1,8064
	ctx.r1.s64 = ctx.r1.s64 + 8064;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82635218) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca0
	ctx.lr = 0x82635220;
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,332(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82635244
	if (ctx.cr6.eq) goto loc_82635244;
	// lhz r30,0(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// b 0x82635248
	goto loc_82635248;
loc_82635244:
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82635248:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r3,292(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// li r29,1
	r29.s64 = 1;
	// lwz r27,324(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r26,276(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r25,284(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r11,r29,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r11.u8 & 0x3F));
	// lhz r24,302(r1)
	r24.u64 = REX_LOAD_U16(ctx.r1.u32 + 302);
	// lhz r23,310(r1)
	r23.u64 = REX_LOAD_U16(ctx.r1.u32 + 310);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r9,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r9.u32);
	// srawi r9,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 3;
	// not r22,r11
	r22.u64 = ~ctx.r11.u64;
	// sth r10,110(r31)
	REX_STORE_U16(r31.u32 + 110, ctx.r10.u16);
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// clrlwi r10,r30,16
	ctx.r10.u64 = r30.u32 & 0xFFFF;
	// stw r5,820(r31)
	REX_STORE_U32(r31.u32 + 820, ctx.r5.u32);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// stw r6,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r6.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// sth r8,34(r31)
	REX_STORE_U16(r31.u32 + 34, ctx.r8.u16);
	// stw r27,100(r31)
	REX_STORE_U32(r31.u32 + 100, r27.u32);
	// stw r26,104(r31)
	REX_STORE_U32(r31.u32 + 104, r26.u32);
	// stw r25,84(r31)
	REX_STORE_U32(r31.u32 + 84, r25.u32);
	// stw r4,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r4.u32);
	// stw r7,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r7.u32);
	// stw r22,112(r31)
	REX_STORE_U32(r31.u32 + 112, r22.u32);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// stw r24,64(r31)
	REX_STORE_U32(r31.u32 + 64, r24.u32);
	// stw r23,68(r31)
	REX_STORE_U32(r31.u32 + 68, r23.u32);
	// stw r9,620(r31)
	REX_STORE_U32(r31.u32 + 620, ctx.r9.u32);
	// ble cr6,0x826352e4
	if (!ctx.cr6.gt) goto loc_826352E4;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_826352D4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x826352d4
	if (ctx.cr6.gt) goto loc_826352D4;
loc_826352E4:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// stw r9,612(r31)
	REX_STORE_U32(r31.u32 + 612, ctx.r9.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x8263530c
	if (!ctx.cr6.gt) goto loc_8263530C;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_826352FC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x826352fc
	if (ctx.cr6.gt) goto loc_826352FC;
loc_8263530C:
	// lwz r9,176(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,616(r31)
	REX_STORE_U32(r31.u32 + 616, ctx.r8.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82635328
	if (!ctx.cr6.eq) goto loc_82635328;
	// li r9,-129
	ctx.r9.s64 = -129;
	// b 0x82635338
	goto loc_82635338;
loc_82635328:
	// li r9,-651
	ctx.r9.s64 = -651;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// ble cr6,0x82635338
	if (!ctx.cr6.gt) goto loc_82635338;
	// li r9,-907
	ctx.r9.s64 = -907;
loc_82635338:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// and r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x826354e0
	if (!ctx.cr6.eq) goto loc_826354E0;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// addi r6,r9,6036
	ctx.r6.s64 = ctx.r9.s64 + 6036;
	// lbzx r5,r8,r6
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826354e0
	if (ctx.cr6.eq) goto loc_826354E0;
	// rlwinm r9,r11,0,28,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// bne cr6,0x82635380
	if (!ctx.cr6.eq) goto loc_82635380;
	// lis r12,0
	ctx.r12.s64 = 0;
	// ori r12,r12,65525
	ctx.r12.u64 = ctx.r12.u64 | 65525;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
loc_82635380:
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// stw r7,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r7.u32);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r28,456(r31)
	REX_STORE_U32(r31.u32 + 456, r28.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826353a8
	if (ctx.cr6.eq) goto loc_826353A8;
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// stw r29,456(r31)
	REX_STORE_U32(r31.u32 + 456, r29.u32);
	// stw r11,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r11.u32);
	// b 0x82635478
	goto loc_82635478;
loc_826353A8:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826353c8
	if (ctx.cr6.eq) goto loc_826353C8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,456(r31)
	REX_STORE_U32(r31.u32 + 456, ctx.r11.u32);
	// stw r10,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r10.u32);
	// b 0x82635478
	goto loc_82635478;
loc_826353C8:
	// lwz r11,316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x82635478
	if (ctx.cr6.eq) goto loc_82635478;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r7
	ctx.r10.s64 = ctx.r7.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fdiv f1,f12,f11
	ctx.f1.f64 = ctx.f12.f64 / ctx.f11.f64;
	// bl 0x826a16a0
	ctx.lr = 0x826353FC;
	sub_826A16A0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lfd f1,8312(r9)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r9.u32 + 8312);
	// bl 0x826a16a0
	ctx.lr = 0x8263540C;
	sub_826A16A0(ctx, base);
	// fdiv f10,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = f31.f64 / ctx.f1.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3716(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f13,3720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x82635440
	if (!ctx.cr6.lt) goto loc_82635440;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82635450
	goto loc_82635450;
loc_82635440:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82635450:
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,456(r31)
	REX_STORE_U32(r31.u32 + 456, ctx.r11.u32);
	// ble cr6,0x8263546c
	if (!ctx.cr6.gt) goto loc_8263546C;
	// sraw r9,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r9.s64 = ctx.r10.s32 >> temp.u32;
	// stw r9,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r9.u32);
	// b 0x82635478
	goto loc_82635478;
loc_8263546C:
	// neg r9,r11
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// slw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// stw r8,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r8.u32);
loc_82635478:
	// lwz r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 456);
	// stw r28,444(r31)
	REX_STORE_U32(r31.u32 + 444, r28.u32);
	// stw r28,448(r31)
	REX_STORE_U32(r31.u32 + 448, r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,460(r31)
	REX_STORE_U32(r31.u32 + 460, r28.u32);
	// bge cr6,0x826354ac
	if (!ctx.cr6.lt) goto loc_826354AC;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r29,448(r31)
	REX_STORE_U32(r31.u32 + 448, r29.u32);
	// stw r11,456(r31)
	REX_STORE_U32(r31.u32 + 456, ctx.r11.u32);
loc_8263549C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_826354A0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_826354AC:
	// ble cr6,0x8263549c
	if (!ctx.cr6.gt) goto loc_8263549C;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,444(r31)
	REX_STORE_U32(r31.u32 + 444, r29.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x826354a0
	if (!ctx.cr6.gt) goto loc_826354A0;
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826354a0
	if (!ctx.cr6.eq) goto loc_826354A0;
	// stw r29,460(r31)
	REX_STORE_U32(r31.u32 + 460, r29.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_826354E0:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_826449A0) {
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
	ctx.lr = 0x826449A8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826450b4
	if (ctx.cr6.eq) goto loc_826450B4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x826450b4
	if (ctx.cr6.eq) goto loc_826450B4;
	// rlwinm r15,r4,30,2,31
	r15.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r5,-268(r1)
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r5.u32);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x826450a8
	if (ctx.cr6.eq) goto loc_826450A8;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// clrlwi r21,r7,16
	r21.u64 = ctx.r7.u32 & 0xFFFF;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r21,-272(r1)
	REX_STORE_U32(ctx.r1.u32 + -272, r21.u32);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lfd f0,-31200(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + -31200);
	// li r16,0
	r16.s64 = 0;
	// addi r19,r11,-26936
	r19.s64 = ctx.r11.s64 + -26936;
	// addi r18,r10,-26964
	r18.s64 = ctx.r10.s64 + -26964;
	// addi r17,r9,-26992
	r17.s64 = ctx.r9.s64 + -26992;
	// b 0x826449fc
	goto loc_826449FC;
loc_826449F8:
	// lwz r21,-272(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
loc_826449FC:
	// cmplw cr6,r15,r21
	ctx.cr6.compare<uint32_t>(r15.u32, r21.u32, ctx.xer);
	// bge cr6,0x82644a08
	if (!ctx.cr6.lt) goto loc_82644A08;
	// mr r21,r15
	r21.u64 = r15.u64;
loc_82644A08:
	// li r10,5
	ctx.r10.s64 = 5;
	// subf r15,r21,r15
	r15.u64 = r15.u64 - r21.u64;
	// addi r8,r3,-4
	ctx.r8.s64 = ctx.r3.s64 + -4;
	// mr r9,r16
	ctx.r9.u64 = r16.u64;
	// addi r11,r1,-256
	ctx.r11.s64 = ctx.r1.s64 + -256;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82644A20:
	// cmplw cr6,r9,r21
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r21.u32, ctx.xer);
	// bge cr6,0x82644a44
	if (!ctx.cr6.lt) goto loc_82644A44;
	// lfsu f13,4(r8)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-264(r1)
	REX_STORE_U64(ctx.r1.u32 + -264, ctx.f12.u64);
	// lwz r10,-260(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82644a48
	goto loc_82644A48;
loc_82644A44:
	// stw r16,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r16.u32);
loc_82644A48:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82644a20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82644A20;
	// lwz r22,-240(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// addi r20,r3,8
	r20.s64 = ctx.r3.s64 + 8;
	// lwz r24,-244(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// lwz r26,-248(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// lwz r25,-252(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// lwz r23,-256(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
loc_82644A70:
	// lwzx r30,r6,r17
	r30.u64 = REX_LOAD_U32(ctx.r6.u32 + r17.u32);
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// lwzx r29,r6,r18
	r29.u64 = REX_LOAD_U32(ctx.r6.u32 + r18.u32);
	// mullw r11,r25,r30
	ctx.r11.s64 = int64_t(r25.s32) * int64_t(r30.s32);
	// stwx r16,r6,r31
	REX_STORE_U32(ctx.r6.u32 + r31.u32, r16.u32);
	// mullw r10,r23,r29
	ctx.r10.s64 = int64_t(r23.s32) * int64_t(r29.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// subf r8,r26,r11
	ctx.r8.u64 = ctx.r11.u64 - r26.u64;
	// bgt cr6,0x82644aa0
	if (ctx.cr6.gt) goto loc_82644AA0;
	// subf r8,r11,r26
	ctx.r8.u64 = r26.u64 - ctx.r11.u64;
loc_82644AA0:
	// mullw r11,r26,r30
	ctx.r11.s64 = int64_t(r26.s32) * int64_t(r30.s32);
	// mullw r10,r25,r29
	ctx.r10.s64 = int64_t(r25.s32) * int64_t(r29.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r24.s32, ctx.xer);
	// subf r9,r24,r11
	ctx.r9.u64 = ctx.r11.u64 - r24.u64;
	// bgt cr6,0x82644ac0
	if (ctx.cr6.gt) goto loc_82644AC0;
	// subf r9,r11,r24
	ctx.r9.u64 = r24.u64 - ctx.r11.u64;
loc_82644AC0:
	// mullw r10,r26,r29
	ctx.r10.s64 = int64_t(r26.s32) * int64_t(r29.s32);
	// mullw r11,r24,r30
	ctx.r11.s64 = int64_t(r24.s32) * int64_t(r30.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// ble cr6,0x82644ae4
	if (!ctx.cr6.gt) goto loc_82644AE4;
	// subf r11,r22,r11
	ctx.r11.u64 = ctx.r11.u64 - r22.u64;
	// b 0x82644ae8
	goto loc_82644AE8;
loc_82644AE4:
	// subf r11,r11,r22
	ctx.r11.u64 = r22.u64 - ctx.r11.u64;
loc_82644AE8:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// divw r10,r11,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// bge cr6,0x82644b00
	if (!ctx.cr6.lt) goto loc_82644B00;
	// li r10,16
	ctx.r10.s64 = 16;
loc_82644B00:
	// addi r8,r1,-192
	ctx.r8.s64 = ctx.r1.s64 + -192;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r28,2
	r28.s64 = 2;
	// stwx r10,r6,r8
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r10.u32);
	// cmplwi cr6,r21,2
	ctx.cr6.compare<uint32_t>(r21.u32, 2, ctx.xer);
	// ble cr6,0x82644e88
	if (!ctx.cr6.gt) goto loc_82644E88;
	// addi r8,r21,-2
	ctx.r8.s64 = r21.s64 + -2;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x82644dc8
	if (ctx.cr6.lt) goto loc_82644DC8;
	// addi r27,r21,-3
	r27.s64 = r21.s64 + -3;
loc_82644B30:
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mullw r8,r11,r29
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// mullw r11,r9,r30
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-264(r1)
	REX_STORE_U64(ctx.r1.u32 + -264, ctx.f11.u64);
	// lwz r7,-260(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// subf r8,r11,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r11.u64;
	// divw r8,r8,r10
	ctx.r8.u64 = uint32_t((ctx.r10.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r8.s32 / ctx.r10.s32 : 0);
	// cmpwi cr6,r8,7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 7, ctx.xer);
	// ble cr6,0x82644b6c
	if (!ctx.cr6.gt) goto loc_82644B6C;
	// li r8,7
	ctx.r8.s64 = 7;
	// b 0x82644b78
	goto loc_82644B78;
loc_82644B6C:
	// cmpwi cr6,r8,-8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -8, ctx.xer);
	// bge cr6,0x82644b78
	if (!ctx.cr6.lt) goto loc_82644B78;
	// li r8,-8
	ctx.r8.s64 = -8;
loc_82644B78:
	// mullw r4,r8,r10
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x82644b90
	if (!ctx.cr6.gt) goto loc_82644B90;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x82644b9c
	goto loc_82644B9C;
loc_82644B90:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x82644b9c
	if (!ctx.cr6.lt) goto loc_82644B9C;
	// li r11,-32768
	ctx.r11.s64 = -32768;
loc_82644B9C:
	// rlwinm r8,r8,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// lwzx r4,r8,r19
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + r19.u32);
	// mullw r10,r4,r10
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// srawi r4,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 8;
	// cmpwi cr6,r4,16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16, ctx.xer);
	// bge cr6,0x82644bb8
	if (!ctx.cr6.lt) goto loc_82644BB8;
	// li r4,16
	ctx.r4.s64 = 16;
loc_82644BB8:
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mullw r10,r9,r29
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(r29.s32);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// lwzx r8,r6,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// subf r7,r7,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r7.u64;
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-264(r1)
	REX_STORE_U64(ctx.r1.u32 + -264, ctx.f11.u64);
	// mullw r9,r11,r30
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// mullw r14,r7,r7
	r14.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// lwz r7,-260(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r10,r14,7
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x7F) != 0);
	ctx.r10.s64 = r14.s32 >> 7;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r14,r9,r7
	r14.u64 = ctx.r7.u64 - ctx.r9.u64;
	// stwx r10,r6,r31
	REX_STORE_U32(ctx.r6.u32 + r31.u32, ctx.r10.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// divw r10,r14,r4
	ctx.r10.u64 = uint32_t((ctx.r4.s32 && !(r14.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? r14.s32 / ctx.r4.s32 : 0);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// ble cr6,0x82644c10
	if (!ctx.cr6.gt) goto loc_82644C10;
	// li r10,7
	ctx.r10.s64 = 7;
	// b 0x82644c1c
	goto loc_82644C1C;
loc_82644C10:
	// cmpwi cr6,r10,-8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -8, ctx.xer);
	// bge cr6,0x82644c1c
	if (!ctx.cr6.lt) goto loc_82644C1C;
	// li r10,-8
	ctx.r10.s64 = -8;
loc_82644C1C:
	// mullw r11,r4,r10
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x82644c34
	if (!ctx.cr6.gt) goto loc_82644C34;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x82644c40
	goto loc_82644C40;
loc_82644C34:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x82644c40
	if (!ctx.cr6.lt) goto loc_82644C40;
	// li r11,-32768
	ctx.r11.s64 = -32768;
loc_82644C40:
	// rlwinm r10,r10,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// lwzx r9,r10,r19
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r19.u32);
	// mullw r4,r9,r4
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// cmpwi cr6,r4,16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16, ctx.xer);
	// bge cr6,0x82644c5c
	if (!ctx.cr6.lt) goto loc_82644C5C;
	// li r4,16
	ctx.r4.s64 = 16;
loc_82644C5C:
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// subf r7,r7,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r7.u64;
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// mullw r9,r8,r29
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(r29.s32);
	// lwzx r8,r6,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-264(r1)
	REX_STORE_U64(ctx.r1.u32 + -264, ctx.f11.u64);
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// mullw r14,r7,r7
	r14.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// lwz r7,-260(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r10,r14,7
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x7F) != 0);
	ctx.r10.s64 = r14.s32 >> 7;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r14,r9,r7
	r14.u64 = ctx.r7.u64 - ctx.r9.u64;
	// stwx r10,r6,r31
	REX_STORE_U32(ctx.r6.u32 + r31.u32, ctx.r10.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// divw r10,r14,r4
	ctx.r10.u64 = uint32_t((ctx.r4.s32 && !(r14.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? r14.s32 / ctx.r4.s32 : 0);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// ble cr6,0x82644cb4
	if (!ctx.cr6.gt) goto loc_82644CB4;
	// li r10,7
	ctx.r10.s64 = 7;
	// b 0x82644cc0
	goto loc_82644CC0;
loc_82644CB4:
	// cmpwi cr6,r10,-8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -8, ctx.xer);
	// bge cr6,0x82644cc0
	if (!ctx.cr6.lt) goto loc_82644CC0;
	// li r10,-8
	ctx.r10.s64 = -8;
loc_82644CC0:
	// mullw r11,r4,r10
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x82644cd8
	if (!ctx.cr6.gt) goto loc_82644CD8;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x82644ce4
	goto loc_82644CE4;
loc_82644CD8:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x82644ce4
	if (!ctx.cr6.lt) goto loc_82644CE4;
	// li r11,-32768
	ctx.r11.s64 = -32768;
loc_82644CE4:
	// rlwinm r10,r10,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// lwzx r9,r10,r19
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r19.u32);
	// mullw r4,r9,r4
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// cmpwi cr6,r4,16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16, ctx.xer);
	// bge cr6,0x82644d00
	if (!ctx.cr6.lt) goto loc_82644D00;
	// li r4,16
	ctx.r4.s64 = 16;
loc_82644D00:
	// lfs f13,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// subf r7,r7,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r7.u64;
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// mullw r9,r8,r29
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(r29.s32);
	// lwzx r8,r6,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-264(r1)
	REX_STORE_U64(ctx.r1.u32 + -264, ctx.f11.u64);
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// mullw r14,r7,r7
	r14.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// lwz r7,-260(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r10,r14,7
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x7F) != 0);
	ctx.r10.s64 = r14.s32 >> 7;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r10,r9,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r9.u64;
	// stwx r8,r6,r31
	REX_STORE_U32(ctx.r6.u32 + r31.u32, ctx.r8.u32);
	// divw r10,r10,r4
	ctx.r10.u64 = uint32_t((ctx.r4.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r10.s32 / ctx.r4.s32 : 0);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// ble cr6,0x82644d54
	if (!ctx.cr6.gt) goto loc_82644D54;
	// li r10,7
	ctx.r10.s64 = 7;
	// b 0x82644d60
	goto loc_82644D60;
loc_82644D54:
	// cmpwi cr6,r10,-8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -8, ctx.xer);
	// bge cr6,0x82644d60
	if (!ctx.cr6.lt) goto loc_82644D60;
	// li r10,-8
	ctx.r10.s64 = -8;
loc_82644D60:
	// mullw r8,r4,r10
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpwi cr6,r9,32767
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32767, ctx.xer);
	// ble cr6,0x82644d78
	if (!ctx.cr6.gt) goto loc_82644D78;
	// li r9,32767
	ctx.r9.s64 = 32767;
	// b 0x82644d84
	goto loc_82644D84;
loc_82644D78:
	// cmpwi cr6,r9,-32768
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -32768, ctx.xer);
	// bge cr6,0x82644d84
	if (!ctx.cr6.lt) goto loc_82644D84;
	// li r9,-32768
	ctx.r9.s64 = -32768;
loc_82644D84:
	// rlwinm r10,r10,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// lwzx r8,r10,r19
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r19.u32);
	// mullw r4,r8,r4
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// bge cr6,0x82644da0
	if (!ctx.cr6.lt) goto loc_82644DA0;
	// li r10,16
	ctx.r10.s64 = 16;
loc_82644DA0:
	// subf r8,r7,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r7.u64;
	// lwzx r7,r6,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// mullw r4,r8,r8
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// srawi r8,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 7;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(r28.u32, r27.u32, ctx.xer);
	// stwx r8,r6,r31
	REX_STORE_U32(ctx.r6.u32 + r31.u32, ctx.r8.u32);
	// blt cr6,0x82644b30
	if (ctx.cr6.lt) goto loc_82644B30;
loc_82644DC8:
	// cmplw cr6,r28,r21
	ctx.cr6.compare<uint32_t>(r28.u32, r21.u32, ctx.xer);
	// bge cr6,0x82644e88
	if (!ctx.cr6.lt) goto loc_82644E88;
	// subf r8,r28,r21
	ctx.r8.u64 = r21.u64 - r28.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82644DD8:
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// mullw r8,r9,r30
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-264(r1)
	REX_STORE_U64(ctx.r1.u32 + -264, ctx.f11.u64);
	// lwz r7,-260(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// srawi r8,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 8;
	// subf r4,r8,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r8.u64;
	// divw r11,r4,r10
	ctx.r11.u64 = uint32_t((ctx.r10.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r4.s32 / ctx.r10.s32 : 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x82644e14
	if (!ctx.cr6.gt) goto loc_82644E14;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82644e20
	goto loc_82644E20;
loc_82644E14:
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x82644e20
	if (!ctx.cr6.lt) goto loc_82644E20;
	// li r11,-8
	ctx.r11.s64 = -8;
loc_82644E20:
	// mullw r4,r11,r10
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// cmpwi cr6,r8,32767
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32767, ctx.xer);
	// ble cr6,0x82644e38
	if (!ctx.cr6.gt) goto loc_82644E38;
	// li r8,32767
	ctx.r8.s64 = 32767;
	// b 0x82644e44
	goto loc_82644E44;
loc_82644E38:
	// cmpwi cr6,r8,-32768
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -32768, ctx.xer);
	// bge cr6,0x82644e44
	if (!ctx.cr6.lt) goto loc_82644E44;
	// li r8,-32768
	ctx.r8.s64 = -32768;
loc_82644E44:
	// rlwinm r11,r11,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// lwzx r4,r11,r19
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r19.u32);
	// mullw r11,r4,r10
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// bge cr6,0x82644e60
	if (!ctx.cr6.lt) goto loc_82644E60;
	// li r10,16
	ctx.r10.s64 = 16;
loc_82644E60:
	// subf r4,r7,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lwzx r7,r6,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mullw r9,r4,r4
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r4.s32);
	// srawi r9,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 7;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stwx r7,r6,r31
	REX_STORE_U32(ctx.r6.u32 + r31.u32, ctx.r7.u32);
	// bdnz 0x82644dd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82644DD8;
loc_82644E88:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplwi cr6,r6,28
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 28, ctx.xer);
	// blt cr6,0x82644a70
	if (ctx.cr6.lt) goto loc_82644A70;
	// lwz r10,-224(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// lwz r9,-220(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82644eb0
	if (!ctx.cr6.lt) goto loc_82644EB0;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82644EB0:
	// lwz r9,-216(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82644ec4
	if (!ctx.cr6.lt) goto loc_82644EC4;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82644EC4:
	// lwz r9,-212(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82644ed8
	if (!ctx.cr6.lt) goto loc_82644ED8;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82644ED8:
	// lwz r9,-208(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82644eec
	if (!ctx.cr6.lt) goto loc_82644EEC;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82644EEC:
	// lwz r9,-204(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82644f00
	if (!ctx.cr6.lt) goto loc_82644F00;
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82644F00:
	// lwz r9,-200(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82644f10
	if (!ctx.cr6.lt) goto loc_82644F10;
	// li r11,6
	ctx.r11.s64 = 6;
loc_82644F10:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-192
	ctx.r9.s64 = ctx.r1.s64 + -192;
	// addic. r8,r21,-2
	ctx.xer.ca = r21.u32 > 1;
	ctx.r8.s64 = r21.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwzx r31,r10,r17
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + r17.u32);
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r30,r10,r18
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + r18.u32);
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// stb r11,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// sthu r9,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r5.u32 = ea;
	// sthu r25,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, r25.u16);
	ctx.r5.u32 = ea;
	// sthu r23,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, r23.u16);
	ctx.r5.u32 = ea;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// beq 0x826450a0
	if (ctx.cr0.eq) goto loc_826450A0;
loc_82644F4C:
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mullw r11,r30,r10
	ctx.r11.s64 = int64_t(r30.s32) * int64_t(ctx.r10.s32);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// mullw r10,r31,r4
	ctx.r10.s64 = int64_t(r31.s32) * int64_t(ctx.r4.s32);
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-264(r1)
	REX_STORE_U64(ctx.r1.u32 + -264, ctx.f11.u64);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-260(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subf r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw r6,r7,r9
	ctx.r6.u64 = uint32_t((ctx.r9.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r7.s32 / ctx.r9.s32 : 0);
	// cmpwi cr6,r6,7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 7, ctx.xer);
	// ble cr6,0x82644f90
	if (!ctx.cr6.gt) goto loc_82644F90;
	// li r6,7
	ctx.r6.s64 = 7;
	// b 0x82644f9c
	goto loc_82644F9C;
loc_82644F90:
	// cmpwi cr6,r6,-8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -8, ctx.xer);
	// bge cr6,0x82644f9c
	if (!ctx.cr6.lt) goto loc_82644F9C;
	// li r6,-8
	ctx.r6.s64 = -8;
loc_82644F9C:
	// mullw r10,r6,r9
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x82644fb4
	if (!ctx.cr6.gt) goto loc_82644FB4;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x82644fc0
	goto loc_82644FC0;
loc_82644FB4:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x82644fc0
	if (!ctx.cr6.lt) goto loc_82644FC0;
	// li r11,-32768
	ctx.r11.s64 = -32768;
loc_82644FC0:
	// rlwinm r10,r6,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// lwzx r7,r10,r19
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + r19.u32);
	// mullw r10,r7,r9
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// bge cr6,0x82644fdc
	if (!ctx.cr6.lt) goto loc_82644FDC;
	// li r9,16
	ctx.r9.s64 = 16;
loc_82644FDC:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82645088
	if (ctx.cr6.eq) goto loc_82645088;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mullw r11,r31,r11
	ctx.r11.s64 = int64_t(r31.s32) * int64_t(ctx.r11.s32);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(r30.s32) * int64_t(ctx.r10.s32);
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-264(r1)
	REX_STORE_U64(ctx.r1.u32 + -264, ctx.f11.u64);
	// lwz r7,-260(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subf r11,r10,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r10.u64;
	// divw r11,r11,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r11.s32 / ctx.r9.s32 : 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x82645030
	if (!ctx.cr6.gt) goto loc_82645030;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8264503c
	goto loc_8264503C;
loc_82645030:
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x8264503c
	if (!ctx.cr6.lt) goto loc_8264503C;
	// li r11,-8
	ctx.r11.s64 = -8;
loc_8264503C:
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmpwi cr6,r7,32767
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 32767, ctx.xer);
	// ble cr6,0x82645054
	if (!ctx.cr6.gt) goto loc_82645054;
	// li r7,32767
	ctx.r7.s64 = 32767;
	// b 0x82645060
	goto loc_82645060;
loc_82645054:
	// cmpwi cr6,r7,-32768
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -32768, ctx.xer);
	// bge cr6,0x82645060
	if (!ctx.cr6.lt) goto loc_82645060;
	// li r7,-32768
	ctx.r7.s64 = -32768;
loc_82645060:
	// rlwinm r10,r11,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// lwzx r10,r10,r19
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r19.u32);
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// bge cr6,0x8264507c
	if (!ctx.cr6.lt) goto loc_8264507C;
	// li r9,16
	ctx.r9.s64 = 16;
loc_8264507C:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// b 0x8264508c
	goto loc_8264508C;
loc_82645088:
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
loc_8264508C:
	// rlwimi r11,r6,4,0,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stb r11,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bne cr6,0x82644f4c
	if (!ctx.cr6.eq) goto loc_82644F4C;
loc_826450A0:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// bne cr6,0x826449f8
	if (!ctx.cr6.eq) goto loc_826449F8;
loc_826450A8:
	// lwz r11,-268(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// subf r3,r11,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r11.u64;
	// b 0x826a1cd0
	return;
loc_826450B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82674AA8) {
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
	ctx.lr = 0x82674AB0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,4626
	ctx.r8.s64 = 303169536;
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r7,16(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,40(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// ori r23,r8,4626
	r23.u64 = ctx.r8.u64 | 4626;
	// subf r8,r7,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r7.u64;
	// lwz r10,44(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// addi r11,r11,29
	ctx.r11.s64 = ctx.r11.s64 + 29;
	// lwz r19,48(r4)
	r19.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// addi r9,r4,116
	ctx.r9.s64 = ctx.r4.s64 + 116;
	// rlwinm. r22,r8,27,31,31
	r22.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// add r21,r11,r4
	r21.u64 = ctx.r11.u64 + ctx.r4.u64;
	// beq 0x82674b0c
	if (ctx.cr0.eq) goto loc_82674B0C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x82674b20
	goto loc_82674B20;
loc_82674B0C:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// li r11,2
	ctx.r11.s64 = 2;
	// subf r8,r8,r23
	ctx.r8.u64 = r23.u64 - ctx.r8.u64;
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r8,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82674B20:
	// addi r25,r10,1
	r25.s64 = ctx.r10.s64 + 1;
	// lis r10,13364
	ctx.r10.s64 = 875823104;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// ori r20,r10,13364
	r20.u64 = ctx.r10.u64 | 13364;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bge cr6,0x82674c08
	if (!ctx.cr6.lt) goto loc_82674C08;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r21
	ctx.r10.u64 = ctx.r11.u64 + r21.u64;
	// add r30,r11,r9
	r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r28,r10,-4
	r28.s64 = ctx.r10.s64 + -4;
loc_82674B48:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bne cr6,0x82674be4
	if (!ctx.cr6.eq) goto loc_82674BE4;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r23.s32, ctx.xer);
	// bne cr6,0x82674bac
	if (!ctx.cr6.eq) goto loc_82674BAC;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bge cr6,0x82674bb4
	if (!ctx.cr6.lt) goto loc_82674BB4;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82674B88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82674610
	ctx.lr = 0x82674BA4;
	sub_82674610(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82674c78
	if (!ctx.cr0.eq) goto loc_82674C78;
loc_82674BAC:
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82674bb8
	goto loc_82674BB8;
loc_82674BB4:
	// stw r20,0(r30)
	REX_STORE_U32(r30.u32 + 0, r20.u32);
loc_82674BB8:
	// addic. r19,r19,-1
	ctx.xer.ca = r19.u32 > 0;
	r19.s64 = r19.s64 + -1;
	ctx.cr0.compare<int32_t>(r19.s32, 0, ctx.xer);
	// stw r19,48(r31)
	REX_STORE_U32(r31.u32 + 48, r19.u32);
	// bne 0x82674bf4
	if (!ctx.cr0.eq) goto loc_82674BF4;
loc_82674BC4:
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
	// bne 0x82674bc4
	if (!ctx.cr0.eq) goto loc_82674BC4;
	// b 0x82674bf4
	goto loc_82674BF4;
loc_82674BE4:
	// subf r11,r11,r23
	ctx.r11.u64 = r23.u64 - ctx.r11.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 & ctx.r8.u64;
loc_82674BF4:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(r27.u32, r25.u32, ctx.xer);
	// blt cr6,0x82674b48
	if (ctx.cr6.lt) goto loc_82674B48;
loc_82674C08:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82674c74
	if (ctx.cr6.eq) goto loc_82674C74;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// stw r20,108(r31)
	REX_STORE_U32(r31.u32 + 108, r20.u32);
	// beq cr6,0x82674c28
	if (ctx.cr6.eq) goto loc_82674C28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82672e90
	ctx.lr = 0x82674C24;
	sub_82672E90(ctx, base);
	// b 0x82674c6c
	goto loc_82674C6C;
loc_82674C28:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
loc_82674C34:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r31
	ea = r31.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82674c34
	if (!ctx.cr0.eq) goto loc_82674C34;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,0(r21)
	ctx.r5.u64 = REX_LOAD_U32(r21.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82674C6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82674C6C:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82674c78
	if (!ctx.cr0.eq) goto loc_82674C78;
loc_82674C74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82674C78:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_8267F9C8) {
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
	ctx.lr = 0x8267F9D0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,2256
	ctx.r4.s64 = 2256;
	// li r3,2
	ctx.r3.s64 = 2;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// bl 0x8265d838
	ctx.lr = 0x8267FA00;
	sub_8265D838(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8267fa14
	if (!ctx.cr0.eq) goto loc_8267FA14;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x8267fb1c
	goto loc_8267FB1C;
loc_8267FA14:
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267eb10
	ctx.lr = 0x8267FA30;
	sub_8267EB10(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,534
	ctx.r9.s64 = r31.s64 + 534;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8267FA40:
	// lhzu r10,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x8267fa40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8267FA40;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8267fa64
	if (!ctx.cr6.gt) goto loc_8267FA64;
	// lis r30,-32646
	r30.s64 = -2139488256;
	// ori r30,r30,4101
	r30.u64 = r30.u64 | 4101;
	// b 0x8267fafc
	goto loc_8267FAFC;
loc_8267FA64:
	// lwz r9,152(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 152);
	// add r30,r9,r11
	r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8267fa78
	if (!ctx.cr6.gt) goto loc_8267FA78;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
loc_8267FA78:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8267facc
	if (ctx.cr6.eq) goto loc_8267FACC;
	// lwz r11,548(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 548);
	// addi r3,r31,540
	ctx.r3.s64 = r31.s64 + 540;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8267faa0
	if (!ctx.cr6.gt) goto loc_8267FAA0;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82679360
	ctx.lr = 0x8267FA9C;
	sub_82679360(ctx, base);
	// b 0x8267faa4
	goto loc_8267FAA4;
loc_8267FAA0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8267FAA4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8267fac0
	if (ctx.cr6.eq) goto loc_8267FAC0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,476
	ctx.r3.s64 = r31.s64 + 476;
	// bl 0x826823a8
	ctx.lr = 0x8267FAB8;
	sub_826823A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8267facc
	if (!ctx.cr0.eq) goto loc_8267FACC;
loc_8267FAC0:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x8267fafc
	goto loc_8267FAFC;
loc_8267FACC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82681660
	ctx.lr = 0x8267FAD4;
	sub_82681660(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8267fafc
	if (ctx.cr0.lt) goto loc_8267FAFC;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267eef8
	ctx.lr = 0x8267FAEC;
	sub_8267EEF8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x8267fb18
	if (!ctx.cr0.lt) goto loc_8267FB18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82681670
	ctx.lr = 0x8267FAFC;
	sub_82681670(ctx, base);
loc_8267FAFC:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// bl 0x82676d18
	ctx.lr = 0x8267FB10;
	sub_82676D18(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// b 0x8267fb1c
	goto loc_8267FB1C;
loc_8267FB18:
	// li r30,0
	r30.s64 = 0;
loc_8267FB1C:
	// stw r31,0(r23)
	REX_STORE_U32(r23.u32 + 0, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8268565C) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82685930) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82685938;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,204(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826859d4
	if (!ctx.cr0.eq) goto loc_826859D4;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// stw r10,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r10.u32);
	// bl 0x82682a90
	ctx.lr = 0x82685968;
	sub_82682A90(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r30,r31,48
	r30.s64 = r31.s64 + 48;
	// b 0x82685994
	goto loc_82685994;
loc_82685974:
	// subf r10,r11,r30
	ctx.r10.u64 = r30.u64 - ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x82687870
	ctx.lr = 0x82685990;
	sub_82687870(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_82685994:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x82685974
	if (!ctx.cr6.eq) goto loc_82685974;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x826859b4
	if (ctx.cr6.eq) goto loc_826859B4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82685610
	ctx.lr = 0x826859B4;
	sub_82685610(ctx, base);
loc_826859B4:
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 208);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r11.u32);
	// bne cr6,0x826859d4
	if (!ctx.cr6.eq) goto loc_826859D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82684848
	ctx.lr = 0x826859D4;
	sub_82684848(ctx, base);
loc_826859D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82689E58) {
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
	ctx.lr = 0x82689E60;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,232
	r26.s64 = ctx.r3.s64 + 232;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r28,0
	r28.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// bl 0x827938a4
	ctx.lr = 0x82689E7C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82689f80
	if (ctx.cr6.eq) goto loc_82689F80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,272(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 272);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82793624
	ctx.lr = 0x82689E9C;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82689ee8
	if (ctx.cr0.eq) goto loc_82689EE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82689ee0
	if (ctx.cr6.eq) goto loc_82689EE0;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x82689edc
	if (ctx.cr6.eq) goto loc_82689EDC;
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82689ee8
	if (!ctx.cr6.gt) goto loc_82689EE8;
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82689ee0
	if (!ctx.cr6.gt) goto loc_82689EE0;
	// b 0x82689ee8
	goto loc_82689EE8;
loc_82689EDC:
	// li r27,1
	r27.s64 = 1;
loc_82689EE0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r11.u32);
loc_82689EE8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826896f8
	ctx.lr = 0x82689EF0;
	sub_826896F8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r30,r31,68
	r30.s64 = r31.s64 + 68;
	// li r29,4
	r29.s64 = 4;
loc_82689EFC:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x82689f24
	if (ctx.cr6.eq) goto loc_82689F24;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x8260fbd8
	ctx.lr = 0x82689F0C;
	sub_8260FBD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82689f24
	if (ctx.cr0.eq) goto loc_82689F24;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,208(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stw r10,208(r11)
	REX_STORE_U32(ctx.r11.u32 + 208, ctx.r10.u32);
loc_82689F24:
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// bl 0x8268c690
	ctx.lr = 0x82689F2C;
	sub_8268C690(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82689efc
	if (!ctx.cr0.eq) goto loc_82689EFC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82689f78
	if (!ctx.cr6.gt) goto loc_82689F78;
	// addi r30,r31,88
	r30.s64 = r31.s64 + 88;
loc_82689F48:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82689f64
	if (ctx.cr6.eq) goto loc_82689F64;
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82689f64
	if (ctx.cr6.eq) goto loc_82689F64;
	// bl 0x8268e128
	ctx.lr = 0x82689F64;
	sub_8268E128(ctx, base);
loc_82689F64:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82689f48
	if (ctx.cr6.lt) goto loc_82689F48;
loc_82689F78:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r11.u32);
loc_82689F80:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827938b4
	ctx.lr = 0x82689F88;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cntlzw r11,r28
	ctx.r11.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826944A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// fmuls f0,f3,f3
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r10,r10,-3072
	ctx.r10.s64 = ctx.r10.s64 + -3072;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_826944CC:
	// lfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f3,f13
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x826944e8
	if (!ctx.cr6.lt) goto loc_826944E8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
loc_826944E8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x826944cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826944CC;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f0,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// lfsx f13,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82694518
	if (!ctx.cr6.lt) goto loc_82694518;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82694518:
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82697FA0) {
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
	ctx.lr = 0x82697FA8;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x826a2ca8
	ctx.lr = 0x82697FB0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lfs f31,3788(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3788);
	f31.f64 = double(temp.f32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f30,5652(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 5652);
	f30.f64 = double(temp.f32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f28,32576(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 32576);
	f28.f64 = double(temp.f32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lfs f29,2184(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2184);
	f29.f64 = double(temp.f32);
	// li r27,0
	r27.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// li r11,73
	ctx.r11.s64 = 73;
	// addi r29,r10,-2976
	r29.s64 = ctx.r10.s64 + -2976;
loc_82697FF4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826956a8
	ctx.lr = 0x82698008;
	sub_826956A8(ctx, base);
	// fmuls f13,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f31.f64 * f29.f64));
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x826980a8
	if (ctx.cr6.lt) goto loc_826980A8;
	// fmuls f13,f31,f28
	ctx.f13.f64 = double(float(f31.f64 * f28.f64));
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82698030
	if (ctx.cr6.lt) goto loc_82698030;
	// mr r27,r31
	r27.u64 = r31.u64;
loc_82698030:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f0.f64;
	// lfs f12,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x826980a8
	if (ctx.cr6.lt) goto loc_826980A8;
	// b 0x82698064
	goto loc_82698064;
loc_8269805C:
	// lfsu f13,-4(r10)
	ctx.fpscr.disableFlushMode();
	ea = -4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82698064:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8269805c
	if (ctx.cr6.gt) goto loc_8269805C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x826980a8
	if (ctx.cr6.lt) goto loc_826980A8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
loc_8269807C:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82698098
	if (!ctx.cr6.lt) goto loc_82698098;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x8269807c
	if (!ctx.cr0.lt) goto loc_8269807C;
loc_82698098:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x826980a8
	if (ctx.cr6.lt) goto loc_826980A8;
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(r31.s32, 5, ctx.xer);
	// blt cr6,0x82697ff4
	if (ctx.cr6.lt) goto loc_82697FF4;
loc_826980A8:
	// stw r27,0(r26)
	REX_STORE_U32(r26.u32 + 0, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x826a2cf4
	ctx.lr = 0x826980BC;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8269D440) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// addi r11,r11,24864
	ctx.r11.s64 = ctx.r11.s64 + 24864;
	// lfs f13,176(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8269d47c
	if (!ctx.cr6.gt) goto loc_8269D47C;
	// lfd f12,48(r11)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 48);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8269d470
	if (!ctx.cr6.gt) goto loc_8269D470;
	// lfd f0,8(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// b 0x8269d50c
	goto loc_8269D50C;
loc_8269D470:
	// li r10,2
	ctx.r10.s64 = 2;
	// fdiv f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64 / ctx.f0.f64;
	// b 0x8269d480
	goto loc_8269D480;
loc_8269D47C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8269D480:
	// lfd f12,24(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8269d4a0
	if (!ctx.cr6.gt) goto loc_8269D4A0;
	// lfd f12,40(r11)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fadd f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fmsub f0,f12,f0,f13
	ctx.f0.f64 = std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f13.f64);
	// fdiv f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 / ctx.f11.f64;
loc_8269D4A0:
	// fmul f5,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f0.f64 * ctx.f0.f64;
	// lfd f12,72(r11)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// lfd f13,80(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 80);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lfd f11,112(r11)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + 112);
	// lfd f10,64(r11)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// lfd f9,104(r11)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// lfd f8,56(r11)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// lfd f7,96(r11)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r11.u32 + 96);
	// lfd f6,88(r11)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r11.u32 + 88);
	// fmadd f13,f13,f5,f12
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f5.f64, ctx.f12.f64);
	// fadd f12,f11,f5
	ctx.f12.f64 = ctx.f11.f64 + ctx.f5.f64;
	// fmadd f13,f13,f5,f10
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f5.f64, ctx.f10.f64);
	// fmadd f12,f12,f5,f9
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f5.f64, ctx.f9.f64);
	// fmadd f13,f13,f5,f8
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f5.f64, ctx.f8.f64);
	// fmadd f12,f12,f5,f7
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f5.f64, ctx.f7.f64);
	// fmul f13,f13,f5
	ctx.f13.f64 = ctx.f13.f64 * ctx.f5.f64;
	// fmadd f12,f12,f5,f6
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f5.f64, ctx.f6.f64);
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fdiv f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 / ctx.f12.f64;
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// ble cr6,0x8269d4fc
	if (!ctx.cr6.gt) goto loc_8269D4FC;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_8269D4FC:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// lfdx f13,r10,r11
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
loc_8269D50C:
	// ld r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f1,f1,f0,f13
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A23F8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
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
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restfpr_14) {
	REX_FUNC_PROLOGUE();
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
	// lfd f14,-144(r12)
	ctx.fpscr.disableFlushMode();
	f14.u64 = REX_LOAD_U64(ctx.r12.u32 + -144);
	// lfd f15,-136(r12)
	f15.u64 = REX_LOAD_U64(ctx.r12.u32 + -136);
	// lfd f16,-128(r12)
	f16.u64 = REX_LOAD_U64(ctx.r12.u32 + -128);
	// lfd f17,-120(r12)
	f17.u64 = REX_LOAD_U64(ctx.r12.u32 + -120);
	// lfd f18,-112(r12)
	f18.u64 = REX_LOAD_U64(ctx.r12.u32 + -112);
	// lfd f19,-104(r12)
	f19.u64 = REX_LOAD_U64(ctx.r12.u32 + -104);
	// lfd f20,-96(r12)
	f20.u64 = REX_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	f21.u64 = REX_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	f22.u64 = REX_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
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

DEFINE_REX_FUNC(__savevmx_80) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826ADB28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister f31{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// stfd f1,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.f1.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfd f2,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.f2.u64);
	// addi r11,r11,27664
	ctx.r11.s64 = ctx.r11.s64 + 27664;
	// stfd f3,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.f3.u64);
	// fmr f31,f3
	f31.f64 = ctx.f3.f64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_826ADB64:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x826adbf4
	if (ctx.cr6.eq) goto loc_826ADBF4;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r8,r11,232
	ctx.r8.s64 = ctx.r11.s64 + 232;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x826adb64
	if (ctx.cr6.lt) goto loc_826ADB64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826ADB88:
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// beq cr6,0x826adc04
	if (ctx.cr6.eq) goto loc_826ADC04;
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r10,180(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r9,184(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r8,188(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r7,192(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r6,196(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// bl 0x826adf00
	ctx.lr = 0x826ADBD4;
	sub_826ADF00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821aae70
	ctx.lr = 0x826ADBDC;
	sub_821AAE70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826adbec
	if (!ctx.cr0.eq) goto loc_826ADBEC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ada98
	ctx.lr = 0x826ADBEC;
	sub_826ADA98(ctx, base);
loc_826ADBEC:
	// lfd f1,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// b 0x826adc14
	goto loc_826ADC14;
loc_826ADBF4:
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x826adb88
	goto loc_826ADB88;
loc_826ADC04:
	// bl 0x826adf00
	ctx.lr = 0x826ADC08;
	sub_826ADF00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ada98
	ctx.lr = 0x826ADC10;
	sub_826ADA98(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_826ADC14:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

DEFINE_REX_FUNC(sub_826B4FC0) {
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
	ctx.lr = 0x826B4FC8;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	r20.s64 = 0;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// stw r20,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r20.u32);
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stw r20,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r20.u32);
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// mr r25,r20
	r25.u64 = r20.u64;
	// mr r23,r20
	r23.u64 = r20.u64;
	// mr r24,r20
	r24.u64 = r20.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x826b53c4
	if (ctx.cr6.gt) goto loc_826B53C4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826b53c4
	if (ctx.cr6.eq) goto loc_826B53C4;
	// bdz 0x826b501c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826B501C;
	// bdz 0x826b5218
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826B5218;
	// b 0x826b52b8
	goto loc_826B52B8;
loc_826B501C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x826b5058
	if (ctx.cr6.eq) goto loc_826B5058;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x826bacc0
	ctx.lr = 0x826B5030;
	sub_826BACC0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b5048
	if (ctx.cr6.eq) goto loc_826B5048;
	// bl 0x826bc018
	ctx.lr = 0x826B503C;
	sub_826BC018(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826b5058
	if (!ctx.cr6.eq) goto loc_826B5058;
loc_826B5048:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1ce4
	return;
loc_826B5058:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x826b508c
	if (ctx.cr6.eq) goto loc_826B508C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b50d0
	if (ctx.cr6.eq) goto loc_826B50D0;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r24,r23
	r24.u64 = r23.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B508C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B508C:
	// lwz r28,56(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r29,60(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r27,64(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x826b50b0
	if (!ctx.cr6.eq) goto loc_826B50B0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r28,2
	r28.s64 = 131072;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
loc_826B50B0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x826b5120
	if (!ctx.cr6.eq) goto loc_826B5120;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b510c
	if (ctx.cr6.eq) goto loc_826B510C;
	// li r29,64
	r29.s64 = 64;
	// b 0x826b5120
	goto loc_826B5120;
loc_826B50D0:
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x826bacc0
	ctx.lr = 0x826B50D8;
	sub_826BACC0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b50fc
	if (ctx.cr6.eq) goto loc_826B50FC;
	// bl 0x826bc018
	ctx.lr = 0x826B50E4;
	sub_826BC018(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826b508c
	if (!ctx.cr6.eq) goto loc_826B508C;
	// lis r25,-32761
	r25.s64 = -2147024896;
	// ori r25,r25,14
	r25.u64 = r25.u64 | 14;
	// b 0x826b55fc
	goto loc_826B55FC;
loc_826B50FC:
	// lis r25,-32761
	r25.s64 = -2147024896;
	// mr r24,r20
	r24.u64 = r20.u64;
	// ori r25,r25,14
	r25.u64 = r25.u64 | 14;
	// b 0x826b55fc
	goto loc_826B55FC;
loc_826B510C:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	// addi r29,r11,8
	r29.s64 = ctx.r11.s64 + 8;
loc_826B5120:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x826b5140
	if (!ctx.cr6.eq) goto loc_826B5140;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r8,27
	ctx.r11.u64 = ctx.r8.u32 & 0x1F;
	// addi r27,r11,1
	r27.s64 = ctx.r11.s64 + 1;
loc_826B5140:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r30,4
	r30.s64 = 4;
	// li r26,12
	r26.s64 = 12;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x826b51cc
	if (ctx.cr6.eq) goto loc_826B51CC;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826B5164:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x826b5164
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B5164;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// ld r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 40);
	// rlwinm r8,r11,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// ld r7,48(r31)
	ctx.r7.u64 = REX_LOAD_U64(r31.u32 + 48);
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r28,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r28.u32);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// std r9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// std r7,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// stw r29,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r29.u32);
	// stw r27,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r27.u32);
	// beq cr6,0x826b51a8
	if (ctx.cr6.eq) goto loc_826B51A8;
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r26.u32);
loc_826B51A8:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B51C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826b55fc
	if (ctx.cr6.lt) goto loc_826B55FC;
loc_826B51CC:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x826b55d0
	if (ctx.cr6.eq) goto loc_826B55D0;
	// cmplw cr6,r23,r24
	ctx.cr6.compare<uint32_t>(r23.u32, r24.u32, ctx.xer);
	// beq cr6,0x826b55d0
	if (ctx.cr6.eq) goto loc_826B55D0;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826B51F0:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x826b51f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B51F0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ld r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 40);
	// ld r7,48(r31)
	ctx.r7.u64 = REX_LOAD_U64(r31.u32 + 48);
	// rlwinm r8,r11,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// std r9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// std r7,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// b 0x826b5594
	goto loc_826B5594;
loc_826B5218:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x826b525c
	if (ctx.cr6.eq) goto loc_826B525C;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x826ba988
	ctx.lr = 0x826B522C;
	sub_826BA988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b5048
	if (ctx.cr6.eq) goto loc_826B5048;
	// bl 0x826bac00
	ctx.lr = 0x826B5238;
	sub_826BAC00(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b5048
	if (ctx.cr6.eq) goto loc_826B5048;
	// lwz r5,36(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x826ba9a8
	ctx.lr = 0x826B5250;
	sub_826BA9A8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826b55fc
	if (ctx.cr6.lt) goto loc_826B55FC;
loc_826B525C:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x826b55d0
	if (ctx.cr6.eq) goto loc_826B55D0;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x826ba988
	ctx.lr = 0x826B5270;
	sub_826BA988(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b5294
	if (ctx.cr6.eq) goto loc_826B5294;
	// bl 0x826bac00
	ctx.lr = 0x826B527C;
	sub_826BAC00(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826b52a4
	if (!ctx.cr6.eq) goto loc_826B52A4;
	// lis r25,-32761
	r25.s64 = -2147024896;
	// ori r25,r25,14
	r25.u64 = r25.u64 | 14;
	// b 0x826b55fc
	goto loc_826B55FC;
loc_826B5294:
	// lis r25,-32761
	r25.s64 = -2147024896;
	// mr r24,r20
	r24.u64 = r20.u64;
	// ori r25,r25,14
	r25.u64 = r25.u64 | 14;
	// b 0x826b55fc
	goto loc_826B55FC;
loc_826B52A4:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r5,36(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x826ba9a8
	ctx.lr = 0x826B52B4;
	sub_826BA9A8(ctx, base);
	// b 0x826b55cc
	goto loc_826B55CC;
loc_826B52B8:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x826b5308
	if (ctx.cr6.eq) goto loc_826B5308;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x826ba738
	ctx.lr = 0x826B52CC;
	sub_826BA738(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b5048
	if (ctx.cr6.eq) goto loc_826B5048;
	// bl 0x826ba8a8
	ctx.lr = 0x826B52D8;
	sub_826BA8A8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b5048
	if (ctx.cr6.eq) goto loc_826B5048;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,40(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B52FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826b55fc
	if (ctx.cr6.lt) goto loc_826B55FC;
loc_826B5308:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x826b55d0
	if (ctx.cr6.eq) goto loc_826B55D0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b5360
	if (ctx.cr6.eq) goto loc_826B5360;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826b5360
	if (!ctx.cr6.eq) goto loc_826B5360;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826b5360
	if (!ctx.cr6.eq) goto loc_826B5360;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r24,r23
	r24.u64 = r23.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B535C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826b55d0
	goto loc_826B55D0;
loc_826B5360:
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x826ba738
	ctx.lr = 0x826B5368;
	sub_826BA738(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b538c
	if (ctx.cr6.eq) goto loc_826B538C;
	// bl 0x826ba8a8
	ctx.lr = 0x826B5374;
	sub_826BA8A8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826b539c
	if (!ctx.cr6.eq) goto loc_826B539C;
	// lis r25,-32761
	r25.s64 = -2147024896;
	// ori r25,r25,14
	r25.u64 = r25.u64 | 14;
	// b 0x826b55fc
	goto loc_826B55FC;
loc_826B538C:
	// lis r25,-32761
	r25.s64 = -2147024896;
	// mr r24,r20
	r24.u64 = r20.u64;
	// ori r25,r25,14
	r25.u64 = r25.u64 | 14;
	// b 0x826b55fc
	goto loc_826B55FC;
loc_826B539C:
	// cmplw cr6,r23,r24
	ctx.cr6.compare<uint32_t>(r23.u32, r24.u32, ctx.xer);
	// beq cr6,0x826b55d0
	if (ctx.cr6.eq) goto loc_826B55D0;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r5,44(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B53C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826b55cc
	goto loc_826B55CC;
loc_826B53C4:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x826b53f0
	if (ctx.cr6.eq) goto loc_826B53F0;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x826bacc0
	ctx.lr = 0x826B53D8;
	sub_826BACC0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b5048
	if (ctx.cr6.eq) goto loc_826B5048;
	// bl 0x826bc018
	ctx.lr = 0x826B53E4;
	sub_826BC018(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b5048
	if (ctx.cr6.eq) goto loc_826B5048;
loc_826B53F0:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x826b5424
	if (ctx.cr6.eq) goto loc_826B5424;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b5468
	if (ctx.cr6.eq) goto loc_826B5468;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r24,r23
	r24.u64 = r23.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B5424;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B5424:
	// lwz r28,36(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r29,40(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r27,44(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x826b5448
	if (!ctx.cr6.eq) goto loc_826B5448;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r28,2
	r28.s64 = 131072;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
loc_826B5448:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x826b54b8
	if (!ctx.cr6.eq) goto loc_826B54B8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826b54a4
	if (ctx.cr6.eq) goto loc_826B54A4;
	// li r29,64
	r29.s64 = 64;
	// b 0x826b54b8
	goto loc_826B54B8;
loc_826B5468:
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x826bacc0
	ctx.lr = 0x826B5470;
	sub_826BACC0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b5494
	if (ctx.cr6.eq) goto loc_826B5494;
	// bl 0x826bc018
	ctx.lr = 0x826B547C;
	sub_826BC018(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826b5424
	if (!ctx.cr6.eq) goto loc_826B5424;
	// lis r25,-32761
	r25.s64 = -2147024896;
	// ori r25,r25,14
	r25.u64 = r25.u64 | 14;
	// b 0x826b55fc
	goto loc_826B55FC;
loc_826B5494:
	// lis r25,-32761
	r25.s64 = -2147024896;
	// mr r24,r20
	r24.u64 = r20.u64;
	// ori r25,r25,14
	r25.u64 = r25.u64 | 14;
	// b 0x826b55fc
	goto loc_826B55FC;
loc_826B54A4:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	// addi r29,r11,8
	r29.s64 = ctx.r11.s64 + 8;
loc_826B54B8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x826b54d8
	if (!ctx.cr6.eq) goto loc_826B54D8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r8,27
	ctx.r11.u64 = ctx.r8.u32 & 0x1F;
	// addi r27,r11,1
	r27.s64 = ctx.r11.s64 + 1;
loc_826B54D8:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r30,1
	r30.s64 = 1;
	// li r26,9
	r26.s64 = 9;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x826b5558
	if (ctx.cr6.eq) goto loc_826B5558;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826B54FC:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x826b54fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B54FC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// stw r28,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r28.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r29,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r29.u32);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r27,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r27.u32);
	// beq cr6,0x826b5534
	if (ctx.cr6.eq) goto loc_826B5534;
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r26.u32);
loc_826B5534:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B554C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826b55fc
	if (ctx.cr6.lt) goto loc_826B55FC;
loc_826B5558:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x826b55d0
	if (ctx.cr6.eq) goto loc_826B55D0;
	// cmplw cr6,r23,r24
	ctx.cr6.compare<uint32_t>(r23.u32, r24.u32, ctx.xer);
	// beq cr6,0x826b55d0
	if (ctx.cr6.eq) goto loc_826B55D0;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826B557C:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x826b557c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B557C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// rlwinm r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
loc_826B5594:
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r27,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r27.u32);
	// stw r29,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r29.u32);
	// stw r28,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r28.u32);
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// beq cr6,0x826b55b4
	if (ctx.cr6.eq) goto loc_826B55B4;
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r26.u32);
loc_826B55B4:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B55CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B55CC:
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_826B55D0:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// blt cr6,0x826b55fc
	if (ctx.cr6.lt) goto loc_826B55FC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x826b4ae8
	ctx.lr = 0x826B55F4;
	sub_826B4AE8(ctx, base);
	// lwz r20,80(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_826B55FC:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x826b5618
	if (ctx.cr6.eq) goto loc_826B5618;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B5618;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B5618:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x826b5634
	if (ctx.cr6.eq) goto loc_826B5634;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B5634;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B5634:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// blt cr6,0x826b564c
	if (ctx.cr6.lt) goto loc_826B564C;
	// stw r20,0(r19)
	REX_STORE_U32(r19.u32 + 0, r20.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1ce4
	return;
loc_826B564C:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x826b5668
	if (ctx.cr6.eq) goto loc_826B5668;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B5668;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B5668:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_826EBFD8) {
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
	ctx.lr = 0x826EBFE0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r24,0
	r24.s64 = 0;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r23,r24
	r23.u64 = r24.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x826ec740
	if (ctx.cr6.eq) goto loc_826EC740;
	// li r20,3
	r20.s64 = 3;
	// li r18,6
	r18.s64 = 6;
	// li r21,7
	r21.s64 = 7;
	// li r22,1
	r22.s64 = 1;
	// li r19,8
	r19.s64 = 8;
loc_826EC014:
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x826ec720
	if (ctx.cr6.gt) goto loc_826EC720;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x826ec720
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826EC720;
	// bdzf 4*cr6+eq,0x826ec720
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826EC720;
	// bdzf 4*cr6+eq,0x826ec080
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826EC080;
	// bdzf 4*cr6+eq,0x826ec720
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826EC720;
	// bdzf 4*cr6+eq,0x826ec720
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826EC720;
	// bdzf 4*cr6+eq,0x826ec214
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826EC214;
	// bne cr6,0x826ec598
	if (!ctx.cr6.eq) goto loc_826EC598;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826ea5d0
	ctx.lr = 0x826EC04C;
	sub_826EA5D0(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ec740
	if (ctx.cr6.lt) goto loc_826EC740;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r20,36(r28)
	REX_STORE_U32(r28.u32 + 36, r20.u32);
	// sth r24,150(r28)
	REX_STORE_U16(r28.u32 + 150, r24.u16);
	// stw r24,72(r28)
	REX_STORE_U32(r28.u32 + 72, r24.u32);
	// sth r24,148(r28)
	REX_STORE_U16(r28.u32 + 148, r24.u16);
	// sth r24,202(r11)
	REX_STORE_U16(ctx.r11.u32 + 202, r24.u16);
	// stw r24,76(r28)
	REX_STORE_U32(r28.u32 + 76, r24.u32);
	// stw r24,200(r28)
	REX_STORE_U32(r28.u32 + 200, r24.u32);
	// stw r24,208(r28)
	REX_STORE_U32(r28.u32 + 208, r24.u32);
	// b 0x826ec720
	goto loc_826EC720;
loc_826EC080:
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826ec160
	if (!ctx.cr6.eq) goto loc_826EC160;
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ec738
	if (ctx.cr6.eq) goto loc_826EC738;
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// lhz r10,150(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 150);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x826ec154
	if (!ctx.cr6.lt) goto loc_826EC154;
loc_826EC0B0:
	// lhz r11,150(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 150);
	// lwz r10,584(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 584);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r10,r6,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,40(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x826ec0fc
	if (ctx.cr6.eq) goto loc_826EC0FC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826eba40
	ctx.lr = 0x826EC0F0;
	sub_826EBA40(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ec740
	if (ctx.cr6.lt) goto loc_826EC740;
loc_826EC0FC:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lhz r10,118(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 118);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lhz r8,202(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 202);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x826ec738
	if (ctx.cr6.gt) goto loc_826EC738;
	// stw r24,72(r28)
	REX_STORE_U32(r28.u32 + 72, r24.u32);
	// sth r24,148(r28)
	REX_STORE_U16(r28.u32 + 148, r24.u16);
	// sth r24,202(r11)
	REX_STORE_U16(ctx.r11.u32 + 202, r24.u16);
	// lhz r11,150(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 150);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r24,76(r28)
	REX_STORE_U32(r28.u32 + 76, r24.u32);
	// stw r24,200(r28)
	REX_STORE_U32(r28.u32 + 200, r24.u32);
	// stw r24,208(r28)
	REX_STORE_U32(r28.u32 + 208, r24.u32);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// sth r10,150(r28)
	REX_STORE_U16(r28.u32 + 150, ctx.r10.u16);
	// lhz r7,580(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x826ec0b0
	if (ctx.cr6.lt) goto loc_826EC0B0;
loc_826EC154:
	// stw r18,36(r28)
	REX_STORE_U32(r28.u32 + 36, r18.u32);
	// sth r24,150(r28)
	REX_STORE_U16(r28.u32 + 150, r24.u16);
	// b 0x826ec720
	goto loc_826EC720;
loc_826EC160:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826ec20c
	if (!ctx.cr6.eq) goto loc_826EC20C;
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// lhz r10,150(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 150);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x826ec208
	if (!ctx.cr6.lt) goto loc_826EC208;
loc_826EC180:
	// lhz r11,150(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 150);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,584(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 584);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r10,r6,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x826eb728
	ctx.lr = 0x826EC1B4;
	sub_826EB728(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ec740
	if (ctx.cr6.lt) goto loc_826EC740;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lhz r10,118(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 118);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lhz r8,202(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 202);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x826ec738
	if (ctx.cr6.gt) goto loc_826EC738;
	// stw r24,72(r28)
	REX_STORE_U32(r28.u32 + 72, r24.u32);
	// sth r24,202(r11)
	REX_STORE_U16(ctx.r11.u32 + 202, r24.u16);
	// lhz r11,150(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 150);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,150(r28)
	REX_STORE_U16(r28.u32 + 150, ctx.r10.u16);
	// lhz r8,580(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x826ec180
	if (ctx.cr6.lt) goto loc_826EC180;
loc_826EC208:
	// stw r21,36(r28)
	REX_STORE_U32(r28.u32 + 36, r21.u32);
loc_826EC20C:
	// sth r24,150(r28)
	REX_STORE_U16(r28.u32 + 150, r24.u16);
	// b 0x826ec720
	goto loc_826EC720;
loc_826EC214:
	// sth r24,150(r28)
	REX_STORE_U16(r28.u32 + 150, r24.u16);
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826ec2b0
	if (!ctx.cr6.gt) goto loc_826EC2B0;
loc_826EC228:
	// lhz r11,150(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 150);
	// lwz r10,584(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 584);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r10,r6,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,40(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x826ec28c
	if (!ctx.cr6.eq) goto loc_826EC28C;
	// lwz r10,424(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 424);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r9,118(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 118);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lwz r7,12(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x826a2e60
	ctx.lr = 0x826EC288;
	sub_826A2E60(ctx, base);
	// stw r24,48(r30)
	REX_STORE_U32(r30.u32 + 48, r24.u32);
loc_826EC28C:
	// lhz r11,150(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 150);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,150(r28)
	REX_STORE_U16(r28.u32 + 150, ctx.r10.u16);
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// lhz r7,580(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826ec228
	if (ctx.cr6.lt) goto loc_826EC228;
loc_826EC2B0:
	// lwz r10,656(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 656);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x826ec410
	if (!ctx.cr6.eq) goto loc_826EC410;
	// lwz r8,584(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 584);
	// lwz r9,320(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// lwz r30,364(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 364);
	// lwz r27,368(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 368);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// lhz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r8,r6,1776
	ctx.r8.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lhz r4,118(r5)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + 118);
	// extsh r25,r4
	r25.s64 = ctx.r4.s16;
	// bne cr6,0x826ec738
	if (!ctx.cr6.eq) goto loc_826EC738;
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x826ec410
	if (!ctx.cr6.gt) goto loc_826EC410;
	// addi r26,r31,664
	r26.s64 = r31.s64 + 664;
loc_826EC300:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826ec36c
	if (!ctx.cr6.gt) goto loc_826EC36C;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
loc_826EC30C:
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// mulli r10,r9,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(1776));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,424(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r7,56(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r6,12(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lhz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// add r4,r8,r29
	ctx.r4.u64 = ctx.r8.u64 + r29.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r3,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// stwx r8,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r8.u32);
	// lwz r7,40(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x826ec354
	if (!ctx.cr6.eq) goto loc_826EC354;
	// stwx r24,r10,r27
	REX_STORE_U32(ctx.r10.u32 + r27.u32, r24.u32);
	// b 0x826ec358
	goto loc_826EC358;
loc_826EC354:
	// stwx r22,r10,r27
	REX_STORE_U32(ctx.r10.u32 + r27.u32, r22.u32);
loc_826EC358:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826ec30c
	if (ctx.cr6.lt) goto loc_826EC30C;
loc_826EC36C:
	// lwz r11,500(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 500);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826EC38C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,504(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 504);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826EC3A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826ec404
	if (!ctx.cr6.gt) goto loc_826EC404;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// rlwinm r9,r24,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
loc_826EC3BC:
	// lwz r8,320(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 320);
	// mulli r10,r11,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// lwzx r7,r9,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + r30.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// lwz r4,424(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 424);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,56(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lhz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// add r6,r10,r29
	ctx.r6.u64 = ctx.r10.u64 + r29.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r5,r3
	REX_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r7.u32);
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826ec3bc
	if (ctx.cr6.lt) goto loc_826EC3BC;
loc_826EC404:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(r29.s32, r25.s32, ctx.xer);
	// blt cr6,0x826ec300
	if (ctx.cr6.lt) goto loc_826EC300;
loc_826EC410:
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826ec4cc
	if (!ctx.cr6.eq) goto loc_826EC4CC;
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x826ec4cc
	if (!ctx.cr6.eq) goto loc_826EC4CC;
	// lwz r11,584(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 584);
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// mulli r11,r7,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// mulli r9,r6,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r5,424(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r4,424(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 424);
	// lhz r3,118(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 118);
	// lwz r7,56(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r9,56(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r8,12(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// beq cr6,0x826ec4cc
	if (ctx.cr6.eq) goto loc_826EC4CC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subf r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
loc_826EC4A0:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// subf r6,r7,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r7.u64;
	// stwx r6,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// rotlwi r8,r6,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x826ec4a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826EC4A0;
loc_826EC4CC:
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x826ec738
	if (!ctx.cr6.eq) goto loc_826EC738;
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826ec4f4
	if (!ctx.cr6.eq) goto loc_826EC4F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e48e0
	ctx.lr = 0x826EC4F4;
	sub_826E48E0(ctx, base);
loc_826EC4F4:
	// lhz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 208);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x826ec508
	if (ctx.cr6.eq) goto loc_826EC508;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e4840
	ctx.lr = 0x826EC508;
	sub_826E4840(ctx, base);
loc_826EC508:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826ec590
	if (!ctx.cr6.eq) goto loc_826EC590;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826ec590
	if (!ctx.cr6.eq) goto loc_826EC590;
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826ec590
	if (!ctx.cr6.gt) goto loc_826EC590;
	// mr r30,r24
	r30.u64 = r24.u64;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_826EC538:
	// lwz r8,584(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 584);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lhz r9,168(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 168);
	// lhzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r11,r6,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r11,1456
	ctx.r7.s64 = ctx.r11.s64 + 1456;
	// addi r5,r11,1616
	ctx.r5.s64 = ctx.r11.s64 + 1616;
	// lwz r4,56(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lhz r11,118(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 118);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// bl 0x8264c0e0
	ctx.lr = 0x826EC574;
	sub_8264C0E0(ctx, base);
	// lhz r8,580(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 580);
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// extsh r30,r10
	r30.s64 = ctx.r10.s16;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x826ec538
	if (ctx.cr6.lt) goto loc_826EC538;
loc_826EC590:
	// stw r21,36(r28)
	REX_STORE_U32(r28.u32 + 36, r21.u32);
	// b 0x826ec720
	goto loc_826EC720;
loc_826EC598:
	// lbz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826ec63c
	if (ctx.cr6.eq) goto loc_826EC63C;
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826ec63c
	if (!ctx.cr6.gt) goto loc_826EC63C;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_826EC5BC:
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lhzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r11,r6,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,424(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lhz r4,118(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 118);
	// lwz r9,56(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// lwz r3,12(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ble cr6,0x826ec620
	if (!ctx.cr6.gt) goto loc_826EC620;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_826EC608:
	// lbz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 200);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// slw r6,r9,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// stwu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x826ec608
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826EC608;
loc_826EC620:
	// lhz r10,580(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 580);
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x826ec5bc
	if (ctx.cr6.lt) goto loc_826EC5BC;
loc_826EC63C:
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826ec6b0
	if (!ctx.cr6.gt) goto loc_826EC6B0;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// rlwinm r9,r24,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_826EC654:
	// lwz r10,584(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 584);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r8,320(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 320);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// lhzx r5,r9,r10
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mulli r10,r4,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1776));
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r3,424(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 424);
	// lhz r10,114(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 114);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwz r7,12(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,8(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// lhzx r3,r6,r5
	ctx.r3.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// add r10,r3,r8
	ctx.r10.u64 = ctx.r3.u64 + ctx.r8.u64;
	// sth r10,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r10.u16);
	// lhz r7,580(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826ec654
	if (ctx.cr6.lt) goto loc_826EC654;
loc_826EC6B0:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826ec71c
	if (!ctx.cr6.eq) goto loc_826EC71C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826ec71c
	if (!ctx.cr6.gt) goto loc_826EC71C;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// rlwinm r8,r24,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
loc_826EC6CC:
	// lwz r10,584(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 584);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r6,320(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 320);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// lwz r9,356(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 356);
	// lhzx r4,r8,r10
	ctx.r4.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// mulli r7,r3,1776
	ctx.r7.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(1776));
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r5,118(r7)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + 118);
	// lwzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// add r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stwx r4,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
	// lhz r3,580(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826ec6cc
	if (ctx.cr6.lt) goto loc_826EC6CC;
loc_826EC71C:
	// stw r19,36(r28)
	REX_STORE_U32(r28.u32 + 36, r19.u32);
loc_826EC720:
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x826ec014
	if (!ctx.cr6.eq) goto loc_826EC014;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce0
	return;
loc_826EC738:
	// lis r23,-32764
	r23.s64 = -2147221504;
	// ori r23,r23,2
	r23.u64 = r23.u64 | 2;
loc_826EC740:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_8272EA38) {
	REX_FUNC_PROLOGUE();
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8272EA40;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x826a2c98
	ctx.lr = 0x8272EA48;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bgt cr6,0x8272eaf8
	if (ctx.cr6.gt) goto loc_8272EAF8;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8272f558
	if (!ctx.cr6.gt) goto loc_8272F558;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,3704(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// lfd f0,32424(r8)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 32424);
	// fsubs f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fadd f10,f1,f0
	ctx.f10.f64 = ctx.f1.f64 + ctx.f0.f64;
	// fadd f9,f12,f0
	ctx.f9.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fadd f8,f11,f0
	ctx.f8.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fctiwz f7,f10
	ctx.f7.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f7,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.f7.u64);
	// lwz r9,-124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -124);
	// fctiwz f6,f9
	ctx.f6.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f6,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.f6.u64);
	// fctiwz f5,f8
	ctx.f5.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f5,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f5.u64);
	// lwz r8,-124(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -124);
	// lwz r7,-116(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
loc_8272EAB4:
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r8,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u32);
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stwx r9,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u32);
	// lwz r4,28(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// stwx r7,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r6,32(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// stwx r9,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r5,4(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8272eab4
	if (ctx.cr6.lt) goto loc_8272EAB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x826a2ce4
	ctx.lr = 0x8272EAF4;
	// b 0x826a1d0c
	return;
loc_8272EAF8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fneg f9,f3
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lfd f0,32424(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 32424);
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// fadd f7,f1,f0
	ctx.f7.f64 = ctx.f1.f64 + ctx.f0.f64;
	// lfd f13,30880(r9)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 30880);
	// fadd f6,f1,f0
	ctx.f6.f64 = ctx.f1.f64 + ctx.f0.f64;
	// lfd f11,30872(r8)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r8.u32 + 30872);
	// fadd f8,f1,f0
	ctx.f8.f64 = ctx.f1.f64 + ctx.f0.f64;
	// lis r4,-32247
	ctx.r4.s64 = -2113339392;
	// fadd f5,f1,f0
	ctx.f5.f64 = ctx.f1.f64 + ctx.f0.f64;
	// lfd f12,30856(r10)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + 30856);
	// fmul f31,f3,f13
	f31.f64 = ctx.f3.f64 * ctx.f13.f64;
	// lfd f13,30864(r7)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r7.u32 + 30864);
	// fmul f30,f9,f11
	f30.f64 = ctx.f9.f64 * ctx.f11.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmul f28,f9,f13
	f28.f64 = ctx.f9.f64 * ctx.f13.f64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// fmul f4,f9,f12
	ctx.f4.f64 = ctx.f9.f64 * ctx.f12.f64;
	// lfd f12,30848(r6)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r6.u32 + 30848);
	// fmul f27,f9,f12
	f27.f64 = ctx.f9.f64 * ctx.f12.f64;
	// lfd f12,30840(r4)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r4.u32 + 30840);
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// fadd f29,f1,f0
	f29.f64 = ctx.f1.f64 + ctx.f0.f64;
	// fctiwz f11,f7
	ctx.f11.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f11,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f11.u64);
	// lwz r9,-116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// fctiwz f10,f6
	ctx.f10.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// fctiwz f13,f8
	ctx.f13.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f10,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f10.u64);
	// lwz r7,-116(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// fctiwz f8,f5
	ctx.f8.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f8,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f8.u64);
	// lwz r6,-116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// stfd f13,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.f13.u64);
	// lwz r8,-124(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -124);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// lfs f10,3720(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	ctx.f10.f64 = double(temp.f32);
	// frsp f7,f4
	ctx.f7.f64 = double(float(ctx.f4.f64));
	// lfd f11,30832(r11)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + 30832);
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// lfd f13,30824(r5)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r5.u32 + 30824);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// fmul f12,f9,f12
	ctx.f12.f64 = ctx.f9.f64 * ctx.f12.f64;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// fmul f13,f9,f13
	ctx.f13.f64 = ctx.f9.f64 * ctx.f13.f64;
	// std r4,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r4.u64);
	// lfd f6,-120(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// std r9,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r9.u64);
	// lfd f5,-120(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// std r8,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r8.u64);
	// lfd f4,-120(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// std r7,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r7.u64);
	// lfd f26,-120(r1)
	f26.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// frsp f31,f31
	f31.f64 = double(float(f31.f64));
	// frsp f30,f30
	f30.f64 = double(float(f30.f64));
	// fadds f8,f7,f3
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// fmuls f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fcfid f8,f6
	ctx.f8.f64 = double(ctx.f6.s64);
	// fcfid f6,f5
	ctx.f6.f64 = double(ctx.f5.s64);
	// fmul f5,f9,f11
	ctx.f5.f64 = ctx.f9.f64 * ctx.f11.f64;
	// fcfid f26,f26
	f26.f64 = double(f26.s64);
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// fctiwz f11,f29
	ctx.f11.s64 = std::isnan(f29.f64) ? int64_t(0x80000000U) : (f29.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f29.f64));
	// stfd f11,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f11.u64);
	// frsp f29,f27
	f29.f64 = double(float(f27.f64));
	// frsp f11,f28
	ctx.f11.f64 = double(float(f28.f64));
	// frsp f28,f13
	f28.f64 = double(float(ctx.f13.f64));
	// frsp f25,f8
	f25.f64 = double(float(ctx.f8.f64));
	// frsp f24,f6
	f24.f64 = double(float(ctx.f6.f64));
	// frsp f9,f5
	ctx.f9.f64 = double(float(ctx.f5.f64));
	// frsp f27,f26
	f27.f64 = double(float(f26.f64));
	// frsp f26,f12
	f26.f64 = double(float(ctx.f12.f64));
	// fsubs f5,f10,f3
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// fsubs f6,f10,f31
	ctx.f6.f64 = double(float(ctx.f10.f64 - f31.f64));
	// fsubs f3,f10,f30
	ctx.f3.f64 = double(float(ctx.f10.f64 - f30.f64));
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// lwz r6,-116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// fadds f13,f5,f2
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// lwz r5,4(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// fadd f4,f1,f0
	ctx.f4.f64 = ctx.f1.f64 + ctx.f0.f64;
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// fsubs f30,f10,f9
	f30.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// fsubs f31,f10,f7
	f31.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// std r4,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r4.u64);
	// lfd f5,-120(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// std r11,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r11.u64);
	// fadds f7,f3,f2
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// fadds f8,f6,f2
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// fadds f9,f6,f2
	ctx.f9.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// fadds f6,f25,f11
	ctx.f6.f64 = double(float(f25.f64 + ctx.f11.f64));
	// fadds f10,f27,f29
	ctx.f10.f64 = double(float(f27.f64 + f29.f64));
	// fctiwz f4,f4
	ctx.f4.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f4,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f4.u64);
	// lwz r10,-116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lfd f3,-128(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f11,f5
	ctx.f11.f64 = double(ctx.f5.s64);
	// fcfid f5,f3
	ctx.f5.f64 = double(ctx.f3.s64);
	// std r9,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r9.u64);
	// lfd f4,-120(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f29,f11
	f29.f64 = double(float(ctx.f11.f64));
	// frsp f11,f5
	ctx.f11.f64 = double(float(ctx.f5.f64));
	// fadds f4,f31,f2
	ctx.f4.f64 = double(float(f31.f64 + ctx.f2.f64));
	// fadds f2,f30,f2
	ctx.f2.f64 = double(float(f30.f64 + ctx.f2.f64));
	// frsp f30,f3
	f30.f64 = double(float(ctx.f3.f64));
	// fadds f5,f24,f28
	ctx.f5.f64 = double(float(f24.f64 + f28.f64));
	// fadds f3,f29,f26
	ctx.f3.f64 = double(float(f29.f64 + f26.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x8272eccc
	if (ctx.cr6.gt) goto loc_8272ECCC;
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
loc_8272ECCC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fctiwz f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f11.u64);
	// lwz r5,-116(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfs f31,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	f31.f64 = double(temp.f32);
	// blt cr6,0x8272ed44
	if (ctx.cr6.lt) goto loc_8272ED44;
	// fadds f11,f1,f31
	ctx.f11.f64 = double(float(ctx.f1.f64 + f31.f64));
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r10,0
	ctx.r10.s64 = 0;
	// fadd f11,f11,f0
	ctx.f11.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fctiwz f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f11.u64);
	// lwz r9,-116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
loc_8272ED08:
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// stwx r9,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r9,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r9,-4(r7)
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r9.u32);
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r9,r8,r4
	REX_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r9.u32);
	// blt cr6,0x8272ed08
	if (ctx.cr6.lt) goto loc_8272ED08;
loc_8272ED44:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8272ed80
	if (!ctx.cr6.lt) goto loc_8272ED80;
	// fadds f11,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64 + f31.f64));
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fadd f11,f11,f0
	ctx.f11.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fctiwz f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f11.u64);
	// lwz r9,-116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
loc_8272ED70:
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8272ed70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272ED70;
loc_8272ED80:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r9.u64);
	// lfd f11,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fcmpu cr6,f8,f11
	ctx.cr6.compare(ctx.f8.f64, ctx.f11.f64);
	// bgt cr6,0x8272eda4
	if (ctx.cr6.gt) goto loc_8272EDA4;
	// fmr f11,f8
	ctx.f11.f64 = ctx.f8.f64;
loc_8272EDA4:
	// fctiwz f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f11.u64);
	// fsubs f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// li r31,4
	r31.s64 = 4;
	// fsubs f11,f8,f13
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// li r4,-4
	ctx.r4.s64 = -4;
	// fdivs f11,f6,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 / ctx.f11.f64));
	// lwz r5,-116(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8272ef08
	if (!ctx.cr6.lt) goto loc_8272EF08;
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8272eebc
	if (ctx.cr6.lt) goto loc_8272EEBC;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8272EDE4:
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r30,r10,1
	r30.s64 = ctx.r10.s64 + 1;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// extsw r30,r30
	r30.s64 = r30.s32;
	// std r8,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r8.u64);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r30,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, r30.u64);
	// lfd f28,-104(r1)
	ctx.fpscr.disableFlushMode();
	f28.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// std r8,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r8.u64);
	// extsw r29,r10
	r29.s64 = ctx.r10.s32;
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// std r29,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, r29.u64);
	// lfd f29,-112(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// fcfid f29,f29
	f29.f64 = double(f29.s64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfd f8,-120(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f28,f28
	f28.f64 = double(f28.s64);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// lfd f8,-128(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// frsp f29,f29
	f29.f64 = double(float(f29.f64));
	// frsp f28,f28
	f28.f64 = double(float(f28.f64));
	// fsubs f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fsubs f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsubs f29,f29,f13
	f29.f64 = double(float(f29.f64 - ctx.f13.f64));
	// fsubs f28,f28,f13
	f28.f64 = double(float(f28.f64 - ctx.f13.f64));
	// fmadds f6,f6,f11,f12
	ctx.f6.f64 = double(float(std::fma(ctx.f6.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmadds f8,f8,f11,f12
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmadds f29,f29,f11,f12
	f29.f64 = double(float(std::fma(f29.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmadds f28,f28,f11,f12
	f28.f64 = double(float(std::fma(f28.f64, ctx.f11.f64, ctx.f12.f64)));
	// fadd f6,f6,f0
	ctx.f6.f64 = ctx.f6.f64 + ctx.f0.f64;
	// fadd f8,f8,f0
	ctx.f8.f64 = ctx.f8.f64 + ctx.f0.f64;
	// fctiwz f6,f6
	ctx.f6.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfiwx f6,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.f6.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// fadd f6,f29,f0
	ctx.f6.f64 = f29.f64 + ctx.f0.f64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// fadd f29,f28,f0
	f29.f64 = f28.f64 + ctx.f0.f64;
	// fctiwz f8,f8
	ctx.f8.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f8,r7,r31
	REX_STORE_U32(ctx.r7.u32 + r31.u32, ctx.f8.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// fctiwz f6,f6
	ctx.f6.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfiwx f6,r7,r4
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.f6.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// fctiwz f8,f29
	ctx.f8.s64 = std::isnan(f29.f64) ? int64_t(0x80000000U) : (f29.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f29.f64));
	// stfiwx f8,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.f8.u32);
	// blt cr6,0x8272ede4
	if (ctx.cr6.lt) goto loc_8272EDE4;
loc_8272EEBC:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8272ef08
	if (!ctx.cr6.lt) goto loc_8272EF08;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8272EED0:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r9.u64);
	// lfd f8,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// frsp f8,f6
	ctx.f8.f64 = double(float(ctx.f6.f64));
	// fsubs f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fmadds f8,f6,f11,f12
	ctx.f8.f64 = double(float(std::fma(ctx.f6.f64, ctx.f11.f64, ctx.f12.f64)));
	// fadd f6,f8,f0
	ctx.f6.f64 = ctx.f8.f64 + ctx.f0.f64;
	// fctiwz f8,f6
	ctx.f8.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfiwx f8,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.f8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8272eed0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272EED0;
loc_8272EF08:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r9.u64);
	// lfd f13,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f7,f13
	ctx.cr6.compare(ctx.f7.f64, ctx.f13.f64);
	// bgt cr6,0x8272ef2c
	if (ctx.cr6.gt) goto loc_8272EF2C;
	// fmr f13,f7
	ctx.f13.f64 = ctx.f7.f64;
loc_8272EF2C:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f13.u64);
	// fsubs f12,f5,f10
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// fsubs f11,f7,f9
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fdivs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// lwz r5,-100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8272f088
	if (!ctx.cr6.lt) goto loc_8272F088;
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8272f03c
	if (ctx.cr6.lt) goto loc_8272F03C;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8272EF64:
	// extsw r30,r11
	r30.s64 = ctx.r11.s32;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// std r30,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, r30.u64);
	// addi r30,r10,1
	r30.s64 = ctx.r10.s64 + 1;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// std r8,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r8.u64);
	// extsw r8,r30
	ctx.r8.s64 = r30.s32;
	// extsw r30,r10
	r30.s64 = ctx.r10.s32;
	// std r8,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.r8.u64);
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// std r30,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, r30.u64);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// lfd f12,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f11,-112(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f8,-120(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// lfd f8,-128(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fsubs f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fsubs f6,f6,f9
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// fsubs f8,f8,f9
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fmadds f12,f12,f13,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f11,f11,f13,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f6,f6,f13,f10
	ctx.f6.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f8,f8,f13,f10
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f10.f64)));
	// fadd f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fadd f11,f11,f0
	ctx.f11.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fadd f6,f6,f0
	ctx.f6.f64 = ctx.f6.f64 + ctx.f0.f64;
	// fadd f8,f8,f0
	ctx.f8.f64 = ctx.f8.f64 + ctx.f0.f64;
	// fctiwz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// fctiwz f6,f6
	ctx.f6.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// fctiwz f8,f8
	ctx.f8.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f8,r7,r9
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.f8.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stfiwx f12,r7,r31
	REX_STORE_U32(ctx.r7.u32 + r31.u32, ctx.f12.u32);
	// fctiwz f12,f11
	ctx.f12.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stfiwx f6,r7,r4
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.f6.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stfiwx f12,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.f12.u32);
	// blt cr6,0x8272ef64
	if (ctx.cr6.lt) goto loc_8272EF64;
loc_8272F03C:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8272f088
	if (!ctx.cr6.lt) goto loc_8272F088;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8272F050:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r9.u64);
	// lfd f12,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// fsubs f6,f8,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fmadds f12,f6,f13,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f10.f64)));
	// fadd f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fctiwz f8,f11
	ctx.f8.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfiwx f8,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.f8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8272f050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272F050;
loc_8272F088:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// fsubs f12,f4,f7
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f4.f64 - ctx.f7.f64));
	// fsubs f13,f3,f5
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r9.u64);
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// lfd f11,-104(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f12,f10
	ctx.f12.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f4,f12
	ctx.cr6.compare(ctx.f4.f64, ctx.f12.f64);
	// bgt cr6,0x8272f0b8
	if (ctx.cr6.gt) goto loc_8272F0B8;
	// fmr f12,f4
	ctx.f12.f64 = ctx.f4.f64;
loc_8272F0B8:
	// fctiwz f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f12.u64);
	// lwz r5,-100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8272f208
	if (!ctx.cr6.lt) goto loc_8272F208;
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8272f1bc
	if (ctx.cr6.lt) goto loc_8272F1BC;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8272F0E4:
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r30,r10,-1
	r30.s64 = ctx.r10.s64 + -1;
	// std r8,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.r8.u64);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// extsw r30,r30
	r30.s64 = r30.s32;
	// std r8,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r8.u64);
	// addi r29,r10,1
	r29.s64 = ctx.r10.s64 + 1;
	// std r30,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, r30.u64);
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// extsw r30,r29
	r30.s64 = r29.s32;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// std r30,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, r30.u64);
	// lfd f12,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfd f10,-112(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// lfd f6,-120(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f11,-128(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f12,f6
	ctx.f12.f64 = double(ctx.f6.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// fsubs f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// frsp f6,f12
	ctx.f6.f64 = double(float(ctx.f12.f64));
	// frsp f12,f10
	ctx.f12.f64 = double(float(ctx.f10.f64));
	// fmadds f11,f9,f13,f5
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f5.f64)));
	// fsubs f10,f8,f7
	ctx.f10.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fsubs f9,f6,f7
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fsubs f8,f12,f7
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fadd f6,f11,f0
	ctx.f6.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fmadds f12,f10,f13,f5
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f5.f64)));
	// fmadds f11,f9,f13,f5
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f5.f64)));
	// fmadds f10,f8,f13,f5
	ctx.f10.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f5.f64)));
	// fctiwz f9,f6
	ctx.f9.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// fadd f8,f12,f0
	ctx.f8.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fadd f6,f11,f0
	ctx.f6.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fadd f12,f10,f0
	ctx.f12.f64 = ctx.f10.f64 + ctx.f0.f64;
	// fctiwz f11,f8
	ctx.f11.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f11,r7,r9
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.f11.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// fctiwz f10,f6
	ctx.f10.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfiwx f10,r7,r31
	REX_STORE_U32(ctx.r7.u32 + r31.u32, ctx.f10.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// fctiwz f8,f12
	ctx.f8.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f8,r7,r4
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.f8.u32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stfiwx f9,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.f9.u32);
	// blt cr6,0x8272f0e4
	if (ctx.cr6.lt) goto loc_8272F0E4;
loc_8272F1BC:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8272f208
	if (!ctx.cr6.lt) goto loc_8272F208;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8272F1D0:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r9.u64);
	// lfd f12,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fsubs f9,f10,f7
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// fmadds f8,f9,f13,f5
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f5.f64)));
	// fadd f6,f8,f0
	ctx.f6.f64 = ctx.f8.f64 + ctx.f0.f64;
	// fctiwz f12,f6
	ctx.f12.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfiwx f12,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.f12.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8272f1d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272F1D0;
loc_8272F208:
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8272f248
	if (!ctx.cr6.lt) goto loc_8272F248;
	// fadds f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + f31.f64));
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fadd f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f11.u64);
	// lwz r8,-100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
loc_8272F22C:
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8272f22c
	if (ctx.cr6.lt) goto loc_8272F22C;
loc_8272F248:
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// std r11,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r11.u64);
	// lfd f13,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f2,f13
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// bgt cr6,0x8272f268
	if (ctx.cr6.gt) goto loc_8272F268;
	// fmr f13,f2
	ctx.f13.f64 = ctx.f2.f64;
loc_8272F268:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f13.u64);
	// lwz r5,-100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x8272f2d4
	if (ctx.cr6.lt) goto loc_8272F2D4;
	// fadd f13,f1,f0
	ctx.f13.f64 = ctx.f1.f64 + ctx.f0.f64;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r10,0
	ctx.r10.s64 = 0;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f12.u64);
	// lwz r9,-100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
loc_8272F298:
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// stwx r9,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r9,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r9,-4(r7)
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r9.u32);
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stwx r9,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r9.u32);
	// blt cr6,0x8272f298
	if (ctx.cr6.lt) goto loc_8272F298;
loc_8272F2D4:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8272f30c
	if (!ctx.cr6.lt) goto loc_8272F30C;
	// fadd f13,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64 + ctx.f0.f64;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f12.u64);
	// lwz r9,-100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
loc_8272F2FC:
	// lwz r8,24(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stwx r9,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8272f2fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272F2FC;
loc_8272F30C:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// fsubs f12,f2,f4
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// fsubs f13,f30,f3
	ctx.f13.f64 = double(float(f30.f64 - ctx.f3.f64));
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r9.u64);
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// lfd f11,-104(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f12,f10
	ctx.f12.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f4,f12
	ctx.cr6.compare(ctx.f4.f64, ctx.f12.f64);
	// bgt cr6,0x8272f33c
	if (ctx.cr6.gt) goto loc_8272F33C;
	// fmr f12,f4
	ctx.f12.f64 = ctx.f4.f64;
loc_8272F33C:
	// fctiwz f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f12.u64);
	// lwz r5,-100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8272f48c
	if (!ctx.cr6.lt) goto loc_8272F48C;
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8272f440
	if (ctx.cr6.lt) goto loc_8272F440;
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8272F368:
	// addi r30,r10,-1
	r30.s64 = ctx.r10.s64 + -1;
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r29,r10,1
	r29.s64 = ctx.r10.s64 + 1;
	// extsw r30,r30
	r30.s64 = r30.s32;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r30,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, r30.u64);
	// extsw r30,r29
	r30.s64 = r29.s32;
	// std r8,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.r8.u64);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r30,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, r30.u64);
	// lfd f7,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// std r8,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r8.u64);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// lfd f12,-104(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// lfd f10,-112(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// lfd f5,-128(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f2,f5
	ctx.f2.f64 = double(ctx.f5.s64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// frsp f10,f6
	ctx.f10.f64 = double(float(ctx.f6.f64));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f11,f8
	ctx.f11.f64 = double(float(ctx.f8.f64));
	// fsubs f6,f10,f4
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// fsubs f12,f9,f4
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// fsubs f7,f11,f4
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f4.f64));
	// frsp f9,f2
	ctx.f9.f64 = double(float(ctx.f2.f64));
	// fmadds f11,f6,f13,f3
	ctx.f11.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f3.f64)));
	// fmadds f8,f12,f13,f3
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f3.f64)));
	// fmadds f12,f7,f13,f3
	ctx.f12.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f3.f64)));
	// fsubs f5,f9,f4
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// fadd f7,f11,f0
	ctx.f7.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fadd f2,f8,f0
	ctx.f2.f64 = ctx.f8.f64 + ctx.f0.f64;
	// fadd f8,f12,f0
	ctx.f8.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fmadds f10,f5,f13,f3
	ctx.f10.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f3.f64)));
	// fctiwz f9,f2
	ctx.f9.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// fctiwz f5,f8
	ctx.f5.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f5,r7,r9
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.f5.u32);
	// fadd f6,f10,f0
	ctx.f6.f64 = ctx.f10.f64 + ctx.f0.f64;
	// fctiwz f2,f7
	ctx.f2.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// fctiwz f12,f6
	ctx.f12.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stfiwx f2,r7,r31
	REX_STORE_U32(ctx.r7.u32 + r31.u32, ctx.f2.u32);
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stfiwx f12,r7,r4
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.f12.u32);
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stfiwx f9,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.f9.u32);
	// blt cr6,0x8272f368
	if (ctx.cr6.lt) goto loc_8272F368;
loc_8272F440:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8272f48c
	if (!ctx.cr6.lt) goto loc_8272F48C;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8272F454:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,24(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r9.u64);
	// lfd f12,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fsubs f9,f10,f4
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// fmadds f8,f9,f13,f3
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f3.f64)));
	// fadd f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 + ctx.f0.f64;
	// fctiwz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfiwx f6,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.f6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8272f454
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272F454;
loc_8272F48C:
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8272f4c8
	if (!ctx.cr6.lt) goto loc_8272F4C8;
	// fadd f13,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64 + ctx.f0.f64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f12.u64);
	// lwz r8,-100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
loc_8272F4AC:
	// lwz r9,24(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8272f4ac
	if (ctx.cr6.lt) goto loc_8272F4AC;
loc_8272F4C8:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8272f558
	if (!ctx.cr6.gt) goto loc_8272F558;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,3804(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3804);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
loc_8272F4E4:
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,28(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r6.u64);
	// lfd f12,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fadd f8,f9,f0
	ctx.f8.f64 = ctx.f9.f64 + ctx.f0.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f7,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.f7.u32);
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r4,32(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwzx r9,r11,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.r8.u64);
	// lfd f6,-112(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fsubs f3,f13,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// fadd f2,f3,f0
	ctx.f2.f64 = ctx.f3.f64 + ctx.f0.f64;
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfiwx f1,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.f1.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8272f4e4
	if (ctx.cr6.lt) goto loc_8272F4E4;
loc_8272F558:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x826a2ce4
	ctx.lr = 0x8272F564;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8277FC10) {
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
	// ble cr6,0x8277fc2c
	if (!ctx.cr6.gt) goto loc_8277FC2C;
	// li r4,3
	ctx.r4.s64 = 3;
loc_8277FC2C:
	// lwz r11,21928(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21928);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,-27736
	ctx.r11.s64 = ctx.r11.s64 + -27736;
	// bne cr6,0x8277fcb0
	if (!ctx.cr6.eq) goto loc_8277FCB0;
	// mulli r8,r4,28
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(28));
	// addi r7,r11,-112
	ctx.r7.s64 = ctx.r11.s64 + -112;
	// addi r10,r11,-112
	ctx.r10.s64 = ctx.r11.s64 + -112;
	// addi r9,r11,-112
	ctx.r9.s64 = ctx.r11.s64 + -112;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// addi r10,r11,-112
	ctx.r10.s64 = ctx.r11.s64 + -112;
	// lwzx r5,r8,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r7,r9,8
	ctx.r7.s64 = ctx.r9.s64 + 8;
	// addi r9,r11,-112
	ctx.r9.s64 = ctx.r11.s64 + -112;
	// addi r31,r10,12
	r31.s64 = ctx.r10.s64 + 12;
	// addi r10,r11,-112
	ctx.r10.s64 = ctx.r11.s64 + -112;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stw r5,22044(r3)
	REX_STORE_U32(ctx.r3.u32 + 22044, ctx.r5.u32);
	// addi r11,r11,-112
	ctx.r11.s64 = ctx.r11.s64 + -112;
	// lwzx r6,r8,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// addi r5,r10,20
	ctx.r5.s64 = ctx.r10.s64 + 20;
	// stw r6,22048(r3)
	REX_STORE_U32(ctx.r3.u32 + 22048, ctx.r6.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwzx r10,r8,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r10,22052(r3)
	REX_STORE_U32(ctx.r3.u32 + 22052, ctx.r10.u32);
	// lwzx r7,r8,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// stw r7,22056(r3)
	REX_STORE_U32(ctx.r3.u32 + 22056, ctx.r7.u32);
	// lwzx r6,r8,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r6,22060(r3)
	REX_STORE_U32(ctx.r3.u32 + 22060, ctx.r6.u32);
	// lwzx r5,r8,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// stw r5,22064(r3)
	REX_STORE_U32(ctx.r3.u32 + 22064, ctx.r5.u32);
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// b 0x8277fd00
	goto loc_8277FD00;
loc_8277FCB0:
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
	// stw r6,22044(r3)
	REX_STORE_U32(ctx.r3.u32 + 22044, ctx.r6.u32);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// addi r31,r11,20
	r31.s64 = ctx.r11.s64 + 20;
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r9,22048(r3)
	REX_STORE_U32(ctx.r3.u32 + 22048, ctx.r9.u32);
	// lwzx r8,r10,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stw r8,22052(r3)
	REX_STORE_U32(ctx.r3.u32 + 22052, ctx.r8.u32);
	// lwzx r7,r10,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stw r7,22056(r3)
	REX_STORE_U32(ctx.r3.u32 + 22056, ctx.r7.u32);
	// lwzx r6,r10,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// stw r6,22060(r3)
	REX_STORE_U32(ctx.r3.u32 + 22060, ctx.r6.u32);
	// lwzx r5,r10,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// stw r5,22064(r3)
	REX_STORE_U32(ctx.r3.u32 + 22064, ctx.r5.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_8277FD00:
	// stw r11,22068(r3)
	REX_STORE_U32(ctx.r3.u32 + 22068, ctx.r11.u32);
	// bl 0x8277f5e8
	ctx.lr = 0x8277FD08;
	sub_8277F5E8(ctx, base);
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

DEFINE_REX_FUNC(sub_827885D0) {
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
	ctx.lr = 0x827885D8;
	// lwz r11,14624(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14624);
	// subf r28,r7,r8
	r28.u64 = ctx.r8.u64 - ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82788618
	if (ctx.cr6.eq) goto loc_82788618;
	// lwz r31,14480(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 14480);
	// rotlwi r30,r11,0
	r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r29,14628(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 14628);
	// srawi r11,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	ctx.r11.s64 = r31.s32 >> 1;
	// lwz r25,14632(r9)
	r25.u64 = REX_LOAD_U32(ctx.r9.u32 + 14632);
	// mullw r10,r30,r7
	ctx.r10.s64 = int64_t(r30.s32) * int64_t(ctx.r7.s32);
	// addze r8,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r8.s64 = temp.s64;
	// mullw r11,r29,r7
	ctx.r11.s64 = int64_t(r29.s32) * int64_t(ctx.r7.s32);
	// subf r27,r31,r30
	r27.u64 = r30.u64 - r31.u64;
	// subf r26,r8,r29
	r26.u64 = r29.u64 - ctx.r8.u64;
	// subf r25,r8,r25
	r25.u64 = r25.u64 - ctx.r8.u64;
	// b 0x82788638
	goto loc_82788638;
loc_82788618:
	// lwz r11,14588(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// lwz r8,14480(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 14480);
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// subf r27,r8,r11
	r27.u64 = ctx.r11.u64 - ctx.r8.u64;
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// srawi r8,r27,1
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1) != 0);
	ctx.r8.s64 = r27.s32 >> 1;
	// addze r26,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	r26.s64 = temp.s64;
	// mr r25,r26
	r25.u64 = r26.u64;
loc_82788638:
	// lwz r8,14540(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 14540);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lwz r30,14544(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 14544);
	// lwz r29,14548(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 14548);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r24,14492(r9)
	r24.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// add r30,r30,r11
	r30.u64 = r30.u64 + ctx.r11.u64;
	// add r8,r29,r11
	ctx.r8.u64 = r29.u64 + ctx.r11.u64;
	// lwz r31,14500(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 14500);
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mullw r10,r24,r7
	ctx.r10.s64 = int64_t(r24.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// add r4,r30,r5
	ctx.r4.u64 = r30.u64 + ctx.r5.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// ble cr6,0x827886e4
	if (!ctx.cr6.gt) goto loc_827886E4;
	// lwz r5,14480(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 14480);
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// addi r7,r4,-1
	ctx.r7.s64 = ctx.r4.s64 + -1;
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
loc_82788688:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x827886cc
	if (!ctx.cr6.gt) goto loc_827886CC;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
loc_82788698:
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// stb r5,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stb r4,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r4.u8);
	// lbzu r5,1(r7)
	ea = 1 + ctx.r7.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// stb r5,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r5.u8);
	// lbzu r5,1(r6)
	ea = 1 + ctx.r6.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// stbu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r10.u32 = ea;
	// lwz r5,14480(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 14480);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82788698
	if (ctx.cr6.lt) goto loc_82788698;
loc_827886CC:
	// lwz r10,14492(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// add r7,r26,r7
	ctx.r7.u64 = r26.u64 + ctx.r7.u64;
	// add r6,r25,r6
	ctx.r6.u64 = r25.u64 + ctx.r6.u64;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// bdnz 0x82788688
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82788688;
loc_827886E4:
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8278B2E0) {
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
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8278b308
	if (!ctx.cr6.eq) goto loc_8278B308;
	// lwz r11,56(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 56);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,20(r5)
	REX_STORE_U32(ctx.r5.u32 + 20, ctx.r11.u32);
	// b 0x8278b354
	goto loc_8278B354;
loc_8278B308:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8278b354
	if (!ctx.cr6.eq) goto loc_8278B354;
	// lwz r11,60(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,24(r5)
	REX_STORE_U32(ctx.r5.u32 + 24, ctx.r11.u32);
	// beq cr6,0x8278b32c
	if (ctx.cr6.eq) goto loc_8278B32C;
	// stw r6,28(r5)
	REX_STORE_U32(ctx.r5.u32 + 28, ctx.r6.u32);
	// b 0x8278b338
	goto loc_8278B338;
loc_8278B32C:
	// lwz r11,64(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,28(r5)
	REX_STORE_U32(ctx.r5.u32 + 28, ctx.r11.u32);
loc_8278B338:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8278b348
	if (ctx.cr6.eq) goto loc_8278B348;
	// stw r7,32(r5)
	REX_STORE_U32(ctx.r5.u32 + 32, ctx.r7.u32);
	// b 0x8278b354
	goto loc_8278B354;
loc_8278B348:
	// lwz r11,68(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,32(r5)
	REX_STORE_U32(ctx.r5.u32 + 32, ctx.r11.u32);
loc_8278B354:
	// lwz r11,16(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8278b370
	if (!ctx.cr6.eq) goto loc_8278B370;
	// lwz r11,72(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 72);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r11,36(r5)
	REX_STORE_U32(ctx.r5.u32 + 36, ctx.r11.u32);
	// b 0x8278b3a0
	goto loc_8278B3A0;
loc_8278B370:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8278b3a0
	if (!ctx.cr6.eq) goto loc_8278B3A0;
	// lwz r11,52(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 52);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8278b3a0
	if (ctx.cr6.eq) goto loc_8278B3A0;
	// lwz r10,76(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 76);
	// lwz r11,80(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 80);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r4,40(r5)
	REX_STORE_U32(ctx.r5.u32 + 40, ctx.r4.u32);
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r10,44(r5)
	REX_STORE_U32(ctx.r5.u32 + 44, ctx.r10.u32);
	// stw r9,48(r5)
	REX_STORE_U32(ctx.r5.u32 + 48, ctx.r9.u32);
loc_8278B3A0:
	// lwz r11,14560(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 14560);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8278b3b4
	if (!ctx.cr6.eq) goto loc_8278B3B4;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8278a3a8
	ctx.lr = 0x8278B3B4;
	sub_8278A3A8(ctx, base);
loc_8278B3B4:
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

DEFINE_REX_FUNC(sub_82791D40) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r3,r11,12024
	ctx.r3.s64 = ctx.r11.s64 + 12024;
	// b 0x8269d008
	sub_8269D008(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82791E18) {
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
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8269d1d0
	ctx.lr = 0x82791E34;
	sub_8269D1D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x82791E40;
	sub_8269D1B8(ctx, base);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r9,r10,1040
	ctx.r9.s64 = ctx.r10.s64 + 1040;
	// lis r8,-32135
	ctx.r8.s64 = -2105999360;
	// stw r31,1040(r10)
	REX_STORE_U32(ctx.r10.u32 + 1040, r31.u32);
	// addi r3,r8,12272
	ctx.r3.s64 = ctx.r8.s64 + 12272;
	// stw r11,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// bl 0x8269d008
	ctx.lr = 0x82791E60;
	sub_8269D008(ctx, base);
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

DEFINE_REX_FUNC(sub_82792248) {
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
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r31,r11,1640
	r31.s64 = ctx.r11.s64 + 1640;
	// addi r4,r10,24520
	ctx.r4.s64 = ctx.r10.s64 + 24520;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120600
	ctx.lr = 0x82792270;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// addi r4,r11,24500
	ctx.r4.s64 = ctx.r11.s64 + 24500;
	// bl 0x82120600
	ctx.lr = 0x82792280;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// addi r4,r11,24480
	ctx.r4.s64 = ctx.r11.s64 + 24480;
	// bl 0x82120600
	ctx.lr = 0x82792290;
	sub_82120600(ctx, base);
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r3,r11,12688
	ctx.r3.s64 = ctx.r11.s64 + 12688;
	// bl 0x8269d008
	ctx.lr = 0x8279229C;
	sub_8269D008(ctx, base);
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

DEFINE_REX_FUNC(sub_82792C40) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,642
	ctx.r4.s64 = 642;
	// addi r3,r11,16232
	ctx.r3.s64 = ctx.r11.s64 + 16232;
	// bl 0x8269c348
	ctx.lr = 0x82792C5C;
	sub_8269C348(ctx, base);
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// stw r3,8884(r11)
	REX_STORE_U32(ctx.r11.u32 + 8884, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82792F30) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,8604
	ctx.r3.s64 = ctx.r11.s64 + 8604;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82120ac0
	sub_82120AC0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82793190) {
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
	// li r30,2
	r30.s64 = 2;
	// addi r11,r11,1640
	ctx.r11.s64 = ctx.r11.s64 + 1640;
	// addi r31,r11,84
	r31.s64 = ctx.r11.s64 + 84;
loc_827931B4:
	// addi r31,r31,-28
	r31.s64 = r31.s64 + -28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120ac0
	ctx.lr = 0x827931C8;
	sub_82120AC0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x827931b4
	if (!ctx.cr0.lt) goto loc_827931B4;
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

DEFINE_REX_FUNC(sub_82793B08) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100f5
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793CA8) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100b4
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793E68) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100b0
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82794048) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000001
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82794258) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101f3
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82799558) {
	REX_FUNC_PROLOGUE();
	// lwz r7,1368(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1368);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r10,256
	ctx.r9.s64 = ctx.r10.s64 + 256;
	// subfic r4,r5,1
	ctx.xer.ca = ctx.r5.u32 <= 1;
	ctx.r4.u64 = static_cast<uint64_t>(1) - ctx.r5.u64;
	// srawi r6,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 17;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r3,r9,30,2,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r5,r6,64
	ctx.r5.s64 = ctx.r6.s64 + 64;
	// or r8,r3,r5
	ctx.r8.u64 = ctx.r3.u64 | ctx.r5.u64;
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x82799648
	if (ctx.cr6.lt) goto loc_82799648;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// blt cr6,0x827995d0
	if (ctx.cr6.lt) goto loc_827995D0;
	// lhz r8,62(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 62);
	// neg r3,r8
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// subf r7,r3,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r3.u64;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// xor r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// srawi r7,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 31;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// and r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 & ctx.r3.u64;
	// andc r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// or r9,r3,r7
	ctx.r9.u64 = ctx.r3.u64 | ctx.r7.u64;
	// or r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 | ctx.r10.u64;
	// b 0x827995e0
	goto loc_827995E0;
loc_827995D0:
	// lwz r10,1476(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1476);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
loc_827995E0:
	// cmplwi cr6,r5,128
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// blt cr6,0x82799630
	if (ctx.cr6.lt) goto loc_82799630;
	// lhz r9,64(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 64);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r10,r9,1
	ctx.xer.ca = ctx.r9.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r9.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subf r7,r10,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r6,r9,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r9.u64;
	// xor r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// srawi r8,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 31;
	// srawi r7,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 31;
	// and r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 & ctx.r11.u64;
	// or r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 | ctx.r7.u64;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// andc r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 | ctx.r4.u64;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// blr 
	return;
loc_82799630:
	// lwz r11,1472(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1472);
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// blr 
	return;
loc_82799648:
	// lwz r10,1476(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1476);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,1472(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 1472);
	// rlwinm r7,r5,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
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

DEFINE_REX_FUNC(sub_827B0668) {
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
	ctx.lr = 0x827B0670;
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
	// vspltish v9,15
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0xF)));
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// vspltish v11,5
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x5)));
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vrlh v8,v12,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, result);
	}
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// vspltish v4,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// lvx128 v10,r6,r5
	ea = (ctx.r6.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 3;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// li r3,1
	ctx.r3.s64 = 1;
	// vaddshs v3,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// vsubshs v2,v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// slw r5,r3,r4
	ctx.r5.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r4.u8 & 0x3F));
	// li r10,16
	ctx.r10.s64 = 16;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// bne cr6,0x827b081c
	if (!ctx.cr6.eq) goto loc_827B081C;
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
	// ble cr6,0x827b0a00
	if (!ctx.cr6.gt) goto loc_827B0A00;
	// li r9,0
	ctx.r9.s64 = 0;
loc_827B0734:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vor v1,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vor v8,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vor v10,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vor v31,v7,v7
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
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
	// vslh v29,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// vperm128 v6,v56,v57,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vslh v27,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v29,v5
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vmrglb v24,v0,v6
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v8,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v18,v26,v27
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v21,v28,v10
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v17,v25,v9
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v20,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v7,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v5,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)v24.u8));
	// vadduhm v14,v23,v30
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vslh v16,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v30,v21,v22
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v29,v19,v20
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v28,v17,v18
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vslh v27,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v25,v1,v16
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vsubshs v23,v31,v15
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vadduhm v24,v30,v14
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vadduhm v22,v28,v29
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vsubshs v21,v0,v27
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vsubshs v20,v0,v26
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vadduhm v19,v24,v3
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v18,v22,v3
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v17,v25,v21
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vadduhm v16,v23,v20
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v15,v19,v17
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v14,v18,v16
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vsrah v1,v15,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v14,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v1,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v31,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r6,48
	ctx.r6.s64 = ctx.r6.s64 + 48;
	// blt cr6,0x827b0734
	if (ctx.cr6.lt) goto loc_827B0734;
	// b 0x827b0a00
	goto loc_827B0A00;
loc_827B081C:
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
	// vor128 v31,v50,v51
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
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
	// vmrghb v8,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v30,v46,v47
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v1,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v31,v0,v30
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v30,v0,v30
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v1,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x827b0a00
	if (!ctx.cr6.gt) goto loc_827B0A00;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r29,32
	ctx.r10.s64 = r29.s64 + 32;
	// li r30,-32
	r30.s64 = -32;
	// li r31,-16
	r31.s64 = -16;
loc_827B08A8:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vor v29,v7,v7
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vor v28,v6,v6
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// vor v7,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v10,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)v31.u8));
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// vor v6,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v9,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v30.u8));
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
	// vslh v30,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v41,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v31,v43,v63,v2
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vslh v25,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v27,v5,v5
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lvsl v5,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v24,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v21,v63,v41,v5
	simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vslh v22,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v20,v0,v31
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v17,v26,v30
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vmrghb v31,v0,v31
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v25,v10
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v19,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v7,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v26,v23,v24
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vadduhm v25,v22,v9
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vor v5,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vslh v15,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v6,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v8,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vmrghb v1,v0,v21
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v22,v18,v19
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vor v30,v20,v20
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_load_si128((simde__m128i*)v20.u8));
	// vslh v24,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v21,v16,v17
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v20,v14,v15
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vadduhm v19,v25,v26
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vslh v23,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v29,v29,v24
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vadduhm v26,v21,v22
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v24,v19,v20
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vsubshs v25,v28,v23
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
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
	// vadduhm v21,v17,v18
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v20,v16,v8
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v23,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v5,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v19,v0,v15
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vsubshs v18,v0,v14
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vadduhm v17,v26,v3
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v28,v22,v23
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vslh v15,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v26,v20,v21
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vadduhm v16,v24,v3
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v24,v29,v19
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v23,v25,v18
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vsubshs v22,v0,v15
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vsubshs v21,v27,v14
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vadduhm v20,v26,v28
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v19,v17,v24
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vadduhm v18,v16,v23
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v17,v21,v22
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v16,v20,v3
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsrah v15,v19,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v14,v18,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v29,v16,v17
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// stvx128 v15,r10,r30
	ea = (ctx.r10.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v14,r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v28,v29,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v28,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vor128 v2,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// blt cr6,0x827b08a8
	if (ctx.cr6.lt) goto loc_827B08A8;
loc_827B0A00:
	// li r5,0
	ctx.r5.s64 = 0;
	// vspltish v1,7
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x7)));
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827afb20
	ctx.lr = 0x827B0A14;
	sub_827AFB20(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

