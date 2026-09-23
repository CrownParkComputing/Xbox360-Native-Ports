#include "hydrothunder_funcs.29.h"

DEFINE_REX_FUNC(sub_82121770) {
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
	ctx.lr = 0x82121778;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// addi r28,r6,12
	r28.s64 = ctx.r6.s64 + 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821217c0
	if (!ctx.cr6.eq) goto loc_821217C0;
	// lwz r6,4(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
loc_821217A8:
	// li r5,1
	ctx.r5.s64 = 1;
loc_821217AC:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_821217B8:
	// bl 0x82121b58
	ctx.lr = 0x821217BC;
	sub_82121B58(ctx, base);
	// b 0x8212191c
	goto loc_8212191C;
loc_821217C0:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821217ec
	if (!ctx.cr6.eq) goto loc_821217EC;
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120780
	ctx.lr = 0x821217DC;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82121900
	if (!ctx.cr0.lt) goto loc_82121900;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// b 0x821217a8
	goto loc_821217A8;
loc_821217EC:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8212181c
	if (!ctx.cr6.eq) goto loc_8212181C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x82121804;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82121900
	if (!ctx.cr0.lt) goto loc_82121900;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x821217ac
	goto loc_821217AC;
loc_8212181C:
	// addi r26,r29,12
	r26.s64 = r29.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82120780
	ctx.lr = 0x8212182C;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8212188c
	if (!ctx.cr0.lt) goto loc_8212188C;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82121d40
	ctx.lr = 0x82121840;
	sub_82121D40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x82121850;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8212188c
	if (!ctx.cr0.lt) goto loc_8212188C;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// lbz r11,69(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 69);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82121880
	if (ctx.cr0.eq) goto loc_82121880;
loc_82121878:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x821217b8
	goto loc_821217B8;
loc_82121880:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
loc_82121884:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x821217b8
	goto loc_821217B8;
loc_8212188C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82120780
	ctx.lr = 0x82121898;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82121900
	if (!ctx.cr0.lt) goto loc_82121900;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82121598
	ctx.lr = 0x821218AC;
	sub_82121598(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821218d4
	if (ctx.cr6.eq) goto loc_821218D4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x821218CC;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82121900
	if (!ctx.cr0.lt) goto loc_82121900;
loc_821218D4:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r11,69(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 69);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821218f8
	if (ctx.cr0.eq) goto loc_821218F8;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// b 0x82121878
	goto loc_82121878;
loc_821218F8:
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82121884
	goto loc_82121884;
loc_82121900:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82121a40
	ctx.lr = 0x82121910;
	sub_82121A40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8212191C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82133130) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,21(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82133150
	if (!ctx.cr0.eq) goto loc_82133150;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82133150:
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
	// bne cr6,0x82133170
	if (!ctx.cr6.eq) goto loc_82133170;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x8213318c
	goto loc_8213318C;
loc_82133170:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82133188
	if (!ctx.cr6.eq) goto loc_82133188;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x8213318c
	goto loc_8213318C;
loc_82133188:
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_8213318C:
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82136018) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82136054
	if (ctx.cr6.gt) goto loc_82136054;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-19404
	ctx.r4.s64 = ctx.r11.s64 + -19404;
	// addi r3,r10,-19280
	ctx.r3.s64 = ctx.r10.s64 + -19280;
	// li r5,162
	ctx.r5.s64 = 162;
	// bl 0x821231d0
	ctx.lr = 0x82136054;
	sub_821231D0(ctx, base);
loc_82136054:
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r11,-21824
	r30.s64 = ctx.r11.s64 + -21824;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82136080
	if (ctx.cr6.gt) goto loc_82136080;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,-21756
	ctx.r3.s64 = ctx.r11.s64 + -21756;
	// li r5,76
	ctx.r5.s64 = 76;
	// bl 0x821231d0
	ctx.lr = 0x82136080;
	sub_821231D0(ctx, base);
loc_82136080:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821360a0
	if (ctx.cr6.gt) goto loc_821360A0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,-21704
	ctx.r3.s64 = ctx.r11.s64 + -21704;
	// li r5,88
	ctx.r5.s64 = 88;
	// bl 0x821231d0
	ctx.lr = 0x821360A0;
	sub_821231D0(ctx, base);
loc_821360A0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
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

DEFINE_REX_FUNC(sub_8213ADD0) {
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
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x8213ADF4;
	sub_82120AC0(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x8213AE04;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8213AE14;
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

DEFINE_REX_FUNC(sub_8213D3E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8213D3E8;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r30,r11,-24868
	r30.s64 = ctx.r11.s64 + -24868;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82120600
	ctx.lr = 0x8213D404;
	sub_82120600(ctx, base);
	// lis r31,-32106
	r31.s64 = -2104098816;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r3,6072(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213D420;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82120ac0
	ctx.lr = 0x8213D434;
	sub_82120AC0(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213d4c0
	if (ctx.cr0.eq) goto loc_8213D4C0;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r11,97(r28)
	REX_STORE_U8(r28.u32 + 97, ctx.r11.u8);
	// bl 0x82160340
	ctx.lr = 0x8213D44C;
	sub_82160340(ctx, base);
	// lwz r3,6072(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213D460;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82121610
	ctx.lr = 0x8213D470;
	sub_82121610(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r28,104
	ctx.r4.s64 = r28.s64 + 104;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82160388
	ctx.lr = 0x8213D480;
	sub_82160388(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// rlwinm r30,r11,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82120ac0
	ctx.lr = 0x8213D49C;
	sub_82120AC0(ctx, base);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// beq 0x8213d4bc
	if (ctx.cr0.eq) goto loc_8213D4BC;
	// bl 0x82120ac0
	ctx.lr = 0x8213D4B4;
	sub_82120AC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8213d6f8
	goto loc_8213D6F8;
loc_8213D4BC:
	// bl 0x82120ac0
	ctx.lr = 0x8213D4C0;
	sub_82120AC0(ctx, base);
loc_8213D4C0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-17692
	ctx.r4.s64 = ctx.r11.s64 + -17692;
	// bl 0x82120600
	ctx.lr = 0x8213D4D0;
	sub_82120600(ctx, base);
	// lbz r11,97(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 97);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213d538
	if (ctx.cr0.eq) goto loc_8213D538;
	// addi r30,r28,104
	r30.s64 = r28.s64 + 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f530
	ctx.lr = 0x8213D4EC;
	sub_8215F530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x8213D4F8;
	sub_8215F5F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-17672
	ctx.r4.s64 = ctx.r11.s64 + -17672;
	// bl 0x8215f670
	ctx.lr = 0x8213D504;
	sub_8215F670(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8213D508;
	sub_8215FA30(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,-17684
	ctx.r5.s64 = ctx.r11.s64 + -17684;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82121610
	ctx.lr = 0x8213D51C;
	sub_82121610(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120700
	ctx.lr = 0x8213D528;
	sub_82120700(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82120ac0
	ctx.lr = 0x8213D538;
	sub_82120AC0(ctx, base);
loc_8213D538:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212a538
	ctx.lr = 0x8213D540;
	sub_8212A538(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-17664
	ctx.r4.s64 = ctx.r11.s64 + -17664;
	// bl 0x82120600
	ctx.lr = 0x8213D550;
	sub_82120600(ctx, base);
	// lwz r3,6072(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6072);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213D570;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120ac0
	ctx.lr = 0x8213D580;
	sub_82120AC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8213d660
	if (ctx.cr6.eq) goto loc_8213D660;
	// addi r31,r28,8
	r31.s64 = r28.s64 + 8;
loc_8213D594:
	// addi r4,r29,8
	ctx.r4.s64 = r29.s64 + 8;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82123408
	ctx.lr = 0x8213D5A0;
	sub_82123408(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8213d5c0
	if (!ctx.cr6.lt) goto loc_8213D5C0;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x8213d5c4
	if (!ctx.cr6.gt) goto loc_8213D5C4;
loc_8213D5C0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8213D5C4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8213d60c
	if (ctx.cr0.eq) goto loc_8213D60C;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r9,28
	ctx.r9.s64 = 28;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r10,r10,r30
	ctx.r10.u64 = r30.u64 - ctx.r10.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// divw r30,r10,r9
	r30.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// bne cr6,0x8213d5f0
	if (!ctx.cr6.eq) goto loc_8213D5F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82122860
	ctx.lr = 0x8213D5F0;
	sub_82122860(ctx, base);
loc_8213D5F0:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213d634
	if (ctx.cr6.eq) goto loc_8213D634;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mulli r10,r30,28
	ctx.r10.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(28));
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8213d630
	goto loc_8213D630;
loc_8213D60C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213d620
	if (!ctx.cr6.eq) goto loc_8213D620;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82122860
	ctx.lr = 0x8213D620;
	sub_82122860(ctx, base);
loc_8213D620:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213d634
	if (ctx.cr6.eq) goto loc_8213D634;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8213D630:
	// bl 0x82120670
	ctx.lr = 0x8213D634;
	sub_82120670(ctx, base);
loc_8213D634:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bl 0x82120ac0
	ctx.lr = 0x8213D650;
	sub_82120AC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8213d594
	if (!ctx.cr6.eq) goto loc_8213D594;
loc_8213D660:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6036(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6036);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213D678;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120600
	ctx.lr = 0x8213D684;
	sub_82120600(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6076(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6076);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8213d6b4
	if (ctx.cr6.eq) goto loc_8213D6B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,-24880
	ctx.r4.s64 = ctx.r10.s64 + -24880;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213D6AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8215fba8
	ctx.lr = 0x8213D6B4;
	sub_8215FBA8(ctx, base);
loc_8213D6B4:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213D6CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8213D6DC;
	sub_82120AC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212a5b0
	ctx.lr = 0x8213D6E4;
	sub_8212A5B0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8213D6F4;
	sub_82120AC0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8213D6F8:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821549E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821549F0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82154a18
	if (!ctx.cr6.gt) goto loc_82154A18;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26548
	ctx.r3.s64 = ctx.r11.s64 + -26548;
	// bl 0x822f6020
	ctx.lr = 0x82154A18;
	sub_822F6020(ctx, base);
loc_82154A18:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bge cr6,0x82154ae8
	if (!ctx.cr6.lt) goto loc_82154AE8;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82154a4c
	if (ctx.cr6.eq) goto loc_82154A4C;
	// rlwinm r3,r28,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x822f6280
	ctx.lr = 0x82154A44;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82154af0
	if (ctx.cr0.eq) goto loc_82154AF0;
loc_82154A4C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x82154a8c
	goto loc_82154A8C;
loc_82154A5C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82154a84
	if (ctx.cr6.eq) goto loc_82154A84;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
loc_82154A84:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_82154A8C:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82154a5c
	if (!ctx.cr6.eq) goto loc_82154A5C;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subf r10,r3,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r3.u64;
	// srawi r29,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	r29.s64 = ctx.r10.s32 >> 4;
	// beq cr6,0x82154acc
	if (ctx.cr6.eq) goto loc_82154ACC;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82154ac8
	if (ctx.cr6.eq) goto loc_82154AC8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82154ABC:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82154abc
	if (!ctx.cr6.eq) goto loc_82154ABC;
loc_82154AC8:
	// bl 0x8269ce98
	ctx.lr = 0x82154ACC;
	sub_8269CE98(ctx, base);
loc_82154ACC:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_82154AE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82154AF0:
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
	ctx.lr = 0x82154B0C;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_8215CDE0) {
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
	ctx.lr = 0x8215CDE8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// b 0x8215cea8
	goto loc_8215CEA8;
loc_8215CE00:
	// lwz r10,36(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215ce1c
	if (ctx.cr6.eq) goto loc_8215CE1C;
	// lwz r11,52(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 52);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8215ce20
	goto loc_8215CE20;
loc_8215CE1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8215CE20:
	// extsw r30,r11
	r30.s64 = ctx.r11.s32;
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(r30.s64, 0, ctx.xer);
	// ble cr6,0x8215ce7c
	if (!ctx.cr6.gt) goto loc_8215CE7C;
	// cmpd cr6,r29,r30
	ctx.cr6.compare<int64_t>(r29.s64, r30.s64, ctx.xer);
	// bge cr6,0x8215ce38
	if (!ctx.cr6.lt) goto loc_8215CE38;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8215CE38:
	// rotlwi r31,r30,0
	r31.u64 = __builtin_rotateleft32(r30.u32, 0);
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8215CE4C;
	sub_826A1E70(ctx, base);
	// lwz r11,52(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 52);
	// add r28,r31,r28
	r28.u64 = r31.u64 + r28.u64;
	// add r26,r30,r26
	r26.u64 = r30.u64 + r26.u64;
	// subf r29,r30,r29
	r29.u64 = r29.u64 - r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r31,r10
	ctx.r10.u64 = ctx.r10.u64 - r31.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,36(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 36);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x8215cea8
	goto loc_8215CEA8;
loc_8215CE7C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lbz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U8(r28.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215CE94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8215ceb0
	if (ctx.cr6.eq) goto loc_8215CEB0;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
loc_8215CEA8:
	// cmpdi cr6,r29,0
	ctx.cr6.compare<int64_t>(r29.s64, 0, ctx.xer);
	// bgt cr6,0x8215ce00
	if (ctx.cr6.gt) goto loc_8215CE00;
loc_8215CEB0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82163690) {
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
	ctx.lr = 0x82163698;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,112(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821637a8
	if (ctx.cr6.eq) goto loc_821637A8;
	// li r26,0
	r26.s64 = 0;
	// lis r25,-32106
	r25.s64 = -2104098816;
	// lis r27,-32106
	r27.s64 = -2104098816;
loc_821636BC:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821636C4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821636e0
	if (ctx.cr0.eq) goto loc_821636E0;
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// b 0x821636e4
	goto loc_821636E4;
loc_821636E0:
	// mr r31,r26
	r31.u64 = r26.u64;
loc_821636E4:
	// lwz r4,108(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 108);
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821636fc
	if (!ctx.cr6.eq) goto loc_821636FC;
loc_821636F4:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// b 0x82163758
	goto loc_82163758;
loc_821636FC:
	// lwz r3,6072(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6072);
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82163714;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821636f4
	if (ctx.cr0.eq) goto loc_821636F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x82125c20
	ctx.lr = 0x82163728;
	sub_82125C20(ctx, base);
	// lwz r3,6072(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6072);
	// lwz r4,108(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 108);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r30,4(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bctrl 
	ctx.lr = 0x8216374C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r11,r3,r30
	ctx.r11.u64 = r30.u64 - ctx.r3.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82163758:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82163768
	if (ctx.cr0.eq) goto loc_82163768;
	// stw r31,8(r29)
	REX_STORE_U32(r29.u32 + 8, r31.u32);
	// b 0x82163780
	goto loc_82163780;
loc_82163768:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82163780
	if (ctx.cr6.eq) goto loc_82163780;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x82163778;
	sub_8269D1B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82163780;
	sub_8269CE98(ctx, base);
loc_82163780:
	// lwz r3,6044(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 6044);
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82163798;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,116(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 116);
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821636bc
	if (!ctx.cr6.eq) goto loc_821636BC;
loc_821637A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8216E870) {
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
	ctx.lr = 0x8216E878;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,36(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8216e914
	if (!ctx.cr6.lt) goto loc_8216E914;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// slw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// addi r8,r8,16592
	ctx.r8.s64 = ctx.r8.s64 + 16592;
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// slw. r31,r9,r11
	r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// lfs f0,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// ble 0x8216e9d4
	if (!ctx.cr0.gt) goto loc_8216E9D4;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
loc_8216E8D8:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x8216e9e0
	ctx.lr = 0x8216E904;
	sub_8216E9E0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// bne 0x8216e8d8
	if (!ctx.cr0.eq) goto loc_8216E8D8;
	// b 0x8216e9d4
	goto loc_8216E9D4;
loc_8216E914:
	// ble cr6,0x8216e994
	if (!ctx.cr6.gt) goto loc_8216E994;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// addi r8,r8,16592
	ctx.r8.s64 = ctx.r8.s64 + 16592;
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// slw. r31,r9,r11
	r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// lfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// ble 0x8216e9d4
	if (!ctx.cr0.gt) goto loc_8216E9D4;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
loc_8216E958:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x8216e9e0
	ctx.lr = 0x8216E984;
	sub_8216E9E0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// bne 0x8216e958
	if (!ctx.cr0.eq) goto loc_8216E958;
	// b 0x8216e9d4
	goto loc_8216E9D4;
loc_8216E994:
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// addi r10,r9,16592
	ctx.r10.s64 = ctx.r9.s64 + 16592;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x8216e9e0
	ctx.lr = 0x8216E9D4;
	sub_8216E9E0(ctx, base);
loc_8216E9D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8217A6F8) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r30,0
	r30.s64 = 0;
	// addi r11,r9,28960
	ctx.r11.s64 = ctx.r9.s64 + 28960;
	// addi r10,r10,-20
	ctx.r10.s64 = ctx.r10.s64 + -20;
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// bl 0x8217a390
	ctx.lr = 0x8217A76C;
	sub_8217A390(ctx, base);
	// stb r30,44(r31)
	REX_STORE_U8(r31.u32 + 44, r30.u8);
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

DEFINE_REX_FUNC(sub_8217DBA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8217DBA8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8217d058
	ctx.lr = 0x8217DBC0;
	sub_8217D058(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8217de30
	if (ctx.cr0.eq) goto loc_8217DE30;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217de30
	if (ctx.cr0.eq) goto loc_8217DE30;
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// bne cr6,0x8217de30
	if (!ctx.cr6.eq) goto loc_8217DE30;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8217a4b8
	ctx.lr = 0x8217DBE4;
	sub_8217A4B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8217d058
	ctx.lr = 0x8217DBF4;
	sub_8217D058(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8217de30
	if (ctx.cr0.eq) goto loc_8217DE30;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217de30
	if (ctx.cr0.eq) goto loc_8217DE30;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r11,29228
	ctx.r4.s64 = ctx.r11.s64 + 29228;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8217d470
	ctx.lr = 0x8217DC20;
	sub_8217D470(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217dc90
	if (ctx.cr0.eq) goto loc_8217DC90;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x822f6280
	ctx.lr = 0x8217DC30;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217ddf4
	if (ctx.cr0.eq) goto loc_8217DDF4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-20
	ctx.r9.s64 = ctx.r9.s64 + -20;
	// addi r10,r8,29032
	ctx.r10.s64 = ctx.r8.s64 + 29032;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r9,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r8,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r9,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// stw r9,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// stw r9,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// b 0x8217ddec
	goto loc_8217DDEC;
loc_8217DC90:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r11,28720
	ctx.r4.s64 = ctx.r11.s64 + 28720;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8217d470
	ctx.lr = 0x8217DCA8;
	sub_8217D470(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217dd0c
	if (ctx.cr0.eq) goto loc_8217DD0C;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x822f6280
	ctx.lr = 0x8217DCB8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217ddf4
	if (ctx.cr0.eq) goto loc_8217DDF4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r10,r8,28808
	ctx.r10.s64 = ctx.r8.s64 + 28808;
	// li r8,2
	ctx.r8.s64 = 2;
loc_8217DCD8:
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-20
	ctx.r9.s64 = ctx.r9.s64 + -20;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r9,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r8,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// b 0x8217ddec
	goto loc_8217DDEC;
loc_8217DD0C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r11,28704
	ctx.r4.s64 = ctx.r11.s64 + 28704;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8217d470
	ctx.lr = 0x8217DD24;
	sub_8217D470(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217dd58
	if (ctx.cr0.eq) goto loc_8217DD58;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x8217DD34;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217dd44
	if (ctx.cr0.eq) goto loc_8217DD44;
	// bl 0x8217a6f8
	ctx.lr = 0x8217DD40;
	sub_8217A6F8(ctx, base);
	// b 0x8217dd48
	goto loc_8217DD48;
loc_8217DD44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8217DD48:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r11,44(r3)
	REX_STORE_U8(ctx.r3.u32 + 44, ctx.r11.u8);
	// b 0x8217ddf8
	goto loc_8217DDF8;
loc_8217DD58:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r11,29236
	ctx.r4.s64 = ctx.r11.s64 + 29236;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8217d470
	ctx.lr = 0x8217DD70;
	sub_8217D470(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217dda4
	if (ctx.cr0.eq) goto loc_8217DDA4;
loc_8217DD78:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x822f6280
	ctx.lr = 0x8217DD80;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217ddf4
	if (ctx.cr0.eq) goto loc_8217DDF4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r10,r8,28880
	ctx.r10.s64 = ctx.r8.s64 + 28880;
	// li r8,3
	ctx.r8.s64 = 3;
	// b 0x8217dcd8
	goto loc_8217DCD8;
loc_8217DDA4:
	// lbz r3,1(r31)
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + 1);
	// cmplwi cr6,r3,127
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 127, ctx.xer);
	// bge cr6,0x8217ddb8
	if (!ctx.cr6.lt) goto loc_8217DDB8;
	// bl 0x826a0800
	ctx.lr = 0x8217DDB4;
	sub_826A0800(ctx, base);
	// b 0x8217ddbc
	goto loc_8217DDBC;
loc_8217DDB8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8217DDBC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8217ddd0
	if (!ctx.cr6.eq) goto loc_8217DDD0;
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// bne cr6,0x8217dd78
	if (!ctx.cr6.eq) goto loc_8217DD78;
loc_8217DDD0:
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x822f6280
	ctx.lr = 0x8217DDD8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217ddf4
	if (ctx.cr0.eq) goto loc_8217DDF4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// bl 0x8217af40
	ctx.lr = 0x8217DDEC;
	sub_8217AF40(ctx, base);
loc_8217DDEC:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8217ddf8
	goto loc_8217DDF8;
loc_8217DDF4:
	// li r31,0
	r31.s64 = 0;
loc_8217DDF8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8217de08
	if (ctx.cr6.eq) goto loc_8217DE08;
	// stw r28,16(r31)
	REX_STORE_U32(r31.u32 + 16, r28.u32);
	// b 0x8217de28
	goto loc_8217DE28;
loc_8217DE08:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8217de28
	if (ctx.cr6.eq) goto loc_8217DE28;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8217daf0
	ctx.lr = 0x8217DE28;
	sub_8217DAF0(ctx, base);
loc_8217DE28:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8217de34
	goto loc_8217DE34;
loc_8217DE30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8217DE34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82190188) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb8
	ctx.lr = 0x82190190;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2c9c
	ctx.lr = 0x82190198;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r29,6096(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 6096);
	// bl 0x82126320
	ctx.lr = 0x821901B4;
	sub_82126320(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8216cfa0
	ctx.lr = 0x821901C0;
	sub_8216CFA0(ctx, base);
	// addi r4,r30,176
	ctx.r4.s64 = r30.s64 + 176;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8218cc20
	ctx.lr = 0x821901CC;
	sub_8218CC20(ctx, base);
	// li r11,255
	ctx.r11.s64 = 255;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// li r30,0
	r30.s64 = 0;
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stb r30,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r30.u8);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f30,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f30.f64 = double(temp.f32);
	// lfs f29,904(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 904);
	f29.f64 = double(temp.f32);
	// lfs f31,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	f31.f64 = double(temp.f32);
loc_821901FC:
	// addi r28,r30,1
	r28.s64 = r30.s64 + 1;
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * f31.f64));
	// extsw r10,r28
	ctx.r10.s64 = r28.s32;
	// std r11,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r11.u64);
	// lfd f12,208(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 208);
	// std r10,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r10.u64);
	// lfd f11,176(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmsubs f28,f12,f29,f13
	f28.f64 = double(float(std::fma(ctx.f12.f64, f29.f64, -ctx.f13.f64)));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// fmsubs f27,f0,f29,f13
	f27.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, -ctx.f13.f64)));
	// bl 0x82139c28
	ctx.lr = 0x82190248;
	sub_82139C28(ctx, base);
	// fneg f26,f1
	ctx.fpscr.disableFlushMode();
	f26.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x82135630
	ctx.lr = 0x82190254;
	sub_82135630(ctx, base);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// bl 0x82139c28
	ctx.lr = 0x82190260;
	sub_82139C28(ctx, base);
	// fneg f25,f1
	ctx.fpscr.disableFlushMode();
	f25.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// bl 0x82135630
	ctx.lr = 0x8219026C;
	sub_82135630(ctx, base);
	// lfs f4,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// lfs f3,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f12,f4,f30
	ctx.f12.f64 = double(float(ctx.f4.f64 * f30.f64));
	// fmuls f9,f3,f30
	ctx.f9.f64 = double(float(ctx.f3.f64 * f30.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f11,f3,f26
	ctx.f11.f64 = double(float(ctx.f3.f64 * f26.f64));
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f0,f4,f26
	ctx.f0.f64 = double(float(ctx.f4.f64 * f26.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f10,f28,f3
	ctx.f10.f64 = double(float(f28.f64 * ctx.f3.f64));
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f13,f28,f4
	ctx.f13.f64 = double(float(f28.f64 * ctx.f4.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f8,f25,f4
	ctx.f8.f64 = double(float(f25.f64 * ctx.f4.f64));
	// stfs f9,136(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f6,f3,f25
	ctx.f6.f64 = double(float(ctx.f3.f64 * f25.f64));
	// lfs f2,108(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f7,f4,f30
	ctx.f7.f64 = double(float(ctx.f4.f64 * f30.f64));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// fmuls f5,f3,f30
	ctx.f5.f64 = double(float(ctx.f3.f64 * f30.f64));
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// fmuls f4,f1,f4
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmuls f3,f1,f3
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f3.f64));
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f7,152(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f5,200(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f8,144(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f6,192(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f4,148(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fadds f11,f6,f8
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// stfs f3,196(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fadds f9,f5,f7
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fadds f10,f3,f4
	ctx.f10.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f11,f31
	ctx.f0.f64 = double(float(ctx.f11.f64 * f31.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * f31.f64));
	// fmuls f0,f10,f31
	ctx.f0.f64 = double(float(ctx.f10.f64 * f31.f64));
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fadds f0,f12,f2
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f0,f9,f2
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82136f38
	ctx.lr = 0x82190340;
	sub_82136F38(ctx, base);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82136f38
	ctx.lr = 0x82190358;
	sub_82136F38(ctx, base);
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(r30.s32, 16, ctx.xer);
	// bge cr6,0x821903a8
	if (!ctx.cr6.lt) goto loc_821903A8;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82136f38
	ctx.lr = 0x82190378;
	sub_82136F38(ctx, base);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82136f38
	ctx.lr = 0x82190390;
	sub_82136F38(ctx, base);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82136f38
	ctx.lr = 0x821903A8;
	sub_82136F38(ctx, base);
loc_821903A8:
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmpwi cr6,r28,16
	ctx.cr6.compare<int32_t>(r28.s32, 16, ctx.xer);
	// ble cr6,0x821901fc
	if (!ctx.cr6.gt) goto loc_821901FC;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2ce8
	ctx.lr = 0x821903C0;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821A0948) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r9,r9,16592
	ctx.r9.s64 = ctx.r9.s64 + 16592;
	// lfs f0,15048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
loc_821A096C:
	// lfs f12,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r9,256
	ctx.r8.s64 = ctx.r9.s64 + 256;
	// lfs f13,72(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,76(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lfs f11,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
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
	// lfsx f13,r8,r7
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f13,f13,f0,f12
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,64(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a096c
	if (!ctx.cr6.eq) goto loc_821A096C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A6AF8) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x821a6b50
	if (ctx.cr6.eq) goto loc_821A6B50;
loc_821A6B38:
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x821A6B40;
	sub_8269CE98(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821a6b38
	if (!ctx.cr6.eq) goto loc_821A6B38;
loc_821A6B50:
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

DEFINE_REX_FUNC(sub_821A8AC0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,93(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 93);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x821a8ae0
	if (!ctx.cr0.eq) goto loc_821A8AE0;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_821A8AE0:
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
	// bne cr6,0x821a8b00
	if (!ctx.cr6.eq) goto loc_821A8B00;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x821a8b1c
	goto loc_821A8B1C;
loc_821A8B00:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821a8b18
	if (!ctx.cr6.eq) goto loc_821A8B18;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x821a8b1c
	goto loc_821A8B1C;
loc_821A8B18:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_821A8B1C:
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AB778) {
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
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821AB790;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821ab7c0
	if (ctx.cr0.eq) goto loc_821AB7C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125dc8
	ctx.lr = 0x821AB7A0;
	sub_82125DC8(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-24352
	ctx.r10.s64 = ctx.r10.s64 + -24352;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// b 0x821ab7c4
	goto loc_821AB7C4;
loc_821AB7C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821AB7C4:
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

DEFINE_REX_FUNC(sub_821AE1E8) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,-23760
	ctx.r11.s64 = ctx.r11.s64 + -23760;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8269ce98
	ctx.lr = 0x821AE218;
	sub_8269CE98(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x8269ce98
	ctx.lr = 0x821AE220;
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
	ctx.lr = 0x821AE234;
	sub_8214E4B0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ae244
	if (ctx.cr0.eq) goto loc_821AE244;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821AE244;
	sub_8269CE98(ctx, base);
loc_821AE244:
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

DEFINE_REX_FUNC(sub_821B15D8) {
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
	ctx.lr = 0x821B15EC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b15fc
	if (ctx.cr0.eq) goto loc_821B15FC;
	// bl 0x821b1610
	ctx.lr = 0x821B15F8;
	sub_821B1610(ctx, base);
	// b 0x821b1600
	goto loc_821B1600;
loc_821B15FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B1600:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B3A58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821B3A60;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x821b3ad4
	if (!ctx.cr6.eq) goto loc_821B3AD4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// addi r31,r11,29744
	r31.s64 = ctx.r11.s64 + 29744;
	// bge cr6,0x821b3a9c
	if (!ctx.cr6.lt) goto loc_821B3A9C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,30080
	ctx.r3.s64 = ctx.r11.s64 + 30080;
	// li r5,173
	ctx.r5.s64 = 173;
	// bl 0x821231d0
	ctx.lr = 0x821B3A9C;
	sub_821231D0(ctx, base);
loc_821B3A9C:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x821b3abc
	if (ctx.cr6.eq) goto loc_821B3ABC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,30128
	ctx.r3.s64 = ctx.r11.s64 + 30128;
	// li r5,177
	ctx.r5.s64 = 177;
	// bl 0x821231d0
	ctx.lr = 0x821B3ABC;
	sub_821231D0(ctx, base);
loc_821B3ABC:
	// lwz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 2);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,6
	ctx.r3.s64 = 6;
	// stb r10,92(r29)
	REX_STORE_U8(r29.u32 + 92, ctx.r10.u8);
	// stw r11,96(r29)
	REX_STORE_U32(r29.u32 + 96, ctx.r11.u32);
	// b 0x821b3ad8
	goto loc_821B3AD8;
loc_821B3AD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B3AD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821B65E8) {
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
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x822f6280
	ctx.lr = 0x821B65FC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b660c
	if (ctx.cr0.eq) goto loc_821B660C;
	// bl 0x821b6620
	ctx.lr = 0x821B6608;
	sub_821B6620(ctx, base);
	// b 0x821b6610
	goto loc_821B6610;
loc_821B660C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B6610:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B8300) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821B8308;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r30,0
	r30.s64 = 0;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// std r30,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, r30.u64);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// std r30,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, r30.u64);
	// std r30,16(r8)
	REX_STORE_U64(ctx.r8.u32 + 16, r30.u64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r30,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, r30.u32);
loc_821B8338:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821b8338
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B8338;
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r9,124(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lis r8,-32106
	ctx.r8.s64 = -2104098816;
	// addi r7,r11,64
	ctx.r7.s64 = ctx.r11.s64 + 64;
	// lfs f0,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// li r3,240
	ctx.r3.s64 = 240;
	// lfs f12,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// ld r7,64(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// lfs f11,140(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// ld r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// lfs f10,144(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r29,6168(r8)
	r29.u64 = REX_LOAD_U32(ctx.r8.u32 + 6168);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// std r7,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// lfs f0,160(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lfs f13,164(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B83B4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b83c8
	if (ctx.cr0.eq) goto loc_821B83C8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ae98
	ctx.lr = 0x821B83C4;
	sub_8218AE98(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_821B83C8:
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
	ctx.lr = 0x821B83E4;
	sub_8214ABD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82149e08
	ctx.lr = 0x821B83F0;
	sub_82149E08(ctx, base);
	// stw r30,168(r31)
	REX_STORE_U32(r31.u32 + 168, r30.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821BFDA8) {
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
	// bl 0x821c0228
	ctx.lr = 0x821BFDC8;
	sub_821C0228(ctx, base);
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

DEFINE_REX_FUNC(sub_821C1910) {
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
	ctx.lr = 0x821C1918;
	// stwu r1,-2080(r1)
	ea = -2080 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32106
	r31.s64 = -2104098816;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r11,1608(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821c1938
	if (!ctx.cr6.eq) goto loc_821C1938;
	// bl 0x821c25e0
	ctx.lr = 0x821C1934;
	sub_821C25E0(ctx, base);
	// lwz r11,1608(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1608);
loc_821C1938:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r26,r24,200
	r26.s64 = r24.s64 + 200;
	// stw r11,1608(r31)
	REX_STORE_U32(r31.u32 + 1608, ctx.r11.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r25,4
	r25.s64 = 4;
	// li r27,0
	r27.s64 = 0;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// addi r28,r11,12980
	r28.s64 = ctx.r11.s64 + 12980;
loc_821C1958:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822f6280
	ctx.lr = 0x821C1960;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c1978
	if (ctx.cr0.eq) goto loc_821C1978;
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r27,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r27.u32);
	// b 0x821c197c
	goto loc_821C197C;
loc_821C1978:
	// mr r30,r27
	r30.u64 = r27.u64;
loc_821C197C:
	// lwz r11,6092(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// addic. r31,r30,4
	ctx.xer.ca = r30.u32 > 4294967291;
	r31.s64 = r30.s64 + 4;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// beq 0x821c1994
	if (ctx.cr0.eq) goto loc_821C1994;
	// bl 0x822d6778
	ctx.lr = 0x821C1990;
	sub_822D6778(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_821C1994:
	// stw r30,12(r26)
	REX_STORE_U32(r26.u32 + 12, r30.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822f6280
	ctx.lr = 0x821C19A0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c19b8
	if (ctx.cr0.eq) goto loc_821C19B8;
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r27,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r27.u32);
	// b 0x821c19bc
	goto loc_821C19BC;
loc_821C19B8:
	// mr r30,r27
	r30.u64 = r27.u64;
loc_821C19BC:
	// lwz r11,6092(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// addic. r31,r30,4
	ctx.xer.ca = r30.u32 > 4294967291;
	r31.s64 = r30.s64 + 4;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// beq 0x821c19d4
	if (ctx.cr0.eq) goto loc_821C19D4;
	// bl 0x822d6778
	ctx.lr = 0x821C19D0;
	sub_822D6778(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_821C19D4:
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// stwu r30,16(r26)
	ea = 16 + r26.u32;
	REX_STORE_U32(ea, r30.u32);
	r26.u32 = ea;
	// bne 0x821c1958
	if (!ctx.cr0.eq) goto loc_821C1958;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,6096(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6096);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// lwz r5,1896(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 1896);
	// lwz r4,1892(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1892);
	// bl 0x8216fc68
	ctx.lr = 0x821C1A04;
	sub_8216FC68(ctx, base);
	// lwz r10,176(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 176);
	// addi r11,r24,156
	ctx.r11.s64 = r24.s64 + 156;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821c1a1c
	if (ctx.cr6.lt) goto loc_821C1A1C;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821c1a20
	goto loc_821C1A20;
loc_821C1A1C:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_821C1A20:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r5,r9,-26856
	ctx.r5.s64 = ctx.r9.s64 + -26856;
	// lfs f1,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r8,-17904
	ctx.r4.s64 = ctx.r8.s64 + -17904;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82170228
	ctx.lr = 0x821C1A5C;
	sub_82170228(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,6060(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// bl 0x8212e940
	ctx.lr = 0x821C1A6C;
	sub_8212E940(ctx, base);
	// lbz r11,136(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 136);
	// stw r3,208(r24)
	REX_STORE_U32(r24.u32 + 208, ctx.r3.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c1a98
	if (ctx.cr0.eq) goto loc_821C1A98;
	// lbz r11,204(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 204);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c1a98
	if (!ctx.cr0.eq) goto loc_821C1A98;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,124(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 124);
	// stb r11,204(r24)
	REX_STORE_U8(r24.u32 + 204, ctx.r11.u8);
	// bl 0x821914c8
	ctx.lr = 0x821C1A98;
	sub_821914C8(ctx, base);
loc_821C1A98:
	// addi r1,r1,2080
	ctx.r1.s64 = ctx.r1.s64 + 2080;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_821CE548) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ce578
	if (ctx.cr6.eq) goto loc_821CE578;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// bl 0x821ce490
	ctx.lr = 0x821CE578;
	sub_821CE490(ctx, base);
loc_821CE578:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D0998) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r11,6176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r3,132
	ctx.r5.s64 = ctx.r3.s64 + 132;
	// addi r4,r3,116
	ctx.r4.s64 = ctx.r3.s64 + 116;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,36(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_821D1D50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821D1D58;
	// lfs f0,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// lfs f12,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r1,-80
	ctx.r8.s64 = ctx.r1.s64 + -80;
	// lfs f11,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f13,76(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f9,48(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// addi r7,r1,-64
	ctx.r7.s64 = ctx.r1.s64 + -64;
	// lfs f10,52(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f8,56(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f8,72(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,32(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// addi r6,r1,-48
	ctx.r6.s64 = ctx.r1.s64 + -48;
	// lfs f6,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f7,f8
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// lfs f5,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f8
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f8,f5,f8
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// li r10,4
	ctx.r10.s64 = 4;
	// fsubs f5,f12,f9
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fsubs f4,f11,f10
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsubs f3,f0,f13
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fsubs f13,f5,f7
	ctx.f13.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// stfs f13,-96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fsubs f13,f4,f6
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// stfs f13,-92(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// fsubs f13,f3,f8
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f8.f64));
	// stfs f13,-88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// fsubs f13,f12,f7
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// stfs f13,-80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// fsubs f13,f11,f6
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// stfs f13,-76(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// fsubs f13,f0,f8
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// stfs f13,-72(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// stfs f0,-56(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// fadds f0,f5,f7
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// stfs f0,-48(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// fadds f13,f12,f7
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// stfs f13,-64(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// fadds f0,f4,f6
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// stfs f0,-44(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// fadds f13,f11,f6
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// stfs f13,-60(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// fadds f0,f3,f8
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// stfs f0,-40(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// ld r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r31,0(r7)
	r31.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// ld r30,0(r6)
	r30.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// ld r29,0(r9)
	r29.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// ld r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// ld r6,8(r6)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r5,16(r4)
	REX_STORE_U64(ctx.r4.u32 + 16, ctx.r5.u64);
	// std r31,32(r4)
	REX_STORE_U64(ctx.r4.u32 + 32, r31.u64);
	// std r30,48(r4)
	REX_STORE_U64(ctx.r4.u32 + 48, r30.u64);
	// std r29,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, r29.u64);
	// std r8,24(r4)
	REX_STORE_U64(ctx.r4.u32 + 24, ctx.r8.u64);
	// std r7,40(r4)
	REX_STORE_U64(ctx.r4.u32 + 40, ctx.r7.u64);
	// std r6,56(r4)
	REX_STORE_U64(ctx.r4.u32 + 56, ctx.r6.u64);
	// std r9,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r9.u64);
loc_821D1E80:
	// lfs f0,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// lfs f13,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f11,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,-48(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// fadds f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f13,-44(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f0,-40(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// ld r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r9,60(r11)
	REX_STORE_U64(ctx.r11.u32 + 60, ctx.r9.u64);
	// std r8,68(r11)
	REX_STORE_U64(ctx.r11.u32 + 68, ctx.r8.u64);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f12,-4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f12,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x821d1e80
	if (!ctx.cr0.eq) goto loc_821D1E80;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821E0448) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822d6a60
	ctx.lr = 0x821E0460;
	sub_822D6A60(ctx, base);
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

DEFINE_REX_FUNC(sub_821E0A88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821E0A90;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,13540
	ctx.r11.s64 = ctx.r11.s64 + 13540;
	// li r30,0
	r30.s64 = 0;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120ac0
	ctx.lr = 0x821E0ACC;
	sub_82120AC0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r29,56(r31)
	REX_STORE_U8(r31.u32 + 56, r29.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
	// stb r30,57(r31)
	REX_STORE_U8(r31.u32 + 57, r30.u8);
	// stb r30,58(r31)
	REX_STORE_U8(r31.u32 + 58, r30.u8);
	// stb r30,59(r31)
	REX_STORE_U8(r31.u32 + 59, r30.u8);
	// stb r30,60(r31)
	REX_STORE_U8(r31.u32 + 60, r30.u8);
	// stb r30,61(r31)
	REX_STORE_U8(r31.u32 + 61, r30.u8);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// stw r30,68(r31)
	REX_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r30,72(r31)
	REX_STORE_U32(r31.u32 + 72, r30.u32);
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r30,100(r31)
	REX_STORE_U32(r31.u32 + 100, r30.u32);
	// stw r30,104(r31)
	REX_STORE_U32(r31.u32 + 104, r30.u32);
	// stw r30,108(r31)
	REX_STORE_U32(r31.u32 + 108, r30.u32);
	// stw r30,112(r31)
	REX_STORE_U32(r31.u32 + 112, r30.u32);
	// stw r30,116(r31)
	REX_STORE_U32(r31.u32 + 116, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821E79A0) {
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
	ctx.lr = 0x821E79A8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e79d0
	if (ctx.cr6.eq) goto loc_821E79D0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82120780
	ctx.lr = 0x821E79C8;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821e7ab4
	if (ctx.cr0.eq) goto loc_821E7AB4;
loc_821E79D0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821e78e8
	ctx.lr = 0x821E79D8;
	sub_821E78E8(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-15280
	r31.s64 = ctx.r11.s64 + -15280;
	// lwz r4,-15280(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -15280);
	// lwz r27,6040(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x82120600
	ctx.lr = 0x821E79F4;
	sub_82120600(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E7A10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821E7A24;
	sub_82120AC0(ctx, base);
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e7ab4
	if (ctx.cr0.eq) goto loc_821E7AB4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r30,6040(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x82120600
	ctx.lr = 0x821E7A3C;
	sub_82120600(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E7A58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x821E7A6C;
	sub_82120AC0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x821e7aa0
	if (ctx.cr6.eq) goto loc_821E7AA0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82121ec8
	ctx.lr = 0x821E7A80;
	sub_82121EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821e7aa0
	if (!ctx.cr0.eq) goto loc_821E7AA0;
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
	ctx.lr = 0x821E7AA0;
	sub_821231D0(ctx, base);
loc_821E7AA0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,100(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 100);
	// lwz r4,96(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 96);
	// bl 0x821e7ac0
	ctx.lr = 0x821E7AB0;
	sub_821E7AC0(ctx, base);
	// stw r30,8(r28)
	REX_STORE_U32(r28.u32 + 8, r30.u32);
loc_821E7AB4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821EF570) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821EF578;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8215f338
	ctx.lr = 0x821EF598;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x821EF5A0;
	sub_8215F2D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821ef5b4
	if (!ctx.cr6.eq) goto loc_821EF5B4;
loc_821EF5AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821ef624
	goto loc_821EF624;
loc_821EF5B4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16392
	ctx.r4.s64 = ctx.r11.s64 + 16392;
	// bl 0x8215f338
	ctx.lr = 0x821EF5C0;
	sub_8215F338(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
loc_821EF5C8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821ef5ec
	if (!ctx.cr6.eq) goto loc_821EF5EC;
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
	// b 0x821ef5f0
	goto loc_821EF5F0;
loc_821EF5EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821EF5F0:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821ef620
	if (!ctx.cr6.lt) goto loc_821EF620;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x821EF604;
	sub_8215F1B0(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x821EF608;
	sub_8215FA30(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82120780
	ctx.lr = 0x821EF610;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821ef5ac
	if (ctx.cr0.eq) goto loc_821EF5AC;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x821ef5c8
	goto loc_821EF5C8;
loc_821EF620:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821EF624:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821F6420) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,23564
	ctx.r4.s64 = ctx.r11.s64 + 23564;
	// addi r3,r10,23608
	ctx.r3.s64 = ctx.r10.s64 + 23608;
	// li r5,39
	ctx.r5.s64 = 39;
	// b 0x821231d0
	sub_821231D0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F7380) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r6,r3,8
	ctx.r6.s64 = ctx.r3.s64 + 8;
	// lis r31,-32106
	r31.s64 = -2104098816;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f73d0
	if (!ctx.cr6.eq) goto loc_821F73D0;
	// lwz r11,6100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6100);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,23856
	ctx.r4.s64 = ctx.r10.s64 + 23856;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F73D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821F73D0:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r6,r30,12
	ctx.r6.s64 = r30.s64 + 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f7404
	if (!ctx.cr6.eq) goto loc_821F7404;
	// lwz r11,6100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6100);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,23892
	ctx.r4.s64 = ctx.r10.s64 + 23892;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F7404;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821F7404:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f74a8
	ctx.lr = 0x821F740C;
	sub_821F74A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f76d0
	ctx.lr = 0x821F7414;
	sub_821F76D0(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6116(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6116);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F742C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821f7490
	if (ctx.cr0.eq) goto loc_821F7490;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F7448;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,23740
	ctx.r4.s64 = ctx.r11.s64 + 23740;
	// bl 0x82125d00
	ctx.lr = 0x821F7454;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821f7490
	if (!ctx.cr0.eq) goto loc_821F7490;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F7470;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r5,88(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,23944
	ctx.r4.s64 = ctx.r11.s64 + 23944;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F7490;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821F7490:
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

DEFINE_REX_FUNC(sub_821FEE80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821FEE88;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,21845
	ctx.r11.u64 = ctx.r11.u64 | 21845;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821feeb0
	if (!ctx.cr6.gt) goto loc_821FEEB0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26548
	ctx.r3.s64 = ctx.r11.s64 + -26548;
	// bl 0x822f6020
	ctx.lr = 0x821FEEB0;
	sub_822F6020(ctx, base);
loc_821FEEB0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r29,12
	r29.s64 = 12;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw r11,r11,r29
	ctx.r11.u64 = uint32_t((r29.s32 && !(ctx.r11.s32 == INT32_MIN && r29.s32 == -1)) ? ctx.r11.s32 / r29.s32 : 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bge cr6,0x821fef7c
	if (!ctx.cr6.lt) goto loc_821FEF7C;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x821feee8
	if (ctx.cr6.eq) goto loc_821FEEE8;
	// mulli r3,r28,12
	ctx.r3.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(12));
	// bl 0x822f6280
	ctx.lr = 0x821FEEE0;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821fef84
	if (ctx.cr0.eq) goto loc_821FEF84;
loc_821FEEE8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x821fef20
	goto loc_821FEF20;
loc_821FEEF8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821fef18
	if (ctx.cr6.eq) goto loc_821FEF18;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
loc_821FEF18:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_821FEF20:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821feef8
	if (!ctx.cr6.eq) goto loc_821FEEF8;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subf r10,r3,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r3.u64;
	// divw r29,r10,r29
	r29.u64 = uint32_t((r29.s32 && !(ctx.r10.s32 == INT32_MIN && r29.s32 == -1)) ? ctx.r10.s32 / r29.s32 : 0);
	// beq cr6,0x821fef60
	if (ctx.cr6.eq) goto loc_821FEF60;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821fef5c
	if (ctx.cr6.eq) goto loc_821FEF5C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_821FEF50:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821fef50
	if (!ctx.cr6.eq) goto loc_821FEF50;
loc_821FEF5C:
	// bl 0x8269ce98
	ctx.lr = 0x821FEF60;
	sub_8269CE98(ctx, base);
loc_821FEF60:
	// mulli r11,r28,12
	ctx.r11.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(12));
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// mulli r10,r29,12
	ctx.r10.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_821FEF7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_821FEF84:
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
	ctx.lr = 0x821FEFA0;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82206B90) {
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
	ctx.lr = 0x82206B98;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r28,-32106
	r28.s64 = -2104098816;
	// li r29,0
	r29.s64 = 0;
	// li r27,-1
	r27.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82206cdc
	if (ctx.cr6.eq) goto loc_82206CDC;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82206c60
	if (ctx.cr6.eq) goto loc_82206C60;
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// bl 0x82120780
	ctx.lr = 0x82206BD8;
	sub_82120780(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lbz r10,109(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 109);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r11,108(r31)
	REX_STORE_U8(r31.u32 + 108, ctx.r11.u8);
	// beq 0x82206bfc
	if (ctx.cr0.eq) goto loc_82206BFC;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82206c00
	if (!ctx.cr0.eq) goto loc_82206C00;
loc_82206BFC:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_82206C00:
	// stb r11,109(r31)
	REX_STORE_U8(r31.u32 + 109, ctx.r11.u8);
	// lwz r3,6060(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6060);
	// bl 0x8212e8b0
	ctx.lr = 0x82206C0C;
	sub_8212E8B0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,6056(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 6056);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
loc_82206C24:
	// stfsu f0,720(r11)
	ctx.fpscr.disableFlushMode();
	ea = 720 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82206c24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82206C24;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82206C40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82206c60
	if (ctx.cr6.eq) goto loc_82206C60;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82206C60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82206C60:
	// addi r30,r31,52
	r30.s64 = r31.s64 + 52;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82206ea0
	ctx.lr = 0x82206C6C;
	sub_82206EA0(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82206cb0
	if (ctx.cr0.eq) goto loc_82206CB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82206C88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82206cb0
	if (!ctx.cr0.eq) goto loc_82206CB0;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r10,30424
	ctx.r4.s64 = ctx.r10.s64 + 30424;
	// lwz r3,6036(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6036);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82206CB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82206CB0:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x82120b20
	ctx.lr = 0x82206CC4;
	sub_82120B20(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stw r29,16(r30)
	REX_STORE_U32(r30.u32 + 16, r29.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82206cd8
	if (ctx.cr6.lt) goto loc_82206CD8;
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_82206CD8:
	// stb r29,0(r30)
	REX_STORE_U8(r30.u32 + 0, r29.u8);
loc_82206CDC:
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82206d28
	if (ctx.cr6.eq) goto loc_82206D28;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82206CFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82206D04:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82206d04
	if (!ctx.cr6.eq) goto loc_82206D04;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82120c08
	ctx.lr = 0x82206D28;
	sub_82120C08(ctx, base);
loc_82206D28:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r30,r11,-14480
	r30.s64 = ctx.r11.s64 + -14480;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-14480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -14480);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82206D44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82206e6c
	if (ctx.cr0.eq) goto loc_82206E6C;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r26,r11,1624
	r26.s64 = ctx.r11.s64 + 1624;
	// addi r4,r10,18464
	ctx.r4.s64 = ctx.r10.s64 + 18464;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f670
	ctx.lr = 0x82206D64;
	sub_8215F670(ctx, base);
	// bl 0x8215f0f0
	ctx.lr = 0x82206D68;
	sub_8215F0F0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r4,r11,18440
	ctx.r4.s64 = ctx.r11.s64 + 18440;
	// bl 0x8215f670
	ctx.lr = 0x82206D78;
	sub_8215F670(ctx, base);
	// bl 0x8215f0f0
	ctx.lr = 0x82206D7C;
	sub_8215F0F0(ctx, base);
	// stw r29,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, r29.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r11,30456
	ctx.r3.s64 = ctx.r11.s64 + 30456;
	// bl 0x8216bc98
	ctx.lr = 0x82206D90;
	sub_8216BC98(ctx, base);
	// stw r29,400(r1)
	REX_STORE_U32(ctx.r1.u32 + 400, r29.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r11,30476
	ctx.r3.s64 = ctx.r11.s64 + 30476;
	// bl 0x8216bc98
	ctx.lr = 0x82206DA4;
	sub_8216BC98(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82206DBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6220(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6220);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82206DD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r26,r11,30288
	r26.s64 = ctx.r11.s64 + 30288;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8215f670
	ctx.lr = 0x82206DE8;
	sub_8215F670(ctx, base);
	// bl 0x8215f0f0
	ctx.lr = 0x82206DEC;
	sub_8215F0F0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120600
	ctx.lr = 0x82206DF8;
	sub_82120600(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82120b20
	ctx.lr = 0x82206E0C;
	sub_82120B20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82206E1C;
	sub_82120AC0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82206E30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6060(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 6060);
	// li r10,255
	ctx.r10.s64 = 255;
	// li r12,10251
	ctx.r12.s64 = 10251;
	// stb r29,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r29.u8);
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rldicr r12,r12,49,14
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFE000000000000;
	// stb r29,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r29.u8);
	// stb r29,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r29.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// clrldi r10,r10,15
	ctx.r10.u64 = ctx.r10.u64 & 0x1FFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,104(r11)
	REX_STORE_U64(ctx.r11.u32 + 104, ctx.r10.u64);
	// bl 0x821396b8
	ctx.lr = 0x82206E6C;
	sub_821396B8(ctx, base);
loc_82206E6C:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82220A20) {
	REX_FUNC_PROLOGUE();
	// lbz r11,705(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 705);
	// stb r11,704(r3)
	REX_STORE_U8(ctx.r3.u32 + 704, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82221588) {
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
	ctx.lr = 0x82221590;
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
	ctx.lr = 0x822215B4;
	sub_822E6FF8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x82221678
	if (ctx.cr0.eq) goto loc_82221678;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f12,136(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,140(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,132(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 132);
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
	ctx.lr = 0x8222162C;
	sub_826A1E70(ctx, base);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222163c
	if (ctx.cr0.eq) goto loc_8222163C;
	// lwz r11,156(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 156);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_8222163C:
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
	ctx.lr = 0x82221678;
	sub_82174318(ctx, base);
loc_82221678:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82229890) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13844
	ctx.r3.s64 = ctx.r11.s64 + -13844;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82229988) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82229990;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bl 0x82229520
	ctx.lr = 0x822299A4;
	sub_82229520(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r31,112
	r30.s64 = r31.s64 + 112;
	// addi r11,r11,-22604
	ctx.r11.s64 = ctx.r11.s64 + -22604;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120ac0
	ctx.lr = 0x822299C4;
	sub_82120AC0(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x822299CC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82229a10
	if (ctx.cr0.eq) goto loc_82229A10;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,30308
	ctx.r4.s64 = ctx.r11.s64 + 30308;
	// bl 0x82120600
	ctx.lr = 0x822299E4;
	sub_82120600(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,-15368(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -15368);
	// bl 0x82120600
	ctx.lr = 0x822299F4;
	sub_82120600(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r28,3
	r28.s64 = 3;
	// bl 0x821d58c8
	ctx.lr = 0x82229A0C;
	sub_821D58C8(ctx, base);
	// b 0x82229a14
	goto loc_82229A14;
loc_82229A10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82229A14:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x82229A24;
	sub_82145710(ctx, base);
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82229a40
	if (ctx.cr0.eq) goto loc_82229A40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r28,r28,0,31,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x82229A40;
	sub_82120AC0(ctx, base);
loc_82229A40:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82229a58
	if (ctx.cr0.eq) goto loc_82229A58;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x82229A58;
	sub_82120AC0(ctx, base);
loc_82229A58:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8222D658) {
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
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,704(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 704);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222d700
	if (ctx.cr6.eq) goto loc_8222D700;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r11,-13284
	ctx.r4.s64 = ctx.r11.s64 + -13284;
	// bl 0x821fd140
	ctx.lr = 0x8222D690;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// beq 0x8222d6d0
	if (ctx.cr0.eq) goto loc_8222D6D0;
	// lwz r11,704(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 704);
	// lwz r3,460(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222D6B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222d700
	if (ctx.cr0.eq) goto loc_8222D700;
	// lwz r11,536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 536);
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r10,937(r31)
	REX_STORE_U8(r31.u32 + 937, ctx.r10.u8);
	// b 0x8222d6ec
	goto loc_8222D6EC;
loc_8222D6D0:
	// lwz r11,720(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 720);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222d700
	if (ctx.cr0.eq) goto loc_8222D700;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,536(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 536);
	// stb r11,937(r31)
	REX_STORE_U8(r31.u32 + 937, ctx.r11.u8);
	// ori r11,r10,4
	ctx.r11.u64 = ctx.r10.u64 | 4;
loc_8222D6EC:
	// lwz r10,588(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 588);
	// stw r11,536(r31)
	REX_STORE_U32(r31.u32 + 536, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222d700
	if (ctx.cr6.eq) goto loc_8222D700;
	// stw r11,212(r10)
	REX_STORE_U32(ctx.r10.u32 + 212, ctx.r11.u32);
loc_8222D700:
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

DEFINE_REX_FUNC(sub_82233DF8) {
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
	ctx.lr = 0x82233E00;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// std r5,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r5.u64);
	// addi r8,r11,16592
	ctx.r8.s64 = ctx.r11.s64 + 16592;
	// lwz r10,192(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// lfs f0,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lfs f13,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r8,4(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r5,8(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r27,4(r9)
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r4,12(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// addi r6,r6,-23760
	ctx.r6.s64 = ctx.r6.s64 + -23760;
	// lwz r10,12(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stw r6,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// stw r8,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r8.u32);
	// stw r5,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r5.u32);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// stw r27,36(r31)
	REX_STORE_U32(r31.u32 + 36, r27.u32);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// stw r4,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r4.u32);
	// beq cr6,0x82233eec
	if (ctx.cr6.eq) goto loc_82233EEC;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x82233EC8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82233ee8
	if (ctx.cr0.eq) goto loc_82233EE8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// std r28,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, r28.u64);
	// addi r11,r11,-12728
	ctx.r11.s64 = ctx.r11.s64 + -12728;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82233EE8:
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
loc_82233EEC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8223C0E8) {
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
	// addi r4,r3,3804
	ctx.r4.s64 = ctx.r3.s64 + 3804;
	// addi r3,r3,3776
	ctx.r3.s64 = ctx.r3.s64 + 3776;
	// li r31,0
	r31.s64 = 0;
	// bl 0x8226ca20
	ctx.lr = 0x8223C108;
	sub_8226CA20(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223c114
	if (ctx.cr0.eq) goto loc_8223C114;
	// li r31,1
	r31.s64 = 1;
loc_8223C114:
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

DEFINE_REX_FUNC(sub_8223E7A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8223E7B0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82279e68
	ctx.lr = 0x8223E7C0;
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
	ctx.lr = 0x8223E7DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3848(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3848);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,304(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 304);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223e888
	if (!ctx.cr6.eq) goto loc_8223E888;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r31,3776
	ctx.r4.s64 = r31.s64 + 3776;
	// addi r5,r11,17424
	ctx.r5.s64 = ctx.r11.s64 + 17424;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82121610
	ctx.lr = 0x8223E804;
	sub_82121610(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,144
	ctx.r4.s64 = r30.s64 + 144;
	// bl 0x82121dd0
	ctx.lr = 0x8223E814;
	sub_82121DD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120670
	ctx.lr = 0x8223E820;
	sub_82120670(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x8223E830;
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
	ctx.lr = 0x8223E848;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq 0x8223e860
	if (ctx.cr0.eq) goto loc_8223E860;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-31468
	ctx.r4.s64 = ctx.r11.s64 + -31468;
	// b 0x8223e868
	goto loc_8223E868;
loc_8223E860:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-23520
	ctx.r4.s64 = ctx.r11.s64 + -23520;
loc_8223E868:
	// bl 0x82121928
	ctx.lr = 0x8223E86C;
	sub_82121928(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8223db98
	ctx.lr = 0x8223E878;
	sub_8223DB98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x8223E888;
	sub_82120AC0(ctx, base);
loc_8223E888:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82244930) {
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
	ctx.lr = 0x82244944;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82244954
	if (ctx.cr0.eq) goto loc_82244954;
	// bl 0x82244968
	ctx.lr = 0x82244950;
	sub_82244968(ctx, base);
	// b 0x82244958
	goto loc_82244958;
loc_82244954:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82244958:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82245440) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 116);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822454bc
	if (ctx.cr0.eq) goto loc_822454BC;
	// li r30,0
	r30.s64 = 0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stb r30,116(r3)
	REX_STORE_U8(ctx.r3.u32 + 116, r30.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-15652
	ctx.r4.s64 = ctx.r11.s64 + -15652;
	// bl 0x82120600
	ctx.lr = 0x8224547C;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x82245488;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r30,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, r30.u32);
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
	ctx.lr = 0x822454AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x822454BC;
	sub_82120AC0(ctx, base);
loc_822454BC:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
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

DEFINE_REX_FUNC(sub_8224A1E0) {
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
	// bl 0x826a1c84
	ctx.lr = 0x8224A1E8;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x826a2c74
	ctx.lr = 0x8224A1F0;
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224a288
	if (ctx.cr6.eq) goto loc_8224A288;
	// ld r9,80(r4)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r4.u32 + 80);
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// ld r7,88(r4)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 88);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// ld r5,96(r4)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r4.u32 + 96);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// ld r4,104(r4)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r4.u32 + 104);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// std r9,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// std r7,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r7.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// std r5,16(r8)
	REX_STORE_U64(ctx.r8.u32 + 16, ctx.r5.u64);
	// std r4,24(r8)
	REX_STORE_U64(ctx.r8.u32 + 24, ctx.r4.u64);
	// ld r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// ld r8,8(r6)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// ld r7,16(r6)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r6.u32 + 16);
	// ld r6,24(r6)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r6.u32 + 24);
	// ld r5,80(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 80);
	// std r5,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r5.u64);
	// ld r5,88(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 88);
	// std r5,88(r31)
	REX_STORE_U64(r31.u32 + 88, ctx.r5.u64);
	// ld r5,96(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 96);
	// std r5,96(r31)
	REX_STORE_U64(r31.u32 + 96, ctx.r5.u64);
	// ld r5,104(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// std r5,104(r31)
	REX_STORE_U64(r31.u32 + 104, ctx.r5.u64);
	// std r10,80(r11)
	REX_STORE_U64(ctx.r11.u32 + 80, ctx.r10.u64);
	// std r8,88(r11)
	REX_STORE_U64(ctx.r11.u32 + 88, ctx.r8.u64);
	// std r7,96(r11)
	REX_STORE_U64(ctx.r11.u32 + 96, ctx.r7.u64);
	// std r6,104(r11)
	REX_STORE_U64(ctx.r11.u32 + 104, ctx.r6.u64);
	// stw r9,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r9.u32);
loc_8224A288:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r15,2
	r15.s64 = 2;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,6096(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 6096);
	// lis r19,-32126
	r19.s64 = -2105409536;
	// lis r18,-32126
	r18.s64 = -2105409536;
	// lis r17,-32126
	r17.s64 = -2105409536;
	// lwz r10,104(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r22,4(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r23,r10,1
	r23.s64 = ctx.r10.s64 + 1;
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lfs f28,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	f28.f64 = double(temp.f32);
	// addi r21,r11,-13296
	r21.s64 = ctx.r11.s64 + -13296;
	// addi r20,r10,-13300
	r20.s64 = ctx.r10.s64 + -13300;
	// lfs f15,1148(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1148);
	f15.f64 = double(temp.f32);
	// lfs f20,1144(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1144);
	f20.f64 = double(temp.f32);
	// lfs f19,1140(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1140);
	f19.f64 = double(temp.f32);
	// lfs f16,656(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 656);
	f16.f64 = double(temp.f32);
	// lfs f21,220(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 220);
	f21.f64 = double(temp.f32);
	// lfs f17,160(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 160);
	f17.f64 = double(temp.f32);
	// lfs f29,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	f29.f64 = double(temp.f32);
	// lfs f18,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	f18.f64 = double(temp.f32);
	// lfs f23,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	f23.f64 = double(temp.f32);
loc_8224A300:
	// srawi r11,r23,1
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x1) != 0);
	ctx.r11.s64 = r23.s32 >> 1;
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 0);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// subf r24,r11,r23
	r24.u64 = r23.u64 - ctx.r11.u64;
	// lwz r4,24(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// addi r11,r24,3
	ctx.r11.s64 = r24.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,164(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 164);
	// lwzx r11,r11,r16
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r16.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r26,96(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// bctrl 
	ctx.lr = 0x8224A33C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224A358;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224A378;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224A39C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,228(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224A3B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// addic. r27,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	r27.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt 0x8224a670
	if (ctx.cr0.lt) goto loc_8224A670;
	// rlwinm r11,r27,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r28,r11,104
	r28.s64 = ctx.r11.s64 + 104;
loc_8224A3D0:
	// lbz r11,-3(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + -3);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8224a664
	if (!ctx.cr0.eq) goto loc_8224A664;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r24.s32, ctx.xer);
	// bne cr6,0x8224a664
	if (!ctx.cr6.eq) goto loc_8224A664;
	// lfs f13,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-24(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + -24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fdivs f13,f29,f12
	ctx.f13.f64 = double(float(f29.f64 / ctx.f12.f64));
	// lfs f12,-20(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + -20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f30,f13,f12
	f30.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f0,f31,f31
	ctx.f0.f64 = double(float(f31.f64 * f31.f64));
	// fmadds f0,f30,f30,f0
	ctx.f0.f64 = double(float(std::fma(f30.f64, f30.f64, ctx.f0.f64)));
	// fsqrts f22,f0
	f22.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f22,f21
	ctx.cr6.compare(f22.f64, f21.f64);
	// blt cr6,0x8224a430
	if (ctx.cr6.lt) goto loc_8224A430;
	// lbz r11,-1(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + -1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224a664
	if (ctx.cr0.eq) goto loc_8224A664;
loc_8224A430:
	// lbz r25,-1(r28)
	r25.u64 = REX_LOAD_U8(r28.u32 + -1);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f25,f0,f23
	f25.f64 = double(float(ctx.f0.f64 * f23.f64));
	// lfs f12,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi r25,0
	ctx.cr0.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// lfs f11,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f27,f0,f23,f12
	f27.f64 = double(float(std::fma(ctx.f0.f64, f23.f64, ctx.f12.f64)));
	// fmadds f26,f13,f23,f11
	f26.f64 = double(float(std::fma(ctx.f13.f64, f23.f64, ctx.f11.f64)));
	// fmuls f24,f13,f23
	f24.f64 = double(float(ctx.f13.f64 * f23.f64));
	// beq 0x8224a470
	if (ctx.cr0.eq) goto loc_8224A470;
	// fcmpu cr6,f22,f21
	ctx.cr6.compare(f22.f64, f21.f64);
	// ble cr6,0x8224a470
	if (!ctx.cr6.gt) goto loc_8224A470;
	// fdivs f0,f21,f22
	ctx.f0.f64 = double(float(f21.f64 / f22.f64));
	// fmuls f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f30,f0,f30
	f30.f64 = double(float(ctx.f0.f64 * f30.f64));
loc_8224A470:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f1,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821265f8
	ctx.lr = 0x8224A480;
	sub_821265F8(ctx, base);
	// lwa r10,12(r26)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(r26.u32 + 12));
	// std r10,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r10.u64);
	// lfd f10,176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lwa r11,16(r26)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r26.u32 + 16));
	// fmuls f12,f31,f0
	ctx.f12.f64 = double(float(f31.f64 * ctx.f0.f64));
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f31,f13
	ctx.f9.f64 = double(float(f31.f64 * ctx.f13.f64));
	// std r11,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r11.u64);
	// lfd f11,208(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 208);
	// lbz r11,-4(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + -4);
	// lfs f8,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// fmsubs f13,f30,f13,f12
	ctx.f13.f64 = double(float(std::fma(f30.f64, ctx.f13.f64, -ctx.f12.f64)));
	// fcfid f12,f11
	ctx.f12.f64 = double(ctx.f11.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fmadds f0,f30,f0,f9
	ctx.f0.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, ctx.f9.f64)));
	// fmuls f13,f13,f18
	ctx.f13.f64 = double(float(ctx.f13.f64 * f18.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f10
	ctx.f11.f64 = double(float(ctx.f10.f64));
	// fmuls f0,f25,f0
	ctx.f0.f64 = double(float(f25.f64 * ctx.f0.f64));
	// fmuls f13,f24,f13
	ctx.f13.f64 = double(float(f24.f64 * ctx.f13.f64));
	// fmuls f12,f12,f20
	ctx.f12.f64 = double(float(ctx.f12.f64 * f20.f64));
	// fmuls f11,f11,f19
	ctx.f11.f64 = double(float(ctx.f11.f64 * f19.f64));
	// fadds f27,f27,f0
	f27.f64 = double(float(f27.f64 + ctx.f0.f64));
	// fadds f26,f26,f13
	f26.f64 = double(float(f26.f64 + ctx.f13.f64));
	// fmuls f30,f8,f12
	f30.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f31,f8,f11
	f31.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// bne 0x8224a4fc
	if (!ctx.cr0.eq) goto loc_8224A4FC;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_8224A4FC:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r10.s32, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x8224a518
	if (!ctx.cr6.eq) goto loc_8224A518;
	// lwz r11,-13304(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + -13304);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8224A518:
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8224a52c
	if (!ctx.cr6.eq) goto loc_8224A52C;
	// lwz r11,-13292(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + -13292);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8224A52C:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8224a53c
	if (!ctx.cr6.eq) goto loc_8224A53C;
	// lwz r11,-13288(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + -13288);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8224A53C:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f29.f64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x8224a574
	if (!ctx.cr6.eq) goto loc_8224A574;
	// fsubs f0,f21,f22
	ctx.f0.f64 = double(float(f21.f64 - f22.f64));
	// addi r11,r30,256
	ctx.r11.s64 = r30.s64 + 256;
	// fmuls f0,f0,f15
	ctx.f0.f64 = double(float(ctx.f0.f64 * f15.f64));
	// fsubs f13,f29,f0
	ctx.f13.f64 = double(float(f29.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f28
	ctx.cr6.compare(ctx.f13.f64, f28.f64);
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
	// fsel f0,f13,f0,f29
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : f29.f64;
loc_8224A574:
	// fmuls f0,f0,f16
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * f16.f64));
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// fctiw f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,216(r1)
	REX_STORE_U64(ctx.r1.u32 + 216, ctx.f0.u64);
	// lwz r11,220(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82126320
	ctx.lr = 0x8224A590;
	sub_82126320(ctx, base);
	// stfs f27,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f26,196(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stfs f28,200(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8216d040
	ctx.lr = 0x8224A5A8;
	sub_8216D040(ctx, base);
	// stfs f31,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f30,228(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stfs f29,232(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x821884b0
	ctx.lr = 0x8224A5C0;
	sub_821884B0(ctx, base);
	// lbz r11,-2(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + -2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224a5e0
	if (ctx.cr0.eq) goto loc_8224A5E0;
	// lfs f0,-8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lfs f13,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bl 0x82135730
	ctx.lr = 0x8224A5E0;
	sub_82135730(ctx, base);
loc_8224A5E0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82173278
	ctx.lr = 0x8224A5F0;
	sub_82173278(ctx, base);
	// stfs f17,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f28,104(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// stfs f23,140(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// stfs f28,144(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f28,124(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stfs f28,128(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stfs f29,148(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f28,164(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f17,116(r1)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f29,132(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f17,100(r1)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f28,108(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f23,136(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f17,160(r1)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f29,168(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f23,120(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f23,156(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f28,112(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f28,172(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f29,152(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,248(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224A664;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224A664:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r28,r28,-32
	r28.s64 = r28.s64 + -32;
	// bge 0x8224a3d0
	if (!ctx.cr0.lt) goto loc_8224A3D0;
loc_8224A670:
	// addic. r15,r15,-1
	ctx.xer.ca = r15.u32 > 0;
	r15.s64 = r15.s64 + -1;
	ctx.cr0.compare<int32_t>(r15.s32, 0, ctx.xer);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// bne 0x8224a300
	if (!ctx.cr0.eq) goto loc_8224A300;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x826a2cc0
	ctx.lr = 0x8224A688;
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_822723A0) {
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
	ctx.lr = 0x822723A8;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,652(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 652);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r10,648(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82272550
	if (!ctx.cr6.lt) goto loc_82272550;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82273340
	ctx.lr = 0x822723E0;
	sub_82273340(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r27,r11,-17148
	r27.s64 = ctx.r11.s64 + -17148;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x822723F8;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8227241c
	if (!ctx.cr6.eq) goto loc_8227241C;
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
	// b 0x82272420
	goto loc_82272420;
loc_8227241C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82272420:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r10,r29,r31
	ctx.r10.u64 = r29.u64 + r31.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82272434
	if (!ctx.cr6.lt) goto loc_82272434;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82272434:
	// li r11,0
	ctx.r11.s64 = 0;
	// xoris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 ^ 2147483648;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addc r11,r11,r9
	ctx.xer.ca = ctx.r11.u32 + ctx.r9.u32 < ctx.r11.u32;
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r10
	r31.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(r31.s32, r29.s32, ctx.xer);
	// beq cr6,0x82272550
	if (ctx.cr6.eq) goto loc_82272550;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x82272460;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82272468;
	sub_8215F1B0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-17164
	ctx.r4.s64 = ctx.r11.s64 + -17164;
	// bl 0x8215f338
	ctx.lr = 0x82272474;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82272478;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120d70
	ctx.lr = 0x82272484;
	sub_82120D70(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-17296
	ctx.r4.s64 = ctx.r11.s64 + -17296;
	// bl 0x8215f338
	ctx.lr = 0x82272494;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82272498;
	sub_8215FA30(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,1624
	ctx.r11.s64 = ctx.r11.s64 + 1624;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r10,16492
	ctx.r4.s64 = ctx.r10.s64 + 16492;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8215f670
	ctx.lr = 0x822724B4;
	sub_8215F670(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x822724BC;
	sub_8215F5F8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x822724d0
	if (!ctx.cr6.lt) goto loc_822724D0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_822724D0:
	// bl 0x8215fbf8
	ctx.lr = 0x822724D4;
	sub_8215FBF8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82272558
	ctx.lr = 0x822724E0;
	sub_82272558(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-4276
	ctx.r4.s64 = ctx.r11.s64 + -4276;
	// bl 0x82120600
	ctx.lr = 0x822724F0;
	sub_82120600(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,112(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x822724FC;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r10,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r10.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272524;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x82272534;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,-6636
	ctx.r3.s64 = ctx.r11.s64 + -6636;
	// bl 0x8226afb8
	ctx.lr = 0x82272540;
	sub_8226AFB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82272550;
	sub_82120AC0(ctx, base);
loc_82272550:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8227E7E8) {
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
	// blt cr6,0x8227e818
	if (ctx.cr6.lt) goto loc_8227E818;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227e830
	if (ctx.cr6.lt) goto loc_8227E830;
loc_8227E818:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// addi r3,r10,144
	ctx.r3.s64 = ctx.r10.s64 + 144;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x821231d0
	ctx.lr = 0x8227E830;
	sub_821231D0(ctx, base);
loc_8227E830:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227e844
	if (!ctx.cr6.eq) goto loc_8227E844;
loc_8227E83C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8227e8a4
	goto loc_8227E8A4;
loc_8227E844:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x8227e858
	if (ctx.cr6.lt) goto loc_8227E858;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227e870
	if (ctx.cr6.lt) goto loc_8227E870;
loc_8227E858:
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
	ctx.lr = 0x8227E870;
	sub_821231D0(ctx, base);
loc_8227E870:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r31.s32, ctx.xer);
	// bne cr6,0x8227e83c
	if (!ctx.cr6.eq) goto loc_8227E83C;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8227E8A4:
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

DEFINE_REX_FUNC(sub_82285AC0) {
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
	ctx.lr = 0x82285AC8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,208(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lfs f13,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82285b68
	if (!ctx.cr6.gt) goto loc_82285B68;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// addi r31,r3,16
	r31.s64 = ctx.r3.s64 + 16;
	// li r30,0
	r30.s64 = 0;
	// lfs f13,656(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 656);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiw f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82285b68
	if (!ctx.cr6.gt) goto loc_82285B68;
	// li r29,0
	r29.s64 = 0;
loc_82285B38:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// addi r5,r11,160
	ctx.r5.s64 = ctx.r11.s64 + 160;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821d69e8
	ctx.lr = 0x82285B54;
	sub_821D69E8(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,240
	r29.s64 = r29.s64 + 240;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82285b38
	if (ctx.cr6.lt) goto loc_82285B38;
loc_82285B68:
	// lbz r11,148(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 148);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82285bdc
	if (ctx.cr0.eq) goto loc_82285BDC;
	// lwz r11,160(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 160);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82285bdc
	if (!ctx.cr6.gt) goto loc_82285BDC;
	// addi r29,r28,156
	r29.s64 = r28.s64 + 156;
loc_82285B88:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8228ca78
	ctx.lr = 0x82285B94;
	sub_8228CA78(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x821d5bd0
	ctx.lr = 0x82285BA8;
	sub_821D5BD0(ctx, base);
	// lwz r11,588(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 588);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82285bcc
	if (ctx.cr6.eq) goto loc_82285BCC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82285BCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82285BCC:
	// lwz r11,160(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 160);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82285b88
	if (ctx.cr6.lt) goto loc_82285B88;
loc_82285BDC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8228BF00) {
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
	ctx.lr = 0x8228BF1C;
	sub_82288CE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228bfb0
	if (ctx.cr0.eq) goto loc_8228BFB0;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8228bf3c
	if (ctx.cr0.eq) goto loc_8228BF3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228af60
	ctx.lr = 0x8228BF38;
	sub_8228AF60(ctx, base);
	// b 0x8228bfb0
	goto loc_8228BFB0;
loc_8228BF3C:
	// li r11,0
	ctx.r11.s64 = 0;
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
	ctx.lr = 0x8228BF60;
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
	ctx.lr = 0x8228BF78;
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
	ctx.lr = 0x8228BF90;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-27304
	ctx.r3.s64 = ctx.r11.s64 + -27304;
	// bl 0x8216bc98
	ctx.lr = 0x8228BFA0;
	sub_8216BC98(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
loc_8228BFB0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26856
	ctx.r3.s64 = ctx.r11.s64 + -26856;
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

DEFINE_REX_FUNC(sub_8228FC78) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,4360
	ctx.r11.s64 = ctx.r11.s64 + 4360;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8228fca4
	if (ctx.cr0.eq) goto loc_8228FCA4;
	// bl 0x8269ce98
	ctx.lr = 0x8228FCA4;
	sub_8269CE98(ctx, base);
loc_8228FCA4:
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

DEFINE_REX_FUNC(sub_82290D68) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,4644
	ctx.r11.s64 = ctx.r11.s64 + 4644;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82290d94
	if (ctx.cr0.eq) goto loc_82290D94;
	// bl 0x8269ce98
	ctx.lr = 0x82290D94;
	sub_8269CE98(ctx, base);
loc_82290D94:
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

DEFINE_REX_FUNC(sub_82293DD0) {
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
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82293df8
	if (!ctx.cr6.lt) goto loc_82293DF8;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82293DF8:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82293e08
	if (!ctx.cr6.gt) goto loc_82293E08;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82293E08:
	// bl 0x8269d438
	ctx.lr = 0x82293E0C;
	sub_8269D438(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lfs f0,-19392(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -19392);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82296E98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
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
	// bl 0x826a2c90
	ctx.lr = 0x82296EB0;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f11,56(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f9,72(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f13,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f7,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f5,f13,f7
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// lfs f31,52(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	f31.f64 = double(temp.f32);
	// lfs f30,68(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 68);
	f30.f64 = double(temp.f32);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// lfs f8,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lfs f6,56(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// lfs f4,72(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f6,f6,f8
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// lfs f3,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f4,f8
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fmadds f11,f31,f12,f11
	ctx.f11.f64 = double(float(std::fma(f31.f64, ctx.f12.f64, ctx.f11.f64)));
	// lfs f2,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f12,f30,f12,f9
	ctx.f12.f64 = double(float(std::fma(f30.f64, ctx.f12.f64, ctx.f9.f64)));
	// lfs f1,32(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// fmr f9,f30
	ctx.f9.f64 = f30.f64;
	// lfs f29,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	f29.f64 = double(temp.f32);
	// fmuls f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// lfs f30,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	f30.f64 = double(temp.f32);
	// fmadds f10,f1,f2,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f1.f64, ctx.f2.f64, ctx.f10.f64)));
	// lfs f27,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	f27.f64 = double(temp.f32);
	// fmadds f5,f1,f29,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f1.f64, f29.f64, ctx.f5.f64)));
	// lfs f26,88(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 88);
	f26.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmadds f6,f31,f7,f6
	ctx.f6.f64 = double(float(std::fma(f31.f64, ctx.f7.f64, ctx.f6.f64)));
	// lfs f31,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	f31.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// fmadds f9,f9,f7,f4
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f7.f64, ctx.f4.f64)));
	// lfs f7,48(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// lfs f4,64(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f13,f1,f30,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f1.f64, f30.f64, ctx.f13.f64)));
	// fmr f1,f7
	ctx.f1.f64 = ctx.f7.f64;
	// fmr f28,f4
	f28.f64 = ctx.f4.f64;
	// fmadds f10,f31,f0,f10
	ctx.f10.f64 = double(float(std::fma(f31.f64, ctx.f0.f64, ctx.f10.f64)));
	// lfs f0,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f8,f31,f8,f5
	ctx.f8.f64 = double(float(std::fma(f31.f64, ctx.f8.f64, ctx.f5.f64)));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmadds f11,f2,f7,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f2.f64, ctx.f7.f64, ctx.f11.f64)));
	// lfs f7,80(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f4,f2,f4,f12
	ctx.f4.f64 = double(float(std::fma(ctx.f2.f64, ctx.f4.f64, ctx.f12.f64)));
	// lfs f2,84(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f6,f29,f1,f6
	ctx.f6.f64 = double(float(std::fma(f29.f64, ctx.f1.f64, ctx.f6.f64)));
	// fmadds f5,f29,f28,f9
	ctx.f5.f64 = double(float(std::fma(f29.f64, f28.f64, ctx.f9.f64)));
	// fmadds f1,f31,f27,f13
	ctx.f1.f64 = double(float(std::fma(f31.f64, f27.f64, ctx.f13.f64)));
	// lfs f31,52(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	f31.f64 = double(temp.f32);
	// fadds f13,f10,f7
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f10,f8,f7
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f12,f11,f2
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f2.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f11,f4,f26
	ctx.f11.f64 = double(float(ctx.f4.f64 + f26.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// std r11,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r11.u64);
	// fadds f9,f6,f2
	ctx.f9.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f8,f5,f26
	ctx.f8.f64 = double(float(ctx.f5.f64 + f26.f64));
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f7,f1,f7
	ctx.f7.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// ld r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// ld r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// lfs f6,72(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f6.f64 = double(temp.f32);
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f5,f10,f13
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmuls f6,f6,f27
	ctx.f6.f64 = double(float(ctx.f6.f64 * f27.f64));
	// lfs f1,56(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// fadds f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// lfs f4,68(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f1,f1,f27
	ctx.f1.f64 = double(float(ctx.f1.f64 * f27.f64));
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// fsubs f27,f9,f12
	f27.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fadds f25,f9,f12
	f25.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// addi r7,r7,16592
	ctx.r7.s64 = ctx.r7.s64 + 16592;
	// fmr f29,f28
	f29.f64 = f28.f64;
	// lfs f28,48(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	f28.f64 = double(temp.f32);
	// fsubs f24,f7,f13
	f24.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fsubs f23,f8,f11
	f23.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// std r9,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r9.u64);
	// fadds f22,f8,f11
	f22.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f13,1176(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1176);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// fmadds f9,f4,f3,f6
	ctx.f9.f64 = double(float(std::fma(ctx.f4.f64, ctx.f3.f64, ctx.f6.f64)));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f7,f31,f3,f1
	ctx.f7.f64 = double(float(std::fma(f31.f64, ctx.f3.f64, ctx.f1.f64)));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f0,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// std r10,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r10.u64);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// std r8,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r8.u64);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// fmuls f6,f27,f24
	ctx.f6.f64 = double(float(f27.f64 * f24.f64));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmadds f9,f30,f29,f9
	ctx.f9.f64 = double(float(std::fma(f30.f64, f29.f64, ctx.f9.f64)));
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f7,f30,f28,f7
	ctx.f7.f64 = double(float(std::fma(f30.f64, f28.f64, ctx.f7.f64)));
	// fadds f10,f9,f26
	ctx.f10.f64 = double(float(ctx.f9.f64 + f26.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f9,f7,f2
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// fadds f10,f22,f10
	ctx.f10.f64 = double(float(f22.f64 + ctx.f10.f64));
	// fadds f9,f25,f9
	ctx.f9.f64 = double(float(f25.f64 + ctx.f9.f64));
	// fmuls f7,f11,f5
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmsubs f6,f12,f5,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f12.f64, ctx.f5.f64, -ctx.f6.f64)));
	// fmuls f5,f23,f12
	ctx.f5.f64 = double(float(f23.f64 * ctx.f12.f64));
	// fmuls f12,f10,f13
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmsubs f10,f23,f24,f7
	ctx.f10.f64 = double(float(std::fma(f23.f64, f24.f64, -ctx.f7.f64)));
	// fmsubs f11,f27,f11,f5
	ctx.f11.f64 = double(float(std::fma(f27.f64, ctx.f11.f64, -ctx.f5.f64)));
	// fmuls f9,f10,f10
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f9,f6,f6,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f6.f64, ctx.f6.f64, ctx.f9.f64)));
	// fmadds f9,f11,f11,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f9.f64)));
	// fsqrts f9,f9
	ctx.f9.f64 = double(float(sqrt(ctx.f9.f64)));
	// fdivs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fadds f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82297138;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229715C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229717C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229719C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x826a2cdc
	ctx.lr = 0x822971A8;
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

DEFINE_REX_FUNC(sub_822BBCC8) {
	REX_FUNC_PROLOGUE();
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822bbd10
	if (ctx.cr6.eq) goto loc_822BBD10;
loc_822BBCE4:
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822bbce4
	if (!ctx.cr6.eq) goto loc_822BBCE4;
loc_822BBD10:
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r10,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// b 0x822bbd40
	goto loc_822BBD40;
loc_822BBD1C:
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r6,r8,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stwx r6,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u32);
	// lwz r6,12(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r6,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
loc_822BBD40:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822bbd1c
	if (!ctx.cr6.eq) goto loc_822BBD1C;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stwx r9,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C0030) {
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
	ctx.lr = 0x822C0038;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822c00f8
	if (!ctx.cr6.gt) goto loc_822C00F8;
	// li r28,0
	r28.s64 = 0;
loc_822C0058:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwzx r29,r28,r11
	r29.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// lwz r11,240(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 240);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822c00e4
	if (!ctx.cr6.eq) goto loc_822C00E4;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C0080;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C009C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,8(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C00BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r6,22852
	ctx.r6.s64 = 1497628672;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// ori r6,r6,16978
	ctx.r6.u64 = ctx.r6.u64 | 16978;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C00E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822C00E4:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822c0058
	if (ctx.cr6.lt) goto loc_822C0058;
loc_822C00F8:
	// lwz r11,184(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 184);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822c01a0
	if (!ctx.cr6.gt) goto loc_822C01A0;
	// li r29,0
	r29.s64 = 0;
loc_822C010C:
	// lwz r11,192(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 192);
	// lwzx r27,r29,r11
	r27.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C0128;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C0144;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r4,8(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C0164;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r6,21326
	ctx.r6.s64 = 1397620736;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// ori r6,r6,20291
	ctx.r6.u64 = ctx.r6.u64 | 20291;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C018C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,184(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 184);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822c010c
	if (ctx.cr6.lt) goto loc_822C010C;
loc_822C01A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_822C3358) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,28,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3418) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,12,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3910) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10696(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 10696, temp.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,33,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C4BE8) {
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
	// stw r4,12632(r3)
	REX_STORE_U32(ctx.r3.u32 + 12632, ctx.r4.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822c4d2c
	if (ctx.cr6.eq) goto loc_822C4D2C;
	// lwz r11,12616(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c4c20
	if (!ctx.cr6.eq) goto loc_822C4C20;
	// bl 0x822c1c00
	ctx.lr = 0x822C4C20;
	sub_822C1C00(ctx, base);
loc_822C4C20:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// stw r11,10376(r31)
	REX_STORE_U32(r31.u32 + 10376, ctx.r11.u32);
	// lbz r10,10942(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 10942);
	// lbz r9,10943(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 10943);
	// rlwinm. r9,r9,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stw r11,10560(r31)
	REX_STORE_U32(r31.u32 + 10560, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// rlwimi r10,r11,5,26,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x20) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFDF);
	// stb r10,10942(r31)
	REX_STORE_U8(r31.u32 + 10942, ctx.r10.u8);
	// beq 0x822c4d08
	if (ctx.cr0.eq) goto loc_822C4D08;
	// lbz r11,10940(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10940);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822c4c60
	if (ctx.cr0.eq) goto loc_822C4C60;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822c4cf0
	goto loc_822C4CF0;
loc_822C4C60:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c4ce8
	if (ctx.cr0.eq) goto loc_822C4CE8;
	// lwz r11,12616(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12616);
	// lwz r10,12904(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12904);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c4c80
	if (ctx.cr6.eq) goto loc_822C4C80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c4ce8
	if (!ctx.cr6.eq) goto loc_822C4CE8;
loc_822C4C80:
	// lwz r11,12620(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12620);
	// lwz r10,12908(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12908);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c4c98
	if (ctx.cr6.eq) goto loc_822C4C98;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c4ce8
	if (!ctx.cr6.eq) goto loc_822C4CE8;
loc_822C4C98:
	// lwz r11,12624(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12624);
	// lwz r10,12912(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12912);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c4cb0
	if (ctx.cr6.eq) goto loc_822C4CB0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c4ce8
	if (!ctx.cr6.eq) goto loc_822C4CE8;
loc_822C4CB0:
	// lwz r11,12628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12628);
	// lwz r10,12916(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12916);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c4cc8
	if (ctx.cr6.eq) goto loc_822C4CC8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c4ce8
	if (!ctx.cr6.eq) goto loc_822C4CE8;
loc_822C4CC8:
	// lwz r11,12632(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12632);
	// lwz r10,12920(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12920);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c4ce0
	if (ctx.cr6.eq) goto loc_822C4CE0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c4ce8
	if (!ctx.cr6.eq) goto loc_822C4CE8;
loc_822C4CE0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822c4cec
	goto loc_822C4CEC;
loc_822C4CE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822C4CEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_822C4CF0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c4d08
	if (ctx.cr0.eq) goto loc_822C4D08;
	// lwz r11,10368(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10368);
	// lwz r10,13348(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13348);
	// rlwimi r11,r10,18,0,13
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// stw r11,10368(r31)
	REX_STORE_U32(r31.u32 + 10368, ctx.r11.u32);
loc_822C4D08:
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// rldicr r12,r12,55,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 55) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// b 0x822c4d4c
	goto loc_822C4D4C;
loc_822C4D2C:
	// lwz r11,10560(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10560);
	// lbz r10,10942(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 10942);
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// andi. r10,r10,223
	ctx.r10.u64 = ctx.r10.u64 & 223;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,10560(r31)
	REX_STORE_U32(r31.u32 + 10560, ctx.r11.u32);
	// stb r10,10942(r31)
	REX_STORE_U8(r31.u32 + 10942, ctx.r10.u8);
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
loc_822C4D4C:
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// lwz r11,12892(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12892);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c4e28
	if (!ctx.cr6.eq) goto loc_822C4E28;
	// lbz r11,10940(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10940);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822c4e28
	if (!ctx.cr0.eq) goto loc_822C4E28;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822c4e28
	if (!ctx.cr0.eq) goto loc_822C4E28;
	// lbz r10,12363(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 12363);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x822c4e28
	if (!ctx.cr0.eq) goto loc_822C4E28;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822c4d8c
	if (ctx.cr0.eq) goto loc_822C4D8C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822c4e1c
	goto loc_822C4E1C;
loc_822C4D8C:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c4e14
	if (ctx.cr0.eq) goto loc_822C4E14;
	// lwz r11,12616(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12616);
	// lwz r10,12904(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12904);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c4dac
	if (ctx.cr6.eq) goto loc_822C4DAC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c4e14
	if (!ctx.cr6.eq) goto loc_822C4E14;
loc_822C4DAC:
	// lwz r11,12620(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12620);
	// lwz r10,12908(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12908);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c4dc4
	if (ctx.cr6.eq) goto loc_822C4DC4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c4e14
	if (!ctx.cr6.eq) goto loc_822C4E14;
loc_822C4DC4:
	// lwz r11,12624(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12624);
	// lwz r10,12912(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12912);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c4ddc
	if (ctx.cr6.eq) goto loc_822C4DDC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c4e14
	if (!ctx.cr6.eq) goto loc_822C4E14;
loc_822C4DDC:
	// lwz r11,12628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12628);
	// lwz r10,12916(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12916);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c4df4
	if (ctx.cr6.eq) goto loc_822C4DF4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c4e14
	if (!ctx.cr6.eq) goto loc_822C4E14;
loc_822C4DF4:
	// lwz r11,12632(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12632);
	// lwz r10,12920(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12920);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c4e0c
	if (ctx.cr6.eq) goto loc_822C4E0C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c4e14
	if (!ctx.cr6.eq) goto loc_822C4E14;
loc_822C4E0C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822c4e18
	goto loc_822C4E18;
loc_822C4E14:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822C4E18:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_822C4E1C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x822c4e2c
	if (!ctx.cr0.eq) goto loc_822C4E2C;
loc_822C4E28:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822C4E2C:
	// lbz r10,10940(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 10940);
	// lwz r9,12052(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12052);
	// rlwimi r10,r11,0,31,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// stb r10,10940(r31)
	REX_STORE_U8(r31.u32 + 10940, ctx.r10.u8);
	// lwz r11,10548(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10548);
	// lwz r10,12632(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12632);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,12052(r31)
	REX_STORE_U32(r31.u32 + 12052, ctx.r9.u32);
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// rlwimi r11,r10,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r11,10548(r31)
	REX_STORE_U32(r31.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// lwz r11,12056(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12056);
	// lwz r10,10548(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10548);
	// lwz r9,12632(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12632);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,12056(r31)
	REX_STORE_U32(r31.u32 + 12056, ctx.r11.u32);
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// rlwimi r11,r10,0,0,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE) | (ctx.r11.u64 & 0xFFFFFFFF00000001);
	// stw r11,10548(r31)
	REX_STORE_U32(r31.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
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

DEFINE_REX_FUNC(sub_822DEC98) {
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
	// lwz r4,21888(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 21888);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822cf5e0
	ctx.lr = 0x822DECB4;
	sub_822CF5E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,21904(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 21904);
	// lwz r5,21896(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 21896);
	// lwz r4,21892(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 21892);
	// bl 0x822e3740
	ctx.lr = 0x822DECC8;
	sub_822E3740(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,21908(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 21908);
	// lwz r4,21888(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 21888);
	// bl 0x822cf688
	ctx.lr = 0x822DECD8;
	sub_822CF688(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822DECE0;
	sub_822D5B28(ctx, base);
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

DEFINE_REX_FUNC(sub_822E1608) {
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
	// bl 0x826b3be0
	ctx.lr = 0x822E1624;
	sub_826B3BE0(ctx, base);
	// rlwinm. r11,r3,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e1634
	if (ctx.cr0.eq) goto loc_822E1634;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e0cc0
	ctx.lr = 0x822E1634;
	sub_822E0CC0(ctx, base);
loc_822E1634:
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826a2e60
	ctx.lr = 0x822E1644;
	sub_826A2E60(ctx, base);
	// lwz r8,16772(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16772);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lbz r11,10944(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10944);
	// lis r30,-32256
	r30.s64 = -2113929216;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// addi r9,r9,5632
	ctx.r9.s64 = ctx.r9.s64 + 5632;
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// li r3,11164
	ctx.r3.s64 = 11164;
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// addi r9,r7,-4872
	ctx.r9.s64 = ctx.r7.s64 + -4872;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r10,2272(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 2272);
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lis r4,-32210
	ctx.r4.s64 = -2110914560;
	// stw r9,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r8,r6,-5112
	ctx.r8.s64 = ctx.r6.s64 + -5112;
	// stb r11,10944(r31)
	REX_STORE_U8(r31.u32 + 10944, ctx.r11.u8);
	// addi r7,r5,-4968
	ctx.r7.s64 = ctx.r5.s64 + -4968;
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r9,r4,-864
	ctx.r9.s64 = ctx.r4.s64 + -864;
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stw r7,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// stw r9,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e16e0
	if (ctx.cr6.eq) goto loc_822E16E0;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,82
	ctx.r3.s64 = 82;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822E16D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,2272(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 2272);
	// b 0x822e16e4
	goto loc_822E16E4;
loc_822E16E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822E16E4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e1730
	if (!ctx.cr6.eq) goto loc_822E1730;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2072(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2072);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e1710
	if (ctx.cr6.eq) goto loc_822E1710;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e1730
	if (ctx.cr6.eq) goto loc_822E1730;
	// b 0x822e1720
	goto loc_822E1720;
loc_822E1710:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e1730
	if (ctx.cr6.eq) goto loc_822E1730;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_822E1720:
	// li r3,46
	ctx.r3.s64 = 46;
	// lwz r4,16772(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16772);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822E1730;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822E1730:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lbz r10,10944(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 10944);
	// lwz r9,21748(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 21748);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r8,124(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// rlwimi r9,r11,30,1,1
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x40000000) | (ctx.r9.u64 & 0xFFFFFFFFBFFFFFFF);
	// stb r10,10944(r31)
	REX_STORE_U8(r31.u32 + 10944, ctx.r10.u8);
	// stw r9,21748(r31)
	REX_STORE_U32(r31.u32 + 21748, ctx.r9.u32);
	// stw r8,21752(r31)
	REX_STORE_U32(r31.u32 + 21752, ctx.r8.u32);
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

DEFINE_REX_FUNC(sub_822E878C) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E8DF0) {
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
	ctx.lr = 0x822E8DF8;
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,140(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// lis r8,-32106
	ctx.r8.s64 = -2104098816;
	// lwz r7,144(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r6,148(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// lwz r5,152(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r29,6096(r8)
	r29.u64 = REX_LOAD_U32(ctx.r8.u32 + 6096);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r6,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r5,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822E8E44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f12,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// beq 0x822e8e98
	if (ctx.cr0.eq) goto loc_822E8E98;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x822e8e74
	if (!ctx.cr6.eq) goto loc_822E8E74;
	// lwa r11,12(r28)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r28.u32 + 12));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
loc_822E8E74:
	// lfs f11,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bne cr6,0x822e8e9c
	if (!ctx.cr6.eq) goto loc_822E8E9C;
	// lwa r11,16(r28)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r28.u32 + 16));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// b 0x822e8e9c
	goto loc_822E8E9C;
loc_822E8E98:
	// lfs f11,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
loc_822E8E9C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// lfs f9,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r10,r10,160
	ctx.r10.s64 = ctx.r10.s64 + 160;
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// lfs f31,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	f31.f64 = double(temp.f32);
	// fdivs f7,f31,f13
	ctx.f7.f64 = double(float(f31.f64 / ctx.f13.f64));
	// lfs f30,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	f30.f64 = double(temp.f32);
	// fdivs f10,f31,f10
	ctx.f10.f64 = double(float(f31.f64 / ctx.f10.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmuls f0,f7,f9
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f10,f8
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f0,f12,f30,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, f30.f64, ctx.f0.f64)));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f13,f11,f30,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, f30.f64, ctx.f13.f64)));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
loc_822E8F10:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x822e8f10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E8F10;
	// lfs f12,312(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 312);
	ctx.f12.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
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
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8216cfa0
	ctx.lr = 0x822E8F40;
	sub_8216CFA0(ctx, base);
	// lfs f0,1032(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 1032);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82173c20
	ctx.lr = 0x822E8F5C;
	sub_82173C20(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f1,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 172);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82188418
	ctx.lr = 0x822E8F68;
	sub_82188418(ctx, base);
	// lfs f0,1208(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 1208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82173c20
	ctx.lr = 0x822E8F84;
	sub_82173C20(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8216cfa0
	ctx.lr = 0x822E8F90;
	sub_8216CFA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82135fb8
	ctx.lr = 0x822E8F98;
	sub_82135FB8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x823fbf60
	ctx.lr = 0x822E8FA8;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,184
	ctx.r10.s64 = ctx.r1.s64 + 184;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822E8FB8:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x822e8fb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E8FB8;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r29,28
	ctx.r3.s64 = r29.s64 + 28;
	// bl 0x82139870
	ctx.lr = 0x822E8FD0;
	sub_82139870(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f13,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f13,f0,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, f30.f64)));
	// beq cr6,0x822e9004
	if (ctx.cr6.eq) goto loc_822E9004;
	// addi r8,r31,156
	ctx.r8.s64 = r31.s64 + 156;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r31,125
	ctx.r6.s64 = r31.s64 + 125;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x82136128
	ctx.lr = 0x822E9000;
	sub_82136128(ctx, base);
	// b 0x822e9010
	goto loc_822E9010;
loc_822E9004:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r31,125
	ctx.r5.s64 = r31.s64 + 125;
	// bl 0x82136798
	ctx.lr = 0x822E9010;
	sub_82136798(ctx, base);
loc_822E9010:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82135f08
	ctx.lr = 0x822E9018;
	sub_82135F08(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822F86B0) {
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
	ctx.lr = 0x822F86B8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822f86d4
	if (!ctx.cr6.eq) goto loc_822F86D4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822f87f0
	if (ctx.cr6.eq) goto loc_822F87F0;
loc_822F86D4:
	// lis r12,-53
	ctx.r12.s64 = -3473408;
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r12,r12,36863
	ctx.r12.u64 = ctx.r12.u64 | 36863;
	// and r28,r4,r12
	r28.u64 = ctx.r4.u64 & ctx.r12.u64;
	// beq 0x822f87bc
	if (ctx.cr0.eq) goto loc_822F87BC;
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f86fc
	if (ctx.cr6.eq) goto loc_822F86FC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822f8700
	goto loc_822F8700;
loc_822F86FC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822F8700:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f871c
	if (ctx.cr6.eq) goto loc_822F871C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f8718
	if (ctx.cr6.eq) goto loc_822F8718;
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822f871c
	goto loc_822F871C;
loc_822F8718:
	// li r30,0
	r30.s64 = 0;
loc_822F871C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822f873c
	if (ctx.cr6.eq) goto loc_822F873C;
	// lis r12,52
	ctx.r12.s64 = 3407872;
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 96);
	// ori r12,r12,28672
	ctx.r12.u64 = ctx.r12.u64 | 28672;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | r28.u64;
	// stw r11,96(r30)
	REX_STORE_U32(r30.u32 + 96, ctx.r11.u32);
loc_822F873C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x822f8750
	if (ctx.cr6.eq) goto loc_822F8750;
	// lhz r11,100(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 100);
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | r27.u64;
	// sth r11,100(r30)
	REX_STORE_U16(r30.u32 + 100, ctx.r11.u16);
loc_822F8750:
	// lwz r11,168(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 168);
	// li r29,0
	r29.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822f87f0
	if (!ctx.cr6.gt) goto loc_822F87F0;
	// li r31,0
	r31.s64 = 0;
loc_822F8768:
	// lwz r11,168(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 168);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f87a0
	if (ctx.cr6.eq) goto loc_822F87A0;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f87a0
	if (ctx.cr6.eq) goto loc_822F87A0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822f86b0
	ctx.lr = 0x822F8798;
	sub_822F86B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822f87f4
	if (!ctx.cr0.eq) goto loc_822F87F4;
loc_822F87A0:
	// lwz r11,168(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 168);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822f8768
	if (ctx.cr6.lt) goto loc_822F8768;
	// b 0x822f87f0
	goto loc_822F87F0;
loc_822F87BC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822f87dc
	if (ctx.cr6.eq) goto loc_822F87DC;
	// lis r12,52
	ctx.r12.s64 = 3407872;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// ori r12,r12,28672
	ctx.r12.u64 = ctx.r12.u64 | 28672;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | r28.u64;
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
loc_822F87DC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x822f87f0
	if (ctx.cr6.eq) goto loc_822F87F0;
	// lhz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 100);
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | r27.u64;
	// sth r11,100(r3)
	REX_STORE_U16(ctx.r3.u32 + 100, ctx.r11.u16);
loc_822F87F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822F87F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82300070) {
	REX_FUNC_PROLOGUE();
	PPCRegister f31{};
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x822fbd38
	ctx.lr = 0x8230008C;
	sub_822FBD38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823000ac
	if (!ctx.cr0.eq) goto loc_823000AC;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823000AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823000AC:
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

DEFINE_REX_FUNC(sub_82301C40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82301C48;
	// stwu r1,-1168(r1)
	ea = -1168 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,48
	r28.s64 = ctx.r3.s64 + 48;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x8232f438
	ctx.lr = 0x82301C64;
	sub_8232F438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82301d44
	if (!ctx.cr0.eq) goto loc_82301D44;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82301cb0
	if (ctx.cr6.eq) goto loc_82301CB0;
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r9,4384
	ctx.r5.s64 = ctx.r9.s64 + 4384;
	// li r6,998
	ctx.r6.s64 = 998;
	// lwz r10,1012(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 1012);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82301C9C;
	sub_82330E40(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82301cb0
	if (!ctx.cr0.eq) goto loc_82301CB0;
loc_82301CA8:
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x82301d44
	goto loc_82301D44;
loc_82301CB0:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82301d40
	if (!ctx.cr6.gt) goto loc_82301D40;
	// li r30,0
	r30.s64 = 0;
loc_82301CC4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8232f490
	ctx.lr = 0x82301CD8;
	sub_8232F490(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82301d44
	if (!ctx.cr0.eq) goto loc_82301D44;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r7,1023
	ctx.r7.s64 = 1023;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8232f4d8
	ctx.lr = 0x82301CFC;
	sub_8232F4D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82301d44
	if (!ctx.cr0.eq) goto loc_82301D44;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,1119(r1)
	REX_STORE_U8(ctx.r1.u32 + 1119, ctx.r11.u8);
	// bl 0x823317f0
	ctx.lr = 0x82301D14;
	sub_823317F0(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stwx r3,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82301ca8
	if (ctx.cr6.eq) goto loc_82301CA8;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82301cc4
	if (ctx.cr6.lt) goto loc_82301CC4;
loc_82301D40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82301D44:
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8230C218) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8230C220;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82331458
	ctx.lr = 0x8230C238;
	sub_82331458(ctx, base);
	// addi r31,r3,5
	r31.s64 = ctx.r3.s64 + 5;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8230c250
	if (ctx.cr6.eq) goto loc_8230C250;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82331458
	ctx.lr = 0x8230C24C;
	sub_82331458(ctx, base);
	// add r31,r3,r31
	r31.u64 = ctx.r3.u64 + r31.u64;
loc_8230C250:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,5068
	ctx.r5.s64 = ctx.r10.s64 + 5068;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// li r6,214
	ctx.r6.s64 = 214;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x8230C278;
	sub_82330A38(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8230c288
	if (!ctx.cr0.eq) goto loc_8230C288;
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x8230c304
	goto loc_8230C304;
loc_8230C288:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
	// beq cr6,0x8230c2a4
	if (ctx.cr6.eq) goto loc_8230C2A4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82331480
	ctx.lr = 0x8230C2A4;
	sub_82331480(ctx, base);
loc_8230C2A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82331458
	ctx.lr = 0x8230C2AC;
	sub_82331458(ctx, base);
	// add r30,r3,r31
	r30.u64 = ctx.r3.u64 + r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823314c8
	ctx.lr = 0x8230C2BC;
	sub_823314C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,5096
	ctx.r4.s64 = ctx.r11.s64 + 5096;
	// bl 0x823314c8
	ctx.lr = 0x8230C2CC;
	sub_823314C8(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r11,-10820(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -10820);
	// lwz r11,164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8230c2ec
	if (ctx.cr0.eq) goto loc_8230C2EC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82331568
	ctx.lr = 0x8230C2E8;
	sub_82331568(ctx, base);
	// b 0x8230c2fc
	goto loc_8230C2FC;
loc_8230C2EC:
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230c2fc
	if (ctx.cr0.eq) goto loc_8230C2FC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823315a8
	ctx.lr = 0x8230C2FC;
	sub_823315A8(ctx, base);
loc_8230C2FC:
	// stw r31,0(r28)
	REX_STORE_U32(r28.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230C304:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823125F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823125F8;
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f29.u64);
	// stfd f30,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r29,r3,128
	r29.s64 = ctx.r3.s64 + 128;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82312634
	if (!ctx.cr6.eq) goto loc_82312634;
	// li r31,0
	r31.s64 = 0;
loc_82312634:
	// lwz r3,52(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82312668
	if (ctx.cr6.eq) goto loc_82312668;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8233f070
	ctx.lr = 0x82312650;
	sub_8233F070(ctx, base);
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x82312668
	if (ctx.cr6.eq) goto loc_82312668;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// beq cr6,0x82312668
	if (ctx.cr6.eq) goto loc_82312668;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8231269c
	if (!ctx.cr6.eq) goto loc_8231269C;
loc_82312668:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82312680
	if (!ctx.cr6.eq) goto loc_82312680;
	// li r31,0
	r31.s64 = 0;
loc_82312680:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// addi r11,r30,124
	ctx.r11.s64 = r30.s64 + 124;
	// bne cr6,0x82312690
	if (!ctx.cr6.eq) goto loc_82312690;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82312690:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82312634
	if (!ctx.cr6.eq) goto loc_82312634;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231269C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

DEFINE_REX_FUNC(sub_823152E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823152F0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,8(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r30,-32129
	r30.s64 = -2105606144;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r31,r11,5872
	r31.s64 = ctx.r11.s64 + 5872;
	// beq cr6,0x82315328
	if (ctx.cr6.eq) goto loc_82315328;
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,126
	ctx.r6.s64 = 126;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82315328;
	sub_82330D00(ctx, base);
loc_82315328:
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,129
	ctx.r6.s64 = 129;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82315344;
	sub_82330D00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823173B8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823176B0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823176C8) {
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
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,6196
	ctx.r11.s64 = ctx.r11.s64 + 6196;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82317704
	if (ctx.cr6.eq) goto loc_82317704;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82317704;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82317704:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,5920
	ctx.r11.s64 = ctx.r11.s64 + 5920;
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

DEFINE_REX_FUNC(sub_82319E68) {
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
	ctx.lr = 0x82319E70;
	// stwu r1,-1216(r1)
	ea = -1216 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// bl 0x82317938
	ctx.lr = 0x82319E98;
	sub_82317938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231a0dc
	if (!ctx.cr0.eq) goto loc_8231A0DC;
	// lis r11,29552
	ctx.r11.s64 = 1936719872;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// ori r11,r11,28019
	ctx.r11.u64 = ctx.r11.u64 | 28019;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82319ebc
	if (ctx.cr6.eq) goto loc_82319EBC;
loc_82319EB4:
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x8231a0dc
	goto loc_8231A0DC;
loc_82319EBC:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82317938
	ctx.lr = 0x82319ECC;
	sub_82317938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231a0dc
	if (!ctx.cr0.eq) goto loc_8231A0DC;
	// lis r11,26736
	ctx.r11.s64 = 1752170496;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// ori r11,r11,28019
	ctx.r11.u64 = ctx.r11.u64 | 28019;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82319eb4
	if (!ctx.cr6.eq) goto loc_82319EB4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82340718
	ctx.lr = 0x82319F00;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231a0dc
	if (!ctx.cr0.eq) goto loc_8231A0DC;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x82340718
	ctx.lr = 0x82319F28;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231a0dc
	if (!ctx.cr0.eq) goto loc_8231A0DC;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82319f44
	if (!ctx.cr6.eq) goto loc_82319F44;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// b 0x8231a0d8
	goto loc_8231A0D8;
loc_82319F44:
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r9,6576
	ctx.r5.s64 = ctx.r9.s64 + 6576;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,1012(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 1012);
	// li r6,2077
	ctx.r6.s64 = 2077;
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x82319F6C;
	sub_82330A38(ctx, base);
	// stw r3,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82319f80
	if (!ctx.cr0.eq) goto loc_82319F80;
loc_82319F78:
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x8231a0dc
	goto loc_8231A0DC;
loc_82319F80:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r26,0
	r26.s64 = 0;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82319fd0
	if (ctx.cr6.eq) goto loc_82319FD0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// addi r8,r11,6292
	ctx.r8.s64 = ctx.r11.s64 + 6292;
loc_82319FA0:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82319fbc
	if (ctx.cr0.eq) goto loc_82319FBC;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r26.u32);
	// stw r26,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r26.u32);
	// stw r26,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r26.u32);
loc_82319FBC:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82319fa0
	if (ctx.cr6.lt) goto loc_82319FA0;
loc_82319FD0:
	// mr r30,r26
	r30.u64 = r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231a0d8
	if (ctx.cr6.eq) goto loc_8231A0D8;
	// mr r31,r26
	r31.u64 = r26.u64;
	// lis r27,-32126
	r27.s64 = -2105409536;
loc_82319FE4:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82317938
	ctx.lr = 0x82319FF4;
	sub_82317938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231a0dc
	if (!ctx.cr0.eq) goto loc_8231A0DC;
	// lis r11,8304
	ctx.r11.s64 = 544210944;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// ori r11,r11,28019
	ctx.r11.u64 = ctx.r11.u64 | 28019;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82319eb4
	if (!ctx.cr6.eq) goto loc_82319EB4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82340718
	ctx.lr = 0x8231A028;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231a0dc
	if (!ctx.cr0.eq) goto loc_8231A0DC;
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r6,1024
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1024, ctx.xer);
	// bgt cr6,0x82319f78
	if (ctx.cr6.gt) goto loc_82319F78;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82340718
	ctx.lr = 0x8231A050;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231a0dc
	if (!ctx.cr0.eq) goto loc_8231A0DC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82340718
	ctx.lr = 0x8231A070;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231a0dc
	if (!ctx.cr0.eq) goto loc_8231A0DC;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231a0ac
	if (ctx.cr6.eq) goto loc_8231A0AC;
	// lwz r3,-10820(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + -10820);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,192(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231A0A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231a0dc
	if (!ctx.cr0.eq) goto loc_8231A0DC;
loc_8231A0AC:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82319fe4
	if (ctx.cr6.lt) goto loc_82319FE4;
loc_8231A0D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231A0DC:
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8232D078) {
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
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232D09C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
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

DEFINE_REX_FUNC(sub_8232E998) {
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
	ctx.lr = 0x8232E9A0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// bge 0x8232e9d4
	if (!ctx.cr0.lt) goto loc_8232E9D4;
	// subfic r10,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8232e9dc
	goto loc_8232E9DC;
loc_8232E9D4:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_8232E9DC:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8232e9f4
	if (ctx.cr6.eq) goto loc_8232E9F4;
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// b 0x8232e9f8
	goto loc_8232E9F8;
loc_8232E9F4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8232E9F8:
	// lis r28,-32256
	r28.s64 = -2113929216;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8232ea54
	if (ctx.cr6.eq) goto loc_8232EA54;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// bge 0x8232ea24
	if (!ctx.cr0.lt) goto loc_8232EA24;
	// subfic r10,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8232ea2c
	goto loc_8232EA2C;
loc_8232EA24:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_8232EA2C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + r31.u64;
	// bl 0x8232d5e0
	ctx.lr = 0x8232EA3C;
	sub_8232D5E0(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// ld r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// b 0x8232eaa8
	goto loc_8232EAA8;
loc_8232EA54:
	// lwz r30,20(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,5856(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 5856);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232EA78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 84);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232EA8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// std r3,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r3.u64);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
loc_8232EAA8:
	// lwz r30,96(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8232eb00
	if (ctx.cr6.eq) goto loc_8232EB00;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,8496
	ctx.r11.s64 = ctx.r11.s64 + 8496;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8232e308
	ctx.lr = 0x8232EAD8;
	sub_8232E308(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232eb04
	if (!ctx.cr0.eq) goto loc_8232EB04;
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8232eb0c
	if (!ctx.cr6.eq) goto loc_8232EB0C;
	// lwz r11,5856(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 5856);
	// and. r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232eb00
	if (ctx.cr0.eq) goto loc_8232EB00;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_8232EB00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232EB04:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d08
	return;
loc_8232EB0C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8232df90
	ctx.lr = 0x8232EB14;
	sub_8232DF90(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8232eb48
	if (!ctx.cr6.eq) goto loc_8232EB48;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232EB34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8232eb48
	if (ctx.cr0.eq) goto loc_8232EB48;
	// lwz r11,5856(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 5856);
	// and. r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232eb00
	if (ctx.cr0.eq) goto loc_8232EB00;
loc_8232EB48:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8232e748
	ctx.lr = 0x8232EB58;
	sub_8232E748(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8232eb00
	if (ctx.cr0.eq) goto loc_8232EB00;
	// b 0x8232eb04
	goto loc_8232EB04;
}

DEFINE_REX_FUNC(sub_82341958) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82341960;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32129
	r29.s64 = -2105606144;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823419c0
	if (ctx.cr6.eq) goto loc_823419C0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8233e7e0
	ctx.lr = 0x82341980;
	sub_8233E7E0(ctx, base);
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r31,r11,1164
	r31.s64 = ctx.r11.s64 + 1164;
	// lwz r3,1164(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1164);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, ctx.xer);
	// beq cr6,0x823419b4
	if (ctx.cr6.eq) goto loc_823419B4;
loc_82341994:
	// lbz r11,330(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 330);
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823419a8
	if (ctx.cr6.eq) goto loc_823419A8;
	// bl 0x82341850
	ctx.lr = 0x823419A8;
	sub_82341850(ctx, base);
loc_823419A8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// bne cr6,0x82341994
	if (!ctx.cr6.eq) goto loc_82341994;
loc_823419B4:
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// lwz r3,56(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8233e820
	ctx.lr = 0x823419C0;
	sub_8233E820(ctx, base);
loc_823419C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82349190) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82349198;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823491b8
	if (!ctx.cr6.eq) goto loc_823491B8;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823491B8:
	// clrlwi r30,r5,24
	r30.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823491dc
	if (ctx.cr6.eq) goto loc_823491DC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x82334ca0
	ctx.lr = 0x823491D0;
	sub_82334CA0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,4356(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4356);
	// bl 0x8233e7e0
	ctx.lr = 0x823491DC;
	sub_8233E7E0(ctx, base);
loc_823491DC:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// beq cr6,0x823491f8
	if (ctx.cr6.eq) goto loc_823491F8;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,4356(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4356);
	// bl 0x8233e820
	ctx.lr = 0x823491F8;
	sub_8233E820(ctx, base);
loc_823491F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8234BA60) {
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
	ctx.lr = 0x8234BA68;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8234bb14
	if (ctx.cr6.eq) goto loc_8234BB14;
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,24980
	ctx.r9.s64 = ctx.r11.s64 + 24980;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// lfs f31,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	f31.f64 = double(temp.f32);
	// bne cr6,0x8234baa8
	if (!ctx.cr6.eq) goto loc_8234BAA8;
	// stfs f31,0(r6)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// b 0x8234bad0
	goto loc_8234BAD0;
loc_8234BAA8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235b9e0
	ctx.lr = 0x8234BABC;
	sub_8235B9E0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8234bb14
	if (!ctx.cr6.gt) goto loc_8234BB14;
loc_8234BAD0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235b008
	ctx.lr = 0x8234BAE4;
	sub_8235B008(ctx, base);
	// lwz r11,68(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 68);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,24564
	ctx.r3.s64 = ctx.r11.s64 + 24564;
	// bl 0x82353f20
	ctx.lr = 0x8234BB00;
	sub_82353F20(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 - ctx.f0.f64));
	// lfs f12,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
loc_8234BB14:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82350F88) {
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
	// bl 0x8235ace0
	ctx.lr = 0x82350FA4;
	sub_8235ACE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82350fb8
	if (!ctx.cr6.eq) goto loc_82350FB8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8235b948
	ctx.lr = 0x82350FB8;
	sub_8235B948(ctx, base);
loc_82350FB8:
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

DEFINE_REX_FUNC(sub_82352038) {
	REX_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,21816(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 21816);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82352050
	if (!ctx.cr6.eq) goto loc_82352050;
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_82352050:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82351dc0
	sub_82351DC0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82353708) {
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
	// lbz r11,268(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 268);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823537d4
	if (ctx.cr6.eq) goto loc_823537D4;
	// lwz r3,280(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 280);
	// li r30,0
	r30.s64 = 0;
	// stb r30,268(r31)
	REX_STORE_U8(r31.u32 + 268, r30.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82353750
	if (ctx.cr6.eq) goto loc_82353750;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233e950
	ctx.lr = 0x82353748;
	sub_8233E950(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823537d8
	if (!ctx.cr6.eq) goto loc_823537D8;
loc_82353750:
	// lwz r3,284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 284);
	// bl 0x8233e908
	ctx.lr = 0x82353758;
	sub_8233E908(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823537d8
	if (!ctx.cr6.eq) goto loc_823537D8;
	// lwz r3,280(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 280);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235377c
	if (ctx.cr6.eq) goto loc_8235377C;
	// bl 0x8233e8c8
	ctx.lr = 0x82353770;
	sub_8233E8C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823537d8
	if (!ctx.cr6.eq) goto loc_823537D8;
	// stw r30,280(r31)
	REX_STORE_U32(r31.u32 + 280, r30.u32);
loc_8235377C:
	// lwz r3,284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 284);
	// bl 0x8233e8c8
	ctx.lr = 0x82353784;
	sub_8233E8C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823537d8
	if (!ctx.cr6.eq) goto loc_823537D8;
	// stw r30,284(r31)
	REX_STORE_U32(r31.u32 + 284, r30.u32);
	// lwz r3,264(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 264);
	// bl 0x8233e690
	ctx.lr = 0x82353798;
	sub_8233E690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823537d8
	if (!ctx.cr6.eq) goto loc_823537D8;
	// lwz r4,276(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 276);
	// stw r30,264(r31)
	REX_STORE_U32(r31.u32 + 264, r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823537d4
	if (ctx.cr6.eq) goto loc_823537D4;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,9808
	ctx.r5.s64 = ctx.r10.s64 + 9808;
	// li r6,327
	ctx.r6.s64 = 327;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823537D0;
	sub_82330D00(ctx, base);
	// stw r30,276(r31)
	REX_STORE_U32(r31.u32 + 276, r30.u32);
loc_823537D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823537D8:
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

DEFINE_REX_FUNC(sub_82356A00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82356A08;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82356b00
	if (ctx.cr6.eq) goto loc_82356B00;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82356b00
	if (ctx.cr6.eq) goto loc_82356B00;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,68(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82356a74
	if (ctx.cr6.eq) goto loc_82356A74;
	// cmplwi cr6,r4,672
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 672, ctx.xer);
	// bge cr6,0x82356a44
	if (!ctx.cr6.lt) goto loc_82356A44;
	// li r4,672
	ctx.r4.s64 = 672;
loc_82356A44:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,10216
	ctx.r5.s64 = ctx.r10.s64 + 10216;
	// li r6,1962
	ctx.r6.s64 = 1962;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82356A64;
	sub_82330E40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82356ab8
	if (ctx.cr6.eq) goto loc_82356AB8;
	// bl 0x82360a18
	ctx.lr = 0x82356A70;
	sub_82360A18(ctx, base);
	// b 0x82356aac
	goto loc_82356AAC;
loc_82356A74:
	// cmplwi cr6,r4,360
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 360, ctx.xer);
	// bge cr6,0x82356a80
	if (!ctx.cr6.lt) goto loc_82356A80;
	// li r4,360
	ctx.r4.s64 = 360;
loc_82356A80:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,10216
	ctx.r5.s64 = ctx.r10.s64 + 10216;
	// li r6,1966
	ctx.r6.s64 = 1966;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82356AA0;
	sub_82330E40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82356ab8
	if (ctx.cr6.eq) goto loc_82356AB8;
	// bl 0x82359be8
	ctx.lr = 0x82356AAC;
	sub_82359BE8(ctx, base);
loc_82356AAC:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82356acc
	if (!ctx.cr6.eq) goto loc_82356ACC;
loc_82356AB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82356ACC:
	// li r5,172
	ctx.r5.s64 = 172;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// bl 0x823ef2f8
	ctx.lr = 0x82356ADC;
	sub_823EF2F8(ctx, base);
	// lwz r9,700(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 700);
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,-25864
	ctx.r10.s64 = ctx.r11.s64 + -25864;
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82356B00:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8235E3F0) {
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
	// li r6,48
	ctx.r6.s64 = 48;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82331a00
	ctx.lr = 0x8235E420;
	sub_82331A00(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235e444
	if (ctx.cr6.eq) goto loc_8235E444;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,1144(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 1144);
	// bl 0x82331a00
	ctx.lr = 0x8235E444;
	sub_82331A00(ctx, base);
loc_8235E444:
	// lis r31,-32129
	r31.s64 = -2105606144;
	// lwz r11,1012(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1012);
	// lwz r10,100(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235e4cc
	if (ctx.cr6.eq) goto loc_8235E4CC;
	// li r6,52
	ctx.r6.s64 = 52;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82331a00
	ctx.lr = 0x8235E46C;
	sub_82331A00(ctx, base);
	// lwz r11,1012(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1012);
	// lwz r10,100(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8235e49c
	if (ctx.cr6.eq) goto loc_8235E49C;
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82331a00
	ctx.lr = 0x8235E498;
	sub_82331A00(ctx, base);
	// lwz r11,1012(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1012);
loc_8235E49C:
	// lwz r10,100(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r9,32(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8235e4cc
	if (ctx.cr6.eq) goto loc_8235E4CC;
	// lwz r11,48(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r11,r11,61
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(61));
	// addi r6,r11,17
	ctx.r6.s64 = ctx.r11.s64 + 17;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82331a00
	ctx.lr = 0x8235E4C8;
	sub_82331A00(ctx, base);
	// lwz r11,1012(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1012);
loc_8235E4CC:
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235e4f0
	if (ctx.cr6.eq) goto loc_8235E4F0;
	// li r6,24
	ctx.r6.s64 = 24;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82331a00
	ctx.lr = 0x8235E4EC;
	sub_82331A00(ctx, base);
	// lwz r11,1012(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1012);
loc_8235E4F0:
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235e514
	if (ctx.cr6.eq) goto loc_8235E514;
	// li r6,24
	ctx.r6.s64 = 24;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82331a00
	ctx.lr = 0x8235E510;
	sub_82331A00(ctx, base);
	// lwz r11,1012(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1012);
loc_8235E514:
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235e534
	if (ctx.cr6.eq) goto loc_8235E534;
	// li r6,24
	ctx.r6.s64 = 24;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82331a00
	ctx.lr = 0x8235E534;
	sub_82331A00(ctx, base);
loc_8235E534:
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

DEFINE_REX_FUNC(sub_82365DD0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82365de0
	if (!ctx.cr6.eq) goto loc_82365DE0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82365DE0:
	// b 0x82365d40
	sub_82365D40(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82367748) {
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
	ctx.lr = 0x82367750;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r27,r3,1
	r27.s64 = ctx.r3.s64 + 65536;
	// addi r27,r27,-16056
	r27.s64 = r27.s64 + -16056;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823677c4
	if (ctx.cr6.eq) goto loc_823677C4;
	// addis r25,r3,1
	r25.s64 = ctx.r3.s64 + 65536;
	// li r30,0
	r30.s64 = 0;
	// addi r25,r25,-16048
	r25.s64 = r25.s64 + -16048;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823677c4
	if (!ctx.cr6.gt) goto loc_823677C4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r26,r3,312
	r26.s64 = ctx.r3.s64 + 312;
	// li r31,0
	r31.s64 = 0;
	// ori r28,r11,16436
	r28.u64 = ctx.r11.u64 | 16436;
	// ori r29,r10,16444
	r29.u64 = ctx.r10.u64 | 16444;
loc_82367798:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + ctx.r11.u64;
	// bl 0x82367550
	ctx.lr = 0x823677A4;
	sub_82367550(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// stwx r26,r11,r28
	REX_STORE_U32(ctx.r11.u32 + r28.u32, r26.u32);
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82367798
	if (ctx.cr6.lt) goto loc_82367798;
loc_823677C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8236C5E8) {
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
	ctx.lr = 0x8236C5F0;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// li r27,0
	r27.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r28,r3,792
	r28.s64 = ctx.r3.s64 + 792;
	// stw r11,1012(r10)
	REX_STORE_U32(ctx.r10.u32 + 1012, ctx.r11.u32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r8,164(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sth r9,796(r3)
	REX_STORE_U16(ctx.r3.u32 + 796, ctx.r9.u16);
	// stw r27,792(r3)
	REX_STORE_U32(ctx.r3.u32 + 792, r27.u32);
	// ble cr6,0x8236c670
	if (!ctx.cr6.gt) goto loc_8236C670;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_8236C630:
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
	ctx.lr = 0x8236C654;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236c7c8
	if (!ctx.cr6.eq) goto loc_8236C7C8;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,48
	r29.s64 = r29.s64 + 48;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8236c630
	if (ctx.cr6.lt) goto loc_8236C630;
loc_8236C670:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addic. r11,r31,788
	ctx.xer.ca = r31.u32 > 4294966507;
	ctx.r11.s64 = r31.s64 + 788;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236c684
	if (ctx.cr0.eq) goto loc_8236C684;
	// lwz r9,1188(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 1188);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8236C684:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8236c694
	if (ctx.cr6.eq) goto loc_8236C694;
	// lwz r11,1200(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1200);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_8236C694:
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f12,324(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 324);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f11,316(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 316);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f10,332(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 332);
	ctx.f10.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f9,340(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 340);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,348(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 348);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r31,652
	ctx.r11.s64 = r31.s64 + 652;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,3704(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	f31.f64 = double(temp.f32);
	// lfs f0,15200(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15200);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f6,f31,f12
	ctx.f6.f64 = double(float(f31.f64 - ctx.f12.f64));
	// lfs f7,356(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 356);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,364(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 364);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,376(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 376);
	ctx.f4.f64 = double(temp.f32);
	// lfs f13,15196(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15196);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,448(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 448, temp.u32);
	// lfs f0,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,460(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 460, temp.u32);
	// stfs f11,312(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 312, temp.u32);
	// stfs f12,320(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 320, temp.u32);
	// stfs f10,328(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 328, temp.u32);
	// stfs f9,336(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 336, temp.u32);
	// stfs f8,344(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 344, temp.u32);
	// stfs f7,352(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 352, temp.u32);
	// stfs f5,360(r31)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r31.u32 + 360, temp.u32);
	// stfs f4,372(r31)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r31.u32 + 372, temp.u32);
	// stfs f6,452(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r31.u32 + 452, temp.u32);
loc_8236C710:
	// stfs f0,-124(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -124, temp.u32);
	// stw r27,-188(r11)
	REX_STORE_U32(ctx.r11.u32 + -188, r27.u32);
	// stfs f0,-60(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -60, temp.u32);
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8236c710
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236C710;
	// stb r27,368(r31)
	REX_STORE_U8(r31.u32 + 368, r27.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8236b450
	ctx.lr = 0x8236C730;
	sub_8236B450(ctx, base);
	// lfs f13,336(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 336);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 + f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,344(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 344);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f31,f11
	ctx.f10.f64 = double(float(f31.f64 - ctx.f11.f64));
	// lfs f0,3720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fsubs f9,f31,f0
	ctx.f9.f64 = double(float(f31.f64 - ctx.f0.f64));
	// fsubs f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fmadds f13,f9,f11,f0
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f0.f64)));
	// fcmpu cr6,f10,f12
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// bge cr6,0x8236c76c
	if (!ctx.cr6.lt) goto loc_8236C76C;
	// fmr f9,f10
	ctx.f9.f64 = ctx.f10.f64;
	// b 0x8236c770
	goto loc_8236C770;
loc_8236C76C:
	// fmr f9,f12
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f12.f64;
loc_8236C770:
	// lfs f12,352(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 352);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f11,f31,f12
	ctx.f11.f64 = double(float(f31.f64 - ctx.f12.f64));
	// fsubs f12,f31,f13
	ctx.f12.f64 = double(float(f31.f64 - ctx.f13.f64));
	// fmuls f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x8236c790
	if (ctx.cr6.lt) goto loc_8236C790;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8236C790:
	// fmuls f0,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fsubs f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfs f12,380(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 380, temp.u32);
	// fadds f11,f9,f10
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f11,384(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 384, temp.u32);
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f10,388(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 388, temp.u32);
	// fadds f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f9,392(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 392, temp.u32);
	// bl 0x8236b608
	ctx.lr = 0x8236C7BC;
	sub_8236B608(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8236b878
	ctx.lr = 0x8236C7C4;
	sub_8236B878(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236C7C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82384BC0) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// bl 0x82384648
	ctx.lr = 0x82384BE8;
	sub_82384648(ctx, base);
	// lbz r9,2165(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 2165);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82384c20
	if (!ctx.cr6.eq) goto loc_82384C20;
loc_82384BF4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82384430
	ctx.lr = 0x82384C00;
	sub_82384430(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,1256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1256);
	// lwz r9,272(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 272);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// lbz r9,2165(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 2165);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82384bf4
	if (ctx.cr6.eq) goto loc_82384BF4;
loc_82384C20:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c86b8
	ctx.lr = 0x82384C28;
	sub_823C86B8(ctx, base);
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

DEFINE_REX_FUNC(sub_8238C1C0) {
	REX_FUNC_PROLOGUE();
	// lbz r10,678(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 678);
	// lbz r11,650(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 650);
	// rlwinm r10,r10,28,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x8238c264
	if (ctx.cr6.gt) goto loc_8238C264;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8238c204
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8238C204;
	// bdzf 4*cr6+eq,0x8238c228
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8238C228;
	// bne cr6,0x8238c230
	if (!ctx.cr6.eq) goto loc_8238C230;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// addi r9,r11,30660
	ctx.r9.s64 = ctx.r11.s64 + 30660;
	// lbzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// b 0x8238c268
	goto loc_8238C268;
loc_8238C204:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// rlwinm r11,r9,3,24,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xF8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x8238c220
	if (!ctx.cr6.lt) goto loc_8238C220;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subfic r10,r11,255
	ctx.xer.ca = ctx.r11.u32 <= 255;
	ctx.r10.u64 = static_cast<uint64_t>(255) - ctx.r11.u64;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
loc_8238C220:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8238c268
	goto loc_8238C268;
loc_8238C228:
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x8238c268
	goto loc_8238C268;
loc_8238C230:
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// ori r7,r9,17405
	ctx.r7.u64 = ctx.r9.u64 | 17405;
	// lwz r11,1012(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1012);
	// lwz r6,104(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// addis r4,r5,39
	ctx.r4.s64 = ctx.r5.s64 + 2555904;
	// addi r4,r4,-24893
	ctx.r4.s64 = ctx.r4.s64 + -24893;
	// stw r4,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r4.u32);
	// lwz r11,1012(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1012);
	// lhz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 104);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8238c268
	goto loc_8238C268;
loc_8238C264:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8238C268:
	// lbz r10,652(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 652);
	// lbz r9,650(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 650);
	// mullw r7,r10,r11
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r10,468(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 468);
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// srawi r11,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 6;
	// bge cr6,0x8238c298
	if (!ctx.cr6.lt) goto loc_8238C298;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,64
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 64, ctx.xer);
	// ble cr6,0x8238c2ac
	if (!ctx.cr6.gt) goto loc_8238C2AC;
	// subfic r11,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// b 0x8238c2ac
	goto loc_8238C2AC;
loc_8238C298:
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// subf. r6,r11,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge 0x8238c2a8
	if (!ctx.cr0.lt) goto loc_8238C2A8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8238C2A8:
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8238C2AC:
	// stw r11,476(r8)
	REX_STORE_U32(ctx.r8.u32 + 476, ctx.r11.u32);
	// lbz r11,650(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 650);
	// lbz r10,652(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 652);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// stb r7,650(r3)
	REX_STORE_U8(ctx.r3.u32 + 650, ctx.r7.u8);
	// cmpwi cr6,r7,31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 31, ctx.xer);
	// ble cr6,0x8238c2d8
	if (!ctx.cr6.gt) goto loc_8238C2D8;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// addi r10,r11,-64
	ctx.r10.s64 = ctx.r11.s64 + -64;
	// stb r10,650(r3)
	REX_STORE_U8(ctx.r3.u32 + 650, ctx.r10.u8);
loc_8238C2D8:
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

DEFINE_REX_FUNC(sub_823964A0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,320(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,344(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 344);
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r11,r9,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r4,48(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// rlwinm r3,r4,0,17,17
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82396504
	if (ctx.cr6.eq) goto loc_82396504;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwinm r5,r8,24,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// stw r8,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// lbz r4,0(r7)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// or r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 | ctx.r4.u64;
	// rlwinm r10,r6,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r9,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82396504:
	// mulli r10,r5,260
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(260));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwinm r6,r9,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// stw r9,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// rlwimi r8,r9,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// lbz r4,0(r7)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// or r11,r6,r4
	ctx.r11.u64 = ctx.r6.u64 | ctx.r4.u64;
	// rlwinm r5,r8,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 | ctx.r11.u64;
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8239DAF8) {
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
	ctx.lr = 0x8239DB00;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8239db9c
	if (ctx.cr6.eq) goto loc_8239DB9C;
	// li r26,0
	r26.s64 = 0;
loc_8239DB1C:
	// lwz r28,0(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lbz r8,37(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 37);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r31,4(r31)
	REX_STORE_U32(r31.u32 + 4, r31.u32);
	// stw r31,0(r31)
	REX_STORE_U32(r31.u32 + 0, r31.u32);
	// stw r26,8(r31)
	REX_STORE_U32(r31.u32 + 8, r26.u32);
	// beq cr6,0x8239db78
	if (ctx.cr6.eq) goto loc_8239DB78;
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// beq cr6,0x8239db78
	if (ctx.cr6.eq) goto loc_8239DB78;
loc_8239DB58:
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// bl 0x823315e8
	ctx.lr = 0x8239DB64;
	sub_823315E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239dba8
	if (ctx.cr6.eq) goto loc_8239DBA8;
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x8239db58
	if (!ctx.cr6.eq) goto loc_8239DB58;
loc_8239DB78:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r29)
	REX_STORE_U32(r29.u32 + 4, r31.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r31,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r31.u32);
loc_8239DB90:
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(r28.u32, r27.u32, ctx.xer);
	// bne cr6,0x8239db1c
	if (!ctx.cr6.eq) goto loc_8239DB1C;
loc_8239DB9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_8239DBA8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x8239d748
	ctx.lr = 0x8239DBB8;
	sub_8239D748(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239d6b0
	ctx.lr = 0x8239DBC0;
	sub_8239D6B0(ctx, base);
	// b 0x8239db90
	goto loc_8239DB90;
}

DEFINE_REX_FUNC(sub_823A24E0) {
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
	// lwz r11,1012(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1012);
	// lwz r10,100(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a2510
	if (ctx.cr6.eq) goto loc_823A2510;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823a25bc
	goto loc_823A25BC;
loc_823A2510:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,21556
	ctx.r5.s64 = ctx.r10.s64 + 21556;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,21
	ctx.r6.s64 = 21;
	// li r4,52
	ctx.r4.s64 = 52;
	// bl 0x82330a38
	ctx.lr = 0x823A2530;
	sub_82330A38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a2540
	if (ctx.cr6.eq) goto loc_823A2540;
	// bl 0x823a20b0
	ctx.lr = 0x823A253C;
	sub_823A20B0(ctx, base);
	// b 0x823a2544
	goto loc_823A2544;
loc_823A2540:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A2544:
	// lwz r11,1012(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1012);
	// stw r3,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r3.u32);
	// lwz r11,1012(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1012);
	// lwz r10,100(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823a2564
	if (!ctx.cr6.eq) goto loc_823A2564;
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x823a25bc
	goto loc_823A25BC;
loc_823A2564:
	// lwz r3,100(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A2578;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1012(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1012);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823a25b0
	if (ctx.cr6.eq) goto loc_823A25B0;
	// lwz r3,100(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A259C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1012(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1012);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r9,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// b 0x823a25bc
	goto loc_823A25BC;
loc_823A25B0:
	// lwz r4,100(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r3,84(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x8235e3c0
	ctx.lr = 0x823A25BC;
	sub_8235E3C0(ctx, base);
loc_823A25BC:
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

DEFINE_REX_FUNC(sub_823A9C70) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a9ccc
	if (ctx.cr6.eq) goto loc_823A9CCC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A9CA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823a9ccc
	if (ctx.cr6.eq) goto loc_823A9CCC;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r11,288(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a9ccc
	if (ctx.cr6.eq) goto loc_823A9CCC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,92(r11)
	REX_STORE_U8(ctx.r11.u32 + 92, ctx.r10.u8);
loc_823A9CCC:
	// lwz r11,388(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 388);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a9cf4
	if (ctx.cr6.eq) goto loc_823A9CF4;
	// lwz r10,284(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r9,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r9.u32);
	// lwz r3,388(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 388);
	// bl 0x82348f28
	ctx.lr = 0x823A9CF4;
	sub_82348F28(ctx, base);
loc_823A9CF4:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a9d9c
	if (ctx.cr6.eq) goto loc_823A9D9C;
	// li r31,0
	r31.s64 = 0;
loc_823A9D04:
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r3,r11,22444
	ctx.r3.s64 = ctx.r11.s64 + 22444;
	// lwz r5,56(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x8235af68
	ctx.lr = 0x823A9D1C;
	sub_8235AF68(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// blt cr6,0x823a9d04
	if (ctx.cr6.lt) goto loc_823A9D04;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r3,r11,24980
	ctx.r3.s64 = ctx.r11.s64 + 24980;
	// lwz r5,56(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x8235af68
	ctx.lr = 0x823A9D40;
	sub_8235AF68(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,25576(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 25576);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x823a9d58
	if (!ctx.cr6.eq) goto loc_823A9D58;
	// li r31,0
	r31.s64 = 0;
loc_823A9D58:
	// addi r11,r10,25572
	ctx.r11.s64 = ctx.r10.s64 + 25572;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823a9d9c
	if (ctx.cr6.eq) goto loc_823A9D9C;
loc_823A9D64:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,56(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8235af68
	ctx.lr = 0x823A9D78;
	sub_8235AF68(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x823a9d8c
	if (!ctx.cr6.eq) goto loc_823A9D8C;
	// li r31,0
	r31.s64 = 0;
loc_823A9D8C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,25572
	ctx.r11.s64 = ctx.r11.s64 + 25572;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823a9d64
	if (!ctx.cr6.eq) goto loc_823A9D64;
loc_823A9D9C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823d18d0
	ctx.lr = 0x823A9DA4;
	sub_823D18D0(ctx, base);
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

DEFINE_REX_FUNC(sub_823B2940) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c8c
	ctx.lr = 0x823B2948;
	// stfd f29,-152(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -152, f29.u64);
	// stfd f30,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, f30.u64);
	// stfd f31,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, f31.u64);
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x823b55b0
	if (ctx.cr6.gt) goto loc_823B55B0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823b35dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823B35DC;
	// bdzf 4*cr6+eq,0x823b42b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823B42B0;
	// bdzf 4*cr6+eq,0x823b4730
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823B4730;
	// bne cr6,0x823b4c44
	if (!ctx.cr6.eq) goto loc_823B4C44;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x823b2f84
	if (!ctx.cr6.eq) goto loc_823B2F84;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,14608
	ctx.r9.s64 = ctx.r11.s64 + 14608;
	// addi r6,r10,32288
	ctx.r6.s64 = ctx.r10.s64 + 32288;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r31,-32256
	r31.s64 = -2113929216;
	// clrlwi r30,r3,28
	r30.u64 = ctx.r3.u32 & 0xF;
	// lvx128 v62,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lfs f0,15200(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15200);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32280(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32280);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x823b2a68
	if (ctx.cr6.eq) goto loc_823B2A68;
	// addi r11,r3,15
	ctx.r11.s64 = ctx.r3.s64 + 15;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// subf r9,r3,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r11,r9,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x823b29d8
	if (!ctx.cr6.gt) goto loc_823B29D8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_823B29D8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b2a68
	if (ctx.cr6.eq) goto loc_823B2A68;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
loc_823B29E8:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// ld r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// std r6,-216(r1)
	REX_STORE_U64(ctx.r1.u32 + -216, ctx.r6.u64);
	// lfd f11,-216(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// lbz r6,1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// std r9,-224(r1)
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.r9.u64);
	// lfd f8,-224(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -224);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// std r6,-232(r1)
	REX_STORE_U64(ctx.r1.u32 + -232, ctx.r6.u64);
	// lfd f7,-232(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -232);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// fcfid f5,f8
	ctx.f5.f64 = double(ctx.f8.s64);
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fmuls f3,f9,f13
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// frsp f2,f5
	ctx.f2.f64 = double(float(ctx.f5.f64));
	// fmuls f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fsubs f11,f12,f3
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// fmuls f10,f2,f0
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f9,f1,f3
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f3.f64));
	// fmadds f8,f10,f11,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f9.f64)));
	// stfs f8,0(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bdnz 0x823b29e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B29E8;
loc_823B2A68:
	// srawi. r9,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x823b2ee4
	if (ctx.cr0.eq) goto loc_823B2EE4;
	// ld r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r29,4(r7)
	r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r10,r6,r5
	ctx.r10.u64 = ctx.r6.u64 + ctx.r5.u64;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// lwz r31,0(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// ld r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r28,4(r7)
	r28.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// lwz r30,0(r7)
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// ld r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r27,1(r10)
	r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r10,r31,r5
	ctx.r10.u64 = r31.u64 + ctx.r5.u64;
	// lwz r26,4(r7)
	r26.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// extsb r25,r6
	r25.s64 = ctx.r6.s8;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// extsb r27,r27
	r27.s64 = r27.s8;
	// ld r31,0(r8)
	r31.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// lwz r24,4(r7)
	r24.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lbz r23,0(r10)
	r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r22,1(r10)
	r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r10,r30,r5
	ctx.r10.u64 = r30.u64 + ctx.r5.u64;
	// stw r29,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, r29.u32);
	// extsb r23,r23
	r23.s64 = r23.s8;
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// extsb r22,r22
	r22.s64 = r22.s8;
	// lbzx r21,r6,r5
	r21.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// lbzx r30,r30,r5
	r30.u64 = REX_LOAD_U8(r30.u32 + ctx.r5.u32);
	// lbz r29,1(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r10,r6,r5
	ctx.r10.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lbz r10,1(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// extsb r30,r30
	r30.s64 = r30.s8;
	// stw r28,-364(r1)
	REX_STORE_U32(ctx.r1.u32 + -364, r28.u32);
	// extsb r6,r29
	ctx.r6.s64 = r29.s8;
	// stw r25,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, r25.u32);
	// extsb r31,r21
	r31.s64 = r21.s8;
	// stw r27,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, r27.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r26,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, r26.u32);
	// stw r23,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, r23.u32);
	// stw r24,-356(r1)
	REX_STORE_U32(ctx.r1.u32 + -356, r24.u32);
	// stw r22,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, r22.u32);
	// stw r30,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, r30.u32);
	// stw r6,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r6.u32);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// stw r31,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, r31.u32);
	// stw r10,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r10.u32);
	// beq 0x823b2d9c
	if (ctx.cr0.eq) goto loc_823B2D9C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r6,-16
	ctx.r6.s64 = -16;
loc_823B2B54:
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// addi r28,r1,-352
	r28.s64 = ctx.r1.s64 + -352;
	// lwz r30,4(r7)
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// addi r29,r1,-368
	r29.s64 = ctx.r1.s64 + -368;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r31,r1,-304
	r31.s64 = ctx.r1.s64 + -304;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lvx128 v58,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r27,4(r7)
	r27.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lvx128 v63,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r30,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, r30.u32);
	// addi r26,r1,-336
	r26.s64 = ctx.r1.s64 + -336;
	// lbzx r29,r9,r5
	r29.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// vcuxwfp128 v59,v63,31
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// lbz r28,0(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// vcsxwfp128 v60,v58,7
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3C000000)))));
	// lbz r25,1(r10)
	r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lbz r24,1(r10)
	r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lvx128 v57,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// vcsxwfp128 v0,v57,7
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3C000000)))));
	// stw r27,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, r27.u32);
	// addi r27,r1,-336
	r27.s64 = ctx.r1.s64 + -336;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// vmulfp128 v63,v59,v61
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v61.f32)));
	// addi r23,r1,-368
	r23.s64 = ctx.r1.s64 + -368;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// extsb r28,r28
	r28.s64 = r28.s8;
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r30,4(r7)
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stvx128 v0,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// vmulfp128 v12,v60,v63
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v63.f32)));
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// vsubfp128 v13,v62,v63
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// stvx128 v63,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r26,4(r7)
	r26.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r26,-292(r1)
	REX_STORE_U32(ctx.r1.u32 + -292, r26.u32);
	// addi r26,r1,-352
	r26.s64 = ctx.r1.s64 + -352;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, r30.u32);
	// lvx128 v56,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r31,0(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// vcuxwfp128 v55,v56,31
	simde_mm_store_ps(ctx.v55.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// lwz r27,4(r7)
	r27.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// vmaddfp v0,v0,v13,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v63,v55,v61
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v61.f32)));
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r30,0(r7)
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// addi r23,r1,-304
	r23.s64 = ctx.r1.s64 + -304;
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r22,0(r10)
	r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r25,r25
	r25.s64 = r25.s8;
	// extsb r29,r29
	r29.s64 = r29.s8;
	// lwz r21,4(r7)
	r21.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// extsb r24,r24
	r24.s64 = r24.s8;
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r20,1(r10)
	r20.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stvx128 v60,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// extsb r22,r22
	r22.s64 = r22.s8;
	// lwz r26,4(r7)
	r26.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r10,r31,r5
	ctx.r10.u64 = r31.u64 + ctx.r5.u64;
	// stw r28,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, r28.u32);
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r25,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, r25.u32);
	// stvx128 v63,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r29,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, r29.u32);
	// stw r24,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, r24.u32);
	// stw r27,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, r27.u32);
	// lbz r31,1(r10)
	r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// addi r28,r1,-288
	r28.s64 = ctx.r1.s64 + -288;
	// extsb r29,r20
	r29.s64 = r20.s8;
	// stw r29,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, r29.u32);
	// extsb r31,r31
	r31.s64 = r31.s8;
	// stw r31,-276(r1)
	REX_STORE_U32(ctx.r1.u32 + -276, r31.u32);
	// lbz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r27,r1,-320
	r27.s64 = ctx.r1.s64 + -320;
	// ld r29,0(r8)
	r29.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// addi r24,r1,-320
	r24.s64 = ctx.r1.s64 + -320;
	// extsb r25,r10
	r25.s64 = ctx.r10.s8;
	// lwz r31,0(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + r29.u64;
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// add r11,r30,r5
	ctx.r11.u64 = r30.u64 + ctx.r5.u64;
	// stw r22,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, r22.u32);
	// stw r25,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, r25.u32);
	// lvx128 v53,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v0,v53,7
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v53.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3C000000)))));
	// lbzx r29,r9,r5
	r29.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// lvx128 v54,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v13,v62,v63
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vcsxwfp128 v60,v54,7
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v54.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3C000000)))));
	// lbz r22,1(r11)
	r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// add r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stvx128 v0,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lbzx r23,r31,r5
	r23.u64 = REX_LOAD_U8(r31.u32 + ctx.r5.u32);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lbzx r30,r30,r5
	r30.u64 = REX_LOAD_U8(r30.u32 + ctx.r5.u32);
	// addi r25,r1,-288
	r25.s64 = ctx.r1.s64 + -288;
	// stw r21,-364(r1)
	REX_STORE_U32(ctx.r1.u32 + -364, r21.u32);
	// extsb r30,r30
	r30.s64 = r30.s8;
	// stw r26,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, r26.u32);
	// lbz r28,1(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// add r11,r31,r5
	ctx.r11.u64 = r31.u64 + ctx.r5.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stw r30,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, r30.u32);
	// lbz r24,0(r9)
	r24.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r29,r29
	r29.s64 = r29.s8;
	// lbz r9,1(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// extsb r27,r22
	r27.s64 = r22.s8;
	// extsb r28,r28
	r28.s64 = r28.s8;
	// stw r29,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, r29.u32);
	// lbz r31,1(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r23,r23
	r23.s64 = r23.s8;
	// vmulfp128 v12,v60,v63
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v63.f32)));
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// extsb r31,r31
	r31.s64 = r31.s8;
	// stw r27,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, r27.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// extsb r30,r24
	r30.s64 = r24.s8;
	// stw r28,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, r28.u32);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// stvx128 v60,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r23,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, r23.u32);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// stw r31,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, r31.u32);
	// stw r10,-356(r1)
	REX_STORE_U32(ctx.r1.u32 + -356, ctx.r10.u32);
	// stw r30,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, r30.u32);
	// stw r9,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r9.u32);
	// vmaddfp v0,v0,v13,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bdnz 0x823b2b54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B2B54;
loc_823B2D9C:
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// addi r9,r1,-368
	ctx.r9.s64 = ctx.r1.s64 + -368;
	// lwz r31,4(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// addi r29,r1,-352
	r29.s64 = ctx.r1.s64 + -352;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r30,r1,-304
	r30.s64 = ctx.r1.s64 + -304;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lvx128 v52,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r28,4(r7)
	r28.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lvx128 v50,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r28,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, r28.u32);
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// addi r27,r1,-288
	r27.s64 = ctx.r1.s64 + -288;
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// vcuxwfp128 v51,v52,31
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r26,0(r10)
	r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r24,1(r10)
	r24.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r10,r6,r5
	ctx.r10.u64 = ctx.r6.u64 + ctx.r5.u64;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// vcsxwfp128 v48,v50,7
	simde_mm_store_ps(ctx.v48.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3C000000)))));
	// extsb r28,r24
	r28.s64 = r24.s8;
	// stw r31,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, r31.u32);
	// lbzx r6,r6,r5
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// addi r24,r1,-320
	r24.s64 = ctx.r1.s64 + -320;
	// stw r28,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, r28.u32);
	// addi r25,r1,-336
	r25.s64 = ctx.r1.s64 + -336;
	// lbz r28,1(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// extsb r31,r26
	r31.s64 = r26.s8;
	// stw r6,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r6.u32);
	// extsb r28,r28
	r28.s64 = r28.s8;
	// stw r31,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, r31.u32);
	// stw r28,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, r28.u32);
	// lvx128 v47,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v49,v51,v61
	simde_mm_store_ps(ctx.v49.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v61.f32)));
	// li r28,16
	r28.s64 = 16;
	// vcsxwfp128 v12,v47,7
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v47.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3C000000)))));
	// lwz r29,4(r7)
	r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// vmulfp128 v13,v48,v49
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v49.f32)));
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// vsubfp128 v0,v62,v49
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v49.f32)));
	// stw r29,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, r29.u32);
	// lbz r29,0(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r10,1(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lwz r26,4(r7)
	r26.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// extsb r29,r29
	r29.s64 = r29.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r26,-292(r1)
	REX_STORE_U32(ctx.r1.u32 + -292, r26.u32);
	// stw r10,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r10.u32);
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lbzx r9,r9,r5
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// lvx128 v46,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcuxwfp128 v45,v46,31
	simde_mm_store_ps(ctx.v45.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// stw r29,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, r29.u32);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// lbz r9,1(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// vmaddfp v0,v12,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// vmulfp128 v44,v45,v61
	simde_mm_store_ps(ctx.v44.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v61.f32)));
	// stw r6,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r6.u32);
	// lvx128 v43,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r9,-276(r1)
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r9.u32);
	// vcsxwfp128 v12,v43,7
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v43.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3C000000)))));
	// lvx128 v42,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// vcsxwfp128 v41,v42,7
	simde_mm_store_ps(ctx.v41.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v42.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3C000000)))));
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v0,v62,v44
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v44.f32)));
	// std r6,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
	// vmulfp128 v13,v41,v44
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v44.f32)));
	// vmaddfp v0,v12,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r3,r28
	ea = (ctx.r3.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
loc_823B2EE4:
	// clrlwi r11,r4,29
	ctx.r11.u64 = ctx.r4.u32 & 0x7;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b55b0
	if (ctx.cr6.eq) goto loc_823B55B0;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823B2EF8:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// ld r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// lwz r4,4(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 + ctx.r9.u64;
	// std r3,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r3.u64);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// std r4,-216(r1)
	REX_STORE_U64(ctx.r1.u32 + -216, ctx.r4.u64);
	// extsb r9,r6
	ctx.r9.s64 = ctx.r6.s8;
	// std r11,-232(r1)
	REX_STORE_U64(ctx.r1.u32 + -232, ctx.r11.u64);
	// lfd f11,-232(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -232);
	// std r9,-224(r1)
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.r9.u64);
	// lfd f10,-224(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -224);
	// fcfid f7,f11
	ctx.f7.f64 = double(ctx.f11.s64);
	// lfd f8,-216(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// fmuls f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f11,f3,f13
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f9,f2,f11
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmadds f8,f1,f10,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f1.f64, ctx.f10.f64, ctx.f9.f64)));
	// stfsu f8,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823b2ef8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B2EF8;
	// lfd f29,-152(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f30,-144(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826a1cdc
	return;
loc_823B2F84:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x823b339c
	if (!ctx.cr6.eq) goto loc_823B339C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// srawi. r11,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f12,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,15200(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15200);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32280(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 32280);
	ctx.f13.f64 = double(temp.f32);
	// beq 0x823b32b4
	if (ctx.cr0.eq) goto loc_823B32B4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823B2FB0:
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r31,0(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// std r9,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r9.u64);
	// rlwinm r9,r31,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lfd f7,-192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lbz r31,2(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// lbz r30,0(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r29,3(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// std r6,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r6.u64);
	// extsb r29,r29
	r29.s64 = r29.s8;
	// lbz r6,1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// add r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lbzx r9,r9,r5
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// std r29,-224(r1)
	REX_STORE_U64(ctx.r1.u32 + -224, r29.u64);
	// lfd f10,-224(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -224);
	// std r6,-232(r1)
	REX_STORE_U64(ctx.r1.u32 + -232, ctx.r6.u64);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lbz r31,2(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lfd f11,-232(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -232);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// frsp f7,f5
	ctx.f7.f64 = double(float(ctx.f5.f64));
	// lbz r28,3(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// std r6,-216(r1)
	REX_STORE_U64(ctx.r1.u32 + -216, ctx.r6.u64);
	// extsb r6,r31
	ctx.r6.s64 = r31.s8;
	// lfd f9,-216(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// lbz r31,1(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// std r6,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r6.u64);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r6,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r6.u64);
	// extsb r6,r30
	ctx.r6.s64 = r30.s8;
	// lfd f6,-184(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// std r6,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r6.u64);
	// lfd f3,-168(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// lfd f8,-176(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f6,f11
	ctx.f6.f64 = double(ctx.f11.s64);
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// fcfid f11,f8
	ctx.f11.f64 = double(ctx.f8.s64);
	// extsb r6,r28
	ctx.r6.s64 = r28.s8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfd f1,-200(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// fcfid f5,f1
	ctx.f5.f64 = double(ctx.f1.s64);
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// fcfid f3,f9
	ctx.f3.f64 = double(ctx.f9.s64);
	// fcfid f1,f10
	ctx.f1.f64 = double(ctx.f10.s64);
	// fmuls f9,f7,f13
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// frsp f8,f6
	ctx.f8.f64 = double(float(ctx.f6.f64));
	// frsp f10,f2
	ctx.f10.f64 = double(float(ctx.f2.f64));
	// frsp f7,f5
	ctx.f7.f64 = double(float(ctx.f5.f64));
	// fmuls f6,f4,f13
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// frsp f5,f3
	ctx.f5.f64 = double(float(ctx.f3.f64));
	// frsp f4,f1
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// frsp f3,f11
	ctx.f3.f64 = double(float(ctx.f11.f64));
	// fsubs f1,f12,f9
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fmuls f11,f8,f0
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f2,f10,f0
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fsubs f8,f12,f6
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fmuls f7,f5,f0
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f5,f4,f0
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f4,f3,f0
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f3,f2,f1
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// fmuls f2,f11,f1
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f1,f10,f8
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmadds f11,f7,f9,f3
	ctx.f11.f64 = double(float(std::fma(ctx.f7.f64, ctx.f9.f64, ctx.f3.f64)));
	// fmadds f10,f5,f9,f2
	ctx.f10.f64 = double(float(std::fma(ctx.f5.f64, ctx.f9.f64, ctx.f2.f64)));
	// fmadds f9,f4,f6,f1
	ctx.f9.f64 = double(float(std::fma(ctx.f4.f64, ctx.f6.f64, ctx.f1.f64)));
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r30,4(r7)
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// extsb r31,r31
	r31.s64 = r31.s8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r6,-248(r1)
	REX_STORE_U64(ctx.r1.u32 + -248, ctx.r6.u64);
	// std r31,-288(r1)
	REX_STORE_U64(ctx.r1.u32 + -288, r31.u64);
	// lfd f31,-288(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -288);
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lfd f1,-248(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -248);
	// lbz r31,1(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// fcfid f1,f1
	ctx.f1.f64 = double(ctx.f1.s64);
	// std r9,-264(r1)
	REX_STORE_U64(ctx.r1.u32 + -264, ctx.r9.u64);
	// extsb r9,r31
	ctx.r9.s64 = r31.s8;
	// lbz r30,3(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// fcfid f31,f31
	f31.f64 = double(f31.s64);
	// std r9,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r9.u64);
	// lfd f7,-208(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// lbz r29,2(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r9,r30
	ctx.r9.s64 = r30.s8;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// std r9,-272(r1)
	REX_STORE_U64(ctx.r1.u32 + -272, ctx.r9.u64);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// extsb r31,r29
	r31.s64 = r29.s8;
	// std r6,-320(r1)
	REX_STORE_U64(ctx.r1.u32 + -320, ctx.r6.u64);
	// std r9,-256(r1)
	REX_STORE_U64(ctx.r1.u32 + -256, ctx.r9.u64);
	// lfd f30,-320(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -320);
	// std r31,-240(r1)
	REX_STORE_U64(ctx.r1.u32 + -240, r31.u64);
	// lfd f4,-240(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// frsp f31,f31
	f31.f64 = double(float(f31.f64));
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f9,8(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmuls f31,f31,f0
	f31.f64 = double(float(f31.f64 * ctx.f0.f64));
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfd f5,-272(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -272);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// lfd f3,-256(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -256);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// lfd f3,-264(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -264);
	// fcfid f3,f3
	ctx.f3.f64 = double(ctx.f3.s64);
	// frsp f3,f3
	ctx.f3.f64 = double(float(ctx.f3.f64));
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// frsp f2,f2
	ctx.f2.f64 = double(float(ctx.f2.f64));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// fcfid f30,f30
	f30.f64 = double(f30.s64);
	// fmuls f8,f31,f8
	ctx.f8.f64 = double(float(f31.f64 * ctx.f8.f64));
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// lbz r31,2(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// fmuls f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// lbz r30,0(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// std r9,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r9.u64);
	// frsp f31,f30
	f31.f64 = double(float(f30.f64));
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// fmadds f6,f1,f6,f8
	ctx.f6.f64 = double(float(std::fma(ctx.f1.f64, ctx.f6.f64, ctx.f8.f64)));
	// stfs f6,12(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// extsb r9,r31
	ctx.r9.s64 = r31.s8;
	// std r6,-368(r1)
	REX_STORE_U64(ctx.r1.u32 + -368, ctx.r6.u64);
	// fsubs f29,f12,f3
	f29.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f31,f31,f13
	f31.f64 = double(float(f31.f64 * ctx.f13.f64));
	// fmuls f2,f2,f29
	ctx.f2.f64 = double(float(ctx.f2.f64 * f29.f64));
	// fmuls f7,f7,f29
	ctx.f7.f64 = double(float(ctx.f7.f64 * f29.f64));
	// fmadds f4,f4,f3,f2
	ctx.f4.f64 = double(float(std::fma(ctx.f4.f64, ctx.f3.f64, ctx.f2.f64)));
	// fmadds f3,f5,f3,f7
	ctx.f3.f64 = double(float(std::fma(ctx.f5.f64, ctx.f3.f64, ctx.f7.f64)));
	// fsubs f2,f12,f31
	ctx.f2.f64 = double(float(ctx.f12.f64 - f31.f64));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfd f10,-336(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// extsb r10,r30
	ctx.r10.s64 = r30.s8;
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// lfd f6,-368(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -368);
	// std r9,-352(r1)
	REX_STORE_U64(ctx.r1.u32 + -352, ctx.r9.u64);
	// std r10,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, ctx.r10.u64);
	// lfd f1,-304(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// lfd f7,-352(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -352);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// fcfid f11,f1
	ctx.f11.f64 = double(ctx.f1.s64);
	// stfs f4,16(r3)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// stfs f3,20(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// frsp f1,f8
	ctx.f1.f64 = double(float(ctx.f8.f64));
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f11,f5
	ctx.f11.f64 = double(float(ctx.f5.f64));
	// frsp f10,f4
	ctx.f10.f64 = double(float(ctx.f4.f64));
	// fmuls f8,f1,f0
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f3,f9,f0
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f5,f8,f2
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// fmuls f9,f3,f2
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fmadds f3,f6,f31,f5
	ctx.f3.f64 = double(float(std::fma(ctx.f6.f64, f31.f64, ctx.f5.f64)));
	// stfs f3,28(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fmadds f4,f7,f31,f9
	ctx.f4.f64 = double(float(std::fma(ctx.f7.f64, f31.f64, ctx.f9.f64)));
	// stfs f4,24(r3)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bdnz 0x823b2fb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B2FB0;
loc_823B32B4:
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b55b0
	if (ctx.cr6.eq) goto loc_823B55B0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823B32C4:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ld r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r6,-368(r1)
	REX_STORE_U64(ctx.r1.u32 + -368, ctx.r6.u64);
	// std r4,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r4.u64);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// std r4,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, ctx.r4.u64);
	// lfd f4,-304(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// std r6,-352(r1)
	REX_STORE_U64(ctx.r1.u32 + -352, ctx.r6.u64);
	// lfd f8,-352(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -352);
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// std r4,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r4.u64);
	// lfd f6,-336(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// std r6,-320(r1)
	REX_STORE_U64(ctx.r1.u32 + -320, ctx.r6.u64);
	// fcfid f2,f4
	ctx.f2.f64 = double(ctx.f4.s64);
	// lfd f11,-368(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -368);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfd f1,-320(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -320);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// fcfid f3,f8
	ctx.f3.f64 = double(ctx.f8.s64);
	// frsp f6,f2
	ctx.f6.f64 = double(float(ctx.f2.f64));
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// frsp f11,f5
	ctx.f11.f64 = double(float(ctx.f5.f64));
	// fcfid f10,f1
	ctx.f10.f64 = double(ctx.f1.s64);
	// frsp f8,f3
	ctx.f8.f64 = double(float(ctx.f3.f64));
	// fmuls f2,f6,f0
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// frsp f4,f10
	ctx.f4.f64 = double(float(ctx.f10.f64));
	// fmuls f3,f8,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fsubs f9,f12,f7
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fmuls f11,f4,f0
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f1,f5,f9
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// fmuls f10,f2,f9
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// fmadds f9,f3,f7,f1
	ctx.f9.f64 = double(float(std::fma(ctx.f3.f64, ctx.f7.f64, ctx.f1.f64)));
	// stfs f9,0(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmadds f8,f11,f7,f10
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, ctx.f7.f64, ctx.f10.f64)));
	// stfsu f8,4(r3)
	ea = 4 + ctx.r3.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r3.u32 = ea;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bdnz 0x823b32c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B32C4;
	// lfd f29,-152(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f30,-144(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826a1cdc
	return;
loc_823B339C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823b55b0
	if (ctx.cr6.eq) goto loc_823B55B0;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f11,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,15200(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 15200);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,32280(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32280);
	ctx.f10.f64 = double(temp.f32);
loc_823B33C0:
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// std r6,-368(r1)
	REX_STORE_U64(ctx.r1.u32 + -368, ctx.r6.u64);
	// lfd f13,-368(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -368);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f9,f10
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// blt cr6,0x823b353c
	if (ctx.cr6.lt) goto loc_823B353C;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r6,r9,-4
	ctx.r6.s64 = ctx.r9.s64 + -4;
	// fsubs f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// addi r30,r9,-1
	r30.s64 = ctx.r9.s64 + -1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r6,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r31,r3,r9
	r31.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// addi r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 1;
	// mullw r6,r11,r9
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r11,r31,r5
	ctx.r11.u64 = r31.u64 + ctx.r5.u64;
	// add r31,r6,r5
	r31.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
loc_823B3420:
	// lbz r29,2(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r31,1(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r27,3(r6)
	r27.u64 = REX_LOAD_U8(ctx.r6.u32 + 3);
	// extsb r29,r29
	r29.s64 = r29.s8;
	// lbz r26,-1(r11)
	r26.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// extsb r25,r31
	r25.s64 = r31.s8;
	// lbzu r31,4(r6)
	ea = 4 + ctx.r6.u32;
	r31.u64 = REX_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// extsb r27,r27
	r27.s64 = r27.s8;
	// std r29,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, r29.u64);
	// extsb r29,r26
	r29.s64 = r26.s8;
	// extsb r31,r31
	r31.s64 = r31.s8;
	// std r25,-352(r1)
	REX_STORE_U64(ctx.r1.u32 + -352, r25.u64);
	// lbzx r24,r11,r30
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// std r27,-288(r1)
	REX_STORE_U64(ctx.r1.u32 + -288, r27.u64);
	// lbzx r28,r11,r9
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// std r29,-264(r1)
	REX_STORE_U64(ctx.r1.u32 + -264, r29.u64);
	// std r31,-248(r1)
	REX_STORE_U64(ctx.r1.u32 + -248, r31.u64);
	// extsb r31,r24
	r31.s64 = r24.s8;
	// extsb r28,r28
	r28.s64 = r28.s8;
	// std r31,-256(r1)
	REX_STORE_U64(ctx.r1.u32 + -256, r31.u64);
	// std r28,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, r28.u64);
	// lbz r28,0(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// extsb r29,r28
	r29.s64 = r28.s8;
	// std r29,-320(r1)
	REX_STORE_U64(ctx.r1.u32 + -320, r29.u64);
	// lfd f6,-320(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -320);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lfd f9,-352(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -352);
	// lfd f4,-288(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -288);
	// fcfid f3,f9
	ctx.f3.f64 = double(ctx.f9.s64);
	// lfd f2,-264(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + -264);
	// fcfid f1,f4
	ctx.f1.f64 = double(ctx.f4.s64);
	// lfd f9,-248(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -248);
	// fcfid f6,f2
	ctx.f6.f64 = double(ctx.f2.s64);
	// fcfid f4,f9
	ctx.f4.f64 = double(ctx.f9.s64);
	// lfd f2,-256(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + -256);
	// lfd f7,-304(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// fcfid f9,f2
	ctx.f9.f64 = double(ctx.f2.s64);
	// lfd f8,-336(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// fcfid f2,f8
	ctx.f2.f64 = double(ctx.f8.s64);
	// frsp f8,f5
	ctx.f8.f64 = double(float(ctx.f5.f64));
	// frsp f5,f3
	ctx.f5.f64 = double(float(ctx.f3.f64));
	// frsp f3,f1
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// frsp f1,f6
	ctx.f1.f64 = double(float(ctx.f6.f64));
	// frsp f6,f4
	ctx.f6.f64 = double(float(ctx.f4.f64));
	// frsp f4,f9
	ctx.f4.f64 = double(float(ctx.f9.f64));
	// frsp f9,f7
	ctx.f9.f64 = double(float(ctx.f7.f64));
	// frsp f7,f2
	ctx.f7.f64 = double(float(ctx.f2.f64));
	// fmuls f2,f8,f0
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f8,f5,f0
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f5,f3,f0
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f3,f1,f0
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f1,f6,f0
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f6,f4,f0
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f4,f9,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f9,f7,f0
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f7,f2,f12
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmuls f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f3,f3,f12
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmuls f2,f1,f13
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmadds f1,f4,f13,f7
	ctx.f1.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f7.f64)));
	// stfs f1,8(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmadds f8,f8,f12,f5
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f5.f64)));
	// stfs f8,12(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmadds f7,f6,f13,f3
	ctx.f7.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f3.f64)));
	// stfs f7,4(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmadds f6,f9,f12,f2
	ctx.f6.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f2.f64)));
	// stfs f6,16(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x823b3420
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B3420;
loc_823B353C:
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b35b4
	if (!ctx.cr6.lt) goto loc_823B35B4;
	// subf r6,r3,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r3.u64;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// fsubs f12,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// addi r31,r11,1
	r31.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mullw r6,r31,r9
	ctx.r6.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
loc_823B3568:
	// lbzx r31,r11,r3
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// lbzx r30,r6,r3
	r30.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// extsb r31,r31
	r31.s64 = r31.s8;
	// extsb r30,r30
	r30.s64 = r30.s8;
	// std r31,-272(r1)
	REX_STORE_U64(ctx.r1.u32 + -272, r31.u64);
	// lfd f7,-272(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -272);
	// std r30,-240(r1)
	REX_STORE_U64(ctx.r1.u32 + -240, r30.u64);
	// lfd f9,-240(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// fmuls f2,f4,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmadds f9,f1,f12,f2
	ctx.f9.f64 = double(float(std::fma(ctx.f1.f64, ctx.f12.f64, ctx.f2.f64)));
	// stfsu f9,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823b3568
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B3568;
loc_823B35B4:
	// ld r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// bne 0x823b33c0
	if (!ctx.cr0.eq) goto loc_823B33C0;
	// lfd f29,-152(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f30,-144(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826a1cdc
	return;
loc_823B35DC:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x823b3c30
	if (!ctx.cr6.eq) goto loc_823B3C30;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// clrlwi r6,r3,28
	ctx.r6.u64 = ctx.r3.u32 & 0xF;
	// lfs f0,15504(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15504);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f12,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,32280(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32280);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x823b36b8
	if (ctx.cr6.eq) goto loc_823B36B8;
	// addi r11,r3,15
	ctx.r11.s64 = ctx.r3.s64 + 15;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// subf r9,r3,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r11,r9,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x823b3624
	if (!ctx.cr6.gt) goto loc_823B3624;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_823B3624:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b36b8
	if (ctx.cr6.eq) goto loc_823B36B8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
loc_823B3634:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ld r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r6,-352(r1)
	REX_STORE_U64(ctx.r1.u32 + -352, ctx.r6.u64);
	// lfd f9,-352(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -352);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// lhz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// std r6,-368(r1)
	REX_STORE_U64(ctx.r1.u32 + -368, ctx.r6.u64);
	// std r9,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r9.u64);
	// lfd f6,-336(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lfd f11,-368(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -368);
	// fmuls f1,f3,f13
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f2,f5
	ctx.f2.f64 = double(float(ctx.f5.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fsubs f10,f12,f1
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f9,f4,f1
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmadds f8,f11,f10,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, ctx.f10.f64, ctx.f9.f64)));
	// stfs f8,0(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bdnz 0x823b3634
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B3634;
loc_823B36B8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,14608
	ctx.r6.s64 = ctx.r11.s64 + 14608;
	// addi r11,r10,32288
	ctx.r11.s64 = ctx.r10.s64 + 32288;
	// srawi. r9,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lvx128 v62,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq 0x823b3b8c
	if (ctx.cr0.eq) goto loc_823B3B8C;
	// ld r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,4(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r31,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, r31.u32);
	// lhz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// stw r6,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, ctx.r6.u32);
	// stw r10,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r10.u32);
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r31,4(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r6.u32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// ld r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// lwz r30,0(r7)
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lhz r29,0(r10)
	r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r6,r30,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r30,2(r10)
	r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// stw r31,-364(r1)
	REX_STORE_U32(ctx.r1.u32 + -364, r31.u32);
	// extsh r29,r29
	r29.s64 = r29.s16;
	// add r10,r6,r5
	ctx.r10.u64 = ctx.r6.u64 + ctx.r5.u64;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// lwz r28,0(r7)
	r28.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// extsh r30,r30
	r30.s64 = r30.s16;
	// lwz r27,4(r7)
	r27.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lhzx r6,r6,r5
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// stw r29,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, r29.u32);
	// lhz r31,2(r10)
	r31.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// stw r6,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r6.u32);
	// extsh r31,r31
	r31.s64 = r31.s16;
	// stw r30,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, r30.u32);
	// stw r31,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, r31.u32);
	// stw r27,-356(r1)
	REX_STORE_U32(ctx.r1.u32 + -356, r27.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r6,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r6.u32);
	// stw r11,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r11.u32);
	// beq 0x823b3a34
	if (ctx.cr0.eq) goto loc_823B3A34;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r6,-16
	ctx.r6.s64 = -16;
loc_823B37CC:
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// addi r29,r1,-336
	r29.s64 = ctx.r1.s64 + -336;
	// lwz r31,4(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// addi r9,r1,-368
	ctx.r9.s64 = ctx.r1.s64 + -368;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r30,r1,-352
	r30.s64 = ctx.r1.s64 + -352;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v37,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,-368
	r28.s64 = ctx.r1.s64 + -368;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// vcsxwfp128 v0,v37,15
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v37.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// lvx128 v40,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,-304
	ctx.r9.s64 = ctx.r1.s64 + -304;
	// stw r31,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, r31.u32);
	// addi r31,r1,-336
	r31.s64 = ctx.r1.s64 + -336;
	// lvx128 v38,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,-352
	r30.s64 = ctx.r1.s64 + -352;
	// vcsxwfp128 v60,v38,15
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v38.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// lhz r29,0(r10)
	r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// vcuxwfp128 v39,v40,31
	simde_mm_store_ps(ctx.v39.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v40.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r29,r29
	r29.s64 = r29.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// stw r29,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, r29.u32);
	// stw r10,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r10.u32);
	// stvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v63,v39,v61
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v39.f32), simde_mm_load_ps(ctx.v61.f32)));
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// lwz r31,4(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r31,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, r31.u32);
	// lhz r31,0(r10)
	r31.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// stvx128 v63,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v12,v60,v63
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v13,v62,v63
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// extsh r31,r31
	r31.s64 = r31.s16;
	// stw r31,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, r31.u32);
	// lwz r30,0(r7)
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r29,4(r7)
	r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// vmaddfp v0,v0,v13,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// stw r29,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, r29.u32);
	// lhz r29,2(r10)
	r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r30,0(r7)
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// extsh r29,r29
	r29.s64 = r29.s16;
	// lwz r28,4(r7)
	r28.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r28,-292(r1)
	REX_STORE_U32(ctx.r1.u32 + -292, r28.u32);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// lhz r28,0(r10)
	r28.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lvx128 v36,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r27,2(r10)
	r27.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// vcuxwfp128 v35,v36,31
	simde_mm_store_ps(ctx.v35.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v36.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// extsh r30,r28
	r30.s64 = r28.s16;
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r28,4(r7)
	r28.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// extsh r27,r27
	r27.s64 = r27.s16;
	// stw r30,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, r30.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lhz r30,0(r10)
	r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r31,r9,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// stw r29,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, r29.u32);
	// stw r27,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, r27.u32);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// extsh r27,r10
	r27.s64 = ctx.r10.s16;
	// addi r9,r1,-288
	ctx.r9.s64 = ctx.r1.s64 + -288;
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// stw r27,-276(r1)
	REX_STORE_U32(ctx.r1.u32 + -276, r27.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r29,0(r7)
	r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// add r10,r31,r5
	ctx.r10.u64 = r31.u64 + ctx.r5.u64;
	// lwz r27,4(r7)
	r27.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lvx128 v34,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// rlwinm r9,r29,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r26,2(r10)
	r26.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lhzx r9,r9,r5
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r5.u32);
	// extsh r30,r30
	r30.s64 = r30.s16;
	// lhzx r31,r31,r5
	r31.u64 = REX_LOAD_U16(r31.u32 + ctx.r5.u32);
	// addi r29,r1,-320
	r29.s64 = ctx.r1.s64 + -320;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// stw r30,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, r30.u32);
	// extsh r31,r31
	r31.s64 = r31.s16;
	// vmulfp128 v63,v35,v61
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v61.f32)));
	// stw r9,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, ctx.r9.u32);
	// vcsxwfp128 v60,v34,15
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v34.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r30,r1,-320
	r30.s64 = ctx.r1.s64 + -320;
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// addi r25,r1,-304
	r25.s64 = ctx.r1.s64 + -304;
	// stw r31,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, r31.u32);
	// addi r24,r1,-288
	r24.s64 = ctx.r1.s64 + -288;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwz r31,4(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r28,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, r28.u32);
	// extsh r28,r26
	r28.s64 = r26.s16;
	// stw r10,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r10.u32);
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// stw r28,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, r28.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// stw r27,-364(r1)
	REX_STORE_U32(ctx.r1.u32 + -364, r27.u32);
	// vsubfp128 v13,v62,v63
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v63,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v12,v60,v63
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v60,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r31,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, r31.u32);
	// lvx128 v33,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// vcsxwfp128 v0,v33,15
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v33.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r9,-356(r1)
	REX_STORE_U32(ctx.r1.u32 + -356, ctx.r9.u32);
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lhz r29,0(r10)
	r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r29,r29
	r29.s64 = r29.s16;
	// stw r29,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, r29.u32);
	// stvx128 v0,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r30,2(r10)
	r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// vmaddfp v0,v0,v13,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// add r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lhzx r9,r9,r5
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r5.u32);
	// extsh r30,r30
	r30.s64 = r30.s16;
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// stw r30,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, r30.u32);
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// stw r9,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r9.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r11.u32);
	// stvx128 v0,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bdnz 0x823b37cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B37CC;
loc_823B3A34:
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// addi r6,r1,-304
	ctx.r6.s64 = ctx.r1.s64 + -304;
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// addi r30,r1,-352
	r30.s64 = ctx.r1.s64 + -352;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r31,r1,-368
	r31.s64 = ctx.r1.s64 + -368;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r1,-336
	r29.s64 = ctx.r1.s64 + -336;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r9,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r9.u32);
	// lvx128 v60,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,-288
	r30.s64 = ctx.r1.s64 + -288;
	// lvx128 v32,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,-320
	r31.s64 = ctx.r1.s64 + -320;
	// vcuxwfp128 v63,v32,31
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v32.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// vcsxwfp128 v59,v60,15
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// lvx128 v58,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// vcsxwfp128 v12,v58,15
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// lhz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// li r29,16
	r29.s64 = 16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// stw r9,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r9.u32);
	// stw r10,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r10.u32);
	// vmulfp128 v57,v63,v61
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v61.f32)));
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// stw r9,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r9.u32);
	// vmulfp128 v13,v59,v57
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vsubfp128 v0,v62,v57
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vmaddfp v0,v12,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// lwz r28,4(r7)
	r28.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r28,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, r28.u32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r27,0(r7)
	r27.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r28,2(r10)
	r28.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r9,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r9.u32);
	// extsh r28,r28
	r28.s64 = r28.s16;
	// stw r28,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, r28.u32);
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r28,2(r10)
	r28.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r27,r9
	r27.s64 = ctx.r9.s16;
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r11,-292(r1)
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r11.u32);
	// lvx128 v56,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// vcuxwfp128 v53,v56,31
	simde_mm_store_ps(ctx.v53.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r27,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, r27.u32);
	// vmulfp128 v51,v53,v61
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v61.f32)));
	// add r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lhzx r6,r9,r5
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r5.u32);
	// extsh r9,r28
	ctx.r9.s64 = r28.s16;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// stw r9,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r9.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// stw r6,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r6.u32);
	// lvx128 v52,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v12,v52,15
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// stw r10,-276(r1)
	REX_STORE_U32(ctx.r1.u32 + -276, ctx.r10.u32);
	// lvx128 v55,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v54,v55,15
	simde_mm_store_ps(ctx.v54.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vmulfp128 v13,v54,v51
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v51.f32)));
	// vsubfp128 v0,v62,v51
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v51.f32)));
	// vmaddfp v0,v12,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r3,r29
	ea = (ctx.r3.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
loc_823B3B8C:
	// clrlwi r11,r4,29
	ctx.r11.u64 = ctx.r4.u32 & 0x7;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b55b0
	if (ctx.cr6.eq) goto loc_823B55B0;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823B3BA0:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// ld r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// lwz r4,4(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 + ctx.r9.u64;
	// std r3,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r3.u64);
	// std r4,-368(r1)
	REX_STORE_U64(ctx.r1.u32 + -368, ctx.r4.u64);
	// lfd f11,-368(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -368);
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// frsp f5,f10
	ctx.f5.f64 = double(float(ctx.f10.f64));
	// std r11,-352(r1)
	REX_STORE_U64(ctx.r1.u32 + -352, ctx.r11.u64);
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// std r9,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r9.u64);
	// fmuls f2,f5,f13
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fsubs f10,f12,f2
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f2.f64));
	// lfd f9,-352(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -352);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lfd f7,-336(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// fmuls f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f11,f3,f0
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f9,f1,f2
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// fmadds f8,f11,f10,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, ctx.f10.f64, ctx.f9.f64)));
	// stfsu f8,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823b3ba0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B3BA0;
	// lfd f29,-152(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f30,-144(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826a1cdc
	return;
loc_823B3C30:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x823b405c
	if (!ctx.cr6.eq) goto loc_823B405C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// clrlwi r6,r3,27
	ctx.r6.u64 = ctx.r3.u32 & 0x1F;
	// lfs f0,15504(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15504);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f12,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,32280(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32280);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x823b3d50
	if (ctx.cr6.eq) goto loc_823B3D50;
	// addi r11,r3,31
	ctx.r11.s64 = ctx.r3.s64 + 31;
	// rlwinm r10,r11,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// subf r9,r3,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r11,r9,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x823b3c78
	if (!ctx.cr6.gt) goto loc_823B3C78;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_823B3C78:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b3d50
	if (ctx.cr6.eq) goto loc_823B3D50;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
loc_823B3C88:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r6,-368(r1)
	REX_STORE_U64(ctx.r1.u32 + -368, ctx.r6.u64);
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// lhz r6,6(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// std r6,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r6.u64);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// std r6,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, ctx.r6.u64);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// std r10,-352(r1)
	REX_STORE_U64(ctx.r1.u32 + -352, ctx.r10.u64);
	// lfd f9,-352(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -352);
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// std r11,-320(r1)
	REX_STORE_U64(ctx.r1.u32 + -320, ctx.r11.u64);
	// lfd f11,-368(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -368);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfd f8,-336(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// fcfid f5,f8
	ctx.f5.f64 = double(ctx.f8.s64);
	// lfd f4,-304(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// lfd f3,-320(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -320);
	// fcfid f2,f4
	ctx.f2.f64 = double(ctx.f4.s64);
	// fcfid f1,f3
	ctx.f1.f64 = double(ctx.f3.s64);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// frsp f10,f6
	ctx.f10.f64 = double(float(ctx.f6.f64));
	// frsp f9,f5
	ctx.f9.f64 = double(float(ctx.f5.f64));
	// frsp f8,f2
	ctx.f8.f64 = double(float(ctx.f2.f64));
	// fmuls f11,f7,f13
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// frsp f7,f1
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// fmuls f5,f10,f0
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f4,f9,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f3,f8,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fsubs f6,f12,f11
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f2,f7,f0
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f10,f4,f11
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f1,f5,f6
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmadds f8,f2,f6,f10
	ctx.f8.f64 = double(float(std::fma(ctx.f2.f64, ctx.f6.f64, ctx.f10.f64)));
	// stfs f8,4(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmadds f9,f3,f11,f1
	ctx.f9.f64 = double(float(std::fma(ctx.f3.f64, ctx.f11.f64, ctx.f1.f64)));
	// stfs f9,0(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bdnz 0x823b3c88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B3C88;
loc_823B3D50:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,14608
	ctx.r9.s64 = ctx.r11.s64 + 14608;
	// addi r6,r10,32288
	ctx.r6.s64 = ctx.r10.s64 + 32288;
	// srawi. r11,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lvx128 v61,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq 0x823b3f74
	if (ctx.cr0.eq) goto loc_823B3F74;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r31,16
	r31.s64 = 16;
loc_823B3D78:
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// addi r29,r1,-352
	r29.s64 = ctx.r1.s64 + -352;
	// ld r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// addi r27,r1,-352
	r27.s64 = ctx.r1.s64 + -352;
	// lwz r30,4(r7)
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// addi r9,r1,-336
	ctx.r9.s64 = ctx.r1.s64 + -336;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r6,r1,-368
	ctx.r6.s64 = ctx.r1.s64 + -368;
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r1,-368
	r28.s64 = ctx.r1.s64 + -368;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r30,-336(r1)
	REX_STORE_U32(ctx.r1.u32 + -336, r30.u32);
	// stw r30,-332(r1)
	REX_STORE_U32(ctx.r1.u32 + -332, r30.u32);
	// addi r30,r1,-320
	r30.s64 = ctx.r1.s64 + -320;
	// lhz r26,0(r11)
	r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r25,2(r11)
	r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r26,r26
	r26.s64 = r26.s16;
	// lhz r24,4(r11)
	r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// stw r26,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, r26.u32);
	// extsh r25,r25
	r25.s64 = r25.s16;
	// lhz r11,6(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r24,r24
	r24.s64 = r24.s16;
	// lwz r26,4(r7)
	r26.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r26,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, r26.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,-364(r1)
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r11.u32);
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// stw r26,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, r26.u32);
	// lvx128 v50,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r24,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, r24.u32);
	// vcuxwfp128 v49,v50,31
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v49.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// stw r25,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, r25.u32);
	// vmulfp128 v63,v49,v60
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v60.f32)));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lhz r26,4(r11)
	r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r9,6(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r24,0(r11)
	r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r26,r26
	r26.s64 = r26.s16;
	// lhz r23,2(r11)
	r23.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// extsh r24,r24
	r24.s64 = r24.s16;
	// extsh r23,r23
	r23.s64 = r23.s16;
	// stw r9,-356(r1)
	REX_STORE_U32(ctx.r1.u32 + -356, ctx.r9.u32);
	// stw r24,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, r24.u32);
	// stw r23,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, r23.u32);
	// stw r26,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, r26.u32);
	// lvx128 v48,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v59,v48,15
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// lwz r22,0(r7)
	r22.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r22,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v47,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r25,4(r7)
	r25.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// vcsxwfp128 v0,v47,15
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v47.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// stvx128 v59,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// stw r25,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, r25.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// stw r25,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, r25.u32);
	// lhz r25,2(r11)
	r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// stw r9,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r9.u32);
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// lhz r24,4(r11)
	r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r23,6(r11)
	r23.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stvx128 v0,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,-312(r1)
	REX_STORE_U32(ctx.r1.u32 + -312, ctx.r11.u32);
	// lwz r26,0(r7)
	r26.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,-308(r1)
	REX_STORE_U32(ctx.r1.u32 + -308, ctx.r11.u32);
	// rlwinm r6,r26,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 + ctx.r5.u64;
	// extsh r29,r24
	r29.s64 = r24.s16;
	// lhz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r28,6(r11)
	r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r27,r23
	r27.s64 = r23.s16;
	// stw r29,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, r29.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r29,r28
	r29.s64 = r28.s16;
	// stw r27,-284(r1)
	REX_STORE_U32(ctx.r1.u32 + -284, r27.u32);
	// stw r9,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r9.u32);
	// lvx128 v46,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r29,-276(r1)
	REX_STORE_U32(ctx.r1.u32 + -276, r29.u32);
	// vsubfp128 v13,v61,v63
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32)));
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// vmulfp128 v12,v59,v63
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v63.f32)));
	// lhzx r6,r6,r5
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// extsh r9,r25
	ctx.r9.s64 = r25.s16;
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// vcuxwfp128 v45,v46,31
	simde_mm_store_ps(ctx.v45.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// addi r30,r1,-304
	r30.s64 = ctx.r1.s64 + -304;
	// stw r11,-292(r1)
	REX_STORE_U32(ctx.r1.u32 + -292, ctx.r11.u32);
	// addi r6,r1,-304
	ctx.r6.s64 = ctx.r1.s64 + -304;
	// stw r9,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r9.u32);
	// stw r10,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, ctx.r10.u32);
	// addi r9,r1,-288
	ctx.r9.s64 = ctx.r1.s64 + -288;
	// addi r11,r1,-336
	ctx.r11.s64 = ctx.r1.s64 + -336;
	// addi r10,r1,-320
	ctx.r10.s64 = ctx.r1.s64 + -320;
	// vmaddfp v0,v0,v13,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-288
	ctx.r11.s64 = ctx.r1.s64 + -288;
	// vmulfp128 v62,v45,v60
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v60.f32)));
	// lvx128 v44,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v63,v44,15
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v44.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v43,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v0,v43,15
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v43.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// stvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v13,v61,v62
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v12,v63,v62
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// stvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v0,v13,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bdnz 0x823b3d78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B3D78;
loc_823B3F74:
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b55b0
	if (ctx.cr6.eq) goto loc_823B55B0;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823B3F88:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r4,4(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 + ctx.r9.u64;
	// std r4,-368(r1)
	REX_STORE_U64(ctx.r1.u32 + -368, ctx.r4.u64);
	// std r3,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r3.u64);
	// lhz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r9,6(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// std r4,-352(r1)
	REX_STORE_U64(ctx.r1.u32 + -352, ctx.r4.u64);
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// std r4,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, ctx.r4.u64);
	// std r3,-320(r1)
	REX_STORE_U64(ctx.r1.u32 + -320, ctx.r3.u64);
	// lfd f3,-320(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -320);
	// std r11,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r11.u64);
	// lfd f4,-304(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// fcfid f2,f4
	ctx.f2.f64 = double(ctx.f4.s64);
	// lfd f11,-368(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -368);
	// fcfid f1,f3
	ctx.f1.f64 = double(ctx.f3.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfd f9,-352(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -352);
	// lfd f8,-336(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// fcfid f5,f8
	ctx.f5.f64 = double(ctx.f8.s64);
	// frsp f8,f2
	ctx.f8.f64 = double(float(ctx.f2.f64));
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// frsp f11,f7
	ctx.f11.f64 = double(float(ctx.f7.f64));
	// frsp f9,f5
	ctx.f9.f64 = double(float(ctx.f5.f64));
	// frsp f7,f1
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// fmuls f3,f8,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f10,f6,f13
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f4,f9,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f2,f7,f0
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fsubs f5,f12,f10
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmuls f11,f4,f10
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f1,f6,f5
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmadds f9,f2,f5,f11
	ctx.f9.f64 = double(float(std::fma(ctx.f2.f64, ctx.f5.f64, ctx.f11.f64)));
	// fmadds f10,f3,f10,f1
	ctx.f10.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, ctx.f1.f64)));
	// stfs f10,4(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfsu f9,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823b3f88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B3F88;
	// lfd f29,-152(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f30,-144(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826a1cdc
	return;
loc_823B405C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823b55b0
	if (ctx.cr6.eq) goto loc_823B55B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// lfs f0,15504(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15504);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32280(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 32280);
	ctx.f10.f64 = double(temp.f32);
loc_823B4080:
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// std r10,-368(r1)
	REX_STORE_U64(ctx.r1.u32 + -368, ctx.r10.u64);
	// lfd f13,-368(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -368);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f9,f10
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// blt cr6,0x823b41fc
	if (ctx.cr6.lt) goto loc_823B41FC;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// fsubs f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mullw r31,r11,r9
	r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r10,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r10,r6,r9
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r31,1,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r31,r31,r5
	r31.u64 = r31.u64 + ctx.r5.u64;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r11,r31,-2
	ctx.r11.s64 = r31.s64 + -2;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
loc_823B40E4:
	// lhz r28,4(r11)
	r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r30,6(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r29,2(r11)
	r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r28,r28
	r28.s64 = r28.s16;
	// lhzu r31,8(r11)
	ea = 8 + ctx.r11.u32;
	r31.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r30,r30
	r30.s64 = r30.s16;
	// extsh r29,r29
	r29.s64 = r29.s16;
	// std r28,-352(r1)
	REX_STORE_U64(ctx.r1.u32 + -352, r28.u64);
	// extsh r24,r31
	r24.s64 = r31.s16;
	// lhz r27,2(r10)
	r27.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// std r30,-320(r1)
	REX_STORE_U64(ctx.r1.u32 + -320, r30.u64);
	// lhz r26,4(r10)
	r26.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r25,6(r10)
	r25.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// std r29,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, r29.u64);
	// extsh r29,r27
	r29.s64 = r27.s16;
	// std r24,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, r24.u64);
	// extsh r30,r26
	r30.s64 = r26.s16;
	// lhzu r31,8(r10)
	ea = 8 + ctx.r10.u32;
	r31.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// extsh r28,r25
	r28.s64 = r25.s16;
	// std r29,-288(r1)
	REX_STORE_U64(ctx.r1.u32 + -288, r29.u64);
	// lfd f6,-304(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// extsh r31,r31
	r31.s64 = r31.s16;
	// std r30,-264(r1)
	REX_STORE_U64(ctx.r1.u32 + -264, r30.u64);
	// std r28,-248(r1)
	REX_STORE_U64(ctx.r1.u32 + -248, r28.u64);
	// fcfid f3,f6
	ctx.f3.f64 = double(ctx.f6.s64);
	// std r31,-256(r1)
	REX_STORE_U64(ctx.r1.u32 + -256, r31.u64);
	// lfd f9,-352(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -352);
	// lfd f4,-320(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -320);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// lfd f8,-336(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// fcfid f2,f4
	ctx.f2.f64 = double(ctx.f4.s64);
	// fcfid f5,f8
	ctx.f5.f64 = double(ctx.f8.s64);
	// lfd f1,-288(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -288);
	// lfd f9,-264(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -264);
	// fcfid f8,f1
	ctx.f8.f64 = double(ctx.f1.s64);
	// lfd f6,-248(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -248);
	// fcfid f4,f9
	ctx.f4.f64 = double(ctx.f9.s64);
	// fcfid f9,f6
	ctx.f9.f64 = double(ctx.f6.s64);
	// frsp f3,f3
	ctx.f3.f64 = double(float(ctx.f3.f64));
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// lfd f1,-256(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -256);
	// fcfid f6,f1
	ctx.f6.f64 = double(ctx.f1.s64);
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
	// frsp f7,f2
	ctx.f7.f64 = double(float(ctx.f2.f64));
	// frsp f2,f5
	ctx.f2.f64 = double(float(ctx.f5.f64));
	// frsp f5,f4
	ctx.f5.f64 = double(float(ctx.f4.f64));
	// frsp f4,f9
	ctx.f4.f64 = double(float(ctx.f9.f64));
	// frsp f9,f6
	ctx.f9.f64 = double(float(ctx.f6.f64));
	// fmuls f6,f1,f0
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f1,f7,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f7,f3,f0
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f3,f2,f0
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f2,f8,f0
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f8,f5,f0
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f5,f4,f0
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f4,f9,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f9,f6,f12
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f6,f1,f12
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmuls f1,f7,f12
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f7,f3,f12
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmadds f3,f8,f13,f9
	ctx.f3.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfs f3,8(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmadds f9,f5,f13,f6
	ctx.f9.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f6.f64)));
	// stfs f9,12(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmadds f8,f2,f13,f1
	ctx.f8.f64 = double(float(std::fma(ctx.f2.f64, ctx.f13.f64, ctx.f1.f64)));
	// stfs f8,4(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmadds f7,f4,f13,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f7.f64)));
	// stfs f7,16(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bdnz 0x823b40e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B40E4;
loc_823B41FC:
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b4288
	if (!ctx.cr6.lt) goto loc_823B4288;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r31,r6,r9
	r31.u64 = ctx.r9.u64 - ctx.r6.u64;
	// fsubs f12,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// mullw r11,r30,r9
	ctx.r11.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r6,r10,r5
	ctx.r6.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// addi r11,r6,-2
	ctx.r11.s64 = ctx.r6.s64 + -2;
loc_823B4240:
	// lhzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	r31.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// lhzu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// std r31,-272(r1)
	REX_STORE_U64(ctx.r1.u32 + -272, r31.u64);
	// std r6,-240(r1)
	REX_STORE_U64(ctx.r1.u32 + -240, ctx.r6.u64);
	// lfd f9,-240(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lfd f7,-272(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -272);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fmuls f1,f3,f12
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmadds f9,f2,f13,f1
	ctx.f9.f64 = double(float(std::fma(ctx.f2.f64, ctx.f13.f64, ctx.f1.f64)));
	// stfsu f9,4(r3)
	ea = 4 + ctx.r3.u32;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r3.u32 = ea;
	// bdnz 0x823b4240
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B4240;
loc_823B4288:
	// ld r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// bne 0x823b4080
	if (!ctx.cr0.eq) goto loc_823B4080;
	// lfd f29,-152(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f30,-144(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826a1cdc
	return;
loc_823B42B0:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x823b43b4
	if (!ctx.cr6.eq) goto loc_823B43B4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823b55b0
	if (ctx.cr6.eq) goto loc_823B55B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// lfs f0,22436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 22436);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,3704(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,32280(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 32280);
	ctx.f13.f64 = double(temp.f32);
loc_823B42DC:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// ld r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ld r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// lwz r31,4(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// std r3,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r3.u64);
	// std r31,-368(r1)
	REX_STORE_U64(ctx.r1.u32 + -368, r31.u64);
	// lbz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,5(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r3,1(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r31,4(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 | ctx.r3.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// or r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 | r31.u64;
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r3,r3,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r6,r6,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 | ctx.r9.u64;
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// rlwinm r9,r3,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r6,r11,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r3,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 8;
	// srawi r11,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 8;
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// std r9,-352(r1)
	REX_STORE_U64(ctx.r1.u32 + -352, ctx.r9.u64);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// std r6,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r6.u64);
	// lfd f11,-368(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -368);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfd f7,-352(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -352);
	// lfd f6,-336(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// frsp f2,f5
	ctx.f2.f64 = double(float(ctx.f5.f64));
	// frsp f1,f4
	ctx.f1.f64 = double(float(ctx.f4.f64));
	// fsubs f3,f12,f8
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fmuls f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f9,f10,f8
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmadds f8,f11,f3,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, ctx.f3.f64, ctx.f9.f64)));
	// stfsu f8,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bne 0x823b42dc
	if (!ctx.cr0.eq) goto loc_823B42DC;
	// lfd f29,-152(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f30,-144(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826a1cdc
	return;
loc_823B43B4:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823b55b0
	if (ctx.cr6.eq) goto loc_823B55B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// lfs f0,22436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 22436);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32280(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 32280);
	ctx.f10.f64 = double(temp.f32);
loc_823B43D8:
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// std r10,-368(r1)
	REX_STORE_U64(ctx.r1.u32 + -368, ctx.r10.u64);
	// lfd f13,-368(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -368);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f9,f10
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// blt cr6,0x823b463c
	if (ctx.cr6.lt) goto loc_823B463C;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r31,r9,-4
	r31.s64 = ctx.r9.s64 + -4;
	// fsubs f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// mullw r11,r6,r9
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r31,30,2,31
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r30,r10,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r6,r31,1
	ctx.r6.s64 = r31.s64 + 1;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r31,r10,r5
	r31.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
loc_823B4444:
	// lbz r30,3(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r31,2(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r29,2(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// rlwimi r31,r30,8,16,23
	r31.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFF00) | (r31.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r30,3(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r28,1(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// clrlwi r31,r31,16
	r31.u64 = r31.u32 & 0xFFFF;
	// lbz r26,6(r11)
	r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// rlwimi r29,r30,8,16,23
	r29.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFF00) | (r29.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r27,5(r11)
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwimi r28,r31,8,0,23
	r28.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0xFFFFFF00) | (r28.u64 & 0xFFFFFFFF000000FF);
	// lbz r31,6(r10)
	r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r30,5(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// rlwimi r27,r26,8,16,23
	r27.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 8) & 0xFF00) | (r27.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r26,1(r10)
	r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r28,r28,8,0,23
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 8) & 0xFFFFFF00;
	// rlwimi r30,r31,8,16,23
	r30.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0xFF00) | (r30.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r31,4(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi r29,r29,16
	r29.u64 = r29.u32 & 0xFFFF;
	// lbz r25,4(r10)
	r25.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// clrlwi r27,r27,16
	r27.u64 = r27.u32 & 0xFFFF;
	// lbz r24,8(r11)
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// clrlwi r30,r30,16
	r30.u64 = r30.u32 & 0xFFFF;
	// lbz r23,9(r11)
	r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// srawi r28,r28,8
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0xFF) != 0);
	r28.s64 = r28.s32 >> 8;
	// lbz r22,8(r10)
	r22.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// rlwimi r26,r29,8,0,23
	r26.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xFFFFFF00) | (r26.u64 & 0xFFFFFFFF000000FF);
	// lbz r29,9(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 9);
	// rlwimi r31,r27,8,0,23
	r31.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 8) & 0xFFFFFF00) | (r31.u64 & 0xFFFFFFFF000000FF);
	// lbz r27,7(r11)
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// rlwimi r25,r30,8,0,23
	r25.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00) | (r25.u64 & 0xFFFFFFFF000000FF);
	// lbz r21,11(r11)
	r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// extsw r28,r28
	r28.s64 = r28.s32;
	// lbz r19,10(r11)
	r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// rlwinm r30,r26,8,0,23
	r30.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r26,11(r10)
	r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 11);
	// rlwinm r31,r31,8,0,23
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0xFFFFFF00;
	// std r28,-352(r1)
	REX_STORE_U64(ctx.r1.u32 + -352, r28.u64);
	// srawi r30,r30,8
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFF) != 0);
	r30.s64 = r30.s32 >> 8;
	// lbz r20,7(r10)
	r20.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// srawi r28,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	r28.s64 = r31.s32 >> 8;
	// lbzu r31,12(r11)
	ea = 12 + ctx.r11.u32;
	r31.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwinm r25,r25,8,0,23
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r18,10(r10)
	r18.u64 = REX_LOAD_U8(ctx.r10.u32 + 10);
	// extsw r28,r28
	r28.s64 = r28.s32;
	// srawi r25,r25,8
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0xFF) != 0);
	r25.s64 = r25.s32 >> 8;
	// std r28,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, r28.u64);
	// lfd f8,-336(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// extsw r25,r25
	r25.s64 = r25.s32;
	// extsw r17,r30
	r17.s64 = r30.s32;
	// lbzu r30,12(r10)
	ea = 12 + ctx.r10.u32;
	r30.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// std r25,-320(r1)
	REX_STORE_U64(ctx.r1.u32 + -320, r25.u64);
	// rlwimi r24,r23,8,16,23
	r24.u64 = (__builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 8) & 0xFF00) | (r24.u64 & 0xFFFFFFFFFFFF00FF);
	// std r17,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, r17.u64);
	// lfd f6,-304(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// fcfid f3,f6
	ctx.f3.f64 = double(ctx.f6.s64);
	// clrlwi r28,r24,16
	r28.u64 = r24.u32 & 0xFFFF;
	// lfd f4,-320(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -320);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// fcfid f2,f4
	ctx.f2.f64 = double(ctx.f4.s64);
	// lfd f9,-352(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -352);
	// fcfid f5,f9
	ctx.f5.f64 = double(ctx.f9.s64);
	// rlwimi r22,r29,8,16,23
	r22.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xFF00) | (r22.u64 & 0xFFFFFFFFFFFF00FF);
	// frsp f8,f3
	ctx.f8.f64 = double(float(ctx.f3.f64));
	// rlwimi r21,r31,8,16,23
	r21.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0xFF00) | (r21.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r27,r28,8,0,23
	r27.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 8) & 0xFFFFFF00) | (r27.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r26,r30,8,16,23
	r26.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFF00) | (r26.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r31,r22,16
	r31.u64 = r22.u32 & 0xFFFF;
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
	// frsp f7,f2
	ctx.f7.f64 = double(float(ctx.f2.f64));
	// frsp f9,f5
	ctx.f9.f64 = double(float(ctx.f5.f64));
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f6,f1,f0
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f2,f4,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f1,f3,f13
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f9,f5,f12,f2
	ctx.f9.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f2.f64)));
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmadds f8,f6,f12,f1
	ctx.f8.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f1.f64)));
	// stfs f8,8(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// clrlwi r30,r21,16
	r30.u64 = r21.u32 & 0xFFFF;
	// clrlwi r29,r26,16
	r29.u64 = r26.u32 & 0xFFFF;
	// rlwimi r20,r31,8,0,23
	r20.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0xFFFFFF00) | (r20.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r19,r30,8,0,23
	r19.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00) | (r19.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r18,r29,8,0,23
	r18.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xFFFFFF00) | (r18.u64 & 0xFFFFFFFF000000FF);
	// rlwinm r31,r27,8,0,23
	r31.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r30,r20,8,0,23
	r30.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r29,r19,8,0,23
	r29.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r31,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	r31.s64 = r31.s32 >> 8;
	// rlwinm r28,r18,8,0,23
	r28.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r30,r30,8
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFF) != 0);
	r30.s64 = r30.s32 >> 8;
	// srawi r29,r29,8
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xFF) != 0);
	r29.s64 = r29.s32 >> 8;
	// srawi r28,r28,8
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0xFF) != 0);
	r28.s64 = r28.s32 >> 8;
	// extsw r30,r30
	r30.s64 = r30.s32;
	// extsw r28,r28
	r28.s64 = r28.s32;
	// std r30,-288(r1)
	REX_STORE_U64(ctx.r1.u32 + -288, r30.u64);
	// extsw r30,r29
	r30.s64 = r29.s32;
	// std r28,-264(r1)
	REX_STORE_U64(ctx.r1.u32 + -264, r28.u64);
	// extsw r31,r31
	r31.s64 = r31.s32;
	// std r30,-256(r1)
	REX_STORE_U64(ctx.r1.u32 + -256, r30.u64);
	// std r31,-248(r1)
	REX_STORE_U64(ctx.r1.u32 + -248, r31.u64);
	// lfd f3,-248(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -248);
	// fcfid f1,f3
	ctx.f1.f64 = double(ctx.f3.s64);
	// lfd f7,-288(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -288);
	// lfd f6,-264(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -264);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// lfd f2,-256(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + -256);
	// fcfid f9,f2
	ctx.f9.f64 = double(ctx.f2.s64);
	// frsp f6,f1
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// frsp f8,f5
	ctx.f8.f64 = double(float(ctx.f5.f64));
	// frsp f7,f4
	ctx.f7.f64 = double(float(ctx.f4.f64));
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// fmuls f2,f6,f0
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f9,f4,f13
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f8,f3,f13
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f7,f2,f12,f9
	ctx.f7.f64 = double(float(std::fma(ctx.f2.f64, ctx.f12.f64, ctx.f9.f64)));
	// stfs f7,12(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmadds f6,f1,f12,f8
	ctx.f6.f64 = double(float(std::fma(ctx.f1.f64, ctx.f12.f64, ctx.f8.f64)));
	// stfs f6,16(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bdnz 0x823b4444
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B4444;
loc_823B463C:
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b4708
	if (!ctx.cr6.lt) goto loc_823B4708;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r31,r6,r9
	r31.u64 = ctx.r9.u64 - ctx.r6.u64;
	// fsubs f12,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// mullw r11,r30,r9
	ctx.r11.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r10,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r6,r10,r5
	ctx.r6.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
loc_823B4688:
	// lbz r30,2(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r29,1(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r28,2(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r27,1(r10)
	r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbzu r6,3(r11)
	ea = 3 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzu r31,3(r10)
	ea = 3 + ctx.r10.u32;
	r31.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// rlwimi r30,r6,8,16,23
	r30.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF00) | (r30.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r28,r31,8,16,23
	r28.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0xFF00) | (r28.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r6,r30,16
	ctx.r6.u64 = r30.u32 & 0xFFFF;
	// clrlwi r31,r28,16
	r31.u64 = r28.u32 & 0xFFFF;
	// rlwimi r29,r6,8,0,23
	r29.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00) | (r29.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r27,r31,8,0,23
	r27.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0xFFFFFF00) | (r27.u64 & 0xFFFFFFFF000000FF);
	// rlwinm r6,r29,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r31,r27,8,0,23
	r31.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r6,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 8;
	// srawi r31,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	r31.s64 = r31.s32 >> 8;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// extsw r31,r31
	r31.s64 = r31.s32;
	// std r6,-240(r1)
	REX_STORE_U64(ctx.r1.u32 + -240, ctx.r6.u64);
	// std r31,-272(r1)
	REX_STORE_U64(ctx.r1.u32 + -272, r31.u64);
	// lfd f9,-240(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// lfd f8,-272(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -272);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f1,f2,f13
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmadds f9,f3,f12,f1
	ctx.f9.f64 = double(float(std::fma(ctx.f3.f64, ctx.f12.f64, ctx.f1.f64)));
	// stfsu f9,4(r3)
	ea = 4 + ctx.r3.u32;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r3.u32 = ea;
	// bdnz 0x823b4688
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B4688;
loc_823B4708:
	// ld r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// bne 0x823b43d8
	if (!ctx.cr0.eq) goto loc_823B43D8;
	// lfd f29,-152(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f30,-144(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826a1cdc
	return;
loc_823B4730:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x823b49f0
	if (!ctx.cr6.eq) goto loc_823B49F0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// srawi. r11,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f0,22432(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 22432);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,3704(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,32280(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 32280);
	ctx.f13.f64 = double(temp.f32);
	// beq 0x823b494c
	if (ctx.cr0.eq) goto loc_823B494C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823B475C:
	// ld r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// lwz r31,4(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// std r31,-352(r1)
	REX_STORE_U64(ctx.r1.u32 + -352, r31.u64);
	// lfd f9,-352(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -352);
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// frsp f9,f6
	ctx.f9.f64 = double(float(ctx.f6.f64));
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r31,4(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,0(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsw r31,r31
	r31.s64 = r31.s32;
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// std r6,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r6.u64);
	// extsw r6,r30
	ctx.r6.s64 = r30.s32;
	// std r31,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, r31.u64);
	// std r6,-320(r1)
	REX_STORE_U64(ctx.r1.u32 + -320, ctx.r6.u64);
	// lwzx r9,r9,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// std r9,-288(r1)
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.r9.u64);
	// std r10,-368(r1)
	REX_STORE_U64(ctx.r1.u32 + -368, ctx.r10.u64);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f7,-304(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// fcfid f4,f7
	ctx.f4.f64 = double(ctx.f7.s64);
	// lfd f11,-368(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -368);
	// lfd f8,-336(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfd f3,-320(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -320);
	// fcfid f5,f8
	ctx.f5.f64 = double(ctx.f8.s64);
	// fcfid f11,f3
	ctx.f11.f64 = double(ctx.f3.s64);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// std r6,-264(r1)
	REX_STORE_U64(ctx.r1.u32 + -264, ctx.r6.u64);
	// lfd f1,-288(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -288);
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// fmuls f3,f9,f13
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r9,r6
	ctx.r9.s64 = ctx.r6.s32;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r9,-248(r1)
	REX_STORE_U64(ctx.r1.u32 + -248, ctx.r9.u64);
	// frsp f7,f4
	ctx.f7.f64 = double(float(ctx.f4.f64));
	// frsp f2,f10
	ctx.f2.f64 = double(float(ctx.f10.f64));
	// frsp f8,f5
	ctx.f8.f64 = double(float(ctx.f5.f64));
	// frsp f5,f11
	ctx.f5.f64 = double(float(ctx.f11.f64));
	// fcfid f10,f1
	ctx.f10.f64 = double(ctx.f1.s64);
	// lfd f1,-264(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -264);
	// fmuls f11,f7,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfd f7,-248(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -248);
	// fmuls f6,f2,f0
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f2,f8,f13
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f9,f5,f0
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// frsp f4,f10
	ctx.f4.f64 = double(float(ctx.f10.f64));
	// fcfid f10,f1
	ctx.f10.f64 = double(ctx.f1.s64);
	// fmuls f8,f4,f0
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fcfid f4,f7
	ctx.f4.f64 = double(ctx.f7.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f7,f11,f3
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fsubs f5,f12,f3
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// fsubs f1,f12,f2
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f2.f64));
	// fmuls f6,f6,f2
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// fmuls f3,f10,f13
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmadds f2,f9,f5,f7
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f5.f64, ctx.f7.f64)));
	// stfs f2,0(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmadds f1,f8,f1,f6
	ctx.f1.f64 = double(float(std::fma(ctx.f8.f64, ctx.f1.f64, ctx.f6.f64)));
	// fmuls f11,f4,f0
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fsubs f10,f12,f3
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r6,-256(r1)
	REX_STORE_U64(ctx.r1.u32 + -256, ctx.r6.u64);
	// stfs f1,4(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// lfd f9,-256(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -256);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// std r6,-240(r1)
	REX_STORE_U64(ctx.r1.u32 + -240, ctx.r6.u64);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// std r11,-272(r1)
	REX_STORE_U64(ctx.r1.u32 + -272, ctx.r11.u64);
	// std r10,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r10.u64);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfd f5,-240(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// fmuls f3,f6,f3
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// lfd f2,-272(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + -272);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// lfd f9,-208(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f4
	ctx.f7.f64 = double(float(ctx.f4.f64));
	// fmadds f6,f11,f10,f3
	ctx.f6.f64 = double(float(std::fma(ctx.f11.f64, ctx.f10.f64, ctx.f3.f64)));
	// stfs f6,8(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// frsp f5,f1
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// fmuls f3,f7,f13
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fsubs f11,f12,f3
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// fmuls f10,f2,f3
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// fmadds f9,f1,f11,f10
	ctx.f9.f64 = double(float(std::fma(ctx.f1.f64, ctx.f11.f64, ctx.f10.f64)));
	// stfs f9,12(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bdnz 0x823b475c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B475C;
loc_823B494C:
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b55b0
	if (ctx.cr6.eq) goto loc_823B55B0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
loc_823B4960:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r4,4(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 + ctx.r9.u64;
	// std r4,-368(r1)
	REX_STORE_U64(ctx.r1.u32 + -368, ctx.r4.u64);
	// std r3,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r3.u64);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// std r4,-352(r1)
	REX_STORE_U64(ctx.r1.u32 + -352, ctx.r4.u64);
	// std r3,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r3.u64);
	// lfd f11,-368(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -368);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfd f9,-352(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -352);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lfd f7,-336(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f10
	ctx.f5.f64 = double(float(ctx.f10.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// fmuls f2,f5,f13
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f11,f3,f0
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fsubs f10,f12,f2
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f2.f64));
	// fmuls f9,f1,f2
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// fmadds f8,f11,f10,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, ctx.f10.f64, ctx.f9.f64)));
	// stfsu f8,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823b4960
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B4960;
	// lfd f29,-152(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f30,-144(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826a1cdc
	return;
loc_823B49F0:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823b55b0
	if (ctx.cr6.eq) goto loc_823B55B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// lfs f0,22432(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 22432);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32280(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 32280);
	ctx.f10.f64 = double(temp.f32);
loc_823B4A14:
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// std r10,-368(r1)
	REX_STORE_U64(ctx.r1.u32 + -368, ctx.r10.u64);
	// lfd f13,-368(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -368);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f9,f10
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// blt cr6,0x823b4b90
	if (ctx.cr6.lt) goto loc_823B4B90;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// fsubs f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mullw r31,r11,r9
	r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r10,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r10,r6,r9
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r31,r31,r5
	r31.u64 = r31.u64 + ctx.r5.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
loc_823B4A78:
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r28,r31
	r28.s64 = r31.s32;
	// lwz r29,12(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwzu r31,16(r11)
	ea = 16 + ctx.r11.u32;
	r31.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// extsw r30,r30
	r30.s64 = r30.s32;
	// extsw r29,r29
	r29.s64 = r29.s32;
	// std r28,-352(r1)
	REX_STORE_U64(ctx.r1.u32 + -352, r28.u64);
	// extsw r31,r31
	r31.s64 = r31.s32;
	// std r30,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, r30.u64);
	// std r29,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, r29.u64);
	// std r31,-320(r1)
	REX_STORE_U64(ctx.r1.u32 + -320, r31.u64);
	// lwz r31,4(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r30,8(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r28,r31
	r28.s64 = r31.s32;
	// lwz r29,12(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// extsw r30,r30
	r30.s64 = r30.s32;
	// lwzu r31,16(r10)
	ea = 16 + ctx.r10.u32;
	r31.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// std r28,-288(r1)
	REX_STORE_U64(ctx.r1.u32 + -288, r28.u64);
	// extsw r29,r29
	r29.s64 = r29.s32;
	// std r30,-264(r1)
	REX_STORE_U64(ctx.r1.u32 + -264, r30.u64);
	// extsw r31,r31
	r31.s64 = r31.s32;
	// std r29,-248(r1)
	REX_STORE_U64(ctx.r1.u32 + -248, r29.u64);
	// std r31,-256(r1)
	REX_STORE_U64(ctx.r1.u32 + -256, r31.u64);
	// lfd f9,-352(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -352);
	// lfd f8,-336(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// lfd f6,-304(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// fcfid f5,f8
	ctx.f5.f64 = double(ctx.f8.s64);
	// lfd f4,-320(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -320);
	// fcfid f3,f6
	ctx.f3.f64 = double(ctx.f6.s64);
	// fcfid f2,f4
	ctx.f2.f64 = double(ctx.f4.s64);
	// lfd f1,-288(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -288);
	// lfd f9,-264(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -264);
	// fcfid f8,f1
	ctx.f8.f64 = double(ctx.f1.s64);
	// fcfid f4,f9
	ctx.f4.f64 = double(ctx.f9.s64);
	// lfd f6,-248(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -248);
	// frsp f9,f7
	ctx.f9.f64 = double(float(ctx.f7.f64));
	// lfd f1,-256(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -256);
	// frsp f7,f5
	ctx.f7.f64 = double(float(ctx.f5.f64));
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// frsp f5,f3
	ctx.f5.f64 = double(float(ctx.f3.f64));
	// fcfid f3,f1
	ctx.f3.f64 = double(ctx.f1.s64);
	// frsp f2,f2
	ctx.f2.f64 = double(float(ctx.f2.f64));
	// frsp f1,f8
	ctx.f1.f64 = double(float(ctx.f8.f64));
	// frsp f8,f4
	ctx.f8.f64 = double(float(ctx.f4.f64));
	// fmuls f4,f9,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f9,f7,f0
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// frsp f7,f6
	ctx.f7.f64 = double(float(ctx.f6.f64));
	// fmuls f6,f5,f0
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// frsp f5,f3
	ctx.f5.f64 = double(float(ctx.f3.f64));
	// fmuls f3,f2,f0
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f8,f4,f12
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmuls f4,f9,f12
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f9,f7,f0
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f7,f6,f12
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f6,f5,f0
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f5,f3,f12
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmadds f3,f2,f13,f8
	ctx.f3.f64 = double(float(std::fma(ctx.f2.f64, ctx.f13.f64, ctx.f8.f64)));
	// stfs f3,4(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmadds f2,f1,f13,f4
	ctx.f2.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, ctx.f4.f64)));
	// stfs f2,8(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmadds f1,f9,f13,f7
	ctx.f1.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f7.f64)));
	// stfs f1,12(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmadds f9,f6,f13,f5
	ctx.f9.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f5.f64)));
	// stfs f9,16(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bdnz 0x823b4a78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B4A78;
loc_823B4B90:
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b4c1c
	if (!ctx.cr6.lt) goto loc_823B4C1C;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf r31,r6,r9
	r31.u64 = ctx.r9.u64 - ctx.r6.u64;
	// fsubs f12,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// mullw r11,r30,r9
	ctx.r11.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r6,r10,r5
	ctx.r6.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
loc_823B4BD4:
	// lwzu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	r31.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// extsw r31,r31
	r31.s64 = r31.s32;
	// std r6,-272(r1)
	REX_STORE_U64(ctx.r1.u32 + -272, ctx.r6.u64);
	// std r31,-240(r1)
	REX_STORE_U64(ctx.r1.u32 + -240, r31.u64);
	// lfd f7,-272(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -272);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// lfd f9,-240(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f1,f2,f12
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmadds f9,f4,f13,f1
	ctx.f9.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f1.f64)));
	// stfsu f9,4(r3)
	ea = 4 + ctx.r3.u32;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r3.u32 = ea;
	// bdnz 0x823b4bd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B4BD4;
loc_823B4C1C:
	// ld r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// bne 0x823b4a14
	if (!ctx.cr0.eq) goto loc_823B4A14;
	// lfd f29,-152(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f30,-144(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826a1cdc
	return;
loc_823B4C44:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x823b5170
	if (!ctx.cr6.eq) goto loc_823B5170;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi r9,r3,28
	ctx.r9.u64 = ctx.r3.u32 & 0xF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f13,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32280(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32280);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x823b4ce8
	if (ctx.cr6.eq) goto loc_823B4CE8;
	// addi r11,r3,15
	ctx.r11.s64 = ctx.r3.s64 + 15;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// subf r9,r3,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r11,r9,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x823b4c84
	if (!ctx.cr6.gt) goto loc_823B4C84;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_823B4C84:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b4ce8
	if (ctx.cr6.eq) goto loc_823B4CE8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
loc_823B4C94:
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// ld r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r6,-368(r1)
	REX_STORE_U64(ctx.r1.u32 + -368, ctx.r6.u64);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfd f10,-368(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -368);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fsubs f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmadds f4,f6,f11,f5
	ctx.f4.f64 = double(float(std::fma(ctx.f6.f64, ctx.f11.f64, ctx.f5.f64)));
	// stfs f4,0(r3)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bdnz 0x823b4c94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B4C94;
loc_823B4CE8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,14608
	ctx.r6.s64 = ctx.r11.s64 + 14608;
	// addi r11,r10,32288
	ctx.r11.s64 = ctx.r10.s64 + 32288;
	// srawi. r9,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lvx128 v62,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq 0x823b50fc
	if (ctx.cr0.eq) goto loc_823B50FC;
	// ld r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,4(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r31,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, r31.u32);
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f12,-304(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -304, temp.u32);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stfs f11,-336(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -336, temp.u32);
	// lwz r31,4(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r31,-364(r1)
	REX_STORE_U32(ctx.r1.u32 + -364, r31.u32);
	// lfs f10,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f10,-300(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -300, temp.u32);
	// stfs f9,-332(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -332, temp.u32);
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// stw r6,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r6.u32);
	// ld r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,0(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lfs f8,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r31,4(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stfs f8,-296(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -296, temp.u32);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// stfs f7,-328(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -328, temp.u32);
	// lfs f6,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stw r31,-356(r1)
	REX_STORE_U32(ctx.r1.u32 + -356, r31.u32);
	// lfs f5,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f6,-292(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -292, temp.u32);
	// stfs f5,-324(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -324, temp.u32);
	// beq 0x823b4fd4
	if (ctx.cr0.eq) goto loc_823B4FD4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r6,-16
	ctx.r6.s64 = -16;
loc_823B4DDC:
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// addi r9,r1,-368
	ctx.r9.s64 = ctx.r1.s64 + -368;
	// lwz r31,4(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// addi r29,r1,-352
	r29.s64 = ctx.r1.s64 + -352;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r30,r1,-336
	r30.s64 = ctx.r1.s64 + -336;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v42,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,-304
	ctx.r9.s64 = ctx.r1.s64 + -304;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// vcuxwfp128 v41,v42,31
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v41.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v42.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// stw r31,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, r31.u32);
	// addi r31,r1,-368
	r31.s64 = ctx.r1.s64 + -368;
	// lvx128 v40,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,-320(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -320, temp.u32);
	// stfs f11,-288(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -288, temp.u32);
	// vmulfp128 v63,v41,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v61.f32)));
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r9,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r9.u32);
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stvx128 v63,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r9,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r9.u32);
	// vmulfp128 v13,v40,v63
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v63.f32)));
	// lfs f10,0(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// vsubfp128 v0,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// lfs f9,4(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// stfs f10,-316(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -316, temp.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f9,-284(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -284, temp.u32);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// vmaddfp v0,v12,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// lfs f8,0(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f8,-312(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -312, temp.u32);
	// stfs f7,-280(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -280, temp.u32);
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r31,0(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r9,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r9.u32);
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r30,4(r7)
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lvx128 v39,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lfs f6,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lwz r29,0(r7)
	r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lfs f5,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// stfs f6,-308(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -308, temp.u32);
	// lwz r28,0(r7)
	r28.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stfs f5,-276(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -276, temp.u32);
	// stw r30,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, r30.u32);
	// vcuxwfp128 v38,v39,31
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v38.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v39.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// stw r9,-364(r1)
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r9.u32);
	// add r10,r31,r5
	ctx.r10.u64 = r31.u64 + ctx.r5.u64;
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// vmulfp128 v63,v38,v61
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v61.f32)));
	// lwz r30,4(r7)
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// addi r27,r1,-288
	r27.s64 = ctx.r1.s64 + -288;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f4,4(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f3,r31,r5
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r5.u32);
	ctx.f3.f64 = double(temp.f32);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// addi r31,r1,-320
	r31.s64 = ctx.r1.s64 + -320;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stfs f3,-304(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + -304, temp.u32);
	// lvx128 v37,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r1,-352
	r29.s64 = ctx.r1.s64 + -352;
	// stfs f4,-336(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + -336, temp.u32);
	// stw r30,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, r30.u32);
	// lvx128 v12,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f2,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// vmulfp128 v13,v37,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v63.f32)));
	// lfsx f12,r9,r5
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f12.f64 = double(temp.f32);
	// vsubfp128 v0,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stfs f2,-300(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + -300, temp.u32);
	// stfs f1,-332(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -332, temp.u32);
	// stfs f12,-296(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -296, temp.u32);
	// lfs f11,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,-328(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -328, temp.u32);
	// stvx128 v63,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// vmaddfp v0,v12,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,4(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// lfsx f10,r9,r5
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f10.f64 = double(temp.f32);
	// stw r31,-356(r1)
	REX_STORE_U32(ctx.r1.u32 + -356, r31.u32);
	// stfs f10,-292(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -292, temp.u32);
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,-324(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -324, temp.u32);
	// stvx128 v0,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bdnz 0x823b4ddc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B4DDC;
loc_823B4FD4:
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// addi r31,r1,-352
	r31.s64 = ctx.r1.s64 + -352;
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// addi r9,r1,-368
	ctx.r9.s64 = ctx.r1.s64 + -368;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r30,r1,-336
	r30.s64 = ctx.r1.s64 + -336;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r1,-288
	r29.s64 = ctx.r1.s64 + -288;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r6,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r6.u32);
	// lvx128 v36,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,-304
	ctx.r9.s64 = ctx.r1.s64 + -304;
	// vcuxwfp128 v35,v36,31
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v35.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v36.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// lvx128 v34,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,-320
	r30.s64 = ctx.r1.s64 + -320;
	// li r28,16
	r28.s64 = 16;
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lvx128 v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f12,-320(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -320, temp.u32);
	// stfs f11,-288(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -288, temp.u32);
	// vmulfp128 v33,v35,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v33.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v61.f32)));
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r6,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r6.u32);
	// vmulfp128 v13,v34,v33
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v34.f32), simde_mm_load_ps(ctx.v33.f32)));
	// vsubfp128 v0,v62,v33
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v33.f32)));
	// lfs f10,0(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f10,-316(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -316, temp.u32);
	// stfs f9,-284(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -284, temp.u32);
	// vmaddfp v0,v12,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f8,4(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stw r6,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r6.u32);
	// lfs f7,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r10.u32);
	// lfsx f6,r6,r5
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f7,-312(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -312, temp.u32);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// stfs f6,-308(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -308, temp.u32);
	// add r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lvx128 v12,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f8,-280(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -280, temp.u32);
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f5,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,-276(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -276, temp.u32);
	// lvx128 v60,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v32,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcuxwfp128 v63,v32,31
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v32.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// vmulfp128 v61,v63,v61
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v0,v62,v61
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vmulfp128 v13,v60,v61
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vmaddfp v0,v12,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r3,r28
	ea = (ctx.r3.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
loc_823B50FC:
	// clrlwi r11,r4,29
	ctx.r11.u64 = ctx.r4.u32 & 0x7;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b55b0
	if (ctx.cr6.eq) goto loc_823B55B0;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823B5110:
	// lwz r4,4(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// ld r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r4,-368(r1)
	REX_STORE_U64(ctx.r1.u32 + -368, ctx.r4.u64);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r3,r9,r6
	ctx.r3.u64 = ctx.r9.u64 + ctx.r6.u64;
	// std r3,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r3.u64);
	// lfs f9,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfd f12,-368(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -368);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fsubs f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fmuls f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmadds f4,f6,f8,f5
	ctx.f4.f64 = double(float(std::fma(ctx.f6.f64, ctx.f8.f64, ctx.f5.f64)));
	// stfsu f4,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823b5110
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B5110;
	// lfd f29,-152(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f30,-144(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826a1cdc
	return;
loc_823B5170:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x823b5464
	if (!ctx.cr6.eq) goto loc_823B5464;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f13,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32280(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32280);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x823b5228
	if (ctx.cr6.eq) goto loc_823B5228;
	// addi r11,r3,31
	ctx.r11.s64 = ctx.r3.s64 + 31;
	// rlwinm r10,r11,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// subf r9,r3,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r3.u64;
	// rlwinm r11,r9,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x823b51b0
	if (!ctx.cr6.gt) goto loc_823B51B0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_823B51B0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b5228
	if (ctx.cr6.eq) goto loc_823B5228;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
loc_823B51C0:
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// ld r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r6,-368(r1)
	REX_STORE_U64(ctx.r1.u32 + -368, ctx.r6.u64);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfd f8,-368(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -368);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fsubs f4,f13,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// fmuls f3,f11,f5
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f2,f4,f12
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmadds f1,f9,f4,f3
	ctx.f1.f64 = double(float(std::fma(ctx.f9.f64, ctx.f4.f64, ctx.f3.f64)));
	// stfs f1,4(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmadds f12,f10,f5,f2
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f5.f64, ctx.f2.f64)));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bdnz 0x823b51c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B51C0;
loc_823B5228:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,14608
	ctx.r9.s64 = ctx.r11.s64 + 14608;
	// addi r6,r10,32288
	ctx.r6.s64 = ctx.r10.s64 + 32288;
	// srawi. r11,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lvx128 v62,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq 0x823b53dc
	if (ctx.cr0.eq) goto loc_823B53DC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r31,16
	r31.s64 = 16;
loc_823B5250:
	// ld r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// addi r6,r1,-368
	ctx.r6.s64 = ctx.r1.s64 + -368;
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// addi r28,r1,-368
	r28.s64 = ctx.r1.s64 + -368;
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// addi r29,r1,-336
	r29.s64 = ctx.r1.s64 + -336;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r30,r1,-352
	r30.s64 = ctx.r1.s64 + -352;
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r9,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r9.u32);
	// stw r9,-364(r1)
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r9.u32);
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// stfs f10,-336(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -336, temp.u32);
	// stfs f9,-332(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -332, temp.u32);
	// stfs f12,-304(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -304, temp.u32);
	// stfs f11,-300(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -300, temp.u32);
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r9,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r9.u32);
	// stw r9,-356(r1)
	REX_STORE_U32(ctx.r1.u32 + -356, ctx.r9.u32);
	// lfs f8,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f8,-324(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -324, temp.u32);
	// stfs f7,-328(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -328, temp.u32);
	// stfs f6,-296(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -296, temp.u32);
	// stfs f5,-292(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -292, temp.u32);
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lvx128 v59,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r27,4(r7)
	r27.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// vcuxwfp128 v58,v59,31
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v58.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r27,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, r27.u32);
	// lvx128 v57,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfsx f4,r9,r5
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f4.f64 = double(temp.f32);
	// add r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 + ctx.r5.u64;
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// vmulfp128 v63,v58,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v61.f32)));
	// stw r27,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, r27.u32);
	// stfs f4,-288(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + -288, temp.u32);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lfs f3,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stfs f3,-284(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + -284, temp.u32);
	// stfs f2,-320(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + -320, temp.u32);
	// vmulfp128 v13,v57,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stfs f1,-316(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -316, temp.u32);
	// vsubfp128 v0,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v63,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// stw r6,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r6.u32);
	// lfs f12,8(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stw r6,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r6.u32);
	// lfs f11,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lvx128 v56,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcuxwfp128 v55,v56,31
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v55.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// lfs f9,4(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f12,-312(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -312, temp.u32);
	// stfs f11,-308(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -308, temp.u32);
	// stfs f10,-280(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -280, temp.u32);
	// vmulfp128 v63,v55,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v61.f32)));
	// stfs f9,-276(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -276, temp.u32);
	// addi r9,r1,-304
	ctx.r9.s64 = ctx.r1.s64 + -304;
	// addi r6,r1,-320
	ctx.r6.s64 = ctx.r1.s64 + -320;
	// addi r11,r1,-288
	ctx.r11.s64 = ctx.r1.s64 + -288;
	// addi r10,r1,-352
	ctx.r10.s64 = ctx.r1.s64 + -352;
	// lvx128 v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v12,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v13,v54,v63
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v0,v62,v63
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v11,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v12,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bdnz 0x823b5250
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B5250;
loc_823B53DC:
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b55b0
	if (ctx.cr6.eq) goto loc_823B55B0;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823B53F0:
	// lwz r4,4(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// ld r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// ld r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r4,-368(r1)
	REX_STORE_U64(ctx.r1.u32 + -368, ctx.r4.u64);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r3,r9,r6
	ctx.r3.u64 = ctx.r9.u64 + ctx.r6.u64;
	// std r3,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r3.u64);
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfd f8,-368(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -368);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fsubs f4,f13,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// fmuls f3,f11,f5
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f2,f4,f12
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmadds f1,f9,f4,f3
	ctx.f1.f64 = double(float(std::fma(ctx.f9.f64, ctx.f4.f64, ctx.f3.f64)));
	// fmadds f12,f10,f5,f2
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f5.f64, ctx.f2.f64)));
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfsu f1,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823b53f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B53F0;
	// lfd f29,-152(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f30,-144(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826a1cdc
	return;
loc_823B5464:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823b55b0
	if (ctx.cr6.eq) goto loc_823B55B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// lfs f11,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32280(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32280);
	ctx.f10.f64 = double(temp.f32);
loc_823B5480:
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// std r6,-368(r1)
	REX_STORE_U64(ctx.r1.u32 + -368, ctx.r6.u64);
	// lfd f0,-368(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -368);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// blt cr6,0x823b553c
	if (ctx.cr6.lt) goto loc_823B553C;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// fsubs f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mullw r31,r11,r9
	r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r10,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r10,r6,r9
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r31,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_823B54E4:
	// lfs f12,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f0,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f7,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfsu f12,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmuls f5,f0,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f4,f0,f12
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f3,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfsu f12,16(r6)
	ea = 16 + ctx.r6.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r6.u32 = ea;
	// fmadds f9,f13,f3,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f13.f64, ctx.f3.f64, ctx.f8.f64)));
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmadds f8,f13,f2,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f13.f64, ctx.f2.f64, ctx.f6.f64)));
	// stfs f8,8(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmadds f7,f13,f1,f5
	ctx.f7.f64 = double(float(std::fma(ctx.f13.f64, ctx.f1.f64, ctx.f5.f64)));
	// stfs f7,12(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmadds f6,f13,f12,f4
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f4.f64)));
	// stfs f6,16(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bdnz 0x823b54e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B54E4;
loc_823B553C:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b5598
	if (!ctx.cr6.lt) goto loc_823B5598;
	// subf r6,r11,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// fsubs f12,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// addi r31,r10,1
	r31.s64 = ctx.r10.s64 + 1;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mullw r6,r31,r9
	ctx.r6.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_823B5580:
	// lfsu f13,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmuls f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmadds f8,f12,f13,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfsu f8,4(r3)
	ea = 4 + ctx.r3.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r3.u32 = ea;
	// bdnz 0x823b5580
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B5580;
loc_823B5598:
	// ld r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// bne 0x823b5480
	if (!ctx.cr0.eq) goto loc_823B5480;
loc_823B55B0:
	// lfd f29,-152(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f30,-144(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_825501B8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,68(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 68);
	// lwz r8,68(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 68);
	// clrlwi r9,r9,4
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFFFFF;
	// clrlwi r8,r8,4
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFFFFF;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// subf r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82550708) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82550710;
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
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x824ff930
	ctx.lr = 0x82550730;
	sub_824FF930(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwimi r30,r29,14,4,17
	r30.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 14) & 0xFFFC000) | (r30.u64 & 0xFFFFFFFFF0003FFF);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwimi r30,r10,0,0,3
	r30.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000000) | (r30.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82552ED0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// rlwinm. r11,r9,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82552f24
	if (ctx.cr0.eq) goto loc_82552F24;
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r10,28(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82552f10
	if (ctx.cr6.eq) goto loc_82552F10;
loc_82552F08:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82552f9c
	goto loc_82552F9C;
loc_82552F10:
	// rlwinm. r10,r9,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82552f24
	if (ctx.cr0.eq) goto loc_82552F24;
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82552f08
	if (!ctx.cr6.eq) goto loc_82552F08;
loc_82552F24:
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r10,76(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi. r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82552f08
	if (!ctx.cr0.eq) goto loc_82552F08;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82550110
	ctx.lr = 0x82552F48;
	sub_82550110(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82550110
	ctx.lr = 0x82552F58;
	sub_82550110(ctx, base);
	// cmpw cr6,r7,r3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82552f08
	if (!ctx.cr6.eq) goto loc_82552F08;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82504458
	ctx.lr = 0x82552F68;
	sub_82504458(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82552f98
	if (ctx.cr0.eq) goto loc_82552F98;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_82552F74:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82552f98
	if (ctx.cr6.eq) goto loc_82552F98;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82552f90
	if (ctx.cr6.eq) goto loc_82552F90;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x82552f08
	if (!ctx.cr6.eq) goto loc_82552F08;
loc_82552F90:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82552f74
	goto loc_82552F74;
loc_82552F98:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82552F9C:
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

DEFINE_REX_FUNC(sub_82559560) {
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
	ctx.lr = 0x82559568;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r28,40(r4)
	REX_STORE_U32(ctx.r4.u32 + 40, r28.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255963c
	if (!ctx.cr0.eq) goto loc_8255963C;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8255963c
	if (ctx.cr0.eq) goto loc_8255963C;
loc_82559594:
	// lwz r11,616(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 616);
	// li r10,68
	ctx.r10.s64 = 68;
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// divw r11,r11,r10
	ctx.r11.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,21
	ctx.r10.s64 = ctx.r10.s64 + 21;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82559624
	if (ctx.cr0.eq) goto loc_82559624;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
loc_825595C8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82559624
	if (ctx.cr6.eq) goto loc_82559624;
	// rlwinm r8,r11,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// addi r8,r8,21
	ctx.r8.s64 = ctx.r8.s64 + 21;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// srw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x825595fc
	if (ctx.cr0.eq) goto loc_825595FC;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x825595c8
	goto loc_825595C8;
loc_825595FC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82559624
	if (ctx.cr6.eq) goto loc_82559624;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f7678
	ctx.lr = 0x82559614;
	sub_824F7678(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r3.u32);
loc_82559624:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255963c
	if (!ctx.cr0.eq) goto loc_8255963C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82559594
	if (!ctx.cr6.eq) goto loc_82559594;
loc_8255963C:
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r11,r9,0,0,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE) | (ctx.r11.u64 & 0xFFFFFFFF00000001);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// bne 0x82559670
	if (!ctx.cr0.eq) goto loc_82559670;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// b 0x82559674
	goto loc_82559674;
loc_82559670:
	// stw r28,16(r31)
	REX_STORE_U32(r31.u32 + 16, r28.u32);
loc_82559674:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82559690
	if (ctx.cr6.eq) goto loc_82559690;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82559690
	if (!ctx.cr6.eq) goto loc_82559690;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_82559690:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82579B78) {
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
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c9c
	ctx.lr = 0x82579B80;
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r7,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r9,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// std r11,112(r3)
	REX_STORE_U64(ctx.r3.u32 + 112, ctx.r11.u64);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// beq cr6,0x82579c0c
	if (ctx.cr6.eq) goto loc_82579C0C;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// beq cr6,0x82579c0c
	if (ctx.cr6.eq) goto loc_82579C0C;
	// cmpwi cr6,r4,14
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 14, ctx.xer);
	// beq cr6,0x82579c0c
	if (ctx.cr6.eq) goto loc_82579C0C;
	// subfic r10,r5,40
	ctx.xer.ca = ctx.r5.u32 <= 40;
	ctx.r10.u64 = static_cast<uint64_t>(40) - ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// ble cr6,0x82579bf4
	if (!ctx.cr6.gt) goto loc_82579BF4;
loc_82579BDC:
	// ld r8,112(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rldicr r8,r8,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// std r8,112(r31)
	REX_STORE_U64(r31.u32 + 112, ctx.r8.u64);
	// blt cr6,0x82579bdc
	if (ctx.cr6.lt) goto loc_82579BDC;
loc_82579BF4:
	// ld r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 112);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// b 0x82579c44
	goto loc_82579C44;
loc_82579C0C:
	// subfic r10,r30,38
	ctx.xer.ca = r30.u32 <= 38;
	ctx.r10.u64 = static_cast<uint64_t>(38) - r30.u64;
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// ble cr6,0x82579c38
	if (!ctx.cr6.gt) goto loc_82579C38;
loc_82579C20:
	// ld r8,112(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rldicr r8,r8,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// std r8,112(r31)
	REX_STORE_U64(r31.u32 + 112, ctx.r8.u64);
	// blt cr6,0x82579c20
	if (ctx.cr6.lt) goto loc_82579C20;
loc_82579C38:
	// ld r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 112);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
loc_82579C44:
	// std r11,112(r31)
	REX_STORE_U64(r31.u32 + 112, ctx.r11.u64);
	// addi r11,r4,-5
	ctx.r11.s64 = ctx.r4.s64 + -5;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bgt cr6,0x8257a6e4
	if (ctx.cr6.gt) goto loc_8257A6E4;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,-19592
	ctx.r12.s64 = ctx.r12.s64 + -19592;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32168
	ctx.r12.s64 = -2108162048;
	// addi r12,r12,-25476
	ctx.r12.s64 = ctx.r12.s64 + -25476;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8257A0AC;
	case 1:
		goto loc_8257A0AC;
	case 2:
		goto loc_8257A0AC;
	case 3:
		goto loc_8257A0AC;
	case 4:
		goto loc_82579E94;
	case 5:
		goto loc_82579E94;
	case 6:
		goto loc_82579E94;
	case 7:
		goto loc_82579E94;
	case 8:
		goto loc_82579C7C;
	case 9:
		goto loc_82579C7C;
	case 10:
		goto loc_82579C7C;
	case 11:
		goto loc_82579C7C;
	case 12:
		goto loc_8257A6E4;
	case 13:
		goto loc_8257A0AC;
	case 14:
		goto loc_82579E94;
	case 15:
		goto loc_82579C7C;
	case 16:
		goto loc_82579C7C;
	case 17:
		goto loc_8257A2B0;
	case 18:
		goto loc_8257A4CC;
	case 19:
		goto loc_8257A4CC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82579C7C:
	// add r10,r30,r9
	ctx.r10.u64 = r30.u64 + ctx.r9.u64;
	// mulli r4,r29,3
	ctx.r4.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(3));
	// rlwinm r7,r29,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r27
	ctx.r11.u64 = r30.u64 + r27.u64;
	// addi r23,r10,-22
	r23.s64 = ctx.r10.s64 + -22;
	// rlwinm r5,r28,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r4,r30
	ctx.r8.u64 = r30.u64 - ctx.r4.u64;
	// subf r3,r30,r7
	ctx.r3.u64 = ctx.r7.u64 - r30.u64;
	// subf r10,r30,r29
	ctx.r10.u64 = r29.u64 - r30.u64;
	// addi r24,r11,-20
	r24.s64 = ctx.r11.s64 + -20;
	// subf r7,r7,r30
	ctx.r7.u64 = r30.u64 - ctx.r7.u64;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r22,r29,r5
	r22.u64 = ctx.r5.u64 - r29.u64;
	// subf r8,r28,r10
	ctx.r8.u64 = ctx.r10.u64 - r28.u64;
	// subf r25,r29,r30
	r25.u64 = r30.u64 - r29.u64;
	// subf r5,r9,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r9.u64;
	// add r10,r7,r28
	ctx.r10.u64 = ctx.r7.u64 + r28.u64;
	// subf r9,r9,r22
	ctx.r9.u64 = r22.u64 - ctx.r9.u64;
	// add r6,r25,r28
	ctx.r6.u64 = r25.u64 + r28.u64;
	// subfic r3,r30,23
	ctx.xer.ca = r30.u32 <= 23;
	ctx.r3.u64 = static_cast<uint64_t>(23) - r30.u64;
	// addi r28,r10,-2
	r28.s64 = ctx.r10.s64 + -2;
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + r30.u64;
	// addi r7,r6,-21
	ctx.r7.s64 = ctx.r6.s64 + -21;
	// stw r28,72(r31)
	REX_STORE_U32(r31.u32 + 72, r28.u32);
	// addi r8,r8,25
	ctx.r8.s64 = ctx.r8.s64 + 25;
	// stw r10,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r10.u32);
	// subf r9,r27,r3
	ctx.r9.u64 = ctx.r3.u64 - r27.u64;
	// rlwinm r6,r24,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r8.u32);
	// rlwinm r23,r23,1,0,30
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r9.u32);
	// addi r24,r11,-4
	r24.s64 = ctx.r11.s64 + -4;
	// subf r10,r29,r6
	ctx.r10.u64 = ctx.r6.u64 - r29.u64;
	// addi r5,r5,27
	ctx.r5.s64 = ctx.r5.s64 + 27;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// subf r9,r4,r23
	ctx.r9.u64 = r23.u64 - ctx.r4.u64;
	// stw r5,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r5.u32);
	// stw r8,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r8.u32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r9,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r9.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// lfd f31,8312(r10)
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 8312);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8269f778
	ctx.lr = 0x82579D44;
	sub_8269F778(ctx, base);
	// stfd f1,24(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 24, ctx.f1.u64);
	// extsw r11,r28
	ctx.r11.s64 = r28.s32;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// bl 0x8269f778
	ctx.lr = 0x82579D60;
	sub_8269F778(ctx, base);
	// stfd f1,16(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 16, ctx.f1.u64);
	// add r27,r25,r27
	r27.u64 = r25.u64 + r27.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r11,r27,-2
	ctx.r11.s64 = r27.s64 + -2;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// bl 0x8269f778
	ctx.lr = 0x82579D84;
	sub_8269F778(ctx, base);
	// stfd f1,8(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 8, ctx.f1.u64);
	// addi r11,r30,-2
	ctx.r11.s64 = r30.s64 + -2;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// bl 0x8269f778
	ctx.lr = 0x82579DA4;
	sub_8269F778(ctx, base);
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 0, ctx.f1.u64);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// stw r26,108(r31)
	REX_STORE_U32(r31.u32 + 108, r26.u32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x82579dd4
	if (!ctx.cr6.gt) goto loc_82579DD4;
loc_82579DB8:
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r9,r10,1,0,30
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r24.s32, ctx.xer);
	// stw r9,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r9.u32);
	// blt cr6,0x82579db8
	if (ctx.cr6.lt) goto loc_82579DB8;
loc_82579DD4:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// stw r26,104(r31)
	REX_STORE_U32(r31.u32 + 104, r26.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x82579e00
	if (!ctx.cr6.gt) goto loc_82579E00;
loc_82579DE4:
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r9,r10,1,0,30
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// stw r9,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// blt cr6,0x82579de4
	if (ctx.cr6.lt) goto loc_82579DE4;
loc_82579E00:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// stw r26,100(r31)
	REX_STORE_U32(r31.u32 + 100, r26.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x82579e2c
	if (!ctx.cr6.gt) goto loc_82579E2C;
loc_82579E10:
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r9,r10,1,0,30
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// stw r9,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r9.u32);
	// blt cr6,0x82579e10
	if (ctx.cr6.lt) goto loc_82579E10;
loc_82579E2C:
	// addic. r10,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r10.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r26,96(r31)
	REX_STORE_U32(r31.u32 + 96, r26.u32);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// ble 0x82579e58
	if (!ctx.cr0.gt) goto loc_82579E58;
loc_82579E3C:
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r8,r9,1,0,30
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r8.u64 & 0xFFFFFFFF00000001);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r8,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r8.u32);
	// blt cr6,0x82579e3c
	if (ctx.cr6.lt) goto loc_82579E3C;
loc_82579E58:
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r27,36(r31)
	REX_STORE_U32(r31.u32 + 36, r27.u32);
	// stw r28,40(r31)
	REX_STORE_U32(r31.u32 + 40, r28.u32);
	// stw r24,44(r31)
	REX_STORE_U32(r31.u32 + 44, r24.u32);
	// stw r26,120(r31)
	REX_STORE_U32(r31.u32 + 120, r26.u32);
	// ble cr6,0x82579e8c
	if (!ctx.cr6.gt) goto loc_82579E8C;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_82579E78:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// bdnz 0x82579e78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82579E78;
loc_82579E8C:
	// subfic r11,r29,23
	ctx.xer.ca = r29.u32 <= 23;
	ctx.r11.u64 = static_cast<uint64_t>(23) - r29.u64;
	// b 0x8257a910
	goto loc_8257A910;
loc_82579E94:
	// rlwinm r7,r29,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r10,r29,3
	ctx.r10.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(3));
	// rlwinm r6,r28,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r7,r30
	ctx.r8.u64 = r30.u64 - ctx.r7.u64;
	// add r11,r30,r27
	ctx.r11.u64 = r30.u64 + r27.u64;
	// subf r10,r10,r30
	ctx.r10.u64 = r30.u64 - ctx.r10.u64;
	// subf r7,r30,r7
	ctx.r7.u64 = ctx.r7.u64 - r30.u64;
	// subf r6,r29,r6
	ctx.r6.u64 = ctx.r6.u64 - r29.u64;
	// subf r5,r30,r29
	ctx.r5.u64 = r29.u64 - r30.u64;
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// subf r25,r29,r30
	r25.u64 = r30.u64 - r29.u64;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r3,r30,r9
	ctx.r3.u64 = r30.u64 + ctx.r9.u64;
	// subf r7,r9,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r9.u64;
	// subf r9,r9,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r9.u64;
	// subf r10,r28,r5
	ctx.r10.u64 = ctx.r5.u64 - r28.u64;
	// add r24,r25,r28
	r24.u64 = r25.u64 + r28.u64;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// add r28,r8,r28
	r28.u64 = ctx.r8.u64 + r28.u64;
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// rlwinm r8,r24,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r9.u32);
	// subfic r5,r30,23
	ctx.xer.ca = r30.u32 <= 23;
	ctx.r5.u64 = static_cast<uint64_t>(23) - r30.u64;
	// addi r23,r29,14
	r23.s64 = r29.s64 + 14;
	// rlwinm r6,r4,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r3,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r8,-41
	ctx.r10.s64 = ctx.r8.s64 + -41;
	// subf r9,r27,r5
	ctx.r9.u64 = ctx.r5.u64 - r27.u64;
	// mulli r3,r23,3
	ctx.r3.s64 = static_cast<int64_t>(r23.u64 * static_cast<uint64_t>(3));
	// stw r10,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// stw r9,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r9.u32);
	// addi r24,r11,-2
	r24.s64 = ctx.r11.s64 + -2;
	// subf r10,r29,r6
	ctx.r10.u64 = ctx.r6.u64 - r29.u64;
	// addi r7,r7,25
	ctx.r7.s64 = ctx.r7.s64 + 25;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// subf r9,r3,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r3.u64;
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// addi r23,r28,-1
	r23.s64 = r28.s64 + -1;
	// stw r7,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r7.u32);
	// stw r9,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r9.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r23,72(r31)
	REX_STORE_U32(r31.u32 + 72, r23.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// lfd f31,8312(r10)
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 8312);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8269f778
	ctx.lr = 0x82579F60;
	sub_8269F778(ctx, base);
	// stfd f1,24(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 24, ctx.f1.u64);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// bl 0x8269f778
	ctx.lr = 0x82579F80;
	sub_8269F778(ctx, base);
	// stfd f1,16(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 16, ctx.f1.u64);
	// add r28,r25,r27
	r28.u64 = r25.u64 + r27.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// extsw r11,r28
	ctx.r11.s64 = r28.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// bl 0x8269f778
	ctx.lr = 0x82579FA0;
	sub_8269F778(ctx, base);
	// stfd f1,8(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 8, ctx.f1.u64);
	// addi r27,r30,-1
	r27.s64 = r30.s64 + -1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// extsw r11,r27
	ctx.r11.s64 = r27.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// bl 0x8269f778
	ctx.lr = 0x82579FC0;
	sub_8269F778(ctx, base);
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 0, ctx.f1.u64);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// stw r26,108(r31)
	REX_STORE_U32(r31.u32 + 108, r26.u32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x82579ff0
	if (!ctx.cr6.gt) goto loc_82579FF0;
loc_82579FD4:
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r9,r10,1,0,30
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r24.s32, ctx.xer);
	// stw r9,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r9.u32);
	// blt cr6,0x82579fd4
	if (ctx.cr6.lt) goto loc_82579FD4;
loc_82579FF0:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// stw r26,104(r31)
	REX_STORE_U32(r31.u32 + 104, r26.u32);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x8257a01c
	if (!ctx.cr6.gt) goto loc_8257A01C;
loc_8257A000:
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r9,r10,1,0,30
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r23.s32, ctx.xer);
	// stw r9,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// blt cr6,0x8257a000
	if (ctx.cr6.lt) goto loc_8257A000;
loc_8257A01C:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// stw r26,100(r31)
	REX_STORE_U32(r31.u32 + 100, r26.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x8257a048
	if (!ctx.cr6.gt) goto loc_8257A048;
loc_8257A02C:
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r9,r10,1,0,30
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// stw r9,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r9.u32);
	// blt cr6,0x8257a02c
	if (ctx.cr6.lt) goto loc_8257A02C;
loc_8257A048:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// stw r26,96(r31)
	REX_STORE_U32(r31.u32 + 96, r26.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x8257a074
	if (!ctx.cr6.gt) goto loc_8257A074;
loc_8257A058:
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r9,r10,1,0,30
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// stw r9,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// blt cr6,0x8257a058
	if (ctx.cr6.lt) goto loc_8257A058;
loc_8257A074:
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r28,36(r31)
	REX_STORE_U32(r31.u32 + 36, r28.u32);
	// stw r23,40(r31)
	REX_STORE_U32(r31.u32 + 40, r23.u32);
	// stw r24,44(r31)
	REX_STORE_U32(r31.u32 + 44, r24.u32);
	// stw r26,120(r31)
	REX_STORE_U32(r31.u32 + 120, r26.u32);
	// ble cr6,0x82579e8c
	if (!ctx.cr6.gt) goto loc_82579E8C;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_8257A094:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// bdnz 0x8257a094
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8257A094;
	// b 0x82579e8c
	goto loc_82579E8C;
loc_8257A0AC:
	// add r10,r30,r9
	ctx.r10.u64 = r30.u64 + ctx.r9.u64;
	// rlwinm r7,r29,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r10,-20
	ctx.r4.s64 = ctx.r10.s64 + -20;
	// add r11,r30,r27
	ctx.r11.u64 = r30.u64 + r27.u64;
	// subf r10,r30,r7
	ctx.r10.u64 = ctx.r7.u64 - r30.u64;
	// rlwinm r8,r28,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r11,-20
	ctx.r5.s64 = ctx.r11.s64 + -20;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subf r11,r30,r29
	ctx.r11.u64 = r29.u64 - r30.u64;
	// subf r25,r29,r8
	r25.u64 = ctx.r8.u64 - r29.u64;
	// subf r24,r29,r30
	r24.u64 = r30.u64 - r29.u64;
	// subf r8,r28,r11
	ctx.r8.u64 = ctx.r11.u64 - r28.u64;
	// addi r10,r10,23
	ctx.r10.s64 = ctx.r10.s64 + 23;
	// subf r11,r9,r25
	ctx.r11.u64 = r25.u64 - ctx.r9.u64;
	// mulli r3,r29,3
	ctx.r3.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(3));
	// stw r10,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// subfic r21,r30,23
	ctx.xer.ca = r30.u32 <= 23;
	r21.u64 = static_cast<uint64_t>(23) - r30.u64;
	// add r6,r24,r28
	ctx.r6.u64 = r24.u64 + r28.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// subf r25,r3,r30
	r25.u64 = r30.u64 - ctx.r3.u64;
	// subf r10,r27,r21
	ctx.r10.u64 = r21.u64 - r27.u64;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// subf r7,r7,r30
	ctx.r7.u64 = r30.u64 - ctx.r7.u64;
	// addi r6,r6,-20
	ctx.r6.s64 = ctx.r6.s64 + -20;
	// stw r10,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r10.u32);
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r22,r25,r9
	r22.u64 = r25.u64 + ctx.r9.u64;
	// add r23,r7,r28
	r23.u64 = ctx.r7.u64 + r28.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r22,80(r31)
	REX_STORE_U32(r31.u32 + 80, r22.u32);
	// subf r10,r3,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r3.u64;
	// stw r23,72(r31)
	REX_STORE_U32(r31.u32 + 72, r23.u32);
	// addi r8,r8,23
	ctx.r8.s64 = ctx.r8.s64 + 23;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// subf r9,r29,r5
	ctx.r9.u64 = ctx.r5.u64 - r29.u64;
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// stw r8,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r8.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r9,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// extsw r10,r23
	ctx.r10.s64 = r23.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// lfd f31,8312(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 8312);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8269f778
	ctx.lr = 0x8257A168;
	sub_8269F778(ctx, base);
	// stfd f1,16(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 16, ctx.f1.u64);
	// add r11,r25,r28
	ctx.r11.u64 = r25.u64 + r28.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// bl 0x8269f778
	ctx.lr = 0x8257A188;
	sub_8269F778(ctx, base);
	// stfd f1,24(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 24, ctx.f1.u64);
	// add r28,r24,r27
	r28.u64 = r24.u64 + r27.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// extsw r11,r28
	ctx.r11.s64 = r28.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// bl 0x8269f778
	ctx.lr = 0x8257A1A8;
	sub_8269F778(ctx, base);
	// stfd f1,8(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 8, ctx.f1.u64);
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// bl 0x8269f778
	ctx.lr = 0x8257A1C4;
	sub_8269F778(ctx, base);
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 0, ctx.f1.u64);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// stw r26,108(r31)
	REX_STORE_U32(r31.u32 + 108, r26.u32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x8257a1f4
	if (!ctx.cr6.gt) goto loc_8257A1F4;
loc_8257A1D8:
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r9,r10,1,0,30
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// stw r9,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r9.u32);
	// blt cr6,0x8257a1d8
	if (ctx.cr6.lt) goto loc_8257A1D8;
loc_8257A1F4:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// stw r26,104(r31)
	REX_STORE_U32(r31.u32 + 104, r26.u32);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x8257a220
	if (!ctx.cr6.gt) goto loc_8257A220;
loc_8257A204:
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r9,r10,1,0,30
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r23.s32, ctx.xer);
	// stw r9,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// blt cr6,0x8257a204
	if (ctx.cr6.lt) goto loc_8257A204;
loc_8257A220:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// stw r26,100(r31)
	REX_STORE_U32(r31.u32 + 100, r26.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x8257a24c
	if (!ctx.cr6.gt) goto loc_8257A24C;
loc_8257A230:
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r9,r10,1,0,30
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// stw r9,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r9.u32);
	// blt cr6,0x8257a230
	if (ctx.cr6.lt) goto loc_8257A230;
loc_8257A24C:
	// addic. r10,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r10.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r26,96(r31)
	REX_STORE_U32(r31.u32 + 96, r26.u32);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// ble 0x8257a278
	if (!ctx.cr0.gt) goto loc_8257A278;
loc_8257A25C:
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r8,r9,1,0,30
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r8.u64 & 0xFFFFFFFF00000001);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r8,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r8.u32);
	// blt cr6,0x8257a25c
	if (ctx.cr6.lt) goto loc_8257A25C;
loc_8257A278:
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r28,36(r31)
	REX_STORE_U32(r31.u32 + 36, r28.u32);
	// stw r23,40(r31)
	REX_STORE_U32(r31.u32 + 40, r23.u32);
	// stw r22,44(r31)
	REX_STORE_U32(r31.u32 + 44, r22.u32);
	// stw r26,120(r31)
	REX_STORE_U32(r31.u32 + 120, r26.u32);
	// ble cr6,0x82579e8c
	if (!ctx.cr6.gt) goto loc_82579E8C;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_8257A298:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// bdnz 0x8257a298
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8257A298;
	// b 0x82579e8c
	goto loc_82579E8C;
loc_8257A2B0:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r29,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// subf r3,r30,r29
	ctx.r3.u64 = r29.u64 - r30.u64;
	// add r4,r30,r9
	ctx.r4.u64 = r30.u64 + ctx.r9.u64;
	// subf r25,r29,r30
	r25.u64 = r30.u64 - r29.u64;
	// subf r8,r6,r30
	ctx.r8.u64 = r30.u64 - ctx.r6.u64;
	// subf r24,r30,r6
	r24.u64 = ctx.r6.u64 - r30.u64;
	// subf r10,r9,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r6,r28,r3
	ctx.r6.u64 = ctx.r3.u64 - r28.u64;
	// mulli r5,r29,3
	ctx.r5.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(3));
	// add r3,r25,r28
	ctx.r3.u64 = r25.u64 + r28.u64;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r8,r28
	r28.u64 = ctx.r8.u64 + r28.u64;
	// add r7,r30,r27
	ctx.r7.u64 = r30.u64 + r27.u64;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + r30.u64;
	// subf r11,r5,r30
	ctx.r11.u64 = r30.u64 - ctx.r5.u64;
	// subf r10,r5,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r5.u64;
	// addi r23,r7,-20
	r23.s64 = ctx.r7.s64 + -20;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r7,r9,r24
	ctx.r7.u64 = r24.u64 - ctx.r9.u64;
	// addi r10,r10,-41
	ctx.r10.s64 = ctx.r10.s64 + -41;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// rlwinm r5,r23,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// subfic r22,r30,24
	ctx.xer.ca = r30.u32 <= 24;
	r22.u64 = static_cast<uint64_t>(24) - r30.u64;
	// stw r8,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r8.u32);
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r24,r11,-1
	r24.s64 = ctx.r11.s64 + -1;
	// subf r10,r29,r5
	ctx.r10.u64 = ctx.r5.u64 - r29.u64;
	// addi r6,r6,25
	ctx.r6.s64 = ctx.r6.s64 + 25;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// addi r7,r7,25
	ctx.r7.s64 = ctx.r7.s64 + 25;
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// addi r9,r9,-41
	ctx.r9.s64 = ctx.r9.s64 + -41;
	// stw r6,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r6.u32);
	// subf r8,r27,r22
	ctx.r8.u64 = r22.u64 - r27.u64;
	// stw r7,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r7.u32);
	// addi r23,r28,-1
	r23.s64 = r28.s64 + -1;
	// stw r9,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r9.u32);
	// stw r8,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r8.u32);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// stw r23,72(r31)
	REX_STORE_U32(r31.u32 + 72, r23.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// lfd f31,8312(r10)
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 8312);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8269f778
	ctx.lr = 0x8257A37C;
	sub_8269F778(ctx, base);
	// stfd f1,24(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 24, ctx.f1.u64);
	// addi r11,r28,3
	ctx.r11.s64 = r28.s64 + 3;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// bl 0x8269f778
	ctx.lr = 0x8257A39C;
	sub_8269F778(ctx, base);
	// stfd f1,16(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 16, ctx.f1.u64);
	// add r28,r25,r27
	r28.u64 = r25.u64 + r27.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// bl 0x8269f778
	ctx.lr = 0x8257A3C0;
	sub_8269F778(ctx, base);
	// stfd f1,8(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 8, ctx.f1.u64);
	// addi r27,r30,-1
	r27.s64 = r30.s64 + -1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// extsw r11,r27
	ctx.r11.s64 = r27.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// bl 0x8269f778
	ctx.lr = 0x8257A3E0;
	sub_8269F778(ctx, base);
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 0, ctx.f1.u64);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// stw r26,108(r31)
	REX_STORE_U32(r31.u32 + 108, r26.u32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x8257a410
	if (!ctx.cr6.gt) goto loc_8257A410;
loc_8257A3F4:
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r9,r10,1,0,30
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r24.s32, ctx.xer);
	// stw r9,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r9.u32);
	// blt cr6,0x8257a3f4
	if (ctx.cr6.lt) goto loc_8257A3F4;
loc_8257A410:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// stw r26,104(r31)
	REX_STORE_U32(r31.u32 + 104, r26.u32);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x8257a43c
	if (!ctx.cr6.gt) goto loc_8257A43C;
loc_8257A420:
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r9,r10,1,0,30
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r23.s32, ctx.xer);
	// stw r9,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// blt cr6,0x8257a420
	if (ctx.cr6.lt) goto loc_8257A420;
loc_8257A43C:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// stw r26,100(r31)
	REX_STORE_U32(r31.u32 + 100, r26.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x8257a468
	if (!ctx.cr6.gt) goto loc_8257A468;
loc_8257A44C:
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r9,r10,1,0,30
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// stw r9,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r9.u32);
	// blt cr6,0x8257a44c
	if (ctx.cr6.lt) goto loc_8257A44C;
loc_8257A468:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// stw r26,96(r31)
	REX_STORE_U32(r31.u32 + 96, r26.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x8257a494
	if (!ctx.cr6.gt) goto loc_8257A494;
loc_8257A478:
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r9,r10,1,0,30
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// stw r9,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// blt cr6,0x8257a478
	if (ctx.cr6.lt) goto loc_8257A478;
loc_8257A494:
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r28,36(r31)
	REX_STORE_U32(r31.u32 + 36, r28.u32);
	// stw r23,40(r31)
	REX_STORE_U32(r31.u32 + 40, r23.u32);
	// stw r24,44(r31)
	REX_STORE_U32(r31.u32 + 44, r24.u32);
	// stw r26,120(r31)
	REX_STORE_U32(r31.u32 + 120, r26.u32);
	// ble cr6,0x8257a90c
	if (!ctx.cr6.gt) goto loc_8257A90C;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_8257A4B4:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// bdnz 0x8257a4b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8257A4B4;
	// b 0x8257a90c
	goto loc_8257A90C;
loc_8257A4CC:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// subf r5,r30,r10
	ctx.r5.u64 = ctx.r10.u64 - r30.u64;
	// subf r10,r10,r30
	ctx.r10.u64 = r30.u64 - ctx.r10.u64;
	// add r6,r30,r27
	ctx.r6.u64 = r30.u64 + r27.u64;
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// mulli r3,r29,3
	ctx.r3.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(3));
	// subf r25,r29,r30
	r25.u64 = r30.u64 - r29.u64;
	// subf r4,r30,r29
	ctx.r4.u64 = r29.u64 - r30.u64;
	// add r7,r30,r9
	ctx.r7.u64 = r30.u64 + ctx.r9.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// rlwinm r23,r6,1,0,30
	r23.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r8,r30
	ctx.r6.u64 = ctx.r8.u64 + r30.u64;
	// add r24,r25,r28
	r24.u64 = r25.u64 + r28.u64;
	// subf r4,r28,r4
	ctx.r4.u64 = ctx.r4.u64 - r28.u64;
	// subf r11,r3,r30
	ctx.r11.u64 = r30.u64 - ctx.r3.u64;
	// addi r28,r10,-1
	r28.s64 = ctx.r10.s64 + -1;
	// rlwinm r22,r7,1,0,30
	r22.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// stw r28,72(r31)
	REX_STORE_U32(r31.u32 + 72, r28.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r5,r9,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r9.u64;
	// stw r10,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r10.u32);
	// rlwinm r8,r24,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r21,r30,25
	ctx.xer.ca = r30.u32 <= 25;
	r21.u64 = static_cast<uint64_t>(25) - r30.u64;
	// subf r9,r3,r22
	ctx.r9.u64 = r22.u64 - ctx.r3.u64;
	// subf r7,r29,r23
	ctx.r7.u64 = r23.u64 - r29.u64;
	// addi r10,r8,-41
	ctx.r10.s64 = ctx.r8.s64 + -41;
	// addi r24,r11,-3
	r24.s64 = ctx.r11.s64 + -3;
	// addi r4,r4,25
	ctx.r4.s64 = ctx.r4.s64 + 25;
	// stw r10,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// addi r5,r5,27
	ctx.r5.s64 = ctx.r5.s64 + 27;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// addi r7,r7,-41
	ctx.r7.s64 = ctx.r7.s64 + -41;
	// stw r4,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r4.u32);
	// addi r9,r9,-43
	ctx.r9.s64 = ctx.r9.s64 + -43;
	// stw r5,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r5.u32);
	// subf r8,r27,r21
	ctx.r8.u64 = r21.u64 - r27.u64;
	// stw r7,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r7.u32);
	// stw r9,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r9.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r8,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r8.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// lfd f31,8312(r10)
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 8312);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8269f778
	ctx.lr = 0x8257A598;
	sub_8269F778(ctx, base);
	// stfd f1,24(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 24, ctx.f1.u64);
	// extsw r11,r28
	ctx.r11.s64 = r28.s32;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// bl 0x8269f778
	ctx.lr = 0x8257A5B4;
	sub_8269F778(ctx, base);
	// stfd f1,16(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 16, ctx.f1.u64);
	// add r11,r25,r27
	ctx.r11.u64 = r25.u64 + r27.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r27,r11,-1
	r27.s64 = ctx.r11.s64 + -1;
	// extsw r11,r27
	ctx.r11.s64 = r27.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// bl 0x8269f778
	ctx.lr = 0x8257A5D8;
	sub_8269F778(ctx, base);
	// stfd f1,8(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 8, ctx.f1.u64);
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// bl 0x8269f778
	ctx.lr = 0x8257A5F8;
	sub_8269F778(ctx, base);
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 0, ctx.f1.u64);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// stw r26,108(r31)
	REX_STORE_U32(r31.u32 + 108, r26.u32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x8257a628
	if (!ctx.cr6.gt) goto loc_8257A628;
loc_8257A60C:
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r9,r10,1,0,30
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r24.s32, ctx.xer);
	// stw r9,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r9.u32);
	// blt cr6,0x8257a60c
	if (ctx.cr6.lt) goto loc_8257A60C;
loc_8257A628:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// stw r26,104(r31)
	REX_STORE_U32(r31.u32 + 104, r26.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x8257a654
	if (!ctx.cr6.gt) goto loc_8257A654;
loc_8257A638:
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r9,r10,1,0,30
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// stw r9,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// blt cr6,0x8257a638
	if (ctx.cr6.lt) goto loc_8257A638;
loc_8257A654:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// stw r26,100(r31)
	REX_STORE_U32(r31.u32 + 100, r26.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x8257a680
	if (!ctx.cr6.gt) goto loc_8257A680;
loc_8257A664:
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r9,r10,1,0,30
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// stw r9,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r9.u32);
	// blt cr6,0x8257a664
	if (ctx.cr6.lt) goto loc_8257A664;
loc_8257A680:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r26,96(r31)
	REX_STORE_U32(r31.u32 + 96, r26.u32);
	// ble cr6,0x8257a6a4
	if (!ctx.cr6.gt) goto loc_8257A6A4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8257A690:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r10,r11,1,0,30
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r10.u64 & 0xFFFFFFFF00000001);
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// bdnz 0x8257a690
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8257A690;
loc_8257A6A4:
	// addic. r11,r29,1
	ctx.xer.ca = r29.u32 > 4294967294;
	ctx.r11.s64 = r29.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r27,36(r31)
	REX_STORE_U32(r31.u32 + 36, r27.u32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r28,40(r31)
	REX_STORE_U32(r31.u32 + 40, r28.u32);
	// stw r24,44(r31)
	REX_STORE_U32(r31.u32 + 44, r24.u32);
	// stw r26,120(r31)
	REX_STORE_U32(r31.u32 + 120, r26.u32);
	// ble 0x8257a90c
	if (!ctx.cr0.gt) goto loc_8257A90C;
loc_8257A6C4:
	// lwz r9,120(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 120);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// oris r9,r9,512
	ctx.r9.u64 = ctx.r9.u64 | 33554432;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// stw r9,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r9.u32);
	// blt cr6,0x8257a6c4
	if (ctx.cr6.lt) goto loc_8257A6C4;
	// b 0x8257a90c
	goto loc_8257A90C;
loc_8257A6E4:
	// addi r11,r29,11
	ctx.r11.s64 = r29.s64 + 11;
	// add r8,r30,r9
	ctx.r8.u64 = r30.u64 + ctx.r9.u64;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r11,1,0,30
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r30,r27
	ctx.r7.u64 = r30.u64 + r27.u64;
	// subf r11,r10,r30
	ctx.r11.u64 = r30.u64 - ctx.r10.u64;
	// addi r3,r8,-19
	ctx.r3.s64 = ctx.r8.s64 + -19;
	// rlwinm r6,r28,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r30,r29
	ctx.r8.u64 = r29.u64 - r30.u64;
	// addi r4,r7,-20
	ctx.r4.s64 = ctx.r7.s64 + -20;
	// subf r24,r29,r30
	r24.u64 = r30.u64 - r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// subf r7,r29,r6
	ctx.r7.u64 = ctx.r6.u64 - r29.u64;
	// subf r6,r28,r8
	ctx.r6.u64 = ctx.r8.u64 - r28.u64;
	// mulli r5,r29,3
	ctx.r5.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(3));
	// add r23,r24,r28
	r23.u64 = r24.u64 + r28.u64;
	// addi r22,r11,1
	r22.s64 = ctx.r11.s64 + 1;
	// addi r11,r6,23
	ctx.r11.s64 = ctx.r6.s64 + 23;
	// rlwinm r8,r23,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r22,72(r31)
	REX_STORE_U32(r31.u32 + 72, r22.u32);
	// subf r10,r5,r30
	ctx.r10.u64 = r30.u64 - ctx.r5.u64;
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// addi r11,r8,-39
	ctx.r11.s64 = ctx.r8.s64 + -39;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subfic r21,r30,24
	ctx.xer.ca = r30.u32 <= 24;
	r21.u64 = static_cast<uint64_t>(24) - r30.u64;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// subf r7,r9,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r9.u64;
	// subf r25,r30,r25
	r25.u64 = r25.u64 - r30.u64;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r23,r10,2
	r23.s64 = ctx.r10.s64 + 2;
	// subf r6,r9,r25
	ctx.r6.u64 = r25.u64 - ctx.r9.u64;
	// subf r11,r5,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r5.u64;
	// stw r23,80(r31)
	REX_STORE_U32(r31.u32 + 80, r23.u32);
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + r30.u64;
	// stw r6,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r6.u32);
	// subf r10,r27,r21
	ctx.r10.u64 = r21.u64 - r27.u64;
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// subf r8,r29,r4
	ctx.r8.u64 = ctx.r4.u64 - r29.u64;
	// stw r7,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r7.u32);
	// stw r10,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r10.u32);
	// subfic r25,r29,2
	ctx.xer.ca = r29.u32 <= 2;
	r25.u64 = static_cast<uint64_t>(2) - r29.u64;
	// stw r8,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r8.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mulli r11,r25,3
	ctx.r11.s64 = static_cast<int64_t>(r25.u64 * static_cast<uint64_t>(3));
	// lfd f31,8312(r10)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 8312);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// bl 0x8269f778
	ctx.lr = 0x8257A7BC;
	sub_8269F778(ctx, base);
	// stfd f1,24(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 24, ctx.f1.u64);
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// bl 0x8269f778
	ctx.lr = 0x8257A7E4;
	sub_8269F778(ctx, base);
	// stfd f1,16(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 16, ctx.f1.u64);
	// add r28,r24,r27
	r28.u64 = r24.u64 + r27.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r11,r28,2
	ctx.r11.s64 = r28.s64 + 2;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// bl 0x8269f778
	ctx.lr = 0x8257A808;
	sub_8269F778(ctx, base);
	// stfd f1,8(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 8, ctx.f1.u64);
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// bl 0x8269f778
	ctx.lr = 0x8257A824;
	sub_8269F778(ctx, base);
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 0, ctx.f1.u64);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// stw r26,108(r31)
	REX_STORE_U32(r31.u32 + 108, r26.u32);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x8257a854
	if (!ctx.cr6.gt) goto loc_8257A854;
loc_8257A838:
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r9,r10,1,0,30
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r23.s32, ctx.xer);
	// stw r9,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r9.u32);
	// blt cr6,0x8257a838
	if (ctx.cr6.lt) goto loc_8257A838;
loc_8257A854:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// stw r26,104(r31)
	REX_STORE_U32(r31.u32 + 104, r26.u32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x8257a880
	if (!ctx.cr6.gt) goto loc_8257A880;
loc_8257A864:
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r9,r10,1,0,30
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// stw r9,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// blt cr6,0x8257a864
	if (ctx.cr6.lt) goto loc_8257A864;
loc_8257A880:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// stw r26,100(r31)
	REX_STORE_U32(r31.u32 + 100, r26.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x8257a8ac
	if (!ctx.cr6.gt) goto loc_8257A8AC;
loc_8257A890:
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r9,r10,1,0,30
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// stw r9,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r9.u32);
	// blt cr6,0x8257a890
	if (ctx.cr6.lt) goto loc_8257A890;
loc_8257A8AC:
	// addic. r10,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r10.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r26,96(r31)
	REX_STORE_U32(r31.u32 + 96, r26.u32);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// ble 0x8257a8d8
	if (!ctx.cr0.gt) goto loc_8257A8D8;
loc_8257A8BC:
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r8,r9,1,0,30
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r8.u64 & 0xFFFFFFFF00000001);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r8,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r8.u32);
	// blt cr6,0x8257a8bc
	if (ctx.cr6.lt) goto loc_8257A8BC;
loc_8257A8D8:
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r28,36(r31)
	REX_STORE_U32(r31.u32 + 36, r28.u32);
	// stw r22,40(r31)
	REX_STORE_U32(r31.u32 + 40, r22.u32);
	// stw r23,44(r31)
	REX_STORE_U32(r31.u32 + 44, r23.u32);
	// stw r26,120(r31)
	REX_STORE_U32(r31.u32 + 120, r26.u32);
	// ble cr6,0x8257a90c
	if (!ctx.cr6.gt) goto loc_8257A90C;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_8257A8F8:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// bdnz 0x8257a8f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8257A8F8;
loc_8257A90C:
	// subfic r11,r29,24
	ctx.xer.ca = r29.u32 <= 24;
	ctx.r11.u64 = static_cast<uint64_t>(24) - r29.u64;
loc_8257A910:
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_825D2EE0) {
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
	ctx.lr = 0x825D2EE8;
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
	// bne cr6,0x825d2f28
	if (!ctx.cr6.eq) goto loc_825D2F28;
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
	// li r7,1777
	ctx.r7.s64 = 1777;
	// bl 0x824ea978
	ctx.lr = 0x825D2F28;
	sub_824EA978(ctx, base);
loc_825D2F28:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825D2F38;
	sub_824F05F0(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x825d2fa0
	if (!ctx.cr6.eq) goto loc_825D2FA0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d2f5c
	if (ctx.cr6.eq) goto loc_825D2F5C;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D2F5C;
	sub_824F0950(ctx, base);
loc_825D2F5C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d2f98
	if (ctx.cr6.eq) goto loc_825D2F98;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d2f98
	if (ctx.cr6.eq) goto loc_825D2F98;
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
	// li r6,35
	ctx.r6.s64 = 35;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,140(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// bctrl 
	ctx.lr = 0x825D2F98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D2F98:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d2ffc
	goto loc_825D2FFC;
loc_825D2FA0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d2fbc
	if (ctx.cr6.eq) goto loc_825D2FBC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D2FBC;
	sub_824F0950(ctx, base);
loc_825D2FBC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d2ff8
	if (ctx.cr6.eq) goto loc_825D2FF8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d2ff8
	if (ctx.cr6.eq) goto loc_825D2FF8;
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
	// li r6,35
	ctx.r6.s64 = 35;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,140(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// bctrl 
	ctx.lr = 0x825D2FF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D2FF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D2FFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825D5F60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825D5F68;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,19200
	ctx.r11.s64 = 1258291200;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x825d5fc8
	if (ctx.cr6.eq) goto loc_825D5FC8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x825d5fc8
	if (ctx.cr6.eq) goto loc_825D5FC8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825d1a98
	ctx.lr = 0x825D5F9C;
	sub_825D1A98(ctx, base);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5980
	ctx.r4.s64 = ctx.r10.s64 + 5980;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,88
	ctx.r6.s64 = 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,352(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 352);
	// bctrl 
	ctx.lr = 0x825D5FC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D5FC8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825D86D8) {
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
	// lwz r31,136(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// b 0x825d8704
	goto loc_825D8704;
loc_825D86F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825fccb0
	ctx.lr = 0x825D86F8;
	sub_825FCCB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d8728
	if (ctx.cr0.eq) goto loc_825D8728;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_825D8704:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825d86f0
	if (!ctx.cr6.eq) goto loc_825D86F0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_825D8714:
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
loc_825D8728:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825d8714
	goto loc_825D8714;
}

DEFINE_REX_FUNC(sub_825DE2F8) {
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
	ctx.lr = 0x825DE328;
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
	ctx.lr = 0x825DE344;
	sub_825D2088(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x825de37c
	if (ctx.cr6.eq) goto loc_825DE37C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x825de384
	if (!ctx.cr6.eq) goto loc_825DE384;
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
	// li r7,1465
	ctx.r7.s64 = 1465;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DE378;
	sub_824EA978(ctx, base);
	// b 0x825de384
	goto loc_825DE384;
loc_825DE37C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dc028
	ctx.lr = 0x825DE384;
	sub_825DC028(ctx, base);
loc_825DE384:
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

DEFINE_REX_FUNC(sub_825E0F70) {
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
	ctx.lr = 0x825E0F78;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825e0fa4
	if (ctx.cr6.eq) goto loc_825E0FA4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,228(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 228);
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825e16c4
	if (!ctx.cr0.eq) goto loc_825E16C4;
loc_825E0FA4:
	// li r18,0
	r18.s64 = 0;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r26,r18
	r26.u64 = r18.u64;
	// mr r19,r18
	r19.u64 = r18.u64;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r22,r10,22852
	r22.s64 = ctx.r10.s64 + 22852;
	// addi r21,r9,11616
	r21.s64 = ctx.r9.s64 + 11616;
	// beq 0x825e10b0
	if (ctx.cr0.eq) goto loc_825E10B0;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r28,r10,11876
	r28.s64 = ctx.r10.s64 + 11876;
	// addi r27,r11,-17760
	r27.s64 = ctx.r11.s64 + -17760;
loc_825E0FE8:
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e10b0
	if (!ctx.cr0.eq) goto loc_825E10B0;
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 228);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825e1098
	if (ctx.cr0.eq) goto loc_825E1098;
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r18,4(r29)
	REX_STORE_U32(r29.u32 + 4, r18.u32);
	// beq 0x825e1054
	if (ctx.cr0.eq) goto loc_825E1054;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x82607f18
	ctx.lr = 0x825E1018;
	sub_82607F18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e0ee0
	ctx.lr = 0x825E1024;
	sub_825E0EE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e1054
	if (!ctx.cr0.eq) goto loc_825E1054;
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(r19.s32, 2, ctx.xer);
	// blt cr6,0x825e104c
	if (ctx.cr6.lt) goto loc_825E104C;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,1171
	ctx.r7.s64 = 1171;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E104C;
	sub_824EA978(ctx, base);
loc_825E104C:
	// stwu r30,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, r30.u32);
	r29.u32 = ea;
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
loc_825E1054:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825e1088
	if (ctx.cr6.eq) goto loc_825E1088;
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e1088
	if (!ctx.cr0.eq) goto loc_825E1088;
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// addi r10,r27,4
	ctx.r10.s64 = r27.s64 + 4;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x825e108c
	if (!ctx.cr0.eq) goto loc_825E108C;
loc_825E1088:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_825E108C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e1098
	if (ctx.cr0.eq) goto loc_825E1098;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
loc_825E1098:
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 228);
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// rlwinm r8,r11,30,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// bne cr6,0x825e0fe8
	if (!ctx.cr6.eq) goto loc_825E0FE8;
loc_825E10B0:
	// lwz r23,0(r20)
	r23.u64 = REX_LOAD_U32(r20.u32 + 0);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// lwz r27,4(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 4);
	// beq cr6,0x825e16c4
	if (ctx.cr6.eq) goto loc_825E16C4;
	// lwz r28,92(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(r19.s32, 1, ctx.xer);
	// lwz r30,88(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bne cr6,0x825e129c
	if (!ctx.cr6.eq) goto loc_825E129C;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// bne cr6,0x825e112c
	if (!ctx.cr6.eq) goto loc_825E112C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rotlwi r30,r30,0
	r30.u64 = __builtin_rotateleft32(r30.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x82607f18
	ctx.lr = 0x825E10EC;
	sub_82607F18(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d7ae0
	ctx.lr = 0x825E10F8;
	sub_825D7AE0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_825E1100:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x825e0e58
	ctx.lr = 0x825E110C;
	sub_825E0E58(ctx, base);
loc_825E110C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_825E1110:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,948(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 948);
	// bl 0x825fcba8
	ctx.lr = 0x825E111C;
	sub_825FCBA8(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// b 0x825e16c4
	goto loc_825E16C4;
loc_825E112C:
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// bne cr6,0x825e156c
	if (!ctx.cr6.eq) goto loc_825E156C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x82607f18
	ctx.lr = 0x825E1144;
	sub_82607F18(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d7ae0
	ctx.lr = 0x825E1150;
	sub_825D7AE0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x82607f18
	ctx.lr = 0x825E1164;
	sub_82607F18(ctx, base);
	// lwz r29,0(r20)
	r29.u64 = REX_LOAD_U32(r20.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r18
	r25.u64 = r18.u64;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// b 0x825e11b4
	goto loc_825E11B4;
loc_825E1178:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e11c4
	if (!ctx.cr0.eq) goto loc_825E11C4;
	// lwz r11,228(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e11a4
	if (ctx.cr0.eq) goto loc_825E11A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x82607f18
	ctx.lr = 0x825E119C;
	sub_82607F18(ctx, base);
	// cmpw cr6,r26,r3
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x825e11c0
	if (ctx.cr6.eq) goto loc_825E11C0;
loc_825E11A4:
	// lwz r11,228(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 228);
	// lwz r29,8(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 8);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
loc_825E11B4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x825e1178
	if (!ctx.cr6.eq) goto loc_825E1178;
	// b 0x825e11c4
	goto loc_825E11C4;
loc_825E11C0:
	// li r25,1
	r25.s64 = 1;
loc_825E11C4:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e11d8
	if (!ctx.cr0.eq) goto loc_825E11D8;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// b 0x825e1100
	goto loc_825E1100;
loc_825E11D8:
	// lwz r29,0(r20)
	r29.u64 = REX_LOAD_U32(r20.u32 + 0);
	// mr r26,r18
	r26.u64 = r18.u64;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// b 0x825e1240
	goto loc_825E1240;
loc_825E11E8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e1250
	if (!ctx.cr0.eq) goto loc_825E1250;
	// lwz r11,228(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e1230
	if (ctx.cr0.eq) goto loc_825E1230;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825e0808
	ctx.lr = 0x825E1208;
	sub_825E0808(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e124c
	if (!ctx.cr0.eq) goto loc_825E124C;
	// lwz r11,228(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e1230
	if (ctx.cr0.eq) goto loc_825E1230;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825e0ee0
	ctx.lr = 0x825E1228;
	sub_825E0EE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e124c
	if (!ctx.cr0.eq) goto loc_825E124C;
loc_825E1230:
	// lwz r11,228(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 228);
	// lwz r29,8(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 8);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
loc_825E1240:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x825e11e8
	if (!ctx.cr6.eq) goto loc_825E11E8;
	// b 0x825e1250
	goto loc_825E1250;
loc_825E124C:
	// li r26,1
	r26.s64 = 1;
loc_825E1250:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e156c
	if (!ctx.cr0.eq) goto loc_825E156C;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e0e58
	ctx.lr = 0x825E126C;
	sub_825E0E58(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r3,948(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 948);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x825fcc08
	ctx.lr = 0x825E1280;
	sub_825FCC08(ctx, base);
loc_825E1280:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// bl 0x825d7b48
	ctx.lr = 0x825E1294;
	sub_825D7B48(ctx, base);
	// stw r29,0(r20)
	REX_STORE_U32(r20.u32 + 0, r29.u32);
	// b 0x825e16c4
	goto loc_825E16C4;
loc_825E129C:
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(r19.s32, 2, ctx.xer);
	// bne cr6,0x825e156c
	if (!ctx.cr6.eq) goto loc_825E156C;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// bne cr6,0x825e156c
	if (!ctx.cr6.eq) goto loc_825E156C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x82607f18
	ctx.lr = 0x825E12BC;
	sub_82607F18(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d7ae0
	ctx.lr = 0x825E12C8;
	sub_825D7AE0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x82607f18
	ctx.lr = 0x825E12DC;
	sub_82607F18(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825d7ae0
	ctx.lr = 0x825E12E8;
	sub_825D7AE0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e0ee0
	ctx.lr = 0x825E12F8;
	sub_825E0EE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e1364
	if (!ctx.cr0.eq) goto loc_825E1364;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825e0ee0
	ctx.lr = 0x825E130C;
	sub_825E0EE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e1364
	if (!ctx.cr0.eq) goto loc_825E1364;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e0e58
	ctx.lr = 0x825E1328;
	sub_825E0E58(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,948(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 948);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x825fcba8
	ctx.lr = 0x825E133C;
	sub_825FCBA8(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825e0e58
	ctx.lr = 0x825E135C;
	sub_825E0E58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x825e1110
	goto loc_825E1110;
loc_825E1364:
	// cmpw cr6,r26,r29
	ctx.cr6.compare<int32_t>(r26.s32, r29.s32, ctx.xer);
	// bne cr6,0x825e1428
	if (!ctx.cr6.eq) goto loc_825E1428;
	// lwz r10,128(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 128);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// lwz r9,128(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 128);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
loc_825E1380:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x825e13a0
	if (ctx.cr6.eq) goto loc_825E13A0;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x825e1420
	if (!ctx.cr6.eq) goto loc_825E1420;
loc_825E13A0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x825e1380
	if (ctx.cr6.lt) goto loc_825E1380;
	// li r11,1
	ctx.r11.s64 = 1;
loc_825E13B0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e13d4
	if (!ctx.cr0.eq) goto loc_825E13D4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r11,11860
	ctx.r5.s64 = ctx.r11.s64 + 11860;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,1282
	ctx.r7.s64 = 1282;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E13D4;
	sub_824EA978(ctx, base);
loc_825E13D4:
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825E13E0:
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x825e13f8
	if (ctx.cr6.eq) goto loc_825E13F8;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
loc_825E13F8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x825e13e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825E13E0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e0e58
	ctx.lr = 0x825E1414;
	sub_825E0E58(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// b 0x825e110c
	goto loc_825E110C;
loc_825E1420:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// b 0x825e13b0
	goto loc_825E13B0;
loc_825E1428:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825e0ee0
	ctx.lr = 0x825E1434;
	sub_825E0EE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e14c8
	if (ctx.cr0.eq) goto loc_825E14C8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e0808
	ctx.lr = 0x825E1448;
	sub_825E0808(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e14c8
	if (!ctx.cr0.eq) goto loc_825E14C8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825e0808
	ctx.lr = 0x825E145C;
	sub_825E0808(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e14c8
	if (!ctx.cr0.eq) goto loc_825E14C8;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825e0e58
	ctx.lr = 0x825E1478;
	sub_825E0E58(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r3,948(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 948);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x825fcc08
	ctx.lr = 0x825E148C;
	sub_825FCC08(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// bl 0x825d7b48
	ctx.lr = 0x825E14A0;
	sub_825D7B48(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e0e58
	ctx.lr = 0x825E14B4;
	sub_825E0E58(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,948(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 948);
	// bl 0x825fcba8
	ctx.lr = 0x825E14C4;
	sub_825FCBA8(ctx, base);
	// b 0x825e1280
	goto loc_825E1280;
loc_825E14C8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e0ee0
	ctx.lr = 0x825E14D4;
	sub_825E0EE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e156c
	if (ctx.cr0.eq) goto loc_825E156C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825e0808
	ctx.lr = 0x825E14E8;
	sub_825E0808(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e156c
	if (!ctx.cr0.eq) goto loc_825E156C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e0808
	ctx.lr = 0x825E14FC;
	sub_825E0808(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e156c
	if (!ctx.cr0.eq) goto loc_825E156C;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e0e58
	ctx.lr = 0x825E1518;
	sub_825E0E58(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r3,948(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 948);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x825fcc08
	ctx.lr = 0x825E152C;
	sub_825FCC08(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// bl 0x825d7b48
	ctx.lr = 0x825E1540;
	sub_825D7B48(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825e0e58
	ctx.lr = 0x825E1554;
	sub_825E0E58(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,948(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 948);
	// bl 0x825fcba8
	ctx.lr = 0x825E1564;
	sub_825FCBA8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x825e16b0
	goto loc_825E16B0;
loc_825E156C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x82607f18
	ctx.lr = 0x825E157C;
	sub_82607F18(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d7ae0
	ctx.lr = 0x825E1588;
	sub_825D7AE0(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x825e15a4
	if (!ctx.cr6.lt) goto loc_825E15A4;
	// lwz r3,140(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 140);
	// bl 0x825e94f0
	ctx.lr = 0x825E15A0;
	sub_825E94F0(ctx, base);
	// stw r3,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r3.u32);
loc_825E15A4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 132);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x825e0df8
	ctx.lr = 0x825E15B8;
	sub_825E0DF8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r3,948(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 948);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x825fcc08
	ctx.lr = 0x825E15CC;
	sub_825FCC08(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(r19.s32, 2, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// bne cr6,0x825e163c
	if (!ctx.cr6.eq) goto loc_825E163C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x82607f18
	ctx.lr = 0x825E15F0;
	sub_82607F18(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825d7ae0
	ctx.lr = 0x825E15FC;
	sub_825D7AE0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825e0e58
	ctx.lr = 0x825E1610;
	sub_825E0E58(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,948(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 948);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x825fcba8
	ctx.lr = 0x825E1624;
	sub_825FCBA8(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// bl 0x825d7b48
	ctx.lr = 0x825E1638;
	sub_825D7B48(ctx, base);
	// mr r27,r29
	r27.u64 = r29.u64;
loc_825E163C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x825f9b00
	ctx.lr = 0x825E1648;
	sub_825F9B00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825f7420
	ctx.lr = 0x825E1654;
	sub_825F7420(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f7460
	ctx.lr = 0x825E165C;
	sub_825F7460(ctx, base);
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(r27.u32, r30.u32, ctx.xer);
	// bne cr6,0x825e1668
	if (!ctx.cr6.eq) goto loc_825E1668;
	// mr r27,r29
	r27.u64 = r29.u64;
loc_825E1668:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825e1684
	if (ctx.cr6.eq) goto loc_825E1684;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x825fac60
	ctx.lr = 0x825E167C;
	sub_825FAC60(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x825e1688
	goto loc_825E1688;
loc_825E1684:
	// mr r30,r18
	r30.u64 = r18.u64;
loc_825E1688:
	// stw r25,56(r30)
	REX_STORE_U32(r30.u32 + 56, r25.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r18,80(r30)
	REX_STORE_U32(r30.u32 + 80, r18.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d7c78
	ctx.lr = 0x825E16A0;
	sub_825D7C78(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f7440
	ctx.lr = 0x825E16AC;
	sub_825F7440(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_825E16B0:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// bl 0x825d7b48
	ctx.lr = 0x825E16C0;
	sub_825D7B48(ctx, base);
	// stw r26,0(r20)
	REX_STORE_U32(r20.u32 + 0, r26.u32);
loc_825E16C4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_82612C18) {
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
	// lwz r11,448(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82612c64
	if (!ctx.cr6.gt) goto loc_82612C64;
loc_82612C40:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,472(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 472);
	// bl 0x826108d0
	ctx.lr = 0x82612C4C;
	sub_826108D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82612c80
	if (ctx.cr0.eq) goto loc_82612C80;
	// lwz r11,448(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 448);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82612c40
	if (ctx.cr6.lt) goto loc_82612C40;
loc_82612C64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82612C68:
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
loc_82612C80:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82612c68
	goto loc_82612C68;
}

DEFINE_REX_FUNC(sub_82614B30) {
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
	ctx.lr = 0x82614B38;
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,64(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// li r10,256
	ctx.r10.s64 = 256;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// subfic r11,r9,1
	ctx.xer.ca = ctx.r9.u32 <= 1;
	ctx.r11.u64 = static_cast<uint64_t>(1) - ctx.r9.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// lwz r7,484(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 484);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r6,7936
	ctx.r6.s64 = 7936;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// stw r8,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r8.u32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// divwu r10,r10,r11
	ctx.r10.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r6,r6,r11
	ctx.r6.u64 = uint32_t(ctx.r11.u32 ? ctx.r6.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r5,4
	ctx.r5.s64 = 4;
	// divwu r7,r11,r10
	ctx.r7.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// li r8,512
	ctx.r8.s64 = 512;
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_82614BB0:
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82614bcc
	if (!ctx.cr6.gt) goto loc_82614BCC;
	// rlwinm. r5,r5,31,25,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// bne 0x82614bb0
	if (!ctx.cr0.eq) goto loc_82614BB0;
loc_82614BCC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r9,31,1,31
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r11,r30,12
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(12));
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x826a2d14
	ctx.lr = 0x82614BEC;
	sub_826A2D14(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r26,r1,80
	r26.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82614c50
	if (ctx.cr6.eq) goto loc_82614C50;
	// addi r7,r30,-1
	ctx.r7.s64 = r30.s64 + -1;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// addi r11,r26,-3
	ctx.r11.s64 = r26.s64 + -3;
loc_82614C10:
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82614c28
	if (!ctx.cr6.eq) goto loc_82614C28;
	// lwz r9,64(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 64);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// bne 0x82614c2c
	if (!ctx.cr0.eq) goto loc_82614C2C;
loc_82614C28:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82614C2C:
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r4,3(r11)
	REX_STORE_U32(ctx.r11.u32 + 3, ctx.r4.u32);
	// stw r8,7(r11)
	REX_STORE_U32(ctx.r11.u32 + 7, ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stb r9,11(r11)
	REX_STORE_U8(ctx.r11.u32 + 11, ctx.r9.u8);
	// stbu r5,12(r11)
	ea = 12 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82614c10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82614C10;
loc_82614C50:
	// bl 0x826106e8
	ctx.lr = 0x82614C54;
	sub_826106E8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82610700
	ctx.lr = 0x82614C60;
	sub_82610700(ctx, base);
	// lwz r11,52(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 52);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r11,16040
	ctx.r3.s64 = ctx.r11.s64 + 16040;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82614a10
	ctx.lr = 0x82614C74;
	sub_82614A10(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82614cbc
	if (!ctx.cr0.eq) goto loc_82614CBC;
	// lis r28,-32761
	r28.s64 = -2147024896;
	// ori r28,r28,14
	r28.u64 = r28.u64 | 14;
loc_82614C84:
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82614c94
	if (ctx.cr6.eq) goto loc_82614C94;
	// bl 0x82611208
	ctx.lr = 0x82614C94;
	sub_82611208(ctx, base);
loc_82614C94:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82614d1c
	if (ctx.cr6.eq) goto loc_82614D1C;
	// lwz r11,52(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 52);
	// lwz r9,16244(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16244);
loc_82614CA4:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82614cf4
	if (ctx.cr6.eq) goto loc_82614CF4;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82614cf8
	goto loc_82614CF8;
loc_82614CBC:
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82611408
	ctx.lr = 0x82614CD8;
	sub_82611408(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x82614c84
	if (ctx.cr0.lt) goto loc_82614C84;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// stw r29,0(r24)
	REX_STORE_U32(r24.u32 + 0, r29.u32);
	// stw r30,0(r25)
	REX_STORE_U32(r25.u32 + 0, r30.u32);
	// b 0x82614d1c
	goto loc_82614D1C;
loc_82614CF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82614CF8:
	// lwz r11,252(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82614ca4
	if (ctx.cr6.lt) goto loc_82614CA4;
	// lwz r10,256(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82614ca4
	if (!ctx.cr6.lt) goto loc_82614CA4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82614440
	ctx.lr = 0x82614D1C;
	sub_82614440(ctx, base);
loc_82614D1C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82626A88) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,2232
	ctx.r11.s64 = ctx.r11.s64 + 2232;
	// addi r10,r10,-15996
	ctx.r10.s64 = ctx.r10.s64 + -15996;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r4,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r4.u32);
	// stw r5,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r5.u32);
	// stw r6,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r6.u32);
	// stw r7,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r7.u32);
	// stw r8,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r8.u32);
	// stw r30,120(r31)
	REX_STORE_U32(r31.u32 + 120, r30.u32);
	// stw r30,124(r31)
	REX_STORE_U32(r31.u32 + 124, r30.u32);
	// stw r30,128(r31)
	REX_STORE_U32(r31.u32 + 128, r30.u32);
	// bl 0x826166a0
	ctx.lr = 0x82626B08;
	sub_826166A0(ctx, base);
	// addi r3,r31,352
	ctx.r3.s64 = r31.s64 + 352;
	// bl 0x826166a0
	ctx.lr = 0x82626B10;
	sub_826166A0(ctx, base);
	// addi r11,r31,576
	ctx.r11.s64 = r31.s64 + 576;
	// stw r30,572(r31)
	REX_STORE_U32(r31.u32 + 572, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,656(r31)
	REX_STORE_U32(r31.u32 + 656, ctx.r11.u32);
	// stw r30,660(r31)
	REX_STORE_U32(r31.u32 + 660, r30.u32);
	// stw r30,664(r31)
	REX_STORE_U32(r31.u32 + 664, r30.u32);
	// stw r30,668(r31)
	REX_STORE_U32(r31.u32 + 668, r30.u32);
	// std r30,672(r31)
	REX_STORE_U64(r31.u32 + 672, r30.u64);
	// std r30,680(r31)
	REX_STORE_U64(r31.u32 + 680, r30.u64);
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

DEFINE_REX_FUNC(sub_82629798) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82794264
	ctx.lr = 0x826297B4;
	__imp__XAudioGetSpeakerConfig(ctx, base);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-27264
	ctx.r11.s64 = ctx.r11.s64 + -27264;
	// addi r9,r31,-4
	ctx.r9.s64 = r31.s64 + -4;
	// std r10,52(r31)
	REX_STORE_U64(r31.u32 + 52, ctx.r10.u64);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r31,28
	ctx.r4.s64 = r31.s64 + 28;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// bl 0x82794254
	ctx.lr = 0x826297FC;
	__imp__XAudioRegisterRenderDriverClient(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

DEFINE_REX_FUNC(sub_82633DF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f11,19036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 19036);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfs f12,3704(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,2788(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2788);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,3788(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3788);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x82633f2c
	if (ctx.cr6.lt) goto loc_82633F2C;
	// addi r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 1;
	// addi r6,r3,2
	ctx.r6.s64 = ctx.r3.s64 + 2;
	// addi r9,r3,3
	ctx.r9.s64 = ctx.r3.s64 + 3;
	// addi r8,r5,-3
	ctx.r8.s64 = ctx.r5.s64 + -3;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
loc_82633E3C:
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82633e50
	if (!ctx.cr6.lt) goto loc_82633E50;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82633e5c
	goto loc_82633E5C;
loc_82633E50:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x82633e5c
	if (!ctx.cr6.gt) goto loc_82633E5C;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_82633E5C:
	// fadds f9,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f0,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fctidz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f7.u64);
	// lbz r31,-9(r1)
	r31.u64 = REX_LOAD_U8(ctx.r1.u32 + -9);
	// stbx r31,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, r31.u8);
	// bge cr6,0x82633e88
	if (!ctx.cr6.lt) goto loc_82633E88;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82633e94
	goto loc_82633E94;
loc_82633E88:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x82633e94
	if (!ctx.cr6.gt) goto loc_82633E94;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_82633E94:
	// fadds f9,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fctidz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f7.u64);
	// lbz r31,-9(r1)
	r31.u64 = REX_LOAD_U8(ctx.r1.u32 + -9);
	// stbx r31,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, r31.u8);
	// bge cr6,0x82633ec0
	if (!ctx.cr6.lt) goto loc_82633EC0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82633ecc
	goto loc_82633ECC;
loc_82633EC0:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x82633ecc
	if (!ctx.cr6.gt) goto loc_82633ECC;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_82633ECC:
	// fadds f9,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fctidz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f7.u64);
	// lbz r31,-9(r1)
	r31.u64 = REX_LOAD_U8(ctx.r1.u32 + -9);
	// stbx r31,r6,r11
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, r31.u8);
	// bge cr6,0x82633ef8
	if (!ctx.cr6.lt) goto loc_82633EF8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82633f04
	goto loc_82633F04;
loc_82633EF8:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x82633f04
	if (!ctx.cr6.gt) goto loc_82633F04;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_82633F04:
	// fadds f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// fmuls f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fctidz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lbz r31,-9(r1)
	r31.u64 = REX_LOAD_U8(ctx.r1.u32 + -9);
	// stbx r31,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, r31.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82633e3c
	if (ctx.cr6.lt) goto loc_82633E3C;
loc_82633F2C:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82633f88
	if (!ctx.cr6.lt) goto loc_82633F88;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82633F44:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82633f58
	if (!ctx.cr6.lt) goto loc_82633F58;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82633f64
	goto loc_82633F64;
loc_82633F58:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x82633f64
	if (!ctx.cr6.gt) goto loc_82633F64;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_82633F64:
	// fadds f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmuls f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fctidz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lbz r9,-9(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + -9);
	// stbx r9,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82633f44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82633F44;
loc_82633F88:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8263CB78) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c88
	ctx.lr = 0x8263CB80;
	// stfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -144, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	r20.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r17,r20
	r17.u64 = r20.u64;
	// bl 0x826ed328
	ctx.lr = 0x8263CBA4;
	sub_826ED328(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8263cddc
	if (ctx.cr6.eq) goto loc_8263CDDC;
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8263cbd0
	if (!ctx.cr6.eq) goto loc_8263CBD0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263cddc
	if (ctx.cr6.eq) goto loc_8263CDDC;
	// lwz r16,28(r26)
	r16.u64 = REX_LOAD_U32(r26.u32 + 28);
	// lwz r25,40(r26)
	r25.u64 = REX_LOAD_U32(r26.u32 + 40);
	// lwz r10,32(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 32);
	// b 0x8263cbe4
	goto loc_8263CBE4;
loc_8263CBD0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8263cddc
	if (ctx.cr6.eq) goto loc_8263CDDC;
	// lwz r16,4(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lhz r25,18(r30)
	r25.u64 = REX_LOAD_U16(r30.u32 + 18);
	// lhz r10,2(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 2);
loc_8263CBE4:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// ble cr6,0x8263cddc
	if (!ctx.cr6.gt) goto loc_8263CDDC;
	// subfic r11,r25,24
	ctx.xer.ca = r25.u32 <= 24;
	ctx.r11.u64 = static_cast<uint64_t>(24) - r25.u64;
	// li r18,1
	r18.s64 = 1;
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8263cc20
	if (ctx.cr6.lt) goto loc_8263CC20;
	// slw r11,r18,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r11.u8 & 0x3F));
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,128(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// b 0x8263cc4c
	goto loc_8263CC4C;
loc_8263CC20:
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// slw r8,r18,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r11.u8 & 0x3F));
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// lfs f0,3704(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// std r7,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f10,128(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
loc_8263CC4C:
	// lwz r11,44(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 44);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// stw r11,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r11.u32);
	// bne cr6,0x8263cc6c
	if (!ctx.cr6.eq) goto loc_8263CC6C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263c5a0
	ctx.lr = 0x8263CC68;
	sub_8263C5A0(ctx, base);
	// b 0x8263ce8c
	goto loc_8263CE8C;
loc_8263CC6C:
	// lwz r11,60(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8263cddc
	if (ctx.cr6.lt) goto loc_8263CDDC;
	// lwz r11,64(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8263cddc
	if (ctx.cr6.lt) goto loc_8263CDDC;
	// lwz r11,80(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8263cddc
	if (ctx.cr6.lt) goto loc_8263CDDC;
	// lwz r11,84(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8263cddc
	if (ctx.cr6.lt) goto loc_8263CDDC;
	// lwz r11,92(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8263cddc
	if (ctx.cr6.lt) goto loc_8263CDDC;
	// li r5,120
	ctx.r5.s64 = 120;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8263CCB8;
	sub_826A1E70(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r20,48(r31)
	REX_STORE_U32(r31.u32 + 48, r20.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263ccd4
	if (!ctx.cr6.eq) goto loc_8263CCD4;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263ce1c
	if (ctx.cr6.eq) goto loc_8263CE1C;
loc_8263CCD4:
	// lwz r10,48(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8263cddc
	if (ctx.cr6.eq) goto loc_8263CDDC;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8263cddc
	if (ctx.cr6.lt) goto loc_8263CDDC;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lfd f13,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// lfd f0,2168(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 2168);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8263cddc
	if (!ctx.cr6.eq) goto loc_8263CDDC;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfd f31,-3744(r8)
	f31.u64 = REX_LOAD_U64(ctx.r8.u32 + -3744);
	// lfd f0,-16(r7)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + -16);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x8263cddc
	if (!ctx.cr6.eq) goto loc_8263CDDC;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x826e07e0
	ctx.lr = 0x8263CD2C;
	sub_826E07E0(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263d3f0
	if (ctx.cr6.eq) goto loc_8263D3F0;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8263ce1c
	if (!ctx.cr6.gt) goto loc_8263CE1C;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
loc_8263CD54:
	// lwz r10,48(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 48);
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lfdx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// stfdx f0,r8,r9
	REX_STORE_U64(ctx.r8.u32 + ctx.r9.u32, ctx.f0.u64);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,48(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 48);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfd f13,8(r6)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// stfd f13,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.f13.u64);
	// lwz r4,52(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 52);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r10,-2
	ctx.r3.s64 = ctx.r10.s64 + -2;
	// cmpw cr6,r5,r3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8263cdf4
	if (ctx.cr6.eq) goto loc_8263CDF4;
	// lwz r10,48(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 48);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lwz r6,48(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 48);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lfdx f0,r11,r10
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// lfdx f13,r8,r10
	ctx.f13.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r10.u32);
	// lfd f12,8(r7)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// fsub f11,f13,f0
	ctx.f11.f64 = ctx.f13.f64 - ctx.f0.f64;
	// lfd f10,8(r4)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// fsub f9,f10,f12
	ctx.f9.f64 = ctx.f10.f64 - ctx.f12.f64;
	// fdiv f8,f9,f11
	ctx.f8.f64 = ctx.f9.f64 / ctx.f11.f64;
	// stfd f8,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.f8.u64);
	// lwz r10,48(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 48);
	// lfdx f7,r8,r10
	ctx.f7.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r10.u32);
	// lfdx f6,r11,r10
	ctx.f6.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// fcmpu cr6,f7,f6
	ctx.cr6.compare(ctx.f7.f64, ctx.f6.f64);
	// bge cr6,0x8263ce00
	if (!ctx.cr6.lt) goto loc_8263CE00;
loc_8263CDDC:
	// lis r17,-32761
	r17.s64 = -2147024896;
	// ori r17,r17,87
	r17.u64 = r17.u64 | 87;
loc_8263CDE4:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x826a1cd8
	return;
loc_8263CDF4:
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stfd f31,16(r10)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r10.u32 + 16, f31.u64);
loc_8263CE00:
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8263cd54
	if (ctx.cr6.lt) goto loc_8263CD54;
loc_8263CE1C:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263ce3c
	if (ctx.cr6.eq) goto loc_8263CE3C;
	// li r11,100
	ctx.r11.s64 = 100;
	// stw r18,56(r31)
	REX_STORE_U32(r31.u32 + 56, r18.u32);
	// li r10,500
	ctx.r10.s64 = 500;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
loc_8263CE3C:
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263ce64
	if (!ctx.cr6.eq) goto loc_8263CE64;
	// lwz r11,40(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263ce64
	if (!ctx.cr6.eq) goto loc_8263CE64;
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// beq cr6,0x8263ce68
	if (ctx.cr6.eq) goto loc_8263CE68;
loc_8263CE64:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_8263CE68:
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8263ce7c
	if (ctx.cr6.eq) goto loc_8263CE7C;
	// stw r18,96(r31)
	REX_STORE_U32(r31.u32 + 96, r18.u32);
loc_8263CE7C:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263ce8c
	if (!ctx.cr6.eq) goto loc_8263CE8C;
	// stw r20,32(r31)
	REX_STORE_U32(r31.u32 + 32, r20.u32);
loc_8263CE8C:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263ceb4
	if (ctx.cr6.eq) goto loc_8263CEB4;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8263ceb4
	if (ctx.cr6.eq) goto loc_8263CEB4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8263ceb4
	if (ctx.cr6.eq) goto loc_8263CEB4;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8263cddc
	if (!ctx.cr6.eq) goto loc_8263CDDC;
loc_8263CEB4:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263cecc
	if (ctx.cr6.eq) goto loc_8263CECC;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263cddc
	if (!ctx.cr6.eq) goto loc_8263CDDC;
loc_8263CECC:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x8263CED8;
	sub_826E07E0(ctx, base);
	// stw r3,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263d3f0
	if (ctx.cr6.eq) goto loc_8263D3F0;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x8263CEF0;
	sub_826E07E0(ctx, base);
	// stw r3,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263d3f0
	if (ctx.cr6.eq) goto loc_8263D3F0;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r19,1000
	r19.s64 = 1000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r21,r10,14540
	r21.s64 = ctx.r10.s64 + 14540;
	// beq cr6,0x8263cf34
	if (ctx.cr6.eq) goto loc_8263CF34;
	// mullw r11,r11,r16
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r16.s32);
	// addi r3,r21,296
	ctx.r3.s64 = r21.s64 + 296;
	// divw r4,r11,r19
	ctx.r4.u64 = uint32_t((r19.s32 && !(ctx.r11.s32 == INT32_MIN && r19.s32 == -1)) ? ctx.r11.s32 / r19.s32 : 0);
	// bl 0x8263c458
	ctx.lr = 0x8263CF24;
	sub_8263C458(ctx, base);
	// lis r30,16384
	r30.s64 = 1073741824;
	// subf r10,r3,r30
	ctx.r10.u64 = r30.u64 - ctx.r3.u64;
	// stw r10,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r10.u32);
	// b 0x8263cf3c
	goto loc_8263CF3C;
loc_8263CF34:
	// lis r30,16384
	r30.s64 = 1073741824;
	// stw r30,176(r31)
	REX_STORE_U32(r31.u32 + 176, r30.u32);
loc_8263CF3C:
	// lwz r28,176(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 176);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// subf r10,r28,r30
	ctx.r10.u64 = r30.u64 - r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r10.u32);
	// beq cr6,0x8263cf70
	if (ctx.cr6.eq) goto loc_8263CF70;
	// mullw r11,r11,r16
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r16.s32);
	// addi r3,r21,296
	ctx.r3.s64 = r21.s64 + 296;
	// divw r4,r11,r19
	ctx.r4.u64 = uint32_t((r19.s32 && !(ctx.r11.s32 == INT32_MIN && r19.s32 == -1)) ? ctx.r11.s32 / r19.s32 : 0);
	// bl 0x8263c458
	ctx.lr = 0x8263CF64;
	sub_8263C458(ctx, base);
	// subf r10,r3,r30
	ctx.r10.u64 = r30.u64 - ctx.r3.u64;
	// stw r10,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r10.u32);
	// b 0x8263cf74
	goto loc_8263CF74;
loc_8263CF70:
	// stw r30,180(r31)
	REX_STORE_U32(r31.u32 + 180, r30.u32);
loc_8263CF74:
	// lwz r29,180(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 180);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// subf r10,r29,r30
	ctx.r10.u64 = r30.u64 - r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r10.u32);
	// beq cr6,0x8263cfa8
	if (ctx.cr6.eq) goto loc_8263CFA8;
	// mullw r11,r11,r16
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r16.s32);
	// addi r3,r21,296
	ctx.r3.s64 = r21.s64 + 296;
	// divw r4,r11,r19
	ctx.r4.u64 = uint32_t((r19.s32 && !(ctx.r11.s32 == INT32_MIN && r19.s32 == -1)) ? ctx.r11.s32 / r19.s32 : 0);
	// bl 0x8263c458
	ctx.lr = 0x8263CF9C;
	sub_8263C458(ctx, base);
	// subf r10,r3,r30
	ctx.r10.u64 = r30.u64 - ctx.r3.u64;
	// stw r10,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// b 0x8263cfac
	goto loc_8263CFAC;
loc_8263CFA8:
	// stw r30,148(r31)
	REX_STORE_U32(r31.u32 + 148, r30.u32);
loc_8263CFAC:
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// subf r9,r10,r30
	ctx.r9.u64 = r30.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r9.u32);
	// beq cr6,0x8263cfe0
	if (ctx.cr6.eq) goto loc_8263CFE0;
	// mullw r11,r11,r16
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r16.s32);
	// addi r3,r21,296
	ctx.r3.s64 = r21.s64 + 296;
	// divw r4,r11,r19
	ctx.r4.u64 = uint32_t((r19.s32 && !(ctx.r11.s32 == INT32_MIN && r19.s32 == -1)) ? ctx.r11.s32 / r19.s32 : 0);
	// bl 0x8263c458
	ctx.lr = 0x8263CFD4;
	sub_8263C458(ctx, base);
	// subf r10,r3,r30
	ctx.r10.u64 = r30.u64 - ctx.r3.u64;
	// stw r10,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r10.u32);
	// b 0x8263cfe4
	goto loc_8263CFE4;
loc_8263CFE0:
	// stw r30,152(r31)
	REX_STORE_U32(r31.u32 + 152, r30.u32);
loc_8263CFE4:
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// divw r10,r30,r28
	ctx.r10.u64 = uint32_t((r28.s32 && !(r30.s32 == INT32_MIN && r28.s32 == -1)) ? r30.s32 / r28.s32 : 0);
	// divw r9,r30,r29
	ctx.r9.u64 = uint32_t((r29.s32 && !(r30.s32 == INT32_MIN && r29.s32 == -1)) ? r30.s32 / r29.s32 : 0);
	// subf r8,r11,r30
	ctx.r8.u64 = r30.u64 - ctx.r11.u64;
	// stw r10,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r10.u32);
	// stw r9,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r9.u32);
	// stw r8,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r8.u32);
	// lwz r7,4(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 4);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x8263d01c
	if (!ctx.cr6.eq) goto loc_8263D01C;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8263d01c
	if (ctx.cr6.gt) goto loc_8263D01C;
	// stw r20,8(r31)
	REX_STORE_U32(r31.u32 + 8, r20.u32);
loc_8263D01C:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8263d03c
	if (!ctx.cr6.eq) goto loc_8263D03C;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8263d03c
	if (ctx.cr6.gt) goto loc_8263D03C;
	// stw r18,0(r26)
	REX_STORE_U32(r26.u32 + 0, r18.u32);
	// stw r20,8(r26)
	REX_STORE_U32(r26.u32 + 8, r20.u32);
loc_8263D03C:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8263d068
	if (!ctx.cr6.eq) goto loc_8263D068;
	// lwz r10,16(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 16);
	// addi r11,r27,16
	ctx.r11.s64 = r27.s64 + 16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8263d068
	if (ctx.cr6.gt) goto loc_8263D068;
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 4);
	// stw r10,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r10.u32);
	// ld r9,16(r26)
	ctx.r9.u64 = REX_LOAD_U64(r26.u32 + 16);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
loc_8263D068:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8263d094
	if (!ctx.cr6.eq) goto loc_8263D094;
	// lwz r10,24(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 24);
	// addi r11,r27,24
	ctx.r11.s64 = r27.s64 + 24;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8263d094
	if (ctx.cr6.gt) goto loc_8263D094;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// ld r9,8(r26)
	ctx.r9.u64 = REX_LOAD_U64(r26.u32 + 8);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
loc_8263D094:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263d148
	if (ctx.cr6.eq) goto loc_8263D148;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// lwz r5,4(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r4,16(r26)
	ctx.r4.u64 = REX_LOAD_U64(r26.u32 + 16);
	// bl 0x8263c4d8
	ctx.lr = 0x8263D0B4;
	sub_8263C4D8(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263cde4
	if (ctx.cr6.lt) goto loc_8263CDE4;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// lwz r5,0(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// ld r4,8(r26)
	ctx.r4.u64 = REX_LOAD_U64(r26.u32 + 8);
	// bl 0x8263c4d8
	ctx.lr = 0x8263D0D4;
	sub_8263C4D8(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263cde4
	if (ctx.cr6.lt) goto loc_8263CDE4;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// lwz r5,4(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r4,16(r27)
	ctx.r4.u64 = REX_LOAD_U64(r27.u32 + 16);
	// bl 0x8263c4d8
	ctx.lr = 0x8263D0F4;
	sub_8263C4D8(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263cde4
	if (ctx.cr6.lt) goto loc_8263CDE4;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// lwz r5,0(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r4,24(r27)
	ctx.r4.u64 = REX_LOAD_U64(r27.u32 + 24);
	// bl 0x8263c4d8
	ctx.lr = 0x8263D114;
	sub_8263C4D8(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263cde4
	if (ctx.cr6.lt) goto loc_8263CDE4;
	// lwz r26,84(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r25,80(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(r26.s32, r25.s32, ctx.xer);
	// blt cr6,0x8263d140
	if (ctx.cr6.lt) goto loc_8263D140;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8263d158
	if (!ctx.cr6.lt) goto loc_8263D158;
loc_8263D140:
	// stw r20,8(r31)
	REX_STORE_U32(r31.u32 + 8, r20.u32);
	// b 0x8263d158
	goto loc_8263D158;
loc_8263D148:
	// lwz r25,80(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r26,84(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_8263D158:
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8263d17c
	if (ctx.cr6.eq) goto loc_8263D17C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8263d180
	if (ctx.cr6.eq) goto loc_8263D180;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8263d180
	if (ctx.cr6.eq) goto loc_8263D180;
loc_8263D17C:
	// stw r18,256(r31)
	REX_STORE_U32(r31.u32 + 256, r18.u32);
loc_8263D180:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8263d288
	if (ctx.cr6.eq) goto loc_8263D288;
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8263d288
	if (ctx.cr6.eq) goto loc_8263D288;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8263d1c0
	if (!ctx.cr6.eq) goto loc_8263D1C0;
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8263d1c0
	if (!ctx.cr6.eq) goto loc_8263D1C0;
	// addis r10,r25,192
	ctx.r10.s64 = r25.s64 + 12582912;
	// xoris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 ^ 2147483648;
	// subf r8,r10,r20
	ctx.r8.u64 = r20.u64 - ctx.r10.u64;
	// addc r7,r8,r9
	ctx.xer.ca = ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32;
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 & ctx.r10.u64;
loc_8263D1C0:
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// subf r7,r25,r8
	ctx.r7.u64 = ctx.r8.u64 - r25.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r7,r26
	ctx.r10.u64 = ctx.r7.u64 + r26.u64;
	// subf r4,r8,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r8.u64;
	// subfic r6,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r6.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// rlwinm r5,r10,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// addme r3,r5
	temp.u8 = (ctx.r5.u32 + 0xFFFFFFFFu < ctx.r5.u32) | (ctx.r5.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r5.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// li r6,2
	ctx.r6.s64 = 2;
	// and r5,r3,r10
	ctx.r5.u64 = ctx.r3.u64 & ctx.r10.u64;
	// stw r6,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r6.u32);
	// srawi r10,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 3;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// xoris r3,r11,32768
	ctx.r3.u64 = ctx.r11.u64 ^ 2147483648;
	// subf r9,r11,r20
	ctx.r9.u64 = r20.u64 - ctx.r11.u64;
	// xoris r6,r10,32768
	ctx.r6.u64 = ctx.r10.u64 ^ 2147483648;
	// addc r5,r9,r3
	ctx.xer.ca = ctx.r9.u32 + ctx.r3.u32 < ctx.r9.u32;
	ctx.r5.u64 = ctx.r9.u64 + ctx.r3.u64;
	// subf r5,r10,r20
	ctx.r5.u64 = r20.u64 - ctx.r10.u64;
	// subf r9,r25,r4
	ctx.r9.u64 = ctx.r4.u64 - r25.u64;
	// subfe r4,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addc r3,r5,r6
	ctx.xer.ca = ctx.r5.u32 + ctx.r6.u32 < ctx.r5.u32;
	ctx.r3.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + r26.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// subfic r3,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r3.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// and r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 & ctx.r10.u64;
	// addme r3,r6
	temp.u8 = (ctx.r6.u32 + 0xFFFFFFFFu < ctx.r6.u32) | (ctx.r6.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r6.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ctx.r11.u64;
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// and r10,r3,r9
	ctx.r10.u64 = ctx.r3.u64 & ctx.r9.u64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// xoris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 ^ 2147483648;
	// subf r8,r11,r20
	ctx.r8.u64 = r20.u64 - ctx.r11.u64;
	// xoris r7,r10,32768
	ctx.r7.u64 = ctx.r10.u64 ^ 2147483648;
	// addc r6,r8,r9
	ctx.xer.ca = ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32;
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r4,r10,r20
	ctx.r4.u64 = r20.u64 - ctx.r10.u64;
	// subfe r3,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addc r9,r4,r7
	ctx.xer.ca = ctx.r4.u32 + ctx.r7.u32 < ctx.r4.u32;
	ctx.r9.u64 = ctx.r4.u64 + ctx.r7.u64;
	// and r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 & ctx.r11.u64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
loc_8263D288:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8263d330
	if (!ctx.cr6.gt) goto loc_8263D330;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x8263D29C;
	sub_826E07E0(ctx, base);
	// stw r3,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263d3f0
	if (ctx.cr6.eq) goto loc_8263D3F0;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x8263D2B8;
	sub_826A2E60(ctx, base);
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x8263D2C4;
	sub_826E07E0(ctx, base);
	// stw r3,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263d3f0
	if (ctx.cr6.eq) goto loc_8263D3F0;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x8263D2E0;
	sub_826A2E60(ctx, base);
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x8263D2EC;
	sub_826E07E0(ctx, base);
	// stw r3,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263d3f0
	if (ctx.cr6.eq) goto loc_8263D3F0;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x8263D308;
	sub_826A2E60(ctx, base);
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x8263D314;
	sub_826E07E0(ctx, base);
	// stw r3,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263d3f0
	if (ctx.cr6.eq) goto loc_8263D3F0;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x8263D330;
	sub_826A2E60(ctx, base);
loc_8263D330:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263d418
	if (ctx.cr6.eq) goto loc_8263D418;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263d360
	if (ctx.cr6.eq) goto loc_8263D360;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263d418
	if (ctx.cr6.eq) goto loc_8263D418;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263d418
	if (ctx.cr6.eq) goto loc_8263D418;
loc_8263D360:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x8263D36C;
	sub_826E07E0(ctx, base);
	// stw r3,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263d3f0
	if (ctx.cr6.eq) goto loc_8263D3F0;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x8263D388;
	sub_826A2E60(ctx, base);
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x8263D394;
	sub_826E07E0(ctx, base);
	// stw r3,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263d3f0
	if (ctx.cr6.eq) goto loc_8263D3F0;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x8263D3B0;
	sub_826A2E60(ctx, base);
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x8263D3BC;
	sub_826E07E0(ctx, base);
	// stw r3,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263d3f0
	if (ctx.cr6.eq) goto loc_8263D3F0;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x8263D3D8;
	sub_826A2E60(ctx, base);
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x8263D3E4;
	sub_826E07E0(ctx, base);
	// stw r3,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8263d408
	if (!ctx.cr6.eq) goto loc_8263D408;
loc_8263D3F0:
	// lis r17,-32761
	r17.s64 = -2147024896;
	// ori r17,r17,14
	r17.u64 = r17.u64 | 14;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x826a1cd8
	return;
loc_8263D408:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x8263D418;
	sub_826A2E60(ctx, base);
loc_8263D418:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8263d444
	if (!ctx.cr6.gt) goto loc_8263D444;
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8263d444
	if (!ctx.cr6.eq) goto loc_8263D444;
	// lis r17,-32764
	r17.s64 = -2147221504;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x826a1cd8
	return;
loc_8263D444:
	// lis r10,1023
	ctx.r10.s64 = 67043328;
	// mr r24,r20
	r24.u64 = r20.u64;
	// lis r23,-1024
	r23.s64 = -67108864;
	// ori r22,r10,65535
	r22.u64 = ctx.r10.u64 | 65535;
	// mr r27,r20
	r27.u64 = r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8263d594
	if (!ctx.cr6.gt) goto loc_8263D594;
	// mr r30,r20
	r30.u64 = r20.u64;
loc_8263D464:
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// stw r20,200(r31)
	REX_STORE_U32(r31.u32 + 200, r20.u32);
	// stw r20,208(r31)
	REX_STORE_U32(r31.u32 + 208, r20.u32);
	// stw r20,204(r31)
	REX_STORE_U32(r31.u32 + 204, r20.u32);
	// stwx r20,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r20.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8263d54c
	if (ctx.cr6.eq) goto loc_8263D54C;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lwzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	// lwzx r8,r30,r9
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + ctx.r9.u32);
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// and r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 & ctx.r11.u64;
	// and r29,r6,r8
	r29.u64 = ctx.r6.u64 & ctx.r8.u64;
	// subf r11,r25,r5
	ctx.r11.u64 = ctx.r5.u64 - r25.u64;
	// stwx r5,r30,r10
	REX_STORE_U32(r30.u32 + ctx.r10.u32, ctx.r5.u32);
	// stwx r29,r30,r9
	REX_STORE_U32(r30.u32 + ctx.r9.u32, r29.u32);
	// subf r28,r26,r29
	r28.u64 = r29.u64 - r26.u64;
	// stw r11,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r23.s32, ctx.xer);
	// bge cr6,0x8263d4cc
	if (!ctx.cr6.lt) goto loc_8263D4CC;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// b 0x8263d4d8
	goto loc_8263D4D8;
loc_8263D4CC:
	// cmpw cr6,r4,r22
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r22.s32, ctx.xer);
	// ble cr6,0x8263d4d8
	if (!ctx.cr6.gt) goto loc_8263D4D8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
loc_8263D4D8:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8263c458
	ctx.lr = 0x8263D4E0;
	sub_8263C458(ctx, base);
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// stwx r3,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r3.u32);
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// cmpwi cr6,r11,-10485
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -10485, ctx.xer);
	// ble cr6,0x8263d504
	if (!ctx.cr6.gt) goto loc_8263D504;
	// cmpwi cr6,r11,10485
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10485, ctx.xer);
	// bge cr6,0x8263d504
	if (!ctx.cr6.lt) goto loc_8263D504;
	// cmpwi cr6,r28,-10485
	ctx.cr6.compare<int32_t>(r28.s32, -10485, ctx.xer);
	// bgt cr6,0x8263d508
	if (ctx.cr6.gt) goto loc_8263D508;
loc_8263D504:
	// mr r24,r18
	r24.u64 = r18.u64;
loc_8263D508:
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + r26.u64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// blt cr6,0x8263d54c
	if (ctx.cr6.lt) goto loc_8263D54C;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// subf r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi. r9,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r11.u32);
	// bne 0x8263d534
	if (!ctx.cr0.eq) goto loc_8263D534;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// b 0x8263d53c
	goto loc_8263D53C;
loc_8263D534:
	// divw r11,r10,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
loc_8263D53C:
	// lwz r10,196(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwz r9,104(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 104);
	// stw r11,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r11.u32);
	// stwx r9,r30,r10
	REX_STORE_U32(r30.u32 + ctx.r10.u32, ctx.r9.u32);
loc_8263D54C:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263d568
	if (ctx.cr6.eq) goto loc_8263D568;
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8263d580
	if (ctx.cr6.eq) goto loc_8263D580;
loc_8263D568:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263c8d8
	ctx.lr = 0x8263D574;
	sub_8263C8D8(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263cde4
	if (ctx.cr6.lt) goto loc_8263CDE4;
loc_8263D580:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8263d464
	if (ctx.cr6.lt) goto loc_8263D464;
loc_8263D594:
	// lis r11,127
	ctx.r11.s64 = 8323072;
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// stw r24,8(r31)
	REX_STORE_U32(r31.u32 + 8, r24.u32);
	// mr r28,r20
	r28.u64 = r20.u64;
	// ori r29,r11,65534
	r29.u64 = ctx.r11.u64 | 65534;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r29,276(r31)
	REX_STORE_U32(r31.u32 + 276, r29.u32);
	// ble cr6,0x8263d620
	if (!ctx.cr6.gt) goto loc_8263D620;
	// mr r30,r20
	r30.u64 = r20.u64;
loc_8263D5B8:
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// stwx r29,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r29.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8263d60c
	if (ctx.cr6.eq) goto loc_8263D60C;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lwzx r4,r30,r11
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmpw cr6,r4,r23
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r23.s32, ctx.xer);
	// bge cr6,0x8263d5e4
	if (!ctx.cr6.lt) goto loc_8263D5E4;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// b 0x8263d5f0
	goto loc_8263D5F0;
loc_8263D5E4:
	// cmpw cr6,r4,r22
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r22.s32, ctx.xer);
	// ble cr6,0x8263d5f0
	if (!ctx.cr6.gt) goto loc_8263D5F0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
loc_8263D5F0:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8263c458
	ctx.lr = 0x8263D5F8;
	sub_8263C458(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lwz r10,280(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 280);
	// mulld r9,r11,r29
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * r29.u64);
	// sradi r8,r9,20
	ctx.xer.ca = (ctx.r9.s64 < 0) & ((ctx.r9.u64 & 0xFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s64 >> 20;
	// stwx r8,r30,r10
	REX_STORE_U32(r30.u32 + ctx.r10.u32, ctx.r8.u32);
loc_8263D60C:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8263d5b8
	if (ctx.cr6.lt) goto loc_8263D5B8;
loc_8263D620:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lis r30,16
	r30.s64 = 1048576;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263d68c
	if (ctx.cr6.eq) goto loc_8263D68C;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263d650
	if (ctx.cr6.eq) goto loc_8263D650;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263cb18
	ctx.lr = 0x8263D644;
	sub_8263CB18(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263cde4
	if (ctx.cr6.lt) goto loc_8263CDE4;
loc_8263D650:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263d68c
	if (!ctx.cr6.eq) goto loc_8263D68C;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8263d68c
	if (!ctx.cr6.gt) goto loc_8263D68C;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_8263D670:
	// lwz r9,192(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 192);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r30,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,256(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 256);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8263d670
	if (ctx.cr6.lt) goto loc_8263D670;
loc_8263D68C:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263d6b0
	if (ctx.cr6.eq) goto loc_8263D6B0;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8263d6a8
	if (ctx.cr6.eq) goto loc_8263D6A8;
	// bl 0x82634e78
	ctx.lr = 0x8263D6A8;
	sub_82634E78(ctx, base);
loc_8263D6A8:
	// stw r20,48(r31)
	REX_STORE_U32(r31.u32 + 48, r20.u32);
	// stw r20,52(r31)
	REX_STORE_U32(r31.u32 + 52, r20.u32);
loc_8263D6B0:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// stw r20,144(r31)
	REX_STORE_U32(r31.u32 + 144, r20.u32);
	// stw r30,172(r31)
	REX_STORE_U32(r31.u32 + 172, r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r20,216(r31)
	REX_STORE_U32(r31.u32 + 216, r20.u32);
	// beq cr6,0x8263d6dc
	if (ctx.cr6.eq) goto loc_8263D6DC;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// mullw r10,r11,r16
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r16.s32);
	// divw r9,r10,r19
	ctx.r9.u64 = uint32_t((r19.s32 && !(ctx.r10.s32 == INT32_MIN && r19.s32 == -1)) ? ctx.r10.s32 / r19.s32 : 0);
	// stw r9,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r9.u32);
	// b 0x8263d6e0
	goto loc_8263D6E0;
loc_8263D6DC:
	// stw r20,212(r31)
	REX_STORE_U32(r31.u32 + 212, r20.u32);
loc_8263D6E0:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263cde4
	if (ctx.cr6.eq) goto loc_8263CDE4;
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// beq cr6,0x8263d714
	if (ctx.cr6.eq) goto loc_8263D714;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// stw r7,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r7.u32);
loc_8263D714:
	// stw r11,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r20,220(r31)
	REX_STORE_U32(r31.u32 + 220, r20.u32);
	// stw r20,236(r31)
	REX_STORE_U32(r31.u32 + 236, r20.u32);
	// stw r20,232(r31)
	REX_STORE_U32(r31.u32 + 232, r20.u32);
	// beq cr6,0x8263cde4
	if (ctx.cr6.eq) goto loc_8263CDE4;
	// stw r30,240(r31)
	REX_STORE_U32(r31.u32 + 240, r30.u32);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stw r30,244(r31)
	REX_STORE_U32(r31.u32 + 244, r30.u32);
	// stw r20,248(r31)
	REX_STORE_U32(r31.u32 + 248, r20.u32);
	// stw r20,252(r31)
	REX_STORE_U32(r31.u32 + 252, r20.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_82685610) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r4,32(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// addi r3,r3,540
	ctx.r3.s64 = ctx.r3.s64 + 540;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r11,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// b 0x826793d0
	sub_826793D0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82687188) {
	REX_FUNC_PROLOGUE();
	// sth r4,7(r3)
	REX_STORE_U16(ctx.r3.u32 + 7, ctx.r4.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826871E8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// beq cr6,0x826871f8
	if (ctx.cr6.eq) goto loc_826871F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_826871F8:
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82687A48) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82687A90) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82687ACC) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82687B98) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r7,-2
	ctx.r11.s64 = ctx.r7.s64 + -2;
	// cmplwi cr6,r4,16383
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16383, ctx.xer);
	// ble cr6,0x82687bac
	if (!ctx.cr6.gt) goto loc_82687BAC;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// b 0x82687bc8
	goto loc_82687BC8;
loc_82687BAC:
	// cmplwi cr6,r4,127
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 127, ctx.xer);
	// ble cr6,0x82687bbc
	if (!ctx.cr6.gt) goto loc_82687BBC;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// b 0x82687bc8
	goto loc_82687BC8;
loc_82687BBC:
	// cmplwi cr6,r4,15
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 15, ctx.xer);
	// ble cr6,0x82687bc8
	if (!ctx.cr6.gt) goto loc_82687BC8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82687BC8:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82687bd4
	if (ctx.cr6.eq) goto loc_82687BD4;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_82687BD4:
	// cmpwi cr6,r3,128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 128, ctx.xer);
	// beq cr6,0x82687be0
	if (ctx.cr6.eq) goto loc_82687BE0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82687BE0:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82687bf0
	if (!ctx.cr0.eq) goto loc_82687BF0;
	// cmplwi cr6,r11,510
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 510, ctx.xer);
	// ble cr6,0x82687bfc
	if (!ctx.cr6.gt) goto loc_82687BFC;
loc_82687BF0:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82687bfc
	if (!ctx.cr6.eq) goto loc_82687BFC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82687BFC:
	// subfc r10,r11,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r11.u32;
	ctx.r10.u64 = ctx.r7.u64 - ctx.r11.u64;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// subf r10,r9,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r9.u64;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8268B788) {
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
	// addi r4,r11,22312
	ctx.r4.s64 = ctx.r11.s64 + 22312;
	// bl 0x8262b390
	ctx.lr = 0x8268B7A8;
	sub_8262B390(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-10092
	ctx.r11.s64 = ctx.r11.s64 + -10092;
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r5,2064
	ctx.r5.s64 = 2064;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ef5f0
	ctx.lr = 0x8268B7CC;
	sub_823EF5F0(ctx, base);
	// addi r3,r31,2100
	ctx.r3.s64 = r31.s64 + 2100;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ef5f0
	ctx.lr = 0x8268B7DC;
	sub_823EF5F0(ctx, base);
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

DEFINE_REX_FUNC(sub_8268E2C0) {
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
	ctx.lr = 0x8268E2C8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8268E2F4;
	sub_823EF5F0(ctx, base);
	// std r27,0(r31)
	REX_STORE_U64(r31.u32 + 0, r27.u64);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stb r26,64(r31)
	REX_STORE_U8(r31.u32 + 64, r26.u8);
	// bne cr6,0x8268e32c
	if (!ctx.cr6.eq) goto loc_8268E32C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8268e32c
	if (!ctx.cr6.eq) goto loc_8268E32C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8268d7f8
	ctx.lr = 0x8268E318;
	sub_8268D7F8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8268e348
	if (!ctx.cr6.eq) goto loc_8268E348;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8268dcf8
	ctx.lr = 0x8268E328;
	sub_8268DCF8(ctx, base);
	// b 0x8268e348
	goto loc_8268E348;
loc_8268E32C:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8268d9e0
	ctx.lr = 0x8268E340;
	sub_8268D9E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8268e37c
	if (ctx.cr0.lt) goto loc_8268E37C;
loc_8268E348:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8268e370
	if (ctx.cr6.lt) goto loc_8268E370;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,48(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E370;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268E370:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,268(r11)
	REX_STORE_U32(ctx.r11.u32 + 268, ctx.r10.u32);
loc_8268E37C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82694838) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82694840;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82694858
	if (!ctx.cr6.eq) goto loc_82694858;
loc_82694850:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826948d8
	goto loc_826948D8;
loc_82694858:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r30,-32119
	r30.s64 = -2104950784;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-5960(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -5960);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82694878;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82694850
	if (ctx.cr0.eq) goto loc_82694850;
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,13
	ctx.r3.s64 = 13;
	// lwz r11,-5960(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -5960);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82694898;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82694850
	if (ctx.cr0.eq) goto loc_82694850;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3992);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lwz r11,-5952(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -5952);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826948D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_826948D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82699060) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,9000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 9000);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82699094
	if (!ctx.cr6.gt) goto loc_82699094;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lfs f13,8996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8996);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8992);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f12,f0,f13,f12
	ctx.f12.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f13.f64, -ctx.f12.f64)));
	// lfs f13,8988(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8988);
	ctx.f13.f64 = double(temp.f32);
	// b 0x826990b0
	goto loc_826990B0;
loc_82699094:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lfs f13,8984(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8984);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8980(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8980);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f12,f0,f13,f12
	ctx.f12.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f13.f64, -ctx.f12.f64)));
	// lfs f13,8976(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8976);
	ctx.f13.f64 = double(temp.f32);
loc_826990B0:
	// fmadds f0,f12,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x826990c8
	if (ctx.cr6.gt) goto loc_826990C8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826990C8:
	// stb r11,19(r4)
	REX_STORE_U8(ctx.r4.u32 + 19, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8269B578) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x8269b6c0
	sub_8269B6C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8269B7D0) {
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
	ctx.lr = 0x8269B7D8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,32
	ctx.r9.s64 = 32;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r27,r3,508
	r27.s64 = ctx.r3.s64 + 508;
	// addi r28,r11,15296
	r28.s64 = ctx.r11.s64 + 15296;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// addi r10,r28,254
	ctx.r10.s64 = r28.s64 + 254;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_8269B804:
	// lwz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// lwz r31,0(r8)
	r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r7,r8,-4
	ctx.r7.s64 = ctx.r8.s64 + -4;
	// lha r26,0(r11)
	r26.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// clrlwi r30,r4,16
	r30.u64 = ctx.r4.u32 & 0xFFFF;
	// lhau r24,2(r11)
	ea = 2 + ctx.r11.u32;
	r24.s64 = int16_t(REX_LOAD_U16(ea));
	ctx.r11.u32 = ea;
	// clrlwi r3,r31,16
	ctx.r3.u64 = r31.u32 & 0xFFFF;
	// mullw r5,r30,r26
	ctx.r5.s64 = int64_t(r30.s32) * int64_t(r26.s32);
	// lwz r25,-4(r8)
	r25.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// lwz r23,4(r9)
	r23.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// srawi r31,r31,15
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FFF) != 0);
	r31.s64 = r31.s32 >> 15;
	// srawi r21,r4,15
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFF) != 0);
	r21.s64 = ctx.r4.s32 >> 15;
	// mullw r22,r3,r24
	r22.s64 = int64_t(ctx.r3.s32) * int64_t(r24.s32);
	// mullw r4,r3,r26
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(r26.s32);
	// srawi r3,r5,15
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 15;
	// mullw r5,r30,r24
	ctx.r5.s64 = int64_t(r30.s32) * int64_t(r24.s32);
	// srawi r30,r22,15
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x7FFF) != 0);
	r30.s64 = r22.s32 >> 15;
	// srawi r4,r4,15
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 15;
	// rlwinm r22,r31,0,0,30
	r22.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// srawi r5,r5,15
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 15;
	// rlwinm r31,r21,0,0,30
	r31.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xFFFFFFFE;
	// subf r30,r30,r3
	r30.u64 = ctx.r3.u64 - r30.u64;
	// mullw r21,r24,r22
	r21.s64 = int64_t(r24.s32) * int64_t(r22.s32);
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mullw r3,r31,r24
	ctx.r3.s64 = int64_t(r31.s32) * int64_t(r24.s32);
	// mullw r4,r26,r31
	ctx.r4.s64 = int64_t(r26.s32) * int64_t(r31.s32);
	// subf r31,r21,r30
	r31.u64 = r30.u64 - r21.u64;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// mullw r30,r26,r22
	r30.s64 = int64_t(r26.s32) * int64_t(r22.s32);
	// add r4,r31,r4
	ctx.r4.u64 = r31.u64 + ctx.r4.u64;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + r30.u64;
	// stw r4,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// clrlwi r4,r23,16
	ctx.r4.u64 = r23.u32 & 0xFFFF;
	// stw r5,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// clrlwi r5,r25,16
	ctx.r5.u64 = r25.u32 & 0xFFFF;
	// lha r3,0(r10)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 0));
	// srawi r30,r25,15
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x7FFF) != 0);
	r30.s64 = r25.s32 >> 15;
	// lhau r31,-2(r10)
	ea = -2 + ctx.r10.u32;
	r31.s64 = int16_t(REX_LOAD_U16(ea));
	ctx.r10.u32 = ea;
	// mullw r9,r4,r31
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(r31.s32);
	// mullw r25,r5,r3
	r25.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r3.s32);
	// srawi r26,r23,15
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x7FFF) != 0);
	r26.s64 = r23.s32 >> 15;
	// mullw r24,r5,r31
	r24.s64 = int64_t(ctx.r5.s32) * int64_t(r31.s32);
	// srawi r5,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 15;
	// mullw r4,r4,r3
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// srawi r9,r25,15
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = r25.s32 >> 15;
	// rlwinm r26,r26,0,0,30
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// srawi r25,r24,15
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x7FFF) != 0);
	r25.s64 = r24.s32 >> 15;
	// srawi r24,r4,15
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFF) != 0);
	r24.s64 = ctx.r4.s32 >> 15;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// mullw r4,r26,r31
	ctx.r4.s64 = int64_t(r26.s32) * int64_t(r31.s32);
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// mullw r26,r26,r3
	r26.s64 = int64_t(r26.s32) * int64_t(ctx.r3.s32);
	// subf r25,r24,r25
	r25.u64 = r25.u64 - r24.u64;
	// add r5,r9,r4
	ctx.r5.u64 = ctx.r9.u64 + ctx.r4.u64;
	// mullw r9,r30,r3
	ctx.r9.s64 = int64_t(r30.s32) * int64_t(ctx.r3.s32);
	// mullw r3,r30,r31
	ctx.r3.s64 = int64_t(r30.s32) * int64_t(r31.s32);
	// subf r4,r26,r25
	ctx.r4.u64 = r25.u64 - r26.u64;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r5,r4,r3
	ctx.r5.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r5,-4(r8)
	REX_STORE_U32(ctx.r8.u32 + -4, ctx.r5.u32);
	// addi r9,r6,4
	ctx.r9.s64 = ctx.r6.s64 + 4;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// addi r8,r7,-4
	ctx.r8.s64 = ctx.r7.s64 + -4;
	// bdnz 0x8269b804
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8269B804;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269c2c8
	ctx.lr = 0x8269B918;
	sub_8269C2C8(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r10,r28,256
	ctx.r10.s64 = r28.s64 + 256;
	// addi r5,r28,256
	ctx.r5.s64 = r28.s64 + 256;
	// addi r4,r10,128
	ctx.r4.s64 = ctx.r10.s64 + 128;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8269B93C:
	// lwz r3,0(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r6,r9,-4
	ctx.r6.s64 = ctx.r9.s64 + -4;
	// lwz r31,4(r8)
	r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// addi r7,r8,4
	ctx.r7.s64 = ctx.r8.s64 + 4;
	// clrlwi r30,r3,16
	r30.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r29,0(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r28,r31,16
	r28.u64 = r31.u32 & 0xFFFF;
	// lwz r27,-4(r9)
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// mullw r26,r30,r11
	r26.s64 = int64_t(r30.s32) * int64_t(ctx.r11.s32);
	// mullw r25,r28,r10
	r25.s64 = int64_t(r28.s32) * int64_t(ctx.r10.s32);
	// srawi r24,r31,15
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FFF) != 0);
	r24.s64 = r31.s32 >> 15;
	// srawi r23,r3,15
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFF) != 0);
	r23.s64 = ctx.r3.s32 >> 15;
	// mullw r28,r28,r11
	r28.s64 = int64_t(r28.s32) * int64_t(ctx.r11.s32);
	// mullw r30,r30,r10
	r30.s64 = int64_t(r30.s32) * int64_t(ctx.r10.s32);
	// srawi r31,r26,15
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x7FFF) != 0);
	r31.s64 = r26.s32 >> 15;
	// srawi r3,r25,15
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x7FFF) != 0);
	ctx.r3.s64 = r25.s32 >> 15;
	// srawi r28,r28,15
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x7FFF) != 0);
	r28.s64 = r28.s32 >> 15;
	// rlwinm r25,r24,0,0,30
	r25.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r26,r23,0,0,30
	r26.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFE;
	// srawi r24,r30,15
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FFF) != 0);
	r24.s64 = r30.s32 >> 15;
	// add r3,r31,r3
	ctx.r3.u64 = r31.u64 + ctx.r3.u64;
	// mullw r30,r11,r26
	r30.s64 = int64_t(ctx.r11.s32) * int64_t(r26.s32);
	// mullw r31,r11,r25
	r31.s64 = int64_t(ctx.r11.s32) * int64_t(r25.s32);
	// subf r28,r28,r24
	r28.u64 = r24.u64 - r28.u64;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
	// mullw r11,r10,r25
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(r25.s32);
	// subf r31,r31,r28
	r31.u64 = r28.u64 - r31.u64;
	// mullw r10,r26,r10
	ctx.r10.s64 = int64_t(r26.s32) * int64_t(ctx.r10.s32);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r10,r31,r10
	ctx.r10.u64 = r31.u64 + ctx.r10.u64;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// clrlwi r3,r29,16
	ctx.r3.u64 = r29.u32 & 0xFFFF;
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// clrlwi r9,r27,16
	ctx.r9.u64 = r27.u32 & 0xFFFF;
	// lhau r11,2(r5)
	ea = 2 + ctx.r5.u32;
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ea));
	ctx.r5.u32 = ea;
	// srawi r31,r27,15
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x7FFF) != 0);
	r31.s64 = r27.s32 >> 15;
	// lhau r10,-2(r4)
	ea = -2 + ctx.r4.u32;
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ea));
	ctx.r4.u32 = ea;
	// mullw r30,r9,r10
	r30.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// mullw r8,r3,r11
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// srawi r29,r29,15
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7FFF) != 0);
	r29.s64 = r29.s32 >> 15;
	// mullw r28,r9,r11
	r28.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// srawi r8,r8,15
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 15;
	// srawi r9,r30,15
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = r30.s32 >> 15;
	// mullw r3,r3,r10
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// rlwinm r30,r29,0,0,30
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// srawi r29,r28,15
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x7FFF) != 0);
	r29.s64 = r28.s32 >> 15;
	// srawi r3,r3,15
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 15;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r28,r31,0,0,30
	r28.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mullw r9,r30,r11
	ctx.r9.s64 = int64_t(r30.s32) * int64_t(ctx.r11.s32);
	// subf r29,r3,r29
	r29.u64 = r29.u64 - ctx.r3.u64;
	// mullw r30,r30,r10
	r30.s64 = int64_t(r30.s32) * int64_t(ctx.r10.s32);
	// add r31,r8,r9
	r31.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r3,r28,r10
	ctx.r3.s64 = int64_t(r28.s32) * int64_t(ctx.r10.s32);
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// mullw r8,r28,r11
	ctx.r8.s64 = int64_t(r28.s32) * int64_t(ctx.r11.s32);
	// add r3,r31,r3
	ctx.r3.u64 = r31.u64 + ctx.r3.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r3,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
	// stw r8,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// bdnz 0x8269b93c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8269B93C;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(__restvmx_85) {
	REX_FUNC_PROLOGUE();
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
	// li r11,-688
	ctx.r11.s64 = -688;
	// lvx128 v85,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v85.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v86.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v87.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v88.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v89.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v90.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v91.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v92.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v93.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v94.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(sub_826B11F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826B1200;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lis r11,-17600
	ctx.r11.s64 = -1153433600;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r31,r11,58958
	r31.u64 = ctx.r11.u64 | 58958;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r11,26384(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 26384);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// beq cr6,0x826b1234
	if (ctx.cr6.eq) goto loc_826B1234;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// stw r11,26388(r10)
	REX_STORE_U32(ctx.r10.u32 + 26388, ctx.r11.u32);
	// b 0x826b1290
	goto loc_826B1290;
loc_826B1234:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826b4380
	ctx.lr = 0x826B123C;
	sub_826B4380(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// xor r29,r10,r11
	r29.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// bl 0x823eea88
	ctx.lr = 0x826B124C;
	sub_823EEA88(ctx, base);
	// xor r29,r3,r29
	r29.u64 = ctx.r3.u64 ^ r29.u64;
	// bl 0x823ef900
	ctx.lr = 0x826B1254;
	sub_823EF900(ctx, base);
	// xor r29,r3,r29
	r29.u64 = ctx.r3.u64 ^ r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823ecc50
	ctx.lr = 0x826B1260;
	sub_823ECC50(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 ^ r29.u64;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x826b1280
	if (!ctx.cr6.eq) goto loc_826B1280;
	// lis r11,-17600
	ctx.r11.s64 = -1153433600;
	// ori r11,r11,58959
	ctx.r11.u64 = ctx.r11.u64 | 58959;
loc_826B1280:
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// stw r11,26384(r30)
	REX_STORE_U32(r30.u32 + 26384, ctx.r11.u32);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// stw r10,26388(r9)
	REX_STORE_U32(ctx.r9.u32 + 26388, ctx.r10.u32);
loc_826B1290:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826B6680) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826B6688;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,640(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 640);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,636(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 636);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r3,640
	r30.s64 = ctx.r3.s64 + 640;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x826b66e8
	if (ctx.cr6.lt) goto loc_826B66E8;
	// lwz r11,648(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826b66d8
	if (!ctx.cr6.eq) goto loc_826B66D8;
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B66D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,648(r31)
	REX_STORE_U32(r31.u32 + 648, ctx.r9.u32);
loc_826B66D8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_826B66E8:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r30
	ea = r30.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r30
	ea = r30.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x826b66e8
	if (!ctx.cr0.eq) goto loc_826B66E8;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,80(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826B6718;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,644(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 644);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + r31.u64;
	// stw r3,68(r6)
	REX_STORE_U32(ctx.r6.u32 + 68, ctx.r3.u32);
	// lwz r11,644(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 644);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// stw r29,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, r29.u32);
	// lwz r11,644(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 644);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// stw r31,92(r10)
	REX_STORE_U32(ctx.r10.u32 + 92, r31.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r11,644(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 644);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,84(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 84);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826B6790;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826b67d4
	if (ctx.cr6.lt) goto loc_826B67D4;
	// lwz r11,648(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 648);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826b67c0
	if (!ctx.cr6.eq) goto loc_826B67C0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B67C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B67C0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826b6830
	if (ctx.cr6.lt) goto loc_826B6830;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,648(r31)
	REX_STORE_U32(r31.u32 + 648, ctx.r11.u32);
	// b 0x826b67f0
	goto loc_826B67F0;
loc_826B67D4:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r30
	ea = r30.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r30
	ea = r30.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x826b67d4
	if (!ctx.cr0.eq) goto loc_826B67D4;
loc_826B67F0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826b6830
	if (ctx.cr6.lt) goto loc_826B6830;
	// lwz r11,644(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 644);
	// lwz r10,636(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 636);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,644(r31)
	REX_STORE_U32(r31.u32 + 644, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x826b6818
	if (ctx.cr6.lt) goto loc_826B6818;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,644(r31)
	REX_STORE_U32(r31.u32 + 644, ctx.r11.u32);
loc_826B6818:
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// clrldi r4,r29,32
	ctx.r4.u64 = r29.u64 & 0xFFFFFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B6830;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B6830:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826C6A60) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r10,30992(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 30992);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_826C6F10) {
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
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826c6f64
	if (ctx.cr6.eq) goto loc_826C6F64;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826c6f64
	if (ctx.cr6.eq) goto loc_826C6F64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C6F58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c7040
	if (ctx.cr6.lt) goto loc_826C7040;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826C6F64:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826c6f8c
	if (ctx.cr6.eq) goto loc_826C6F8C;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x826c68d8
	ctx.lr = 0x826C6F80;
	sub_826C68D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c7040
	if (ctx.cr6.lt) goto loc_826C7040;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826C6F8C:
	// li r31,0
	r31.s64 = 0;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826c6fd4
	if (ctx.cr6.eq) goto loc_826C6FD4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826c6fd4
	if (ctx.cr6.eq) goto loc_826C6FD4;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C6FC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c7040
	if (ctx.cr6.lt) goto loc_826C7040;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826C6FD4:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 + 20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826c6ffc
	if (ctx.cr6.eq) goto loc_826C6FFC;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x826c68d8
	ctx.lr = 0x826C6FF0;
	sub_826C68D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c7040
	if (ctx.cr6.lt) goto loc_826C7040;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826C6FFC:
	// stw r31,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r31.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,100(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826c701c
	if (ctx.cr6.eq) goto loc_826C701C;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x826c6478
	ctx.lr = 0x826C7018;
	sub_826C6478(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826C701C:
	// lwz r3,72(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// bl 0x826c6e00
	ctx.lr = 0x826C7024;
	sub_826C6E00(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x826c68d8
	ctx.lr = 0x826C703C;
	sub_826C68D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_826C7040:
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

DEFINE_REX_FUNC(sub_826D5C60) {
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
	ctx.lr = 0x826D5C68;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,28(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r22,0
	r22.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// addi r26,r4,-24
	r26.s64 = ctx.r4.s64 + -24;
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r22.u32);
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 0);
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// stw r22,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r22.u32);
	// stw r22,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r22.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826D5CA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6150
	if (ctx.cr6.lt) goto loc_826D6150;
	// cmplwi cr6,r26,24
	ctx.cr6.compare<uint32_t>(r26.u32, 24, ctx.xer);
	// bge cr6,0x826d5cd0
	if (!ctx.cr6.lt) goto loc_826D5CD0;
loc_826D5CBC:
	// lis r31,-32688
	r31.s64 = -2142240768;
	// ori r31,r31,12
	r31.u64 = r31.u64 | 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cf0
	return;
loc_826D5CD0:
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826d4080
	ctx.lr = 0x826D5CE8;
	sub_826D4080(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6150
	if (ctx.cr6.lt) goto loc_826D6150;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826d3d18
	ctx.lr = 0x826D5D0C;
	sub_826D3D18(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6150
	if (ctx.cr6.lt) goto loc_826D6150;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826d3b98
	ctx.lr = 0x826D5D30;
	sub_826D3B98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6150
	if (ctx.cr6.lt) goto loc_826D6150;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826d3b98
	ctx.lr = 0x826D5D54;
	sub_826D3B98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6150
	if (ctx.cr6.lt) goto loc_826D6150;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// li r30,24
	r30.s64 = 24;
	// lhz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 52);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x826d5cbc
	if (ctx.cr6.gt) goto loc_826D5CBC;
	// lwz r24,104(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// stw r24,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, r24.u32);
	// bne cr6,0x826d5dd4
	if (!ctx.cr6.eq) goto loc_826D5DD4;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// subf r10,r11,r26
	ctx.r10.u64 = r26.u64 - ctx.r11.u64;
	// addic. r30,r10,-24
	ctx.xer.ca = ctx.r10.u32 > 23;
	r30.s64 = ctx.r10.s64 + -24;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x826d6150
	if (ctx.cr0.eq) goto loc_826D6150;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826D5DB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6150
	if (ctx.cr6.lt) goto loc_826D6150;
	// ld r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U64(r25.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r25)
	REX_STORE_U64(r25.u32 + 8, ctx.r11.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cf0
	return;
loc_826D5DD4:
	// lhz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826d5e10
	if (ctx.cr6.eq) goto loc_826D5E10;
	// addi r30,r5,24
	r30.s64 = ctx.r5.s64 + 24;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// bgt cr6,0x826d5cbc
	if (ctx.cr6.gt) goto loc_826D5CBC;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826d4230
	ctx.lr = 0x826D5E04;
	sub_826D4230(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6150
	if (ctx.cr6.lt) goto loc_826D6150;
loc_826D5E10:
	// rlwinm r11,r24,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r24,r11
	ctx.r11.u64 = r24.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// bgt cr6,0x826d5cbc
	if (ctx.cr6.gt) goto loc_826D5CBC;
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,224(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 224);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// add r11,r24,r11
	ctx.r11.u64 = r24.u64 + ctx.r11.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// rlwinm r29,r11,3,0,28
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x826c6880
	ctx.lr = 0x826D5E48;
	sub_826C6880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6150
	if (ctx.cr6.lt) goto loc_826D6150;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x826D5E64;
	sub_826A2E60(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r23,r22
	r23.u64 = r22.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// stw r10,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// lwz r9,4(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r8,88(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 88);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// beq cr6,0x826d60fc
	if (ctx.cr6.eq) goto loc_826D60FC;
loc_826D5E88:
	// addi r30,r30,18
	r30.s64 = r30.s64 + 18;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// bgt cr6,0x826d5cbc
	if (ctx.cr6.gt) goto loc_826D5CBC;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826d3eb0
	ctx.lr = 0x826D5EAC;
	sub_826D3EB0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6150
	if (ctx.cr6.lt) goto loc_826D6150;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// ld r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// bl 0x826d3eb0
	ctx.lr = 0x826D5EDC;
	sub_826D3EB0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6150
	if (ctx.cr6.lt) goto loc_826D6150;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// ld r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// bl 0x826d3b98
	ctx.lr = 0x826D5F0C;
	sub_826D3B98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6150
	if (ctx.cr6.lt) goto loc_826D6150;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// sth r10,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,12
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12, ctx.xer);
	// blt cr6,0x826d60e8
	if (ctx.cr6.lt) goto loc_826D60E8;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// bgt cr6,0x826d5cbc
	if (ctx.cr6.gt) goto loc_826D5CBC;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826d3d18
	ctx.lr = 0x826D5F58;
	sub_826D3D18(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6150
	if (ctx.cr6.lt) goto loc_826D6150;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// bl 0x826d3d18
	ctx.lr = 0x826D5F88;
	sub_826D3D18(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6150
	if (ctx.cr6.lt) goto loc_826D6150;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// bl 0x826d3d18
	ctx.lr = 0x826D5FB8;
	sub_826D3D18(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6150
	if (ctx.cr6.lt) goto loc_826D6150;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// lhz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 16);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x826d5cbc
	if (ctx.cr6.gt) goto loc_826D5CBC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d60a0
	if (ctx.cr6.eq) goto loc_826D60A0;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r5,r30
	r28.u64 = ctx.r5.u64 + r30.u64;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(r28.u32, r26.u32, ctx.xer);
	// bgt cr6,0x826d5cbc
	if (ctx.cr6.gt) goto loc_826D5CBC;
	// addi r6,r10,32
	ctx.r6.s64 = ctx.r10.s64 + 32;
	// lwz r3,224(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c6880
	ctx.lr = 0x826D6014;
	sub_826C6880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6150
	if (ctx.cr6.lt) goto loc_826D6150;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r3,32(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x826a2e60
	ctx.lr = 0x826D6038;
	sub_826A2E60(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r22
	r30.u64 = r22.u64;
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d609c
	if (ctx.cr6.eq) goto loc_826D609C;
	// mr r29,r22
	r29.u64 = r22.u64;
loc_826D6050:
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826d3b98
	ctx.lr = 0x826D6068;
	sub_826D3B98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6150
	if (ctx.cr6.lt) goto loc_826D6150;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// sthx r10,r9,r29
	REX_STORE_U16(ctx.r9.u32 + r29.u32, ctx.r10.u16);
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826d6050
	if (ctx.cr6.lt) goto loc_826D6050;
loc_826D609C:
	// mr r30,r28
	r30.u64 = r28.u64;
loc_826D60A0:
	// lhz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 16);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// addic. r5,r7,-12
	ctx.xer.ca = ctx.r7.u32 > 11;
	ctx.r5.s64 = ctx.r7.s64 + -12;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x826d60e8
	if (ctx.cr0.eq) goto loc_826D60E8;
	// add r30,r5,r30
	r30.u64 = ctx.r5.u64 + r30.u64;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// bgt cr6,0x826d5cbc
	if (ctx.cr6.gt) goto loc_826D5CBC;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826d4230
	ctx.lr = 0x826D60D8;
	sub_826D4230(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6150
	if (ctx.cr6.lt) goto loc_826D6150;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_826D60E8:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r11,r10,40
	ctx.r11.s64 = ctx.r10.s64 + 40;
	// cmplw cr6,r23,r24
	ctx.cr6.compare<uint32_t>(r23.u32, r24.u32, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt cr6,0x826d5e88
	if (ctx.cr6.lt) goto loc_826D5E88;
loc_826D60FC:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lhz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 52);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,52(r11)
	REX_STORE_U16(ctx.r11.u32 + 52, ctx.r9.u16);
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// subf r6,r7,r26
	ctx.r6.u64 = r26.u64 - ctx.r7.u64;
	// subf. r30,r30,r6
	r30.u64 = ctx.r6.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x826d6150
	if (ctx.cr0.eq) goto loc_826D6150;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826D6134;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d6150
	if (ctx.cr6.lt) goto loc_826D6150;
	// ld r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U64(r25.u32 + 8);
	// clrldi r11,r30,32
	ctx.r11.u64 = r30.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r25)
	REX_STORE_U64(r25.u32 + 8, ctx.r11.u64);
loc_826D6150:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_826F6CC8) {
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
	ctx.lr = 0x826F6CD0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r4,r3,664
	ctx.r4.s64 = ctx.r3.s64 + 664;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x826f35a8
	ctx.lr = 0x826F6CE4;
	sub_826F35A8(ctx, base);
	// lhz r11,580(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826f6dfc
	if (!ctx.cr6.gt) goto loc_826F6DFC;
	// li r28,0
	r28.s64 = 0;
	// li r25,-1
	r25.s64 = -1;
	// mr r27,r28
	r27.u64 = r28.u64;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_826F6D04:
	// lwz r10,584(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 584);
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mulli r11,r8,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(1776));
	// add r31,r11,r26
	r31.u64 = ctx.r11.u64 + r26.u64;
	// addi r3,r31,1616
	ctx.r3.s64 = r31.s64 + 1616;
	// bl 0x826a2e60
	ctx.lr = 0x826F6D28;
	sub_826A2E60(ctx, base);
	// stw r28,468(r31)
	REX_STORE_U32(r31.u32 + 468, r28.u32);
	// stw r28,472(r31)
	REX_STORE_U32(r31.u32 + 472, r28.u32);
	// stw r28,476(r31)
	REX_STORE_U32(r31.u32 + 476, r28.u32);
	// stw r28,480(r31)
	REX_STORE_U32(r31.u32 + 480, r28.u32);
	// lhz r7,182(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 182);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x826f6d78
	if (!ctx.cr6.gt) goto loc_826F6D78;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_826F6D4C:
	// mulli r11,r30,56
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(56));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,200
	ctx.r4.s64 = ctx.r11.s64 + 200;
	// bl 0x826f4e00
	ctx.lr = 0x826F6D60;
	sub_826F4E00(ctx, base);
	// lhz r9,182(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 182);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// extsh r30,r11
	r30.s64 = ctx.r11.s16;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x826f6d4c
	if (ctx.cr6.lt) goto loc_826F6D4C;
loc_826F6D78:
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// stw r28,188(r31)
	REX_STORE_U32(r31.u32 + 188, r28.u32);
	// stw r28,452(r31)
	REX_STORE_U32(r31.u32 + 452, r28.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r25,456(r31)
	REX_STORE_U32(r31.u32 + 456, r25.u32);
	// stw r28,460(r31)
	REX_STORE_U32(r31.u32 + 460, r28.u32);
	// stw r28,464(r31)
	REX_STORE_U32(r31.u32 + 464, r28.u32);
	// bne cr6,0x826f6de0
	if (!ctx.cr6.eq) goto loc_826F6DE0;
	// lhz r11,182(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 182);
	// stw r28,448(r31)
	REX_STORE_U32(r31.u32 + 448, r28.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826f6de0
	if (!ctx.cr6.gt) goto loc_826F6DE0;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_826F6DB0:
	// mulli r11,r30,56
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(56));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,200
	ctx.r4.s64 = ctx.r11.s64 + 200;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826f4ee8
	ctx.lr = 0x826F6DC8;
	sub_826F4EE8(ctx, base);
	// lhz r10,182(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 182);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// clrlwi r30,r11,16
	r30.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826f6db0
	if (ctx.cr6.lt) goto loc_826F6DB0;
loc_826F6DE0:
	// lhz r10,580(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 580);
	// addi r11,r27,1
	ctx.r11.s64 = r27.s64 + 1;
	// extsh r27,r11
	r27.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r27,r8
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x826f6d04
	if (ctx.cr6.lt) goto loc_826F6D04;
loc_826F6DFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82703328) {
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
	ctx.lr = 0x82703330;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r27,28(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r30,8(r8)
	r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r29,12(r8)
	r29.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// beq cr6,0x82703374
	if (ctx.cr6.eq) goto loc_82703374;
	// lwz r31,12(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x82703378
	goto loc_82703378;
loc_82703374:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82703378:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270338c
	if (ctx.cr6.eq) goto loc_8270338C;
	// lwz r26,16(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x82703390
	goto loc_82703390;
loc_8270338C:
	// mr r26,r29
	r26.u64 = r29.u64;
loc_82703390:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// lis r10,-32688
	ctx.r10.s64 = -2142240768;
	// ori r25,r11,3
	r25.u64 = ctx.r11.u64 | 3;
	// ori r24,r10,182
	r24.u64 = ctx.r10.u64 | 182;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// ble cr6,0x827033e4
	if (!ctx.cr6.gt) goto loc_827033E4;
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// lis r5,9
	ctx.r5.s64 = 589824;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// ori r5,r5,144
	ctx.r5.u64 = ctx.r5.u64 | 144;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826c65a8
	ctx.lr = 0x827033C8;
	sub_826C65A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x827033e8
	if (!ctx.cr6.lt) goto loc_827033E8;
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, ctx.xer);
	// beq cr6,0x827033e0
	if (ctx.cr6.eq) goto loc_827033E0;
	// cmplw cr6,r3,r24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r24.u32, ctx.xer);
	// bne cr6,0x827034f8
	if (!ctx.cr6.eq) goto loc_827034F8;
loc_827033E0:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
loc_827033E4:
	// bne cr6,0x827034f0
	if (!ctx.cr6.eq) goto loc_827034F0;
loc_827033E8:
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmplw cr6,r26,r29
	ctx.cr6.compare<uint32_t>(r26.u32, r29.u32, ctx.xer);
	// ble cr6,0x8270342c
	if (!ctx.cr6.gt) goto loc_8270342C;
	// stw r26,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// lis r5,9
	ctx.r5.s64 = 589824;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// ori r5,r5,160
	ctx.r5.u64 = ctx.r5.u64 | 160;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826c65a8
	ctx.lr = 0x82703414;
	sub_826C65A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82703434
	if (!ctx.cr6.lt) goto loc_82703434;
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, ctx.xer);
	// beq cr6,0x8270342c
	if (ctx.cr6.eq) goto loc_8270342C;
	// cmplw cr6,r3,r24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r24.u32, ctx.xer);
	// bne cr6,0x827034f8
	if (!ctx.cr6.eq) goto loc_827034F8;
loc_8270342C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x827034f0
	if (!ctx.cr6.eq) goto loc_827034F0;
loc_82703434:
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// lis r5,9
	ctx.r5.s64 = 589824;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,176
	ctx.r5.u64 = ctx.r5.u64 | 176;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826c65a8
	ctx.lr = 0x82703450;
	sub_826C65A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827034f8
	if (ctx.cr6.lt) goto loc_827034F8;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// bne cr6,0x827034f0
	if (!ctx.cr6.eq) goto loc_827034F0;
	// clrlwi r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827034f0
	if (!ctx.cr6.eq) goto loc_827034F0;
	// cmplwi cr6,r21,12
	ctx.cr6.compare<uint32_t>(r21.u32, 12, ctx.xer);
	// bne cr6,0x827034f0
	if (!ctx.cr6.eq) goto loc_827034F0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lis r5,9
	ctx.r5.s64 = 589824;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 + 7;
	// ori r5,r5,112
	ctx.r5.u64 = ctx.r5.u64 | 112;
	// rlwinm r3,r7,29,3,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826c65a8
	ctx.lr = 0x827034C4;
	sub_826C65A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x827034f8
	if (ctx.cr6.lt) goto loc_827034F8;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r9,31,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1FFFFFFF;
	// stw r8,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r8.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce8
	return;
loc_827034F0:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_827034F8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_8271ABA0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// lwz r10,3948(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3948);
	// lis r9,-32141
	ctx.r9.s64 = -2106392576;
	// lis r8,-32140
	ctx.r8.s64 = -2106327040;
	// lis r7,-32140
	ctx.r7.s64 = -2106327040;
	// addi r4,r11,-29064
	ctx.r4.s64 = ctx.r11.s64 + -29064;
	// lis r6,-32140
	ctx.r6.s64 = -2106327040;
	// addi r11,r9,29896
	ctx.r11.s64 = ctx.r9.s64 + 29896;
	// stw r4,3184(r3)
	REX_STORE_U32(ctx.r3.u32 + 3184, ctx.r4.u32);
	// addi r9,r8,-32520
	ctx.r9.s64 = ctx.r8.s64 + -32520;
	// lis r5,-32140
	ctx.r5.s64 = -2106327040;
	// stw r11,3188(r3)
	REX_STORE_U32(ctx.r3.u32 + 3188, ctx.r11.u32);
	// addi r8,r7,-32392
	ctx.r8.s64 = ctx.r7.s64 + -32392;
	// stw r9,3204(r3)
	REX_STORE_U32(ctx.r3.u32 + 3204, ctx.r9.u32);
	// addi r7,r6,-31520
	ctx.r7.s64 = ctx.r6.s64 + -31520;
	// addi r6,r5,-30616
	ctx.r6.s64 = ctx.r5.s64 + -30616;
	// stw r8,3192(r3)
	REX_STORE_U32(ctx.r3.u32 + 3192, ctx.r8.u32);
	// stw r7,3196(r3)
	REX_STORE_U32(ctx.r3.u32 + 3196, ctx.r7.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r6,3200(r3)
	REX_STORE_U32(ctx.r3.u32 + 3200, ctx.r6.u32);
	// beq cr6,0x8271ac18
	if (ctx.cr6.eq) goto loc_8271AC18;
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// lis r9,-32137
	ctx.r9.s64 = -2106130432;
	// addi r8,r11,-32520
	ctx.r8.s64 = ctx.r11.s64 + -32520;
	// addi r7,r10,-21272
	ctx.r7.s64 = ctx.r10.s64 + -21272;
	// addi r6,r9,-20720
	ctx.r6.s64 = ctx.r9.s64 + -20720;
	// stw r8,3188(r3)
	REX_STORE_U32(ctx.r3.u32 + 3188, ctx.r8.u32);
	// stw r7,3192(r3)
	REX_STORE_U32(ctx.r3.u32 + 3192, ctx.r7.u32);
	// stw r6,3196(r3)
	REX_STORE_U32(ctx.r3.u32 + 3196, ctx.r6.u32);
loc_8271AC18:
	// lwz r10,1788(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1788);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8271ac74
	if (ctx.cr6.eq) goto loc_8271AC74;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// stw r11,1796(r3)
	REX_STORE_U32(ctx.r3.u32 + 1796, ctx.r11.u32);
	// lis r9,-32137
	ctx.r9.s64 = -2106130432;
	// lis r8,-32137
	ctx.r8.s64 = -2106130432;
	// lis r7,-32137
	ctx.r7.s64 = -2106130432;
	// addi r4,r10,-25568
	ctx.r4.s64 = ctx.r10.s64 + -25568;
	// lis r6,-32137
	ctx.r6.s64 = -2106130432;
	// addi r10,r9,-22200
	ctx.r10.s64 = ctx.r9.s64 + -22200;
	// stw r4,3184(r3)
	REX_STORE_U32(ctx.r3.u32 + 3184, ctx.r4.u32);
	// addi r9,r8,-24464
	ctx.r9.s64 = ctx.r8.s64 + -24464;
	// lis r5,-32137
	ctx.r5.s64 = -2106130432;
	// stw r10,3188(r3)
	REX_STORE_U32(ctx.r3.u32 + 3188, ctx.r10.u32);
	// addi r8,r7,-23560
	ctx.r8.s64 = ctx.r7.s64 + -23560;
	// stw r9,3192(r3)
	REX_STORE_U32(ctx.r3.u32 + 3192, ctx.r9.u32);
	// addi r7,r6,-22720
	ctx.r7.s64 = ctx.r6.s64 + -22720;
	// addi r6,r5,-22200
	ctx.r6.s64 = ctx.r5.s64 + -22200;
	// stw r8,3196(r3)
	REX_STORE_U32(ctx.r3.u32 + 3196, ctx.r8.u32);
	// stw r7,3200(r3)
	REX_STORE_U32(ctx.r3.u32 + 3200, ctx.r7.u32);
	// stw r6,3204(r3)
	REX_STORE_U32(ctx.r3.u32 + 3204, ctx.r6.u32);
loc_8271AC74:
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// lwz r9,3184(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3184);
	// addi r8,r10,-29064
	ctx.r8.s64 = ctx.r10.s64 + -29064;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8271ac8c
	if (!ctx.cr6.eq) goto loc_8271AC8C;
	// stw r11,1796(r3)
	REX_STORE_U32(ctx.r3.u32 + 1796, ctx.r11.u32);
loc_8271AC8C:
	// lwz r11,1796(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1796);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,3
	ctx.r9.s64 = 3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8271acb8
	if (ctx.cr6.eq) goto loc_8271ACB8;
	// stw r11,1916(r3)
	REX_STORE_U32(ctx.r3.u32 + 1916, ctx.r11.u32);
	// stw r10,1920(r3)
	REX_STORE_U32(ctx.r3.u32 + 1920, ctx.r10.u32);
	// stw r11,1924(r3)
	REX_STORE_U32(ctx.r3.u32 + 1924, ctx.r11.u32);
	// stw r9,1928(r3)
	REX_STORE_U32(ctx.r3.u32 + 1928, ctx.r9.u32);
	// blr 
	return;
loc_8271ACB8:
	// stw r11,1920(r3)
	REX_STORE_U32(ctx.r3.u32 + 1920, ctx.r11.u32);
	// stw r10,1916(r3)
	REX_STORE_U32(ctx.r3.u32 + 1916, ctx.r10.u32);
	// stw r9,1924(r3)
	REX_STORE_U32(ctx.r3.u32 + 1924, ctx.r9.u32);
	// stw r11,1928(r3)
	REX_STORE_U32(ctx.r3.u32 + 1928, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827225B0) {
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
	ctx.lr = 0x827225B8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r30,332(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// stw r4,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stw r5,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// stw r8,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// stw r9,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82722908
	if (!ctx.cr6.gt) goto loc_82722908;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r7,-3
	ctx.r4.s64 = ctx.r7.s64 + -3;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r10,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r9,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r9.u64;
	// addi r19,r7,-4
	r19.s64 = ctx.r7.s64 + -4;
	// addi r8,r7,-2
	ctx.r8.s64 = ctx.r7.s64 + -2;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r7,-8
	r31.s64 = ctx.r7.s64 + -8;
	// addi r29,r7,-6
	r29.s64 = ctx.r7.s64 + -6;
	// rlwinm r15,r4,2,0,29
	r15.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r9,r27
	ctx.r6.u64 = r27.u64 - ctx.r9.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm r16,r19,2,0,29
	r16.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r18,r5,r30
	r18.u64 = ctx.r5.u64 + r30.u64;
	// mullw r17,r31,r10
	r17.s64 = int64_t(r31.s32) * int64_t(ctx.r10.s32);
	// mullw r22,r8,r10
	r22.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// mullw r21,r19,r10
	r21.s64 = int64_t(r19.s32) * int64_t(ctx.r10.s32);
	// mullw r20,r29,r10
	r20.s64 = int64_t(r29.s32) * int64_t(ctx.r10.s32);
	// add r23,r9,r11
	r23.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r27,255
	r27.s64 = 255;
loc_82722650:
	// lbz r8,0(r23)
	ctx.r8.u64 = REX_LOAD_U8(r23.u32 + 0);
	// add r3,r6,r23
	ctx.r3.u64 = ctx.r6.u64 + r23.u64;
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r19,4
	ctx.cr6.compare<int32_t>(r19.s32, 4, ctx.xer);
	// rotlwi r31,r8,1
	r31.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lbzx r29,r6,r23
	r29.u64 = REX_LOAD_U8(ctx.r6.u32 + r23.u32);
	// mulli r24,r5,34
	r24.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(34));
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// add r5,r5,r23
	ctx.r5.u64 = ctx.r5.u64 + r23.u64;
	// subf r8,r8,r24
	ctx.r8.u64 = r24.u64 - ctx.r8.u64;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + r29.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r8,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 5;
	// stw r8,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r29,0(r23)
	r29.u64 = REX_LOAD_U8(r23.u32 + 0);
	// rotlwi r24,r29,3
	r24.u64 = __builtin_rotateleft32(r29.u32, 3);
	// mulli r31,r8,25
	r31.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(25));
	// subf r8,r29,r24
	ctx.r8.u64 = r24.u64 - r29.u64;
	// add r8,r31,r8
	ctx.r8.u64 = r31.u64 + ctx.r8.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r8,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 5;
	// stw r8,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// lbzx r8,r6,r23
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + r23.u32);
	// lbz r24,0(r23)
	r24.u64 = REX_LOAD_U8(r23.u32 + 0);
	// lbz r29,0(r5)
	r29.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// lbz r31,0(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r31,r31,1
	r31.u64 = __builtin_rotateleft32(r31.u32, 1);
	// subf r8,r8,r31
	ctx.r8.u64 = r31.u64 - ctx.r8.u64;
	// rotlwi r14,r24,3
	r14.u64 = __builtin_rotateleft32(r24.u32, 3);
	// rlwinm r31,r8,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r24,r24,r14
	r24.u64 = r14.u64 - r24.u64;
	// add r31,r8,r31
	r31.u64 = ctx.r8.u64 + r31.u64;
	// rlwinm r8,r24,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r31,r8
	ctx.r8.u64 = r31.u64 + ctx.r8.u64;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + r29.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r8,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 5;
	// stw r8,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r8.u32);
	// lbzx r8,r6,r23
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + r23.u32);
	// lbz r24,0(r11)
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r31,0(r23)
	r31.u64 = REX_LOAD_U8(r23.u32 + 0);
	// rotlwi r14,r31,3
	r14.u64 = __builtin_rotateleft32(r31.u32, 3);
	// rotlwi r29,r8,1
	r29.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// subf r31,r31,r14
	r31.u64 = r14.u64 - r31.u64;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + r29.u64;
	// rlwinm r31,r31,1,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// subf r8,r24,r8
	ctx.r8.u64 = ctx.r8.u64 - r24.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r8,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 5;
	// stw r8,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r8.u32);
	// ble cr6,0x827227f4
	if (!ctx.cr6.gt) goto loc_827227F4;
	// addi r8,r19,-5
	ctx.r8.s64 = r19.s64 + -5;
	// rlwinm r31,r10,3,0,28
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r28,r9,r31
	r28.u64 = r31.u64 - ctx.r9.u64;
	// addi r29,r8,1
	r29.s64 = ctx.r8.s64 + 1;
	// addi r31,r30,12
	r31.s64 = r30.s64 + 12;
	// subf r27,r9,r11
	r27.u64 = ctx.r11.u64 - ctx.r9.u64;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// add r28,r28,r11
	r28.u64 = r28.u64 + ctx.r11.u64;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_82722754:
	// lbz r29,0(r8)
	r29.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r25,0(r3)
	r25.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// rotlwi r29,r29,1
	r29.u64 = __builtin_rotateleft32(r29.u32, 1);
	// lbz r24,0(r5)
	r24.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// rotlwi r14,r25,3
	r14.u64 = __builtin_rotateleft32(r25.u32, 3);
	// lbzux r26,r28,r9
	ea = r28.u32 + ctx.r9.u32;
	r26.u64 = REX_LOAD_U8(ea);
	r28.u32 = ea;
	// subf r29,r24,r29
	r29.u64 = r29.u64 - r24.u64;
	// subf r25,r25,r14
	r25.u64 = r14.u64 - r25.u64;
	// rlwinm r24,r29,1,0,30
	r24.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r25,2,0,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r29,r24
	r29.u64 = r29.u64 + r24.u64;
	// add r29,r29,r25
	r29.u64 = r29.u64 + r25.u64;
	// add r29,r29,r26
	r29.u64 = r29.u64 + r26.u64;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// srawi r29,r29,5
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1F) != 0);
	r29.s64 = r29.s32 >> 5;
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// lbz r29,0(r8)
	r29.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r24,0(r3)
	r24.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lbzux r26,r27,r9
	ea = r27.u32 + ctx.r9.u32;
	r26.u64 = REX_LOAD_U8(ea);
	r27.u32 = ea;
	// lbz r25,0(r5)
	r25.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// rotlwi r25,r25,1
	r25.u64 = __builtin_rotateleft32(r25.u32, 1);
	// subf r29,r29,r25
	r29.u64 = r25.u64 - r29.u64;
	// rotlwi r14,r24,3
	r14.u64 = __builtin_rotateleft32(r24.u32, 3);
	// rlwinm r25,r29,1,0,30
	r25.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r24,r24,r14
	r24.u64 = r14.u64 - r24.u64;
	// add r29,r29,r25
	r29.u64 = r29.u64 + r25.u64;
	// rlwinm r25,r24,2,0,29
	r25.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r29,r29,r25
	r29.u64 = r29.u64 + r25.u64;
	// add r29,r29,r26
	r29.u64 = r29.u64 + r26.u64;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// srawi r29,r29,5
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1F) != 0);
	r29.s64 = r29.s32 >> 5;
	// stwu r29,8(r31)
	ea = 8 + r31.u32;
	REX_STORE_U32(ea, r29.u32);
	r31.u32 = ea;
	// bdnz 0x82722754
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82722754;
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r27,255
	r27.s64 = 255;
	// lwz r25,300(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r26,308(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
loc_827227F4:
	// lbzx r3,r21,r11
	ctx.r3.u64 = REX_LOAD_U8(r21.u32 + ctx.r11.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lbzx r8,r20,r11
	ctx.r8.u64 = REX_LOAD_U8(r20.u32 + ctx.r11.u32);
	// rotlwi r31,r3,3
	r31.u64 = __builtin_rotateleft32(ctx.r3.u32, 3);
	// lbzx r29,r22,r11
	r29.u64 = REX_LOAD_U8(r22.u32 + ctx.r11.u32);
	// rotlwi r5,r8,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// subf r3,r3,r31
	ctx.r3.u64 = r31.u64 - ctx.r3.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// subf r8,r29,r8
	ctx.r8.u64 = ctx.r8.u64 - r29.u64;
	// addi r5,r8,8
	ctx.r5.s64 = ctx.r8.s64 + 8;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r8,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 5;
	// stwx r8,r16,r30
	REX_STORE_U32(r16.u32 + r30.u32, ctx.r8.u32);
	// lbzx r5,r20,r11
	ctx.r5.u64 = REX_LOAD_U8(r20.u32 + ctx.r11.u32);
	// lbzx r31,r21,r11
	r31.u64 = REX_LOAD_U8(r21.u32 + ctx.r11.u32);
	// lbzx r3,r17,r11
	ctx.r3.u64 = REX_LOAD_U8(r17.u32 + ctx.r11.u32);
	// lbzx r8,r22,r11
	ctx.r8.u64 = REX_LOAD_U8(r22.u32 + ctx.r11.u32);
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// rotlwi r29,r31,3
	r29.u64 = __builtin_rotateleft32(r31.u32, 3);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r31,r31,r29
	r31.u64 = r29.u64 - r31.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r5,r8,16
	ctx.r5.s64 = ctx.r8.s64 + 16;
	// srawi r3,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 5;
	// stwx r3,r15,r30
	REX_STORE_U32(r15.u32 + r30.u32, ctx.r3.u32);
	// lbzx r8,r22,r11
	ctx.r8.u64 = REX_LOAD_U8(r22.u32 + ctx.r11.u32);
	// lbzx r5,r21,r11
	ctx.r5.u64 = REX_LOAD_U8(r21.u32 + ctx.r11.u32);
	// rotlwi r3,r5,3
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 3);
	// subf r5,r5,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r5.u64;
	// mulli r8,r8,25
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(25));
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r5,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 5;
	// stwx r5,r4,r30
	REX_STORE_U32(ctx.r4.u32 + r30.u32, ctx.r5.u32);
	// lbzx r3,r22,r11
	ctx.r3.u64 = REX_LOAD_U8(r22.u32 + ctx.r11.u32);
	// lbzx r8,r21,r11
	ctx.r8.u64 = REX_LOAD_U8(r21.u32 + ctx.r11.u32);
	// rotlwi r5,r8,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lbzx r5,r20,r11
	ctx.r5.u64 = REX_LOAD_U8(r20.u32 + ctx.r11.u32);
	// mulli r3,r3,34
	ctx.r3.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(34));
	// subf r8,r8,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r8.u64;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r5,r8,16
	ctx.r5.s64 = ctx.r8.s64 + 16;
	// srawi r3,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 5;
	// stw r3,-4(r18)
	REX_STORE_U32(r18.u32 + -4, ctx.r3.u32);
	// ble cr6,0x827228f4
	if (!ctx.cr6.gt) goto loc_827228F4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_827228D0:
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// ble cr6,0x827228e8
	if (!ctx.cr6.gt) goto loc_827228E8;
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 & r27.u64;
loc_827228E8:
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// stbux r8,r3,r10
	ea = ctx.r3.u32 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r3.u32 = ea;
	// bdnz 0x827228d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827228D0;
loc_827228F4:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// bne 0x82722650
	if (!ctx.cr0.eq) goto loc_82722650;
loc_82722908:
	// lwz r7,324(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x82722964
	if (!ctx.cr6.gt) goto loc_82722964;
	// lwz r3,268(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// mr r31,r25
	r31.u64 = r25.u64;
loc_8272291C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82721c90
	ctx.lr = 0x8272292C;
	sub_82721C90(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x8272291c
	if (!ctx.cr0.eq) goto loc_8272291C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x82722964
	if (!ctx.cr6.gt) goto loc_82722964;
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r31,r25
	r31.u64 = r25.u64;
loc_82722948:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82721c90
	ctx.lr = 0x82722958;
	sub_82721C90(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x82722948
	if (!ctx.cr0.eq) goto loc_82722948;
loc_82722964:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_827417A0) {
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
	ctx.lr = 0x827417A8;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// vspltish v8,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x2)));
	// vspltish v9,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x4)));
	// vspltish v10,7
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x7)));
	// bne cr6,0x827417c8
	if (!ctx.cr6.eq) goto loc_827417C8;
	// vspltish v10,8
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x8)));
loc_827417C8:
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bgt cr6,0x82741e24
	if (ctx.cr6.gt) goto loc_82741E24;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82741908
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82741908;
	// bdzf 4*cr6+eq,0x82741ad0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82741AD0;
	// bne cr6,0x82741c60
	if (!ctx.cr6.eq) goto loc_82741C60;
	// li r11,16
	ctx.r11.s64 = 16;
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvlx128 v62,r3,r4
	temp.u32 = ctx.r3.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// lvrx128 v61,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r3,r1,-160
	ctx.r3.s64 = ctx.r1.s64 + -160;
	// lvrx128 v60,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v12,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// addi r30,r1,-144
	r30.s64 = ctx.r1.s64 + -144;
	// vor128 v11,v62,v60
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// addi r29,r1,-128
	r29.s64 = ctx.r1.s64 + -128;
	// addi r28,r1,-112
	r28.s64 = ctx.r1.s64 + -112;
	// addi r27,r1,-96
	r27.s64 = ctx.r1.s64 + -96;
	// lvrx128 v59,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v7,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v58,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v6,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vmrghb v5,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r26,r1,-80
	r26.s64 = ctx.r1.s64 + -80;
	// vslh v4,v7,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v57,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v3,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v56,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v2,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// stvx128 v4,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v5,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v3,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v55,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v30,v0,v2
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v54,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v29,v54,v55
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// stvx128 v1,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v31,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v28,v30,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v53,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v27,v0,v29
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v52,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v26,v52,v53
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// stvx128 v28,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v25,v27,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v51,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v24,v0,v26
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v50,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v23,v50,v51
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// stvx128 v25,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v22,v24,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v49,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v21,v0,v23
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v48,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v20,v48,v49
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// stvx128 v22,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v19,v21,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v47,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v18,v0,v20
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v17,v46,v47
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// stvx128 v19,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v16,v18,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v15,v0,v17
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v16,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v14,v15,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v14,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82741e24
	goto loc_82741E24;
loc_82741908:
	// li r11,16
	ctx.r11.s64 = 16;
	// lvlx128 v45,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvlx128 v44,r3,r4
	temp.u32 = ctx.r3.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// lvrx128 v43,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r3,r1,-160
	ctx.r3.s64 = ctx.r1.s64 + -160;
	// lvrx128 v42,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v12,v45,v43
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8)));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r30,r1,-144
	r30.s64 = ctx.r1.s64 + -144;
	// vmrghb v11,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v7,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vor128 v12,v44,v42
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// lvrx128 v41,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v40,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vslh v6,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v4,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vor128 v12,v40,v41
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8)));
	// vmrghb v3,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v39,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v38,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vmrghb v2,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v1,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vor128 v12,v38,v39
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// vadduhm v31,v11,v3
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vmrghb v30,v0,v4
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v11,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lvrx128 v37,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v36,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vmrghb v29,v0,v12
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v28,v31,v6
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vsldoi v27,v12,v0,1
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vor128 v12,v36,v37
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// vadduhm v24,v11,v30
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vmrghb v25,v0,v1
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v26,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v35,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor v11,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// lvlx128 v34,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v23,v0,v12
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v22,v12,v0,1
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vor128 v12,v34,v35
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// vmrghb v21,v0,v27
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vslh v20,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v28,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v19,v11,v25
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vor v11,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v29.u8));
	// vsldoi v18,v12,v0,1
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v17,v24,v26
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vmrghb v16,v0,v22
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v33,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v32,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vslh v15,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v14,v0,v18
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v7,v11,v21
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// stvx128 v17,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v11,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v23.u8));
	// vslh v4,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v3,v12,v14
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v12,v32,v33
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// lvrx128 v62,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vslh v2,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v1,v11,v16
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vadduhm v6,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v5,v7,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vmrghb v11,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v31,v3,v4
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsldoi v29,v12,v0,1
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vadduhm v30,v1,v2
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// stvx128 v6,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v12,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vmrghb v28,v0,v29
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v27,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r1,-128
	ctx.r9.s64 = ctx.r1.s64 + -128;
	// addi r7,r1,-112
	ctx.r7.s64 = ctx.r1.s64 + -112;
	// vmrghb v26,v0,v12
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r4,r1,-96
	ctx.r4.s64 = ctx.r1.s64 + -96;
	// lvrx128 v61,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vsldoi v25,v12,v0,1
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// lvlx128 v60,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vadduhm v24,v11,v28
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vor128 v12,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// addi r11,r1,-80
	ctx.r11.s64 = ctx.r1.s64 + -80;
	// vor v11,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v26.u8));
	// stvx128 v5,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v23,v0,v25
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v30,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v21,v24,v27
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// stvx128 v31,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v22,v12,v0,1
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v20,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v11,v23
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// stvx128 v21,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v18,v0,v22
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v19,v20
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v15,v12,v18
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// stvx128 v17,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v14,v15,v16
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// stvx128 v14,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82741e24
	goto loc_82741E24;
loc_82741AD0:
	// li r11,16
	ctx.r11.s64 = 16;
	// lvlx128 v59,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvlx128 v58,r3,r4
	temp.u32 = ctx.r3.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// lvrx128 v57,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r3,r1,-160
	ctx.r3.s64 = ctx.r1.s64 + -160;
	// lvrx128 v56,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v12,v59,v57
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// addi r30,r1,-144
	r30.s64 = ctx.r1.s64 + -144;
	// addi r29,r1,-128
	r29.s64 = ctx.r1.s64 + -128;
	// addi r28,r1,-112
	r28.s64 = ctx.r1.s64 + -112;
	// lvrx128 v55,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vsldoi v11,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// lvlx128 v54,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v7,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v12,v58,v56
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vmrghb v6,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v5,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v4,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v53,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v52,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v12,v54,v55
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vadduhm v3,v7,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vmrghb v2,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v1,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v31,v0,v12
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v52,v53
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v51,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vadduhm v30,v4,v2
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// lvlx128 v50,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vmrghb v29,v0,v1
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v28,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v27,v12,v0,1
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v26,v0,v12
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vslh v25,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v49,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vadduhm v24,v31,v29
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// lvlx128 v48,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vsldoi v23,v12,v0,1
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// stvx128 v28,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v22,v0,v12
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v21,v0,v27
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v20,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvrx128 v47,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v19,v0,v23
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vsldoi v18,v12,v0,1
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vadduhm v17,v26,v21
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vmrghb v16,v0,v12
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// vadduhm v15,v22,v19
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// stvx128 v20,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvrx128 v45,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v14,v0,v18
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v44,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi v11,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v7,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vslh v6,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vadduhm v5,v16,v14
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vmrghb v4,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v3,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v2,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// stvx128 v6,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v1,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v31,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v30,v7,v4
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vmrghb v29,v0,v2
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v42,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vadduhm v28,v1,v29
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// lvlx128 v43,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,-96
	ctx.r11.s64 = ctx.r1.s64 + -96;
	// vor128 v12,v43,v42
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// vslh v27,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v3,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v26,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v31,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v25,v12,v0,1
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v24,v0,v12
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v27,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v23,v0,v25
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v22,v24,v23
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vslh v21,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v21,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82741e24
	goto loc_82741E24;
loc_82741C60:
	// li r11,16
	ctx.r11.s64 = 16;
	// lvlx128 v41,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvlx128 v40,r3,r4
	temp.u32 = ctx.r3.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// lvrx128 v39,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r3,r1,-160
	ctx.r3.s64 = ctx.r1.s64 + -160;
	// vor128 v12,v41,v39
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// lvrx128 v38,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r30,r1,-144
	r30.s64 = ctx.r1.s64 + -144;
	// addi r29,r1,-128
	r29.s64 = ctx.r1.s64 + -128;
	// vmrghb v7,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v11,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vor128 v12,v40,v38
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// lvrx128 v37,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v36,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vsldoi v6,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v36,v37
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// vmrghb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v35,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v34,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vmrghb v3,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v1,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vadduhm v2,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghb v31,v0,v12
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v34,v35
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// vslh v4,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v11,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// lvrx128 v33,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v32,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v30,v0,v1
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v28,v12,v0,1
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vmrghb v27,v0,v12
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v32,v33
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// vadduhm v25,v5,v11
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v26,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v11,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v30.u8));
	// vmrghb v24,v0,v28
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v23,v12,v0,1
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// lvrx128 v63,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v22,v0,v12
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vadduhm v20,v31,v11
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v21,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v19,v0,v23
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v11,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v24.u8));
	// vsldoi v18,v12,v0,1
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vadduhm v29,v2,v4
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// lvrx128 v61,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v17,v0,v12
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v60,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vslh v15,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v14,v27,v11
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghb v12,v0,v18
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v11,v19,v19
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v19.u8));
	// stvx128 v29,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v16,v25,v26
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v7,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// lvlx128 v59,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vadduhm v4,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// lvrx128 v58,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vslh v6,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v5,v22,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// stvx128 v16,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v11,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// stvx128 v7,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v4,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v1,v17,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v2,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vsldoi v31,v11,v0,1
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v12,v59,v58
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// vmrghb v30,v0,v11
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r9,r1,-112
	ctx.r9.s64 = ctx.r1.s64 + -112;
	// vmrghb v11,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r7,r1,-96
	ctx.r7.s64 = ctx.r1.s64 + -96;
	// addi r4,r1,-80
	ctx.r4.s64 = ctx.r1.s64 + -80;
	// vadduhm v29,v1,v3
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsldoi v28,v12,v0,1
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// stvx128 v2,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvrx128 v57,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v27,v0,v12
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v56,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vslh v26,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor128 v12,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// stvx128 v29,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v25,v0,v28
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v24,v30,v11
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vsldoi v23,v12,v0,1
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v22,v0,v12
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v12,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v25.u8));
	// vadduhm v21,v24,v26
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vmrghb v0,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v20,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v27,v12
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// stvx128 v21,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v17,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v16,v22,v0
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vadduhm v18,v19,v20
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v15,v16,v17
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// stvx128 v18,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v15,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82741E24:
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bgt cr6,0x82741f58
	if (ctx.cr6.gt) goto loc_82741F58;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82741e7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82741E7C;
	// bdzf 4*cr6+eq,0x82741ec8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82741EC8;
	// bne cr6,0x82741f10
	if (!ctx.cr6.eq) goto loc_82741F10;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,-208
	ctx.r11.s64 = ctx.r1.s64 + -208;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,4
	ctx.r10.s64 = 4;
loc_82741E50:
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vslh v13,v0,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v12,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsrah v11,v12,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v55,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvewx128 v55,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v55,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x82741e50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82741E50;
	// b 0x826a1d00
	return;
loc_82741E7C:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,-192
	ctx.r11.s64 = ctx.r1.s64 + -192;
	// li r9,-16
	ctx.r9.s64 = -16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,4
	ctx.r10.s64 = 4;
loc_82741E90:
	// lvx128 v0,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v11,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v8,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vadduhm v7,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v6,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsrah v5,v6,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v54,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvewx128 v54,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v54,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x82741e90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82741E90;
	// b 0x826a1d00
	return;
loc_82741EC8:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,-208
	ctx.r11.s64 = ctx.r1.s64 + -208;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,4
	ctx.r10.s64 = 4;
loc_82741ED8:
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lvx128 v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v11,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v8,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v7,v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsrah v6,v7,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v53,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvewx128 v53,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v53,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x82741ed8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82741ED8;
	// b 0x826a1d00
	return;
loc_82741F10:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,-192
	ctx.r11.s64 = ctx.r1.s64 + -192;
	// li r9,-16
	ctx.r9.s64 = -16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,4
	ctx.r10.s64 = 4;
loc_82741F24:
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v11,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v8,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vadduhm v7,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v6,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsrah v5,v6,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v52,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvewx128 v52,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v52,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x82741f24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82741F24;
loc_82741F58:
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_827BBA00) {
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
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r8,196(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// subfic r9,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	ctx.r9.u64 = static_cast<uint64_t>(8) - ctx.r11.u64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r8,r7,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// li r7,4
	ctx.r7.s64 = 4;
	// and r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 & ctx.r10.u64;
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// slw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// vsplth v1,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// bl 0x827b88e8
	ctx.lr = 0x827BBA50;
	sub_827B88E8(ctx, base);
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

DEFINE_REX_FUNC(sub_827BCD08) {
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
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r8,196(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// subfic r9,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	ctx.r9.u64 = static_cast<uint64_t>(8) - ctx.r11.u64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r8,r7,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// li r7,4
	ctx.r7.s64 = 4;
	// and r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 & ctx.r10.u64;
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// slw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// vsplth v1,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// bl 0x827b9130
	ctx.lr = 0x827BCD58;
	sub_827B9130(ctx, base);
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

DEFINE_REX_FUNC(sub_827BE8D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// bl 0x826a1cb4
	ctx.lr = 0x827BE8E0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1160(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 1160);
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// vspltish v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x4)));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r31,1164(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 1164);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r28,260(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v12,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xD0C))));
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stvx128 v12,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// bl 0x827af298
	ctx.lr = 0x827BE934;
	sub_827AF298(ctx, base);
	// cntlzw r7,r28
	ctx.r7.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// vspltish v10,8
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x8)));
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r5,r7,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// vspltish v8,-1
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// vspltisb v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// and r9,r5,r27
	ctx.r9.u64 = ctx.r5.u64 & r27.u64;
	// vspltish v9,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x3)));
	// vspltish v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x0)));
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// addi r4,r9,3
	ctx.r4.s64 = ctx.r9.s64 + 3;
	// vslh v8,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// slw r9,r6,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r4.u8 & 0x3F));
	// bne cr6,0x827be9fc
	if (!ctx.cr6.eq) goto loc_827BE9FC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827beaa8
	if (!ctx.cr6.gt) goto loc_827BEAA8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_827BE988:
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v13,v0,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// vsldoi128 v10,v0,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// vsldoi128 v7,v0,v63,6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 10));
	// lvx128 v6,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v13,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v4,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vslh v3,v13,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v2,v11,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vadduhm v1,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v31,v1,v6
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v30,v31,v2
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsrah v29,v30,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v62,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vor v12,v12,v29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// stvewx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// bdnz 0x827be988
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BE988;
	// vand v0,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
loc_827BE9FC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827beaa8
	if (!ctx.cr6.gt) goto loc_827BEAA8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_827BEA14:
	// lvx128 v0,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lvx128 v13,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v10,v0,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// vsldoi128 v7,v0,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// vsldoi128 v6,v0,v61,6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 10));
	// vsldoi v5,v13,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// vsldoi v4,v13,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 14));
	// vadduhm v3,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsldoi v2,v13,v0,6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 10));
	// vadduhm v1,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v10,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vor v0,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vadduhm v31,v13,v2
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsubshs v30,v11,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v10,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v0,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v27,v11,v31
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vadduhm v26,v10,v29
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// lvx128 v10,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v25,v0,v28
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// lvx128 v0,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v24,v26,v10
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v23,v25,v10
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v13,v24,v27
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v22,v23,v30
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vsrah v21,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v22,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v60,v12,v21
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v21.u8)));
	// vpkshus128 v59,v21,v20
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vor128 v12,v60,v20
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)v20.u8)));
	// stvx128 v59,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// bdnz 0x827bea14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BEA14;
loc_827BEAA8:
	// vand v0,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
}

