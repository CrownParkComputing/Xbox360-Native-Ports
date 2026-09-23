#include "hydrothunder_funcs.75.h"

DEFINE_REX_FUNC(sub_82124EF0) {
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
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x822f6280
	ctx.lr = 0x82124F0C;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82124f78
	if (ctx.cr0.eq) goto loc_82124F78;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-25168
	ctx.r11.s64 = ctx.r11.s64 + -25168;
	// stb r30,24(r31)
	REX_STORE_U8(r31.u32 + 24, r30.u8);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// bl 0x822f6280
	ctx.lr = 0x82124F34;
	sub_822F6280(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82124f60
	if (ctx.cr0.eq) goto loc_82124F60;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r10,6036
	ctx.r11.s64 = ctx.r10.s64 + 6036;
	// stw r9,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// stw r31,6036(r10)
	REX_STORE_U32(ctx.r10.u32 + 6036, r31.u32);
	// b 0x82124f88
	goto loc_82124F88;
loc_82124F60:
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
	ctx.lr = 0x82124F78;
	sub_82120018(ctx, base);
loc_82124F78:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,6036
	ctx.r11.s64 = ctx.r11.s64 + 6036;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_82124F88:
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

DEFINE_REX_FUNC(sub_8212BB78) {
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
	ctx.lr = 0x8212BB80;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,28
	r26.s64 = 28;
	// subf r27,r3,r4
	r27.u64 = ctx.r4.u64 - ctx.r3.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// divw r30,r27,r26
	r30.u64 = uint32_t((r26.s32 && !(r27.s32 == INT32_MIN && r26.s32 == -1)) ? r27.s32 / r26.s32 : 0);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(r30.s32, 32, ctx.xer);
	// ble cr6,0x8212bcf8
	if (!ctx.cr6.gt) goto loc_8212BCF8;
loc_8212BBA8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x8212bc30
	if (!ctx.cr6.gt) goto loc_8212BC30;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212bd18
	ctx.lr = 0x8212BBC0;
	sub_8212BD18(ctx, base);
	// srawi r11,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r11.s64 = r28.s32 >> 1;
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
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,80(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r30,r29
	ctx.r11.u64 = r29.u64 - r30.u64;
	// subf r10,r31,r27
	ctx.r10.u64 = r27.u64 - r31.u64;
	// divw r11,r11,r26
	ctx.r11.u64 = uint32_t((r26.s32 && !(ctx.r11.s32 == INT32_MIN && r26.s32 == -1)) ? ctx.r11.s32 / r26.s32 : 0);
	// divw r10,r10,r26
	ctx.r10.u64 = uint32_t((r26.s32 && !(ctx.r10.s32 == INT32_MIN && r26.s32 == -1)) ? ctx.r10.s32 / r26.s32 : 0);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8212bc0c
	if (!ctx.cr6.lt) goto loc_8212BC0C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212bb78
	ctx.lr = 0x8212BC04;
	sub_8212BB78(ctx, base);
	// mr r31,r30
	r31.u64 = r30.u64;
	// b 0x8212bc1c
	goto loc_8212BC1C;
loc_8212BC0C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8212bb78
	ctx.lr = 0x8212BC18;
	sub_8212BB78(ctx, base);
	// mr r29,r27
	r29.u64 = r27.u64;
loc_8212BC1C:
	// subf r27,r31,r29
	r27.u64 = r29.u64 - r31.u64;
	// divw r30,r27,r26
	r30.u64 = uint32_t((r26.s32 && !(r27.s32 == INT32_MIN && r26.s32 == -1)) ? r27.s32 / r26.s32 : 0);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(r30.s32, 32, ctx.xer);
	// bgt cr6,0x8212bba8
	if (ctx.cr6.gt) goto loc_8212BBA8;
loc_8212BC30:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x8212bcf8
	if (!ctx.cr6.gt) goto loc_8212BCF8;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// ble cr6,0x8212bd0c
	if (!ctx.cr6.gt) goto loc_8212BD0C;
	// srawi r11,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r11.s64 = r30.s32 >> 1;
	// addze. r29,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r29.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble 0x8212bc94
	if (!ctx.cr0.gt) goto loc_8212BC94;
	// mulli r11,r29,28
	ctx.r11.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(28));
	// add r28,r11,r31
	r28.u64 = ctx.r11.u64 + r31.u64;
loc_8212BC54:
	// addi r28,r28,-28
	r28.s64 = r28.s64 + -28;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// bl 0x82120670
	ctx.lr = 0x8212BC68;
	sub_82120670(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212c170
	ctx.lr = 0x8212BC7C;
	sub_8212C170(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8212BC8C;
	sub_82120AC0(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bgt cr6,0x8212bc54
	if (ctx.cr6.gt) goto loc_8212BC54;
loc_8212BC94:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// ble cr6,0x8212bd0c
	if (!ctx.cr6.gt) goto loc_8212BD0C;
	// mr r30,r27
	r30.u64 = r27.u64;
	// addi r28,r31,-28
	r28.s64 = r31.s64 + -28;
loc_8212BCA4:
	// add r29,r28,r30
	r29.u64 = r28.u64 + r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82120670
	ctx.lr = 0x8212BCB4;
	sub_82120670(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120700
	ctx.lr = 0x8212BCC0;
	sub_82120700(ctx, base);
	// addi r30,r30,-28
	r30.s64 = r30.s64 + -28;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// divw r5,r30,r26
	ctx.r5.u64 = uint32_t((r26.s32 && !(r30.s32 == INT32_MIN && r26.s32 == -1)) ? r30.s32 / r26.s32 : 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212c170
	ctx.lr = 0x8212BCD8;
	sub_8212C170(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8212BCE8;
	sub_82120AC0(ctx, base);
	// divw r11,r30,r26
	ctx.r11.u64 = uint32_t((r26.s32 && !(r30.s32 == INT32_MIN && r26.s32 == -1)) ? r30.s32 / r26.s32 : 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x8212bca4
	if (ctx.cr6.gt) goto loc_8212BCA4;
	// b 0x8212bd0c
	goto loc_8212BD0C;
loc_8212BCF8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8212bd0c
	if (!ctx.cr6.gt) goto loc_8212BD0C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212bf78
	ctx.lr = 0x8212BD0C;
	sub_8212BF78(ctx, base);
loc_8212BD0C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82139D78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82139D80;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,1
	r28.s64 = 1;
	// lwz r3,6072(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82139DA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82139db4
	if (ctx.cr6.lt) goto loc_82139DB4;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_82139DB4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-19172
	ctx.r4.s64 = ctx.r11.s64 + -19172;
	// bl 0x826a58b0
	ctx.lr = 0x82139DC4;
	sub_826A58B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82139ed4
	if (!ctx.cr0.eq) goto loc_82139ED4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,-19164
	r30.s64 = ctx.r11.s64 + -19164;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ed3f8
	ctx.lr = 0x82139DE0;
	sub_823ED3F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// bl 0x82120600
	ctx.lr = 0x82139DF0;
	sub_82120600(ctx, base);
	// lwz r3,6072(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6072);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82139E08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82139E18;
	sub_82120AC0(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82139e60
	goto loc_82139E60;
loc_82139E28:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82139E44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// and r28,r11,r10
	r28.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x82121598
	ctx.lr = 0x82139E58;
	sub_82121598(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82139E60:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82139e28
	if (!ctx.cr6.eq) goto loc_82139E28;
	// lwz r3,6072(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82139E7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82121450
	ctx.lr = 0x82139E8C;
	sub_82121450(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r10,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r10,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r10,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// bl 0x82120600
	ctx.lr = 0x82139EB8;
	sub_82120600(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821680e8
	ctx.lr = 0x82139EC4;
	sub_821680E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x82139ED4;
	sub_82120AC0(ctx, base);
loc_82139ED4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82144D90) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82144da8
	if (ctx.cr6.eq) goto loc_82144DA8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82144dac
	if (!ctx.cr6.eq) goto loc_82144DAC;
loc_82144DA8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82144DAC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821467E8) {
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
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c98
	ctx.lr = 0x821467F0;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x826a2ca8
	ctx.lr = 0x821467F8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,6048(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214681C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r25,-32106
	r25.s64 = -2104098816;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// lwz r3,6152(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82146838;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f30,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f30.f64 = double(temp.f32);
	// li r23,0
	r23.s64 = 0;
	// beq 0x821469b8
	if (ctx.cr0.eq) goto loc_821469B8;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r24,r23
	r24.u64 = r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821469b8
	if (!ctx.cr6.gt) goto loc_821469B8;
	// addi r22,r29,12
	r22.s64 = r29.s64 + 12;
loc_82146860:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8228ca78
	ctx.lr = 0x8214686C;
	sub_8228CA78(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f31,f0,f29
	f31.f64 = double(float(ctx.f0.f64 - f29.f64));
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(f31.f64, f30.f64);
	// bgt cr6,0x821468c0
	if (ctx.cr6.gt) goto loc_821468C0;
	// lbz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821468b0
	if (ctx.cr0.eq) goto loc_821468B0;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r11,25(r31)
	REX_STORE_U8(r31.u32 + 25, ctx.r11.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821468AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r23,25(r31)
	REX_STORE_U8(r31.u32 + 25, r23.u8);
loc_821468B0:
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
loc_821468B4:
	// fadds f31,f0,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(f31.f64, f30.f64);
	// ble cr6,0x821468b4
	if (!ctx.cr6.gt) goto loc_821468B4;
loc_821468C0:
	// lbz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 24);
	// stfs f31,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// mr r30,r23
	r30.u64 = r23.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82146990
	if (ctx.cr0.eq) goto loc_82146990;
	// lwz r28,32(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82146930
	if (ctx.cr6.eq) goto loc_82146930;
	// lwz r30,6152(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 6152);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// lwz r26,20(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r27,0(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821468F8;
	sub_82125C98(ctx, base);
	// lwz r11,176(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 176);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bctrl 
	ctx.lr = 0x82146928;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r23,32(r31)
	REX_STORE_U32(r31.u32 + 32, r23.u32);
loc_82146930:
	// lwz r27,44(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x82146990
	if (ctx.cr6.eq) goto loc_82146990;
	// lwz r28,6152(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 6152);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// lwz r21,20(r31)
	r21.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r20,52(r31)
	r20.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r26,0(r28)
	r26.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x82146958;
	sub_82125C98(ctx, base);
	// lwz r11,176(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 176);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bctrl 
	ctx.lr = 0x82146988;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
	// stw r23,44(r31)
	REX_STORE_U32(r31.u32 + 44, r23.u32);
loc_82146990:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 28);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,28(r29)
	REX_STORE_U32(r29.u32 + 28, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82146860
	if (ctx.cr6.lt) goto loc_82146860;
loc_821469B8:
	// lfs f0,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + f28.f64));
	// stfs f0,32(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 32, temp.u32);
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// lfs f29,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	f29.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// blt cr6,0x82146b1c
	if (ctx.cr6.lt) goto loc_82146B1C;
	// lwz r10,28(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 28);
	// lfs f13,48(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// stw r23,28(r29)
	REX_STORE_U32(r29.u32 + 28, r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// beq cr6,0x82146a8c
	if (ctx.cr6.eq) goto loc_82146A8C;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82146a90
	if (!ctx.cr6.gt) goto loc_82146A90;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r31,r23
	r31.u64 = r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82146b10
	if (!ctx.cr6.gt) goto loc_82146B10;
	// lfs f31,1108(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1108);
	f31.f64 = double(temp.f32);
	// addi r28,r29,12
	r28.s64 = r29.s64 + 12;
loc_82146A34:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8228ca78
	ctx.lr = 0x82146A40;
	sub_8228CA78(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r30,256
	ctx.r11.s64 = r30.s64 + 256;
	// lfs f0,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 / ctx.f0.f64));
	// lfs f13,56(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, f30.f64);
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
	// fsel f1,f12,f13,f0
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// bl 0x8217fac0
	ctx.lr = 0x82146A78;
	sub_8217FAC0(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82146a34
	if (ctx.cr6.lt) goto loc_82146A34;
	// b 0x82146b10
	goto loc_82146B10;
loc_82146A8C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
loc_82146A90:
	// bge cr6,0x82146b10
	if (!ctx.cr6.lt) goto loc_82146B10;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r31,r23
	r31.u64 = r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82146b10
	if (!ctx.cr6.gt) goto loc_82146B10;
	// lfs f31,992(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 992);
	f31.f64 = double(temp.f32);
	// addi r28,r29,12
	r28.s64 = r29.s64 + 12;
loc_82146AAC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8228ca78
	ctx.lr = 0x82146AB8;
	sub_8228CA78(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r30,256
	ctx.r11.s64 = r30.s64 + 256;
	// lfs f0,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 / ctx.f0.f64));
	// lfs f13,60(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, f30.f64);
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
	// fsel f1,f12,f13,f0
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// bl 0x8217fac0
	ctx.lr = 0x82146AF0;
	sub_8217FAC0(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82146aac
	if (ctx.cr6.lt) goto loc_82146AAC;
	// b 0x82146b10
	goto loc_82146B10;
loc_82146B04:
	// lfs f0,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - f29.f64));
	// stfs f0,32(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 32, temp.u32);
loc_82146B10:
	// lfs f0,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x82146b04
	if (!ctx.cr6.lt) goto loc_82146B04;
loc_82146B1C:
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
	ctx.lr = 0x82146B34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82146c1c
	if (ctx.cr0.eq) goto loc_82146C1C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82146B50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-14652
	ctx.r4.s64 = ctx.r11.s64 + -14652;
	// bl 0x82125d00
	ctx.lr = 0x82146B5C;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82146c1c
	if (!ctx.cr0.eq) goto loc_82146C1C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82146B78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r5,16(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-14604
	ctx.r4.s64 = ctx.r11.s64 + -14604;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82146B98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r30,r23
	r30.u64 = r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82146c1c
	if (!ctx.cr6.gt) goto loc_82146C1C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r27,r29,12
	r27.s64 = r29.s64 + 12;
	// addi r28,r11,-14588
	r28.s64 = ctx.r11.s64 + -14588;
loc_82146BB4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8228ca78
	ctx.lr = 0x82146BC0;
	sub_8228CA78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,72(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82146c0c
	if (ctx.cr6.eq) goto loc_82146C0C;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lfs f0,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r11,76
	ctx.r5.s64 = ctx.r11.s64 + 76;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82146be8
	if (ctx.cr6.lt) goto loc_82146BE8;
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
loc_82146BE8:
	// fdivs f1,f29,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f29.f64 / ctx.f0.f64));
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82146C0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82146C0C:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82146bb4
	if (ctx.cr6.lt) goto loc_82146BB4;
loc_82146C1C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x826a2cf4
	ctx.lr = 0x82146C28;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_8216DF58) {
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
	ctx.lr = 0x8216DF60;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,524(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 524);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,532(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 532);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8216df7c
	if (!ctx.cr6.gt) goto loc_8216DF7C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8216DF7C:
	// stw r11,532(r30)
	REX_STORE_U32(r30.u32 + 532, ctx.r11.u32);
	// lwz r11,528(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 528);
	// lwz r10,536(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 536);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8216df94
	if (!ctx.cr6.gt) goto loc_8216DF94;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8216DF94:
	// stw r11,536(r30)
	REX_STORE_U32(r30.u32 + 536, ctx.r11.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r3,6116(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 6116);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216DFB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8216e0e0
	if (ctx.cr0.eq) goto loc_8216E0E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216DFCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,25424
	ctx.r4.s64 = ctx.r11.s64 + 25424;
	// bl 0x82125d00
	ctx.lr = 0x8216DFD8;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8216e0e0
	if (!ctx.cr0.eq) goto loc_8216E0E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,532(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 532);
	// lwz r9,536(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 536);
	// mulli r28,r10,24
	r28.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r27,r9,1,0,30
	r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bctrl 
	ctx.lr = 0x8216E004;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r5,516(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 516);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-13712
	ctx.r4.s64 = ctx.r11.s64 + -13712;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216E024;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r5,520(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 520);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,25440
	ctx.r4.s64 = ctx.r11.s64 + 25440;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216E044;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r5,524(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 524);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,25460
	ctx.r4.s64 = ctx.r11.s64 + 25460;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216E064;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,528(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 528);
	// li r29,3
	r29.s64 = 3;
	// addi r4,r11,25480
	ctx.r4.s64 = ctx.r11.s64 + 25480;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// divw r5,r10,r29
	ctx.r5.u64 = uint32_t((r29.s32 && !(ctx.r10.s32 == INT32_MIN && r29.s32 == -1)) ? ctx.r10.s32 / r29.s32 : 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216E08C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r11,r28,10
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3FF) != 0);
	ctx.r11.s64 = r28.s32 >> 10;
	// lwz r5,532(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 532);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addze r6,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r6.s64 = temp.s64;
	// addi r4,r10,25500
	ctx.r4.s64 = ctx.r10.s64 + 25500;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216E0B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r11,r27,10
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3FF) != 0);
	ctx.r11.s64 = r27.s32 >> 10;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addze r6,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r6.s64 = temp.s64;
	// addi r4,r10,25532
	ctx.r4.s64 = ctx.r10.s64 + 25532;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,536(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 536);
	// divw r5,r10,r29
	ctx.r5.u64 = uint32_t((r29.s32 && !(ctx.r10.s32 == INT32_MIN && r29.s32 == -1)) ? ctx.r10.s32 / r29.s32 : 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216E0E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216E0E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,516(r30)
	REX_STORE_U32(r30.u32 + 516, ctx.r11.u32);
	// stw r11,520(r30)
	REX_STORE_U32(r30.u32 + 520, ctx.r11.u32);
	// stw r11,524(r30)
	REX_STORE_U32(r30.u32 + 524, ctx.r11.u32);
	// stw r11,528(r30)
	REX_STORE_U32(r30.u32 + 528, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8217AB08) {
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
	// lwz r31,24(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,29104
	ctx.r11.s64 = ctx.r11.s64 + 29104;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8217ab54
	goto loc_8217AB54;
loc_8217AB34:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// lwz r31,40(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217AB54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8217AB54:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8217ab34
	if (!ctx.cr6.eq) goto loc_8217AB34;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,32(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 32);
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8217ab74
	if (ctx.cr6.eq) goto loc_8217AB74;
	// bl 0x8269d6a0
	ctx.lr = 0x8217AB74;
	sub_8269D6A0(ctx, base);
loc_8217AB74:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,17212
	ctx.r11.s64 = ctx.r11.s64 + 17212;
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

DEFINE_REX_FUNC(sub_8217EE18) {
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
	// lis r30,-32106
	r30.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,6044(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6044);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217EE4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6044(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6044);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,48(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217EE6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6044(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6044);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217EE90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,6044(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6044);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// stb r11,8(r31)
	REX_STORE_U8(r31.u32 + 8, ctx.r11.u8);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r10,-4392
	ctx.r4.s64 = ctx.r10.s64 + -4392;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217EEB8;
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

DEFINE_REX_FUNC(sub_82185218) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c80
	ctx.lr = 0x82185220;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2c70
	ctx.lr = 0x82185228;
	// lwz r11,92(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 92);
	// li r17,0
	r17.s64 = 0;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r22,r11,12
	r22.s64 = ctx.r11.s64 + 12;
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// addi r19,r11,20
	r19.s64 = ctx.r11.s64 + 20;
	// stw r17,-528(r1)
	REX_STORE_U32(ctx.r1.u32 + -528, r17.u32);
	// mr r21,r11
	r21.u64 = ctx.r11.u64;
	// stw r22,-440(r1)
	REX_STORE_U32(ctx.r1.u32 + -440, r22.u32);
	// stw r11,-448(r1)
	REX_STORE_U32(ctx.r1.u32 + -448, ctx.r11.u32);
	// addi r24,r11,8
	r24.s64 = ctx.r11.s64 + 8;
	// stw r19,-432(r1)
	REX_STORE_U32(ctx.r1.u32 + -432, r19.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8218596c
	if (!ctx.cr6.gt) goto loc_8218596C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// addi r23,r11,16592
	r23.s64 = ctx.r11.s64 + 16592;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r18,0
	r18.s64 = 0;
	// lfs f3,-19392(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -19392);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,-27152
	ctx.r11.s64 = ctx.r11.s64 + -27152;
	// lfs f0,920(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 920);
	ctx.f0.f64 = double(temp.f32);
	// addi r16,r10,-27136
	r16.s64 = ctx.r10.s64 + -27136;
	// lfs f13,292(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// lfs f27,288(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 288);
	f27.f64 = double(temp.f32);
	// stw r18,-520(r1)
	REX_STORE_U32(ctx.r1.u32 + -520, r18.u32);
	// lfs f12,180(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-504(r1)
	REX_STORE_U32(ctx.r1.u32 + -504, ctx.r11.u32);
	// lfs f9,15048(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	ctx.f9.f64 = double(temp.f32);
	// stw r16,-508(r1)
	REX_STORE_U32(ctx.r1.u32 + -508, r16.u32);
	// lfs f10,12(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,-524(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -524, temp.u32);
	// stfs f13,-472(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -472, temp.u32);
	// stfs f27,-500(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + -500, temp.u32);
	// stfs f12,-492(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -492, temp.u32);
	// stfs f3,-512(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + -512, temp.u32);
loc_821852C0:
	// lwz r10,100(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 100);
	// addi r11,r4,100
	ctx.r11.s64 = ctx.r4.s64 + 100;
	// lwz r9,104(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 104);
	// addi r11,r4,104
	ctx.r11.s64 = ctx.r4.s64 + 104;
	// lwzx r10,r18,r10
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + ctx.r10.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8218592c
	if (!ctx.cr6.eq) goto loc_8218592C;
	// lfs f8,0(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r21.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r5,r3,96
	ctx.r5.s64 = ctx.r3.s64 + 96;
	// lfs f6,96(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// addi r31,r3,160
	r31.s64 = ctx.r3.s64 + 160;
	// lfs f5,160(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f0,f8,f6
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// fsubs f13,f8,f5
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// lfs f7,4(r21)
	temp.u32 = REX_LOAD_U32(r21.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,100(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// addi r26,r3,112
	r26.s64 = ctx.r3.s64 + 112;
	// lfs f11,164(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// lfs f4,112(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f2,176(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f2.f64 = double(temp.f32);
	// addi r25,r3,176
	r25.s64 = ctx.r3.s64 + 176;
	// lfs f1,116(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,180(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 180);
	f31.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmadds f0,f1,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f12.f64, ctx.f0.f64)));
	// fmadds f11,f31,f11,f13
	ctx.f11.f64 = double(float(std::fma(f31.f64, ctx.f11.f64, ctx.f13.f64)));
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// bge cr6,0x8218592c
	if (!ctx.cr6.lt) goto loc_8218592C;
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f4,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lfs f1,132(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// addi r29,r5,4
	r29.s64 = ctx.r5.s64 + 4;
	// lfs f31,196(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 196);
	f31.f64 = double(temp.f32);
	// addi r28,r3,132
	r28.s64 = ctx.r3.s64 + 132;
	// addi r27,r3,196
	r27.s64 = ctx.r3.s64 + 196;
	// fdivs f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fsubs f12,f10,f13
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmuls f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f2,f2,f13
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f5,f5,f12
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmuls f4,f12,f4
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fmadds f1,f31,f12,f1
	ctx.f1.f64 = double(float(std::fma(f31.f64, ctx.f12.f64, ctx.f1.f64)));
	// fadds f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// fadds f5,f2,f4
	ctx.f5.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// fsubs f6,f8,f6
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// fsubs f4,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// fmuls f7,f1,f1
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// stfs f7,-480(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -480, temp.u32);
	// fmuls f8,f6,f6
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmadds f8,f4,f4,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f4.f64, ctx.f4.f64, ctx.f8.f64)));
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// bge cr6,0x8218592c
	if (!ctx.cr6.lt) goto loc_8218592C;
	// fsqrts f8,f8
	ctx.f8.f64 = double(float(sqrt(ctx.f8.f64)));
	// lfs f31,80(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 80);
	f31.f64 = double(temp.f32);
	// lfs f7,136(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f2,144(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f2.f64 = double(temp.f32);
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f30,200(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 200);
	f30.f64 = double(temp.f32);
	// lfs f29,208(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 208);
	f29.f64 = double(temp.f32);
	// addi r9,r3,136
	ctx.r9.s64 = ctx.r3.s64 + 136;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// addi r8,r3,144
	ctx.r8.s64 = ctx.r3.s64 + 144;
	// addi r7,r3,200
	ctx.r7.s64 = ctx.r3.s64 + 200;
	// addi r6,r3,208
	ctx.r6.s64 = ctx.r3.s64 + 208;
	// fnmsubs f5,f31,f1,f8
	ctx.f5.f64 = double(float(-std::fma(f31.f64, ctx.f1.f64, -ctx.f8.f64)));
	// stfs f5,-488(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -488, temp.u32);
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f28,f2,f13
	f28.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fneg f26,f5
	f26.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fmadds f2,f30,f12,f7
	ctx.f2.f64 = double(float(std::fma(f30.f64, ctx.f12.f64, ctx.f7.f64)));
	// fmadds f7,f29,f12,f28
	ctx.f7.f64 = double(float(std::fma(f29.f64, ctx.f12.f64, f28.f64)));
	// fcmpu cr6,f26,f9
	ctx.cr6.compare(f26.f64, ctx.f9.f64);
	// mfcr r20
	r20.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	r20.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	r20.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	r20.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	r20.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	r20.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	r20.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	r20.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	r20.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	r20.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	r20.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	r20.u64 |= ctx.cr2.so ? 0x100000 : 0;
	r20.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	r20.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	r20.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	r20.u64 |= ctx.cr3.so ? 0x10000 : 0;
	r20.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	r20.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	r20.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	r20.u64 |= ctx.cr4.so ? 0x1000 : 0;
	r20.u64 |= ctx.cr5.lt ? 0x800 : 0;
	r20.u64 |= ctx.cr5.gt ? 0x400 : 0;
	r20.u64 |= ctx.cr5.eq ? 0x200 : 0;
	r20.u64 |= ctx.cr5.so ? 0x100 : 0;
	r20.u64 |= ctx.cr6.lt ? 0x80 : 0;
	r20.u64 |= ctx.cr6.gt ? 0x40 : 0;
	r20.u64 |= ctx.cr6.eq ? 0x20 : 0;
	r20.u64 |= ctx.cr6.so ? 0x10 : 0;
	r20.u64 |= ctx.cr7.lt ? 0x8 : 0;
	r20.u64 |= ctx.cr7.gt ? 0x4 : 0;
	r20.u64 |= ctx.cr7.eq ? 0x2 : 0;
	r20.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r15,r20,27,29,29
	r15.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 27) & 0x4;
	// rlwinm r20,r20,30,29,29
	r20.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 30) & 0x4;
	// or r20,r15,r20
	r20.u64 = r15.u64 | r20.u64;
	// lfsx f30,r11,r20
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	f30.f64 = double(temp.f32);
	// fsel f5,f30,f9,f5
	ctx.f5.f64 = f30.f64 >= 0.0 ? ctx.f9.f64 : ctx.f5.f64;
	// stfs f5,-496(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -496, temp.u32);
	// fdivs f5,f5,f2
	ctx.f5.f64 = double(float(ctx.f5.f64 / ctx.f2.f64));
	// fsubs f30,f7,f5
	f30.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// stfs f30,-476(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + -476, temp.u32);
	// fcmpu cr6,f30,f9
	ctx.cr6.compare(f30.f64, ctx.f9.f64);
	// ble cr6,0x8218592c
	if (!ctx.cr6.gt) goto loc_8218592C;
	// lfs f5,120(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f5.f64 = double(temp.f32);
	// addi r11,r3,120
	ctx.r11.s64 = ctx.r3.s64 + 120;
	// fmuls f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f29,184(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 184);
	f29.f64 = double(temp.f32);
	// addi r20,r3,184
	r20.s64 = ctx.r3.s64 + 184;
	// fmadds f26,f29,f12,f5
	f26.f64 = double(float(std::fma(f29.f64, ctx.f12.f64, ctx.f5.f64)));
	// fcmpu cr6,f7,f26
	ctx.cr6.compare(ctx.f7.f64, f26.f64);
	// bge cr6,0x8218592c
	if (!ctx.cr6.lt) goto loc_8218592C;
	// lfs f5,128(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f5.f64 = double(temp.f32);
	// fdivs f29,f8,f1
	f29.f64 = double(float(ctx.f8.f64 / ctx.f1.f64));
	// fmuls f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f28,140(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 140);
	f28.f64 = double(temp.f32);
	// lfs f25,124(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 124);
	f25.f64 = double(temp.f32);
	// fmuls f24,f28,f13
	f24.f64 = double(float(f28.f64 * ctx.f13.f64));
	// lfs f28,192(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 192);
	f28.f64 = double(temp.f32);
	// fmuls f25,f25,f13
	f25.f64 = double(float(f25.f64 * ctx.f13.f64));
	// lfs f13,204(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// addi r22,r3,140
	r22.s64 = ctx.r3.s64 + 140;
	// lfs f23,188(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 188);
	f23.f64 = double(temp.f32);
	// addi r21,r3,124
	r21.s64 = ctx.r3.s64 + 124;
	// stfs f29,-516(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + -516, temp.u32);
	// addi r20,r3,204
	r20.s64 = ctx.r3.s64 + 204;
	// stfs f10,-544(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -544, temp.u32);
	// addi r11,r3,188
	ctx.r11.s64 = ctx.r3.s64 + 188;
	// stfs f10,-536(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -536, temp.u32);
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(f29.f64, f31.f64);
	// fmadds f28,f28,f12,f5
	f28.f64 = double(float(std::fma(f28.f64, ctx.f12.f64, ctx.f5.f64)));
	// fmadds f13,f13,f12,f24
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, f24.f64)));
	// stfs f13,-324(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -324, temp.u32);
	// fmadds f5,f23,f12,f25
	ctx.f5.f64 = double(float(std::fma(f23.f64, ctx.f12.f64, f25.f64)));
	// stfs f5,-340(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -340, temp.u32);
	// fmr f12,f28
	ctx.f12.f64 = f28.f64;
	// bge cr6,0x821854c4
	if (!ctx.cr6.lt) goto loc_821854C4;
	// fdivs f12,f29,f31
	ctx.f12.f64 = double(float(f29.f64 / f31.f64));
	// stfs f12,-544(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -544, temp.u32);
	// fmuls f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 * f28.f64));
loc_821854C4:
	// lfs f31,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 84);
	f31.f64 = double(temp.f32);
	// addi r11,r3,84
	ctx.r11.s64 = ctx.r3.s64 + 84;
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(f29.f64, f31.f64);
	// ble cr6,0x821854e8
	if (!ctx.cr6.gt) goto loc_821854E8;
	// fsubs f29,f10,f29
	f29.f64 = double(float(ctx.f10.f64 - f29.f64));
	// fsubs f31,f10,f31
	f31.f64 = double(float(ctx.f10.f64 - f31.f64));
	// fdivs f31,f29,f31
	f31.f64 = double(float(f29.f64 / f31.f64));
	// stfs f31,-536(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + -536, temp.u32);
	// fmuls f12,f31,f12
	ctx.f12.f64 = double(float(f31.f64 * ctx.f12.f64));
loc_821854E8:
	// fmadds f30,f13,f30,f27
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(std::fma(ctx.f13.f64, f30.f64, f27.f64)));
	// lfs f29,-472(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -472);
	f29.f64 = double(temp.f32);
	// fsubs f13,f26,f7
	ctx.f13.f64 = double(float(f26.f64 - ctx.f7.f64));
	// stfs f13,-484(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -484, temp.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f7,-492(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -492);
	ctx.f7.f64 = double(temp.f32);
	// lis r18,-32243
	r18.s64 = -2113077248;
	// std r22,-400(r1)
	REX_STORE_U64(ctx.r1.u32 + -400, r22.u64);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// std r21,-376(r1)
	REX_STORE_U64(ctx.r1.u32 + -376, r21.u64);
	// stfs f10,-416(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -416, temp.u32);
	// addi r4,r1,-416
	ctx.r4.s64 = ctx.r1.s64 + -416;
	// addi r17,r11,256
	r17.s64 = ctx.r11.s64 + 256;
	// lvx128 v62,r0,r16
	ea = (r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r18,16592
	ctx.r11.s64 = r18.s64 + 16592;
	// lwz r19,-504(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -504);
	// addi r18,r1,-532
	r18.s64 = ctx.r1.s64 + -532;
	// fmuls f28,f0,f0
	f28.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// fabs f26,f30
	f26.u64 = f30.u64 & ~0x8000000000000000;
	// addi r16,r1,-540
	r16.s64 = ctx.r1.s64 + -540;
	// fdivs f31,f13,f5
	f31.f64 = double(float(ctx.f13.f64 / ctx.f5.f64));
	// fmuls f13,f26,f29
	ctx.f13.f64 = double(float(f26.f64 * f29.f64));
	// fsubs f5,f10,f31
	ctx.f5.f64 = double(float(ctx.f10.f64 - f31.f64));
	// fctidz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// fcmpu cr6,f5,f9
	ctx.cr6.compare(ctx.f5.f64, ctx.f9.f64);
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
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// rlwinm r14,r15,27,29,29
	r14.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 27) & 0x4;
	// rlwinm r15,r15,30,29,29
	r15.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 30) & 0x4;
	// fcmpu cr6,f30,f9
	ctx.cr6.compare(f30.f64, ctx.f9.f64);
	// mfcr r22
	r22.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	r22.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	r22.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	r22.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	r22.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	r22.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	r22.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	r22.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	r22.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	r22.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	r22.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	r22.u64 |= ctx.cr2.so ? 0x100000 : 0;
	r22.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	r22.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	r22.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	r22.u64 |= ctx.cr3.so ? 0x10000 : 0;
	r22.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	r22.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	r22.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	r22.u64 |= ctx.cr4.so ? 0x1000 : 0;
	r22.u64 |= ctx.cr5.lt ? 0x800 : 0;
	r22.u64 |= ctx.cr5.gt ? 0x400 : 0;
	r22.u64 |= ctx.cr5.eq ? 0x200 : 0;
	r22.u64 |= ctx.cr5.so ? 0x100 : 0;
	r22.u64 |= ctx.cr6.lt ? 0x80 : 0;
	r22.u64 |= ctx.cr6.gt ? 0x40 : 0;
	r22.u64 |= ctx.cr6.eq ? 0x20 : 0;
	r22.u64 |= ctx.cr6.so ? 0x10 : 0;
	r22.u64 |= ctx.cr7.lt ? 0x8 : 0;
	r22.u64 |= ctx.cr7.gt ? 0x4 : 0;
	r22.u64 |= ctx.cr7.eq ? 0x2 : 0;
	r22.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r21,r22,27,29,29
	r21.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 27) & 0x4;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// or r15,r14,r15
	r15.u64 = r14.u64 | r15.u64;
	// rlwinm r22,r22,30,29,29
	r22.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 30) & 0x4;
	// or r22,r21,r22
	r22.u64 = r21.u64 | r22.u64;
	// lfsx f30,r11,r15
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	f30.f64 = double(temp.f32);
	// lfsx f5,r17,r22
	temp.u32 = REX_LOAD_U32(r17.u32 + r22.u32);
	ctx.f5.f64 = double(temp.f32);
	// fnmsubs f7,f13,f7,f26
	ctx.f7.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f7.f64, -f26.f64)));
	// fsel f13,f30,f31,f10
	ctx.f13.f64 = f30.f64 >= 0.0 ? f31.f64 : ctx.f10.f64;
	// stfs f13,-468(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -468, temp.u32);
	// fsubs f30,f7,f27
	f30.f64 = double(float(ctx.f7.f64 - f27.f64));
	// fmuls f7,f13,f12
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fneg f13,f30
	ctx.f13.u64 = f30.u64 ^ 0x8000000000000000;
	// fsel f13,f5,f30,f13
	ctx.f13.f64 = ctx.f5.f64 >= 0.0 ? f30.f64 : ctx.f13.f64;
	// stfs f13,-412(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -412, temp.u32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// stfs f12,-408(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -408, temp.u32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f13,-404(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -404, temp.u32);
	// lvx128 v63,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v61,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vspltw128 v63,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vmsum4fp128 v62,v61,v62
	simde_mm_store_ps(ctx.v62.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// vmulfp128 v61,v61,v63
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvewx128 v62,r0,r18
	ea = (r18.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v63,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v63,v61,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// stvewx128 v63,r0,r16
	ea = (r16.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,0(r24)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(r24.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-540(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -540);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f12,f7,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f7.f64, ctx.f13.f64)));
	// stfs f13,0(r24)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r24.u32 + 0, temp.u32);
	// lfs f13,180(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,116(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f5,0(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f30,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	f30.f64 = double(temp.f32);
	// fsubs f30,f5,f30
	f30.f64 = double(float(ctx.f5.f64 - f30.f64));
	// fsubs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f29,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	f29.f64 = double(temp.f32);
	// fmuls f30,f30,f11
	f30.f64 = double(float(f30.f64 * ctx.f11.f64));
	// lfs f27,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	f27.f64 = double(temp.f32);
	// lfs f26,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	f26.f64 = double(temp.f32);
	// lfs f25,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	f25.f64 = double(temp.f32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmsubs f11,f5,f0,f30
	ctx.f11.f64 = double(float(std::fma(ctx.f5.f64, ctx.f0.f64, -f30.f64)));
	// fmsubs f13,f13,f0,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, -ctx.f12.f64)));
	// fdivs f0,f11,f28
	ctx.f0.f64 = double(float(ctx.f11.f64 / f28.f64));
	// fdivs f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 / f28.f64));
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f18,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	f18.f64 = double(temp.f32);
	// fmuls f30,f0,f29
	f30.f64 = double(float(ctx.f0.f64 * f29.f64));
	// stfd f2,-384(r1)
	REX_STORE_U64(ctx.r1.u32 + -384, ctx.f2.u64);
	// fmuls f5,f13,f29
	ctx.f5.f64 = double(float(ctx.f13.f64 * f29.f64));
	// lfs f29,-524(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -524);
	f29.f64 = double(temp.f32);
	// fmr f24,f29
	f24.f64 = f29.f64;
	// lfs f15,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	f15.f64 = double(temp.f32);
	// fsubs f29,f8,f29
	f29.f64 = double(float(ctx.f8.f64 - f29.f64));
	// addi r11,r23,256
	ctx.r11.s64 = r23.s64 + 256;
	// fmuls f23,f26,f0
	f23.f64 = double(float(f26.f64 * ctx.f0.f64));
	// lfs f19,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	f19.f64 = double(temp.f32);
	// fmuls f20,f25,f12
	f20.f64 = double(float(f25.f64 * ctx.f12.f64));
	// lfs f21,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	f21.f64 = double(temp.f32);
	// fmuls f26,f26,f13
	f26.f64 = double(float(f26.f64 * ctx.f13.f64));
	// lfs f22,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	f22.f64 = double(temp.f32);
	// fmuls f2,f18,f0
	ctx.f2.f64 = double(float(f18.f64 * ctx.f0.f64));
	// stfd f7,-392(r1)
	REX_STORE_U64(ctx.r1.u32 + -392, ctx.f7.u64);
	// fmuls f16,f21,f0
	f16.f64 = double(float(f21.f64 * ctx.f0.f64));
	// stfd f1,-464(r1)
	REX_STORE_U64(ctx.r1.u32 + -464, ctx.f1.u64);
	// fmuls f28,f11,f27
	f28.f64 = double(float(ctx.f11.f64 * f27.f64));
	// lfs f17,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	f17.f64 = double(temp.f32);
	// fmuls f27,f12,f27
	f27.f64 = double(float(ctx.f12.f64 * f27.f64));
	// lfs f7,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f25,f25,f11
	f25.f64 = double(float(f25.f64 * ctx.f11.f64));
	// lfs f1,-488(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -488);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f14,f22,f11
	f14.f64 = double(float(f22.f64 * ctx.f11.f64));
	// ld r22,-400(r1)
	r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -400);
	// fcmpu cr6,f29,f9
	ctx.cr6.compare(f29.f64, ctx.f9.f64);
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
	// fadds f30,f30,f27
	f30.f64 = double(float(f30.f64 + f27.f64));
	// rlwinm r8,r9,27,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// fadds f5,f5,f28
	ctx.f5.f64 = double(float(ctx.f5.f64 + f28.f64));
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// fadds f23,f23,f20
	f23.f64 = double(float(f23.f64 + f20.f64));
	// ld r21,-376(r1)
	r21.u64 = REX_LOAD_U64(ctx.r1.u32 + -376);
	// fadds f26,f26,f25
	f26.f64 = double(float(f26.f64 + f25.f64));
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// fmuls f28,f19,f11
	f28.f64 = double(float(f19.f64 * ctx.f11.f64));
	// fmuls f27,f15,f0
	f27.f64 = double(float(f15.f64 * ctx.f0.f64));
	// fcmpu cr6,f1,f9
	ctx.cr6.compare(ctx.f1.f64, ctx.f9.f64);
	// lfd f1,-464(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -464);
	// fsubs f30,f10,f30
	f30.f64 = double(float(ctx.f10.f64 - f30.f64));
	// fneg f29,f5
	f29.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fneg f23,f23
	f23.u64 = f23.u64 ^ 0x8000000000000000;
	// fsubs f20,f10,f26
	f20.f64 = double(float(ctx.f10.f64 - f26.f64));
	// fmadds f26,f19,f12,f2
	f26.f64 = double(float(std::fma(f19.f64, ctx.f12.f64, ctx.f2.f64)));
	// lfsx f19,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	f19.f64 = double(temp.f32);
	// fsel f8,f19,f8,f24
	ctx.f8.f64 = f19.f64 >= 0.0 ? ctx.f8.f64 : f24.f64;
	// lfd f2,-384(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + -384);
	// fmadds f5,f21,f13,f14
	ctx.f5.f64 = double(float(std::fma(f21.f64, ctx.f13.f64, f14.f64)));
	// fmuls f21,f17,f11
	f21.f64 = double(float(f17.f64 * ctx.f11.f64));
	// fmadds f25,f18,f13,f28
	f25.f64 = double(float(std::fma(f18.f64, ctx.f13.f64, f28.f64)));
	// fmadds f28,f17,f12,f27
	f28.f64 = double(float(std::fma(f17.f64, ctx.f12.f64, f27.f64)));
	// fmuls f30,f30,f6
	f30.f64 = double(float(f30.f64 * ctx.f6.f64));
	// fmuls f29,f29,f6
	f29.f64 = double(float(f29.f64 * ctx.f6.f64));
	// fmadds f6,f22,f12,f16
	ctx.f6.f64 = double(float(std::fma(f22.f64, ctx.f12.f64, f16.f64)));
	// fmuls f24,f8,f3
	f24.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// fmadds f27,f15,f13,f21
	f27.f64 = double(float(std::fma(f15.f64, ctx.f13.f64, f21.f64)));
	// fmadds f30,f23,f4,f30
	f30.f64 = double(float(std::fma(f23.f64, ctx.f4.f64, f30.f64)));
	// fmadds f4,f20,f4,f29
	ctx.f4.f64 = double(float(std::fma(f20.f64, ctx.f4.f64, f29.f64)));
	// fmuls f30,f30,f3
	f30.f64 = double(float(f30.f64 * ctx.f3.f64));
	// fmuls f3,f4,f3
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fdivs f4,f30,f24
	ctx.f4.f64 = double(float(f30.f64 / f24.f64));
	// fdivs f3,f3,f24
	ctx.f3.f64 = double(float(ctx.f3.f64 / f24.f64));
	// fnmsubs f30,f7,f6,f4
	f30.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f6.f64, -ctx.f4.f64)));
	// fnmsubs f29,f7,f5,f3
	f29.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f5.f64, -ctx.f3.f64)));
	// lfd f7,-392(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -392);
	// bge cr6,0x82185748
	if (!ctx.cr6.lt) goto loc_82185748;
	// fmr f30,f9
	f30.f64 = ctx.f9.f64;
	// fmr f29,f9
	f29.f64 = ctx.f9.f64;
loc_82185748:
	// lfs f24,-496(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -496);
	f24.f64 = double(temp.f32);
	// fmuls f6,f6,f8
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f28,f28,f24
	f28.f64 = double(float(f28.f64 * f24.f64));
	// stfd f10,-464(r1)
	REX_STORE_U64(ctx.r1.u32 + -464, ctx.f10.u64);
	// fmuls f27,f27,f24
	f27.f64 = double(float(f27.f64 * f24.f64));
	// lfs f23,184(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 184);
	f23.f64 = double(temp.f32);
	// fmuls f8,f5,f8
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// lfs f24,120(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	f24.f64 = double(temp.f32);
	// fmuls f22,f2,f2
	f22.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// lfs f21,0(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 0);
	f21.f64 = double(temp.f32);
	// lfs f20,0(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 0);
	f20.f64 = double(temp.f32);
	// fmuls f19,f24,f0
	f19.f64 = double(float(f24.f64 * ctx.f0.f64));
	// lfs f5,188(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f17,f20,f0
	f17.f64 = double(float(f20.f64 * ctx.f0.f64));
	// lfs f18,0(r21)
	temp.u32 = REX_LOAD_U32(r21.u32 + 0);
	f18.f64 = double(temp.f32);
	// fmuls f10,f21,f11
	ctx.f10.f64 = double(float(f21.f64 * ctx.f11.f64));
	// fmuls f16,f18,f0
	f16.f64 = double(float(f18.f64 * ctx.f0.f64));
	// lfs f0,-480(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -480);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f15,f23,f11
	f15.f64 = double(float(f23.f64 * ctx.f11.f64));
	// lfs f14,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	f14.f64 = double(temp.f32);
	// fmsubs f4,f4,f1,f6
	ctx.f4.f64 = double(float(std::fma(ctx.f4.f64, ctx.f1.f64, -ctx.f6.f64)));
	// addi r11,r3,184
	ctx.r11.s64 = ctx.r3.s64 + 184;
	// fmsubs f30,f30,f2,f28
	f30.f64 = double(float(std::fma(f30.f64, ctx.f2.f64, -f28.f64)));
	// addi r11,r3,120
	ctx.r11.s64 = ctx.r3.s64 + 120;
	// fmsubs f29,f29,f2,f27
	f29.f64 = double(float(std::fma(f29.f64, ctx.f2.f64, -f27.f64)));
	// addi r11,r3,188
	ctx.r11.s64 = ctx.r3.s64 + 188;
	// fmuls f28,f5,f11
	f28.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmsubs f27,f3,f1,f8
	f27.f64 = double(float(std::fma(ctx.f3.f64, ctx.f1.f64, -ctx.f8.f64)));
	// lfs f3,-516(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -516);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f8,f23,f12,f19
	ctx.f8.f64 = double(float(std::fma(f23.f64, ctx.f12.f64, f19.f64)));
	// fmadds f2,f21,f12,f17
	ctx.f2.f64 = double(float(std::fma(f21.f64, ctx.f12.f64, f17.f64)));
	// fmadds f1,f20,f13,f10
	ctx.f1.f64 = double(float(std::fma(f20.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f5,f5,f12,f16
	ctx.f5.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, f16.f64)));
	// fmadds f6,f24,f13,f15
	ctx.f6.f64 = double(float(std::fma(f24.f64, ctx.f13.f64, f15.f64)));
	// fdivs f11,f4,f0
	ctx.f11.f64 = double(float(ctx.f4.f64 / ctx.f0.f64));
	// fdivs f30,f30,f22
	f30.f64 = double(float(f30.f64 / f22.f64));
	// lfd f10,-464(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -464);
	// fdivs f29,f29,f22
	f29.f64 = double(float(f29.f64 / f22.f64));
	// fmadds f4,f18,f13,f28
	ctx.f4.f64 = double(float(std::fma(f18.f64, ctx.f13.f64, f28.f64)));
	// fmr f13,f9
	ctx.f13.f64 = ctx.f9.f64;
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
	// fdivs f0,f27,f0
	ctx.f0.f64 = double(float(f27.f64 / ctx.f0.f64));
	// fcmpu cr6,f3,f14
	ctx.cr6.compare(ctx.f3.f64, f14.f64);
	// fsubs f30,f26,f30
	f30.f64 = double(float(f26.f64 - f30.f64));
	// fsubs f29,f25,f29
	f29.f64 = double(float(f25.f64 - f29.f64));
	// bge cr6,0x82185820
	if (!ctx.cr6.lt) goto loc_82185820;
	// fmr f13,f14
	ctx.f13.f64 = f14.f64;
	// lfs f12,-544(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -544);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fdivs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// fmuls f28,f13,f11
	f28.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f27,f13,f0
	f27.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmadds f13,f28,f7,f12
	ctx.f13.f64 = double(float(std::fma(f28.f64, ctx.f7.f64, ctx.f12.f64)));
	// fmadds f12,f27,f7,f12
	ctx.f12.f64 = double(float(std::fma(f27.f64, ctx.f7.f64, ctx.f12.f64)));
loc_82185820:
	// lfs f28,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 84);
	f28.f64 = double(temp.f32);
	// addi r11,r3,84
	ctx.r11.s64 = ctx.r3.s64 + 84;
	// fcmpu cr6,f3,f28
	ctx.cr6.compare(ctx.f3.f64, f28.f64);
	// ble cr6,0x82185854
	if (!ctx.cr6.gt) goto loc_82185854;
	// lfs f3,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f28,f10,f3
	f28.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// lfs f3,-536(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -536);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fmuls f12,f12,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fdivs f11,f11,f28
	ctx.f11.f64 = double(float(ctx.f11.f64 / f28.f64));
	// fdivs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 / f28.f64));
	// fmadds f13,f11,f7,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f7.f64, ctx.f13.f64)));
	// fmadds f12,f0,f7,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, ctx.f7.f64, ctx.f12.f64)));
loc_82185854:
	// lfs f0,-484(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -484);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f6,f25
	ctx.f11.f64 = double(float(ctx.f6.f64 - f25.f64));
	// fmuls f6,f0,f5
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmuls f5,f0,f4
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// lfs f0,-340(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -340);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f8,f26
	ctx.f8.f64 = double(float(ctx.f8.f64 - f26.f64));
	// fmuls f4,f0,f0
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fcmpu cr6,f31,f10
	ctx.cr6.compare(f31.f64, ctx.f10.f64);
	// fmsubs f11,f11,f0,f5
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, -ctx.f5.f64)));
	// fmsubs f0,f8,f0,f6
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, -ctx.f6.f64)));
	// fdivs f5,f11,f4
	ctx.f5.f64 = double(float(ctx.f11.f64 / ctx.f4.f64));
	// fdivs f6,f0,f4
	ctx.f6.f64 = double(float(ctx.f0.f64 / ctx.f4.f64));
	// ble cr6,0x82185890
	if (!ctx.cr6.gt) goto loc_82185890;
	// fmr f6,f9
	ctx.f6.f64 = ctx.f9.f64;
	// fmr f5,f9
	ctx.f5.f64 = ctx.f9.f64;
loc_82185890:
	// lfs f0,-468(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -468);
	ctx.f0.f64 = double(temp.f32);
	// lwz r22,-440(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -440);
	// lfs f11,-324(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -324);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f4,f13,f0
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f31,f30,f11
	f31.f64 = double(float(f30.f64 * ctx.f11.f64));
	// lfs f13,-476(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -476);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f8,-532(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -532);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f11,f29,f11
	ctx.f11.f64 = double(float(f29.f64 * ctx.f11.f64));
	// lfs f3,-544(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -544);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f30,f10,f3
	f30.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// lwz r19,-432(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -432);
	// lfs f29,0(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 0);
	f29.f64 = double(temp.f32);
	// lwz r21,-448(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -448);
	// lfs f28,4(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 4);
	f28.f64 = double(temp.f32);
	// lwz r18,-520(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -520);
	// lfs f3,-512(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -512);
	ctx.f3.f64 = double(temp.f32);
	// lwz r16,-508(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -508);
	// lfs f27,-500(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -500);
	f27.f64 = double(temp.f32);
	// lwz r17,-528(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -528);
	// lwz r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// fmadds f6,f6,f7,f4
	ctx.f6.f64 = double(float(std::fma(ctx.f6.f64, ctx.f7.f64, ctx.f4.f64)));
	// fmadds f4,f2,f13,f31
	ctx.f4.f64 = double(float(std::fma(ctx.f2.f64, ctx.f13.f64, f31.f64)));
	// fmadds f12,f5,f7,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f5.f64, ctx.f7.f64, ctx.f12.f64)));
	// fmadds f11,f1,f13,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, ctx.f11.f64)));
	// lfs f13,-540(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -540);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f5,f4,f8
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmadds f12,f5,f7,f6
	ctx.f12.f64 = double(float(std::fma(ctx.f5.f64, ctx.f7.f64, ctx.f6.f64)));
	// fmadds f13,f11,f7,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f7.f64, ctx.f13.f64)));
	// fadds f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 + f29.f64));
	// stfs f12,0(r22)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r22.u32 + 0, temp.u32);
	// fadds f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 + f28.f64));
	// stfs f13,4(r22)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r22.u32 + 4, temp.u32);
	// lfs f13,0(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f30,f0,f13
	ctx.f0.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f0,0(r19)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r19.u32 + 0, temp.u32);
loc_8218592C:
	// addi r11,r4,96
	ctx.r11.s64 = ctx.r4.s64 + 96;
	// lwz r11,96(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 96);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// addi r18,r18,4
	r18.s64 = r18.s64 + 4;
	// add r21,r11,r21
	r21.u64 = ctx.r11.u64 + r21.u64;
	// stw r17,-528(r1)
	REX_STORE_U32(ctx.r1.u32 + -528, r17.u32);
	// add r22,r11,r22
	r22.u64 = ctx.r11.u64 + r22.u64;
	// stw r18,-520(r1)
	REX_STORE_U32(ctx.r1.u32 + -520, r18.u32);
	// add r19,r11,r19
	r19.u64 = ctx.r11.u64 + r19.u64;
	// stw r21,-448(r1)
	REX_STORE_U32(ctx.r1.u32 + -448, r21.u32);
	// add r24,r11,r24
	r24.u64 = ctx.r11.u64 + r24.u64;
	// stw r22,-440(r1)
	REX_STORE_U32(ctx.r1.u32 + -440, r22.u32);
	// stw r19,-432(r1)
	REX_STORE_U32(ctx.r1.u32 + -432, r19.u32);
	// cmpw cr6,r17,r10
	ctx.cr6.compare<int32_t>(r17.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821852c0
	if (ctx.cr6.lt) goto loc_821852C0;
loc_8218596C:
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cbc
	ctx.lr = 0x82185974;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_821D3AB0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14612
	ctx.r3.s64 = ctx.r11.s64 + -14612;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D3EF8) {
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
	ctx.lr = 0x821D3F00;
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r9,r5,r6
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821d3f60
	if (ctx.cr6.eq) goto loc_821D3F60;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,9616
	ctx.r4.s64 = ctx.r11.s64 + 9616;
	// addi r3,r10,9648
	ctx.r3.s64 = ctx.r10.s64 + 9648;
	// li r5,117
	ctx.r5.s64 = 117;
	// bl 0x821231d0
	ctx.lr = 0x821D3F60;
	sub_821231D0(ctx, base);
loc_821D3F60:
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r31,r11,16592
	r31.s64 = ctx.r11.s64 + 16592;
	// lfd f0,600(r31)
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 600);
	// fdiv f12,f0,f13
	ctx.f12.f64 = ctx.f0.f64 / ctx.f13.f64;
	// lfd f0,608(r31)
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 608);
	// lfd f13,192(r31)
	ctx.f13.u64 = REX_LOAD_U64(r31.u32 + 192);
	// fmul f31,f12,f0
	f31.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f1,f31,f13
	ctx.f1.f64 = f31.f64 * ctx.f13.f64;
	// bl 0x826a14e0
	ctx.lr = 0x821D3F94;
	sub_826A14E0(ctx, base);
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// lfd f0,200(r31)
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 200);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmul f13,f13,f13
	ctx.f13.f64 = ctx.f13.f64 * ctx.f13.f64;
	// fmul f31,f13,f0
	f31.f64 = ctx.f13.f64 * ctx.f0.f64;
	// bl 0x826a14e0
	ctx.lr = 0x821D3FAC;
	sub_826A14E0(ctx, base);
	// rlwinm r11,r30,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0x3FFFFFFF;
	// lfd f10,208(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(r31.u32 + 208);
	// rlwinm r10,r30,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	// lfs f9,160(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f9.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfd f8,136(r31)
	ctx.f8.u64 = REX_LOAD_U64(r31.u32 + 136);
	// lfs f12,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r27,r11,1
	r27.s64 = ctx.r11.s64 + 1;
loc_821D3FDC:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// subfic r31,r3,3
	ctx.xer.ca = ctx.r3.u32 <= 3;
	r31.u64 = static_cast<uint64_t>(3) - ctx.r3.u64;
	// bne cr6,0x821d3fec
	if (!ctx.cr6.eq) goto loc_821D3FEC;
	// li r31,1
	r31.s64 = 1;
loc_821D3FEC:
	// fmr f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f13,f8
	ctx.f13.f64 = ctx.f8.f64;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(r27.u32, 1, ctx.xer);
	// blt cr6,0x821d4198
	if (ctx.cr6.lt) goto loc_821D4198;
	// fadd f11,f31,f10
	ctx.f11.f64 = f31.f64 + ctx.f10.f64;
	// li r4,4
	ctx.r4.s64 = 4;
loc_821D4008:
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// blt cr6,0x821d4174
	if (ctx.cr6.lt) goto loc_821D4174;
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_821D401C:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x821d40a8
	if (!ctx.cr6.eq) goto loc_821D40A8;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x821d403c
	if (ctx.cr6.eq) goto loc_821D403C;
	// subf r11,r9,r28
	ctx.r11.u64 = r28.u64 - ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x821d4040
	goto loc_821D4040;
loc_821D403C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821D4040:
	// lwzx r8,r6,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + r29.u32);
	// rlwinm r25,r9,2,0,29
	r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r10,r25,r8
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + ctx.r8.u32);
	// lfs f7,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f7,f5
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// fadds f2,f6,f4
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// fsubs f7,f5,f7
	ctx.f7.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// fsubs f6,f4,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// fmuls f5,f3,f12
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmuls f4,f2,f9
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// fmuls f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fadds f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f3,4(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fsubs f5,f5,f4
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fadds f4,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// stfs f4,8(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// b 0x821d4164
	goto loc_821D4164;
loc_821D40A8:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x821d40bc
	if (ctx.cr6.eq) goto loc_821D40BC;
	// subf r11,r9,r28
	ctx.r11.u64 = r28.u64 - ctx.r9.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x821d40c0
	goto loc_821D40C0;
loc_821D40BC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821D40C0:
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r8,r7,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + r29.u32);
	// rlwinm r25,r11,2,0,29
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r24,r6,r29
	r24.u64 = REX_LOAD_U32(ctx.r6.u32 + r29.u32);
	// subf r11,r10,r30
	ctx.r11.u64 = r30.u64 - ctx.r10.u64;
	// rlwinm r23,r9,2,0,29
	r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// lwzx r10,r8,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + r25.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r23,r24
	ctx.r8.u64 = REX_LOAD_U32(r23.u32 + r24.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r4
	ctx.r10.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lfsx f6,r8,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// lfs f3,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fadds f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// fadds f6,f4,f3
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// fsubs f4,f3,f4
	ctx.f4.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// fmuls f5,f5,f12
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmuls f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f6,f6,f9
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fmuls f4,f4,f12
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmul f3,f5,f0
	ctx.f3.f64 = ctx.f5.f64 * ctx.f0.f64;
	// fmul f2,f5,f0
	ctx.f2.f64 = ctx.f5.f64 * ctx.f0.f64;
	// fmadd f30,f6,f0,f7
	f30.f64 = std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f7.f64);
	// fnmsub f7,f6,f0,f7
	ctx.f7.f64 = -std::fma(ctx.f6.f64, ctx.f0.f64, -ctx.f7.f64);
	// fmadd f3,f6,f13,f3
	ctx.f3.f64 = std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f3.f64);
	// fmadd f6,f6,f13,f2
	ctx.f6.f64 = std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f2.f64);
	// fnmsub f2,f5,f13,f30
	ctx.f2.f64 = -std::fma(ctx.f5.f64, ctx.f13.f64, -f30.f64);
	// fmadd f7,f5,f13,f7
	ctx.f7.f64 = std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f7.f64);
	// fadd f5,f3,f4
	ctx.f5.f64 = ctx.f3.f64 + ctx.f4.f64;
	// fsub f6,f6,f4
	ctx.f6.f64 = ctx.f6.f64 - ctx.f4.f64;
	// frsp f4,f2
	ctx.f4.f64 = double(float(ctx.f2.f64));
	// stfsx f4,r8,r4
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r4.u32, temp.u32);
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// stfs f5,4(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// frsp f7,f6
	ctx.f7.f64 = double(float(ctx.f6.f64));
loc_821D4164:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stfs f7,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, ctx.xer);
	// ble cr6,0x821d401c
	if (!ctx.cr6.gt) goto loc_821D401C;
loc_821D4174:
	// fmul f7,f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = ctx.f13.f64 * ctx.f1.f64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// fmul f6,f1,f0
	ctx.f6.f64 = ctx.f1.f64 * ctx.f0.f64;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// cmplw cr6,r5,r27
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r27.u32, ctx.xer);
	// fmsub f7,f0,f31,f7
	ctx.f7.f64 = std::fma(ctx.f0.f64, f31.f64, -ctx.f7.f64);
	// fmadd f13,f11,f13,f6
	ctx.f13.f64 = std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f6.f64);
	// fadd f0,f7,f0
	ctx.f0.f64 = ctx.f7.f64 + ctx.f0.f64;
	// ble cr6,0x821d4008
	if (!ctx.cr6.gt) goto loc_821D4008;
loc_821D4198:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x821d3fdc
	if (!ctx.cr6.gt) goto loc_821D3FDC;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821d3c30
	ctx.lr = 0x821D41B4;
	sub_821D3C30(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_821E9E58) {
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
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e9ea4
	if (ctx.cr6.eq) goto loc_821E9EA4;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// bl 0x8215f338
	ctx.lr = 0x821E9E88;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f530
	ctx.lr = 0x821E9E90;
	sub_8215F530(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821e9ea8
	if (ctx.cr6.lt) goto loc_821E9EA8;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x821e9ea8
	goto loc_821E9EA8;
loc_821E9EA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E9EA8:
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

DEFINE_REX_FUNC(sub_821EC898) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x821def40
	ctx.lr = 0x821EC8BC;
	sub_821DEF40(ctx, base);
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821884b0
	ctx.lr = 0x821EC8C8;
	sub_821884B0(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 48, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 52, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 56, temp.u32);
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

DEFINE_REX_FUNC(sub_821F4228) {
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
	ctx.lr = 0x821F4230;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821f4328
	if (!ctx.cr6.gt) goto loc_821F4328;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F4250:
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x821f4274
	if (ctx.cr6.eq) goto loc_821F4274;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821f4250
	if (ctx.cr6.lt) goto loc_821F4250;
	// b 0x821f4328
	goto loc_821F4328;
loc_821F4274:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x821f4288
	if (ctx.cr6.lt) goto loc_821F4288;
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x821f42a0
	if (!ctx.cr6.gt) goto loc_821F42A0;
loc_821F4288:
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
	ctx.lr = 0x821F42A0;
	sub_821231D0(ctx, base);
loc_821F42A0:
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
	ctx.lr = 0x821F42C4;
	sub_826A1E70(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r28,4(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r28,-1
	r30.s64 = r28.s64 + -1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821f4324
	if (!ctx.cr6.gt) goto loc_821F4324;
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
	// bgt cr6,0x821f42f0
	if (ctx.cr6.gt) goto loc_821F42F0;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_821F42F0:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821f4324
	if (!ctx.cr6.gt) goto loc_821F4324;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269d1d0
	ctx.lr = 0x821F4304;
	sub_8269D1D0(ctx, base);
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821F4314;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x821F431C;
	sub_8269D1B8(ctx, base);
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
loc_821F4324:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
loc_821F4328:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821FAB90) {
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
	// addi r4,r11,24968
	ctx.r4.s64 = ctx.r11.s64 + 24968;
	// bl 0x8215f338
	ctx.lr = 0x821FABB4;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x821FABBC;
	sub_8215F2D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821fabd0
	if (!ctx.cr6.eq) goto loc_821FABD0;
	// lbz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x821fabd4
	goto loc_821FABD4;
loc_821FABD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821FABD4:
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

DEFINE_REX_FUNC(sub_821FC328) {
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
	ctx.lr = 0x821FC34C;
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
	ctx.lr = 0x821FC364;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6276(r10)
	REX_STORE_U32(ctx.r10.u32 + 6276, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821FE680) {
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
	ctx.lr = 0x821FE688;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r11,13(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r26,r11,6056
	r26.s64 = ctx.r11.s64 + 6056;
	// beq 0x821fe714
	if (ctx.cr0.eq) goto loc_821FE714;
	// lwz r11,6056(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6056);
	// li r31,0
	r31.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821fe918
	if (!ctx.cr6.gt) goto loc_821FE918;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r28,-32106
	r28.s64 = -2104098816;
	// addi r29,r11,1728
	r29.s64 = ctx.r11.s64 + 1728;
loc_821FE6C8:
	// lwz r3,6048(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6048);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FE6DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x822ee218
	ctx.lr = 0x821FE6E8;
	sub_822EE218(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// bl 0x8212da50
	ctx.lr = 0x821FE6F8;
	sub_8212DA50(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,656
	r29.s64 = r29.s64 + 656;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821fe6c8
	if (ctx.cr6.lt) goto loc_821FE6C8;
	// b 0x821fe918
	goto loc_821FE918;
loc_821FE714:
	// lwz r10,68(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 68);
	// li r22,12
	r22.s64 = 12;
	// lwz r9,72(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 72);
	// addi r28,r30,68
	r28.s64 = r30.s64 + 68;
	// li r27,0
	r27.s64 = 0;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// divw. r10,r10,r22
	ctx.r10.u64 = uint32_t((r22.s32 && !(ctx.r10.s32 == INT32_MIN && r22.s32 == -1)) ? ctx.r10.s32 / r22.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x821fe848
	if (!ctx.cr0.gt) goto loc_821FE848;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// li r25,0
	r25.s64 = 0;
	// lis r24,-32106
	r24.s64 = -2104098816;
	// addi r21,r11,26696
	r21.s64 = ctx.r11.s64 + 26696;
	// addi r20,r10,26164
	r20.s64 = ctx.r10.s64 + 26164;
	// addi r23,r9,-13316
	r23.s64 = ctx.r9.s64 + -13316;
loc_821FE754:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// add r31,r11,r25
	r31.u64 = ctx.r11.u64 + r25.u64;
	// lwzx r11,r11,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// lwz r3,460(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 460);
	// bl 0x821fd140
	ctx.lr = 0x821FE76C;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821fe784
	if (!ctx.cr0.eq) goto loc_821FE784;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// li r5,564
	ctx.r5.s64 = 564;
	// bl 0x821231d0
	ctx.lr = 0x821FE784;
	sub_821231D0(ctx, base);
loc_821FE784:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// lwz r3,6080(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 6080);
	// lwz r11,460(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 460);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,128(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FE7A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821fe7c0
	if (ctx.cr0.eq) goto loc_821FE7C0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// andc r29,r11,r10
	r29.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_821FE7C0:
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lbz r11,700(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 700);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821fe804
	if (!ctx.cr0.eq) goto loc_821FE804;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lbz r10,698(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 698);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821fe7ec
	if (!ctx.cr0.eq) goto loc_821FE7EC;
	// lbz r11,740(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 740);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821fe814
	if (ctx.cr0.eq) goto loc_821FE814;
loc_821FE7EC:
	// rlwinm. r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821fe7fc
	if (ctx.cr0.eq) goto loc_821FE7FC;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x821fe808
	goto loc_821FE808;
loc_821FE7FC:
	// rlwinm. r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821fe814
	if (ctx.cr0.eq) goto loc_821FE814;
loc_821FE804:
	// li r5,-1
	ctx.r5.s64 = -1;
loc_821FE808:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821feba0
	ctx.lr = 0x821FE810;
	sub_821FEBA0(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
loc_821FE814:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r5,464(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// bl 0x8212da50
	ctx.lr = 0x821FE828;
	sub_8212DA50(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r25,r25,12
	r25.s64 = r25.s64 + 12;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// divw r11,r11,r22
	ctx.r11.u64 = uint32_t((r22.s32 && !(ctx.r11.s32 == INT32_MIN && r22.s32 == -1)) ? ctx.r11.s32 / r22.s32 : 0);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821fe754
	if (ctx.cr6.lt) goto loc_821FE754;
loc_821FE848:
	// lbz r9,100(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 100);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r28,r11,-23176
	r28.s64 = ctx.r11.s64 + -23176;
	// addi r27,r10,-23320
	r27.s64 = ctx.r10.s64 + -23320;
	// beq 0x821fe8b8
	if (ctx.cr0.eq) goto loc_821FE8B8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,104(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 104);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FE87C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821fe8b8
	if (ctx.cr0.eq) goto loc_821FE8B8;
	// lwz r31,0(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r29,464(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 464);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821fe8a8
	if (ctx.cr6.gt) goto loc_821FE8A8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r5,99
	ctx.r5.s64 = 99;
	// bl 0x821231d0
	ctx.lr = 0x821FE8A8;
	sub_821231D0(ctx, base);
loc_821FE8A8:
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// li r5,656
	ctx.r5.s64 = 656;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821FE8B8;
	sub_826A1E70(ctx, base);
loc_821FE8B8:
	// lbz r11,108(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 108);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821fe918
	if (ctx.cr0.eq) goto loc_821FE918;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,112(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 112);
	// lwz r11,140(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FE8DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821fe918
	if (ctx.cr0.eq) goto loc_821FE918;
	// lwz r31,0(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r29,464(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 464);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821fe908
	if (ctx.cr6.gt) goto loc_821FE908;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r5,99
	ctx.r5.s64 = 99;
	// bl 0x821231d0
	ctx.lr = 0x821FE908;
	sub_821231D0(ctx, base);
loc_821FE908:
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// li r5,656
	ctx.r5.s64 = 656;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821FE918;
	sub_826A1E70(ctx, base);
loc_821FE918:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FE930;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x821fea78
	if (!ctx.cr0.gt) goto loc_821FEA78;
	// li r29,0
	r29.s64 = 0;
	// lis r28,-32106
	r28.s64 = -2104098816;
loc_821FE940:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FE958;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// lwz r9,6100(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 6100);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r10,r10,368
	ctx.r10.s64 = ctx.r10.s64 + 368;
	// lfs f0,468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 468);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f13,472(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 472);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,464(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 464);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r27,80(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// stw r27,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r27.u32);
	// lfs f13,80(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r27,96(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f0,84(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r3,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// stw r10,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// stw r27,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r27.u32);
	// lfs f12,440(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 440);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,436(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 436);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,432(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 432);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r27,112(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r3,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// stw r10,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// stw r27,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r27.u32);
	// lfs f13,448(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 448);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,456(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 456);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,452(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 452);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stw r3,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// stw r10,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// lwz r3,20(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FEA54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,720
	r29.s64 = r29.s64 + 720;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FEA70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x821fe940
	if (ctx.cr6.lt) goto loc_821FE940;
loc_821FEA78:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FEA8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// ble cr6,0x821feab0
	if (!ctx.cr6.gt) goto loc_821FEAB0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-13984
	ctx.r4.s64 = ctx.r11.s64 + -13984;
	// addi r3,r10,-13640
	ctx.r3.s64 = ctx.r10.s64 + -13640;
	// li r5,160
	ctx.r5.s64 = 160;
	// bl 0x821231d0
	ctx.lr = 0x821FEAB0;
	sub_821231D0(ctx, base);
loc_821FEAB0:
	// stw r31,168(r30)
	REX_STORE_U32(r30.u32 + 168, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FEACC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x821feb94
	if (!ctx.cr0.gt) goto loc_821FEB94;
	// addi r27,r30,128
	r27.s64 = r30.s64 + 128;
	// li r29,0
	r29.s64 = 0;
loc_821FEADC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FEAF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,460(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 460);
	// add r31,r27,r29
	r31.u64 = r27.u64 + r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r25,748(r26)
	r25.u64 = REX_LOAD_U32(r26.u32 + 748);
	// lwz r24,756(r26)
	r24.u64 = REX_LOAD_U32(r26.u32 + 756);
	// lbz r23,753(r26)
	r23.u64 = REX_LOAD_U8(r26.u32 + 753);
	// lbz r22,752(r26)
	r22.u64 = REX_LOAD_U8(r26.u32 + 752);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lbz r21,700(r26)
	r21.u64 = REX_LOAD_U8(r26.u32 + 700);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FEB24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r3,68(r31)
	REX_STORE_U8(r31.u32 + 68, ctx.r3.u8);
	// stb r22,70(r31)
	REX_STORE_U8(r31.u32 + 70, r22.u8);
	// stw r24,72(r31)
	REX_STORE_U32(r31.u32 + 72, r24.u32);
	// stw r25,76(r31)
	REX_STORE_U32(r31.u32 + 76, r25.u32);
	// stb r23,71(r31)
	REX_STORE_U8(r31.u32 + 71, r23.u8);
	// stb r21,69(r31)
	REX_STORE_U8(r31.u32 + 69, r21.u8);
	// lwz r11,128(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 128);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// ld r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 48);
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// std r10,48(r31)
	REX_STORE_U64(r31.u32 + 48, ctx.r10.u64);
	// ld r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// std r10,56(r31)
	REX_STORE_U64(r31.u32 + 56, ctx.r10.u64);
	// lfs f2,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8269d528
	ctx.lr = 0x821FEB64;
	sub_8269D528(ctx, base);
	// add r11,r27,r29
	ctx.r11.u64 = r27.u64 + r29.u64;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FEB8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x821feadc
	if (ctx.cr6.lt) goto loc_821FEADC;
loc_821FEB94:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_82229520) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82178268
	ctx.lr = 0x82229540;
	sub_82178268(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r3,100
	ctx.r3.s64 = 100;
	// addi r11,r11,-22824
	ctx.r11.s64 = ctx.r11.s64 + -22824;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82229554;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82229574
	if (ctx.cr0.eq) goto loc_82229574;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821dc550
	ctx.lr = 0x8222956C;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82229578
	goto loc_82229578;
loc_82229574:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82229578:
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x82229580;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x82229588;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x822295fc
	if (ctx.cr0.eq) goto loc_822295FC;
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
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822295B0;
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
	ctx.lr = 0x822295C4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822295f0
	if (ctx.cr0.eq) goto loc_822295F0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r11,r11,-15424
	ctx.r11.s64 = ctx.r11.s64 + -15424;
	// addi r10,r10,-18056
	ctx.r10.s64 = ctx.r10.s64 + -18056;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x822295f4
	goto loc_822295F4;
loc_822295F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822295F4:
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x82229600
	goto loc_82229600;
loc_822295FC:
	// li r31,0
	r31.s64 = 0;
loc_82229600:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bl 0x821dc4e0
	ctx.lr = 0x8222960C;
	sub_821DC4E0(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82264568
	ctx.lr = 0x8222961C;
	sub_82264568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

DEFINE_REX_FUNC(sub_8222DB50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8222DB58;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,128
	r30.s64 = ctx.r3.s64 + 128;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,76
	ctx.r3.s64 = r30.s64 + 76;
	// bl 0x82120ac0
	ctx.lr = 0x8222DB78;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,48
	ctx.r3.s64 = r30.s64 + 48;
	// bl 0x82120ac0
	ctx.lr = 0x8222DB88;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x8222DB90;
	sub_82178388(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222dba0
	if (ctx.cr0.eq) goto loc_8222DBA0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8222DBA0;
	sub_8269CE98(ctx, base);
loc_8222DBA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82230B78) {
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
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x822f6280
	ctx.lr = 0x82230B8C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82230b9c
	if (ctx.cr0.eq) goto loc_82230B9C;
	// bl 0x82230bb0
	ctx.lr = 0x82230B98;
	sub_82230BB0(ctx, base);
	// b 0x82230ba0
	goto loc_82230BA0;
loc_82230B9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82230BA0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82233228) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82233230;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,168
	r30.s64 = ctx.r3.s64 + 168;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e33d8
	ctx.lr = 0x82233244;
	sub_821E33D8(ctx, base);
	// addi r29,r31,480
	r29.s64 = r31.s64 + 480;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e4980
	ctx.lr = 0x82233250;
	sub_821E4980(ctx, base);
	// addi r4,r31,140
	ctx.r4.s64 = r31.s64 + 140;
	// addi r3,r31,848
	ctx.r3.s64 = r31.s64 + 848;
	// bl 0x821d5b38
	ctx.lr = 0x8223325C;
	sub_821D5B38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e30b8
	ctx.lr = 0x82233264;
	sub_821E30B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e4548
	ctx.lr = 0x8223326C;
	sub_821E4548(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822349D8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,1120(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 1120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822349ec
	if (!ctx.cr6.eq) goto loc_822349EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1120(r4)
	REX_STORE_U32(ctx.r4.u32 + 1120, ctx.r11.u32);
loc_822349EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822351C8) {
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
	// li r3,896
	ctx.r3.s64 = 896;
	// bl 0x822f6280
	ctx.lr = 0x822351DC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822351ec
	if (ctx.cr0.eq) goto loc_822351EC;
	// bl 0x82235200
	ctx.lr = 0x822351E8;
	sub_82235200(ctx, base);
	// b 0x822351f0
	goto loc_822351F0;
loc_822351EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822351F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822376B0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13516
	ctx.r3.s64 = ctx.r11.s64 + -13516;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82237820) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,460(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 460);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82237850;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82237860
	if (!ctx.cr0.eq) goto loc_82237860;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82237974
	goto loc_82237974;
loc_82237860:
	// lwz r3,460(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82237874;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82237970
	if (ctx.cr0.eq) goto loc_82237970;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// bl 0x8213bce8
	ctx.lr = 0x8223788C;
	sub_8213BCE8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8216b6a8
	ctx.lr = 0x822378A4;
	sub_8216B6A8(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6156(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6156);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822378BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8216b6a8
	ctx.lr = 0x822378D4;
	sub_8216B6A8(ctx, base);
	// lis r31,-32106
	r31.s64 = -2104098816;
	// lwz r3,6152(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822378EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82237924
	if (ctx.cr0.eq) goto loc_82237924;
	// lwz r3,6152(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82237908;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82237924
	if (!ctx.cr0.eq) goto loc_82237924;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r3,136(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 136);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8217f510
	ctx.lr = 0x82237920;
	sub_8217F510(ctx, base);
	// b 0x82237970
	goto loc_82237970;
loc_82237924:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-19112
	ctx.r4.s64 = ctx.r11.s64 + -19112;
	// bl 0x82120600
	ctx.lr = 0x82237934;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,140(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 140);
	// bl 0x821dd040
	ctx.lr = 0x82237940;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
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
	ctx.lr = 0x82237960;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82237970;
	sub_82120AC0(ctx, base);
loc_82237970:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82237974:
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

DEFINE_REX_FUNC(sub_82241C40) {
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
	ctx.lr = 0x82241C48;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r3,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r3.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,-27048
	ctx.r4.s64 = ctx.r11.s64 + -27048;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f670
	ctx.lr = 0x82241C6C;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// addi r14,r11,-26752
	r14.s64 = ctx.r11.s64 + -26752;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r14,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r14.u32);
	// bl 0x8215f670
	ctx.lr = 0x82241C84;
	sub_8215F670(ctx, base);
	// bl 0x8215f0f0
	ctx.lr = 0x82241C88;
	sub_8215F0F0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// addi r4,r11,-24980
	ctx.r4.s64 = ctx.r11.s64 + -24980;
	// lbz r31,113(r28)
	r31.u64 = REX_LOAD_U8(r28.u32 + 113);
	// bl 0x8215f670
	ctx.lr = 0x82241C9C;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82241CA4;
	sub_8215F0F0(ctx, base);
	// li r20,3
	r20.s64 = 3;
	// stb r31,8(r30)
	REX_STORE_U8(r30.u32 + 8, r31.u8);
	// lis r15,-32106
	r15.s64 = -2104098816;
	// stw r20,0(r30)
	REX_STORE_U32(r30.u32 + 0, r20.u32);
	// lwz r3,6284(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82241CC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8215f670
	ctx.lr = 0x82241CD8;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215fc78
	ctx.lr = 0x82241CE0;
	sub_8215FC78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x8215dc10
	ctx.lr = 0x82241CEC;
	sub_8215DC10(ctx, base);
	// lwz r3,6284(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 6284);
	// li r31,0
	r31.s64 = 0;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82241D08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82242004
	if (!ctx.cr0.gt) goto loc_82242004;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// lis r31,-32241
	r31.s64 = -2112946176;
	// lis r30,-32241
	r30.s64 = -2112946176;
	// lis r29,-32241
	r29.s64 = -2112946176;
	// addi r11,r11,-26796
	ctx.r11.s64 = ctx.r11.s64 + -26796;
	// addi r10,r10,-13316
	ctx.r10.s64 = ctx.r10.s64 + -13316;
	// addi r9,r9,-7872
	ctx.r9.s64 = ctx.r9.s64 + -7872;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r19,2
	r19.s64 = 2;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r18,r8,-24748
	r18.s64 = ctx.r8.s64 + -24748;
	// addi r17,r7,-24944
	r17.s64 = ctx.r7.s64 + -24944;
	// addi r27,r6,-17788
	r27.s64 = ctx.r6.s64 + -17788;
	// addi r26,r5,-26744
	r26.s64 = ctx.r5.s64 + -26744;
	// addi r25,r4,-24740
	r25.s64 = ctx.r4.s64 + -24740;
	// addi r24,r3,24552
	r24.s64 = ctx.r3.s64 + 24552;
	// addi r23,r31,-24932
	r23.s64 = r31.s64 + -24932;
	// addi r22,r30,-24968
	r22.s64 = r30.s64 + -24968;
	// addi r21,r29,-26828
	r21.s64 = r29.s64 + -26828;
	// b 0x82241d94
	goto loc_82241D94;
loc_82241D8C:
	// lwz r14,92(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r28,292(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
loc_82241D94:
	// lwz r3,6284(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 6284);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82241DAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3880(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 3880);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// lwz r10,3856(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 3856);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r29,r8,r10
	r29.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwzx r31,r9,r11
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x8215f670
	ctx.lr = 0x82241DD4;
	sub_8215F670(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f200
	ctx.lr = 0x82241DDC;
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
	// blt cr6,0x82241dfc
	if (ctx.cr6.lt) goto loc_82241DFC;
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82241e00
	goto loc_82241E00;
loc_82241DFC:
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_82241E00:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x82241E0C;
	sub_8215F670(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215fbf8
	ctx.lr = 0x82241E14;
	sub_8215FBF8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 28);
	f31.f64 = double(temp.f32);
	// bl 0x8215f670
	ctx.lr = 0x82241E24;
	sub_8215F670(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82241E2C;
	sub_8215F0F0(ctx, base);
	// stfs f31,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
	// stw r19,0(r28)
	REX_STORE_U32(r28.u32 + 0, r19.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,16(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 16);
	// bl 0x8215f670
	ctx.lr = 0x82241E44;
	sub_8215F670(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82241E4C;
	sub_8215F0F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,8(r14)
	REX_STORE_U32(r14.u32 + 8, r28.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r11,0(r14)
	REX_STORE_U32(r14.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 24);
	f31.f64 = double(temp.f32);
	// bl 0x8215f670
	ctx.lr = 0x82241E68;
	sub_8215F670(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82241E70;
	sub_8215F0F0(ctx, base);
	// stfs f31,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
	// stw r19,0(r28)
	REX_STORE_U32(r28.u32 + 0, r19.u32);
	// lwz r3,460(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82241E8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x82241E9C;
	sub_8215F670(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82241EA4;
	sub_8215F0F0(ctx, base);
	// stb r28,8(r14)
	REX_STORE_U8(r14.u32 + 8, r28.u8);
	// stw r20,0(r14)
	REX_STORE_U32(r14.u32 + 0, r20.u32);
	// lwz r3,460(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82241EC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x82241ED0;
	sub_8215F670(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82241ED8;
	sub_8215F0F0(ctx, base);
	// stb r28,8(r14)
	REX_STORE_U8(r14.u32 + 8, r28.u8);
	// stw r20,0(r14)
	REX_STORE_U32(r14.u32 + 0, r20.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r28,r30,208
	r28.s64 = r30.s64 + 208;
	// bl 0x8215f670
	ctx.lr = 0x82241EF0;
	sub_8215F670(ctx, base);
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 228);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82241f04
	if (ctx.cr6.lt) goto loc_82241F04;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// b 0x82241f08
	goto loc_82241F08;
loc_82241F04:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_82241F08:
	// bl 0x8215fbf8
	ctx.lr = 0x82241F0C;
	sub_8215FBF8(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r29,224(r29)
	r29.u64 = REX_LOAD_U8(r29.u32 + 224);
	// bl 0x8215f670
	ctx.lr = 0x82241F1C;
	sub_8215F670(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82241F24;
	sub_8215F0F0(ctx, base);
	// stb r29,8(r28)
	REX_STORE_U8(r28.u32 + 8, r29.u8);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// stw r20,0(r28)
	REX_STORE_U32(r28.u32 + 0, r20.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r30,236
	r29.s64 = r30.s64 + 236;
	// bl 0x8215f670
	ctx.lr = 0x82241F3C;
	sub_8215F670(ctx, base);
	// lwz r11,256(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 256);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82241f50
	if (ctx.cr6.lt) goto loc_82241F50;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x82241f54
	goto loc_82241F54;
loc_82241F50:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82241F54:
	// bl 0x8215fbf8
	ctx.lr = 0x82241F58;
	sub_8215FBF8(ctx, base);
	// lwz r3,460(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82241F6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x82241F7C;
	sub_8215F670(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// std r29,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, r29.u64);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,460(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 460);
	// bl 0x821fd140
	ctx.lr = 0x82241F94;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82241fc4
	if (ctx.cr0.eq) goto loc_82241FC4;
	// lwz r11,460(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 460);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r31,128(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// bl 0x8215f670
	ctx.lr = 0x82241FB0;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82241FB8;
	sub_8215F0F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,8(r30)
	REX_STORE_U32(r30.u32 + 8, r31.u32);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_82241FC4:
	// lwz r3,6284(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 6284);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r11,1
	r31.s64 = ctx.r11.s64 + 1;
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r10,304
	ctx.r11.s64 = ctx.r10.s64 + 304;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r11,44(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82241FFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82241d8c
	if (ctx.cr6.lt) goto loc_82241D8C;
loc_82242004:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8225A740) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8225A748;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// addi r11,r11,-32767
	ctx.r11.s64 = ctx.r11.s64 + -32767;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// li r28,1
	r28.s64 = 1;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bgt cr6,0x8225a8d4
	if (ctx.cr6.gt) goto loc_8225A8D4;
	// lis r12,-32243
	ctx.r12.s64 = -2113077248;
	// addi r12,r12,16416
	ctx.r12.s64 = ctx.r12.s64 + 16416;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32218
	ctx.r12.s64 = -2111438848;
	// nop 
	// addi r12,r12,-22636
	ctx.r12.s64 = ctx.r12.s64 + -22636;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8225A794;
	case 1:
		goto loc_8225A8D4;
	case 2:
		goto loc_8225A8D4;
	case 3:
		goto loc_8225A8D4;
	case 4:
		goto loc_8225A8D4;
	case 5:
		goto loc_8225A7A8;
	case 6:
		goto loc_8225A7BC;
	case 7:
		goto loc_8225A7D0;
	case 8:
		goto loc_8225A7E4;
	case 9:
		goto loc_8225A898;
	case 10:
		goto loc_8225A8AC;
	case 11:
		goto loc_8225A8D4;
	case 12:
		goto loc_8225A8D4;
	case 13:
		goto loc_8225A8D4;
	case 14:
		goto loc_8225A8D4;
	case 15:
		goto loc_8225A870;
	case 16:
		goto loc_8225A884;
	case 17:
		goto loc_8225A8D4;
	case 18:
		goto loc_8225A8D4;
	case 19:
		goto loc_8225A8C0;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8225A794:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82260fb0
	ctx.lr = 0x8225A7A4;
	sub_82260FB0(ctx, base);
	// b 0x8225a8d8
	goto loc_8225A8D8;
loc_8225A7A8:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822612b8
	ctx.lr = 0x8225A7B8;
	sub_822612B8(ctx, base);
	// b 0x8225a8d8
	goto loc_8225A8D8;
loc_8225A7BC:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82261408
	ctx.lr = 0x8225A7CC;
	sub_82261408(ctx, base);
	// b 0x8225a8d8
	goto loc_8225A8D8;
loc_8225A7D0:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822616a8
	ctx.lr = 0x8225A7E0;
	sub_822616A8(ctx, base);
	// b 0x8225a8d8
	goto loc_8225A8D8;
loc_8225A7E4:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225A7F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,192
	ctx.r3.s64 = r30.s64 + 192;
	// bl 0x8228c390
	ctx.lr = 0x8225A808;
	sub_8228C390(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225a8d8
	if (ctx.cr0.eq) goto loc_8225A8D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227d690
	ctx.lr = 0x8225A830;
	sub_8227D690(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,32785
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32785, ctx.xer);
	// bne cr6,0x8225a864
	if (!ctx.cr6.eq) goto loc_8225A864;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r4,r11,-31468
	ctx.r4.s64 = ctx.r11.s64 + -31468;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f670
	ctx.lr = 0x8225A850;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-31460
	ctx.r4.s64 = ctx.r11.s64 + -31460;
	// bl 0x8215f670
	ctx.lr = 0x8225A85C;
	sub_8215F670(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8215efb0
	ctx.lr = 0x8225A864;
	sub_8215EFB0(ctx, base);
loc_8225A864:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f0f0
	ctx.lr = 0x8225A86C;
	sub_8215F0F0(ctx, base);
	// b 0x8225a8d8
	goto loc_8225A8D8;
loc_8225A870:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82261828
	ctx.lr = 0x8225A880;
	sub_82261828(ctx, base);
	// b 0x8225a8d8
	goto loc_8225A8D8;
loc_8225A884:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822618f8
	ctx.lr = 0x8225A894;
	sub_822618F8(ctx, base);
	// b 0x8225a8d8
	goto loc_8225A8D8;
loc_8225A898:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82261df0
	ctx.lr = 0x8225A8A8;
	sub_82261DF0(ctx, base);
	// b 0x8225a8d8
	goto loc_8225A8D8;
loc_8225A8AC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82262098
	ctx.lr = 0x8225A8BC;
	sub_82262098(ctx, base);
	// b 0x8225a8d8
	goto loc_8225A8D8;
loc_8225A8C0:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822622a0
	ctx.lr = 0x8225A8D0;
	sub_822622A0(ctx, base);
	// b 0x8225a8d8
	goto loc_8225A8D8;
loc_8225A8D4:
	// li r28,0
	r28.s64 = 0;
loc_8225A8D8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82267270) {
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
	ctx.lr = 0x82267278;
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x82267294
	if (!ctx.cr6.eq) goto loc_82267294;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82267294:
	// lis r25,-32106
	r25.s64 = -2104098816;
	// lwz r3,6040(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822672AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x822672BC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x822672CC;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,-6708
	ctx.r4.s64 = ctx.r11.s64 + -6708;
	// bl 0x82120600
	ctx.lr = 0x822672DC;
	sub_82120600(ctx, base);
	// lis r31,-32106
	r31.s64 = -2104098816;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// lwz r3,6316(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6316);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822672FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82120ac0
	ctx.lr = 0x8226730C;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r11,-6704
	ctx.r4.s64 = ctx.r11.s64 + -6704;
	// bl 0x82120600
	ctx.lr = 0x8226731C;
	sub_82120600(ctx, base);
	// lwz r3,6316(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6316);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82267338;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82120ac0
	ctx.lr = 0x82267348;
	sub_82120AC0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// std r29,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r29.u64);
	// bl 0x82160340
	ctx.lr = 0x82267358;
	sub_82160340(ctx, base);
	// lis r26,-32106
	r26.s64 = -2104098816;
	// lwz r3,6072(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82267370;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x82126238
	ctx.lr = 0x82267380;
	sub_82126238(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82160388
	ctx.lr = 0x82267390;
	sub_82160388(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// rlwinm r31,r11,27,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82120ac0
	ctx.lr = 0x822673AC;
	sub_82120AC0(ctx, base);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x822673f8
	if (ctx.cr0.eq) goto loc_822673F8;
loc_822673B4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x82120ac0
	ctx.lr = 0x822673C4;
	sub_82120AC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f0f0
	ctx.lr = 0x822673CC;
	sub_8215F0F0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x822673DC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x822673EC;
	sub_82120AC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822673F0:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x826a1cfc
	return;
loc_822673F8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,22808
	r31.s64 = ctx.r11.s64 + 22808;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f418
	ctx.lr = 0x8226740C;
	sub_8215F418(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq 0x82267474
	if (ctx.cr0.eq) goto loc_82267474;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x82267420;
	sub_8215F670(ctx, base);
	// bl 0x82267678
	ctx.lr = 0x82267424;
	sub_82267678(ctx, base);
loc_82267424:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822673b4
	if (ctx.cr0.eq) goto loc_822673B4;
loc_8226742C:
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82267b50
	ctx.lr = 0x82267438;
	sub_82267B50(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// std r29,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r29.u64);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822674ec
	if (ctx.cr6.eq) goto loc_822674EC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r27,r11,-6700
	r27.s64 = ctx.r11.s64 + -6700;
loc_82267458:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x822674a0
	if (ctx.cr6.lt) goto loc_822674A0;
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822674a4
	goto loc_822674A4;
loc_82267474:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r31,r11,-18676
	r31.s64 = ctx.r11.s64 + -18676;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f418
	ctx.lr = 0x82267484;
	sub_8215F418(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226742c
	if (ctx.cr0.eq) goto loc_8226742C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f670
	ctx.lr = 0x82267498;
	sub_8215F670(ctx, base);
	// bl 0x822677e0
	ctx.lr = 0x8226749C;
	sub_822677E0(ctx, base);
	// b 0x82267424
	goto loc_82267424;
loc_822674A0:
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_822674A4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822674B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x826a0568
	ctx.lr = 0x822674CC;
	sub_826A0568(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f270
	ctx.lr = 0x822674D4;
	sub_8215F270(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// bl 0x8215fbf8
	ctx.lr = 0x822674DC;
	sub_8215FBF8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82267458
	if (!ctx.cr6.eq) goto loc_82267458;
loc_822674EC:
	// lwz r3,6072(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82267500;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// bl 0x82126238
	ctx.lr = 0x82267510;
	sub_82126238(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x821233a0
	ctx.lr = 0x82267518;
	sub_821233A0(ctx, base);
	// stb r29,208(r1)
	REX_STORE_U8(ctx.r1.u32 + 208, r29.u8);
	// stb r29,209(r1)
	REX_STORE_U8(ctx.r1.u32 + 209, r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82120ac0
	ctx.lr = 0x82267534;
	sub_82120AC0(ctx, base);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82177570
	ctx.lr = 0x82267544;
	sub_82177570(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822675b4
	if (!ctx.cr0.eq) goto loc_822675B4;
loc_8226754C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82120ac0
	ctx.lr = 0x8226755C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82120ac0
	ctx.lr = 0x8226756C;
	sub_82120AC0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f0f0
	ctx.lr = 0x82267574;
	sub_8215F0F0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x82120ac0
	ctx.lr = 0x82267584;
	sub_82120AC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f0f0
	ctx.lr = 0x8226758C;
	sub_8215F0F0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x8226759C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x822675AC;
	sub_82120AC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x822673f0
	goto loc_822673F0;
loc_822675B4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822675e0
	goto loc_822675E0;
loc_822675C0:
	// lwz r3,6040(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 6040);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822675D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_822675E0:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822675c0
	if (!ctx.cr6.eq) goto loc_822675C0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a6af8
	ctx.lr = 0x822675F0;
	sub_821A6AF8(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// b 0x8226754c
	goto loc_8226754C;
}

DEFINE_REX_FUNC(sub_8227DB88) {
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
	ctx.lr = 0x8227DB90;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
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
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8227dbcc
	if (!ctx.cr6.eq) goto loc_8227DBCC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-540
	ctx.r4.s64 = ctx.r11.s64 + -540;
	// addi r3,r10,-228
	ctx.r3.s64 = ctx.r10.s64 + -228;
	// li r5,674
	ctx.r5.s64 = 674;
	// bl 0x821231d0
	ctx.lr = 0x8227DBCC;
	sub_821231D0(ctx, base);
loc_8227DBCC:
	// li r4,-32765
	ctx.r4.s64 = -32765;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8217f4b0
	ctx.lr = 0x8227DBD8;
	sub_8217F4B0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f10,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stw r26,138(r1)
	REX_STORE_U32(ctx.r1.u32 + 138, r26.u32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f7,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f8,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,532(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 532);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,544(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 544);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// lfs f0,536(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 536);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f4,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f12,540(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 540);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f3,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f2,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f3,f3,f12
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fctidz f10,f10
	ctx.f10.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// fctiwz f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// lfs f7,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fctidz f10,f9
	ctx.f10.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfd f10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f4,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f4,f4,f12
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// lwz r7,108(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// fctiwz f10,f8
	ctx.f10.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// ld r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fctiwz f10,f6
	ctx.f10.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// fctiwz f9,f5
	ctx.f9.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// stfd f9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lhz r5,102(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 102);
	// lhz r4,94(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// fctiwz f8,f3
	ctx.f8.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f8,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f8.u64);
	// lhz r30,102(r1)
	r30.u64 = REX_LOAD_U16(ctx.r1.u32 + 102);
	// fctiwz f11,f7
	ctx.f11.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// fctiwz f11,f4
	ctx.f11.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f0,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// stfd f11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lhz r3,110(r1)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// lhz r29,94(r1)
	r29.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// fmuls f0,f2,f13
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// lfs f13,8(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// rlwimi r8,r7,11,0,20
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0xFFFFF800) | (ctx.r8.u64 & 0xFFFFFFFF000007FF);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lbz r11,25(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 25);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// ld r28,104(r1)
	r28.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// clrldi r28,r28,42
	r28.u64 = r28.u64 & 0x3FFFFF;
	// rldimi r28,r10,22,0
	r28.u64 = (__builtin_rotateleft64(ctx.r10.u64, 22) & 0xFFFFFFFFFFC00000) | (r28.u64 & 0x3FFFFF);
	// fctiwz f0,f13
	ctx.f0.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// clrldi r10,r9,44
	ctx.r10.u64 = ctx.r9.u64 & 0xFFFFF;
	// stfd f0,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// sth r5,126(r1)
	REX_STORE_U16(ctx.r1.u32 + 126, ctx.r5.u16);
	// rlwimi r6,r8,11,0,20
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 11) & 0xFFFFF800) | (ctx.r6.u64 & 0xFFFFFFFF000007FF);
	// rldimi r10,r28,20,0
	ctx.r10.u64 = (__builtin_rotateleft64(r28.u64, 20) & 0xFFFFFFFFFFF00000) | (ctx.r10.u64 & 0xFFFFF);
	// sth r4,128(r1)
	REX_STORE_U16(ctx.r1.u32 + 128, ctx.r4.u16);
	// sth r3,130(r1)
	REX_STORE_U16(ctx.r1.u32 + 130, ctx.r3.u16);
	// sth r30,132(r1)
	REX_STORE_U16(ctx.r1.u32 + 132, r30.u16);
	// sth r29,134(r1)
	REX_STORE_U16(ctx.r1.u32 + 134, r29.u16);
	// lhz r9,110(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r12,114
	ctx.r12.s64 = 114;
	// stdx r10,r1,r12
	REX_STORE_U64(ctx.r1.u32 + ctx.r12.u32, ctx.r10.u64);
	// stw r6,122(r1)
	REX_STORE_U32(ctx.r1.u32 + 122, ctx.r6.u32);
	// sth r9,136(r1)
	REX_STORE_U16(ctx.r1.u32 + 136, ctx.r9.u16);
	// bne 0x8227dd44
	if (!ctx.cr0.eq) goto loc_8227DD44;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,30224
	ctx.r4.s64 = ctx.r11.s64 + 30224;
	// addi r3,r10,30376
	ctx.r3.s64 = ctx.r10.s64 + 30376;
	// li r5,91
	ctx.r5.s64 = 91;
	// bl 0x821231d0
	ctx.lr = 0x8227DD44;
	sub_821231D0(ctx, base);
loc_8227DD44:
	// lwz r30,44(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// addi r4,r30,30
	ctx.r4.s64 = r30.s64 + 30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125c20
	ctx.lr = 0x8227DD58;
	sub_82125C20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125c98
	ctx.lr = 0x8227DD64;
	sub_82125C98(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,30
	ctx.r5.s64 = 30;
	// bl 0x826a1e70
	ctx.lr = 0x8227DD70;
	sub_826A1E70(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8228D308) {
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
	ctx.lr = 0x8228D310;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,96
	r31.s64 = ctx.r3.s64 + 96;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82130d70
	ctx.lr = 0x8228D32C;
	sub_82130D70(ctx, base);
	// addi r29,r30,68
	r29.s64 = r30.s64 + 68;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82120780
	ctx.lr = 0x8228D338;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8228d3fc
	if (ctx.cr0.eq) goto loc_8228D3FC;
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r28,r11,27,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82130d70
	ctx.lr = 0x8228D354;
	sub_82130D70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120b20
	ctx.lr = 0x8228D368;
	sub_82120B20(ctx, base);
	// lwz r31,108(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 108);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8228d384
	if (ctx.cr6.eq) goto loc_8228D384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82208770
	ctx.lr = 0x8228D37C;
	sub_82208770(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8228D384;
	sub_8269CE98(ctx, base);
loc_8228D384:
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228d3ac
	if (ctx.cr6.eq) goto loc_8228D3AC;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x822f6280
	ctx.lr = 0x8228D398;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228d3ac
	if (ctx.cr0.eq) goto loc_8228D3AC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82208610
	ctx.lr = 0x8228D3A8;
	sub_82208610(ctx, base);
	// b 0x8228d3b0
	goto loc_8228D3B0;
loc_8228D3AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228D3B0:
	// stw r3,108(r30)
	REX_STORE_U32(r30.u32 + 108, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228d3fc
	if (ctx.cr6.eq) goto loc_8228D3FC;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228d3fc
	if (ctx.cr0.eq) goto loc_8228D3FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// li r6,15
	ctx.r6.s64 = 15;
	// addi r5,r10,16064
	ctx.r5.s64 = ctx.r10.s64 + 16064;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216b6a8
	ctx.lr = 0x8228D3E4;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-27100
	ctx.r4.s64 = ctx.r11.s64 + -27100;
	// lwz r11,108(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 108);
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82178c38
	ctx.lr = 0x8228D3FC;
	sub_82178C38(ctx, base);
loc_8228D3FC:
	// lwz r11,108(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 108);
	// li r26,1
	r26.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228d44c
	if (ctx.cr6.eq) goto loc_8228D44C;
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228d44c
	if (ctx.cr6.eq) goto loc_8228D44C;
	// lbz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 64);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8228d42c
	if (ctx.cr0.eq) goto loc_8228D42C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8228d434
	goto loc_8228D434;
loc_8228D42C:
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// slw r11,r26,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r11.u8 & 0x3F));
loc_8228D434:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228D44C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228D44C:
	// lbz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 64);
	// li r27,0
	r27.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8228d460
	if (!ctx.cr0.eq) goto loc_8228D460;
	// lwz r27,44(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 44);
loc_8228D460:
	// li r31,0
	r31.s64 = 0;
	// addi r29,r30,49
	r29.s64 = r30.s64 + 49;
	// lis r28,-32106
	r28.s64 = -2104098816;
loc_8228D46C:
	// lwz r3,6080(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6080);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228D484;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228d4d8
	if (ctx.cr0.eq) goto loc_8228D4D8;
	// add r11,r31,r30
	ctx.r11.u64 = r31.u64 + r30.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r9,28,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x1;
	// addi r10,r11,53
	ctx.r10.s64 = ctx.r11.s64 + 53;
	// lbz r10,53(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 53);
	// stb r9,53(r11)
	REX_STORE_U8(ctx.r11.u32 + 53, ctx.r9.u8);
	// lwz r11,108(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228d4d8
	if (!ctx.cr6.eq) goto loc_8228D4D8;
	// slw r11,r26,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (r26.u32 << (r31.u8 & 0x3F));
	// and. r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228d4d8
	if (ctx.cr0.eq) goto loc_8228D4D8;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228d4d8
	if (ctx.cr0.eq) goto loc_8228D4D8;
	// stbx r26,r29,r31
	REX_STORE_U8(r29.u32 + r31.u32, r26.u8);
loc_8228D4D8:
	// lbzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + r31.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8228d4f0
	if (ctx.cr0.eq) goto loc_8228D4F0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8228d508
	ctx.lr = 0x8228D4F0;
	sub_8228D508(ctx, base);
loc_8228D4F0:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// blt cr6,0x8228d46c
	if (ctx.cr6.lt) goto loc_8228D46C;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8229FA08) {
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
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c94
	ctx.lr = 0x8229FA10;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x826a2ca4
	ctx.lr = 0x8229FA18;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r29,r11,16592
	r29.s64 = ctx.r11.s64 + 16592;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lfs f28,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f28.f64 = double(temp.f32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lfs f27,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	f27.f64 = double(temp.f32);
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// stfs f28,108(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// subf r20,r4,r5
	r20.u64 = ctx.r5.u64 - ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// fmr f31,f28
	f31.f64 = f28.f64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// fmr f30,f28
	f30.f64 = f28.f64;
	// fmr f29,f28
	f29.f64 = f28.f64;
	// bge cr6,0x8229fad0
	if (!ctx.cr6.lt) goto loc_8229FAD0;
loc_8229FA64:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8229ef20
	ctx.lr = 0x8229FA74;
	sub_8229EF20(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8229eff0
	ctx.lr = 0x8229FA88;
	sub_8229EFF0(ctx, base);
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f13,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(r30.s32, r25.s32, ctx.xer);
	// lfs f10,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// fmuls f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 * f27.f64));
	// fmuls f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 * f27.f64));
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fadds f30,f13,f30
	f30.f64 = double(float(ctx.f13.f64 + f30.f64));
	// fadds f29,f12,f29
	f29.f64 = double(float(ctx.f12.f64 + f29.f64));
	// blt cr6,0x8229fa64
	if (ctx.cr6.lt) goto loc_8229FA64;
loc_8229FAD0:
	// extsw r11,r20
	ctx.r11.s64 = r20.s32;
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r22,r27,2,0,29
	r22.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// mr r24,r28
	r24.u64 = r28.u64;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(r28.s32, r25.s32, ctx.xer);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 * ctx.f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f30,f0
	ctx.f13.f64 = double(float(f30.f64 * ctx.f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 * ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfsx f31,r22,r11
	temp.u32 = REX_LOAD_U32(r22.u32 + ctx.r11.u32);
	f31.f64 = double(temp.f32);
	// bge cr6,0x8229fc9c
	if (!ctx.cr6.lt) goto loc_8229FC9C;
	// rlwinm r11,r28,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 6) & 0xFFFFFFC0;
	// stfs f28,108(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// addi r23,r1,96
	r23.s64 = ctx.r1.s64 + 96;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
loc_8229FB3C:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8229ef20
	ctx.lr = 0x8229FB4C;
	sub_8229EF20(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8229eff0
	ctx.lr = 0x8229FB60;
	sub_8229EFF0(ctx, base);
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f10,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,8(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// lfs f11,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f0,f13,f27
	ctx.f0.f64 = double(float(ctx.f13.f64 * f27.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f12,f27
	ctx.f0.f64 = double(float(ctx.f12.f64 * f27.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfsx f0,r22,r23
	temp.u32 = REX_LOAD_U32(r22.u32 + r23.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8229fc88
	if (!ctx.cr6.gt) goto loc_8229FC88;
	// lbz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8229fc0c
	if (ctx.cr0.eq) goto loc_8229FC0C;
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r7,r10,r27
	ctx.r7.u64 = ctx.r10.u64 + r27.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// add r6,r26,r10
	ctx.r6.u64 = r26.u64 + ctx.r10.u64;
	// add r5,r27,r10
	ctx.r5.u64 = r27.u64 + ctx.r10.u64;
	// ldx r10,r10,r27
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + r27.u32);
	// ld r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// ldx r4,r26,r11
	ctx.r4.u64 = REX_LOAD_U64(r26.u32 + ctx.r11.u32);
	// std r10,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r7,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// ld r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// stdx r4,r27,r11
	REX_STORE_U64(r27.u32 + ctx.r11.u32, ctx.r4.u64);
	// ld r11,8(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// std r11,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r11.u64);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// add r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 + r26.u64;
	// stdx r9,r11,r26
	REX_STORE_U64(ctx.r11.u32 + r26.u32, ctx.r9.u64);
	// std r10,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// b 0x8229fc7c
	goto loc_8229FC7C;
loc_8229FC0C:
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8229FC24:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x8229fc24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229FC24;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// li r10,8
	ctx.r10.s64 = 8;
	// add r9,r29,r11
	ctx.r9.u64 = r29.u64 + ctx.r11.u64;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8229FC4C:
	// ldu r10,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8229fc4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229FC4C;
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// add r10,r29,r10
	ctx.r10.u64 = r29.u64 + ctx.r10.u64;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8229FC70:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8229fc70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229FC70;
loc_8229FC7C:
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r26,r26,16
	r26.s64 = r26.s64 + 16;
	// addi r29,r29,64
	r29.s64 = r29.s64 + 64;
loc_8229FC88:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// cmpw cr6,r24,r25
	ctx.cr6.compare<int32_t>(r24.s32, r25.s32, ctx.xer);
	// blt cr6,0x8229fb3c
	if (ctx.cr6.lt) goto loc_8229FB3C;
loc_8229FC9C:
	// li r11,3
	ctx.r11.s64 = 3;
	// divw r11,r20,r11
	ctx.r11.u64 = uint32_t((ctx.r11.s32 && !(r20.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? r20.s32 / ctx.r11.s32 : 0);
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + r28.u64;
	// cmpw cr6,r21,r10
	ctx.cr6.compare<int32_t>(r21.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8229fcc4
	if (!ctx.cr6.gt) goto loc_8229FCC4;
	// subf r11,r11,r25
	ctx.r11.u64 = r25.u64 - ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(r21.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x8229fcc8
	if (ctx.cr6.lt) goto loc_8229FCC8;
loc_8229FCC4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8229FCC8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229fcd8
	if (ctx.cr0.eq) goto loc_8229FCD8;
	// srawi r11,r20,1
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x1) != 0);
	ctx.r11.s64 = r20.s32 >> 1;
	// add r21,r11,r28
	r21.u64 = ctx.r11.u64 + r28.u64;
loc_8229FCD8:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x826a2cf0
	ctx.lr = 0x8229FCE8;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_822BBD80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822BBD88;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822bbb20
	ctx.lr = 0x822BBD9C;
	sub_822BBB20(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r31,172(r30)
	REX_STORE_U32(r30.u32 + 172, r31.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r10,r10,7592
	ctx.r10.s64 = ctx.r10.s64 + 7592;
	// li r31,0
	r31.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r31,192(r30)
	REX_STORE_U32(r30.u32 + 192, r31.u32);
	// lfs f0,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stb r29,196(r30)
	REX_STORE_U8(r30.u32 + 196, r29.u8);
	// lfs f13,528(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 528);
	ctx.f13.f64 = double(temp.f32);
	// stw r31,184(r30)
	REX_STORE_U32(r30.u32 + 184, r31.u32);
	// stw r31,188(r30)
	REX_STORE_U32(r30.u32 + 188, r31.u32);
	// stb r29,216(r30)
	REX_STORE_U8(r30.u32 + 216, r29.u8);
	// stw r31,212(r30)
	REX_STORE_U32(r30.u32 + 212, r31.u32);
	// stw r31,204(r30)
	REX_STORE_U32(r30.u32 + 204, r31.u32);
	// stw r31,208(r30)
	REX_STORE_U32(r30.u32 + 208, r31.u32);
	// stfs f0,224(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 224, temp.u32);
	// stfs f0,232(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 232, temp.u32);
	// stfs f0,236(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 236, temp.u32);
	// stfs f13,228(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 228, temp.u32);
	// stb r31,246(r30)
	REX_STORE_U8(r30.u32 + 246, r31.u8);
	// lfs f0,1364(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1364);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,240(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 240, temp.u32);
	// stb r29,264(r30)
	REX_STORE_U8(r30.u32 + 264, r29.u8);
	// stw r31,260(r30)
	REX_STORE_U32(r30.u32 + 260, r31.u32);
	// stw r31,252(r30)
	REX_STORE_U32(r30.u32 + 252, r31.u32);
	// stw r31,256(r30)
	REX_STORE_U32(r30.u32 + 256, r31.u32);
	// lwz r11,172(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r31,268(r30)
	REX_STORE_U32(r30.u32 + 268, r31.u32);
	// bne cr6,0x822bbebc
	if (!ctx.cr6.eq) goto loc_822BBEBC;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822c1a70
	ctx.lr = 0x822BBE2C;
	sub_822C1A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822bbeac
	if (ctx.cr0.eq) goto loc_822BBEAC;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,7184
	ctx.r10.s64 = ctx.r10.s64 + 7184;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r29,20(r3)
	REX_STORE_U8(ctx.r3.u32 + 20, r29.u8);
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// stw r31,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// stw r31,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stb r29,40(r3)
	REX_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r31,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r31.u32);
	// stw r31,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r31.u32);
	// stw r31,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r31.u32);
	// stb r29,60(r3)
	REX_STORE_U8(ctx.r3.u32 + 60, r29.u8);
	// stw r31,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r31.u32);
	// stw r31,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, r31.u32);
	// stw r31,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, r31.u32);
	// stb r29,80(r3)
	REX_STORE_U8(ctx.r3.u32 + 80, r29.u8);
	// stw r31,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, r31.u32);
	// stw r31,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, r31.u32);
	// stw r31,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, r31.u32);
	// stb r29,100(r3)
	REX_STORE_U8(ctx.r3.u32 + 100, r29.u8);
	// stw r31,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, r31.u32);
	// stw r31,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, r31.u32);
	// stw r31,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, r31.u32);
	// stb r29,120(r3)
	REX_STORE_U8(ctx.r3.u32 + 120, r29.u8);
	// stw r31,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, r31.u32);
	// stw r31,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, r31.u32);
	// stw r31,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, r31.u32);
	// stw r31,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, r31.u32);
	// b 0x822bbeb0
	goto loc_822BBEB0;
loc_822BBEAC:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_822BBEB0:
	// stw r11,172(r30)
	REX_STORE_U32(r30.u32 + 172, ctx.r11.u32);
	// stb r29,245(r30)
	REX_STORE_U8(r30.u32 + 245, r29.u8);
	// b 0x822bbec0
	goto loc_822BBEC0;
loc_822BBEBC:
	// stb r31,245(r30)
	REX_STORE_U8(r30.u32 + 245, r31.u8);
loc_822BBEC0:
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x822c1a70
	ctx.lr = 0x822BBEC8;
	sub_822C1A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822bbf18
	if (ctx.cr0.eq) goto loc_822BBF18;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,15476
	ctx.r10.s64 = ctx.r10.s64 + 15476;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r29,20(r3)
	REX_STORE_U8(ctx.r3.u32 + 20, r29.u8);
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// stw r31,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// stw r31,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stb r29,40(r3)
	REX_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r31,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r31.u32);
	// stw r31,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r31.u32);
	// stw r31,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r31.u32);
	// stb r29,60(r3)
	REX_STORE_U8(ctx.r3.u32 + 60, r29.u8);
	// stw r31,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r31.u32);
	// stw r31,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, r31.u32);
	// stw r31,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, r31.u32);
	// stb r29,64(r3)
	REX_STORE_U8(ctx.r3.u32 + 64, r29.u8);
	// b 0x822bbf1c
	goto loc_822BBF1C;
loc_822BBF18:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_822BBF1C:
	// stw r11,176(r30)
	REX_STORE_U32(r30.u32 + 176, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,244(r30)
	REX_STORE_U8(r30.u32 + 244, r29.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822C2978) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2A58) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,24,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2B60) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,9,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2C18) {
	REX_FUNC_PROLOGUE();
	// stb r4,10497(r3)
	REX_STORE_U8(ctx.r3.u32 + 10497, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2F48) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12624(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12624);
	// li r12,1
	ctx.r12.s64 = 1;
	// lwz r9,10460(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 10460);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// stw r4,12044(r3)
	REX_STORE_U32(ctx.r3.u32 + 12044, ctx.r4.u32);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// rlwimi r9,r11,8,20,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF0FF);
	// stw r9,10460(r3)
	REX_STORE_U32(ctx.r3.u32 + 10460, ctx.r9.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3D28) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r10,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// rlwinm r10,r9,13,19,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1FFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwimi r10,r11,0,29,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// clrlwi r3,r10,29
	ctx.r3.u64 = ctx.r10.u32 & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C5DB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822C5DC0;
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822c5de8
	if (!ctx.cr6.gt) goto loc_822C5DE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822C5DE8;
	sub_822D5B28(ctx, base);
loc_822C5DE8:
	// li r10,2609
	ctx.r10.s64 = 2609;
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lis r10,768
	ctx.r10.s64 = 50331648;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// ori r9,r10,512
	ctx.r9.u64 = ctx.r10.u64 | 512;
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// clrlwi r11,r30,3
	ctx.r11.u64 = r30.u32 & 0x1FFFFFFF;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r9,r8,2607
	ctx.r9.u64 = ctx.r8.u64 | 2607;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + r29.u64;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// addi r10,r10,4095
	ctx.r10.s64 = ctx.r10.s64 + 4095;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lis r8,-16380
	ctx.r8.s64 = -1073479680;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// ori r9,r8,15360
	ctx.r9.u64 = ctx.r8.u64 | 15360;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// li r8,3
	ctx.r8.s64 = 3;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// li r7,2609
	ctx.r7.s64 = 2609;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// li r5,8
	ctx.r5.s64 = 8;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
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
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822CD690) {
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
	// lwz r3,304(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 304);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cd6b8
	if (ctx.cr6.eq) goto loc_822CD6B8;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x823f0350
	ctx.lr = 0x822CD6B8;
	sub_823F0350(ctx, base);
loc_822CD6B8:
	// lwz r3,292(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 292);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cd6cc
	if (ctx.cr6.eq) goto loc_822CD6CC;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x823f0350
	ctx.lr = 0x822CD6CC;
	sub_823F0350(ctx, base);
loc_822CD6CC:
	// lwz r3,280(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 280);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cd6e0
	if (ctx.cr6.eq) goto loc_822CD6E0;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x823f0350
	ctx.lr = 0x822CD6E0;
	sub_823F0350(ctx, base);
loc_822CD6E0:
	// lwz r3,268(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cd6f4
	if (ctx.cr6.eq) goto loc_822CD6F4;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x823f0350
	ctx.lr = 0x822CD6F4;
	sub_823F0350(ctx, base);
loc_822CD6F4:
	// lwz r3,108(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cd708
	if (ctx.cr6.eq) goto loc_822CD708;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x823f0350
	ctx.lr = 0x822CD708;
	sub_823F0350(ctx, base);
loc_822CD708:
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cd71c
	if (ctx.cr6.eq) goto loc_822CD71C;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x823f0350
	ctx.lr = 0x822CD71C;
	sub_823F0350(ctx, base);
loc_822CD71C:
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

DEFINE_REX_FUNC(sub_822D0518) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c9c
	ctx.lr = 0x822D0520;
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// rlwinm. r11,r10,16,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,1
	r27.s64 = 1;
	// bne 0x822d0558
	if (!ctx.cr0.eq) goto loc_822D0558;
	// li r26,1
	r26.s64 = 1;
	// b 0x822d0568
	goto loc_822D0568;
loc_822D0558:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r26,0
	r26.s64 = 0;
	// beq cr6,0x822d0568
	if (ctx.cr6.eq) goto loc_822D0568;
	// li r27,0
	r27.s64 = 0;
loc_822D0568:
	// li r11,40
	ctx.r11.s64 = 40;
	// li r10,8
	ctx.r10.s64 = 8;
	// slw r11,r11,r27
	ctx.r11.u64 = r27.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r27.u8 & 0x3F));
	// slw r10,r10,r26
	ctx.r10.u64 = r26.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r26.u8 & 0x3F));
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r8,r10,r28
	ctx.r8.u64 = ctx.r10.u64 + r28.u64;
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// addi r30,r8,-1
	r30.s64 = ctx.r8.s64 + -1;
	// rotlwi r5,r4,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// rotlwi r8,r29,1
	ctx.r8.u64 = __builtin_rotateleft32(r29.u32, 1);
	// divw r4,r4,r11
	ctx.r4.u64 = uint32_t((ctx.r11.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r4.s32 / ctx.r11.s32 : 0);
	// rotlwi r6,r30,1
	ctx.r6.u64 = __builtin_rotateleft32(r30.u32, 1);
	// rotlwi r9,r7,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r25,r29,r11
	r25.u64 = uint32_t((ctx.r11.s32 && !(r29.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? r29.s32 / ctx.r11.s32 : 0);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// mullw r31,r4,r11
	r31.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// divw r4,r30,r10
	ctx.r4.u64 = uint32_t((ctx.r10.s32 && !(r30.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? r30.s32 / ctx.r10.s32 : 0);
	// mullw r30,r25,r11
	r30.s64 = int64_t(r25.s32) * int64_t(ctx.r11.s32);
	// andc r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// andc r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 & ~ctx.r6.u64;
	// divw r11,r7,r10
	ctx.r11.u64 = uint32_t((ctx.r10.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r7.s32 / ctx.r10.s32 : 0);
	// andc r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r5,-1
	if (ctx.r5.s32 == -1 || ctx.r5.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// mullw r25,r4,r10
	r25.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// mullw r24,r11,r10
	r24.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(r31.s32, r30.s32, ctx.xer);
	// bge cr6,0x822d0728
	if (!ctx.cr6.lt) goto loc_822D0728;
	// cmpw cr6,r25,r24
	ctx.cr6.compare<int32_t>(r25.s32, r24.s32, ctx.xer);
	// bge cr6,0x822d0728
	if (!ctx.cr6.lt) goto loc_822D0728;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x822d0628
	if (!ctx.cr6.gt) goto loc_822D0628;
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r28,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// stw r31,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// stw r7,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
loc_822D0628:
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// bge cr6,0x822d0644
	if (!ctx.cr6.lt) goto loc_822D0644;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r29.u32);
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_822D0644:
	// cmpw cr6,r25,r28
	ctx.cr6.compare<int32_t>(r25.s32, r28.s32, ctx.xer);
	// ble cr6,0x822d0660
	if (!ctx.cr6.gt) goto loc_822D0660;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r30.u32);
	// stw r25,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r25.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_822D0660:
	// cmpw cr6,r24,r7
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x822d067c
	if (!ctx.cr6.lt) goto loc_822D067C;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// stw r24,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r24.u32);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r30.u32);
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_822D067C:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r29,372(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi. r4,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x822d06b8
	if (ctx.cr0.eq) goto loc_822D06B8;
	// lwz r11,396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// lwz r10,380(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822d0260
	ctx.lr = 0x822D06B8;
	sub_822D0260(ctx, base);
loc_822D06B8:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,404(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// sraw r8,r31,r27
	temp.u32 = r27.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r31.s32 < 0) & (((r31.s32 >> temp.u32) << temp.u32) != r31.s32);
	ctx.r8.s64 = r31.s32 >> temp.u32;
	// lwz r10,388(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// rlwimi r23,r11,17,14,15
	r23.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x30000) | (r23.u64 & 0xFFFFFFFFFFFCFFFF);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// sraw r11,r25,r26
	temp.u32 = r26.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r25.s32 < 0) & (((r25.s32 >> temp.u32) << temp.u32) != r25.s32);
	ctx.r11.s64 = r25.s32 >> temp.u32;
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// sraw r11,r30,r27
	temp.u32 = r27.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r30.s32 < 0) & (((r30.s32 >> temp.u32) << temp.u32) != r30.s32);
	ctx.r11.s64 = r30.s32 >> temp.u32;
	// sraw r9,r24,r26
	temp.u32 = r26.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r24.s32 < 0) & (((r24.s32 >> temp.u32) << temp.u32) != r24.s32);
	ctx.r9.s64 = r24.s32 >> temp.u32;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// clrlwi r11,r23,18
	ctx.r11.u64 = r23.u32 & 0x3FFF;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// srw r11,r11,r27
	ctx.r11.u64 = r27.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r27.u8 & 0x3F));
	// rlwimi r11,r23,0,0,17
	ctx.r11.u64 = (__builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFC000) | (ctx.r11.u64 & 0xFFFFFFFF00003FFF);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwinm r11,r11,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// srw r11,r11,r27
	ctx.r11.u64 = r27.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r27.u8 & 0x3F));
	// rlwimi r8,r11,18,0,13
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x822d0260
	ctx.lr = 0x822D0724;
	sub_822D0260(ctx, base);
	// b 0x822d0764
	goto loc_822D0764;
loc_822D0728:
	// lwz r11,396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r10,380(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,372(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// stw r29,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// bl 0x822d0260
	ctx.lr = 0x822D0764;
	sub_822D0260(ctx, base);
loc_822D0764:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_822E4AB0) {
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
	ctx.lr = 0x822E4AB8;
	// stwu r1,-2320(r1)
	ea = -2320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,24180(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 24180);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r31,r3,23572
	r31.s64 = ctx.r3.s64 + 23572;
	// li r27,0
	r27.s64 = 0;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822e4e30
	if (ctx.cr0.eq) goto loc_822E4E30;
	// lwz r3,364(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e4e08
	if (ctx.cr6.eq) goto loc_822E4E08;
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r28,-1
	r28.s64 = -1;
	// beq 0x822e4bf8
	if (ctx.cr0.eq) goto loc_822E4BF8;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e4afc
	if (ctx.cr0.eq) goto loc_822E4AFC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x823eeb10
	ctx.lr = 0x822E4AFC;
	sub_823EEB10(ctx, base);
loc_822E4AFC:
	// lwz r29,16(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r3,588(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 588);
	// bl 0x822d6058
	ctx.lr = 0x822E4B08;
	sub_822D6058(ctx, base);
	// lis r8,-32106
	ctx.r8.s64 = -2104098816;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r8,r8,31744
	ctx.r8.s64 = ctx.r8.s64 + 31744;
	// addi r30,r11,-11312
	r30.s64 = ctx.r11.s64 + -11312;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
loc_822E4B20:
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
	// stwcx. r11,0,r7
	ea = ctx.r7.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822e4b20
	if (!ctx.cr0.eq) goto loc_822E4B20;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r10,6144
	ctx.r10.s64 = 6144;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// divwu r10,r11,r10
	ctx.r10.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// blt cr6,0x822e4b58
	if (ctx.cr6.lt) goto loc_822E4B58;
	// li r10,14
	ctx.r10.s64 = 14;
loc_822E4B58:
	// lwz r11,584(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 584);
	// mulli r9,r10,12
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwz r6,596(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 596);
	// lhz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 12);
	// lwz r5,380(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 380);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r6,12,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0x3F;
	// rlwinm r4,r4,2,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x4;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-25768
	ctx.r7.s64 = -1688731648;
	// lwzx r4,r4,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + r31.u32);
	// rlwinm r24,r6,4,30,31
	r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0x3;
	// ori r25,r7,59162
	r25.u64 = ctx.r7.u64 | 59162;
	// stw r5,356(r31)
	REX_STORE_U32(r31.u32 + 356, ctx.r5.u32);
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// stw r27,360(r31)
	REX_STORE_U32(r31.u32 + 360, r27.u32);
	// rlwinm r23,r9,9,0,22
	r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// lwzx r3,r8,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// addi r7,r31,348
	ctx.r7.s64 = r31.s64 + 348;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stwu r25,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r11.u32 = ea;
	// stwu r24,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r11.u32 = ea;
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bl 0x823ee330
	ctx.lr = 0x822E4BC8;
	sub_823EE330(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e4688
	ctx.lr = 0x822E4BD4;
	sub_822E4688(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,364(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 364);
	// bl 0x823eeb10
	ctx.lr = 0x822E4BE0;
	sub_823EEB10(ctx, base);
	// b 0x822e4bec
	goto loc_822E4BEC;
loc_822E4BE4:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x823ecca8
	ctx.lr = 0x822E4BEC;
	sub_823ECCA8(ctx, base);
loc_822E4BEC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,6144
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6144, ctx.xer);
	// bne cr6,0x822e4be4
	if (!ctx.cr6.eq) goto loc_822E4BE4;
loc_822E4BF8:
	// lwz r11,596(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 596);
	// mr r30,r27
	r30.u64 = r27.u64;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// rlwinm. r11,r11,0,12,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e4c70
	if (ctx.cr0.eq) goto loc_822E4C70;
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
loc_822E4C10:
	// lbz r11,608(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 608);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e4c40
	if (!ctx.cr0.eq) goto loc_822E4C40;
	// lwz r11,596(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 596);
	// rlwinm r11,r11,12,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822e4c40
	if (ctx.cr6.lt) goto loc_822E4C40;
	// ble cr6,0x822e4c38
	if (!ctx.cr6.gt) goto loc_822E4C38;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// b 0x822e4c44
	goto loc_822E4C44;
loc_822E4C38:
	// lwz r4,380(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 380);
	// b 0x822e4c44
	goto loc_822E4C44;
loc_822E4C40:
	// lwz r4,168(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 168);
loc_822E4C44:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x823ef790
	ctx.lr = 0x822E4C54;
	sub_823EF790(ctx, base);
	// lwzu r3,4(r29)
	ea = 4 + r29.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// bl 0x826b3c10
	ctx.lr = 0x822E4C5C;
	sub_826B3C10(ctx, base);
	// lwz r11,596(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 596);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// rlwinm r11,r11,18,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822e4c10
	if (ctx.cr6.lt) goto loc_822E4C10;
loc_822E4C70:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82793d94
	ctx.lr = 0x822E4C78;
	__imp__VdGetCurrentDisplayInformation(ctx, base);
	// lwz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 604);
	// srawi. r11,r11,29
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 29;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e4c90
	if (!ctx.cr0.eq) goto loc_822E4C90;
	// lis r10,21415
	ctx.r10.s64 = 1403453440;
	// ori r10,r10,8884
	ctx.r10.u64 = ctx.r10.u64 | 8884;
	// b 0x822e4cb4
	goto loc_822E4CB4;
loc_822E4C90:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822e4ca4
	if (!ctx.cr6.eq) goto loc_822E4CA4;
	// lis r10,21415
	ctx.r10.s64 = 1403453440;
	// ori r10,r10,8885
	ctx.r10.u64 = ctx.r10.u64 | 8885;
	// b 0x822e4cb4
	goto loc_822E4CB4;
loc_822E4CA4:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822e4cb8
	if (!ctx.cr6.eq) goto loc_822E4CB8;
	// lis r10,21415
	ctx.r10.s64 = 1403453440;
	// ori r10,r10,8886
	ctx.r10.u64 = ctx.r10.u64 | 8886;
loc_822E4CB4:
	// stw r10,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
loc_822E4CB8:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// beq cr6,0x822e4cf8
	if (ctx.cr6.eq) goto loc_822E4CF8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822e4cf8
	if (ctx.cr6.eq) goto loc_822E4CF8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822e4d18
	if (!ctx.cr6.eq) goto loc_822E4D18;
	// li r10,400
	ctx.r10.s64 = 400;
	// li r11,224
	ctx.r11.s64 = 224;
	// stw r10,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stw r11,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// stw r10,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
	// stw r11,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// b 0x822e4d18
	goto loc_822E4D18;
loc_822E4CF8:
	// lhz r11,368(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 368);
	// lhz r10,370(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 370);
	// lhz r9,168(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 168);
	// lhz r8,170(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 170);
	// stw r11,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// stw r10,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// stw r9,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r9.u32);
	// stw r8,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
loc_822E4D18:
	// bl 0x82793944
	ctx.lr = 0x822E4D1C;
	__imp__KeQueryPerformanceFrequency(ctx, base);
	// lwz r11,596(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 596);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// stw r3,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
	// rlwinm. r8,r11,6,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r27,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, r27.u32);
	// rlwinm r10,r11,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// beq 0x822e4d40
	if (ctx.cr0.eq) goto loc_822E4D40;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r9.u32);
loc_822E4D40:
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822e4d50
	if (ctx.cr0.eq) goto loc_822E4D50;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stw r9,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r9.u32);
loc_822E4D50:
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e4d60
	if (ctx.cr0.eq) goto loc_822E4D60;
	// lwz r4,592(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 592);
	// b 0x822e4d64
	goto loc_822E4D64;
loc_822E4D60:
	// addi r4,r26,15216
	ctx.r4.s64 = r26.s64 + 15216;
loc_822E4D64:
	// lbz r11,101(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 101);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822e4d88
	if (!ctx.cr6.eq) goto loc_822E4D88;
	// ori r11,r9,4
	ctx.r11.u64 = ctx.r9.u64 | 4;
	// stw r11,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// bl 0x822d93b0
	ctx.lr = 0x822E4D84;
	sub_822D93B0(ctx, base);
	// b 0x822e4d8c
	goto loc_822E4D8C;
loc_822E4D88:
	// bl 0x822d9318
	ctx.lr = 0x822E4D8C;
	sub_822D9318(ctx, base);
loc_822E4D8C:
	// lwz r30,596(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 596);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// li r5,56
	ctx.r5.s64 = 56;
	// rlwinm. r11,r30,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r4,r26,13936
	ctx.r4.s64 = r26.s64 + 13936;
	// bne 0x822e4da8
	if (!ctx.cr0.eq) goto loc_822E4DA8;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
loc_822E4DA8:
	// bl 0x826a1e70
	ctx.lr = 0x822E4DAC;
	sub_826A1E70(ctx, base);
	// lbz r11,608(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 608);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e4dc8
	if (ctx.cr0.eq) goto loc_822E4DC8;
	// rlwinm r10,r30,12,26,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0x3F;
	// lwz r11,380(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 380);
	// stw r10,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// b 0x822e4dd0
	goto loc_822E4DD0;
loc_822E4DC8:
	// li r11,2048
	ctx.r11.s64 = 2048;
	// stw r27,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, r27.u32);
loc_822E4DD0:
	// stw r11,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// addi r7,r31,348
	ctx.r7.s64 = r31.s64 + 348;
	// stw r27,356(r31)
	REX_STORE_U32(r31.u32 + 356, r27.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r27,360(r31)
	REX_STORE_U32(r31.u32 + 360, r27.u32);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x823ee330
	ctx.lr = 0x822E4DF4;
	sub_823EE330(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,364(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 364);
	// bl 0x823eeb10
	ctx.lr = 0x822E4E00;
	sub_823EEB10(ctx, base);
	// lwz r3,364(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 364);
	// bl 0x823ed360
	ctx.lr = 0x822E4E08;
	sub_823ED360(ctx, base);
loc_822E4E08:
	// mr r30,r27
	r30.u64 = r27.u64;
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
loc_822E4E10:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822e4e30
	if (ctx.cr6.eq) goto loc_822E4E30;
	// bl 0x823ed360
	ctx.lr = 0x822E4E20;
	sub_823ED360(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r30,41
	ctx.cr6.compare<uint32_t>(r30.u32, 41, ctx.xer);
	// blt cr6,0x822e4e10
	if (ctx.cr6.lt) goto loc_822E4E10;
loc_822E4E30:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2072(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2072);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e4e54
	if (ctx.cr6.eq) goto loc_822E4E54;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e4e80
	if (ctx.cr6.eq) goto loc_822E4E80;
	// b 0x822e4e6c
	goto loc_822E4E6C;
loc_822E4E54:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2272(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2272);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e4e80
	if (ctx.cr6.eq) goto loc_822E4E80;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_822E4E6C:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r3,27
	ctx.r3.s64 = 27;
	// addi r4,r10,13252
	ctx.r4.s64 = ctx.r10.s64 + 13252;
	// bctrl 
	ctx.lr = 0x822E4E80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822E4E80:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822e3e18
	ctx.lr = 0x822E4E88;
	sub_822E3E18(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-21632
	ctx.r3.s64 = ctx.r11.s64 + -21632;
	// bl 0x82793e94
	ctx.lr = 0x822E4E94;
	__imp__ObDeleteSymbolicLink(ctx, base);
	// lis r8,-32106
	ctx.r8.s64 = -2104098816;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// addi r7,r8,-317
	ctx.r7.s64 = ctx.r8.s64 + -317;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// stb r27,-317(r8)
	REX_STORE_U8(ctx.r8.u32 + -317, r27.u8);
	// stb r27,-3(r7)
	REX_STORE_U8(ctx.r7.u32 + -3, r27.u8);
	// stb r27,-2(r7)
	REX_STORE_U8(ctx.r7.u32 + -2, r27.u8);
	// addi r1,r1,2320
	ctx.r1.s64 = ctx.r1.s64 + 2320;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_822FF510) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f13,f2,f3
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// lfs f0,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x822ff53c
	if (!ctx.cr6.eq) goto loc_822FF53C;
	// fcmpu cr6,f1,f2
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// blt cr6,0x822ff550
	if (ctx.cr6.lt) goto loc_822FF550;
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x822ff554
	if (!ctx.cr6.gt) goto loc_822FF554;
	// b 0x822ff550
	goto loc_822FF550;
loc_822FF53C:
	// fcmpu cr6,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// blt cr6,0x822ff550
	if (ctx.cr6.lt) goto loc_822FF550;
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x822ff554
	if (ctx.cr6.lt) goto loc_822FF554;
loc_822FF550:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822FF554:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FFEE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822FFEF0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,32(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r30,-32129
	r30.s64 = -2105606144;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r31,r11,4008
	r31.s64 = ctx.r11.s64 + 4008;
	// beq cr6,0x822fff28
	if (ctx.cr6.eq) goto loc_822FFF28;
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1468
	ctx.r6.s64 = 1468;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x822FFF28;
	sub_82330D00(ctx, base);
loc_822FFF28:
	// lwz r4,12(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822fff4c
	if (ctx.cr6.eq) goto loc_822FFF4C;
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1472
	ctx.r6.s64 = 1472;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x822FFF4C;
	sub_82330D00(ctx, base);
loc_822FFF4C:
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1475
	ctx.r6.s64 = 1475;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x822FFF68;
	sub_82330D00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82302E08) {
	REX_FUNC_PROLOGUE();
	// lwz r11,152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82302e1c
	if (!ctx.cr6.eq) goto loc_82302E1C;
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
loc_82302E1C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82302e2c
	if (!ctx.cr6.eq) goto loc_82302E2C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82302E2C:
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82303AB0) {
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
	ctx.lr = 0x82303AB8;
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82303adc
	if (!ctx.cr6.eq) goto loc_82303ADC;
	// li r3,31
	ctx.r3.s64 = 31;
	// b 0x82303be8
	goto loc_82303BE8;
loc_82303ADC:
	// lwz r11,52(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82303af0
	if (ctx.cr6.eq) goto loc_82303AF0;
	// li r3,19
	ctx.r3.s64 = 19;
	// b 0x82303be8
	goto loc_82303BE8;
loc_82303AF0:
	// lwz r11,56(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82303b38
	if (!ctx.cr6.eq) goto loc_82303B38;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,4416
	ctx.r3.s64 = ctx.r11.s64 + 4416;
	// bl 0x823317f0
	ctx.lr = 0x82303B08;
	sub_823317F0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,56(r28)
	REX_STORE_U32(r28.u32 + 56, ctx.r4.u32);
	// bne 0x82303b1c
	if (!ctx.cr0.eq) goto loc_82303B1C;
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x82303be8
	goto loc_82303BE8;
loc_82303B1C:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82303B30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82303be8
	if (!ctx.cr0.eq) goto loc_82303BE8;
loc_82303B38:
	// lwz r3,56(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82303b50
	if (ctx.cr6.eq) goto loc_82303B50;
	// bl 0x82331458
	ctx.lr = 0x82303B48;
	sub_82331458(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82303b54
	goto loc_82303B54;
loc_82303B50:
	// li r30,0
	r30.s64 = 0;
loc_82303B54:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82331458
	ctx.lr = 0x82303B5C;
	sub_82331458(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + r30.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x826a2d14
	ctx.lr = 0x82303B74;
	sub_826A2D14(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r4,56(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 56);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82303b98
	if (ctx.cr6.eq) goto loc_82303B98;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x82303B98;
	sub_823EF2F8(ctx, base);
loc_82303B98:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r3,r29,r30
	ctx.r3.u64 = r29.u64 + r30.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x82303BA8;
	sub_823EF2F8(ctx, base);
	// add r11,r29,r27
	ctx.r11.u64 = r29.u64 + r27.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r30
	REX_STORE_U8(ctx.r11.u32 + r30.u32, ctx.r10.u8);
	// lwz r3,56(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 56);
	// bl 0x82300fd0
	ctx.lr = 0x82303BBC;
	sub_82300FD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82303be8
	if (!ctx.cr0.eq) goto loc_82303BE8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,2740
	ctx.r4.s64 = ctx.r11.s64 + 2740;
	// bl 0x8269f338
	ctx.lr = 0x82303BD4;
	sub_8269F338(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r3,52(r28)
	REX_STORE_U32(r28.u32 + 52, ctx.r3.u32);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_82303BE8:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8230FB10) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8230fb20
	if (!ctx.cr6.eq) goto loc_8230FB20;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_8230FB20:
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823106B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,100
	ctx.r10.s64 = 100;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823119A8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823119dc
	if (ctx.cr0.eq) goto loc_823119DC;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823119dc
	if (!ctx.cr6.eq) goto loc_823119DC;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_823119DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82313118) {
	REX_FUNC_PROLOGUE();
	// lwz r10,92(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82313144
	if (ctx.cr6.eq) goto loc_82313144;
	// lwz r11,92(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
	// b 0x82313138
	goto loc_82313138;
loc_82313130:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
loc_82313138:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82313130
	if (!ctx.cr6.eq) goto loc_82313130;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82313144:
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82313164
	if (ctx.cr6.eq) goto loc_82313164;
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82313164:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823144A8) {
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
	// beq cr6,0x823144cc
	if (ctx.cr6.eq) goto loc_823144CC;
	// bl 0x82329530
	ctx.lr = 0x823144C4;
	sub_82329530(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823144d0
	if (!ctx.cr0.eq) goto loc_823144D0;
loc_823144CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823144D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82315240) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82314ff0
	ctx.lr = 0x82315264;
	sub_82314FF0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lbz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,4376
	ctx.r9.s64 = ctx.r9.s64 + 4376;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lbz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 4);
	// stb r9,4(r30)
	REX_STORE_U8(r30.u32 + 4, ctx.r9.u8);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r9,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r9,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r9,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r9.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r9,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r9.u32);
	// stb r10,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r10.u8);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// bl 0x82314ff0
	ctx.lr = 0x823152CC;
	sub_82314FF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

DEFINE_REX_FUNC(sub_82318EB0) {
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
	// li r6,36
	ctx.r6.s64 = 36;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82331a00
	ctx.lr = 0x82318EE0;
	sub_82331A00(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82318f04
	if (ctx.cr6.eq) goto loc_82318F04;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mulli r6,r11,12
	ctx.r6.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82331a00
	ctx.lr = 0x82318F04;
	sub_82331A00(ctx, base);
loc_82318F04:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82318f44
	if (ctx.cr6.eq) goto loc_82318F44;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82318F28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82318f48
	if (!ctx.cr0.eq) goto loc_82318F48;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82331a00
	ctx.lr = 0x82318F44;
	sub_82331A00(ctx, base);
loc_82318F44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82318F48:
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

DEFINE_REX_FUNC(sub_8231EFC0) {
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
	// beq cr6,0x8231f008
	if (ctx.cr6.eq) goto loc_8231F008;
	// lbz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8231f030
	if (!ctx.cr0.eq) goto loc_8231F030;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231EFF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231f034
	if (!ctx.cr0.eq) goto loc_8231F034;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8231f02c
	goto loc_8231F02C;
loc_8231F008:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231F020;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231f034
	if (!ctx.cr0.eq) goto loc_8231F034;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8231F02C:
	// stb r11,16(r31)
	REX_STORE_U8(r31.u32 + 16, ctx.r11.u8);
loc_8231F030:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231F034:
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

DEFINE_REX_FUNC(sub_82324388) {
	REX_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823243a0
	goto loc_823243A0;
loc_82324398:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_823243A0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82324398
	if (!ctx.cr6.eq) goto loc_82324398;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82325108) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82325110;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// b 0x82325140
	goto loc_82325140;
loc_82325124:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// bne cr6,0x82325134
	if (!ctx.cr6.eq) goto loc_82325134;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82325134:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82324f68
	ctx.lr = 0x8232513C;
	sub_82324F68(ctx, base);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82325140:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x82325124
	if (!ctx.cr6.eq) goto loc_82325124;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82327AC0) {
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
	ctx.lr = 0x82327AC8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82327ae4
	if (!ctx.cr6.eq) goto loc_82327AE4;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x82327c68
	goto loc_82327C68;
loc_82327AE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r24,1
	r24.s64 = 1;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm. r28,r11,13,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x82327b8c
	if (!ctx.cr0.eq) goto loc_82327B8C;
	// lwz r30,24(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 24);
	// addi r29,r25,24
	r29.s64 = r25.s64 + 24;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// beq cr6,0x82327b8c
	if (ctx.cr6.eq) goto loc_82327B8C;
	// lis r27,-32256
	r27.s64 = -2113929216;
	// lis r26,-32256
	r26.s64 = -2113929216;
loc_82327B18:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r3,r30,-4
	ctx.r3.s64 = r30.s64 + -4;
	// bne cr6,0x82327b28
	if (!ctx.cr6.eq) goto loc_82327B28;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82327B28:
	// lwz r31,20(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82327b78
	if (ctx.cr0.eq) goto loc_82327B78;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x822ff718
	ctx.lr = 0x82327B48;
	sub_822FF718(ctx, base);
	// lfs f0,3716(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82327b68
	if (!ctx.cr6.gt) goto loc_82327B68;
	// lfs f12,3704(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 3704);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// beq cr6,0x82327b88
	if (ctx.cr6.eq) goto loc_82327B88;
loc_82327B68:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82327b78
	if (!ctx.cr6.lt) goto loc_82327B78;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// beq cr6,0x82327b88
	if (ctx.cr6.eq) goto loc_82327B88;
loc_82327B78:
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x82327b18
	if (!ctx.cr6.eq) goto loc_82327B18;
	// b 0x82327b8c
	goto loc_82327B8C;
loc_82327B88:
	// mr r28,r24
	r28.u64 = r24.u64;
loc_82327B8C:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82327c64
	if (ctx.cr0.eq) goto loc_82327C64;
	// lwz r31,12(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 12);
	// addi r30,r25,12
	r30.s64 = r25.s64 + 12;
	// mr r29,r24
	r29.u64 = r24.u64;
	// b 0x82327bc4
	goto loc_82327BC4;
loc_82327BA4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bne cr6,0x82327bb4
	if (!ctx.cr6.eq) goto loc_82327BB4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82327BB4:
	// bl 0x8232b838
	ctx.lr = 0x82327BB8;
	sub_8232B838(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82327bd0
	if (ctx.cr0.eq) goto loc_82327BD0;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82327BC4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x82327ba4
	if (!ctx.cr6.eq) goto loc_82327BA4;
	// b 0x82327bd4
	goto loc_82327BD4;
loc_82327BD0:
	// li r29,0
	r29.s64 = 0;
loc_82327BD4:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82327c60
	if (!ctx.cr0.eq) goto loc_82327C60;
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// addi r30,r25,24
	r30.s64 = r25.s64 + 24;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x82327bfc
	if (!ctx.cr6.eq) goto loc_82327BFC;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// beq cr6,0x82327c00
	if (ctx.cr6.eq) goto loc_82327C00;
loc_82327BFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82327C00:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82327c64
	if (!ctx.cr0.eq) goto loc_82327C64;
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r29,r24
	r29.u64 = r24.u64;
	// b 0x82327c50
	goto loc_82327C50;
loc_82327C14:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// bne cr6,0x82327c24
	if (!ctx.cr6.eq) goto loc_82327C24;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82327C24:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82327838
	ctx.lr = 0x82327C2C;
	sub_82327838(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82327c48
	if (ctx.cr0.eq) goto loc_82327C48;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82327c4c
	if (!ctx.cr6.eq) goto loc_82327C4C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// b 0x82327c64
	goto loc_82327C64;
loc_82327C48:
	// li r29,0
	r29.s64 = 0;
loc_82327C4C:
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82327C50:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x82327c14
	if (!ctx.cr6.eq) goto loc_82327C14;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82327c64
	if (ctx.cr0.eq) goto loc_82327C64;
loc_82327C60:
	// stw r24,0(r23)
	REX_STORE_U32(r23.u32 + 0, r24.u32);
loc_82327C64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82327C68:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82334300) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82334310
	if (!ctx.cr6.eq) goto loc_82334310;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82334310:
	// lwz r11,21816(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82334328
	if (!ctx.cr6.eq) goto loc_82334328;
	// li r3,81
	ctx.r3.s64 = 81;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82334328:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82336748) {
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
	// beq cr6,0x82336790
	if (ctx.cr6.eq) goto loc_82336790;
	// lbz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823367b8
	if (!ctx.cr6.eq) goto loc_823367B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82336780;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823367bc
	if (!ctx.cr6.eq) goto loc_823367BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823367b4
	goto loc_823367B4;
loc_82336790:
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
	ctx.lr = 0x823367A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823367bc
	if (!ctx.cr6.eq) goto loc_823367BC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823367B4:
	// stb r11,100(r31)
	REX_STORE_U8(r31.u32 + 100, ctx.r11.u8);
loc_823367B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823367BC:
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

DEFINE_REX_FUNC(sub_8233EEA0) {
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
	ctx.lr = 0x8233EEBC;
	sub_8234AAC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233eed0
	if (!ctx.cr6.eq) goto loc_8233EED0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8234d050
	ctx.lr = 0x8233EED0;
	sub_8234D050(ctx, base);
loc_8233EED0:
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

DEFINE_REX_FUNC(sub_8233F818) {
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
	ctx.lr = 0x8233F834;
	sub_8235ACE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233f880
	if (!ctx.cr6.eq) goto loc_8233F880;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,220(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233f86c
	if (ctx.cr6.eq) goto loc_8233F86C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8233f86c
	if (ctx.cr6.eq) goto loc_8233F86C;
	// li r3,56
	ctx.r3.s64 = 56;
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
loc_8233F86C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233F880;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233F880:
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

DEFINE_REX_FUNC(sub_82342BB8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82342bd4
	if (!ctx.cr6.eq) goto loc_82342BD4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82342be0
	if (!ctx.cr6.eq) goto loc_82342BE0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82342BD4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82342be4
	if (ctx.cr6.eq) goto loc_82342BE4;
loc_82342BE0:
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82342BE4:
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82342c00
	if (ctx.cr6.eq) goto loc_82342C00;
	// lwz r3,252(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82342c00
	if (ctx.cr6.eq) goto loc_82342C00;
	// b 0x8239d930
	sub_8239D930(ctx, base);
	return;
loc_82342C00:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82348C30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82348C38;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r29,r3,44
	r29.s64 = ctx.r3.s64 + 44;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r4,280(r3)
	REX_STORE_U32(ctx.r3.u32 + 280, ctx.r4.u32);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// beq cr6,0x82348c70
	if (ctx.cr6.eq) goto loc_82348C70;
loc_82348C54:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,136(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// bl 0x82348c30
	ctx.lr = 0x82348C64;
	sub_82348C30(ctx, base);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bne cr6,0x82348c54
	if (!ctx.cr6.eq) goto loc_82348C54;
loc_82348C70:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8234A830) {
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
	// lwz r11,284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234a964
	if (ctx.cr6.eq) goto loc_8234A964;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82349190
	ctx.lr = 0x8234A868;
	sub_82349190(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234a974
	if (!ctx.cr6.eq) goto loc_8234A974;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82349208
	ctx.lr = 0x8234A880;
	sub_82349208(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234a974
	if (!ctx.cr6.eq) goto loc_8234A974;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234a8a4
	if (!ctx.cr6.eq) goto loc_8234A8A4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234a954
	if (!ctx.cr6.eq) goto loc_8234A954;
	// b 0x8234a974
	goto loc_8234A974;
loc_8234A8A4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8234a954
	if (!ctx.cr6.eq) goto loc_8234A954;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8234a954
	if (!ctx.cr6.eq) goto loc_8234A954;
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r10,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82349998
	ctx.lr = 0x8234A8DC;
	sub_82349998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234a974
	if (!ctx.cr6.eq) goto loc_8234A974;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82349aa8
	ctx.lr = 0x8234A8FC;
	sub_82349AA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234a974
	if (!ctx.cr6.eq) goto loc_8234A974;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82349ca8
	ctx.lr = 0x8234A918;
	sub_82349CA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234a974
	if (!ctx.cr6.eq) goto loc_8234A974;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8234a328
	ctx.lr = 0x8234A93C;
	sub_8234A328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234a974
	if (!ctx.cr6.eq) goto loc_8234A974;
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// rlwinm r10,r11,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r10,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r10.u32);
	// b 0x8234a974
	goto loc_8234A974;
loc_8234A954:
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r10,r11,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r10,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r10.u32);
loc_8234A964:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82349ca8
	ctx.lr = 0x8234A974;
	sub_82349CA8(ctx, base);
loc_8234A974:
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

DEFINE_REX_FUNC(sub_823520D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823520E0;
	// rlwinm r11,r4,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// li r29,0
	r29.s64 = 0;
	// neg r31,r4
	r31.s64 = static_cast<int64_t>(-ctx.r4.u64);
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82352100
	if (!ctx.cr6.eq) goto loc_82352100;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// b 0x8235215c
	goto loc_8235215C;
loc_82352100:
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// ble cr6,0x82352110
	if (!ctx.cr6.gt) goto loc_82352110;
	// li r6,31
	ctx.r6.s64 = 31;
	// b 0x8235215c
	goto loc_8235215C;
loc_82352110:
	// addi r10,r11,-256
	ctx.r10.s64 = ctx.r11.s64 + -256;
	// rlwinm r10,r10,16,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x8;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// addi r9,r11,-4096
	ctx.r9.s64 = ctx.r11.s64 + -4096;
	// rlwinm r9,r9,16,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x4;
	// slw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// addi r8,r11,-16384
	ctx.r8.s64 = ctx.r11.s64 + -16384;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r7,r8,16,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x2;
	// slw r6,r11,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r5,r6,17,15,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 17) & 0x1FFFF;
	// subf r11,r7,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r9,r4,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8235215C:
	// addi r11,r6,75
	ctx.r11.s64 = ctx.r6.s64 + 75;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352200
	if (ctx.cr6.eq) goto loc_82352200;
	// cmplwi cr6,r6,31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 31, ctx.xer);
	// bne cr6,0x82352180
	if (!ctx.cr6.eq) goto loc_82352180;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// b 0x82352188
	goto loc_82352188;
loc_82352180:
	// rlwinm r10,r6,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// subfic r10,r10,25
	ctx.xer.ca = ctx.r10.u32 <= 25;
	ctx.r10.u64 = static_cast<uint64_t>(25) - ctx.r10.u64;
loc_82352188:
	// slw r8,r4,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r10.u8 & 0x3F));
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
loc_82352190:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r10,r4,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r4.u64;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bge cr6,0x823521b4
	if (!ctx.cr6.lt) goto loc_823521B4;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823521f0
	if (ctx.cr6.eq) goto loc_823521F0;
loc_823521B4:
	// rlwinm r9,r8,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// beq cr6,0x823521dc
	if (ctx.cr6.eq) goto loc_823521DC;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823521dc
	if (ctx.cr6.eq) goto loc_823521DC;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_823521DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823521ec
	if (ctx.cr6.eq) goto loc_823521EC;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82352190
	goto loc_82352190;
loc_823521EC:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_823521F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82352278
	if (!ctx.cr6.eq) goto loc_82352278;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823522bc
	if (!ctx.cr6.eq) goto loc_823522BC;
loc_82352200:
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// slw r8,r10,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r6.u8 & 0x3F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// and r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 & ctx.r9.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82352270
	if (ctx.cr6.eq) goto loc_82352270;
	// neg r11,r10
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,20,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x10;
	// srw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r9,27,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x8;
	// srw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// rlwinm r9,r8,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r7,31,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x2;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srw r6,r7,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r11.u8 & 0x3F));
	// rlwinm r10,r6,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// srw r9,r6,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r11,75
	ctx.r5.s64 = ctx.r11.s64 + 75;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
loc_82352270:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823522b4
	if (ctx.cr6.eq) goto loc_823522B4;
loc_82352278:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r10,r4,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r4.u64;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bge cr6,0x82352294
	if (!ctx.cr6.lt) goto loc_82352294;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_82352294:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823522a8
	if (ctx.cr6.eq) goto loc_823522A8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x823522ac
	goto loc_823522AC;
loc_823522A8:
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
loc_823522AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82352278
	if (!ctx.cr6.eq) goto loc_82352278;
loc_823522B4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82352664
	if (ctx.cr6.eq) goto loc_82352664;
loc_823522BC:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// subf r10,r4,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r4.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82352664
	if (!ctx.cr6.lt) goto loc_82352664;
	// lwz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82352664
	if (ctx.cr6.lt) goto loc_82352664;
	// add r7,r30,r4
	ctx.r7.u64 = r30.u64 + ctx.r4.u64;
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82352664
	if (!ctx.cr6.lt) goto loc_82352664;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r6,24(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x8235230c
	if (ctx.cr6.eq) goto loc_8235230C;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82352364
	if (ctx.cr6.lt) goto loc_82352364;
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x82352364
	goto loc_82352364;
loc_8235230C:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r9,r30,20
	ctx.r9.s64 = r30.s64 + 20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235232c
	if (!ctx.cr6.eq) goto loc_8235232C;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r9,r30,16
	ctx.r9.s64 = r30.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352364
	if (ctx.cr6.eq) goto loc_82352364;
loc_8235232C:
	// lwz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8235234c
	if (!ctx.cr6.eq) goto loc_8235234C;
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82352358
	if (ctx.cr6.eq) goto loc_82352358;
loc_8235234C:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// b 0x8235232c
	goto loc_8235232C;
loc_82352358:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82352364
	if (ctx.cr6.lt) goto loc_82352364;
	// stw r29,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r29.u32);
loc_82352364:
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82352428
	if (ctx.cr6.eq) goto loc_82352428;
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// addi r10,r10,75
	ctx.r10.s64 = ctx.r10.s64 + 75;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823523ac
	if (!ctx.cr6.eq) goto loc_823523AC;
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823523d8
	if (!ctx.cr6.eq) goto loc_823523D8;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// slw r9,r5,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// andc r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// b 0x82352428
	goto loc_82352428;
loc_823523AC:
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823523d0
	if (ctx.cr6.lt) goto loc_823523D0;
	// lwz r10,16(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// bne cr6,0x823523cc
	if (!ctx.cr6.eq) goto loc_823523CC;
	// stw r11,16(r6)
	REX_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// b 0x823523d0
	goto loc_823523D0;
loc_823523CC:
	// stw r11,20(r6)
	REX_STORE_U32(ctx.r6.u32 + 20, ctx.r11.u32);
loc_823523D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352428
	if (ctx.cr6.eq) goto loc_82352428;
loc_823523D8:
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82352428
	if (ctx.cr6.lt) goto loc_82352428;
	// stw r6,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82352408
	if (ctx.cr6.eq) goto loc_82352408;
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82352408
	if (ctx.cr6.lt) goto loc_82352408;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
loc_82352408:
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82352428
	if (ctx.cr6.eq) goto loc_82352428;
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82352428
	if (ctx.cr6.lt) goto loc_82352428;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
loc_82352428:
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(r31.u32, 16, ctx.xer);
	// bge cr6,0x8235245c
	if (!ctx.cr6.lt) goto loc_8235245C;
	// add r11,r31,r30
	ctx.r11.u64 = r31.u64 + r30.u64;
	// add r10,r31,r4
	ctx.r10.u64 = r31.u64 + ctx.r4.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// ori r9,r10,3
	ctx.r9.u64 = ctx.r10.u64 | 3;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 | 1;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// b 0x826a1d0c
	return;
loc_8235245C:
	// ori r10,r4,3
	ctx.r10.u64 = ctx.r4.u64 | 3;
	// ori r9,r31,1
	ctx.r9.u64 = r31.u64 | 1;
	// rlwinm r11,r31,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// stw r9,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// stwx r31,r7,r31
	REX_STORE_U32(ctx.r7.u32 + r31.u32, r31.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x823524ec
	if (!ctx.cr6.lt) goto loc_823524EC;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 + ctx.r3.u64;
	// slw r9,r5,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r8,36
	ctx.r11.s64 = ctx.r8.s64 + 36;
	// and r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 & ctx.r9.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x823524c0
	if (!ctx.cr6.eq) goto loc_823524C0;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// stw r11,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// stw r11,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// b 0x826a1d0c
	return;
loc_823524C0:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823524d4
	if (ctx.cr6.lt) goto loc_823524D4;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_823524D4:
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// stw r7,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r7.u32);
	// stw r8,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r8.u32);
	// stw r11,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// b 0x826a1d0c
	return;
loc_823524EC:
	// rlwinm r11,r31,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 24) & 0xFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82352500
	if (!ctx.cr6.eq) goto loc_82352500;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// b 0x8235255c
	goto loc_8235255C;
loc_82352500:
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// ble cr6,0x82352510
	if (!ctx.cr6.gt) goto loc_82352510;
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x8235255c
	goto loc_8235255C;
loc_82352510:
	// addi r10,r11,-256
	ctx.r10.s64 = ctx.r11.s64 + -256;
	// rlwinm r10,r10,16,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x8;
	// slw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// addi r8,r9,-4096
	ctx.r8.s64 = ctx.r9.s64 + -4096;
	// rlwinm r11,r8,16,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x4;
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// addi r6,r9,-16384
	ctx.r6.s64 = ctx.r9.s64 + -16384;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r6,16,30,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0x2;
	// slw r10,r9,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r4.u8 & 0x3F));
	// rlwinm r9,r10,17,15,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1FFFF;
	// subf r8,r4,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r4.u64;
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// addi r6,r11,7
	ctx.r6.s64 = ctx.r11.s64 + 7;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r4,r31,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8235255C:
	// stw r11,28(r7)
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r11.u32);
	// addi r9,r11,75
	ctx.r9.s64 = ctx.r11.s64 + 75;
	// stw r29,20(r7)
	REX_STORE_U32(ctx.r7.u32 + 20, r29.u32);
	// slw r10,r5,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,16(r7)
	REX_STORE_U32(ctx.r7.u32 + 16, r29.u32);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// and r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x823525a8
	if (!ctx.cr6.eq) goto loc_823525A8;
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// stw r7,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r8,24(r7)
	REX_STORE_U32(ctx.r7.u32 + 24, ctx.r8.u32);
	// stw r7,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r7.u32);
	// stw r7,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
	// b 0x826a1d0c
	return;
loc_823525A8:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bne cr6,0x823525bc
	if (!ctx.cr6.eq) goto loc_823525BC;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// b 0x823525c4
	goto loc_823525C4;
loc_823525BC:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// subfic r11,r11,25
	ctx.xer.ca = ctx.r11.u32 <= 25;
	ctx.r11.u64 = static_cast<uint64_t>(25) - ctx.r11.u64;
loc_823525C4:
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// slw r9,r31,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r6,r8,0,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r31.u32, ctx.xer);
	// beq cr6,0x8235260c
	if (ctx.cr6.eq) goto loc_8235260C;
loc_823525D8:
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352640
	if (ctx.cr6.eq) goto loc_82352640;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r6,r8,0,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r31.u32, ctx.xer);
	// bne cr6,0x823525d8
	if (!ctx.cr6.eq) goto loc_823525D8;
loc_8235260C:
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82352638
	if (ctx.cr6.lt) goto loc_82352638;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82352638
	if (ctx.cr6.lt) goto loc_82352638;
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// stw r10,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// stw r29,24(r7)
	REX_STORE_U32(ctx.r7.u32 + 24, r29.u32);
loc_82352638:
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// b 0x826a1d0c
	return;
loc_82352640:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82352638
	if (ctx.cr6.lt) goto loc_82352638;
	// stw r7,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// stw r10,24(r7)
	REX_STORE_U32(ctx.r7.u32 + 24, ctx.r10.u32);
	// stw r7,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r7.u32);
	// stw r7,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
	// b 0x826a1d0c
	return;
loc_82352664:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82387D18) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82387D20;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,480(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 480);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,464(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 464);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82387d50
	if (!ctx.cr0.eq) goto loc_82387D50;
	// lbz r11,460(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 460);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,460(r5)
	REX_STORE_U8(ctx.r5.u32 + 460, ctx.r10.u8);
loc_82387D50:
	// lbz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 460);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82387d74
	if (ctx.cr6.eq) goto loc_82387D74;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823c8798
	ctx.lr = 0x82387D74;
	sub_823C8798(ctx, base);
loc_82387D74:
	// lbz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 460);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82387e18
	if (ctx.cr6.eq) goto loc_82387E18;
	// lwz r10,476(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 476);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// lfs f13,624(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,572(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 572);
	// li r5,0
	ctx.r5.s64 = 0;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,2156(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 2156);
	// extsw r4,r8
	ctx.r4.s64 = ctx.r8.s32;
	// lwz r3,512(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 512);
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// lfs f0,19660(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 19660);
	ctx.f0.f64 = double(temp.f32);
	// std r4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// frsp f2,f5
	ctx.f2.f64 = double(float(ctx.f5.f64));
	// fcfid f7,f11
	ctx.f7.f64 = double(ctx.f11.s64);
	// fcfid f4,f10
	ctx.f4.f64 = double(ctx.f10.s64);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f1,f4
	ctx.f1.f64 = double(float(ctx.f4.f64));
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// fmuls f12,f3,f6
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// fmuls f11,f12,f2
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fmuls f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f1,f9,f13
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// bl 0x8234bbc8
	ctx.lr = 0x82387E18;
	sub_8234BBC8(ctx, base);
loc_82387E18:
	// lbz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 460);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82387e6c
	if (ctx.cr6.eq) goto loc_82387E6C;
	// lwz r11,472(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 472);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,2148(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 2148);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// li r5,1
	ctx.r5.s64 = 1;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f0,19036(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 19036);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfs f13,19656(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 19656);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fmuls f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f1,f7,f13
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// bl 0x8234be00
	ctx.lr = 0x82387E6C;
	sub_8234BE00(ctx, base);
loc_82387E6C:
	// lbz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 460);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82387f28
	if (ctx.cr6.eq) goto loc_82387F28;
	// lwz r10,464(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 464);
	// lwz r11,480(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 480);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x82387e94
	if (!ctx.cr6.lt) goto loc_82387E94;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82387E94:
	// lhz r10,2162(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 2162);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82387efc
	if (ctx.cr6.eq) goto loc_82387EFC;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,19652(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 19652);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,19648(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 19648);
	ctx.f13.f64 = double(temp.f32);
	// lfd f1,8312(r9)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r9.u32 + 8312);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmuls f2,f11,f13
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// bl 0x8269f778
	ctx.lr = 0x82387EDC;
	sub_8269F778(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,19432(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 19432);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82387f0c
	goto loc_82387F0C;
loc_82387EFC:
	// lis r10,218
	ctx.r10.s64 = 14286848;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// ori r9,r10,30208
	ctx.r9.u64 = ctx.r10.u64 | 30208;
	// divw r11,r9,r11
	ctx.r11.u64 = uint32_t((ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0);
loc_82387F0C:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x8234e480
	ctx.lr = 0x82387F28;
	sub_8234E480(ctx, base);
loc_82387F28:
	// lbz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 460);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82387f58
	if (ctx.cr6.eq) goto loc_82387F58;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x8234f290
	ctx.lr = 0x82387F44;
	sub_8234F290(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,20(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 20);
	// bl 0x82334ca0
	ctx.lr = 0x82387F50;
	sub_82334CA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,488(r31)
	REX_STORE_U32(r31.u32 + 488, ctx.r11.u32);
loc_82387F58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8239ECC8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,220(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8239ece8
	if (ctx.cr6.eq) goto loc_8239ECE8;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x8239ece8
	if (ctx.cr6.eq) goto loc_8239ECE8;
	// li r3,56
	ctx.r3.s64 = 56;
	// blr 
	return;
loc_8239ECE8:
	// stw r4,304(r11)
	REX_STORE_U32(ctx.r11.u32 + 304, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823A02A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823A02A8;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823a02f8
	if (!ctx.cr6.gt) goto loc_823A02F8;
	// addi r30,r29,124
	r30.s64 = r29.s64 + 124;
loc_823A02D0:
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A02E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,124(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 124);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823a02d0
	if (ctx.cr6.lt) goto loc_823A02D0;
loc_823A02F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823A18D0) {
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
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a1900
	if (ctx.cr6.eq) goto loc_823A1900;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823a1994
	goto loc_823A1994;
loc_823A1900:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,21428
	ctx.r5.s64 = ctx.r10.s64 + 21428;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,21
	ctx.r6.s64 = 21;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82330a38
	ctx.lr = 0x823A1920;
	sub_82330A38(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a1944
	if (ctx.cr6.eq) goto loc_823A1944;
	// bl 0x8235eb68
	ctx.lr = 0x823A1930;
	sub_8235EB68(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// addi r9,r11,21416
	ctx.r9.s64 = ctx.r11.s64 + 21416;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// b 0x823a1948
	goto loc_823A1948;
loc_823A1944:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823A1948:
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// stw r10,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823a1968
	if (!ctx.cr6.eq) goto loc_823A1968;
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x823a1994
	goto loc_823A1994;
loc_823A1968:
	// lwz r3,88(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A197C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a1994
	if (!ctx.cr6.eq) goto loc_823A1994;
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// lwz r4,88(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r3,84(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x8235e3c0
	ctx.lr = 0x823A1994;
	sub_8235E3C0(ctx, base);
loc_823A1994:
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

DEFINE_REX_FUNC(sub_823A8D28) {
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
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823a8e78
	if (!ctx.cr6.eq) goto loc_823A8E78;
	// lfs f12,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// ori r11,r11,68
	ctx.r11.u64 = ctx.r11.u64 | 68;
	// lfs f11,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f9,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stw r11,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// fsubs f13,f10,f9
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f8,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x823a8d80
	if (ctx.cr6.gt) goto loc_823A8D80;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823A8D80:
	// fcmpu cr6,f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// bgt cr6,0x823a8d8c
	if (ctx.cr6.gt) goto loc_823A8D8C;
	// fmr f0,f6
	ctx.f0.f64 = ctx.f6.f64;
loc_823A8D8C:
	// lfs f13,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f5,f11,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// li r9,32
	ctx.r9.s64 = 32;
	// fadds f4,f9,f10
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// li r8,36
	ctx.r8.s64 = 36;
	// fadds f3,f7,f8
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// li r7,40
	ctx.r7.s64 = 40;
	// lfs f0,21716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 21716);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3720(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f6,f0
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f1,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r4,r6,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r11,r6,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// or r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 | ctx.r4.u64;
	// rlwinm r4,r10,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// or r11,r4,r10
	ctx.r11.u64 = ctx.r4.u64 | ctx.r10.u64;
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// or r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r11,r4,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// or r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 | ctx.r4.u64;
	// rlwinm r4,r10,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// or r11,r4,r10
	ctx.r11.u64 = ctx.r4.u64 | ctx.r10.u64;
	// andc r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 & ~ctx.r11.u64;
	// stw r10,28(r5)
	REX_STORE_U32(ctx.r5.u32 + 28, ctx.r10.u32);
	// lfs f12,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmsubs f10,f5,f13,f11
	ctx.f10.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, -ctx.f11.f64)));
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmadds f8,f9,f0,f0
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f0.f64)));
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f7,r5,r9
	REX_STORE_U32(ctx.r5.u32 + ctx.r9.u32, ctx.f7.u32);
	// lfs f6,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmsubs f4,f4,f13,f5
	ctx.f4.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, -ctx.f5.f64)));
	// fmuls f2,f4,f6
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fmadds f1,f2,f0,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f0.f64, ctx.f0.f64)));
	// fctiwz f12,f1
	ctx.f12.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f12,r5,r8
	REX_STORE_U32(ctx.r5.u32 + ctx.r8.u32, ctx.f12.u32);
	// lfs f11,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmsubs f9,f3,f13,f10
	ctx.f9.f64 = double(float(std::fma(ctx.f3.f64, ctx.f13.f64, -ctx.f10.f64)));
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmadds f7,f8,f0,f0
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f0.f64)));
	// fctiwz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfiwx f6,r5,r7
	REX_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.f6.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823a8e74
	if (!ctx.cr6.eq) goto loc_823A8E74;
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823A8E74:
	// bl 0x823a8818
	ctx.lr = 0x823A8E78;
	sub_823A8818(ctx, base);
loc_823A8E78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823BBCE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823BBCE8;
	// fmuls f12,f1,f5
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f5.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmuls f13,f3,f5
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// stfs f1,756(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 756, temp.u32);
	// fmuls f11,f1,f2
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// lwz r11,956(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 956);
	// stfs f11,760(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 760, temp.u32);
	// lwz r9,960(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 960);
	// lwz r6,924(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 924);
	// lfd f0,32424(r8)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 32424);
	// lwz r10,964(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 964);
	// lwz r5,928(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 928);
	// lwz r4,932(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 932);
	// fadd f8,f12,f0
	ctx.f8.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fadd f9,f13,f0
	ctx.f9.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fmuls f10,f13,f4
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmuls f6,f11,f5
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f7,f11,f2
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// stfs f7,764(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 764, temp.u32);
	// fctiwz f12,f8
	ctx.f12.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// li r12,788
	ctx.r12.s64 = 788;
	// stfiwx f12,r3,r12
	REX_STORE_U32(ctx.r3.u32 + ctx.r12.u32, ctx.f12.u32);
	// fctiwz f13,f9
	ctx.f13.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// li r12,852
	ctx.r12.s64 = 852;
	// stfiwx f13,r3,r12
	REX_STORE_U32(ctx.r3.u32 + ctx.r12.u32, ctx.f13.u32);
	// lwz r7,852(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 852);
	// fmuls f3,f10,f4
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fadd f1,f10,f0
	ctx.f1.f64 = ctx.f10.f64 + ctx.f0.f64;
	// lwz r8,788(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 788);
	// fadd f10,f6,f0
	ctx.f10.f64 = ctx.f6.f64 + ctx.f0.f64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// fctiwz f6,f10
	ctx.f6.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// li r12,792
	ctx.r12.s64 = 792;
	// stfiwx f6,r3,r12
	REX_STORE_U32(ctx.r3.u32 + ctx.r12.u32, ctx.f6.u32);
	// fctiwz f1,f1
	ctx.f1.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// li r12,856
	ctx.r12.s64 = 856;
	// stfiwx f1,r3,r12
	REX_STORE_U32(ctx.r3.u32 + ctx.r12.u32, ctx.f1.u32);
	// lwz r8,856(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 856);
	// fmuls f11,f7,f5
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// addi r31,r11,-1
	r31.s64 = ctx.r11.s64 + -1;
	// lwz r11,792(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 792);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// fadd f8,f3,f0
	ctx.f8.f64 = ctx.f3.f64 + ctx.f0.f64;
	// fadd f9,f11,f0
	ctx.f9.f64 = ctx.f11.f64 + ctx.f0.f64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// and r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 & ctx.r6.u64;
	// fmuls f11,f7,f2
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// fctiwz f12,f8
	ctx.f12.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// fmuls f10,f3,f4
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
	// and r6,r31,r6
	ctx.r6.u64 = r31.u64 & ctx.r6.u64;
	// stw r8,988(r3)
	REX_STORE_U32(ctx.r3.u32 + 988, ctx.r8.u32);
	// and r31,r30,r5
	r31.u64 = r30.u64 & ctx.r5.u64;
	// stfs f11,768(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 768, temp.u32);
	// and r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 & ctx.r5.u64;
	// stw r6,1052(r3)
	REX_STORE_U32(ctx.r3.u32 + 1052, ctx.r6.u32);
	// stw r31,992(r3)
	REX_STORE_U32(ctx.r3.u32 + 992, r31.u32);
	// stw r5,1056(r3)
	REX_STORE_U32(ctx.r3.u32 + 1056, ctx.r5.u32);
	// fctiwz f13,f9
	ctx.f13.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// li r12,796
	ctx.r12.s64 = 796;
	// stfiwx f13,r3,r12
	REX_STORE_U32(ctx.r3.u32 + ctx.r12.u32, ctx.f13.u32);
	// lwz r9,796(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 796);
	// fmuls f9,f11,f5
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f8,f11,f2
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// li r12,860
	ctx.r12.s64 = 860;
	// stfiwx f12,r3,r12
	REX_STORE_U32(ctx.r3.u32 + ctx.r12.u32, ctx.f12.u32);
	// lwz r11,860(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 860);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fadd f3,f9,f0
	ctx.f3.f64 = ctx.f9.f64 + ctx.f0.f64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// lwz r11,968(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 968);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// lwz r9,972(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 972);
	// and r8,r29,r4
	ctx.r8.u64 = r29.u64 & ctx.r4.u64;
	// stfs f8,772(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 772, temp.u32);
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	// fmuls f7,f10,f4
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fadd f6,f10,f0
	ctx.f6.f64 = ctx.f10.f64 + ctx.f0.f64;
	// stw r8,1060(r3)
	REX_STORE_U32(ctx.r3.u32 + 1060, ctx.r8.u32);
	// stw r10,996(r3)
	REX_STORE_U32(ctx.r3.u32 + 996, ctx.r10.u32);
	// fmuls f1,f8,f2
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// fmuls f13,f8,f5
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fctiwz f12,f3
	ctx.f12.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// fadd f11,f13,f0
	ctx.f11.f64 = ctx.f13.f64 + ctx.f0.f64;
	// li r12,800
	ctx.r12.s64 = 800;
	// stfiwx f12,r3,r12
	REX_STORE_U32(ctx.r3.u32 + ctx.r12.u32, ctx.f12.u32);
	// fadd f10,f7,f0
	ctx.f10.f64 = ctx.f7.f64 + ctx.f0.f64;
	// lwz r8,800(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 800);
	// fctiwz f9,f6
	ctx.f9.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// li r12,864
	ctx.r12.s64 = 864;
	// stfiwx f9,r3,r12
	REX_STORE_U32(ctx.r3.u32 + ctx.r12.u32, ctx.f9.u32);
	// fmuls f8,f1,f5
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f5.f64));
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// fctiwz f13,f11
	ctx.f13.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// li r12,804
	ctx.r12.s64 = 804;
	// stfiwx f13,r3,r12
	REX_STORE_U32(ctx.r3.u32 + ctx.r12.u32, ctx.f13.u32);
	// fctiwz f12,f10
	ctx.f12.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// li r12,868
	ctx.r12.s64 = 868;
	// stfiwx f12,r3,r12
	REX_STORE_U32(ctx.r3.u32 + ctx.r12.u32, ctx.f12.u32);
	// lwz r6,868(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 868);
	// fadd f11,f8,f0
	ctx.f11.f64 = ctx.f8.f64 + ctx.f0.f64;
	// addi r5,r7,-1
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// lwz r7,864(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 864);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// fmuls f6,f1,f2
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwz r11,804(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 804);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// fctiwz f9,f11
	ctx.f9.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// li r12,808
	ctx.r12.s64 = 808;
	// stfiwx f9,r3,r12
	REX_STORE_U32(ctx.r3.u32 + ctx.r12.u32, ctx.f9.u32);
	// fmuls f3,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// stfs f1,776(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 776, temp.u32);
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// lwz r9,808(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 808);
	// fmuls f10,f6,f2
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// lwz r31,940(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 940);
	// fmuls f7,f6,f5
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r7,936(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 936);
	// stfs f10,784(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 784, temp.u32);
	// lwz r10,976(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 976);
	// and r28,r11,r31
	r28.u64 = ctx.r11.u64 & r31.u64;
	// and r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 & ctx.r7.u64;
	// lwz r8,980(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 980);
	// lwz r30,944(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 944);
	// and r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 & ctx.r7.u64;
	// stw r5,1000(r3)
	REX_STORE_U32(ctx.r3.u32 + 1000, ctx.r5.u32);
	// and r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 & r31.u64;
	// stw r4,1064(r3)
	REX_STORE_U32(ctx.r3.u32 + 1064, ctx.r4.u32);
	// stfs f6,780(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 780, temp.u32);
	// fmuls f8,f3,f4
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// lwz r29,948(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 948);
	// fadd f3,f3,f0
	ctx.f3.f64 = ctx.f3.f64 + ctx.f0.f64;
	// lwz r7,984(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 984);
	// fmuls f2,f10,f5
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// lwz r31,952(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 952);
	// fadd f12,f7,f0
	ctx.f12.f64 = ctx.f7.f64 + ctx.f0.f64;
	// stw r28,1004(r3)
	REX_STORE_U32(ctx.r3.u32 + 1004, r28.u32);
	// stw r6,1068(r3)
	REX_STORE_U32(ctx.r3.u32 + 1068, ctx.r6.u32);
	// fmuls f1,f8,f4
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fadd f13,f8,f0
	ctx.f13.f64 = ctx.f8.f64 + ctx.f0.f64;
	// fctiwz f11,f3
	ctx.f11.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// li r12,872
	ctx.r12.s64 = 872;
	// stfiwx f11,r3,r12
	REX_STORE_U32(ctx.r3.u32 + ctx.r12.u32, ctx.f11.u32);
	// lwz r11,872(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 872);
	// fadd f9,f2,f0
	ctx.f9.f64 = ctx.f2.f64 + ctx.f0.f64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fctiwz f10,f12
	ctx.f10.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// fadd f8,f1,f0
	ctx.f8.f64 = ctx.f1.f64 + ctx.f0.f64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// li r12,812
	ctx.r12.s64 = 812;
	// stfiwx f10,r3,r12
	REX_STORE_U32(ctx.r3.u32 + ctx.r12.u32, ctx.f10.u32);
	// lwz r11,812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 812);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// fctiwz f7,f13
	ctx.f7.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// and r9,r5,r30
	ctx.r9.u64 = ctx.r5.u64 & r30.u64;
	// stfd f7,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f7.u64);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwz r11,-60(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// and r5,r10,r30
	ctx.r5.u64 = ctx.r10.u64 & r30.u64;
	// fctiwz f6,f9
	ctx.f6.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// fctiwz f5,f8
	ctx.f5.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f6,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f6.u64);
	// stfd f5,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f5.u64);
	// and r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 & r29.u64;
	// stw r5,1008(r3)
	REX_STORE_U32(ctx.r3.u32 + 1008, ctx.r5.u32);
	// stw r9,1072(r3)
	REX_STORE_U32(ctx.r3.u32 + 1072, ctx.r9.u32);
	// lwz r10,-60(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r9,-52(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// add r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r11,876(r3)
	REX_STORE_U32(ctx.r3.u32 + 876, ctx.r11.u32);
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r4,1012(r3)
	REX_STORE_U32(ctx.r3.u32 + 1012, ctx.r4.u32);
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// addi r7,r5,-1
	ctx.r7.s64 = ctx.r5.s64 + -1;
	// stw r10,816(r3)
	REX_STORE_U32(ctx.r3.u32 + 816, ctx.r10.u32);
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// stw r9,880(r3)
	REX_STORE_U32(ctx.r3.u32 + 880, ctx.r9.u32);
	// and r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 & r29.u64;
	// and r4,r7,r31
	ctx.r4.u64 = ctx.r7.u64 & r31.u64;
	// and r11,r6,r31
	ctx.r11.u64 = ctx.r6.u64 & r31.u64;
	// stw r5,1076(r3)
	REX_STORE_U32(ctx.r3.u32 + 1076, ctx.r5.u32);
	// stw r4,1016(r3)
	REX_STORE_U32(ctx.r3.u32 + 1016, ctx.r4.u32);
	// stw r11,1080(r3)
	REX_STORE_U32(ctx.r3.u32 + 1080, ctx.r11.u32);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823D01B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823D01C0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823d0268
	if (ctx.cr6.eq) goto loc_823D0268;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d0230
	if (ctx.cr6.eq) goto loc_823D0230;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823d0224
	if (!ctx.cr6.gt) goto loc_823D0224;
	// li r31,0
	r31.s64 = 0;
loc_823D01F4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d0210
	if (ctx.cr6.eq) goto loc_823D0210;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82393bf0
	ctx.lr = 0x823D0210;
	sub_82393BF0(ctx, base);
loc_823D0210:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823d01f4
	if (ctx.cr6.lt) goto loc_823D01F4;
loc_823D0224:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82393bf0
	ctx.lr = 0x823D0230;
	sub_82393BF0(ctx, base);
loc_823D0230:
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823d0244
	if (ctx.cr6.eq) goto loc_823D0244;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82393bf0
	ctx.lr = 0x823D0244;
	sub_82393BF0(ctx, base);
loc_823D0244:
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823d0258
	if (ctx.cr6.eq) goto loc_823D0258;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82393bf0
	ctx.lr = 0x823D0258;
	sub_82393BF0(ctx, base);
loc_823D0258:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823D0268;
	sub_823EF5F0(ctx, base);
loc_823D0268:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823D54F8) {
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
	// stfs f1,0(r5)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lfs f0,25704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 25704);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x823d5534
	if (ctx.cr6.lt) goto loc_823D5534;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,25700(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 25700);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x823d5538
	if (!ctx.cr6.gt) goto loc_823D5538;
loc_823D5534:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_823D5538:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-28496(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -28496);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x826a15c0
	ctx.lr = 0x823D554C;
	sub_826A15C0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x826a14e0
	ctx.lr = 0x823D555C;
	sub_826A14E0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
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

DEFINE_REX_FUNC(sub_823D8A70) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb8
	ctx.lr = 0x823D8A78;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2c94
	ctx.lr = 0x823D8A80;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r5,62
	ctx.r5.s64 = 62;
	// addi r4,r11,-31680
	ctx.r4.s64 = ctx.r11.s64 + -31680;
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82331180
	ctx.lr = 0x823D8AA4;
	sub_82331180(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d8bac
	if (ctx.cr6.eq) goto loc_823D8BAC;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x823d8bac
	if (!ctx.cr6.gt) goto loc_823D8BAC;
	// extsw r11,r28
	ctx.r11.s64 = r28.s32;
	// extsw r10,r31
	ctx.r10.s64 = r31.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f0,3804(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3804);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// frsp f23,f9
	f23.f64 = double(float(ctx.f9.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,3704(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfd f24,-5464(r11)
	f24.u64 = REX_LOAD_U64(ctx.r11.u32 + -5464);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfd f25,-5472(r10)
	f25.u64 = REX_LOAD_U64(ctx.r10.u32 + -5472);
	// lfd f26,-5480(r9)
	f26.u64 = REX_LOAD_U64(ctx.r9.u32 + -5480);
	// li r30,0
	r30.s64 = 0;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfd f31,3728(r7)
	f31.u64 = REX_LOAD_U64(ctx.r7.u32 + 3728);
	// lfd f27,-5488(r8)
	f27.u64 = REX_LOAD_U64(ctx.r8.u32 + -5488);
	// addi r29,r3,-4
	r29.s64 = ctx.r3.s64 + -4;
	// lfd f28,-5496(r6)
	f28.u64 = REX_LOAD_U64(ctx.r6.u32 + -5496);
	// lfd f29,-5504(r5)
	f29.u64 = REX_LOAD_U64(ctx.r5.u32 + -5504);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fdivs f30,f13,f8
	f30.f64 = double(float(ctx.f13.f64 / ctx.f8.f64));
loc_823D8B38:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// fmr f1,f24
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f24.f64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f30
	ctx.f0.f64 = double(float(ctx.f12.f64 * f30.f64));
	// fmul f10,f0,f0
	ctx.f10.f64 = ctx.f0.f64 * ctx.f0.f64;
	// fmul f6,f0,f0
	ctx.f6.f64 = ctx.f0.f64 * ctx.f0.f64;
	// fmul f8,f0,f29
	ctx.f8.f64 = ctx.f0.f64 * f29.f64;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// fmul f7,f10,f0
	ctx.f7.f64 = ctx.f10.f64 * ctx.f0.f64;
	// fmadd f4,f6,f27,f31
	ctx.f4.f64 = std::fma(ctx.f6.f64, f27.f64, f31.f64);
	// fmul f5,f7,f0
	ctx.f5.f64 = ctx.f7.f64 * ctx.f0.f64;
	// fdiv f2,f26,f4
	ctx.f2.f64 = f26.f64 / ctx.f4.f64;
	// fmadd f3,f5,f28,f31
	ctx.f3.f64 = std::fma(ctx.f5.f64, f28.f64, f31.f64);
	// fdiv f0,f8,f3
	ctx.f0.f64 = ctx.f8.f64 / ctx.f3.f64;
	// fadd f13,f2,f0
	ctx.f13.f64 = ctx.f2.f64 + ctx.f0.f64;
	// fadd f12,f13,f25
	ctx.f12.f64 = ctx.f13.f64 + f25.f64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f23
	ctx.f10.f64 = double(float(ctx.f11.f64 * f23.f64));
	// fmuls f2,f10,f30
	ctx.f2.f64 = double(float(ctx.f10.f64 * f30.f64));
	// bl 0x8269f778
	ctx.lr = 0x823D8B98;
	sub_8269F778(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfsu f9,4(r29)
	ea = 4 + r29.u32;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ea, temp.u32);
	r29.u32 = ea;
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// bne 0x823d8b38
	if (!ctx.cr0.eq) goto loc_823D8B38;
loc_823D8BAC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2ce0
	ctx.lr = 0x823D8BB8;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823E06A0) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r3,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_823E06B0:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823e06b0
	if (!ctx.cr6.eq) goto loc_823E06B0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E0CB0) {
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
	ctx.lr = 0x823E0CB8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r5)
	r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r22,8(r5)
	r22.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r26,12(r5)
	r26.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// li r19,0
	r19.s64 = 0;
	// lbz r11,13(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 13);
	// mr r25,r19
	r25.u64 = r19.u64;
	// lbz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 12);
	// rldicr r9,r11,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,11(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 11);
	// lbz r11,21(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 21);
	// or r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lbz r7,10(r30)
	ctx.r7.u64 = REX_LOAD_U8(r30.u32 + 10);
	// lbz r4,17(r30)
	ctx.r4.u64 = REX_LOAD_U8(r30.u32 + 17);
	// rldicr r3,r6,8,55
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lbz r6,16(r30)
	ctx.r6.u64 = REX_LOAD_U8(r30.u32 + 16);
	// rotlwi r9,r4,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// lbz r5,9(r30)
	ctx.r5.u64 = REX_LOAD_U8(r30.u32 + 9);
	// or r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 | ctx.r8.u64;
	// lbz r4,20(r30)
	ctx.r4.u64 = REX_LOAD_U8(r30.u32 + 20);
	// rotlwi r3,r11,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 8);
	// rldicr r11,r8,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lbz r8,7(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 7);
	// or r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 | ctx.r6.u64;
	// lbz r9,15(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 15);
	// or r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 | ctx.r7.u64;
	// lbz r11,19(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 19);
	// or r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 | ctx.r4.u64;
	// lbz r3,5(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 5);
	// rldicr r7,r7,8,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lbz r29,6(r30)
	r29.u64 = REX_LOAD_U8(r30.u32 + 6);
	// rlwinm r6,r6,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r28,14(r30)
	r28.u64 = REX_LOAD_U8(r30.u32 + 14);
	// or r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 | ctx.r5.u64;
	// lbz r7,18(r30)
	ctx.r7.u64 = REX_LOAD_U8(r30.u32 + 18);
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// lbz r27,4(r30)
	r27.u64 = REX_LOAD_U8(r30.u32 + 4);
	// rldicr r5,r5,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lbz r21,26(r30)
	r21.u64 = REX_LOAD_U8(r30.u32 + 26);
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// or r5,r4,r11
	ctx.r5.u64 = ctx.r4.u64 | ctx.r11.u64;
	// rldicr r4,r6,8,55
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 | ctx.r8.u64;
	// rlwinm r9,r5,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// rldicr r8,r10,8,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// clrlwi r23,r3,31
	r23.u64 = ctx.r3.u32 & 0x1;
	// rlwinm r20,r3,0,30,30
	r20.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// rlwinm r17,r3,0,29,29
	r17.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// or r18,r8,r29
	r18.u64 = ctx.r8.u64 | r29.u64;
	// or r28,r11,r28
	r28.u64 = ctx.r11.u64 | r28.u64;
	// or r16,r9,r7
	r16.u64 = ctx.r9.u64 | ctx.r7.u64;
	// beq cr6,0x823e0dac
	if (ctx.cr6.eq) goto loc_823E0DAC;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823e0db8
	if (!ctx.cr6.eq) goto loc_823E0DB8;
loc_823E0DAC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd8
	return;
loc_823E0DB8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r29,36(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e0de4
	if (ctx.cr6.eq) goto loc_823E0DE4;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf. r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r5,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r5.u32);
	// beq 0x823e0de0
	if (ctx.cr0.eq) goto loc_823E0DE0;
	// add r4,r3,r11
	ctx.r4.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bl 0x8269cc20
	ctx.lr = 0x823E0DE0;
	sub_8269CC20(ctx, base);
loc_823E0DE0:
	// stw r19,12(r31)
	REX_STORE_U32(r31.u32 + 12, r19.u32);
loc_823E0DE4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x823e0e44
	if (ctx.cr6.eq) goto loc_823E0E44;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// subf. r10,r29,r11
	ctx.r10.u64 = ctx.r11.u64 - r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823e0e28
	if (ctx.cr0.eq) goto loc_823E0E28;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x8269cc20
	ctx.lr = 0x823E0E0C;
	sub_8269CC20(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// subf r10,r29,r11
	ctx.r10.u64 = ctx.r11.u64 - r29.u64;
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8269cc20
	ctx.lr = 0x823E0E28;
	sub_8269CC20(ctx, base);
loc_823E0E28:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// subf r9,r29,r11
	ctx.r9.u64 = ctx.r11.u64 - r29.u64;
	// stw r19,36(r31)
	REX_STORE_U32(r31.u32 + 36, r19.u32);
	// subf r8,r29,r10
	ctx.r8.u64 = ctx.r10.u64 - r29.u64;
	// stw r9,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// stw r8,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r8.u32);
loc_823E0E44:
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 336);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x823e0dac
	if (!ctx.cr6.eq) goto loc_823E0DAC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bgt cr6,0x823e0dac
	if (ctx.cr6.gt) goto loc_823E0DAC;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r29,r21,1
	r29.s64 = r21.s64 + 1;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r10,r29,r10
	ctx.r10.u64 = r29.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823e0ee4
	if (ctx.cr6.gt) goto loc_823E0EE4;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82393b68
	ctx.lr = 0x823E0E88;
	sub_82393B68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823e0ea8
	if (!ctx.cr6.eq) goto loc_823E0EA8;
loc_823E0E90:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823e0788
	ctx.lr = 0x823E0E9C;
	sub_823E0788(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd8
	return;
loc_823E0EA8:
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82393b68
	ctx.lr = 0x823E0EC8;
	sub_82393B68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e0e90
	if (ctx.cr6.eq) goto loc_823E0E90;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_823E0EE4:
	// lwz r7,340(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 340);
	// cmpw cr6,r16,r7
	ctx.cr6.compare<int32_t>(r16.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x823e0f6c
	if (ctx.cr6.eq) goto loc_823E0F6C;
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823e0f38
	if (!ctx.cr6.lt) goto loc_823E0F38;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_823E0F14:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// subf r4,r5,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r5.u64;
	// stw r4,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r4.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x823e0f14
	if (ctx.cr6.lt) goto loc_823E0F14;
loc_823E0F38:
	// stw r8,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x823e0f6c
	if (ctx.cr6.eq) goto loc_823E0F6C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1024
	ctx.r9.s64 = 1024;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r7,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r8,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r8.u32);
loc_823E0F6C:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x823e0fc8
	if (ctx.cr6.eq) goto loc_823E0FC8;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x823e0f98
	if (ctx.cr6.lt) goto loc_823E0F98;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r10,1024
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1024, ctx.xer);
	// bne cr6,0x823e0fc8
	if (!ctx.cr6.eq) goto loc_823E0FC8;
loc_823E0F98:
	// mr r20,r19
	r20.u64 = r19.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// ble cr6,0x823e0fc8
	if (!ctx.cr6.gt) goto loc_823E0FC8;
	// addi r10,r30,27
	ctx.r10.s64 = r30.s64 + 27;
loc_823E0FA8:
	// lbzx r11,r10,r25
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + r25.u32);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// add r22,r11,r22
	r22.u64 = ctx.r11.u64 + r22.u64;
	// subf r26,r11,r26
	r26.u64 = r26.u64 - ctx.r11.u64;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x823e0fc8
	if (ctx.cr6.lt) goto loc_823E0FC8;
	// cmpw cr6,r25,r21
	ctx.cr6.compare<int32_t>(r25.s32, r21.s32, ctx.xer);
	// blt cr6,0x823e0fa8
	if (ctx.cr6.lt) goto loc_823E0FA8;
loc_823E0FC8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x823e1038
	if (ctx.cr6.eq) goto loc_823E1038;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823e1014
	if (ctx.cr6.gt) goto loc_823E1014;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r5,r11,1024
	ctx.r5.s64 = ctx.r11.s64 + 1024;
	// bl 0x82393b68
	ctx.lr = 0x823E0FF8;
	sub_82393B68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e0e90
	if (ctx.cr6.eq) goto loc_823E0E90;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_823E1014:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x823E102C;
	sub_823EF2F8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_823E1038:
	// li r7,-1
	ctx.r7.s64 = -1;
	// cmpw cr6,r25,r21
	ctx.cr6.compare<int32_t>(r25.s32, r21.s32, ctx.xer);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bge cr6,0x823e10dc
	if (!ctx.cr6.lt) goto loc_823E10DC;
	// subf r11,r25,r21
	ctx.r11.u64 = r21.u64 - r25.u64;
	// addi r8,r30,27
	ctx.r8.s64 = r30.s64 + 27;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823E1054:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// lbzx r9,r8,r25
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + r25.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r5,r10
	REX_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r7,r3,r11
	REX_STORE_U64(ctx.r3.u32 + ctx.r11.u32, ctx.r7.u64);
	// beq cr6,0x823e109c
	if (ctx.cr6.eq) goto loc_823E109C;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r20,r19
	r20.u64 = r19.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// ori r4,r5,256
	ctx.r4.u64 = ctx.r5.u64 | 256;
	// stwx r4,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
loc_823E109C:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// bge cr6,0x823e10a8
	if (!ctx.cr6.lt) goto loc_823E10A8;
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 28);
loc_823E10A8:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// bge cr6,0x823e10c4
	if (!ctx.cr6.lt) goto loc_823E10C4;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_823E10C4:
	// bdnz 0x823e1054
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E1054;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// beq cr6,0x823e10dc
	if (ctx.cr6.eq) goto loc_823E10DC;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r18,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, r18.u64);
loc_823E10DC:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq cr6,0x823e1114
	if (ctx.cr6.eq) goto loc_823E1114;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r10.u32);
	// ble cr6,0x823e1114
	if (!ctx.cr6.gt) goto loc_823E1114;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// ori r9,r10,512
	ctx.r9.u64 = ctx.r10.u64 | 512;
	// stw r9,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
loc_823E1114:
	// addi r11,r16,1
	ctx.r11.s64 = r16.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_823F9478) {
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
	ctx.lr = 0x823F9480;
	// stwu r1,-3360(r1)
	ea = -3360 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2152);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// rlwinm r25,r11,3,0,28
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// cmplwi cr6,r25,800
	ctx.cr6.compare<uint32_t>(r25.u32, 800, ctx.xer);
	// blt cr6,0x823f94b8
	if (ctx.cr6.lt) goto loc_823F94B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823f9764
	goto loc_823F9764;
loc_823F94B8:
	// rlwinm r24,r11,4,0,27
	r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826a2e60
	ctx.lr = 0x823F94CC;
	sub_826A2E60(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1680
	ctx.r3.s64 = ctx.r1.s64 + 1680;
	// bl 0x826a2e60
	ctx.lr = 0x823F94DC;
	sub_826A2E60(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823f96c4
	if (ctx.cr6.eq) goto loc_823F96C4;
	// lwz r5,44(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 44);
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,40(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 40);
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lis r3,8
	ctx.r3.s64 = 524288;
loc_823F9500:
	// rlwinm r11,r26,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r10,r26,29
	ctx.r10.u64 = r26.u32 & 0x7;
	// slw r10,r4,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r10.u8 & 0x3F));
	// lbzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f9520
	if (!ctx.cr0.eq) goto loc_823F9520;
	// lbzx r11,r6,r26
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + r26.u32);
	// b 0x823f95c8
	goto loc_823F95C8;
loc_823F9520:
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lbzx r9,r6,r26
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + r26.u32);
	// cmplwi cr6,r9,7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 7, ctx.xer);
	// lwzx r11,r10,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// bge cr6,0x823f9580
	if (!ctx.cr6.lt) goto loc_823F9580;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bge cr6,0x823f954c
	if (!ctx.cr6.lt) goto loc_823F954C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1108);
	// b 0x823f9570
	goto loc_823F9570;
loc_823F954C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x823f9568
	if (!ctx.cr6.lt) goto loc_823F9568;
	// rlwinm r11,r11,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1108);
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// b 0x823f9570
	goto loc_823F9570;
loc_823F9568:
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// addi r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 34;
loc_823F9570:
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x823f95c4
	goto loc_823F95C4;
loc_823F9580:
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bge cr6,0x823f9598
	if (!ctx.cr6.lt) goto loc_823F9598;
	// lwzx r11,r10,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1108);
	// b 0x823f95bc
	goto loc_823F95BC;
loc_823F9598:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x823f95b4
	if (!ctx.cr6.lt) goto loc_823F95B4;
	// rlwinm r11,r11,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1108);
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// b 0x823f95bc
	goto loc_823F95BC;
loc_823F95B4:
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// addi r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 34;
loc_823F95BC:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,263
	ctx.r11.s64 = ctx.r11.s64 + 263;
loc_823F95C4:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
loc_823F95C8:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// clrlwi r9,r27,29
	ctx.r9.u64 = r27.u32 & 0x7;
	// rlwinm r30,r27,29,3,31
	r30.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 29) & 0x1FFFFFFF;
	// slw r29,r4,r9
	r29.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// lbzx r30,r30,r5
	r30.u64 = REX_LOAD_U8(r30.u32 + ctx.r5.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// and. r30,r29,r30
	r30.u64 = r29.u64 & r30.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// sthx r9,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// bne 0x823f9600
	if (!ctx.cr0.eq) goto loc_823F9600;
	// lbzx r11,r6,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + r27.u32);
	// b 0x823f96a8
	goto loc_823F96A8;
loc_823F9600:
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lbzx r9,r6,r27
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + r27.u32);
	// cmplwi cr6,r9,7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 7, ctx.xer);
	// lwzx r11,r10,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// bge cr6,0x823f9660
	if (!ctx.cr6.lt) goto loc_823F9660;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bge cr6,0x823f962c
	if (!ctx.cr6.lt) goto loc_823F962C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1108);
	// b 0x823f9650
	goto loc_823F9650;
loc_823F962C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x823f9648
	if (!ctx.cr6.lt) goto loc_823F9648;
	// rlwinm r11,r11,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1108);
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// b 0x823f9650
	goto loc_823F9650;
loc_823F9648:
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// addi r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 34;
loc_823F9650:
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x823f96a4
	goto loc_823F96A4;
loc_823F9660:
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bge cr6,0x823f9678
	if (!ctx.cr6.lt) goto loc_823F9678;
	// lwzx r11,r10,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1108);
	// b 0x823f969c
	goto loc_823F969C;
loc_823F9678:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x823f9694
	if (!ctx.cr6.lt) goto loc_823F9694;
	// rlwinm r11,r11,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1108);
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// b 0x823f969c
	goto loc_823F969C;
loc_823F9694:
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// addi r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 34;
loc_823F969C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,263
	ctx.r11.s64 = ctx.r11.s64 + 263;
loc_823F96A4:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
loc_823F96A8:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,1680
	ctx.r10.s64 = ctx.r1.s64 + 1680;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sthx r9,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// bdnz 0x823f9500
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F9500;
loc_823F96C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x823f9764
	if (ctx.cr6.eq) goto loc_823F9764;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,12592
	ctx.r11.s64 = ctx.r11.s64 + 12592;
loc_823F96E0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,72
	ctx.r7.s64 = ctx.r11.s64 + 72;
	// lhzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bge cr6,0x823f96fc
	if (!ctx.cr6.lt) goto loc_823F96FC;
	// lbzx r7,r10,r7
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// b 0x823f9708
	goto loc_823F9708;
loc_823F96FC:
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// lbzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
loc_823F9708:
	// addi r10,r1,1680
	ctx.r10.s64 = ctx.r1.s64 + 1680;
	// addi r6,r11,72
	ctx.r6.s64 = ctx.r11.s64 + 72;
	// lhzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bge cr6,0x823f9724
	if (!ctx.cr6.lt) goto loc_823F9724;
	// lbzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// b 0x823f9730
	goto loc_823F9730;
loc_823F9724:
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// lbzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_823F9730:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r25.u32, ctx.xer);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// subf r10,r10,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r10.u64;
	// srawi r7,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// xor r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// blt cr6,0x823f96e0
	if (ctx.cr6.lt) goto loc_823F96E0;
loc_823F9764:
	// addi r1,r1,3360
	ctx.r1.s64 = ctx.r1.s64 + 3360;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8240F850) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8240F858;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240f880
	if (ctx.cr6.eq) goto loc_8240F880;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x824094e0
	ctx.lr = 0x8240F87C;
	sub_824094E0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8240F880:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 100);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r7,104(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 104);
	// mullw r9,r9,r29
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r29.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x8240f8d4
	if (!ctx.cr6.gt) goto loc_8240F8D4;
	// addi r11,r6,-12
	ctx.r11.s64 = ctx.r6.s64 + -12;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8240F8B4:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfsu f0,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// stfsu f0,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lwz r9,104(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8240f8b4
	if (ctx.cr6.lt) goto loc_8240F8B4;
loc_8240F8D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82410DE8) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r7,100(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,104(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r7,r5
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82410e6c
	if (!ctx.cr6.lt) goto loc_82410E6C;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3716(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20328(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20328);
	ctx.f13.f64 = double(temp.f32);
loc_82410E3C:
	// stfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,12(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x82410e3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82410E3C;
loc_82410E6C:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82410e88
	if (ctx.cr6.eq) goto loc_82410E88;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c73b8
	ctx.lr = 0x82410E88;
	sub_825C73B8(ctx, base);
loc_82410E88:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82410ea4
	if (ctx.cr6.eq) goto loc_82410EA4;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82409820
	ctx.lr = 0x82410EA4;
	sub_82409820(ctx, base);
loc_82410EA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82411FB8) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mullw r9,r11,r4
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r8,100(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r7,104(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r5,r7,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82412000;
	sub_826A1E70(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82412018
	if (ctx.cr6.eq) goto loc_82412018;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c73b8
	ctx.lr = 0x82412018;
	sub_825C73B8(ctx, base);
loc_82412018:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82412030
	if (ctx.cr6.eq) goto loc_82412030;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409820
	ctx.lr = 0x82412030;
	sub_82409820(ctx, base);
loc_82412030:
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

DEFINE_REX_FUNC(sub_82414D00) {
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
	ctx.lr = 0x82414D08;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,640
	r30.s64 = ctx.r3.s64 + 640;
	// lwz r4,672(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 672);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,632(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8241b778
	ctx.lr = 0x82414D24;
	sub_8241B778(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82414ee8
	if (ctx.cr0.lt) goto loc_82414EE8;
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x82414ec4
	if (!ctx.cr6.eq) goto loc_82414EC4;
	// addi r31,r29,648
	r31.s64 = r29.s64 + 648;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r10,r10,23456
	ctx.r10.s64 = ctx.r10.s64 + 23456;
loc_82414D4C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x82414d70
	if (ctx.cr0.eq) goto loc_82414D70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82414d4c
	if (ctx.cr6.eq) goto loc_82414D4C;
loc_82414D70:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82414ec4
	if (!ctx.cr0.eq) goto loc_82414EC4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,672(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 672);
	// lwz r3,632(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 632);
	// bl 0x8241b778
	ctx.lr = 0x82414D88;
	sub_8241B778(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82414ee8
	if (ctx.cr0.lt) goto loc_82414EE8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82414dbc
	if (!ctx.cr6.eq) goto loc_82414DBC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r28,0(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,672(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 672);
	// lwz r3,632(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 632);
	// bl 0x8241b778
	ctx.lr = 0x82414DB0;
	sub_8241B778(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82414ee8
	if (ctx.cr0.lt) goto loc_82414EE8;
	// b 0x82414dc0
	goto loc_82414DC0;
loc_82414DBC:
	// mr r28,r27
	r28.u64 = r27.u64;
loc_82414DC0:
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x82414ec4
	if (!ctx.cr6.eq) goto loc_82414EC4;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r10,r10,23452
	ctx.r10.s64 = ctx.r10.s64 + 23452;
loc_82414DD8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x82414dfc
	if (ctx.cr0.eq) goto loc_82414DFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82414dd8
	if (ctx.cr6.eq) goto loc_82414DD8;
loc_82414DFC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82414ec4
	if (!ctx.cr0.eq) goto loc_82414EC4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,672(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 672);
	// lwz r3,632(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 632);
	// bl 0x8241b778
	ctx.lr = 0x82414E14;
	sub_8241B778(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82414ee8
	if (ctx.cr0.lt) goto loc_82414EE8;
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r8,12
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 12, ctx.xer);
	// beq cr6,0x82414e30
	if (ctx.cr6.eq) goto loc_82414E30;
	// cmpwi cr6,r8,13
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 13, ctx.xer);
	// bne cr6,0x82414ec4
	if (!ctx.cr6.eq) goto loc_82414EC4;
loc_82414E30:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82414e40
	if (!ctx.cr6.eq) goto loc_82414E40;
	// stw r27,60(r29)
	REX_STORE_U32(r29.u32 + 60, r27.u32);
	// b 0x82414ee4
	goto loc_82414EE4;
loc_82414E40:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// addi r10,r10,23440
	ctx.r10.s64 = ctx.r10.s64 + 23440;
loc_82414E4C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x82414e70
	if (ctx.cr0.eq) goto loc_82414E70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82414e4c
	if (ctx.cr6.eq) goto loc_82414E4C;
loc_82414E70:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82414e80
	if (!ctx.cr0.eq) goto loc_82414E80;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// b 0x82414ebc
	goto loc_82414EBC;
loc_82414E80:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// addi r10,r10,23424
	ctx.r10.s64 = ctx.r10.s64 + 23424;
loc_82414E8C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x82414eb0
	if (ctx.cr0.eq) goto loc_82414EB0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82414e8c
	if (ctx.cr6.eq) goto loc_82414E8C;
loc_82414EB0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82414ec4
	if (!ctx.cr0.eq) goto loc_82414EC4;
	// li r11,2048
	ctx.r11.s64 = 2048;
loc_82414EBC:
	// stw r11,60(r29)
	REX_STORE_U32(r29.u32 + 60, ctx.r11.u32);
	// b 0x82414ee4
	goto loc_82414EE4;
loc_82414EC4:
	// cmpwi cr6,r8,12
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 12, ctx.xer);
	// beq cr6,0x82414ee0
	if (ctx.cr6.eq) goto loc_82414EE0;
	// cmpwi cr6,r8,13
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 13, ctx.xer);
	// beq cr6,0x82414ee0
	if (ctx.cr6.eq) goto loc_82414EE0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,632(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 632);
	// bl 0x8241ab70
	ctx.lr = 0x82414EE0;
	sub_8241AB70(ctx, base);
loc_82414EE0:
	// stw r27,668(r29)
	REX_STORE_U32(r29.u32 + 668, r27.u32);
loc_82414EE4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82414EE8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,76(r29)
	REX_STORE_U32(r29.u32 + 76, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82423B58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82423B60;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,156(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82423bc4
	if (!ctx.cr6.gt) goto loc_82423BC4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r31,r11,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82423b8c
	if (!ctx.cr6.eq) goto loc_82423B8C;
	// li r31,16
	r31.s64 = 16;
	// b 0x82423b8c
	goto loc_82423B8C;
loc_82423B88:
	// rlwinm r31,r31,1,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
loc_82423B8C:
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82423b88
	if (ctx.cr6.lt) goto loc_82423B88;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x82423BA0;
	sub_823F02B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82423bb0
	if (!ctx.cr0.eq) goto loc_82423BB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82423bc8
	goto loc_82423BC8;
loc_82423BB0:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,152(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 152);
	// bl 0x823f0350
	ctx.lr = 0x82423BBC;
	sub_823F0350(ctx, base);
	// stw r30,152(r29)
	REX_STORE_U32(r29.u32 + 152, r30.u32);
	// stw r31,156(r29)
	REX_STORE_U32(r29.u32 + 156, r31.u32);
loc_82423BC4:
	// lwz r3,152(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 152);
loc_82423BC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82435FD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82435FD8;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82436074
	if (!ctx.cr6.eq) goto loc_82436074;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8243606c
	if (ctx.cr6.eq) goto loc_8243606C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8243606c
	if (ctx.cr6.eq) goto loc_8243606C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r29,-1
	r29.s64 = -1;
	// lfd f31,-3744(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_82436014:
	// lwz r3,8(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 8);
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
	ctx.lr = 0x8243602C;
	sub_82478758(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82436050
	if (!ctx.cr6.lt) goto loc_82436050;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82436054
	goto loc_82436054;
loc_82436050:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82436054:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82436060
	if (ctx.cr6.eq) goto loc_82436060;
	// stw r29,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, r29.u32);
loc_82436060:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x82436014
	if (!ctx.cr0.eq) goto loc_82436014;
loc_8243606C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824362a8
	goto loc_824362A8;
loc_82436074:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x824361c8
	if (!ctx.cr6.eq) goto loc_824361C8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8243606c
	if (ctx.cr6.eq) goto loc_8243606C;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82436100
	if (!ctx.cr6.eq) goto loc_82436100;
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x824360c8
	if (!ctx.cr6.eq) goto loc_824360C8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8243606c
	if (ctx.cr6.eq) goto loc_8243606C;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824360B0:
	// lwz r10,28(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 28);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824360b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824360B0;
	// b 0x8243606c
	goto loc_8243606C;
loc_824360C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8243606c
	if (ctx.cr6.eq) goto loc_8243606C;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r10,r31,-4
	ctx.r10.s64 = r31.s64 + -4;
loc_824360DC:
	// lwz r9,24(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 24);
	// lwz r8,24(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 24);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x824360dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824360DC;
	// b 0x8243606c
	goto loc_8243606C;
loc_82436100:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lfd f1,-3744(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
	// blt cr6,0x82436154
	if (ctx.cr6.lt) goto loc_82436154;
	// beq cr6,0x8243613c
	if (ctx.cr6.eq) goto loc_8243613C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8243612c
	if (ctx.cr6.lt) goto loc_8243612C;
	// bne cr6,0x8243616c
	if (!ctx.cr6.eq) goto loc_8243616C;
	// lfd f1,24(r29)
	ctx.f1.u64 = REX_LOAD_U64(r29.u32 + 24);
	// b 0x8243616c
	goto loc_8243616C;
loc_8243612C:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// b 0x82436148
	goto loc_82436148;
loc_8243613C:
	// lwa r11,24(r29)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r29.u32 + 24));
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
loc_82436148:
	// li r30,2
	r30.s64 = 2;
	// fcfid f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(ctx.f0.s64);
	// b 0x8243616c
	goto loc_8243616C;
loc_82436154:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82436168
	if (ctx.cr6.eq) goto loc_82436168;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,3728(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
loc_82436168:
	// li r30,23
	r30.s64 = 23;
loc_8243616C:
	// lwz r3,8(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,120(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// bl 0x82478758
	ctx.lr = 0x82436180;
	sub_82478758(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824361a4
	if (!ctx.cr6.lt) goto loc_824361A4;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x824361a8
	goto loc_824361A8;
loc_824361A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824361A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243606c
	if (ctx.cr6.eq) goto loc_8243606C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,-1
	ctx.r9.s64 = -1;
	// or r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 | r30.u64;
	// stw r9,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8243606c
	goto loc_8243606C;
loc_824361C8:
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x824361e8
	if (!ctx.cr6.eq) goto loc_824361E8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82434350
	ctx.lr = 0x824361E4;
	sub_82434350(ctx, base);
	// b 0x824362a8
	goto loc_824362A8;
loc_824361E8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82436288
	if (!ctx.cr6.eq) goto loc_82436288;
loc_824361F0:
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82436288
	if (ctx.cr6.eq) goto loc_82436288;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x82436230
	if (!ctx.cr6.eq) goto loc_82436230;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// li r30,1
	r30.s64 = 1;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8243621c
	if (!ctx.cr6.eq) goto loc_8243621C;
	// lwz r30,28(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
loc_8243621C:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82435fd0
	ctx.lr = 0x8243622C;
	sub_82435FD0(ctx, base);
	// b 0x82436260
	goto loc_82436260;
loc_82436230:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82436288
	if (ctx.cr6.eq) goto loc_82436288;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x82436288
	if (!ctx.cr6.eq) goto loc_82436288;
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mullw r30,r11,r10
	r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x82434350
	ctx.lr = 0x82436260;
	sub_82434350(ctx, base);
loc_82436260:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824362a8
	if (ctx.cr0.lt) goto loc_824362A8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82436278
	if (ctx.cr6.eq) goto loc_82436278;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
loc_82436278:
	// lwz r29,12(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x824361f0
	if (!ctx.cr6.eq) goto loc_824361F0;
	// b 0x8243606c
	goto loc_8243606C;
loc_82436288:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-22108
	ctx.r6.s64 = ctx.r11.s64 + -22108;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82423e58
	ctx.lr = 0x824362A0;
	sub_82423E58(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_824362A8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824455D0) {
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
	// bl 0x82448598
	ctx.lr = 0x824455EC;
	sub_82448598(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,52
	ctx.r4.s64 = 52;
	// bl 0x82444608
	ctx.lr = 0x824455FC;
	sub_82444608(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82445654
	if (ctx.cr0.eq) goto loc_82445654;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r10,-8032
	ctx.r10.s64 = ctx.r10.s64 + -8032;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
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
	// stw r8,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// b 0x82445658
	goto loc_82445658;
loc_82445654:
	// li r31,0
	r31.s64 = 0;
loc_82445658:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82445668
	if (!ctx.cr6.eq) goto loc_82445668;
loc_82445660:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82445744
	goto loc_82445744;
loc_82445668:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824456bc
	if (ctx.cr6.eq) goto loc_824456BC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824456B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82445660
	if (ctx.cr0.eq) goto loc_82445660;
loc_824456BC:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824456e8
	if (ctx.cr6.eq) goto loc_824456E8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824456DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82445660
	if (ctx.cr0.eq) goto loc_82445660;
loc_824456E8:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82445714
	if (ctx.cr6.eq) goto loc_82445714;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82445708;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82445660
	if (ctx.cr0.eq) goto loc_82445660;
loc_82445714:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82445740
	if (ctx.cr6.eq) goto loc_82445740;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82445734;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82445660
	if (ctx.cr0.eq) goto loc_82445660;
loc_82445740:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82445744:
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

DEFINE_REX_FUNC(sub_8244CEA8) {
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
	ctx.lr = 0x8244CEB0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r22,1
	r22.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244d5b0
	if (ctx.cr6.eq) goto loc_8244D5B0;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r27,r30
	r27.u64 = r30.u64;
	// beq cr6,0x8244cf08
	if (ctx.cr6.eq) goto loc_8244CF08;
	// addi r28,r4,60
	r28.s64 = ctx.r4.s64 + 60;
loc_8244CEE0:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x8244cea8
	ctx.lr = 0x8244CEEC;
	sub_8244CEA8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8244d500
	if (ctx.cr6.eq) goto loc_8244D500;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8244cee0
	if (ctx.cr6.lt) goto loc_8244CEE0;
loc_8244CF08:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// addi r20,r31,60
	r20.s64 = r31.s64 + 60;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8244d3b0
	if (!ctx.cr6.eq) goto loc_8244D3B0;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8244cfcc
	if (!ctx.cr6.gt) goto loc_8244CFCC;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_8244CF34:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8244cf80
	if (!ctx.cr6.lt) goto loc_8244CF80;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
loc_8244CF48:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,52(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r6,52(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 52);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8244cfac
	if (ctx.cr6.eq) goto loc_8244CFAC;
	// ble cr6,0x8244cf6c
	if (!ctx.cr6.gt) goto loc_8244CF6C;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8244CF6C:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8244cf48
	if (ctx.cr6.lt) goto loc_8244CF48;
loc_8244CF80:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244cfb8
	if (ctx.cr6.eq) goto loc_8244CFB8;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8244cf34
	if (ctx.cr6.lt) goto loc_8244CF34;
	// b 0x8244cfcc
	goto loc_8244CFCC;
loc_8244CFAC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,3524
	ctx.r5.s64 = ctx.r11.s64 + 3524;
	// b 0x8244d4f0
	goto loc_8244D4F0;
loc_8244CFB8:
	// addi r11,r3,15
	ctx.r11.s64 = ctx.r3.s64 + 15;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r11,r31
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x8244cfd8
	if (!ctx.cr6.eq) goto loc_8244CFD8;
loc_8244CFCC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,3484
	ctx.r5.s64 = ctx.r11.s64 + 3484;
	// b 0x8244d4f0
	goto loc_8244D4F0;
loc_8244CFD8:
	// lwz r25,4(r27)
	r25.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r24,28(r27)
	r24.u64 = REX_LOAD_U32(r27.u32 + 28);
	// lwz r23,24(r27)
	r23.u64 = REX_LOAD_U32(r27.u32 + 24);
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(r25.s32, 2, ctx.xer);
	// mullw r11,r23,r24
	ctx.r11.s64 = int64_t(r23.s32) * int64_t(r24.s32);
	// beq cr6,0x8244d000
	if (ctx.cr6.eq) goto loc_8244D000;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// beq cr6,0x8244d000
	if (ctx.cr6.eq) goto loc_8244D000;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// b 0x8244d018
	goto loc_8244D018;
loc_8244D000:
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8244d010
	if (!ctx.cr0.eq) goto loc_8244D010;
	// rlwinm r26,r11,30,2,31
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x8244d018
	goto loc_8244D018;
loc_8244D010:
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r26,r11,1
	r26.s64 = ctx.r11.s64 + 1;
loc_8244D018:
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r28,r30
	r28.u64 = r30.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// ble cr6,0x8244d218
	if (!ctx.cr6.gt) goto loc_8244D218;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r5,r31,64
	ctx.r5.s64 = r31.s64 + 64;
loc_8244D034:
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
loc_8244D040:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x8244d064
	if (ctx.cr0.eq) goto loc_8244D064;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8244d040
	if (ctx.cr6.eq) goto loc_8244D040;
loc_8244D064:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8244d304
	if (!ctx.cr0.eq) goto loc_8244D304;
	// lwz r11,48(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r10,48(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 48);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8244d310
	if (!ctx.cr6.eq) goto loc_8244D310;
	// lwz r11,56(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 56);
	// lwz r10,56(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8244d310
	if (!ctx.cr6.eq) goto loc_8244D310;
	// lwz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r10,16(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8244d310
	if (!ctx.cr6.eq) goto loc_8244D310;
	// lwz r11,28(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// bne cr6,0x8244d310
	if (!ctx.cr6.eq) goto loc_8244D310;
	// lwz r11,24(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// bne cr6,0x8244d310
	if (!ctx.cr6.eq) goto loc_8244D310;
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r25.s32, ctx.xer);
	// bne cr6,0x8244d310
	if (!ctx.cr6.eq) goto loc_8244D310;
	// lwz r11,20(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r10,20(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8244d310
	if (!ctx.cr6.eq) goto loc_8244D310;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,40(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// beq 0x8244d0f0
	if (ctx.cr0.eq) goto loc_8244D0F0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244d108
	if (ctx.cr6.eq) goto loc_8244D108;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,3400
	ctx.r5.s64 = ctx.r11.s64 + 3400;
	// b 0x8244d4f0
	goto loc_8244D4F0;
loc_8244D0F0:
	// lwz r10,40(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 40);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8244d108
	if (ctx.cr6.eq) goto loc_8244D108;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244d310
	if (!ctx.cr6.eq) goto loc_8244D310;
	// mr r28,r22
	r28.u64 = r22.u64;
loc_8244D108:
	// clrlwi. r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8244d11c
	if (ctx.cr0.eq) goto loc_8244D11C;
	// lwz r11,44(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244d31c
	if (!ctx.cr6.eq) goto loc_8244D31C;
loc_8244D11C:
	// lwz r11,44(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244d134
	if (ctx.cr6.eq) goto loc_8244D134;
	// lwz r9,44(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 44);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8244d4e8
	if (ctx.cr6.eq) goto loc_8244D4E8;
loc_8244D134:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8244d150
	if (!ctx.cr6.eq) goto loc_8244D150;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244d150
	if (!ctx.cr6.eq) goto loc_8244D150;
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244d4e8
	if (!ctx.cr6.eq) goto loc_8244D4E8;
loc_8244D150:
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244d168
	if (ctx.cr6.eq) goto loc_8244D168;
	// lwz r11,52(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 52);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8244d328
	if (!ctx.cr6.eq) goto loc_8244D328;
loc_8244D168:
	// lwz r9,12(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 12);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8244d1f8
	if (ctx.cr6.eq) goto loc_8244D1F8;
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, ctx.xer);
	// bne cr6,0x8244d1f8
	if (!ctx.cr6.eq) goto loc_8244D1F8;
	// lwz r7,12(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x8244d190
	if (ctx.cr6.eq) goto loc_8244D190;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x8244d1c4
	if (!ctx.cr6.gt) goto loc_8244D1C4;
loc_8244D190:
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8244d1c4
	if (!ctx.cr6.lt) goto loc_8244D1C4;
	// addi r10,r5,4
	ctx.r10.s64 = ctx.r5.s64 + 4;
loc_8244D1A0:
	// lwz r29,0(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r29,12(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(r29.s32, -1, ctx.xer);
	// bne cr6,0x8244d334
	if (!ctx.cr6.eq) goto loc_8244D334;
	// lwz r29,56(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// blt cr6,0x8244d1a0
	if (ctx.cr6.lt) goto loc_8244D1A0;
loc_8244D1C4:
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x8244d204
	if (ctx.cr6.eq) goto loc_8244D204;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8244d334
	if (ctx.cr6.lt) goto loc_8244D334;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// mullw r10,r9,r6
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8244d204
	if (ctx.cr6.eq) goto loc_8244D204;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,3348
	ctx.r5.s64 = ctx.r11.s64 + 3348;
	// b 0x8244d4f0
	goto loc_8244D4F0;
loc_8244D1F8:
	// lwz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8244d334
	if (!ctx.cr6.eq) goto loc_8244D334;
loc_8244D204:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8244d034
	if (ctx.cr6.lt) goto loc_8244D034;
loc_8244D218:
	// addi r11,r4,14
	ctx.r11.s64 = ctx.r4.s64 + 14;
	// lwz r10,44(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 44);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// beq cr6,0x8244d240
	if (ctx.cr6.eq) goto loc_8244D240;
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8244d328
	if (!ctx.cr6.eq) goto loc_8244D328;
loc_8244D240:
	// lwz r10,20(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 20);
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lwz r10,16(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 16);
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 28);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// lwz r11,40(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 40);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244d340
	if (ctx.cr6.eq) goto loc_8244D340;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,40(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 40);
	// lwz r3,4(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 4);
	// mullw r29,r11,r10
	r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82444608
	ctx.lr = 0x8244D2A0;
	sub_82444608(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// bl 0x826a2e60
	ctx.lr = 0x8244D2B0;
	sub_826A2E60(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r28,r30
	r28.u64 = r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8244d344
	if (!ctx.cr6.gt) goto loc_8244D344;
	// mr r26,r20
	r26.u64 = r20.u64;
loc_8244D2C4:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r4,44(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8244d2ec
	if (ctx.cr6.eq) goto loc_8244D2EC;
	// lwz r10,40(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 40);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// lwz r5,40(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 40);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8244D2EC;
	sub_826A1E70(ctx, base);
loc_8244D2EC:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8244d2c4
	if (ctx.cr6.lt) goto loc_8244D2C4;
	// b 0x8244d344
	goto loc_8244D344;
loc_8244D304:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,3304
	ctx.r5.s64 = ctx.r11.s64 + 3304;
	// b 0x8244d4f0
	goto loc_8244D4F0;
loc_8244D310:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,3256
	ctx.r5.s64 = ctx.r11.s64 + 3256;
	// b 0x8244d4f0
	goto loc_8244D4F0;
loc_8244D31C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,3192
	ctx.r5.s64 = ctx.r11.s64 + 3192;
	// b 0x8244d4f0
	goto loc_8244D4F0;
loc_8244D328:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,3096
	ctx.r5.s64 = ctx.r11.s64 + 3096;
	// b 0x8244d4f0
	goto loc_8244D4F0;
loc_8244D334:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,3032
	ctx.r5.s64 = ctx.r11.s64 + 3032;
	// b 0x8244d4f0
	goto loc_8244D4F0;
loc_8244D340:
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
loc_8244D344:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8244d364
	if (!ctx.cr6.eq) goto loc_8244D364;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// b 0x8244d5b0
	goto loc_8244D5B0;
loc_8244D364:
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8244d5b0
	if (!ctx.cr6.gt) goto loc_8244D5B0;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_8244D37C:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x8244d5b0
	if (ctx.cr6.eq) goto loc_8244D5B0;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8244d37c
	if (ctx.cr6.lt) goto loc_8244D37C;
	// b 0x8244d5b0
	goto loc_8244D5B0;
loc_8244D3B0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8244d5b0
	if (!ctx.cr6.eq) goto loc_8244D5B0;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8244d42c
	if (!ctx.cr6.gt) goto loc_8244D42C;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
loc_8244D3CC:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8244d414
	if (!ctx.cr6.lt) goto loc_8244D414;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_8244D3E0:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r5,8(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r4,8(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x8244d400
	if (!ctx.cr6.gt) goto loc_8244D400;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8244D400:
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8244d3e0
	if (ctx.cr6.lt) goto loc_8244D3E0;
loc_8244D414:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8244d3cc
	if (ctx.cr6.lt) goto loc_8244D3CC;
loc_8244D42C:
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r7,0(r20)
	ctx.r7.u64 = REX_LOAD_U32(r20.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r22,32(r31)
	REX_STORE_U32(r31.u32 + 32, r22.u32);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r22,24(r31)
	REX_STORE_U32(r31.u32 + 24, r22.u32);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// beq cr6,0x8244d524
	if (ctx.cr6.eq) goto loc_8244D524;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_8244D470:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8244d48c
	if (ctx.cr6.eq) goto loc_8244D48C;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
loc_8244D48C:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r8,40(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r5,32(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r4,28(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// lwz r9,24(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// mullw r5,r5,r4
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// mullw r9,r5,r9
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// lwz r10,44(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,44(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// beq cr6,0x8244d508
	if (ctx.cr6.eq) goto loc_8244D508;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8244d510
	if (!ctx.cr6.eq) goto loc_8244D510;
loc_8244D4E8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,2960
	ctx.r5.s64 = ctx.r11.s64 + 2960;
loc_8244D4F0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r4,r10,2940
	ctx.r4.s64 = ctx.r10.s64 + 2940;
	// bl 0x8244beb0
	ctx.lr = 0x8244D500;
	sub_8244BEB0(ctx, base);
loc_8244D500:
	// li r22,-1
	r22.s64 = -1;
	// b 0x8244d5b0
	goto loc_8244D5B0;
loc_8244D508:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8244d4e8
	if (!ctx.cr6.eq) goto loc_8244D4E8;
loc_8244D510:
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8244d470
	if (ctx.cr6.lt) goto loc_8244D470;
loc_8244D524:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244d538
	if (!ctx.cr6.eq) goto loc_8244D538;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_8244D538:
	// lwz r11,44(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244d5b0
	if (ctx.cr6.eq) goto loc_8244D5B0;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r3,4(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 4);
	// bl 0x82444608
	ctx.lr = 0x8244D554;
	sub_82444608(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r29,r30
	r29.u64 = r30.u64;
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8244d5b0
	if (!ctx.cr6.gt) goto loc_8244D5B0;
	// addi r28,r20,-4
	r28.s64 = r20.s64 + -4;
loc_8244D56C:
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// lwz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r9,32(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r4,44(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// mullw r5,r11,r9
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// bl 0x826a1e70
	ctx.lr = 0x8244D58C;
	sub_826A1E70(ctx, base);
	// lwzu r11,4(r28)
	ea = 4 + r28.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r28.u32 = ea;
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// blt cr6,0x8244d56c
	if (ctx.cr6.lt) goto loc_8244D56C;
loc_8244D5B0:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_82480F90) {
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
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x823f0350
	ctx.lr = 0x82480FB0;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x823f0350
	ctx.lr = 0x82480FBC;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x823f0350
	ctx.lr = 0x82480FC8;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x823f0350
	ctx.lr = 0x82480FD4;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x823f0350
	ctx.lr = 0x82480FE0;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x823f0350
	ctx.lr = 0x82480FEC;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x823f0350
	ctx.lr = 0x82480FF8;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x823f0350
	ctx.lr = 0x82481004;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// bl 0x823f0350
	ctx.lr = 0x82481010;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x823f0350
	ctx.lr = 0x8248101C;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// bl 0x823f0350
	ctx.lr = 0x82481028;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// bl 0x823f0350
	ctx.lr = 0x82481034;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// bl 0x823f0350
	ctx.lr = 0x82481040;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,76(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 76);
	// bl 0x823f0350
	ctx.lr = 0x8248104C;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// bl 0x823f0350
	ctx.lr = 0x82481058;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// bl 0x823f0350
	ctx.lr = 0x82481064;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// bl 0x823f0350
	ctx.lr = 0x82481070;
	sub_823F0350(ctx, base);
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82481080;
	sub_826A2E60(ctx, base);
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

DEFINE_REX_FUNC(sub_82492CB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82492CC0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82489d98
	ctx.lr = 0x82492CCC;
	sub_82489D98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824930dc
	if (ctx.cr0.lt) goto loc_824930DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82482568
	ctx.lr = 0x82492CDC;
	sub_82482568(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82492cec
	if (ctx.cr0.eq) goto loc_82492CEC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824930dc
	if (ctx.cr6.lt) goto loc_824930DC;
loc_82492CEC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82482c68
	ctx.lr = 0x82492CF4;
	sub_82482C68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82492d04
	if (ctx.cr0.eq) goto loc_82492D04;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824930dc
	if (ctx.cr6.lt) goto loc_824930DC;
loc_82492D04:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8247d160
	ctx.lr = 0x82492D0C;
	sub_8247D160(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82492d1c
	if (ctx.cr0.eq) goto loc_82492D1C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824930dc
	if (ctx.cr6.lt) goto loc_824930DC;
loc_82492D1C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824856b0
	ctx.lr = 0x82492D24;
	sub_824856B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82492d34
	if (ctx.cr0.eq) goto loc_82492D34;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824930dc
	if (ctx.cr6.lt) goto loc_824930DC;
loc_82492D34:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r28,1
	r28.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82492d88
	if (!ctx.cr6.gt) goto loc_82492D88;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82492D4C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lis r8,4128
	ctx.r8.s64 = 270532608;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,0,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82492d74
	if (!ctx.cr6.eq) goto loc_82492D74;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r8,r28,28,0,11
	ctx.r8.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 28) & 0xFFF00000) | (ctx.r8.u64 & 0xFFFFFFFF000FFFFF);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_82492D74:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82492d4c
	if (ctx.cr6.lt) goto loc_82492D4C;
loc_82492D88:
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82492db4
	if (ctx.cr0.eq) goto loc_82492DB4;
	// stw r28,216(r31)
	REX_STORE_U32(r31.u32 + 216, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82482c68
	ctx.lr = 0x82492DA0;
	sub_82482C68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824930d8
	if (ctx.cr0.eq) goto loc_824930D8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824930dc
	if (ctx.cr6.lt) goto loc_824930DC;
	// b 0x824930d8
	goto loc_824930D8;
loc_82492DB4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82485c88
	ctx.lr = 0x82492DBC;
	sub_82485C88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82492dcc
	if (ctx.cr0.eq) goto loc_82492DCC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824930dc
	if (ctx.cr6.lt) goto loc_824930DC;
loc_82492DCC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824821f0
	ctx.lr = 0x82492DD4;
	sub_824821F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82492de4
	if (ctx.cr0.eq) goto loc_82492DE4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824930dc
	if (ctx.cr6.lt) goto loc_824930DC;
loc_82492DE4:
	// li r29,0
	r29.s64 = 0;
loc_82492DE8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248f940
	ctx.lr = 0x82492DF0;
	sub_8248F940(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82492e00
	if (!ctx.cr0.eq) goto loc_82492E00;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82492e0c
	goto loc_82492E0C;
loc_82492E00:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824930dc
	if (ctx.cr6.lt) goto loc_824930DC;
loc_82492E0C:
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r30,r11,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82482568
	ctx.lr = 0x82492E20;
	sub_82482568(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82492e30
	if (!ctx.cr0.eq) goto loc_82492E30;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82492e3c
	goto loc_82492E3C;
loc_82492E30:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824930dc
	if (ctx.cr6.lt) goto loc_824930DC;
loc_82492E3C:
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// or r30,r11,r30
	r30.u64 = ctx.r11.u64 | r30.u64;
	// bl 0x82482f10
	ctx.lr = 0x82492E54;
	sub_82482F10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82492e64
	if (!ctx.cr0.eq) goto loc_82492E64;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82492e70
	goto loc_82492E70;
loc_82492E64:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824930dc
	if (ctx.cr6.lt) goto loc_824930DC;
loc_82492E70:
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// or r30,r11,r30
	r30.u64 = ctx.r11.u64 | r30.u64;
	// bl 0x82483578
	ctx.lr = 0x82492E8C;
	sub_82483578(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82492e9c
	if (!ctx.cr0.eq) goto loc_82492E9C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82492ea8
	goto loc_82492EA8;
loc_82492E9C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824930dc
	if (ctx.cr6.lt) goto loc_824930DC;
loc_82492EA8:
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// or r30,r11,r30
	r30.u64 = ctx.r11.u64 | r30.u64;
	// bl 0x82483a98
	ctx.lr = 0x82492EC0;
	sub_82483A98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82492ed0
	if (!ctx.cr0.eq) goto loc_82492ED0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82492edc
	goto loc_82492EDC;
loc_82492ED0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824930dc
	if (ctx.cr6.lt) goto loc_824930DC;
loc_82492EDC:
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// or r30,r11,r30
	r30.u64 = ctx.r11.u64 | r30.u64;
	// bl 0x8248aa20
	ctx.lr = 0x82492EF4;
	sub_8248AA20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82492f04
	if (!ctx.cr0.eq) goto loc_82492F04;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82492f10
	goto loc_82492F10;
loc_82492F04:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824930dc
	if (ctx.cr6.lt) goto loc_824930DC;
loc_82492F10:
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// or r30,r11,r30
	r30.u64 = ctx.r11.u64 | r30.u64;
	// bl 0x8248c8d0
	ctx.lr = 0x82492F28;
	sub_8248C8D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82492f38
	if (!ctx.cr0.eq) goto loc_82492F38;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82492f44
	goto loc_82492F44;
loc_82492F38:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824930dc
	if (ctx.cr6.lt) goto loc_824930DC;
loc_82492F44:
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// or r30,r11,r30
	r30.u64 = ctx.r11.u64 | r30.u64;
	// bl 0x82484090
	ctx.lr = 0x82492F5C;
	sub_82484090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82492f6c
	if (!ctx.cr0.eq) goto loc_82492F6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82492f78
	goto loc_82492F78;
loc_82492F6C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824930dc
	if (ctx.cr6.lt) goto loc_824930DC;
loc_82492F78:
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// or r30,r11,r30
	r30.u64 = ctx.r11.u64 | r30.u64;
	// bl 0x824849d8
	ctx.lr = 0x82492F90;
	sub_824849D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82492fa0
	if (!ctx.cr0.eq) goto loc_82492FA0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82492fac
	goto loc_82492FAC;
loc_82492FA0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824930dc
	if (ctx.cr6.lt) goto loc_824930DC;
loc_82492FAC:
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// or. r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82492fcc
	if (ctx.cr0.eq) goto loc_82492FCC;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r29,256
	ctx.cr6.compare<uint32_t>(r29.u32, 256, ctx.xer);
	// blt cr6,0x82492de8
	if (ctx.cr6.lt) goto loc_82492DE8;
loc_82492FCC:
	// cmplwi cr6,r29,256
	ctx.cr6.compare<uint32_t>(r29.u32, 256, ctx.xer);
	// bne cr6,0x82492fec
	if (!ctx.cr6.eq) goto loc_82492FEC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,31204
	ctx.r6.s64 = ctx.r11.s64 + 31204;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82489ce8
	ctx.lr = 0x82492FEC;
	sub_82489CE8(ctx, base);
loc_82492FEC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8249305c
	if (!ctx.cr6.gt) goto loc_8249305C;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_82493004:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r6,r10,0,23,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82493048
	if (ctx.cr0.eq) goto loc_82493048;
	// rlwinm. r6,r10,0,21,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82493048
	if (!ctx.cr0.eq) goto loc_82493048;
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82493048
	if (!ctx.cr0.eq) goto loc_82493048;
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r8,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82493048:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82493004
	if (ctx.cr6.lt) goto loc_82493004;
loc_8249305C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248a2c8
	ctx.lr = 0x82493064;
	sub_8248A2C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82493074
	if (ctx.cr0.eq) goto loc_82493074;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824930dc
	if (ctx.cr6.lt) goto loc_824930DC;
loc_82493074:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824852b0
	ctx.lr = 0x8249307C;
	sub_824852B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8249308c
	if (ctx.cr0.eq) goto loc_8249308C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824930dc
	if (ctx.cr6.lt) goto loc_824930DC;
loc_8249308C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82482c68
	ctx.lr = 0x82493094;
	sub_82482C68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824930a4
	if (ctx.cr0.eq) goto loc_824930A4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824930dc
	if (ctx.cr6.lt) goto loc_824930DC;
loc_824930A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8247d160
	ctx.lr = 0x824930AC;
	sub_8247D160(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824930bc
	if (ctx.cr0.eq) goto loc_824930BC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824930dc
	if (ctx.cr6.lt) goto loc_824930DC;
loc_824930BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824856b0
	ctx.lr = 0x824930C4;
	sub_824856B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824930d4
	if (ctx.cr0.eq) goto loc_824930D4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824930dc
	if (ctx.cr6.lt) goto loc_824930DC;
loc_824930D4:
	// stw r28,216(r31)
	REX_STORE_U32(r31.u32 + 216, r28.u32);
loc_824930D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824930DC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824B1410) {
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
	ctx.lr = 0x824B1418;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824b1540
	if (ctx.cr6.eq) goto loc_824B1540;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824b1540
	if (ctx.cr6.eq) goto loc_824B1540;
loc_824B1430:
	// lwz r30,0(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824b1530
	if (ctx.cr6.eq) goto loc_824B1530;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824b1530
	if (ctx.cr6.eq) goto loc_824B1530;
	// lwz r28,12(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824b1530
	if (ctx.cr6.eq) goto loc_824B1530;
	// lwz r29,0(r7)
	r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
loc_824B1460:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824b1498
	if (ctx.cr6.eq) goto loc_824B1498;
	// lwz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwzx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
loc_824B1478:
	// lwz r26,0(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r26
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r26.u32, ctx.xer);
	// beq cr6,0x824b14ac
	if (ctx.cr6.eq) goto loc_824B14AC;
	// lwz r26,0(r7)
	r26.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, ctx.xer);
	// blt cr6,0x824b1478
	if (ctx.cr6.lt) goto loc_824B1478;
loc_824B1498:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// blt cr6,0x824b1460
	if (ctx.cr6.lt) goto loc_824B1460;
	// b 0x824b1530
	goto loc_824B1530;
loc_824B14AC:
	// li r29,0
	r29.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_824B14B4:
	// lwz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824b14f0
	if (ctx.cr6.eq) goto loc_824B14F0;
	// lwz r31,16(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwzx r31,r31,r9
	r31.u64 = REX_LOAD_U32(r31.u32 + ctx.r9.u32);
loc_824B14D0:
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(r28.u32, r31.u32, ctx.xer);
	// beq cr6,0x824b14f0
	if (ctx.cr6.eq) goto loc_824B14F0;
	// lwz r28,0(r7)
	r28.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, ctx.xer);
	// blt cr6,0x824b14d0
	if (ctx.cr6.lt) goto loc_824B14D0;
loc_824B14F0:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824b151c
	if (!ctx.cr6.eq) goto loc_824B151C;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// beq cr6,0x824b154c
	if (ctx.cr6.eq) goto loc_824B154C;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stwx r11,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r11.u32);
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_824B151C:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b14b4
	if (ctx.cr6.lt) goto loc_824B14B4;
loc_824B1530:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r27,r5
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x824b1430
	if (ctx.cr6.lt) goto loc_824B1430;
loc_824B1540:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824B1544:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_824B154C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,4803
	ctx.r5.s64 = 4803;
	// addi r6,r11,932
	ctx.r6.s64 = ctx.r11.s64 + 932;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82489c30
	ctx.lr = 0x824B1560;
	sub_82489C30(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824b1544
	goto loc_824B1544;
}

DEFINE_REX_FUNC(sub_824BBB60) {
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
	ctx.lr = 0x824BBB68;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,260(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lwz r9,12(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824bbbbc
	if (ctx.cr6.eq) goto loc_824BBBBC;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_824BBB90:
	// lwz r6,16(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// lwzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lwz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm. r6,r6,0,6,6
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x824bbbbc
	if (ctx.cr0.eq) goto loc_824BBBBC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824bbb90
	if (ctx.cr6.lt) goto loc_824BBB90;
loc_824BBBBC:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x824bbbf0
	if (!ctx.cr6.lt) goto loc_824BBBF0;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// li r4,14
	ctx.r4.s64 = 14;
loc_824BBBCC:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82473f80
	ctx.lr = 0x824BBBEC;
	sub_82473F80(ctx, base);
	// b 0x824bbe98
	goto loc_824BBE98;
loc_824BBBF0:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// blt cr6,0x824bbc08
	if (ctx.cr6.lt) goto loc_824BBC08;
	// li r4,78
	ctx.r4.s64 = 78;
	// b 0x824bbbcc
	goto loc_824BBBCC;
loc_824BBC08:
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r27,r30
	r27.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824bbd00
	if (!ctx.cr6.gt) goto loc_824BBD00;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,256(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,340(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824BBC44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bbe98
	if (ctx.cr0.lt) goto loc_824BBE98;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r4,78
	ctx.r4.s64 = 78;
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82471828
	ctx.lr = 0x824BBC84;
	sub_82471828(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bbe98
	if (ctx.cr0.lt) goto loc_824BBE98;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x824bbcbc
	if (!ctx.cr6.gt) goto loc_824BBCBC;
	// addi r9,r1,108
	ctx.r9.s64 = ctx.r1.s64 + 108;
loc_824BBCA4:
	// lwz r8,120(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// lwz r8,12(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x824bbca4
	if (ctx.cr6.lt) goto loc_824BBCA4;
loc_824BBCBC:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// bl 0x82471828
	ctx.lr = 0x824BBCF4;
	sub_82471828(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x824bbe94
	if (!ctx.cr0.lt) goto loc_824BBE94;
	// b 0x824bbe98
	goto loc_824BBE98;
loc_824BBD00:
	// mr r28,r30
	r28.u64 = r30.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824bbe94
	if (ctx.cr6.eq) goto loc_824BBE94;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_824BBD10:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r9,r9,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r29.u32);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824bbd50
	if (!ctx.cr6.eq) goto loc_824BBD50;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824bbe34
	if (!ctx.cr0.eq) goto loc_824BBE34;
loc_824BBD50:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x824bbe34
	if (ctx.cr6.eq) goto loc_824BBE34;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x824bbd74
	if (!ctx.cr6.eq) goto loc_824BBD74;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824bbd74
	if (ctx.cr0.eq) goto loc_824BBD74;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824bbe34
	if (!ctx.cr0.eq) goto loc_824BBE34;
loc_824BBD74:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x824bbdb0
	if (!ctx.cr6.eq) goto loc_824BBDB0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,256(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,340(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824BBDA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bbe98
	if (ctx.cr0.lt) goto loc_824BBE98;
	// li r27,1
	r27.s64 = 1;
loc_824BBDB0:
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r4,78
	ctx.r4.s64 = 78;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x82471828
	ctx.lr = 0x824BBDEC;
	sub_82471828(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bbe98
	if (ctx.cr0.lt) goto loc_824BBE98;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x82471828
	ctx.lr = 0x824BBE30;
	sub_82471828(ctx, base);
	// b 0x824bbe74
	goto loc_824BBE74;
loc_824BBE34:
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r7,260(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 260);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// li r4,78
	ctx.r4.s64 = 78;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,16(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + r29.u64;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x82471828
	ctx.lr = 0x824BBE74;
	sub_82471828(ctx, base);
loc_824BBE74:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bbe98
	if (ctx.cr0.lt) goto loc_824BBE98;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824bbd10
	if (ctx.cr6.lt) goto loc_824BBD10;
loc_824BBE94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824BBE98:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824C9E00) {
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
	ctx.lr = 0x824C9E08;
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,416(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 416);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r27,408(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 408);
	// li r16,1
	r16.s64 = 1;
	// lwz r9,280(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 280);
	// slw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r17,448(r3)
	r17.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// slw r20,r16,r11
	r20.u64 = ctx.r11.u8 & 0x20 ? 0 : (r16.u32 << (ctx.r11.u8 & 0x3F));
	// stw r8,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824c9e5c
	if (ctx.cr6.eq) goto loc_824C9E5C;
	// lwz r11,40(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c9e5c
	if (!ctx.cr6.eq) goto loc_824C9E5C;
	// bl 0x824c9790
	ctx.lr = 0x824C9E54;
	sub_824C9790(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824ca234
	if (ctx.cr6.eq) goto loc_824CA234;
loc_824C9E5C:
	// lwz r11,8(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824ca1f0
	if (!ctx.cr6.eq) goto loc_824CA1F0;
	// lwz r10,24(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 24);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r19,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r19.u32);
	// li r14,0
	r14.s64 = 0;
	// lwz r28,0(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r21,r11,5392
	r21.s64 = ctx.r11.s64 + 5392;
	// lwz r24,404(r19)
	r24.u64 = REX_LOAD_U32(r19.u32 + 404);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lwz r15,20(r17)
	r15.u64 = REX_LOAD_U32(r17.u32 + 20);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// lwz r25,12(r17)
	r25.u64 = REX_LOAD_U32(r17.u32 + 12);
	// lwz r30,16(r17)
	r30.u64 = REX_LOAD_U32(r17.u32 + 16);
	// lwz r23,60(r17)
	r23.u64 = REX_LOAD_U32(r17.u32 + 60);
	// bne cr6,0x824ca124
	if (!ctx.cr6.eq) goto loc_824CA124;
	// cmpw cr6,r24,r27
	ctx.cr6.compare<int32_t>(r24.s32, r27.s32, ctx.xer);
	// bgt cr6,0x824ca1cc
	if (ctx.cr6.gt) goto loc_824CA1CC;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r18,118
	r18.s64 = 118;
	// addi r22,r11,-4
	r22.s64 = ctx.r11.s64 + -4;
loc_824C9EC0:
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// bge cr6,0x824c9f00
	if (!ctx.cr6.lt) goto loc_824C9F00;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824c8e10
	ctx.lr = 0x824C9EDC;
	sub_824C8E10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824ca208
	if (ctx.cr6.eq) goto loc_824CA208;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r25,104(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x824c9f00
	if (!ctx.cr6.lt) goto loc_824C9F00;
	// mr r7,r16
	ctx.r7.u64 = r16.u64;
	// b 0x824c9f34
	goto loc_824C9F34;
loc_824C9F00:
	// addi r11,r30,-8
	ctx.r11.s64 = r30.s64 + -8;
	// sraw r10,r25,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r25.s32 < 0) & (((r25.s32 >> temp.u32) << temp.u32) != r25.s32);
	ctx.r10.s64 = r25.s32 >> temp.u32;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + r23.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824c9f30
	if (ctx.cr6.eq) goto loc_824C9F30;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// subf r30,r10,r30
	r30.u64 = r30.u64 - ctx.r10.u64;
	// lbz r3,1168(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 1168);
	// b 0x824c9f58
	goto loc_824C9F58;
loc_824C9F30:
	// li r7,9
	ctx.r7.s64 = 9;
loc_824C9F34:
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824c8f78
	ctx.lr = 0x824C9F48;
	sub_824C8F78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824ca208
	if (ctx.cr6.lt) goto loc_824CA208;
	// lwz r25,104(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r30,108(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_824C9F58:
	// clrlwi r27,r3,28
	r27.u64 = ctx.r3.u32 & 0xF;
	// srawi r26,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	r26.s64 = ctx.r3.s32 >> 4;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x824c9fe0
	if (ctx.cr6.eq) goto loc_824C9FE0;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(r27.s32, 1, ctx.xer);
	// beq cr6,0x824c9f90
	if (ctx.cr6.eq) goto loc_824C9F90;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// stw r18,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r18.u32);
	// lwz r10,0(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824C9F90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824C9F90:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bge cr6,0x824c9fbc
	if (!ctx.cr6.lt) goto loc_824C9FBC;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824c8e10
	ctx.lr = 0x824C9FAC;
	sub_824C8E10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824ca208
	if (ctx.cr6.eq) goto loc_824CA208;
	// lwz r25,104(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r30,108(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_824C9FBC:
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// sraw r11,r25,r30
	temp.u32 = r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r25.s32 < 0) & (((r25.s32 >> temp.u32) << temp.u32) != r25.s32);
	ctx.r11.s64 = r25.s32 >> temp.u32;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824c9fd8
	if (ctx.cr6.eq) goto loc_824C9FD8;
	// mr r27,r20
	r27.u64 = r20.u64;
	// b 0x824c9fe8
	goto loc_824C9FE8;
loc_824C9FD8:
	// lwz r27,116(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x824c9fe8
	goto loc_824C9FE8;
loc_824C9FE0:
	// cmpwi cr6,r26,15
	ctx.cr6.compare<int32_t>(r26.s32, 15, ctx.xer);
	// bne cr6,0x824ca0cc
	if (!ctx.cr6.eq) goto loc_824CA0CC;
loc_824C9FE8:
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r21
	r29.u64 = ctx.r11.u64 + r21.u64;
loc_824C9FF0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r31,r11,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + r28.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824ca07c
	if (ctx.cr6.eq) goto loc_824CA07C;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bge cr6,0x824ca030
	if (!ctx.cr6.lt) goto loc_824CA030;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824c8e10
	ctx.lr = 0x824CA020;
	sub_824C8E10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824ca208
	if (ctx.cr6.eq) goto loc_824CA208;
	// lwz r25,104(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r30,108(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_824CA030:
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// sraw r11,r25,r30
	temp.u32 = r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r25.s32 < 0) & (((r25.s32 >> temp.u32) << temp.u32) != r25.s32);
	ctx.r11.s64 = r25.s32 >> temp.u32;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824ca084
	if (ctx.cr6.eq) goto loc_824CA084;
	// lhzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + r28.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// and r9,r10,r20
	ctx.r9.u64 = ctx.r10.u64 & r20.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x824ca084
	if (!ctx.cr6.eq) goto loc_824CA084;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x824ca06c
	if (ctx.cr6.lt) goto loc_824CA06C;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + r20.u64;
	// sthx r11,r31,r28
	REX_STORE_U16(r31.u32 + r28.u32, ctx.r11.u16);
	// b 0x824ca084
	goto loc_824CA084;
loc_824CA06C:
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sthx r9,r31,r28
	REX_STORE_U16(r31.u32 + r28.u32, ctx.r9.u16);
	// b 0x824ca084
	goto loc_824CA084;
loc_824CA07C:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt 0x824ca098
	if (ctx.cr0.lt) goto loc_824CA098;
loc_824CA084:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x824c9ff0
	if (!ctx.cr6.gt) goto loc_824C9FF0;
loc_824CA098:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x824ca0b8
	if (ctx.cr6.eq) goto loc_824CA0B8;
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// lwzx r9,r11,r21
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r21.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stwu r9,4(r22)
	ea = 4 + r22.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	r22.u32 = ea;
	// sthx r27,r8,r28
	REX_STORE_U16(ctx.r8.u32 + r28.u32, r27.u16);
loc_824CA0B8:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x824c9ec0
	if (!ctx.cr6.gt) goto loc_824C9EC0;
	// b 0x824ca1cc
	goto loc_824CA1CC;
loc_824CA0CC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// slw r15,r16,r26
	r15.u64 = r26.u8 & 0x20 ? 0 : (r16.u32 << (r26.u8 & 0x3F));
	// beq cr6,0x824ca118
	if (ctx.cr6.eq) goto loc_824CA118;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(r30.s32, r26.s32, ctx.xer);
	// bge cr6,0x824ca104
	if (!ctx.cr6.lt) goto loc_824CA104;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824c8e10
	ctx.lr = 0x824CA0F4;
	sub_824C8E10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824ca208
	if (ctx.cr6.eq) goto loc_824CA208;
	// lwz r25,104(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r30,108(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_824CA104:
	// subf r30,r26,r30
	r30.u64 = r30.u64 - r26.u64;
	// addi r11,r15,-1
	ctx.r11.s64 = r15.s64 + -1;
	// sraw r10,r25,r30
	temp.u32 = r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r25.s32 < 0) & (((r25.s32 >> temp.u32) << temp.u32) != r25.s32);
	ctx.r10.s64 = r25.s32 >> temp.u32;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// add r15,r11,r15
	r15.u64 = ctx.r11.u64 + r15.u64;
loc_824CA118:
	// lwz r27,80(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x824ca1cc
	if (ctx.cr6.eq) goto loc_824CA1CC;
loc_824CA124:
	// cmpw cr6,r24,r27
	ctx.cr6.compare<int32_t>(r24.s32, r27.s32, ctx.xer);
	// bgt cr6,0x824ca1c8
	if (ctx.cr6.gt) goto loc_824CA1C8;
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r26,116(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r29,r11,r21
	r29.u64 = ctx.r11.u64 + r21.u64;
loc_824CA138:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r31,r11,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + r28.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824ca1b8
	if (ctx.cr6.eq) goto loc_824CA1B8;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bge cr6,0x824ca178
	if (!ctx.cr6.lt) goto loc_824CA178;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824c8e10
	ctx.lr = 0x824CA168;
	sub_824C8E10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824ca208
	if (ctx.cr6.eq) goto loc_824CA208;
	// lwz r25,104(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r30,108(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_824CA178:
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// sraw r11,r25,r30
	temp.u32 = r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r25.s32 < 0) & (((r25.s32 >> temp.u32) << temp.u32) != r25.s32);
	ctx.r11.s64 = r25.s32 >> temp.u32;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824ca1b8
	if (ctx.cr6.eq) goto loc_824CA1B8;
	// lhzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + r28.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// and r9,r10,r20
	ctx.r9.u64 = ctx.r10.u64 & r20.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x824ca1b8
	if (!ctx.cr6.eq) goto loc_824CA1B8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x824ca1b0
	if (ctx.cr6.lt) goto loc_824CA1B0;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + r20.u64;
	// b 0x824ca1b4
	goto loc_824CA1B4;
loc_824CA1B0:
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
loc_824CA1B4:
	// sthx r11,r31,r28
	REX_STORE_U16(r31.u32 + r28.u32, ctx.r11.u16);
loc_824CA1B8:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r24,r27
	ctx.cr6.compare<int32_t>(r24.s32, r27.s32, ctx.xer);
	// ble cr6,0x824ca138
	if (!ctx.cr6.gt) goto loc_824CA138;
loc_824CA1C8:
	// addi r15,r15,-1
	r15.s64 = r15.s64 + -1;
loc_824CA1CC:
	// lwz r11,24(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 24);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,24(r19)
	ctx.r8.u64 = REX_LOAD_U32(r19.u32 + 24);
	// stw r9,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r25,12(r17)
	REX_STORE_U32(r17.u32 + 12, r25.u32);
	// stw r30,16(r17)
	REX_STORE_U32(r17.u32 + 16, r30.u32);
	// stw r15,20(r17)
	REX_STORE_U32(r17.u32 + 20, r15.u32);
loc_824CA1F0:
	// lwz r11,40(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,40(r17)
	REX_STORE_U32(r17.u32 + 40, ctx.r11.u32);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x826a1cd0
	return;
loc_824CA208:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// ble cr6,0x824ca234
	if (!ctx.cr6.gt) goto loc_824CA234;
	// rlwinm r11,r14,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r14
	ctx.ctr.u64 = r14.u64;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_824CA224:
	// lwzu r10,-4(r11)
	ea = -4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r10,r28
	REX_STORE_U16(ctx.r10.u32 + r28.u32, ctx.r9.u16);
	// bdnz 0x824ca224
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824CA224;
loc_824CA234:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_824E3AB0) {
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
	ctx.lr = 0x824E3AB8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,316(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r16,r8
	r16.u64 = ctx.r8.u64;
	// stw r9,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r9.u32);
	// clrlwi r31,r28,26
	r31.u64 = r28.u32 & 0x3F;
	// stw r10,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r10.u32);
	// addi r11,r11,-26296
	ctx.r11.s64 = ctx.r11.s64 + -26296;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lbzx r30,r31,r11
	r30.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// rlwinm. r8,r28,0,23,23
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824e3b20
	if (ctx.cr0.eq) goto loc_824E3B20;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,324(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,308
	ctx.r5.s64 = ctx.r1.s64 + 308;
	// addi r4,r1,300
	ctx.r4.s64 = ctx.r1.s64 + 300;
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// bl 0x822d1608
	ctx.lr = 0x824E3B18;
	sub_822D1608(ctx, base);
	// lwz r10,300(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r9,292(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
loc_824E3B20:
	// mr r19,r9
	r19.u64 = ctx.r9.u64;
	// mr r20,r10
	r20.u64 = ctx.r10.u64;
	// cmplwi cr6,r31,49
	ctx.cr6.compare<uint32_t>(r31.u32, 49, ctx.xer);
	// bgt cr6,0x824e3b68
	if (ctx.cr6.gt) goto loc_824E3B68;
	// beq cr6,0x824e3b88
	if (ctx.cr6.eq) goto loc_824E3B88;
	// cmplwi cr6,r31,11
	ctx.cr6.compare<uint32_t>(r31.u32, 11, ctx.xer);
	// blt cr6,0x824e3b9c
	if (ctx.cr6.lt) goto loc_824E3B9C;
	// cmplwi cr6,r31,12
	ctx.cr6.compare<uint32_t>(r31.u32, 12, ctx.xer);
	// ble cr6,0x824e3b58
	if (!ctx.cr6.gt) goto loc_824E3B58;
	// cmplwi cr6,r31,17
	ctx.cr6.compare<uint32_t>(r31.u32, 17, ctx.xer);
	// ble cr6,0x824e3b9c
	if (!ctx.cr6.gt) goto loc_824E3B9C;
	// cmplwi cr6,r31,20
	ctx.cr6.compare<uint32_t>(r31.u32, 20, ctx.xer);
	// ble cr6,0x824e3b88
	if (!ctx.cr6.gt) goto loc_824E3B88;
	// b 0x824e3b9c
	goto loc_824E3B9C;
loc_824E3B58:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// rlwinm r30,r30,1,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r11,31,1,31
	r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x824e3b9c
	goto loc_824E3B9C;
loc_824E3B68:
	// cmplwi cr6,r31,51
	ctx.cr6.compare<uint32_t>(r31.u32, 51, ctx.xer);
	// blt cr6,0x824e3b9c
	if (ctx.cr6.lt) goto loc_824E3B9C;
	// cmplwi cr6,r31,53
	ctx.cr6.compare<uint32_t>(r31.u32, 53, ctx.xer);
	// ble cr6,0x824e3b88
	if (!ctx.cr6.gt) goto loc_824E3B88;
	// cmplwi cr6,r31,57
	ctx.cr6.compare<uint32_t>(r31.u32, 57, ctx.xer);
	// ble cr6,0x824e3b9c
	if (!ctx.cr6.gt) goto loc_824E3B9C;
	// cmplwi cr6,r31,61
	ctx.cr6.compare<uint32_t>(r31.u32, 61, ctx.xer);
	// bgt cr6,0x824e3b9c
	if (ctx.cr6.gt) goto loc_824E3B9C;
loc_824E3B88:
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// rlwinm r19,r11,30,2,31
	r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r20,r8,30,2,31
	r20.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r30,r30,4,0,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
loc_824E3B9C:
	// srawi r11,r28,6
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3F) != 0);
	ctx.r11.s64 = r28.s32 >> 6;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x824e3be4
	if (ctx.cr6.lt) goto loc_824E3BE4;
	// beq cr6,0x824e3bd8
	if (ctx.cr6.eq) goto loc_824E3BD8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x824e3bd0
	if (ctx.cr6.lt) goto loc_824E3BD0;
	// beq cr6,0x824e3bc4
	if (ctx.cr6.eq) goto loc_824E3BC4;
	// li r23,0
	r23.s64 = 0;
	// b 0x824e3be8
	goto loc_824E3BE8;
loc_824E3BC4:
	// lis r23,4
	r23.s64 = 262144;
	// ori r23,r23,2
	r23.u64 = r23.u64 | 2;
	// b 0x824e3be8
	goto loc_824E3BE8;
loc_824E3BD0:
	// lis r23,4
	r23.s64 = 262144;
	// b 0x824e3bdc
	goto loc_824E3BDC;
loc_824E3BD8:
	// lis r23,2
	r23.s64 = 131072;
loc_824E3BDC:
	// ori r23,r23,1
	r23.u64 = r23.u64 | 1;
	// b 0x824e3be8
	goto loc_824E3BE8;
loc_824E3BE4:
	// rlwinm r23,r30,13,0,15
	r23.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 13) & 0xFFFF0000;
loc_824E3BE8:
	// rlwinm r24,r23,16,16,31
	r24.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 16) & 0xFFFF;
	// rlwinm r11,r30,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r8,r24,-1
	ctx.r8.s64 = r24.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r21,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 3) & 0xFFFFFFF8;
	// subfic r6,r8,35
	ctx.xer.ca = ctx.r8.u32 <= 35;
	ctx.r6.u64 = static_cast<uint64_t>(35) - ctx.r8.u64;
	// and. r5,r11,r21
	ctx.r5.u64 = ctx.r11.u64 & r21.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// divwu r8,r7,r30
	ctx.r8.u64 = uint32_t(r30.u32 ? ctx.r7.u32 / r30.u32 : 0);
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// srw r22,r30,r6
	r22.u64 = ctx.r6.u8 & 0x20 ? 0 : (r30.u32 >> (ctx.r6.u8 & 0x3F));
	// bne 0x824e3cbc
	if (!ctx.cr0.eq) goto loc_824E3CBC;
	// cmplw cr6,r21,r18
	ctx.cr6.compare<uint32_t>(r21.u32, r18.u32, ctx.xer);
	// bne cr6,0x824e3cbc
	if (!ctx.cr6.eq) goto loc_824E3CBC;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// ble cr6,0x824e3cbc
	if (!ctx.cr6.gt) goto loc_824E3CBC;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// ble cr6,0x824e3cbc
	if (!ctx.cr6.gt) goto loc_824E3CBC;
	// lwz r10,308(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x824e3c70
	if (!ctx.cr6.gt) goto loc_824E3C70;
	// and. r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 & r17.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824e3c70
	if (!ctx.cr0.eq) goto loc_824E3C70;
	// cmplw cr6,r17,r16
	ctx.cr6.compare<uint32_t>(r17.u32, r16.u32, ctx.xer);
	// bne cr6,0x824e3c70
	if (!ctx.cr6.eq) goto loc_824E3C70;
	// mullw r11,r22,r8
	ctx.r11.s64 = int64_t(r22.s32) * int64_t(ctx.r8.s32);
	// mullw r11,r11,r20
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r20.s32);
	// mullw r7,r11,r10
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e3928
	ctx.lr = 0x824E3C6C;
	sub_824E3928(ctx, base);
	// b 0x824e3d28
	goto loc_824E3D28;
loc_824E3C70:
	// li r31,0
	r31.s64 = 0;
	// mr r30,r27
	r30.u64 = r27.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824e3d28
	if (ctx.cr6.eq) goto loc_824E3D28;
	// mullw r11,r22,r8
	ctx.r11.s64 = int64_t(r22.s32) * int64_t(ctx.r8.s32);
	// mullw r28,r11,r20
	r28.s64 = int64_t(ctx.r11.s32) * int64_t(r20.s32);
loc_824E3C88:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e3928
	ctx.lr = 0x824E3CA0;
	sub_824E3928(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// add r30,r30,r17
	r30.u64 = r30.u64 + r17.u64;
	// add r29,r29,r16
	r29.u64 = r29.u64 + r16.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824e3c88
	if (ctx.cr6.lt) goto loc_824E3C88;
	// b 0x824e3d28
	goto loc_824E3D28;
loc_824E3CBC:
	// lwz r11,308(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// li r25,0
	r25.s64 = 0;
	// mr r26,r29
	r26.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824e3d28
	if (ctx.cr6.eq) goto loc_824E3D28;
loc_824E3CD0:
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x824e3d10
	if (ctx.cr6.eq) goto loc_824E3D10;
	// mullw r28,r22,r19
	r28.s64 = int64_t(r22.s32) * int64_t(r19.s32);
	// mr r31,r20
	r31.u64 = r20.u64;
loc_824E3CE8:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e3928
	ctx.lr = 0x824E3D00;
	sub_824E3928(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r30,r30,r21
	r30.u64 = r30.u64 + r21.u64;
	// add r29,r29,r18
	r29.u64 = r29.u64 + r18.u64;
	// bne 0x824e3ce8
	if (!ctx.cr0.eq) goto loc_824E3CE8;
loc_824E3D10:
	// lwz r11,308(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// add r27,r27,r17
	r27.u64 = r27.u64 + r17.u64;
	// add r26,r26,r16
	r26.u64 = r26.u64 + r16.u64;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824e3cd0
	if (ctx.cr6.lt) goto loc_824E3CD0;
loc_824E3D28:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_824F1A90) {
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
	ctx.lr = 0x824F1A98;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// addi r26,r8,-26848
	r26.s64 = ctx.r8.s64 + -26848;
	// addi r29,r9,22852
	r29.s64 = ctx.r9.s64 + 22852;
	// addi r25,r10,-24624
	r25.s64 = ctx.r10.s64 + -24624;
	// addi r28,r11,-24720
	r28.s64 = ctx.r11.s64 + -24720;
loc_824F1AC4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,72(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 72);
	// bl 0x824ee4d0
	ctx.lr = 0x824F1AD0;
	sub_824EE4D0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x824f1b38
	if (ctx.cr0.eq) goto loc_824F1B38;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824f1aec
	if (ctx.cr6.eq) goto loc_824F1AEC;
	// lwz r11,76(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 76);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824f1b04
	if (!ctx.cr6.gt) goto loc_824F1B04;
loc_824F1AEC:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,664
	ctx.r7.s64 = 664;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F1B04;
	sub_824EA978(ctx, base);
loc_824F1B04:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,72(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 72);
	// bl 0x824ee580
	ctx.lr = 0x824F1B10;
	sub_824EE580(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f26e0
	ctx.lr = 0x824F1B18;
	sub_824F26E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824f1b38
	if (ctx.cr0.eq) goto loc_824F1B38;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,670
	ctx.r7.s64 = 670;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F1B38;
	sub_824EA978(ctx, base);
loc_824F1B38:
	// lwz r11,76(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 76);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824f1ac4
	if (!ctx.cr6.gt) goto loc_824F1AC4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824F7F18) {
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
	ctx.lr = 0x824F7F20;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r21,0
	r21.s64 = 0;
	// li r20,1
	r20.s64 = 1;
	// rlwinm. r11,r10,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f7f58
	if (ctx.cr0.eq) goto loc_824F7F58;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f7f58
	if (ctx.cr6.eq) goto loc_824F7F58;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// bne 0x824f7f5c
	if (!ctx.cr0.eq) goto loc_824F7F5C;
loc_824F7F58:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_824F7F5C:
	// rlwinm. r9,r10,0,7,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x824f7f94
	if (ctx.cr0.eq) goto loc_824F7F94;
	// lwz r11,56(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f7f84
	if (ctx.cr6.eq) goto loc_824F7F84;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// bne 0x824f7f88
	if (!ctx.cr0.eq) goto loc_824F7F88;
loc_824F7F84:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_824F7F88:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// bne 0x824f7f98
	if (!ctx.cr0.eq) goto loc_824F7F98;
loc_824F7F94:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_824F7F98:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824f7fac
	if (!ctx.cr0.eq) goto loc_824F7FAC;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// beq 0x824f7fb0
	if (ctx.cr0.eq) goto loc_824F7FB0;
loc_824F7FAC:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_824F7FB0:
	// clrlwi r19,r11,24
	r19.u64 = ctx.r11.u32 & 0xFF;
loc_824F7FB4:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
loc_824F7FB8:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r22,r10,r11
	r22.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x824f85ec
	if (ctx.cr6.eq) goto loc_824F85EC;
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824f8570
	if (!ctx.cr0.eq) goto loc_824F8570;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824f8570
	if (ctx.cr0.eq) goto loc_824F8570;
loc_824F7FE8:
	// lwz r30,8(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + 8);
	// rlwinm r31,r30,25,25,31
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r31,117
	ctx.cr6.compare<uint32_t>(r31.u32, 117, ctx.xer);
	// bne cr6,0x824f8030
	if (!ctx.cr6.eq) goto loc_824F8030;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x824f71b8
	ctx.lr = 0x824F800C;
	sub_824F71B8(ctx, base);
	// addi r11,r24,-16
	ctx.r11.s64 = r24.s64 + -16;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bne cr6,0x824f8030
	if (!ctx.cr6.eq) goto loc_824F8030;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x824f857c
	if (ctx.cr6.eq) goto loc_824F857C;
loc_824F8030:
	// clrlwi. r11,r19,24
	ctx.r11.u64 = r19.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f80fc
	if (ctx.cr0.eq) goto loc_824F80FC;
	// rlwinm. r11,r30,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f80fc
	if (ctx.cr0.eq) goto loc_824F80FC;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
loc_824F8044:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f8554
	if (ctx.cr6.eq) goto loc_824F8554;
	// lwz r28,12(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,12032
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12032, ctx.xer);
	// beq cr6,0x824f8068
	if (ctx.cr6.eq) goto loc_824F8068;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x824f8044
	goto loc_824F8044;
loc_824F8068:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,94
	ctx.r4.s64 = 94;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x824f71b8
	ctx.lr = 0x824F807C;
	sub_824F71B8(ctx, base);
	// addi r11,r28,-12
	ctx.r11.s64 = r28.s64 + -12;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f8554
	if (!ctx.cr0.eq) goto loc_824F8554;
	// addi r29,r24,4
	r29.s64 = r24.s64 + 4;
loc_824F8090:
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824f8594
	if (ctx.cr6.eq) goto loc_824F8594;
	// lwz r30,16(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824f80e8
	if (ctx.cr6.eq) goto loc_824F80E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f80e8
	if (ctx.cr0.eq) goto loc_824F80E8;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250b470
	ctx.lr = 0x824F80C4;
	sub_8250B470(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f7708
	ctx.lr = 0x824F80CC;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f80e8
	if (ctx.cr0.eq) goto loc_824F80E8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825c2288
	ctx.lr = 0x824F80E8;
	sub_825C2288(ctx, base);
loc_824F80E8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x824f8090
	if (!ctx.cr6.eq) goto loc_824F8090;
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// b 0x824f8090
	goto loc_824F8090;
loc_824F80FC:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824f7708
	ctx.lr = 0x824F8104;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f8584
	if (!ctx.cr0.eq) goto loc_824F8584;
	// cmplwi cr6,r31,104
	ctx.cr6.compare<uint32_t>(r31.u32, 104, ctx.xer);
	// bne cr6,0x824f8554
	if (!ctx.cr6.eq) goto loc_824F8554;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824f857c
	if (ctx.cr6.eq) goto loc_824F857C;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_824F8128:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824f818c
	if (ctx.cr6.eq) goto loc_824F818C;
	// lwz r11,16(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f8184
	if (ctx.cr6.eq) goto loc_824F8184;
	// lwz r7,0(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r8,r7,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824f8184
	if (ctx.cr0.eq) goto loc_824F8184;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824f8180
	if (ctx.cr6.eq) goto loc_824F8180;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_824F815C:
	// rlwinm r4,r7,27,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r4,r4,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r4,r4,30
	ctx.r4.u64 = ctx.r4.u32 & 0x3;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// slw r4,r20,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r4.u8 & 0x3F));
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x824f815c
	if (ctx.cr6.lt) goto loc_824F815C;
loc_824F8180:
	// or r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 | ctx.r6.u64;
loc_824F8184:
	// lwz r5,8(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// b 0x824f8128
	goto loc_824F8128;
loc_824F818C:
	// rlwinm r10,r30,31,28,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0xF;
	// lwz r11,44(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 44);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824f81b0
	if (!ctx.cr6.eq) goto loc_824F81B0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,21,11,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1FFFFF;
	// xor r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 ^ r30.u64;
	// rlwinm. r10,r10,0,15,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824f8554
	if (ctx.cr0.eq) goto loc_824F8554;
loc_824F81B0:
	// lwz r26,12(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r29,r24
	r29.u64 = r24.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// b 0x824f8290
	goto loc_824F8290;
loc_824F81C0:
	// lwz r28,44(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 44);
	// lwz r4,48(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 48);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f7010
	ctx.lr = 0x824F81D0;
	sub_824F7010(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f82a0
	if (ctx.cr0.eq) goto loc_824F82A0;
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 4);
loc_824F81DC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824f8208
	if (ctx.cr6.eq) goto loc_824F8208;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f81f8
	if (ctx.cr6.eq) goto loc_824F81F8;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x824f8200
	if (!ctx.cr6.eq) goto loc_824F8200;
loc_824F81F8:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x824f81dc
	goto loc_824F81DC;
loc_824F8200:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// b 0x824f820c
	goto loc_824F820C;
loc_824F8208:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_824F820C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f82a0
	if (!ctx.cr0.eq) goto loc_824F82A0;
	// lwz r8,0(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// rlwinm r5,r8,7,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7;
	// rlwinm r11,r30,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0xF;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
loc_824F822C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f8284
	if (ctx.cr6.eq) goto loc_824F8284;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// andc r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// subfic r6,r6,31
	ctx.xer.ca = ctx.r6.u32 <= 31;
	ctx.r6.u64 = static_cast<uint64_t>(31) - ctx.r6.u64;
	// slw r6,r20,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r6.u8 & 0x3F));
	// and. r6,r6,r25
	ctx.r6.u64 = ctx.r6.u64 & r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x824f8264
	if (ctx.cr0.eq) goto loc_824F8264;
	// rlwinm r6,r8,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// srw r6,r6,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// slw r6,r20,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r6.u8 & 0x3F));
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
loc_824F8264:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x824f8284
	if (!ctx.cr6.lt) goto loc_824F8284;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// andc r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// b 0x824f822c
	goto loc_824F822C;
loc_824F8284:
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r26,12(r28)
	r26.u64 = REX_LOAD_U32(r28.u32 + 12);
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
loc_824F8290:
	// lwz r30,8(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r31,r30,25,25,31
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(r31.u32, 3, ctx.xer);
	// beq cr6,0x824f81c0
	if (ctx.cr6.eq) goto loc_824F81C0;
loc_824F82A0:
	// cmplwi cr6,r31,110
	ctx.cr6.compare<uint32_t>(r31.u32, 110, ctx.xer);
	// bne cr6,0x824f8554
	if (!ctx.cr6.eq) goto loc_824F8554;
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 4);
loc_824F82AC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824f82d8
	if (ctx.cr6.eq) goto loc_824F82D8;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f82c8
	if (ctx.cr6.eq) goto loc_824F82C8;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x824f82d0
	if (!ctx.cr6.eq) goto loc_824F82D0;
loc_824F82C8:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x824f82ac
	goto loc_824F82AC;
loc_824F82D0:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// b 0x824f82dc
	goto loc_824F82DC;
loc_824F82D8:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_824F82DC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f8554
	if (!ctx.cr0.eq) goto loc_824F8554;
	// rlwinm r11,r30,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0xF;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824f8554
	if (ctx.cr6.eq) goto loc_824F8554;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r27,r21
	r27.u64 = r21.u64;
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// addi r28,r26,44
	r28.s64 = r26.s64 + 44;
	// std r21,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r21.u64);
	// std r21,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r21.u64);
loc_824F8308:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824f840c
	if (!ctx.cr6.lt) goto loc_824F840C;
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// slw r30,r20,r11
	r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r30,r25
	ctx.r11.u64 = r30.u64 & r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f83fc
	if (!ctx.cr0.eq) goto loc_824F83FC;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15360
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15360, ctx.xer);
	// beq cr6,0x824f83fc
	if (ctx.cr6.eq) goto loc_824F83FC;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_824F8348:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824f8374
	if (ctx.cr6.eq) goto loc_824F8374;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f8364
	if (ctx.cr6.eq) goto loc_824F8364;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x824f836c
	if (!ctx.cr6.eq) goto loc_824F836C;
loc_824F8364:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x824f8348
	goto loc_824F8348;
loc_824F836C:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// b 0x824f8378
	goto loc_824F8378;
loc_824F8374:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_824F8378:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f83fc
	if (!ctx.cr0.eq) goto loc_824F83FC;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// addi r5,r22,16
	ctx.r5.s64 = r22.s64 + 16;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825bb860
	ctx.lr = 0x824F83A0;
	sub_825BB860(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// rlwinm r10,r10,0,31,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE1;
	// rlwimi r11,r30,1,27,30
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0x1E) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE1);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x824f83d0
	goto loc_824F83D0;
loc_824F83C8:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_824F83D0:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x824f83c8
	if (!ctx.cr6.eq) goto loc_824F83C8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
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
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_824F83FC:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// b 0x824f8308
	goto loc_824F8308;
loc_824F840C:
	// lwz r11,40(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 40);
	// mr r27,r21
	r27.u64 = r21.u64;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// ori r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 4096;
	// rlwinm r28,r11,20,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1;
	// stw r10,40(r23)
	REX_STORE_U32(r23.u32 + 40, ctx.r10.u32);
	// li r29,4
	r29.s64 = 4;
loc_824F8428:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824f8464
	if (ctx.cr6.eq) goto loc_824F8464;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// beq cr6,0x824f8464
	if (ctx.cr6.eq) goto loc_824F8464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7708
	ctx.lr = 0x824F844C;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f8464
	if (ctx.cr0.eq) goto loc_824F8464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825c2510
	ctx.lr = 0x824F8460;
	sub_825C2510(ctx, base);
	// mr r27,r20
	r27.u64 = r20.u64;
loc_824F8464:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x824f8428
	if (!ctx.cr0.eq) goto loc_824F8428;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-14720
	ctx.r11.s64 = ctx.r11.s64 + -14720;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r26
	r31.u64 = ctx.r11.u64 & r26.u64;
	// bl 0x824f7a78
	ctx.lr = 0x824F8494;
	sub_824F7A78(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824f854c
	if (ctx.cr6.eq) goto loc_824F854C;
	// addi r5,r31,44
	ctx.r5.s64 = r31.s64 + 44;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_824F84A8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r3,r11,13,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x824f854c
	if (!ctx.cr6.lt) goto loc_824F854C;
	// lwz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_824F84C8:
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x824f8500
	if (!ctx.cr6.lt) goto loc_824F8500;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r30,12(r6)
	r30.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r29,12(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(r29.s32, r30.s32, ctx.xer);
	// bne cr6,0x824f84f4
	if (!ctx.cr6.eq) goto loc_824F84F4;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r9,r9,27,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x3;
	// slw r9,r20,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r9.u8 & 0x3F));
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
loc_824F84F4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x824f84c8
	goto loc_824F84C8;
loc_824F8500:
	// lis r10,-28311
	ctx.r10.s64 = -1855389696;
	// lwz r9,12(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r10,r10,5192
	ctx.r10.u64 = ctx.r10.u64 | 5192;
	// ori r7,r7,36262
	ctx.r7.u64 = ctx.r7.u64 | 36262;
	// clrldi r6,r11,32
	ctx.r6.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rldimi r10,r7,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// lwz r7,8(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// srd r10,r10,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r6.u8 & 0x7F));
	// srd r10,r10,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r6.u8 & 0x7F));
	// srd r10,r10,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// rlwimi r11,r10,13,16,18
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xE000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF1FFF);
	// rlwimi r7,r11,1,27,30
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1E) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFE1);
	// rlwimi r7,r11,1,15,17
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1C000) | (ctx.r7.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r7,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// b 0x824f84a8
	goto loc_824F84A8;
loc_824F854C:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f7fb4
	if (!ctx.cr0.eq) goto loc_824F7FB4;
loc_824F8554:
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824f8570
	if (!ctx.cr0.eq) goto loc_824F8570;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f7fe8
	if (!ctx.cr6.eq) goto loc_824F7FE8;
loc_824F8570:
	// rlwinm r11,r22,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x824f7fb8
	goto loc_824F7FB8;
loc_824F857C:
	// rlwinm r11,r30,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r11,8(r24)
	REX_STORE_U32(r24.u32 + 8, ctx.r11.u32);
loc_824F8584:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_824F8588:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825c2510
	ctx.lr = 0x824F8590;
	sub_825C2510(ctx, base);
	// b 0x824f7fb4
	goto loc_824F7FB4;
loc_824F8594:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825c2510
	ctx.lr = 0x824F85A0;
	sub_825C2510(ctx, base);
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
loc_824F85A4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824f85e4
	if (ctx.cr6.eq) goto loc_824F85E4;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f85dc
	if (ctx.cr6.eq) goto loc_824F85DC;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r11,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824f85d0
	if (!ctx.cr0.eq) goto loc_824F85D0;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// beq 0x824f85d4
	if (ctx.cr0.eq) goto loc_824F85D4;
loc_824F85D0:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_824F85D4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f7fb4
	if (!ctx.cr0.eq) goto loc_824F7FB4;
loc_824F85DC:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x824f85a4
	goto loc_824F85A4;
loc_824F85E4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x824f8588
	goto loc_824F8588;
loc_824F85EC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_8254FF60) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,25,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x7F;
	// rlwinm r8,r8,25,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x7F;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8254ffb0
	if (ctx.cr6.lt) goto loc_8254FFB0;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8254ff90
	if (!ctx.cr6.eq) goto loc_8254FF90;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8254ffb0
	if (ctx.cr6.lt) goto loc_8254FFB0;
loc_8254FF90:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8254ffa8
	if (!ctx.cr6.eq) goto loc_8254FFA8;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8254ffb0
	if (ctx.cr6.lt) goto loc_8254FFB0;
loc_8254FFA8:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8254ffb4
	goto loc_8254FFB4;
loc_8254FFB0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8254FFB4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825511B0) {
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
	ctx.lr = 0x825511B8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r10,1664
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1664, ctx.xer);
	// beq cr6,0x825511e4
	if (ctx.cr6.eq) goto loc_825511E4;
loc_825511DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82551360
	goto loc_82551360;
loc_825511E4:
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825511dc
	if (!ctx.cr0.eq) goto loc_825511DC;
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825511dc
	if (!ctx.cr0.eq) goto loc_825511DC;
	// rlwinm r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	// lis r8,512
	ctx.r8.s64 = 33554432;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x825511dc
	if (!ctx.cr6.eq) goto loc_825511DC;
	// lwz r24,48(r30)
	r24.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r9,0(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 0);
	// clrlwi. r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825511dc
	if (!ctx.cr0.eq) goto loc_825511DC;
	// lwz r27,12(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r28,0
	r28.s64 = 0;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(r27.u32, r26.u32, ctx.xer);
	// beq cr6,0x825512a4
	if (ctx.cr6.eq) goto loc_825512A4;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bne cr6,0x825511dc
	if (!ctx.cr6.eq) goto loc_825511DC;
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 44);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x825511dc
	if (!ctx.cr6.eq) goto loc_825511DC;
	// lwz r11,48(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 48);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x825511dc
	if (!ctx.cr6.eq) goto loc_825511DC;
	// rlwinm r4,r10,27,30,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3;
	// bl 0x8254fa20
	ctx.lr = 0x8255126C;
	sub_8254FA20(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x825511dc
	if (ctx.cr6.gt) goto loc_825511DC;
	// fneg f0,f1
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fctidz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// std r28,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, r28.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x825511dc
	if (!ctx.cr6.eq) goto loc_825511DC;
loc_825512A4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r31,r29
	r31.u64 = r29.u64;
	// b 0x825512c8
	goto loc_825512C8;
loc_825512B0:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825511dc
	if (ctx.cr6.eq) goto loc_825511DC;
	// ble cr6,0x825512c4
	if (!ctx.cr6.gt) goto loc_825512C4;
	// addi r31,r11,8
	r31.s64 = ctx.r11.s64 + 8;
loc_825512C4:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_825512C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825512b0
	if (!ctx.cr6.eq) goto loc_825512B0;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,12
	ctx.r4.s64 = 12;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// bl 0x824f7678
	ctx.lr = 0x825512EC;
	sub_824F7678(ctx, base);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(r27.u32, r26.u32, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// bne cr6,0x8255131c
	if (!ctx.cr6.eq) goto loc_8255131C;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
loc_8255131C:
	// lwz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// bne cr6,0x82551344
	if (!ctx.cr6.eq) goto loc_82551344;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwimi r10,r11,0,0,18
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFE000) | (ctx.r10.u64 & 0xFFFFFFFF00001FFF);
	// stw r10,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r10.u32);
	// b 0x82551360
	goto loc_82551360;
loc_82551344:
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// bne cr6,0x82551360
	if (!ctx.cr6.eq) goto loc_82551360;
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// rlwinm r11,r10,0,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFE000;
	// addi r11,r11,8192
	ctx.r11.s64 = ctx.r11.s64 + 8192;
	// rlwimi r11,r10,0,19,5
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFC001FFF) | (ctx.r11.u64 & 0x3FFE000);
	// stw r11,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r11.u32);
loc_82551360:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_825623C8) {
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
	ctx.lr = 0x825623D0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x824f7678
	ctx.lr = 0x825623F4;
	sub_824F7678(ctx, base);
	// addi r25,r3,4
	r25.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r25,1
	ctx.r10.u64 = r25.u64 | 1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lis r24,512
	r24.s64 = 33554432;
loc_82562410:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8255c548
	ctx.lr = 0x82562424;
	sub_8255C548(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r10,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825625b8
	if (ctx.cr0.eq) goto loc_825625B8;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x825625b8
	if (!ctx.cr6.eq) goto loc_825625B8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r9,r11,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	// cmplw cr6,r9,r24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r24.u32, ctx.xer);
	// bne cr6,0x825625b8
	if (!ctx.cr6.eq) goto loc_825625B8;
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825625b8
	if (!ctx.cr0.eq) goto loc_825625B8;
	// rlwinm r30,r10,25,25,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r30,11
	ctx.cr6.compare<uint32_t>(r30.u32, 11, ctx.xer);
	// beq cr6,0x825624ac
	if (ctx.cr6.eq) goto loc_825624AC;
	// cmplwi cr6,r30,10
	ctx.cr6.compare<uint32_t>(r30.u32, 10, ctx.xer);
	// beq cr6,0x825624ac
	if (ctx.cr6.eq) goto loc_825624AC;
	// cmplwi cr6,r30,103
	ctx.cr6.compare<uint32_t>(r30.u32, 103, ctx.xer);
	// bne cr6,0x82562484
	if (!ctx.cr6.eq) goto loc_82562484;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82550488
	ctx.lr = 0x8256247C;
	sub_82550488(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825624ac
	if (!ctx.cr0.eq) goto loc_825624AC;
loc_82562484:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// beq cr6,0x82562494
	if (ctx.cr6.eq) goto loc_82562494;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// bne cr6,0x825625b8
	if (!ctx.cr6.eq) goto loc_825625B8;
loc_82562494:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x825625b8
	if (!ctx.cr6.eq) goto loc_825625B8;
loc_825624AC:
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_825624B0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825625b8
	if (ctx.cr6.eq) goto loc_825625B8;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825625b0
	if (ctx.cr6.eq) goto loc_825625B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825625b0
	if (ctx.cr0.eq) goto loc_825625B0;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x825624ec
	if (ctx.cr6.lt) goto loc_825624EC;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x825624f0
	if (!ctx.cr6.gt) goto loc_825624F0;
loc_825624EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825624F0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82562500
	if (!ctx.cr0.eq) goto loc_82562500;
	// cmplwi cr6,r10,103
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 103, ctx.xer);
	// bne cr6,0x825625b0
	if (!ctx.cr6.eq) goto loc_825625B0;
loc_82562500:
	// lwz r11,616(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 616);
	// li r10,68
	ctx.r10.s64 = 68;
	// lwz r9,28(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// subf r11,r11,r27
	ctx.r11.u64 = r27.u64 - ctx.r11.u64;
	// divw r10,r11,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r11,r11,21
	ctx.r11.s64 = ctx.r11.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825625b0
	if (ctx.cr0.eq) goto loc_825625B0;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8255c548
	ctx.lr = 0x82562544;
	sub_8255C548(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi. r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825625b0
	if (!ctx.cr0.eq) goto loc_825625B0;
	// rlwinm r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// bne cr6,0x825625b0
	if (!ctx.cr6.eq) goto loc_825625B0;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8256258c
	if (!ctx.cr0.eq) goto loc_8256258C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8256258c
	if (ctx.cr0.eq) goto loc_8256258C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82562598
	if (!ctx.cr6.gt) goto loc_82562598;
loc_8256258C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8251fe00
	ctx.lr = 0x82562598;
	sub_8251FE00(ctx, base);
loc_82562598:
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
loc_825625B0:
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x825624b0
	goto loc_825624B0;
loc_825625B8:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82562634
	if (!ctx.cr0.eq) goto loc_82562634;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82562634
	if (ctx.cr0.eq) goto loc_82562634;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
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
	// bne 0x8256262c
	if (!ctx.cr0.eq) goto loc_8256262C;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
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
	ctx.lr = 0x8256262C;
	sub_824E4308(ctx, base);
loc_8256262C:
	// lwz r31,16(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 16);
	// b 0x82562410
	goto loc_82562410;
loc_82562634:
	// lwz r10,976(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 976);
	// addi r11,r28,972
	ctx.r11.s64 = r28.s64 + 972;
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// stw r29,976(r28)
	REX_STORE_U32(r28.u32 + 976, r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82580DA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82580DA8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82580DD0;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82580df4
	if (ctx.cr6.eq) goto loc_82580DF4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82580DF0;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82580DF4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82580DFC;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// beq cr6,0x82580e20
	if (ctx.cr6.eq) goto loc_82580E20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82580E1C;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82580E20:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82580E28;
	sub_8250AD28(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r10,564(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 564);
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

DEFINE_REX_FUNC(sub_82582FD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82582FE0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,17
	ctx.r6.s64 = 17;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82583008;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258302c
	if (ctx.cr6.eq) goto loc_8258302C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82583028;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8258302C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82583034;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82583044;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82583050;
	sub_8250AD28(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwimi r10,r9,14,15,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x1C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFE3FFF);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,564(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 564);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r10,-36
	ctx.r8.s64 = ctx.r10.s64 + -36;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r9,r11,-36
	ctx.r9.s64 = ctx.r11.s64 + -36;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82587570) {
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
	ctx.lr = 0x82587578;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825875d0
	if (ctx.cr0.eq) goto loc_825875D0;
	// lwz r11,584(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 584);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825875b0
	if (ctx.cr0.eq) goto loc_825875B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825875bc
	goto loc_825875BC;
loc_825875B0:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_825875BC:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r26,-4(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x825875dc
	goto loc_825875DC;
loc_825875D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82580bd0
	ctx.lr = 0x825875D8;
	sub_82580BD0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_825875DC:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,564(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 564);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x825c69a0
	ctx.lr = 0x825875EC;
	sub_825C69A0(ctx, base);
	// lwz r10,556(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 556);
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,556(r31)
	REX_STORE_U32(r31.u32 + 556, ctx.r10.u32);
	// li r6,117
	ctx.r6.s64 = 117;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// oris r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 8388608;
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// bl 0x825bb860
	ctx.lr = 0x82587630;
	sub_825BB860(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
	// bl 0x824f71b8
	ctx.lr = 0x82587654;
	sub_824F71B8(ctx, base);
	// addi r11,r28,-16
	ctx.r11.s64 = r28.s64 + -16;
	// li r10,2
	ctx.r10.s64 = 2;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// ori r10,r9,7
	ctx.r10.u64 = ctx.r9.u64 | 7;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,556(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 556);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r30.u32);
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// bl 0x825bb860
	ctx.lr = 0x82587698;
	sub_825BB860(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x8250adf0
	ctx.lr = 0x825876B0;
	sub_8250ADF0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r24,1
	r24.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825878fc
	if (ctx.cr6.eq) goto loc_825878FC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// andi. r10,r11,1280
	ctx.r10.u64 = ctx.r11.u64 & 1280;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825878fc
	if (ctx.cr0.eq) goto loc_825878FC;
	// lwz r25,32(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825876e4
	if (!ctx.cr0.eq) goto loc_825876E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825848c0
	ctx.lr = 0x825876E4;
	sub_825848C0(ctx, base);
loc_825876E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82580bd0
	ctx.lr = 0x825876EC;
	sub_82580BD0(ctx, base);
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r10,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,564(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 564);
	// bl 0x825c69a0
	ctx.lr = 0x82587718;
	sub_825C69A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82580bd0
	ctx.lr = 0x82587720;
	sub_82580BD0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 48);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r11,48(r29)
	REX_STORE_U32(r29.u32 + 48, ctx.r11.u32);
	// bl 0x825c69a0
	ctx.lr = 0x82587740;
	sub_825C69A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x825c69a0
	ctx.lr = 0x82587750;
	sub_825C69A0(ctx, base);
	// addi r27,r30,32
	r27.s64 = r30.s64 + 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb860
	ctx.lr = 0x82587770;
	sub_825BB860(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb860
	ctx.lr = 0x8258779C;
	sub_825BB860(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x8250adf0
	ctx.lr = 0x825877B4;
	sub_8250ADF0(ctx, base);
	// addi r30,r29,32
	r30.s64 = r29.s64 + 32;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb860
	ctx.lr = 0x825877D4;
	sub_825BB860(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// stw r11,8(r27)
	REX_STORE_U32(r27.u32 + 8, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb860
	ctx.lr = 0x82587800;
	sub_825BB860(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x8250adf0
	ctx.lr = 0x82587818;
	sub_8250ADF0(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585f38
	ctx.lr = 0x8258782C;
	sub_82585F38(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82503400
	ctx.lr = 0x82587840;
	sub_82503400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8258784C;
	sub_8250AD28(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// rlwimi r11,r24,17,13,14
	ctx.r11.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 17) & 0x60000) | (ctx.r11.u64 & 0xFFFFFFFFFFF9FFFF);
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// addi r30,r11,32
	r30.s64 = ctx.r11.s64 + 32;
	// bl 0x82503400
	ctx.lr = 0x82587870;
	sub_82503400(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82554748
	ctx.lr = 0x82587884;
	sub_82554748(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r30,-16
	r29.s64 = r30.s64 + -16;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// oris r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 393216;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x825878AC;
	sub_824F71B8(ctx, base);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r26.u32);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x825878D8;
	sub_824F71B8(ctx, base);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r10,r24,5,23,31
	ctx.r10.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 5) & 0x1FF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFE00);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r25,32(r31)
	REX_STORE_U32(r31.u32 + 32, r25.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// b 0x82587974
	goto loc_82587974;
loc_825878FC:
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// li r6,103
	ctx.r6.s64 = 103;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb860
	ctx.lr = 0x82587918;
	sub_825BB860(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,103
	ctx.r4.s64 = 103;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// bl 0x824f71b8
	ctx.lr = 0x82587934;
	sub_824F71B8(ctx, base);
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
	// li r10,15
	ctx.r10.s64 = 15;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// stwx r10,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82584ed0
	ctx.lr = 0x8258794C;
	sub_82584ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82587958;
	sub_8250AD28(ctx, base);
	// stw r3,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
loc_82587974:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82587988
	if (!ctx.cr0.eq) goto loc_82587988;
	// stw r26,564(r31)
	REX_STORE_U32(r31.u32 + 564, r26.u32);
loc_82587988:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82587994
	if (ctx.cr6.eq) goto loc_82587994;
	// stw r24,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r24.u32);
loc_82587994:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_825B1560) {
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
	ctx.lr = 0x825B1568;
	// stwu r1,-928(r1)
	ea = -928 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r21,0
	r21.s64 = 0;
	// lwz r31,24(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r19,1
	r19.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,2080
	ctx.r4.s64 = 2080;
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r21.u32);
	// mr r16,r21
	r16.u64 = r21.u64;
	// stw r19,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r19.u32);
	// lwz r29,28(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 28);
	// mr r18,r21
	r18.u64 = r21.u64;
	// mr r15,r21
	r15.u64 = r21.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r17,r19
	r17.u64 = r19.u64;
	// bctrl 
	ctx.lr = 0x825B15AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r10,r1,636
	ctx.r10.s64 = ctx.r1.s64 + 636;
	// mr r26,r21
	r26.u64 = r21.u64;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_825B15C4:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825b15c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825B15C4;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r10,r1,348
	ctx.r10.s64 = ctx.r1.s64 + 348;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_825B15DC:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825b15dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825B15DC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a60d8
	ctx.lr = 0x825B15EC;
	sub_825A60D8(ctx, base);
	// stw r3,23360(r29)
	REX_STORE_U32(r29.u32 + 23360, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a60d8
	ctx.lr = 0x825B15F8;
	sub_825A60D8(ctx, base);
	// stw r3,23364(r29)
	REX_STORE_U32(r29.u32 + 23364, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a60d8
	ctx.lr = 0x825B1604;
	sub_825A60D8(ctx, base);
	// stw r3,23212(r29)
	REX_STORE_U32(r29.u32 + 23212, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a60d8
	ctx.lr = 0x825B1610;
	sub_825A60D8(ctx, base);
	// stw r3,23216(r29)
	REX_STORE_U32(r29.u32 + 23216, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a60d8
	ctx.lr = 0x825B161C;
	sub_825A60D8(ctx, base);
	// stw r3,23220(r29)
	REX_STORE_U32(r29.u32 + 23220, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a60d8
	ctx.lr = 0x825B1628;
	sub_825A60D8(ctx, base);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r3,23352(r29)
	REX_STORE_U32(r29.u32 + 23352, ctx.r3.u32);
	// addi r11,r11,-30224
	ctx.r11.s64 = ctx.r11.s64 + -30224;
	// addi r10,r10,-5968
	ctx.r10.s64 = ctx.r10.s64 + -5968;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// stw r10,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r9,r9,-6012
	ctx.r9.s64 = ctx.r9.s64 + -6012;
	// addi r11,r8,-6040
	ctx.r11.s64 = ctx.r8.s64 + -6040;
	// addi r10,r7,-31184
	ctx.r10.s64 = ctx.r7.s64 + -31184;
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r9,r6,-6084
	ctx.r9.s64 = ctx.r6.s64 + -6084;
	// addi r11,r5,-6140
	ctx.r11.s64 = ctx.r5.s64 + -6140;
	// addi r10,r4,-6156
	ctx.r10.s64 = ctx.r4.s64 + -6156;
	// stw r9,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lis r28,-32251
	r28.s64 = -2113601536;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lis r27,-32251
	r27.s64 = -2113601536;
	// addi r9,r3,22852
	ctx.r9.s64 = ctx.r3.s64 + 22852;
	// addi r11,r28,-6212
	ctx.r11.s64 = r28.s64 + -6212;
	// addi r10,r27,-8552
	ctx.r10.s64 = r27.s64 + -8552;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r14,65
	r14.s64 = 65;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_825B16B4:
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r24,r31
	r24.u64 = r31.u64;
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// mr r20,r21
	r20.u64 = r21.u64;
	// stw r19,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r19.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x825b1918
	if (!ctx.cr6.eq) goto loc_825B1918;
	// lwz r9,28(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 28);
	// addi r10,r23,4
	ctx.r10.s64 = r23.s64 + 4;
	// sth r14,2(r23)
	REX_STORE_U16(r23.u32 + 2, r14.u16);
	// li r12,-30584
	ctx.r12.s64 = -30584;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// rlwinm r11,r11,0,16,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lwz r10,23360(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 23360);
	// sth r10,6(r23)
	REX_STORE_U16(r23.u32 + 6, ctx.r10.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 4);
	// rlwimi r10,r19,18,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 18) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,4(r23)
	REX_STORE_U32(r23.u32 + 4, ctx.r10.u32);
	// sth r21,10(r23)
	REX_STORE_U16(r23.u32 + 10, r21.u16);
	// lwz r10,8(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwimi r10,r14,16,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 16) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,8(r23)
	REX_STORE_U32(r23.u32 + 8, ctx.r10.u32);
	// stb r19,8(r23)
	REX_STORE_U8(r23.u32 + 8, r19.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r19,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r19.u32);
	// sth r21,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, r21.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r14,16,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 16) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stb r19,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r19.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825b1908
	if (!ctx.cr6.eq) goto loc_825B1908;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r8,7
	ctx.r8.s64 = 7;
	// li r6,71
	ctx.r6.s64 = 71;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r21,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r21.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r5,0,16,2
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// ori r5,r7,48059
	ctx.r5.u64 = ctx.r7.u64 | 48059;
	// stw r21,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r21.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// sth r21,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, r21.u16);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r4,r8,16,8,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFF0000) | (ctx.r4.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r21,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r21.u32);
	// sth r21,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, r21.u16);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r4,r6,16,8,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFF0000) | (ctx.r4.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stwu r21,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, r21.u32);
	ctx.r10.u32 = ea;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stwu r21,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, r21.u32);
	ctx.r10.u32 = ea;
	// sth r9,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r11,r14,16,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 16) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stb r19,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r19.u8);
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// stw r9,18592(r29)
	REX_STORE_U32(r29.u32 + 18592, ctx.r9.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lwz r10,23368(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 23368);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825b1804
	if (!ctx.cr6.eq) goto loc_825B1804;
	// lwz r9,23372(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 23372);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825b1818
	if (!ctx.cr6.eq) goto loc_825B1818;
loc_825B1804:
	// lwz r9,23372(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 23372);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825b1880
	if (!ctx.cr6.eq) goto loc_825B1880;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825b1880
	if (!ctx.cr6.eq) goto loc_825B1880;
loc_825B1818:
	// li r9,62
	ctx.r9.s64 = 62;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r9,20384(r29)
	REX_STORE_U32(r29.u32 + 20384, ctx.r9.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r9,28(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 28);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// sth r14,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, r14.u16);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,0,16,2
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// sth r21,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, r21.u16);
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r6,r8,17,8,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0xFF0000) | (ctx.r6.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r8,23360(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 23360);
	// sth r8,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r8.u16);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r8,r19,18,8,15
	ctx.r8.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 18) & 0xFF0000) | (ctx.r8.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lwz r9,23360(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 23360);
	// sth r9,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r9,r19,18,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 18) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_825B1880:
	// lwz r10,23372(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 23372);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825b1908
	if (!ctx.cr6.eq) goto loc_825B1908;
	// lwz r10,23368(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 23368);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825b1908
	if (ctx.cr6.eq) goto loc_825B1908;
	// stw r21,1184(r30)
	REX_STORE_U32(r30.u32 + 1184, r21.u32);
	// li r8,9
	ctx.r8.s64 = 9;
	// lwz r9,23204(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 23204);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// stw r10,23204(r29)
	REX_STORE_U32(r29.u32 + 23204, ctx.r10.u32);
	// stw r21,21408(r29)
	REX_STORE_U32(r29.u32 + 21408, r21.u32);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r9,28(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 28);
	// sth r14,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, r14.u16);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,16,2
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// sth r21,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, r21.u16);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r7,r8,17,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r8,23360(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 23360);
	// sth r8,10(r11)
	REX_STORE_U16(ctx.r11.u32 + 10, ctx.r8.u16);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r8,r19,18,8,15
	ctx.r8.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 18) & 0xFF0000) | (ctx.r8.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r9,23360(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 23360);
	// sth r9,14(r11)
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r9.u16);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r9,r19,18,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 18) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
loc_825B1908:
	// mr r26,r31
	r26.u64 = r31.u64;
	// mr r20,r19
	r20.u64 = r19.u64;
	// mr r31,r23
	r31.u64 = r23.u64;
	// li r11,100
	ctx.r11.s64 = 100;
loc_825B1918:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r21,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r21.u32);
	// cmplwi cr6,r11,99
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 99, ctx.xer);
	// bgt cr6,0x825b202c
	if (ctx.cr6.gt) goto loc_825B202C;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,-8032
	ctx.r12.s64 = ctx.r12.s64 + -8032;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32165
	ctx.r12.s64 = -2107965440;
	// addi r12,r12,6480
	ctx.r12.s64 = ctx.r12.s64 + 6480;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_825B2048;
	case 1:
		goto loc_825B202C;
	case 2:
		goto loc_825B202C;
	case 3:
		goto loc_825B202C;
	case 4:
		goto loc_825B202C;
	case 5:
		goto loc_825B1D08;
	case 6:
		goto loc_825B1D24;
	case 7:
		goto loc_825B1AE4;
	case 8:
		goto loc_825B1B2C;
	case 9:
		goto loc_825B2048;
	case 10:
		goto loc_825B202C;
	case 11:
		goto loc_825B202C;
	case 12:
		goto loc_825B2048;
	case 13:
		goto loc_825B2048;
	case 14:
		goto loc_825B1950;
	case 15:
		goto loc_825B202C;
	case 16:
		goto loc_825B202C;
	case 17:
		goto loc_825B202C;
	case 18:
		goto loc_825B2048;
	case 19:
		goto loc_825B202C;
	case 20:
		goto loc_825B202C;
	case 21:
		goto loc_825B2048;
	case 22:
		goto loc_825B202C;
	case 23:
		goto loc_825B202C;
	case 24:
		goto loc_825B1FF4;
	case 25:
		goto loc_825B1E40;
	case 26:
		goto loc_825B202C;
	case 27:
		goto loc_825B1964;
	case 28:
		goto loc_825B196C;
	case 29:
		goto loc_825B202C;
	case 30:
		goto loc_825B202C;
	case 31:
		goto loc_825B2048;
	case 32:
		goto loc_825B202C;
	case 33:
		goto loc_825B202C;
	case 34:
		goto loc_825B202C;
	case 35:
		goto loc_825B202C;
	case 36:
		goto loc_825B2048;
	case 37:
		goto loc_825B2048;
	case 38:
		goto loc_825B1A38;
	case 39:
		goto loc_825B1DD8;
	case 40:
		goto loc_825B1A8C;
	case 41:
		goto loc_825B1D44;
	case 42:
		goto loc_825B1DC0;
	case 43:
		goto loc_825B2048;
	case 44:
		goto loc_825B202C;
	case 45:
		goto loc_825B2048;
	case 46:
		goto loc_825B202C;
	case 47:
		goto loc_825B202C;
	case 48:
		goto loc_825B202C;
	case 49:
		goto loc_825B1BC8;
	case 50:
		goto loc_825B202C;
	case 51:
		goto loc_825B1974;
	case 52:
		goto loc_825B19A8;
	case 53:
		goto loc_825B2048;
	case 54:
		goto loc_825B202C;
	case 55:
		goto loc_825B202C;
	case 56:
		goto loc_825B2048;
	case 57:
		goto loc_825B202C;
	case 58:
		goto loc_825B202C;
	case 59:
		goto loc_825B202C;
	case 60:
		goto loc_825B2048;
	case 61:
		goto loc_825B1C1C;
	case 62:
		goto loc_825B2048;
	case 63:
		goto loc_825B202C;
	case 64:
		goto loc_825B202C;
	case 65:
		goto loc_825B2048;
	case 66:
		goto loc_825B1EA8;
	case 67:
		goto loc_825B202C;
	case 68:
		goto loc_825B2048;
	case 69:
		goto loc_825B2048;
	case 70:
		goto loc_825B2048;
	case 71:
		goto loc_825B2048;
	case 72:
		goto loc_825B202C;
	case 73:
		goto loc_825B202C;
	case 74:
		goto loc_825B202C;
	case 75:
		goto loc_825B2048;
	case 76:
		goto loc_825B202C;
	case 77:
		goto loc_825B2048;
	case 78:
		goto loc_825B202C;
	case 79:
		goto loc_825B202C;
	case 80:
		goto loc_825B202C;
	case 81:
		goto loc_825B202C;
	case 82:
		goto loc_825B1BA4;
	case 83:
		goto loc_825B202C;
	case 84:
		goto loc_825B202C;
	case 85:
		goto loc_825B2048;
	case 86:
		goto loc_825B2048;
	case 87:
		goto loc_825B202C;
	case 88:
		goto loc_825B2048;
	case 89:
		goto loc_825B202C;
	case 90:
		goto loc_825B2048;
	case 91:
		goto loc_825B202C;
	case 92:
		goto loc_825B2048;
	case 93:
		goto loc_825B2048;
	case 94:
		goto loc_825B2048;
	case 95:
		goto loc_825B2048;
	case 96:
		goto loc_825B2048;
	case 97:
		goto loc_825B202C;
	case 98:
		goto loc_825B202C;
	case 99:
		goto loc_825B206C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_825B1950:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// b 0x825b222c
	goto loc_825B222C;
loc_825B1964:
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// b 0x825b222c
	goto loc_825B222C;
loc_825B196C:
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// b 0x825b222c
	goto loc_825B222C;
loc_825B1974:
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// rlwinm r10,r18,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r19,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r19.u32);
loc_825B1984:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_825B1988:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r7,r16
	ctx.r7.u64 = r16.u64;
	// mr r20,r19
	r20.u64 = r19.u64;
	// bl 0x825b0438
	ctx.lr = 0x825B19A0;
	sub_825B0438(ctx, base);
	// mr r17,r21
	r17.u64 = r21.u64;
	// b 0x825b2064
	goto loc_825B2064;
loc_825B19A8:
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// rlwinm r28,r18,2,0,29
	r28.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// add r10,r28,r10
	ctx.r10.u64 = r28.u64 + ctx.r10.u64;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// lwz r11,-4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// lhz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U16(r27.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi. r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// beq 0x825b19fc
	if (ctx.cr0.eq) goto loc_825B19FC;
	// li r7,13859
	ctx.r7.s64 = 13859;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x824ea978
	ctx.lr = 0x825B19FC;
	sub_824EA978(ctx, base);
loc_825B19FC:
	// lhz r11,2(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 2);
	// addi r10,r1,496
	ctx.r10.s64 = ctx.r1.s64 + 496;
	// stw r18,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, r18.u32);
	// addi r7,r1,296
	ctx.r7.s64 = ctx.r1.s64 + 296;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r11.u32);
	// stwx r11,r28,r10
	REX_STORE_U32(r28.u32 + ctx.r10.u32, ctx.r11.u32);
loc_825B1A18:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r4,r29,13152
	ctx.r4.s64 = r29.s64 + 13152;
	// bl 0x825a6210
	ctx.lr = 0x825B1A28;
	sub_825A6210(ctx, base);
	// lwz r11,12028(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12028);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12028(r29)
	REX_STORE_U32(r29.u32 + 12028, ctx.r11.u32);
	// b 0x825b222c
	goto loc_825B222C;
loc_825B1A38:
	// rlwinm r11,r18,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x825b1988
	if (ctx.cr6.eq) goto loc_825B1988;
	// addi r10,r1,496
	ctx.r10.s64 = ctx.r1.s64 + 496;
	// stw r18,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, r18.u32);
	// addi r7,r1,184
	ctx.r7.s64 = ctx.r1.s64 + 184;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r4,r29,13152
	ctx.r4.s64 = r29.s64 + 13152;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// bl 0x825a6210
	ctx.lr = 0x825B1A78;
	sub_825A6210(ctx, base);
	// lwz r11,12028(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12028);
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12028(r29)
	REX_STORE_U32(r29.u32 + 12028, ctx.r11.u32);
	// b 0x825b206c
	goto loc_825B206C;
loc_825B1A8C:
	// rlwinm r11,r18,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x825b1ab0
	if (!ctx.cr6.eq) goto loc_825B1AB0;
	// stwx r21,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r21.u32);
	// addi r18,r18,-1
	r18.s64 = r18.s64 + -1;
	// b 0x825b1988
	goto loc_825B1988;
loc_825B1AB0:
	// addi r10,r1,496
	ctx.r10.s64 = ctx.r1.s64 + 496;
	// stw r18,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, r18.u32);
	// addi r7,r1,280
	ctx.r7.s64 = ctx.r1.s64 + 280;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r4,r29,13152
	ctx.r4.s64 = r29.s64 + 13152;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// bl 0x825a6210
	ctx.lr = 0x825B1AD8;
	sub_825A6210(ctx, base);
	// addi r18,r18,-1
	r18.s64 = r18.s64 + -1;
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// b 0x825b206c
	goto loc_825B206C;
loc_825B1AE4:
	// rlwinm r10,r18,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x825b1b10
	if (!ctx.cr6.eq) goto loc_825B1B10;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r1,640
	ctx.r9.s64 = ctx.r1.s64 + 640;
	// rlwinm r10,r10,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// stwx r19,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r19.u32);
loc_825B1B10:
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r1,216
	ctx.r7.s64 = ctx.r1.s64 + 216;
	// stw r10,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r11,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// b 0x825b1a18
	goto loc_825B1A18;
loc_825B1B2C:
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 0);
	// clrlwi. r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b1b64
	if (ctx.cr0.eq) goto loc_825B1B64;
	// li r7,14017
	ctx.r7.s64 = 14017;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x824ea978
	ctx.lr = 0x825B1B64;
	sub_824EA978(ctx, base);
loc_825B1B64:
	// rlwinm r11,r18,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x825b1b88
	if (!ctx.cr6.eq) goto loc_825B1B88;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r10,r1,640
	ctx.r10.s64 = ctx.r1.s64 + 640;
	// rlwinm r11,r11,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFC;
	// stwx r19,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r19.u32);
loc_825B1B88:
	// lhz r11,2(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 2);
	// addi r7,r1,264
	ctx.r7.s64 = ctx.r1.s64 + 264;
	// lhz r10,2(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 2);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r11,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r11.u32);
	// stw r10,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r10.u32);
	// b 0x825b1a18
	goto loc_825B1A18;
loc_825B1BA4:
	// rlwinm r11,r18,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r21,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, r21.u32);
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// stw r21,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, r21.u32);
	// addi r7,r1,248
	ctx.r7.s64 = ctx.r1.s64 + 248;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// stwx r21,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r21.u32);
	// b 0x825b1a18
	goto loc_825B1A18;
loc_825B1BC8:
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// addi r10,r1,640
	ctx.r10.s64 = ctx.r1.s64 + 640;
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x825b1bf8
	if (!ctx.cr6.eq) goto loc_825B1BF8;
	// rlwinm r10,r18,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// stwx r19,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r19.u32);
loc_825B1BF8:
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// stw r21,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r21.u32);
	// li r6,128
	ctx.r6.s64 = 128;
loc_825B1C08:
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
loc_825B1C0C:
	// addi r4,r29,13152
	ctx.r4.s64 = r29.s64 + 13152;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a6210
	ctx.lr = 0x825B1C18;
	sub_825A6210(ctx, base);
	// b 0x825b222c
	goto loc_825B222C;
loc_825B1C1C:
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// rlwinm r27,r18,2,0,29
	r27.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// cmplwi cr6,r15,4
	ctx.cr6.compare<uint32_t>(r15.u32, 4, ctx.xer);
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// ble cr6,0x825b1c64
	if (!ctx.cr6.gt) goto loc_825B1C64;
	// li r7,14119
	ctx.r7.s64 = 14119;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x824ea978
	ctx.lr = 0x825B1C64;
	sub_824EA978(ctx, base);
loc_825B1C64:
	// addi r28,r31,4
	r28.s64 = r31.s64 + 4;
	// rlwinm r11,r15,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// addi r26,r28,4
	r26.s64 = r28.s64 + 4;
	// lhz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U16(r28.u32 + 0);
	// stwx r18,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r18.u32);
	// clrlwi r11,r9,26
	ctx.r11.u64 = ctx.r9.u32 & 0x3F;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x825b1ca0
	if (ctx.cr6.eq) goto loc_825B1CA0;
	// li r7,14127
	ctx.r7.s64 = 14127;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x824ea978
	ctx.lr = 0x825B1CA0;
	sub_824EA978(ctx, base);
loc_825B1CA0:
	// lhz r10,2(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 2);
	// addi r9,r1,496
	ctx.r9.s64 = ctx.r1.s64 + 496;
	// stw r21,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, r21.u32);
	// addi r7,r1,168
	ctx.r7.s64 = ctx.r1.s64 + 168;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r4,r29,13152
	ctx.r4.s64 = r29.s64 + 13152;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r10,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stwx r10,r27,r9
	REX_STORE_U32(r27.u32 + ctx.r9.u32, ctx.r10.u32);
	// bl 0x825a6210
	ctx.lr = 0x825B1CD0;
	sub_825A6210(ctx, base);
	// lwz r11,12028(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12028);
	// mr r7,r16
	ctx.r7.u64 = r16.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,12028(r29)
	REX_STORE_U32(r29.u32 + 12028, ctx.r11.u32);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r15,16,3,15
	ctx.r11.u64 = (__builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 16) & 0x1FFF0000) | (ctx.r11.u64 & 0xFFFFFFFFE000FFFF);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x825b0438
	ctx.lr = 0x825B1D00;
	sub_825B0438(ctx, base);
	// mr r20,r19
	r20.u64 = r19.u64;
	// b 0x825b2068
	goto loc_825B2068;
loc_825B1D08:
	// rlwinm r11,r15,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r19,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r19.u32);
	// b 0x825b1984
	goto loc_825B1984;
loc_825B1D24:
	// rlwinm r11,r15,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// mr r17,r21
	r17.u64 = r21.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r19,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r19.u32);
	// b 0x825b2048
	goto loc_825B2048;
loc_825B1D44:
	// rlwinm r28,r18,2,0,29
	r28.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r11,r1,496
	ctx.r11.s64 = ctx.r1.s64 + 496;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r1,200
	ctx.r7.s64 = ctx.r1.s64 + 200;
	// stw r10,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// li r6,512
	ctx.r6.s64 = 512;
	// addi r4,r29,13152
	ctx.r4.s64 = r29.s64 + 13152;
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// bl 0x825a6210
	ctx.lr = 0x825B1D74;
	sub_825A6210(ctx, base);
	// lwz r11,12028(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12028);
	// mr r7,r16
	ctx.r7.u64 = r16.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,12028(r29)
	REX_STORE_U32(r29.u32 + 12028, ctx.r11.u32);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r15,16,3,15
	ctx.r11.u64 = (__builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 16) & 0x1FFF0000) | (ctx.r11.u64 & 0xFFFFFFFFE000FFFF);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x825b0438
	ctx.lr = 0x825B1DA4;
	sub_825B0438(ctx, base);
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// addi r26,r31,4
	r26.s64 = r31.s64 + 4;
	// mr r20,r19
	r20.u64 = r19.u64;
	// addi r18,r18,-1
	r18.s64 = r18.s64 + -1;
	// addi r15,r15,-1
	r15.s64 = r15.s64 + -1;
	// stwx r21,r28,r11
	REX_STORE_U32(r28.u32 + ctx.r11.u32, r21.u32);
	// b 0x825b2068
	goto loc_825B2068;
loc_825B1DC0:
	// stw r21,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, r21.u32);
	// addi r7,r1,232
	ctx.r7.s64 = ctx.r1.s64 + 232;
	// stw r21,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, r21.u32);
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x825b1c08
	goto loc_825B1C08;
loc_825B1DD8:
	// lwz r11,16776(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16776);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b1e00
	if (ctx.cr6.eq) goto loc_825B1E00;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// addi r4,r29,13152
	ctx.r4.s64 = r29.s64 + 13152;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a6210
	ctx.lr = 0x825B1DFC;
	sub_825A6210(ctx, base);
	// b 0x825b1e0c
	goto loc_825B1E0C;
loc_825B1E00:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b1e34
	if (ctx.cr6.eq) goto loc_825B1E34;
loc_825B1E0C:
	// mr r7,r16
	ctx.r7.u64 = r16.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r20,r19
	r20.u64 = r19.u64;
	// bl 0x825b0438
	ctx.lr = 0x825B1E28;
	sub_825B0438(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r23
	r31.u64 = r23.u64;
	// b 0x825b1e38
	goto loc_825B1E38;
loc_825B1E34:
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
loc_825B1E38:
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// b 0x825b206c
	goto loc_825B206C;
loc_825B1E40:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// bne 0x825b1e54
	if (!ctx.cr0.eq) goto loc_825B1E54;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
loc_825B1E54:
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b1e6c
	if (ctx.cr0.eq) goto loc_825B1E6C;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_825B1E6C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b1e90
	if (ctx.cr6.eq) goto loc_825B1E90;
	// li r7,14401
	ctx.r7.s64 = 14401;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,120(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x824ea978
	ctx.lr = 0x825B1E90;
	sub_824EA978(ctx, base);
loc_825B1E90:
	// lhz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// bl 0x825ada88
	ctx.lr = 0x825B1EA4;
	sub_825ADA88(ctx, base);
	// b 0x825b222c
	goto loc_825B222C;
loc_825B1EA8:
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825b1ec4
	if (ctx.cr0.eq) goto loc_825B1EC4;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_825B1EC4:
	// lwz r17,84(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r22,88(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// beq 0x825b1ef0
	if (ctx.cr0.eq) goto loc_825B1EF0;
	// li r7,14432
	ctx.r7.s64 = 14432;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x824ea978
	ctx.lr = 0x825B1EEC;
	sub_824EA978(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_825B1EF0:
	// mr r27,r31
	r27.u64 = r31.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm. r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825b1f10
	if (ctx.cr0.eq) goto loc_825B1F10;
	// mr r28,r31
	r28.u64 = r31.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x825b1f14
	goto loc_825B1F14;
loc_825B1F10:
	// mr r28,r21
	r28.u64 = r21.u64;
loc_825B1F14:
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b1f38
	if (ctx.cr0.eq) goto loc_825B1F38;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,14453
	ctx.r7.s64 = 14453;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B1F34;
	sub_824EA978(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_825B1F38:
	// lhz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 0);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// ble cr6,0x825b1f60
	if (!ctx.cr6.gt) goto loc_825B1F60;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,14464
	ctx.r7.s64 = 14464;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B1F60;
	sub_824EA978(ctx, base);
loc_825B1F60:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// ble cr6,0x825b1f88
	if (!ctx.cr6.gt) goto loc_825B1F88;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// lwz r5,116(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,14465
	ctx.r7.s64 = 14465;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B1F88;
	sub_824EA978(ctx, base);
loc_825B1F88:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r7,0(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 0);
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r6,0(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r10,r11,22,20,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xFC0;
	// lhz r5,0(r24)
	ctx.r5.u64 = REX_LOAD_U16(r24.u32 + 0);
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwinm r11,r7,22,20,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 22) & 0xFC0;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,4200
	ctx.r10.s64 = ctx.r10.s64 + 4200;
	// addi r11,r11,4200
	ctx.r11.s64 = ctx.r11.s64 + 4200;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r7,r6,29
	ctx.r7.u64 = ctx.r6.u32 & 0x7;
	// clrlwi r5,r5,19
	ctx.r5.u64 = ctx.r5.u32 & 0x1FFF;
	// lwzx r6,r10,r29
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	// lwzx r4,r11,r29
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// bl 0x825a62a0
	ctx.lr = 0x825B1FD8;
	sub_825A62A0(ctx, base);
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// stw r19,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r19.u32);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// stw r5,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// stw r5,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// b 0x825b1c0c
	goto loc_825B1C0C;
loc_825B1FF4:
	// lhz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U16(r24.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// clrlwi r8,r10,19
	ctx.r8.u64 = ctx.r10.u32 & 0x1FFF;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// rlwinm r10,r8,3,21,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x7F8;
	// addi r9,r9,1624
	ctx.r9.s64 = ctx.r9.s64 + 1624;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r8,24,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0x7;
	// rlwinm r8,r8,21,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 21) & 0x3;
	// stw r8,12996(r10)
	REX_STORE_U32(ctx.r10.u32 + 12996, ctx.r8.u32);
	// stwx r7,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u32);
	// b 0x825b222c
	goto loc_825B222C;
loc_825B202C:
	// addi r11,r16,3292
	ctx.r11.s64 = r16.s64 + 3292;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b2048
	if (!ctx.cr6.eq) goto loc_825B2048;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// bne cr6,0x825b206c
	if (!ctx.cr6.eq) goto loc_825B206C;
loc_825B2048:
	// mr r7,r16
	ctx.r7.u64 = r16.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r20,r19
	r20.u64 = r19.u64;
	// bl 0x825b0438
	ctx.lr = 0x825B2064;
	sub_825B0438(ctx, base);
loc_825B2064:
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_825B2068:
	// mr r31,r23
	r31.u64 = r23.u64;
loc_825B206C:
	// lwz r22,80(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x825b222c
	if (ctx.cr6.eq) goto loc_825B222C;
loc_825B2078:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// lwz r9,124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// rlwinm r8,r10,2,14,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// addi r7,r9,456
	ctx.r7.s64 = ctx.r9.s64 + 456;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// lwzx r24,r8,r9
	r24.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r28,r8,r7
	r28.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// beq cr6,0x825b20c0
	if (ctx.cr6.eq) goto loc_825B20C0;
	// rlwinm r11,r18,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,352
	ctx.r9.s64 = ctx.r1.s64 + 352;
	// mr r25,r19
	r25.u64 = r19.u64;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825b20c4
	if (!ctx.cr6.eq) goto loc_825B20C4;
loc_825B20C0:
	// mr r25,r21
	r25.u64 = r21.u64;
loc_825B20C4:
	// cmplwi cr6,r4,112
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 112, ctx.xer);
	// bne cr6,0x825b20d0
	if (!ctx.cr6.eq) goto loc_825B20D0;
	// mr r25,r19
	r25.u64 = r19.u64;
loc_825B20D0:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// rlwinm r5,r10,16,19,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x1FFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a69d0
	ctx.lr = 0x825B20E0;
	sub_825A69D0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm. r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825b20f8
	if (ctx.cr0.eq) goto loc_825B20F8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x825b20fc
	goto loc_825B20FC;
loc_825B20F8:
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
loc_825B20FC:
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b2110
	if (ctx.cr0.eq) goto loc_825B2110;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x825b2114
	goto loc_825B2114;
loc_825B2110:
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
loc_825B2114:
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a6d48
	ctx.lr = 0x825B2128;
	sub_825A6D48(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// beq cr6,0x825b219c
	if (ctx.cr6.eq) goto loc_825B219C;
	// mr r28,r21
	r28.u64 = r21.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x825b21e8
	if (ctx.cr6.eq) goto loc_825B21E8;
loc_825B2140:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// subfic r7,r28,2
	ctx.xer.ca = r28.u32 <= 2;
	ctx.r7.u64 = static_cast<uint64_t>(2) - r28.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm. r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825b2164
	if (ctx.cr0.eq) goto loc_825B2164;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x825b2168
	goto loc_825B2168;
loc_825B2164:
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
loc_825B2168:
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b217c
	if (ctx.cr0.eq) goto loc_825B217C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x825b2180
	goto loc_825B2180;
loc_825B217C:
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
loc_825B2180:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a70a8
	ctx.lr = 0x825B218C;
	sub_825A70A8(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(r28.u32, r24.u32, ctx.xer);
	// blt cr6,0x825b2140
	if (ctx.cr6.lt) goto loc_825B2140;
	// b 0x825b21e8
	goto loc_825B21E8;
loc_825B219C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm. r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825b21bc
	if (ctx.cr0.eq) goto loc_825B21BC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x825b21c0
	goto loc_825B21C0;
loc_825B21BC:
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
loc_825B21C0:
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b21d4
	if (ctx.cr0.eq) goto loc_825B21D4;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x825b21d8
	goto loc_825B21D8;
loc_825B21D4:
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
loc_825B21D8:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a70a8
	ctx.lr = 0x825B21E8;
	sub_825A70A8(ctx, base);
loc_825B21E8:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r11,900
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 900, ctx.xer);
	// ble cr6,0x825b220c
	if (!ctx.cr6.gt) goto loc_825B220C;
	// li r7,14684
	ctx.r7.s64 = 14684;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x824ea978
	ctx.lr = 0x825B220C;
	sub_824EA978(ctx, base);
loc_825B220C:
	// lwz r10,10816(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 10816);
	// addic. r22,r22,-1
	ctx.xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,10816(r29)
	REX_STORE_U32(r29.u32 + 10816, ctx.r10.u32);
	// stw r11,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r11.u32);
	// bne 0x825b2078
	if (!ctx.cr0.eq) goto loc_825B2078;
loc_825B222C:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x825b2238
	if (ctx.cr6.eq) goto loc_825B2238;
	// mr r31,r26
	r31.u64 = r26.u64;
loc_825B2238:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// mr r17,r19
	r17.u64 = r19.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b16b4
	if (ctx.cr6.eq) goto loc_825B16B4;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x825b2270
	if (ctx.cr6.eq) goto loc_825B2270;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,14701
	ctx.r7.s64 = 14701;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r5,r11,-6228
	ctx.r5.s64 = ctx.r11.s64 + -6228;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B2270;
	sub_824EA978(ctx, base);
loc_825B2270:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825ade70
	ctx.lr = 0x825B2278;
	sub_825ADE70(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B228C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_825FD540) {
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
	// lwz r3,60(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,-31004
	ctx.r11.s64 = ctx.r11.s64 + -31004;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x825fd574
	if (ctx.cr6.eq) goto loc_825FD574;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825e18c0
	ctx.lr = 0x825FD574;
	sub_825E18C0(ctx, base);
loc_825FD574:
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825fd588
	if (ctx.cr6.eq) goto loc_825FD588;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825e18c0
	ctx.lr = 0x825FD588;
	sub_825E18C0(ctx, base);
loc_825FD588:
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825fd59c
	if (ctx.cr6.eq) goto loc_825FD59C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825e18c0
	ctx.lr = 0x825FD59C;
	sub_825E18C0(ctx, base);
loc_825FD59C:
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825fd5b0
	if (ctx.cr6.eq) goto loc_825FD5B0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825e18c0
	ctx.lr = 0x825FD5B0;
	sub_825E18C0(ctx, base);
loc_825FD5B0:
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825fd5c4
	if (ctx.cr6.eq) goto loc_825FD5C4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825e18c0
	ctx.lr = 0x825FD5C4;
	sub_825E18C0(ctx, base);
loc_825FD5C4:
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x825f7528
	ctx.lr = 0x825FD5CC;
	sub_825F7528(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,9944
	ctx.r11.s64 = ctx.r11.s64 + 9944;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8260A9D8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8260aa2c
	if (ctx.cr0.eq) goto loc_8260AA2C;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x8260aa20
	if (ctx.cr6.lt) goto loc_8260AA20;
	// beq cr6,0x8260aa14
	if (ctx.cr6.eq) goto loc_8260AA14;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x8260aa08
	if (ctx.cr6.lt) goto loc_8260AA08;
	// bne cr6,0x8260aa2c
	if (!ctx.cr6.eq) goto loc_8260AA2C;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,26,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3;
	// blr 
	return;
loc_8260AA08:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,28,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3;
	// blr 
	return;
loc_8260AA14:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,30,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// blr 
	return;
loc_8260AA20:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r3,r11,30
	ctx.r3.u64 = ctx.r11.u32 & 0x3;
	// blr 
	return;
loc_8260AA2C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8260BC08) {
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
	// addi r30,r3,44
	r30.s64 = ctx.r3.s64 + 44;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260BC38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260BC4C;
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

DEFINE_REX_FUNC(sub_8260D700) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8260dca8
	sub_8260DCA8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8260D730) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8260d708
	sub_8260D708(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8260D9E0) {
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
	ctx.lr = 0x8260D9E8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r25,r3,44
	r25.s64 = ctx.r3.s64 + 44;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260DA24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,375
	ctx.r11.s64 = 375;
	// divwu r11,r31,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? r31.u32 / ctx.r11.u32 : 0);
	// mulli r11,r11,375
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(375));
	// subf. r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8260da54
	if (ctx.cr0.eq) goto loc_8260DA54;
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// cmplwi cr6,r11,32000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32000, ctx.xer);
	// bge cr6,0x8260da48
	if (!ctx.cr6.lt) goto loc_8260DA48;
	// addi r11,r11,375
	ctx.r11.s64 = ctx.r11.s64 + 375;
loc_8260DA48:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// beq cr6,0x8260da54
	if (ctx.cr6.eq) goto loc_8260DA54;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_8260DA54:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8260d2c8
	ctx.lr = 0x8260DA6C;
	sub_8260D2C8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// blt 0x8260db60
	if (ctx.cr0.lt) goto loc_8260DB60;
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
	// li r4,148
	ctx.r4.s64 = 148;
	// bl 0x8260b5b8
	ctx.lr = 0x8260DA94;
	sub_8260B5B8(ctx, base);
	// lwz r26,84(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8260dac0
	if (ctx.cr0.eq) goto loc_8260DAC0;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// lwz r6,44(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 44);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82615f40
	ctx.lr = 0x8260DAB8;
	sub_82615F40(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8260dac4
	goto loc_8260DAC4;
loc_8260DAC0:
	// li r31,0
	r31.s64 = 0;
loc_8260DAC4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8260dadc
	if (!ctx.cr6.eq) goto loc_8260DADC;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// b 0x8260db60
	goto loc_8260DB60;
loc_8260DADC:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82615e38
	ctx.lr = 0x8260DAF0;
	sub_82615E38(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// blt 0x8260db2c
	if (ctx.cr0.lt) goto loc_8260DB2C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r26,4
	ctx.r3.s64 = r26.s64 + 4;
	// bl 0x82613af8
	ctx.lr = 0x8260DB08;
	sub_82613AF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8260db20
	if (ctx.cr0.eq) goto loc_8260DB20;
	// li r30,0
	r30.s64 = 0;
	// stw r31,0(r21)
	REX_STORE_U32(r21.u32 + 0, r31.u32);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// b 0x8260db60
	goto loc_8260DB60;
loc_8260DB20:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_8260DB2C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260DB44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260DB5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8264c3d0
	ctx.lr = 0x8260DB60;
	sub_8264C3D0(ctx, base);
loc_8260DB60:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260DB74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x8260db84
	if (!ctx.cr6.lt) goto loc_8260DB84;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8260b9b8
	ctx.lr = 0x8260DB84;
	sub_8260B9B8(ctx, base);
loc_8260DB84:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8261b718
	ctx.lr = 0x8260DB8C;
	sub_8261B718(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82615CE8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x8261b9d8
	sub_8261B9D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82615D40) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82615cf0
	sub_82615CF0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82615FC0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x8261cd50
	sub_8261CD50(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82616018) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82615fa0
	sub_82615FA0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826163C0) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r9,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,-14384
	ctx.r10.s64 = ctx.r10.s64 + -14384;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
loc_826163E4:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82616404
	if (!ctx.cr0.eq) goto loc_82616404;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x826163e4
	if (!ctx.cr6.eq) goto loc_826163E4;
loc_82616404:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82616428
	if (!ctx.cr0.eq) goto loc_82616428;
	// stw r3,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82616420;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82616430
	goto loc_82616430;
loc_82616428:
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x8260b7c8
	ctx.lr = 0x82616430;
	sub_8260B7C8(ctx, base);
loc_82616430:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82618E48) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8262acf8
	ctx.lr = 0x82618E70;
	sub_8262ACF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82618e88
	if (ctx.cr0.lt) goto loc_82618E88;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// bl 0x82618ce0
	ctx.lr = 0x82618E88;
	sub_82618CE0(ctx, base);
loc_82618E88:
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

DEFINE_REX_FUNC(sub_8261BD38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8261BD40;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261BD6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261BD8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x8261bda4
	if (ctx.cr0.lt) goto loc_8261BDA4;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,76(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 76);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8261BDA4;
	sub_826A1E70(ctx, base);
loc_8261BDA4:
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
	ctx.lr = 0x8261BDBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826256F8) {
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
	ctx.lr = 0x82625700;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// lwz r9,528(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 528);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r8,r3,32
	ctx.r8.s64 = ctx.r3.s64 + 32;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
loc_8262571C:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x82625748
	goto loc_82625748;
loc_82625724:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8262573c
	if (ctx.cr6.eq) goto loc_8262573C;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82625740
	goto loc_82625740;
loc_8262573C:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_82625740:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r27,60(r10)
	REX_STORE_U32(ctx.r10.u32 + 60, r27.u32);
loc_82625748:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82625724
	if (!ctx.cr6.eq) goto loc_82625724;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82625768
	if (ctx.cr6.eq) goto loc_82625768;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,40
	ctx.r8.s64 = ctx.r8.s64 + 40;
	// cmplwi cr6,r7,13
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 13, ctx.xer);
	// blt cr6,0x8262571c
	if (ctx.cr6.lt) goto loc_8262571C;
loc_82625768:
	// lwz r30,540(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 540);
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lwz r10,536(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 536);
	// lwz r28,552(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 552);
	// addi r29,r11,20576
	r29.s64 = ctx.r11.s64 + 20576;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826257c4
	if (ctx.cr6.eq) goto loc_826257C4;
	// lwz r3,532(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 532);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82625798
	if (ctx.cr6.eq) goto loc_82625798;
	// bl 0x8264c3d0
	ctx.lr = 0x82625794;
	sub_8264C3D0(ctx, base);
	// stw r27,532(r31)
	REX_STORE_U32(r31.u32 + 532, r27.u32);
loc_82625798:
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8260b5b8
	ctx.lr = 0x826257B0;
	sub_8260B5B8(ctx, base);
	// stw r3,532(r31)
	REX_STORE_U32(r31.u32 + 532, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82625818
	if (ctx.cr0.eq) goto loc_82625818;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r30,536(r31)
	REX_STORE_U32(r31.u32 + 536, r30.u32);
loc_826257C4:
	// lwz r11,548(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 548);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82625810
	if (!ctx.cr6.gt) goto loc_82625810;
	// lwz r3,544(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 544);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826257e4
	if (ctx.cr6.eq) goto loc_826257E4;
	// bl 0x8264c3d0
	ctx.lr = 0x826257E0;
	sub_8264C3D0(ctx, base);
	// stw r27,544(r31)
	REX_STORE_U32(r31.u32 + 544, r27.u32);
loc_826257E4:
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8260b5b8
	ctx.lr = 0x826257FC;
	sub_8260B5B8(ctx, base);
	// stw r3,544(r31)
	REX_STORE_U32(r31.u32 + 544, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82625818
	if (ctx.cr0.eq) goto loc_82625818;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r28,548(r31)
	REX_STORE_U32(r31.u32 + 548, r28.u32);
loc_82625810:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_82625818:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82625810
	goto loc_82625810;
}

DEFINE_REX_FUNC(sub_82629588) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,2580
	ctx.r10.s64 = ctx.r10.s64 + 2580;
	// addi r9,r9,2712
	ctx.r9.s64 = ctx.r9.s64 + 2712;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r8,r8,2668
	ctx.r8.s64 = ctx.r8.s64 + 2668;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r5,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
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
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// std r11,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r11.u64);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8262FBA0) {
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
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c80
	ctx.lr = 0x8262FBA8;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2ca8
	ctx.lr = 0x8262FBB0;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lwz r27,0(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r16,4(r3)
	r16.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r18,24(r3)
	r18.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r15,28(r3)
	r15.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r14,32(r3)
	r14.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// beq cr6,0x8262fbe4
	if (ctx.cr6.eq) goto loc_8262FBE4;
	// li r15,1
	r15.s64 = 1;
	// li r18,1
	r18.s64 = 1;
loc_8262FBE4:
	// lwz r30,16(r22)
	r30.u64 = REX_LOAD_U32(r22.u32 + 16);
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8262fc18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8262FC18;
	// bdzf 4*cr6+eq,0x8262fc28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8262FC28;
	// bdzf 4*cr6+eq,0x8262fc48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8262FC48;
	// bdzf 4*cr6+eq,0x8262fc38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8262FC38;
	// bdzf 4*cr6+eq,0x8262fc54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8262FC54;
	// bne cr6,0x8262fc60
	if (!ctx.cr6.eq) goto loc_8262FC60;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// li r17,1
	r17.s64 = 1;
	// addi r26,r11,12904
	r26.s64 = ctx.r11.s64 + 12904;
	// b 0x8262fc6c
	goto loc_8262FC6C;
loc_8262FC18:
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// li r17,2
	r17.s64 = 2;
	// addi r26,r11,-1208
	r26.s64 = ctx.r11.s64 + -1208;
	// b 0x8262fc6c
	goto loc_8262FC6C;
loc_8262FC28:
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// li r17,3
	r17.s64 = 3;
	// addi r26,r11,12952
	r26.s64 = ctx.r11.s64 + 12952;
	// b 0x8262fc6c
	goto loc_8262FC6C;
loc_8262FC38:
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// li r17,3
	r17.s64 = 3;
	// addi r26,r11,13024
	r26.s64 = ctx.r11.s64 + 13024;
	// b 0x8262fc6c
	goto loc_8262FC6C;
loc_8262FC48:
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r26,r11,-1168
	r26.s64 = ctx.r11.s64 + -1168;
	// b 0x8262fc68
	goto loc_8262FC68;
loc_8262FC54:
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r26,r11,13096
	r26.s64 = ctx.r11.s64 + 13096;
	// b 0x8262fc68
	goto loc_8262FC68;
loc_8262FC60:
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r26,r11,13144
	r26.s64 = ctx.r11.s64 + 13144;
loc_8262FC68:
	// li r17,4
	r17.s64 = 4;
loc_8262FC6C:
	// lwz r11,12(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8262ff04
	if (!ctx.cr6.eq) goto loc_8262FF04;
	// divwu. r3,r10,r18
	ctx.r3.u64 = uint32_t(r18.u32 ? ctx.r10.u32 / r18.u32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq 0x8262fef4
	if (ctx.cr0.eq) goto loc_8262FEF4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,8(r22)
	r31.u64 = REX_LOAD_U32(r22.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f8,32304(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32304);
	ctx.f8.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f11,22436(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 22436);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,2768(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2768);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,15504(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15504);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,15200(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15200);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,19036(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 19036);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,3716(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 3716);
	ctx.f6.f64 = double(temp.f32);
loc_8262FCC0:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8262fed8
	if (ctx.cr6.eq) goto loc_8262FED8;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
loc_8262FCD4:
	// fmr f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f6.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x8262feac
	if (ctx.cr6.eq) goto loc_8262FEAC;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
loc_8262FCF0:
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8262fd3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8262FD3C;
	// bdzf 4*cr6+eq,0x8262fd68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8262FD68;
	// bdzf 4*cr6+eq,0x8262fe10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8262FE10;
	// bdzf 4*cr6+eq,0x8262fdbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8262FDBC;
	// bdzf 4*cr6+eq,0x8262fe40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8262FE40;
	// bne cr6,0x8262fe70
	if (!ctx.cr6.eq) goto loc_8262FE70;
	// lbzx r29,r8,r27
	r29.u64 = REX_LOAD_U8(ctx.r8.u32 + r27.u32);
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// std r29,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, r29.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fsubs f2,f3,f10
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// fmuls f1,f2,f13
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmadds f0,f1,f9,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, ctx.f0.f64)));
	// b 0x8262fe94
	goto loc_8262FE94;
loc_8262FD3C:
	// lhz r29,0(r7)
	r29.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// extsh r29,r29
	r29.s64 = r29.s16;
	// std r29,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r29.u64);
	// lfd f5,88(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f0,f2,f7,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f2.f64, ctx.f7.f64, ctx.f0.f64)));
	// b 0x8262fe94
	goto loc_8262FE94;
loc_8262FD68:
	// add r29,r10,r27
	r29.u64 = ctx.r10.u64 + r27.u64;
	// lbzx r28,r10,r27
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + r27.u32);
	// add r26,r10,r27
	r26.u64 = ctx.r10.u64 + r27.u64;
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbz r29,2(r29)
	r29.u64 = REX_LOAD_U8(r29.u32 + 2);
	// lbz r26,1(r26)
	r26.u64 = REX_LOAD_U8(r26.u32 + 1);
	// rotlwi r29,r29,8
	r29.u64 = __builtin_rotateleft32(r29.u32, 8);
	// or r29,r29,r26
	r29.u64 = r29.u64 | r26.u64;
	// rlwinm r29,r29,8,0,23
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r28
	r29.u64 = r29.u64 | r28.u64;
	// rlwinm r29,r29,8,0,23
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r29,r29,12
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xFFF) != 0);
	r29.s64 = r29.s32 >> 12;
	// extsw r29,r29
	r29.s64 = r29.s32;
	// std r29,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, r29.u64);
	// lfd f5,96(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f0,f2,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f2.f64, ctx.f12.f64, ctx.f0.f64)));
	// b 0x8262fe94
	goto loc_8262FE94;
loc_8262FDBC:
	// add r29,r10,r27
	r29.u64 = ctx.r10.u64 + r27.u64;
	// lbzx r28,r10,r27
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + r27.u32);
	// add r26,r10,r27
	r26.u64 = ctx.r10.u64 + r27.u64;
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbz r29,2(r29)
	r29.u64 = REX_LOAD_U8(r29.u32 + 2);
	// lbz r26,1(r26)
	r26.u64 = REX_LOAD_U8(r26.u32 + 1);
	// rotlwi r29,r29,8
	r29.u64 = __builtin_rotateleft32(r29.u32, 8);
	// or r29,r29,r26
	r29.u64 = r29.u64 | r26.u64;
	// rlwinm r29,r29,8,0,23
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r28
	r29.u64 = r29.u64 | r28.u64;
	// rlwinm r29,r29,8,0,23
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r29,r29,8
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xFF) != 0);
	r29.s64 = r29.s32 >> 8;
	// extsw r29,r29
	r29.s64 = r29.s32;
	// std r29,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r29.u64);
	// lfd f5,104(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f0,f2,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f2.f64, ctx.f11.f64, ctx.f0.f64)));
	// b 0x8262fe94
	goto loc_8262FE94;
loc_8262FE10:
	// lwz r29,0(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// srawi r29,r29,12
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xFFF) != 0);
	r29.s64 = r29.s32 >> 12;
	// extsw r29,r29
	r29.s64 = r29.s32;
	// std r29,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r29.u64);
	// lfd f5,112(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f0,f2,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f2.f64, ctx.f12.f64, ctx.f0.f64)));
	// b 0x8262fe94
	goto loc_8262FE94;
loc_8262FE40:
	// lwz r29,0(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// srawi r29,r29,8
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xFF) != 0);
	r29.s64 = r29.s32 >> 8;
	// extsw r29,r29
	r29.s64 = r29.s32;
	// std r29,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, r29.u64);
	// lfd f5,120(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f0,f2,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f2.f64, ctx.f11.f64, ctx.f0.f64)));
	// b 0x8262fe94
	goto loc_8262FE94;
loc_8262FE70:
	// lwz r29,0(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lfsu f13,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// extsw r29,r29
	r29.s64 = r29.s32;
	// std r29,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, r29.u64);
	// lfd f5,128(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f0,f2,f8,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f2.f64, ctx.f8.f64, ctx.f0.f64)));
loc_8262FE94:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r18
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r18.u32, ctx.xer);
	// blt cr6,0x8262fcf0
	if (ctx.cr6.lt) goto loc_8262FCF0;
loc_8262FEAC:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq cr6,0x8262fec4
	if (ctx.cr6.eq) goto loc_8262FEC4;
	// lfs f13,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f5,0(r6)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// b 0x8262fec8
	goto loc_8262FEC8;
loc_8262FEC4:
	// stfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_8262FEC8:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r5,r15
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r15.u32, ctx.xer);
	// blt cr6,0x8262fcd4
	if (ctx.cr6.lt) goto loc_8262FCD4;
loc_8262FED8:
	// mullw r11,r17,r18
	ctx.r11.s64 = int64_t(r17.s32) * int64_t(r18.s32);
	// rlwinm r10,r15,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// add r16,r10,r16
	r16.u64 = ctx.r10.u64 + r16.u64;
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8262fcc0
	if (ctx.cr6.lt) goto loc_8262FCC0;
loc_8262FEF4:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cf4
	ctx.lr = 0x8262FF00;
	// b 0x826a1cd0
	return;
loc_8262FF04:
	// divwu. r19,r10,r18
	r19.u64 = uint32_t(r18.u32 ? ctx.r10.u32 / r18.u32 : 0);
	ctx.cr0.compare<int32_t>(r19.s32, 0, ctx.xer);
	// li r23,0
	r23.s64 = 0;
	// beq 0x8262fef4
	if (ctx.cr0.eq) goto loc_8262FEF4;
	// mullw r21,r17,r18
	r21.s64 = int64_t(r17.s32) * int64_t(r18.s32);
	// rlwinm r20,r15,2,0,29
	r20.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0xFFFFFFFC;
loc_8262FF18:
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// lwz r10,12(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 12);
	// beq cr6,0x8262ffd0
	if (ctx.cr6.eq) goto loc_8262FFD0;
	// clrldi r9,r23,32
	ctx.r9.u64 = r23.u64 & 0xFFFFFFFF;
	// mr r25,r16
	r25.u64 = r16.u64;
	// std r9,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// mr r24,r15
	r24.u64 = r15.u64;
	// addi r29,r10,-4
	r29.s64 = ctx.r10.s64 + -4;
	// addi r28,r11,-4
	r28.s64 = ctx.r11.s64 + -4;
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f28,f13
	f28.f64 = double(float(ctx.f13.f64));
loc_8262FF4C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f31,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	f31.f64 = double(temp.f32);
	// lfs f30,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	f30.f64 = double(temp.f32);
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// bctrl 
	ctx.lr = 0x8262FF60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmadds f0,f31,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(f31.f64, f28.f64, f30.f64)));
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplwi cr6,r18,1
	ctx.cr6.compare<uint32_t>(r18.u32, 1, ctx.xer);
	// fmuls f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// ble cr6,0x8262ffa8
	if (!ctx.cr6.gt) goto loc_8262FFA8;
	// add r30,r17,r27
	r30.u64 = r17.u64 + r27.u64;
	// addi r31,r18,-1
	r31.s64 = r18.s64 + -1;
loc_8262FF80:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfsu f30,4(r29)
	ctx.fpscr.disableFlushMode();
	ea = 4 + r29.u32;
	temp.u32 = REX_LOAD_U32(ea);
	f30.f64 = double(temp.f32);
	r29.u32 = ea;
	// lfsu f29,4(r28)
	ea = 4 + r28.u32;
	temp.u32 = REX_LOAD_U32(ea);
	f29.f64 = double(temp.f32);
	r28.u32 = ea;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// bctrl 
	ctx.lr = 0x8262FF94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmadds f0,f30,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(f30.f64, f28.f64, f29.f64)));
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r30,r30,r17
	r30.u64 = r30.u64 + r17.u64;
	// fmadds f31,f1,f0,f31
	f31.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, f31.f64)));
	// bne 0x8262ff80
	if (!ctx.cr0.eq) goto loc_8262FF80;
loc_8262FFA8:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq cr6,0x8262ffc0
	if (ctx.cr6.eq) goto loc_8262FFC0;
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + f31.f64));
	// stfs f13,0(r25)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r25.u32 + 0, temp.u32);
	// b 0x8262ffc4
	goto loc_8262FFC4;
loc_8262FFC0:
	// stfs f31,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r25.u32 + 0, temp.u32);
loc_8262FFC4:
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// bne 0x8262ff4c
	if (!ctx.cr0.eq) goto loc_8262FF4C;
loc_8262FFD0:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// add r27,r21,r27
	r27.u64 = r21.u64 + r27.u64;
	// add r16,r20,r16
	r16.u64 = r20.u64 + r16.u64;
	// cmplw cr6,r23,r19
	ctx.cr6.compare<uint32_t>(r23.u32, r19.u32, ctx.xer);
	// blt cr6,0x8262ff18
	if (ctx.cr6.lt) goto loc_8262FF18;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cf4
	ctx.lr = 0x8262FFF0;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8264CE48) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82794054
	__imp__NetDll_WSACleanup(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8264CEC8) {
	REX_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827940b4
	__imp__NetDll_listen(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8264CFC0) {
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
	// b 0x82794124
	__imp__NetDll_send(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8264D888) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stw r3,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8264d8b8
	if (!ctx.cr6.gt) goto loc_8264D8B8;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
loc_8264D8B8:
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// bl 0x823f0008
	ctx.lr = 0x8264D8C0;
	sub_823F0008(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8264d8d0
	if (ctx.cr6.eq) goto loc_8264D8D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r11.u32);
loc_8264D8D0:
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

DEFINE_REX_FUNC(sub_8264E700) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8264E708;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8264fb08
	ctx.lr = 0x8264E728;
	sub_8264FB08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264e748
	if (ctx.cr0.lt) goto loc_8264E748;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8264e748
	if (ctx.cr0.eq) goto loc_8264E748;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264fad8
	ctx.lr = 0x8264E748;
	sub_8264FAD8(ctx, base);
loc_8264E748:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8264F6F0) {
	REX_FUNC_PROLOGUE();
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8264f71c
	if (!ctx.cr6.lt) goto loc_8264F71C;
	// lis r3,-32744
	ctx.r3.s64 = -2145910784;
	// stw r9,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// ori r3,r3,8193
	ctx.r3.u64 = ctx.r3.u64 | 8193;
	// blr 
	return;
loc_8264F71C:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82650688) {
	REX_FUNC_PROLOGUE();
	// lwz r11,396(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 396);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm. r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826506a0
	if (ctx.cr0.eq) goto loc_826506A0;
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x826506ac
	goto loc_826506AC;
loc_826506A0:
	// rlwinm. r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826506ac
	if (ctx.cr0.eq) goto loc_826506AC;
	// li r3,16
	ctx.r3.s64 = 16;
loc_826506AC:
	// rlwinm. r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826506c0
	if (ctx.cr0.eq) goto loc_826506C0;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// ori r3,r11,32
	ctx.r3.u64 = ctx.r11.u64 | 32;
	// blr 
	return;
loc_826506C0:
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// ori r3,r11,64
	ctx.r3.u64 = ctx.r11.u64 | 64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826534B0) {
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
	ctx.lr = 0x826534B8;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,560(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 560);
	// li r24,0
	r24.s64 = 0;
	// mr r23,r24
	r23.u64 = r24.u64;
	// mr r25,r24
	r25.u64 = r24.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x826534e0
	if (!ctx.cr6.gt) goto loc_826534E0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,4336
	ctx.r3.u64 = ctx.r3.u64 | 4336;
	// b 0x82653708
	goto loc_82653708;
loc_826534E0:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82653700
	if (ctx.cr6.lt) goto loc_82653700;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x82653700
	if (!ctx.cr6.lt) goto loc_82653700;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8265351c
	if (ctx.cr6.eq) goto loc_8265351C;
	// lwz r11,396(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 396);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82653514
	if (!ctx.cr0.eq) goto loc_82653514;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82653708
	goto loc_82653708;
loc_82653514:
	// mr r26,r24
	r26.u64 = r24.u64;
	// b 0x82653544
	goto loc_82653544;
loc_8265351C:
	// mr r31,r24
	r31.u64 = r24.u64;
	// addi r11,r3,380
	ctx.r11.s64 = ctx.r3.s64 + 380;
loc_82653524:
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82653540
	if (!ctx.cr6.eq) goto loc_82653540;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// blt cr6,0x82653524
	if (ctx.cr6.lt) goto loc_82653524;
loc_82653540:
	// li r26,4
	r26.s64 = 4;
loc_82653544:
	// lwz r11,248(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// addi r27,r3,248
	r27.s64 = ctx.r3.s64 + 248;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// beq cr6,0x826535e8
	if (ctx.cr6.eq) goto loc_826535E8;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826535e8
	if (ctx.cr0.eq) goto loc_826535E8;
loc_82653560:
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r11,r28,-92
	ctx.r11.s64 = r28.s64 + -92;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// subf r30,r31,r27
	r30.u64 = r27.u64 - r31.u64;
	// subfic r30,r30,0
	ctx.xer.ca = r30.u32 <= 0;
	r30.u64 = static_cast<uint64_t>(0) - r30.u64;
	// subfe r30,r30,r30
	temp.u8 = (~r30.u32 + r30.u32 < ~r30.u32) | (~r30.u32 + r30.u32 + ctx.xer.ca < ctx.xer.ca);
	r30.u64 = ~r30.u64 + r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r30,r31
	r28.u64 = r30.u64 & r31.u64;
	// beq cr6,0x826535ac
	if (ctx.cr6.eq) goto loc_826535AC;
	// mr r31,r24
	r31.u64 = r24.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
loc_82653588:
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826535a4
	if (ctx.cr6.eq) goto loc_826535A4;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r31,r6
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82653588
	if (ctx.cr6.lt) goto loc_82653588;
loc_826535A4:
	// cmplw cr6,r31,r6
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x826535e0
	if (!ctx.cr6.lt) goto loc_826535E0;
loc_826535AC:
	// lwz r31,24(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// clrldi r29,r8,32
	r29.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// addi r31,r31,13
	r31.s64 = r31.s64 + 13;
	// rlwinm r31,r31,3,0,28
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r30,r31,r11
	r30.u64 = REX_LOAD_U64(r31.u32 + ctx.r11.u32);
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// stdx r30,r31,r11
	REX_STORE_U64(r31.u32 + ctx.r11.u32, r30.u64);
	// lwz r31,24(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// addi r31,r31,66
	r31.s64 = r31.s64 + 66;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r31,r11
	r30.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stwx r30,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, r30.u32);
loc_826535E0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82653560
	if (!ctx.cr6.eq) goto loc_82653560;
loc_826535E8:
	// lwz r29,468(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// rlwinm. r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826536bc
	if (ctx.cr0.eq) goto loc_826536BC;
	// lwz r11,740(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 740);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826536b8
	if (!ctx.cr0.eq) goto loc_826536B8;
	// clrlwi r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	// stb r24,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, r24.u8);
	// addi r23,r1,144
	r23.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r25,1
	r25.s64 = 1;
	// clrlwi r26,r11,24
	r26.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r1,145
	ctx.r11.s64 = ctx.r1.s64 + 145;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x826536b0
	if (ctx.cr6.eq) goto loc_826536B0;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8265362C:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,145
	ctx.r5.s64 = ctx.r1.s64 + 145;
	// li r28,1
	r28.s64 = 1;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// addi r6,r1,145
	ctx.r6.s64 = ctx.r1.s64 + 145;
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r31,100(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 100);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// slw r5,r28,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r5.u8 & 0x3F));
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// bge cr6,0x8265368c
	if (!ctx.cr6.lt) goto loc_8265368C;
loc_82653658:
	// lwz r28,0(r6)
	r28.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(r28.u32, r31.u32, ctx.xer);
	// beq cr6,0x82653674
	if (ctx.cr6.eq) goto loc_82653674;
	// addi r6,r6,5
	ctx.r6.s64 = ctx.r6.s64 + 5;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82653658
	if (ctx.cr6.lt) goto loc_82653658;
	// b 0x82653684
	goto loc_82653684;
loc_82653674:
	// lbz r28,4(r6)
	r28.u64 = REX_LOAD_U8(ctx.r6.u32 + 4);
	// clrlwi r27,r5,24
	r27.u64 = ctx.r5.u32 & 0xFF;
	// or r28,r28,r27
	r28.u64 = r28.u64 | r27.u64;
	// stb r28,4(r6)
	REX_STORE_U8(ctx.r6.u32 + 4, r28.u8);
loc_82653684:
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826536a8
	if (ctx.cr6.lt) goto loc_826536A8;
loc_8265368C:
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// addi r25,r25,5
	r25.s64 = r25.s64 + 5;
	// stb r5,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r5.u8);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// lbz r6,144(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 144);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stb r6,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, ctx.r6.u8);
loc_826536A8:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bdnz 0x8265362c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265362C;
loc_826536B0:
	// addi r5,r3,396
	ctx.r5.s64 = ctx.r3.s64 + 396;
	// li r6,1
	ctx.r6.s64 = 1;
loc_826536B8:
	// rlwinm r29,r29,0,30,28
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_826536BC:
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// stw r6,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r23,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// stw r25,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r25.u32);
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r24,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r24.u32);
	// sth r9,128(r1)
	REX_STORE_U16(ctx.r1.u32 + 128, ctx.r9.u16);
	// stb r26,130(r1)
	REX_STORE_U8(ctx.r1.u32 + 130, r26.u8);
	// bl 0x82652bb8
	ctx.lr = 0x826536FC;
	sub_82652BB8(ctx, base);
	// b 0x82653708
	goto loc_82653708;
loc_82653700:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1609
	ctx.r3.u64 = ctx.r3.u64 | 1609;
loc_82653708:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82661F28) {
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
	// lwz r11,292(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 292);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r5,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// rlwinm r11,r11,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82661f84
	if (ctx.cr6.eq) goto loc_82661F84;
	// lwz r11,236(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82661f84
	if (!ctx.cr6.eq) goto loc_82661F84;
	// lwz r3,72(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// li r5,26
	ctx.r5.s64 = 26;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82675bb0
	ctx.lr = 0x82661F74;
	sub_82675BB0(ctx, base);
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// rlwimi r11,r10,19,12,12
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x80000) | (ctx.r11.u64 & 0xFFFFFFFFFFF7FFFF);
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
loc_82661F84:
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

DEFINE_REX_FUNC(sub_82664F98) {
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
	ctx.lr = 0x82664FA0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,31396
	ctx.r11.s64 = ctx.r11.s64 + 31396;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// bl 0x82673160
	ctx.lr = 0x82664FD4;
	sub_82673160(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r11,-10812
	ctx.r11.s64 = ctx.r11.s64 + -10812;
	// addi r10,r10,-10880
	ctx.r10.s64 = ctx.r10.s64 + -10880;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r27,r31,388
	r27.s64 = r31.s64 + 388;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82670628
	ctx.lr = 0x82664FFC;
	sub_82670628(ctx, base);
	// addi r11,r28,32
	ctx.r11.s64 = r28.s64 + 32;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82670628
	ctx.lr = 0x82665010;
	sub_82670628(ctx, base);
	// stw r28,128(r31)
	REX_STORE_U32(r31.u32 + 128, r28.u32);
	// addi r3,r31,132
	ctx.r3.s64 = r31.s64 + 132;
	// bl 0x82793894
	ctx.lr = 0x8266501C;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32646
	ctx.r11.s64 = -2139488256;
	// stw r25,160(r31)
	REX_STORE_U32(r31.u32 + 160, r25.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// ori r11,r11,4107
	ctx.r11.u64 = ctx.r11.u64 | 4107;
	// stw r30,164(r31)
	REX_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r30,168(r31)
	REX_STORE_U32(r31.u32 + 168, r30.u32);
	// stw r11,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r11.u32);
	// addi r11,r31,188
	ctx.r11.s64 = r31.s64 + 188;
	// stw r30,172(r31)
	REX_STORE_U32(r31.u32 + 172, r30.u32);
	// stw r30,180(r31)
	REX_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r26,184(r31)
	REX_STORE_U32(r31.u32 + 184, r26.u32);
	// beq cr6,0x82665060
	if (ctx.cr6.eq) goto loc_82665060;
	// lhz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 0);
	// sth r10,188(r31)
	REX_STORE_U16(r31.u32 + 188, ctx.r10.u16);
	// lhz r11,2(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 2);
	// sth r11,190(r31)
	REX_STORE_U16(r31.u32 + 190, ctx.r11.u16);
	// b 0x8266506c
	goto loc_8266506C;
loc_82665060:
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,188(r31)
	REX_STORE_U16(r31.u32 + 188, ctx.r10.u16);
	// sth r10,190(r31)
	REX_STORE_U16(r31.u32 + 190, ctx.r10.u16);
loc_8266506C:
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r30,192(r31)
	REX_STORE_U32(r31.u32 + 192, r30.u32);
	// addi r11,r31,240
	ctx.r11.s64 = r31.s64 + 240;
	// stw r30,196(r31)
	REX_STORE_U32(r31.u32 + 196, r30.u32);
	// stw r9,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r9.u32);
	// addi r10,r31,248
	ctx.r10.s64 = r31.s64 + 248;
	// stw r30,204(r31)
	REX_STORE_U32(r31.u32 + 204, r30.u32);
	// addi r9,r31,256
	ctx.r9.s64 = r31.s64 + 256;
	// stw r30,208(r31)
	REX_STORE_U32(r31.u32 + 208, r30.u32);
	// li r5,68
	ctx.r5.s64 = 68;
	// stw r30,212(r31)
	REX_STORE_U32(r31.u32 + 212, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,216(r31)
	REX_STORE_U32(r31.u32 + 216, r30.u32);
	// addi r3,r31,268
	ctx.r3.s64 = r31.s64 + 268;
	// stw r30,220(r31)
	REX_STORE_U32(r31.u32 + 220, r30.u32);
	// stw r30,224(r31)
	REX_STORE_U32(r31.u32 + 224, r30.u32);
	// stw r30,228(r31)
	REX_STORE_U32(r31.u32 + 228, r30.u32);
	// stw r30,232(r31)
	REX_STORE_U32(r31.u32 + 232, r30.u32);
	// stw r30,236(r31)
	REX_STORE_U32(r31.u32 + 236, r30.u32);
	// stw r11,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r11.u32);
	// stw r11,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r11.u32);
	// stw r10,248(r31)
	REX_STORE_U32(r31.u32 + 248, ctx.r10.u32);
	// stw r10,252(r31)
	REX_STORE_U32(r31.u32 + 252, ctx.r10.u32);
	// stw r9,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r9.u32);
	// stw r9,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r9.u32);
	// stw r30,264(r31)
	REX_STORE_U32(r31.u32 + 264, r30.u32);
	// bl 0x826a2e60
	ctx.lr = 0x826650D8;
	sub_826A2E60(ctx, base);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// stw r30,336(r31)
	REX_STORE_U32(r31.u32 + 336, r30.u32);
	// stw r30,340(r31)
	REX_STORE_U32(r31.u32 + 340, r30.u32);
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// stw r30,344(r31)
	REX_STORE_U32(r31.u32 + 344, r30.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,22088(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 22088);
	// stw r11,348(r31)
	REX_STORE_U32(r31.u32 + 348, ctx.r11.u32);
	// stw r30,352(r31)
	REX_STORE_U32(r31.u32 + 352, r30.u32);
	// stw r30,356(r31)
	REX_STORE_U32(r31.u32 + 356, r30.u32);
	// lhz r11,-6132(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + -6132);
	// sth r11,384(r31)
	REX_STORE_U16(r31.u32 + 384, ctx.r11.u16);
	// bl 0x82670628
	ctx.lr = 0x82665110;
	sub_82670628(ctx, base);
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// stw r30,428(r31)
	REX_STORE_U32(r31.u32 + 428, r30.u32);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r4,r9,-6156
	ctx.r4.s64 = ctx.r9.s64 + -6156;
	// addi r3,r31,360
	ctx.r3.s64 = r31.s64 + 360;
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r11,-6128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -6128);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,22,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x400000;
	// stw r11,428(r31)
	REX_STORE_U32(r31.u32 + 428, ctx.r11.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,22084(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 22084);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r9,r11,21,10,10
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x200000) | (ctx.r9.u64 & 0xFFFFFFFFFFDFFFFF);
	// stw r9,428(r31)
	REX_STORE_U32(r31.u32 + 428, ctx.r9.u32);
	// bl 0x826a1e70
	ctx.lr = 0x8266515C;
	sub_826A1E70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_826719F8) {
	REX_FUNC_PROLOGUE();
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// b 0x82671a78
	goto loc_82671A78;
loc_82671A08:
	// lwz r9,28(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// addi r11,r8,-12
	ctx.r11.s64 = ctx.r8.s64 + -12;
	// rlwinm. r10,r9,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82671a20
	if (!ctx.cr0.eq) goto loc_82671A20;
	// rlwinm. r10,r9,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82671a28
	if (ctx.cr0.eq) goto loc_82671A28;
loc_82671A20:
	// rlwinm. r10,r9,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82671a90
	if (!ctx.cr0.eq) goto loc_82671A90;
loc_82671A28:
	// rlwinm. r10,r9,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82671a74
	if (ctx.cr0.eq) goto loc_82671A74;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82671a90
	if (!ctx.cr6.lt) goto loc_82671A90;
	// lis r6,-32646
	ctx.r6.s64 = -2139488256;
	// ori r6,r6,4117
	ctx.r6.u64 = ctx.r6.u64 | 4117;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82671a90
	if (ctx.cr6.eq) goto loc_82671A90;
	// lis r6,-32646
	ctx.r6.s64 = -2139488256;
	// ori r6,r6,4118
	ctx.r6.u64 = ctx.r6.u64 | 4118;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82671a90
	if (ctx.cr6.eq) goto loc_82671A90;
	// rlwinm. r10,r9,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82671a90
	if (ctx.cr0.eq) goto loc_82671A90;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,240(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 240);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82671a90
	if (ctx.cr6.eq) goto loc_82671A90;
loc_82671A74:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
loc_82671A78:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// bne 0x82671a08
	if (!ctx.cr0.eq) goto loc_82671A08;
	// blr 
	return;
loc_82671A90:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82675938) {
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
	ctx.lr = 0x82675940;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82675964
	if (ctx.cr6.lt) goto loc_82675964;
	// lis r29,-32646
	r29.s64 = -2139488256;
	// ori r29,r29,4113
	r29.u64 = r29.u64 | 4113;
loc_82675964:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r30,r31,28
	r30.s64 = r31.s64 + 28;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x82675a44
	if (ctx.cr6.eq) goto loc_82675A44;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82675a44
	if (ctx.cr0.eq) goto loc_82675A44;
loc_82675980:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r4,r8,-4
	ctx.r4.s64 = ctx.r8.s64 + -4;
	// lwz r10,20(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// subf r9,r11,r30
	ctx.r9.u64 = r30.u64 - ctx.r11.u64;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bne cr6,0x82675a3c
	if (!ctx.cr6.eq) goto loc_82675A3C;
	// lwz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82675a3c
	if (ctx.cr6.eq) goto loc_82675A3C;
	// lwz r9,40(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,44(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// addi r9,r9,29
	ctx.r9.s64 = ctx.r9.s64 + 29;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// beq cr6,0x82675a3c
	if (ctx.cr6.eq) goto loc_82675A3C;
loc_826759D4:
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r28.u32, ctx.xer);
	// beq cr6,0x826759f0
	if (ctx.cr6.eq) goto loc_826759F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x826759d4
	if (ctx.cr6.lt) goto loc_826759D4;
loc_826759F0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82675a3c
	if (!ctx.cr6.lt) goto loc_82675A3C;
	// addi r11,r11,30
	ctx.r11.s64 = ctx.r11.s64 + 30;
	// lis r10,4626
	ctx.r10.s64 = 303169536;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r10,4626
	ctx.r10.u64 = ctx.r10.u64 | 4626;
	// lwzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82675a3c
	if (!ctx.cr6.eq) goto loc_82675A3C;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82674aa8
	ctx.lr = 0x82675A24;
	sub_82674AA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82675a44
	if (!ctx.cr0.eq) goto loc_82675A44;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x82675a44
	if (ctx.cr6.eq) goto loc_82675A44;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82675A3C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82675980
	if (!ctx.cr6.eq) goto loc_82675980;
loc_82675A44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82679830) {
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
	// lbz r11,1184(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1184);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,4
	ctx.r9.s64 = 4;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stb r9,1185(r3)
	REX_STORE_U8(ctx.r3.u32 + 1185, ctx.r9.u8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r11,1184(r3)
	REX_STORE_U8(ctx.r3.u32 + 1184, ctx.r11.u8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826797d8
	ctx.lr = 0x8267986C;
	sub_826797D8(ctx, base);
	// lbz r11,1184(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1184);
	// lwz r10,1188(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1188);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// rlwimi r10,r30,30,1,1
	ctx.r10.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// stb r11,1184(r31)
	REX_STORE_U8(r31.u32 + 1184, ctx.r11.u8);
	// stw r10,1188(r31)
	REX_STORE_U32(r31.u32 + 1188, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_8267B7F8) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8267b854
	if (ctx.cr6.eq) goto loc_8267B854;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8267b840
	if (!ctx.cr6.eq) goto loc_8267B840;
	// lwz r11,1188(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1188);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267b854
	if (ctx.cr0.eq) goto loc_8267B854;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r11,1185(r3)
	REX_STORE_U8(ctx.r3.u32 + 1185, ctx.r11.u8);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stb r11,1184(r3)
	REX_STORE_U8(ctx.r3.u32 + 1184, ctx.r11.u8);
	// bl 0x826797d8
	ctx.lr = 0x8267B83C;
	sub_826797D8(ctx, base);
	// b 0x8267b854
	goto loc_8267B854;
loc_8267B840:
	// lis r11,-32646
	ctx.r11.s64 = -2139488256;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r11,r11,4113
	ctx.r11.u64 = ctx.r11.u64 | 4113;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// bl 0x82679830
	ctx.lr = 0x8267B854;
	sub_82679830(ctx, base);
loc_8267B854:
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

DEFINE_REX_FUNC(sub_8267F5C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8267F5D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,15(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 15);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8267f64c
	if (ctx.cr6.eq) goto loc_8267F64C;
	// lbz r11,14(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 14);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267f638
	if (ctx.cr0.eq) goto loc_8267F638;
	// lhz r11,1074(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 1074);
	// rotlwi r10,r11,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// ble cr6,0x8267f610
	if (!ctx.cr6.gt) goto loc_8267F610;
	// li r10,512
	ctx.r10.s64 = 512;
loc_8267F610:
	// lwz r11,652(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 652);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8267f684
	if (!ctx.cr6.lt) goto loc_8267F684;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r11,652(r31)
	REX_STORE_U32(r31.u32 + 652, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,640
	ctx.r3.s64 = r31.s64 + 640;
	// bl 0x826872e8
	ctx.lr = 0x8267F634;
	sub_826872E8(ctx, base);
	// b 0x8267f6a0
	goto loc_8267F6A0;
loc_8267F638:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82681598
	ctx.lr = 0x8267F648;
	sub_82681598(ctx, base);
	// b 0x8267f6a0
	goto loc_8267F6A0;
loc_8267F64C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U16(r30.u32 + 8);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82687208
	ctx.lr = 0x8267F65C;
	sub_82687208(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r11,680(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 680);
	// lhz r10,1(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 1);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8267f6a8
	if (ctx.cr6.eq) goto loc_8267F6A8;
	// lhz r9,1074(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 1074);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rotlwi r10,r9,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8267f690
	if (ctx.cr6.lt) goto loc_8267F690;
loc_8267F684:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4109
	ctx.r3.u64 = ctx.r3.u64 | 4109;
	// b 0x8267f6d0
	goto loc_8267F6D0;
loc_8267F690:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,656
	ctx.r3.s64 = r31.s64 + 656;
	// bl 0x82687498
	ctx.lr = 0x8267F6A0;
	sub_82687498(ctx, base);
loc_8267F6A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8267f6d0
	goto loc_8267F6D0;
loc_8267F6A8:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267b0f0
	ctx.lr = 0x8267F6C0;
	sub_8267B0F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8267f6d0
	if (ctx.cr0.lt) goto loc_8267F6D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267d008
	ctx.lr = 0x8267F6D0;
	sub_8267D008(ctx, base);
loc_8267F6D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82684450) {
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
	ctx.lr = 0x82684458;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// bl 0x826843c0
	ctx.lr = 0x82684480;
	sub_826843C0(ctx, base);
	// ld r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 120);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r30.u32, ctx.xer);
	// ble cr6,0x826844a8
	if (!ctx.cr6.gt) goto loc_826844A8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x826844ac
	goto loc_826844AC;
loc_826844A8:
	// add r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 + r30.u64;
loc_826844AC:
	// addi r8,r29,-1
	ctx.r8.s64 = r29.s64 + -1;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r10,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x826844c8
	if (!ctx.cr6.gt) goto loc_826844C8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_826844C8:
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// beq cr6,0x8268451c
	if (ctx.cr6.eq) goto loc_8268451C;
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r28.u32, ctx.xer);
	// blt cr6,0x8268451c
	if (ctx.cr6.lt) goto loc_8268451C;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(r26.u32, r25.u32, ctx.xer);
	// subf r10,r26,r25
	ctx.r10.u64 = r25.u64 - r26.u64;
	// blt cr6,0x826844f0
	if (ctx.cr6.lt) goto loc_826844F0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_826844F0:
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(r26.u32, r24.u32, ctx.xer);
	// subf r11,r26,r24
	ctx.r11.u64 = r24.u64 - r26.u64;
	// blt cr6,0x82684500
	if (ctx.cr6.lt) goto loc_82684500;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82684500:
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82684510
	if (!ctx.cr6.lt) goto loc_82684510;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x8268451c
	goto loc_8268451C;
loc_82684510:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8268451c
	if (!ctx.cr6.gt) goto loc_8268451C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8268451C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82689188) {
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
	ctx.lr = 0x82689190;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,232
	r27.s64 = ctx.r3.s64 + 232;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x827938a4
	ctx.lr = 0x826891B0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r30,18
	ctx.r11.s64 = r30.s64 + 18;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826891d0
	if (!ctx.cr6.eq) goto loc_826891D0;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,87
	r31.u64 = r31.u64 | 87;
	// b 0x826891e0
	goto loc_826891E0;
loc_826891D0:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8268c440
	ctx.lr = 0x826891DC;
	sub_8268C440(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_826891E0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827938b4
	ctx.lr = 0x826891E8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8268B7F8) {
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
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
loc_8268B80C:
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
	// bne 0x8268b80c
	if (!ctx.cr0.eq) goto loc_8268B80C;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8268b850
	if (!ctx.cr6.eq) goto loc_8268B850;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8268b850
	if (ctx.cr6.eq) goto loc_8268B850;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268B850;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268B850:
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

DEFINE_REX_FUNC(sub_8268F460) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r10,68(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 68);
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// subf r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r10.u64;
	// ld r8,24(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// std r9,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r9.u64);
	// addi r10,r3,360
	ctx.r10.s64 = ctx.r3.s64 + 360;
	// addi r7,r7,2048
	ctx.r7.s64 = ctx.r7.s64 + 2048;
	// stw r9,312(r3)
	REX_STORE_U32(ctx.r3.u32 + 312, ctx.r9.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r9,304(r3)
	REX_STORE_U32(ctx.r3.u32 + 304, ctx.r9.u32);
	// srawi r8,r7,11
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 11;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// sth r11,32(r3)
	REX_STORE_U16(ctx.r3.u32 + 32, ctx.r11.u16);
	// lwz r11,360(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 360);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8268f4c4
	if (!ctx.cr6.eq) goto loc_8268F4C4;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_8268F4C4:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r7,r3,352
	ctx.r7.s64 = ctx.r3.s64 + 352;
loc_8268F4DC:
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8268f4f4
	if (ctx.cr6.eq) goto loc_8268F4F4;
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// b 0x8268f4f8
	goto loc_8268F4F8;
loc_8268F4F4:
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_8268F4F8:
	// stw r11,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8268f518
	if (!ctx.cr6.eq) goto loc_8268F518;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_8268F518:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x8268f4dc
	if (!ctx.cr6.eq) goto loc_8268F4DC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826969D0) {
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
	ctx.lr = 0x826969D8;
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// bl 0x82695648
	ctx.lr = 0x826969FC;
	sub_82695648(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82696910
	ctx.lr = 0x82696A18;
	sub_82696910(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82696ad0
	if (!ctx.cr6.gt) goto loc_82696AD0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// subf r7,r31,r10
	ctx.r7.u64 = ctx.r10.u64 - r31.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// rotlwi r6,r4,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lfs f9,3716(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	ctx.f9.f64 = double(temp.f32);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// subf r5,r31,r29
	ctx.r5.u64 = r29.u64 - r31.u64;
	// lfs f8,3804(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3804);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,3720(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 3720);
	ctx.f10.f64 = double(temp.f32);
loc_82696A54:
	// lwzx r9,r7,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// lfs f13,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmsubs f13,f12,f10,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f11.f64)));
	// fmuls f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// beq cr6,0x82696a94
	if (ctx.cr6.eq) goto loc_82696A94;
	// fmuls f0,f13,f8
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82696a98
	goto loc_82696A98;
loc_82696A94:
	// fmr f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f9.f64;
loc_82696A98:
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// fmadds f13,f0,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmadds f13,f13,f0,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f11.f64)));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfsx f0,r5,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// blt cr6,0x82696a54
	if (ctx.cr6.lt) goto loc_82696A54;
loc_82696AD0:
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bgt cr6,0x82696b10
	if (ctx.cr6.gt) goto loc_82696B10;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r10,36
	ctx.r10.s64 = 36;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// subf r9,r31,r29
	ctx.r9.u64 = r29.u64 - r31.u64;
	// lfs f13,19664(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 19664);
	ctx.f13.f64 = double(temp.f32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82696AF4:
	// lfsu f12,28(r30)
	ctx.fpscr.disableFlushMode();
	ea = 28 + r30.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	r30.u32 = ea;
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82696af4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82696AF4;
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
loc_82696B10:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8269D898) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32150
	ctx.r10.s64 = -2106982400;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r3,r10,27432
	ctx.r3.s64 = ctx.r10.s64 + 27432;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8269d7d0
	ctx.lr = 0x8269D8E4;
	sub_8269D7D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8269EFCC) {
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
	ctx.lr = 0x8269EFEC;
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

DEFINE_REX_FUNC(sub_826A08A0) {
	REX_FUNC_PROLOGUE();
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x826a5838
	sub_826A5838(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826A0B38) {
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
	ctx.lr = 0x826A0B40;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826a0b68
	if (!ctx.cr6.eq) goto loc_826A0B68;
	// bl 0x826a33d0
	ctx.lr = 0x826A0B54;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826A0B60;
	sub_8269CB20(ctx, base);
loc_826A0B60:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x826a0d50
	goto loc_826A0D50;
loc_826A0B68:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826a3320
	ctx.lr = 0x826A0B70;
	sub_826A3320(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x826a0b88
	if (!ctx.cr6.lt) goto loc_826A0B88;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r11.u32);
loc_826A0B88:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826abfa8
	ctx.lr = 0x826A0B98;
	sub_826ABFA8(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt 0x826a0b60
	if (ctx.cr0.lt) goto loc_826A0B60;
	// lwz r7,12(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 12);
	// andi. r11,r7,264
	ctx.r11.u64 = ctx.r7.u64 & 264;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826a0bbc
	if (!ctx.cr0.eq) goto loc_826A0BBC;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// subf r3,r11,r24
	ctx.r3.u64 = r24.u64 - ctx.r11.u64;
	// b 0x826a0d50
	goto loc_826A0D50;
loc_826A0BBC:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 0);
	// clrlwi. r10,r7,30
	ctx.r10.u64 = ctx.r7.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r26,r11,31264
	r26.s64 = ctx.r11.s64 + 31264;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// subf r25,r11,r9
	r25.u64 = ctx.r9.u64 - ctx.r11.u64;
	// beq 0x826a0c38
	if (ctx.cr0.eq) goto loc_826A0C38;
	// srawi r10,r28,5
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1F) != 0);
	ctx.r10.s64 = r28.s32 >> 5;
	// clrlwi r8,r28,27
	ctx.r8.u64 = r28.u32 & 0x1F;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r8,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(72));
	// lwzx r8,r6,r26
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + r26.u32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826a0c28
	if (ctx.cr0.eq) goto loc_826A0C28;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x826a0c28
	if (!ctx.cr6.lt) goto loc_826A0C28;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_826A0C0C:
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 10, ctx.xer);
	// bne cr6,0x826a0c1c
	if (!ctx.cr6.eq) goto loc_826A0C1C;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_826A0C1C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x826a0c0c
	if (ctx.cr6.lt) goto loc_826A0C0C;
loc_826A0C28:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x826a0c58
	if (!ctx.cr6.eq) goto loc_826A0C58;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// b 0x826a0d50
	goto loc_826A0D50;
loc_826A0C38:
	// rlwinm. r10,r7,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826a0c28
	if (!ctx.cr0.eq) goto loc_826A0C28;
	// bl 0x826a33d0
	ctx.lr = 0x826A0C44;
	sub_826A33D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x826a0d50
	goto loc_826A0D50;
loc_826A0C58:
	// clrlwi. r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826a0d4c
	if (ctx.cr0.eq) goto loc_826A0D4C;
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826a0c74
	if (!ctx.cr6.eq) goto loc_826A0C74;
	// li r25,0
	r25.s64 = 0;
	// b 0x826a0d4c
	goto loc_826A0D4C;
loc_826A0C74:
	// srawi r8,r28,5
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1F) != 0);
	ctx.r8.s64 = r28.s32 >> 5;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// rlwinm r29,r8,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r28,27
	ctx.r9.u64 = r28.u32 & 0x1F;
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r30,r9,72
	r30.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(72));
	// lwzx r11,r29,r26
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r26.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a0d48
	if (ctx.cr0.eq) goto loc_826A0D48;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826abfa8
	ctx.lr = 0x826A0CB0;
	sub_826ABFA8(ctx, base);
	// cmpw cr6,r3,r24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r24.s32, ctx.xer);
	// bne cr6,0x826a0cf4
	if (!ctx.cr6.eq) goto loc_826A0CF4;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826a0ce8
	if (!ctx.cr6.lt) goto loc_826A0CE8;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826A0CD0:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x826a0ce0
	if (!ctx.cr6.eq) goto loc_826A0CE0;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_826A0CE0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x826a0cd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826A0CD0;
loc_826A0CE8:
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x826a0d40
	goto loc_826A0D40;
loc_826A0CF4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826abfa8
	ctx.lr = 0x826A0D04;
	sub_826ABFA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x826a0b60
	if (ctx.cr0.lt) goto loc_826A0B60;
	// cmplwi cr6,r31,512
	ctx.cr6.compare<uint32_t>(r31.u32, 512, ctx.xer);
	// bgt cr6,0x826a0d2c
	if (ctx.cr6.gt) goto loc_826A0D2C;
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826a0d2c
	if (ctx.cr0.eq) goto loc_826A0D2C;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r31,512
	r31.s64 = 512;
	// beq 0x826a0d30
	if (ctx.cr0.eq) goto loc_826A0D30;
loc_826A0D2C:
	// lwz r31,24(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 24);
loc_826A0D30:
	// lwzx r11,r29,r26
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r26.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_826A0D40:
	// beq 0x826a0d48
	if (ctx.cr0.eq) goto loc_826A0D48;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_826A0D48:
	// subf r24,r31,r24
	r24.u64 = r24.u64 - r31.u64;
loc_826A0D4C:
	// add r3,r25,r24
	ctx.r3.u64 = r25.u64 + r24.u64;
loc_826A0D50:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(__restvmx_109) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826A97E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826A97F0;
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// bl 0x823f5788
	ctx.lr = 0x826A9808;
	sub_823F5788(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x826a9824
	if (!ctx.cr0.eq) goto loc_826A9824;
	// bl 0x826a5c60
	ctx.lr = 0x826A9814;
	sub_826A5C60(ctx, base);
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x826a5c30
	ctx.lr = 0x826A981C;
	sub_826A5C30(ctx, base);
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x826a3638
	ctx.lr = 0x826A9824;
	sub_826A3638(ctx, base);
loc_826A9824:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// rlwinm r29,r30,3,0,28
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r11,26472
	r30.s64 = ctx.r11.s64 + 26472;
	// lwzx r11,r29,r30
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a9844
	if (ctx.cr6.eq) goto loc_826A9844;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826a98d4
	goto loc_826A98D4;
loc_826A9844:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8269d6a8
	ctx.lr = 0x826A984C;
	sub_8269D6A8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x826a986c
	if (!ctx.cr0.eq) goto loc_826A986C;
	// bl 0x826a33d0
	ctx.lr = 0x826A9858;
	sub_826A33D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x826a98d4
	goto loc_826A98D4;
loc_826A986C:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x826a9928
	ctx.lr = 0x826A9874;
	sub_826A9928(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r29,r30
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bne cr6,0x826a98c0
	if (!ctx.cr6.eq) goto loc_826A98C0;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// bl 0x826a96c8
	ctx.lr = 0x826A9890;
	sub_826A96C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826a98b8
	if (!ctx.cr0.eq) goto loc_826A98B8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269d770
	ctx.lr = 0x826A98A0;
	sub_8269D770(ctx, base);
	// bl 0x826a33d0
	ctx.lr = 0x826A98A4;
	sub_826A33D0(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// b 0x826a98c4
	goto loc_826A98C4;
loc_826A98B8:
	// stwx r28,r29,r30
	REX_STORE_U32(r29.u32 + r30.u32, r28.u32);
	// b 0x826a98c4
	goto loc_826A98C4;
loc_826A98C0:
	// bl 0x8269d770
	ctx.lr = 0x826A98C4;
	sub_8269D770(ctx, base);
loc_826A98C4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = r31.s64 + 128;
	// bl 0x826a98f8
	ctx.lr = 0x826A98D0;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_826A98F8(ctx, base);
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
loc_826A98D4:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826AF558) {
	REX_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x826af380
	sub_826AF380(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826B0068) {
	REX_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// beq cr6,0x826b00b0
	if (ctx.cr6.eq) goto loc_826B00B0;
	// cmpwi cr6,r11,69
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 69, ctx.xer);
	// beq cr6,0x826b00b0
	if (ctx.cr6.eq) goto loc_826B00B0;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// bne cr6,0x826b0098
	if (!ctx.cr6.eq) goto loc_826B0098;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// b 0x826afe68
	sub_826AFE68(ctx, base);
	return;
loc_826B0098:
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// beq cr6,0x826b00ac
	if (ctx.cr6.eq) goto loc_826B00AC;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// beq cr6,0x826b00ac
	if (ctx.cr6.eq) goto loc_826B00AC;
	// b 0x826aff38
	sub_826AFF38(ctx, base);
	return;
loc_826B00AC:
	// b 0x826af8a8
	sub_826AF8A8(ctx, base);
	return;
loc_826B00B0:
	// b 0x826af7b8
	sub_826AF7B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826B1CA0) {
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
	ctx.lr = 0x826B1CA8;
	// lhz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lhz r8,10(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 10);
	// li r23,0
	r23.s64 = 0;
	// clrlwi r11,r9,17
	ctx.r11.u64 = ctx.r9.u32 & 0x7FFF;
	// lwz r7,2(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 2);
	// lwz r6,6(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 6);
	// addi r20,r10,28796
	r20.s64 = ctx.r10.s64 + 28796;
	// addi r30,r11,-16383
	r30.s64 = ctx.r11.s64 + -16383;
	// rotlwi r11,r8,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// rlwinm r19,r9,0,0,16
	r19.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000;
	// stw r7,-152(r1)
	REX_STORE_U32(ctx.r1.u32 + -152, ctx.r7.u32);
	// cmpwi cr6,r30,-16383
	ctx.cr6.compare<int32_t>(r30.s32, -16383, ctx.xer);
	// lwz r21,12(r20)
	r21.u64 = REX_LOAD_U32(r20.u32 + 12);
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// stw r6,-148(r1)
	REX_STORE_U32(ctx.r1.u32 + -148, ctx.r6.u32);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// stw r11,-144(r1)
	REX_STORE_U32(ctx.r1.u32 + -144, ctx.r11.u32);
	// bne cr6,0x826b1d30
	if (!ctx.cr6.eq) goto loc_826B1D30;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_826B1CF8:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826b1d18
	if (!ctx.cr6.eq) goto loc_826B1D18;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x826b1cf8
	if (ctx.cr6.lt) goto loc_826B1CF8;
	// b 0x826b2364
	goto loc_826B2364;
loc_826B1D18:
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r23.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r23.u32);
	// stw r23,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r23.u32);
	// b 0x826b2368
	goto loc_826B2368;
loc_826B1D30:
	// lwz r25,8(r20)
	r25.u64 = REX_LOAD_U32(r20.u32 + 8);
	// addi r8,r1,-136
	ctx.r8.s64 = ctx.r1.s64 + -136;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r28,r1,-152
	r28.s64 = ctx.r1.s64 + -152;
	// addi r26,r25,-1
	r26.s64 = r25.s64 + -1;
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r26,1
	ctx.r11.s64 = r26.s64 + 1;
	// li r22,-1
	r22.s64 = -1;
	// srawi r7,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 5;
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r6,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// mr r24,r30
	r24.u64 = r30.u64;
	// addze r31,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	r31.s64 = temp.s64;
	// stw r10,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// srawi r7,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 5;
	// rlwinm r27,r31,2,0,29
	r27.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r9,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwzx r10,r27,r28
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// subfic r29,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	r29.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// slw r11,r3,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r29.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826b1e7c
	if (ctx.cr0.eq) goto loc_826B1E7C;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// slw r9,r22,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (r22.u32 << (r29.u8 & 0x3F));
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826b1de8
	if (!ctx.cr0.eq) goto loc_826B1DE8;
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x826b1e7c
	if (!ctx.cr6.lt) goto loc_826B1E7C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_826B1DC8:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826b1de8
	if (!ctx.cr6.eq) goto loc_826B1DE8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x826b1dc8
	if (ctx.cr6.lt) goto loc_826B1DC8;
	// b 0x826b1e7c
	goto loc_826B1E7C;
loc_826B1DE8:
	// srawi r11,r26,5
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = r26.s32 >> 5;
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r11,r26,5
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = r26.s32 >> 5;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r11,r26
	ctx.r10.u64 = r26.u64 - ctx.r11.u64;
	// lwzx r11,r7,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// slw r6,r3,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826b1e2c
	if (ctx.cr6.lt) goto loc_826B1E2C;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x826b1e30
	if (!ctx.cr6.lt) goto loc_826B1E30;
loc_826B1E2C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_826B1E30:
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r10,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// blt 0x826b1e7c
	if (ctx.cr0.lt) goto loc_826B1E7C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-148
	ctx.r10.s64 = ctx.r1.s64 + -148;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_826B1E48:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x826b1e7c
	if (ctx.cr6.eq) goto loc_826B1E7C;
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x826b1e6c
	if (ctx.cr6.lt) goto loc_826B1E6C;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bge cr6,0x826b1e70
	if (!ctx.cr6.lt) goto loc_826B1E70;
loc_826B1E6C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_826B1E70:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwu r8,-4(r10)
	ea = -4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bge 0x826b1e48
	if (!ctx.cr0.lt) goto loc_826B1E48;
loc_826B1E7C:
	// lwzx r10,r27,r28
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// slw r9,r22,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (r22.u32 << (r29.u8 & 0x3F));
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stwx r10,r27,r28
	REX_STORE_U32(r27.u32 + r28.u32, ctx.r10.u32);
	// bge cr6,0x826b1ec4
	if (!ctx.cr6.lt) goto loc_826B1EC4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.u64 = static_cast<uint64_t>(3) - ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b1ec4
	if (ctx.cr6.eq) goto loc_826B1EC4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_826B1EBC:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x826b1ebc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B1EBC;
loc_826B1EC4:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x826b1ed0
	if (ctx.cr6.eq) goto loc_826B1ED0;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_826B1ED0:
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// subf r10,r25,r11
	ctx.r10.u64 = ctx.r11.u64 - r25.u64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x826b1efc
	if (!ctx.cr6.lt) goto loc_826B1EFC;
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r23.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r23.u32);
	// stw r23,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r23.u32);
	// b 0x826b2368
	goto loc_826B2368;
loc_826B1EFC:
	// li r10,3
	ctx.r10.s64 = 3;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bgt cr6,0x826b21e4
	if (ctx.cr6.gt) goto loc_826B21E4;
	// subf r11,r24,r11
	ctx.r11.u64 = ctx.r11.u64 - r24.u64;
	// addi r9,r1,-136
	ctx.r9.s64 = ctx.r1.s64 + -136;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// addi r6,r1,-152
	ctx.r6.s64 = ctx.r1.s64 + -152;
	// addze r5,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// li r27,-1
	r27.s64 = -1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// lwz r31,4(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r30,8(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// rlwinm r8,r8,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r31,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, r31.u32);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// slw r10,r27,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r11.u8 & 0x3F));
	// stw r30,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, r30.u32);
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// subfic r6,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
loc_826B1F64:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// and r31,r9,r7
	r31.u64 = ctx.r9.u64 & ctx.r7.u64;
	// stw r31,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, r31.u32);
	// srw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,-160(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r9,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// bdnz 0x826b1f64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B1F64;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826B1FA4:
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x826b1fb8
	if (ctx.cr6.lt) goto loc_826B1FB8;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x826b1fbc
	goto loc_826B1FBC;
loc_826B1FB8:
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r23.u32);
loc_826B1FBC:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x826b1fa4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B1FA4;
	// addi r11,r26,1
	ctx.r11.s64 = r26.s64 + 1;
	// addi r29,r1,-152
	r29.s64 = ctx.r1.s64 + -152;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	r31.s64 = temp.s64;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// rlwinm r28,r31,2,0,29
	r28.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwzx r10,r28,r29
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + r29.u32);
	// subfic r30,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	r30.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// slw r11,r3,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r30.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826b20ec
	if (ctx.cr0.eq) goto loc_826B20EC;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// slw r9,r22,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (r22.u32 << (r30.u8 & 0x3F));
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826b2054
	if (!ctx.cr0.eq) goto loc_826B2054;
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x826b20ec
	if (!ctx.cr6.lt) goto loc_826B20EC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_826B2034:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826b2054
	if (!ctx.cr6.eq) goto loc_826B2054;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x826b2034
	if (ctx.cr6.lt) goto loc_826B2034;
	// b 0x826b20ec
	goto loc_826B20EC;
loc_826B2054:
	// srawi r11,r26,5
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = r26.s32 >> 5;
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r11,r26,5
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = r26.s32 >> 5;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r11,r26
	ctx.r10.u64 = r26.u64 - ctx.r11.u64;
	// lwzx r11,r7,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// slw r6,r3,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826b2098
	if (ctx.cr6.lt) goto loc_826B2098;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x826b209c
	if (!ctx.cr6.lt) goto loc_826B209C;
loc_826B2098:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_826B209C:
	// stwx r10,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// blt 0x826b20ec
	if (ctx.cr0.lt) goto loc_826B20EC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-148
	ctx.r10.s64 = ctx.r1.s64 + -148;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_826B20B8:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x826b20ec
	if (ctx.cr6.eq) goto loc_826B20EC;
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x826b20dc
	if (ctx.cr6.lt) goto loc_826B20DC;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bge cr6,0x826b20e0
	if (!ctx.cr6.lt) goto loc_826B20E0;
loc_826B20DC:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_826B20E0:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwu r8,-4(r10)
	ea = -4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bge 0x826b20b8
	if (!ctx.cr0.lt) goto loc_826B20B8;
loc_826B20EC:
	// lwzx r10,r28,r29
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + r29.u32);
	// slw r9,r22,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (r22.u32 << (r30.u8 & 0x3F));
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stwx r10,r28,r29
	REX_STORE_U32(r28.u32 + r29.u32, ctx.r10.u32);
	// bge cr6,0x826b2134
	if (!ctx.cr6.lt) goto loc_826B2134;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.u64 = static_cast<uint64_t>(3) - ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b2134
	if (ctx.cr6.eq) goto loc_826B2134;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_826B212C:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x826b212c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B212C;
loc_826B2134:
	// addi r11,r21,1
	ctx.r11.s64 = r21.s64 + 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// addze r9,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r9.s64 = temp.s64;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// slw r9,r27,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r11.u8 & 0x3F));
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// subfic r7,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r7.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
loc_826B2170:
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// and r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 & ctx.r9.u64;
	// stw r3,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r3.u32);
	// srw r5,r5,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r11.u8 & 0x3F));
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,-160(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// bdnz 0x826b2170
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B2170;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826B21B0:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x826b21c4
	if (ctx.cr6.lt) goto loc_826B21C4;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x826b21c8
	goto loc_826B21C8;
loc_826B21C4:
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r23.u32);
loc_826B21C8:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x826b21b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B21B0;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x826b2368
	goto loc_826B2368;
loc_826B21E4:
	// lwz r5,0(r20)
	ctx.r5.u64 = REX_LOAD_U32(r20.u32 + 0);
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x826b22b4
	if (ctx.cr6.lt) goto loc_826B22B4;
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// srawi r9,r21,5
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1F) != 0);
	ctx.r9.s64 = r21.s32 >> 5;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addze r6,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r9,r21,5
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1F) != 0);
	ctx.r9.s64 = r21.s32 >> 5;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r23.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r23.u32);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// stw r23,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r23.u32);
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// subf r11,r11,r21
	ctx.r11.u64 = r21.u64 - ctx.r11.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// slw r9,r7,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r31,-152(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -152);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// oris r31,r31,32768
	r31.u64 = r31.u64 | 2147483648;
	// subfic r7,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r7.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// stw r31,-152(r1)
	REX_STORE_U32(ctx.r1.u32 + -152, r31.u32);
loc_826B2240:
	// lwz r31,4(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// and r30,r31,r9
	r30.u64 = r31.u64 & ctx.r9.u64;
	// stw r30,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, r30.u32);
	// srw r31,r31,r11
	r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r11.u8 & 0x3F));
	// or r8,r31,r8
	ctx.r8.u64 = r31.u64 | ctx.r8.u64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,-160(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// bdnz 0x826b2240
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B2240;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826B2280:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x826b2294
	if (ctx.cr6.lt) goto loc_826B2294;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x826b2298
	goto loc_826B2298;
loc_826B2294:
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r23.u32);
loc_826B2298:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x826b2280
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B2280;
	// lwz r11,20(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 20);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// b 0x826b2368
	goto loc_826B2368;
loc_826B22B4:
	// srawi r11,r21,5
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1F) != 0);
	ctx.r11.s64 = r21.s32 >> 5;
	// lwz r7,-152(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -152);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r9,20(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 20);
	// addze r3,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r3.s64 = temp.s64;
	// srawi r11,r21,5
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1F) != 0);
	ctx.r11.s64 = r21.s32 >> 5;
	// clrlwi r10,r7,1
	ctx.r10.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// stw r10,-152(r1)
	REX_STORE_U32(ctx.r1.u32 + -152, ctx.r10.u32);
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 + r30.u64;
	// subf r11,r11,r21
	ctx.r11.u64 = r21.u64 - ctx.r11.u64;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// slw r10,r6,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// subfic r6,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
loc_826B22FC:
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// and r31,r8,r7
	r31.u64 = ctx.r8.u64 & ctx.r7.u64;
	// stw r31,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, r31.u32);
	// srw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,-160(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// slw r9,r9,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// bdnz 0x826b22fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B22FC;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826B233C:
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x826b2350
	if (ctx.cr6.lt) goto loc_826B2350;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x826b2354
	goto loc_826B2354;
loc_826B2350:
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r23.u32);
loc_826B2354:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x826b233c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B233C;
loc_826B2364:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_826B2368:
	// subfic r10,r21,31
	ctx.xer.ca = r21.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - r21.u64;
	// lwz r11,16(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 16);
	// subfic r9,r19,0
	ctx.xer.ca = r19.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - r19.u64;
	// lwz r8,-152(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -152);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// slw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// bne cr6,0x826b23a4
	if (!ctx.cr6.eq) goto loc_826B23A4;
	// lwz r11,-148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -148);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// b 0x826b23ac
	goto loc_826B23AC;
loc_826B23A4:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x826b23b0
	if (!ctx.cr6.eq) goto loc_826B23B0;
loc_826B23AC:
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_826B23B0:
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_826F2F50) {
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
	ctx.lr = 0x826F2F58;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r30,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,4240
	ctx.r5.s64 = 4240;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// bl 0x826c6880
	ctx.lr = 0x826F2F94;
	sub_826C6880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f3294
	if (ctx.cr6.lt) goto loc_826F3294;
	// li r5,4240
	ctx.r5.s64 = 4240;
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x826F2FAC;
	sub_826A2E60(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r27,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r27.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, r30.u32);
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, r30.u32);
	// lwz r7,112(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,16(r7)
	REX_STORE_U32(ctx.r7.u32 + 16, r30.u32);
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,20(r6)
	REX_STORE_U32(ctx.r6.u32 + 20, r30.u32);
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,68(r5)
	REX_STORE_U32(ctx.r5.u32 + 68, r30.u32);
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,112(r4)
	REX_STORE_U32(ctx.r4.u32 + 112, r30.u32);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,4224(r3)
	REX_STORE_U32(ctx.r3.u32 + 4224, r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r7,28(r6)
	REX_STORE_U32(ctx.r6.u32 + 28, ctx.r7.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r4,8(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r4,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r10.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lhz r7,16(r8)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + 16);
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// sth r7,40(r6)
	REX_STORE_U16(ctx.r6.u32 + 40, ctx.r7.u16);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lhz r4,18(r5)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + 18);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// sth r4,42(r3)
	REX_STORE_U16(ctx.r3.u32 + 42, ctx.r4.u16);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,44(r9)
	REX_STORE_U32(ctx.r9.u32 + 44, ctx.r10.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r7,24(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r7,48(r6)
	REX_STORE_U32(ctx.r6.u32 + 48, ctx.r7.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r4,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,56(r9)
	REX_STORE_U32(ctx.r9.u32 + 56, ctx.r10.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r7,36(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r7,60(r6)
	REX_STORE_U32(ctx.r6.u32 + 60, ctx.r7.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r4,40(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r4,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,92(r9)
	REX_STORE_U32(ctx.r9.u32 + 92, ctx.r10.u32);
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r29,96(r8)
	REX_STORE_U32(ctx.r8.u32 + 96, r29.u32);
	// lwz r7,112(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,80(r7)
	REX_STORE_U32(ctx.r7.u32 + 80, r30.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lhz r5,48(r6)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + 48);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826f3130
	if (ctx.cr6.eq) goto loc_826F3130;
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r6,r10,84
	ctx.r6.s64 = ctx.r10.s64 + 84;
	// lhz r5,48(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 48);
	// bl 0x826c6880
	ctx.lr = 0x826F3100;
	sub_826C6880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f3294
	if (ctx.cr6.lt) goto loc_826F3294;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lhz r5,48(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 48);
	// lwz r3,84(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// lwz r4,52(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x826a1e70
	ctx.lr = 0x826F3120;
	sub_826A1E70(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lhz r7,48(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 48);
	// sth r7,88(r8)
	REX_STORE_U16(ctx.r8.u32 + 88, ctx.r7.u16);
loc_826F3130:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lis r10,22358
	ctx.r10.s64 = 1465253888;
	// ori r9,r10,17201
	ctx.r9.u64 = ctx.r10.u64 | 17201;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x826f31b8
	if (ctx.cr6.eq) goto loc_826F31B8;
	// lis r9,22349
	ctx.r9.s64 = 1464664064;
	// ori r8,r9,22081
	ctx.r8.u64 = ctx.r9.u64 | 22081;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x826f31b8
	if (ctx.cr6.eq) goto loc_826F31B8;
	// lis r9,22349
	ctx.r9.s64 = 1464664064;
	// ori r8,r9,22067
	ctx.r8.u64 = ctx.r9.u64 | 22067;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x826f31b8
	if (ctx.cr6.eq) goto loc_826F31B8;
	// lis r9,22349
	ctx.r9.s64 = 1464664064;
	// ori r8,r9,22066
	ctx.r8.u64 = ctx.r9.u64 | 22066;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x826f31b8
	if (ctx.cr6.eq) goto loc_826F31B8;
	// lis r9,22358
	ctx.r9.s64 = 1465253888;
	// ori r8,r9,20530
	ctx.r8.u64 = ctx.r9.u64 | 20530;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x826f31b8
	if (ctx.cr6.eq) goto loc_826F31B8;
	// lis r9,22349
	ctx.r9.s64 = 1464664064;
	// ori r8,r9,22096
	ctx.r8.u64 = ctx.r9.u64 | 22096;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x826f31b8
	if (ctx.cr6.eq) goto loc_826F31B8;
	// lis r9,22349
	ctx.r9.s64 = 1464664064;
	// ori r8,r9,22098
	ctx.r8.u64 = ctx.r9.u64 | 22098;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x826f31b8
	if (ctx.cr6.eq) goto loc_826F31B8;
	// lis r9,19792
	ctx.r9.s64 = 1297088512;
	// ori r8,r9,13395
	ctx.r8.u64 = ctx.r9.u64 | 13395;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x826f31c4
	if (!ctx.cr6.eq) goto loc_826F31C4;
loc_826F31B8:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_826F31C4:
	// stw r11,32(r26)
	REX_STORE_U32(r26.u32 + 32, ctx.r11.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// addi r3,r11,68
	ctx.r3.s64 = ctx.r11.s64 + 68;
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// addi r4,r26,36
	ctx.r4.s64 = r26.s64 + 36;
	// lwz r5,44(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r8,32(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f1,3716(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3716);
	ctx.f1.f64 = double(temp.f32);
	// lwz r7,84(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// lhz r7,48(r6)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r6.u32 + 48);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lfd f0,120(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f2,f13
	ctx.f2.f64 = double(float(ctx.f13.f64));
	// bl 0x826fca88
	ctx.lr = 0x826F321C;
	sub_826FCA88(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bl 0x826f2818
	ctx.lr = 0x826F3224;
	sub_826F2818(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f3294
	if (ctx.cr6.lt) goto loc_826F3294;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,80(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826f324c
	if (ctx.cr6.eq) goto loc_826F324C;
	// addi r3,r11,68
	ctx.r3.s64 = ctx.r11.s64 + 68;
	// bl 0x826fcd18
	ctx.lr = 0x826F3244;
	sub_826FCD18(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_826F324C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r30,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, r30.u32);
	// bl 0x826f2818
	ctx.lr = 0x826F3258;
	sub_826F2818(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f3294
	if (ctx.cr6.lt) goto loc_826F3294;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lis r10,-32145
	ctx.r10.s64 = -2106654720;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r10,12048
	ctx.r4.s64 = ctx.r10.s64 + 12048;
	// stw r25,4228(r11)
	REX_STORE_U32(ctx.r11.u32 + 4228, r25.u32);
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r6,r5,4232
	ctx.r6.s64 = ctx.r5.s64 + 4232;
	// bl 0x826c63e0
	ctx.lr = 0x826F3280;
	sub_826C63E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f3294
	if (ctx.cr6.lt) goto loc_826F3294;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,4232(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4232);
	// stw r10,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r10.u32);
loc_826F3294:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82716B50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82716B58;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,22524(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22524);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82716ba0
	if (ctx.cr6.eq) goto loc_82716BA0;
	// lwz r11,22516(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22516);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,15232(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15232);
	// beq cr6,0x82716b94
	if (ctx.cr6.eq) goto loc_82716B94;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82716ba0
	if (!ctx.cr6.eq) goto loc_82716BA0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,15232(r3)
	REX_STORE_U32(ctx.r3.u32 + 15232, ctx.r11.u32);
	// b 0x82716b9c
	goto loc_82716B9C;
loc_82716B94:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82716ba0
	if (ctx.cr6.eq) goto loc_82716BA0;
loc_82716B9C:
	// stw r30,22524(r31)
	REX_STORE_U32(r31.u32 + 22524, r30.u32);
loc_82716BA0:
	// lwz r10,15232(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15232);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82716c04
	if (ctx.cr6.eq) goto loc_82716C04;
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82716bc0
	if (ctx.cr6.eq) goto loc_82716BC0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82716c04
	if (!ctx.cr6.eq) goto loc_82716C04;
loc_82716BC0:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,15232(r31)
	REX_STORE_U32(r31.u32 + 15232, ctx.r11.u32);
	// bne cr6,0x82716c04
	if (!ctx.cr6.eq) goto loc_82716C04;
	// addi r4,r31,3720
	ctx.r4.s64 = r31.s64 + 3720;
	// lwz r29,3720(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 3720);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,15236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15236);
	// bl 0x827679e0
	ctx.lr = 0x82716BE4;
	sub_827679E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,15236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15236);
	// bl 0x82767a30
	ctx.lr = 0x82716BF0;
	sub_82767A30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82716c04
	if (ctx.cr6.eq) goto loc_82716C04;
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_82716C04:
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82716c1c
	if (ctx.cr6.eq) goto loc_82716C1C;
	// lwz r10,22516(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22516);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82716c34
	if (ctx.cr6.eq) goto loc_82716C34;
loc_82716C1C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,22516(r31)
	REX_STORE_U32(r31.u32 + 22516, r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,15232(r31)
	REX_STORE_U32(r31.u32 + 15232, ctx.r10.u32);
	// bne cr6,0x82716c34
	if (!ctx.cr6.eq) goto loc_82716C34;
	// stw r10,22520(r31)
	REX_STORE_U32(r31.u32 + 22520, ctx.r10.u32);
loc_82716C34:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8271FF48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8271ff94
	if (!ctx.cr6.gt) goto loc_8271FF94;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8271FF68:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r10,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r6,r9,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r5,r8,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// subf r10,r6,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r6.u64;
	// subf r9,r5,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r5.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x8271ff68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8271FF68;
loc_8271FF94:
	// addi r10,r4,-2
	ctx.r10.s64 = ctx.r4.s64 + -2;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwzx r7,r9,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwz r8,-4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r5,r7,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// subf r10,r5,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r5.u64;
	// stw r10,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// ble cr6,0x8272001c
	if (!ctx.cr6.gt) goto loc_8272001C;
	// addi r10,r4,-3
	ctx.r10.s64 = ctx.r4.s64 + -3;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8271FFF4:
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r8,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r10,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 2;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x8271fff4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8271FFF4;
loc_8272001C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r9,255
	ctx.r9.s64 = 255;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82720040:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// ble cr6,0x82720064
	if (!ctx.cr6.gt) goto loc_82720064;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
loc_82720064:
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stwu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82720040
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82720040;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82724FB8) {
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
	ctx.lr = 0x82724FC0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r14,r6
	r14.u64 = ctx.r6.u64;
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// lwz r9,3744(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3744);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r8,3748(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 3748);
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// lwz r7,3752(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3752);
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// lwz r6,15932(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 15932);
	// add r20,r8,r11
	r20.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r10,220(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// add r16,r7,r11
	r16.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r25,r9,r10
	r25.u64 = ctx.r9.u64 + ctx.r10.u64;
	// beq cr6,0x827250a0
	if (ctx.cr6.eq) goto loc_827250A0;
	// lwz r11,20640(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20640);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827250a0
	if (!ctx.cr6.eq) goto loc_827250A0;
	// lwz r10,3728(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3728);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r9,584(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 584);
	// mulli r11,r9,68
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(68));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// stw r7,584(r10)
	REX_STORE_U32(ctx.r10.u32 + 584, ctx.r7.u32);
	// stw r8,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// lwz r6,3712(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 3712);
	// stw r6,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r6.u32);
	// lwz r5,200(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// stw r5,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r5.u32);
	// lwz r4,204(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// stw r4,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r4.u32);
	// lwz r3,208(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// stw r3,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r3.u32);
	// lwz r10,220(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 220);
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// lwz r9,224(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 224);
	// stw r9,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 136);
	// stw r8,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// lwz r7,140(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 140);
	// stw r7,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r7.u32);
	// lwz r6,248(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 248);
	// stw r6,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r6.u32);
	// lwz r5,228(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 228);
	// stw r5,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r5.u32);
	// lwz r4,232(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 232);
	// stw r4,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r4.u32);
	// lwz r3,15544(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15544);
	// stw r3,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r3.u32);
	// stw r19,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, r19.u32);
	// stw r17,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, r17.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
loc_827250A0:
	// lwz r11,3712(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3712);
	// mr r28,r19
	r28.u64 = r19.u64;
	// lwz r10,3728(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3728);
	// cmplw cr6,r19,r17
	ctx.cr6.compare<uint32_t>(r19.u32, r17.u32, ctx.xer);
	// lwz r9,608(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// stw r9,608(r10)
	REX_STORE_U32(ctx.r10.u32 + 608, ctx.r9.u32);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r6,232(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 232);
	// lwz r8,3808(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3808);
	// lwz r10,220(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r9,3800(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3800);
	// add r26,r10,r9
	r26.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r7,228(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 228);
	// add r18,r8,r11
	r18.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r10,3804(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3804);
	// add r22,r11,r10
	r22.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r15,204(r31)
	r15.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r21,208(r31)
	r21.u64 = REX_LOAD_U32(r31.u32 + 208);
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bge cr6,0x8272519c
	if (!ctx.cr6.lt) goto loc_8272519C;
	// lis r24,-32106
	r24.s64 = -2104098816;
	// lis r23,-32106
	r23.s64 = -2104098816;
loc_827250FC:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// mr r30,r25
	r30.u64 = r25.u64;
	// bne cr6,0x8272510c
	if (!ctx.cr6.eq) goto loc_8272510C;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_8272510C:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8272517c
	if (!ctx.cr6.gt) goto loc_8272517C;
	// subf r27,r30,r25
	r27.u64 = r25.u64 - r30.u64;
loc_82725120:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bne cr6,0x82725144
	if (!ctx.cr6.eq) goto loc_82725144;
	// lwz r11,30052(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 30052);
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// add r4,r27,r30
	ctx.r4.u64 = r27.u64 + r30.u64;
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82725144;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82725144:
	// lwz r11,30064(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 30064);
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r7,248(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82725168;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82725120
	if (ctx.cr6.lt) goto loc_82725120;
loc_8272517C:
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// add r26,r10,r26
	r26.u64 = ctx.r10.u64 + r26.u64;
	// cmplw cr6,r28,r17
	ctx.cr6.compare<uint32_t>(r28.u32, r17.u32, ctx.xer);
	// blt cr6,0x827250fc
	if (ctx.cr6.lt) goto loc_827250FC;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8272519C:
	// lis r26,-32106
	r26.s64 = -2104098816;
	// lis r25,-32106
	r25.s64 = -2104098816;
	// mr r28,r19
	r28.u64 = r19.u64;
	// cmplw cr6,r19,r17
	ctx.cr6.compare<uint32_t>(r19.u32, r17.u32, ctx.xer);
	// bge cr6,0x8272524c
	if (!ctx.cr6.lt) goto loc_8272524C;
loc_827251B0:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// mr r30,r20
	r30.u64 = r20.u64;
	// bne cr6,0x827251c0
	if (!ctx.cr6.eq) goto loc_827251C0;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_827251C0:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82725230
	if (!ctx.cr6.gt) goto loc_82725230;
	// subf r27,r30,r20
	r27.u64 = r20.u64 - r30.u64;
loc_827251D4:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bne cr6,0x827251f8
	if (!ctx.cr6.eq) goto loc_827251F8;
	// lwz r11,30056(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 30056);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// add r4,r27,r30
	ctx.r4.u64 = r27.u64 + r30.u64;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827251F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827251F8:
	// lwz r11,30060(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 30060);
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r7,248(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8272521C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827251d4
	if (ctx.cr6.lt) goto loc_827251D4;
loc_82725230:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r20,r11,r20
	r20.u64 = ctx.r11.u64 + r20.u64;
	// add r22,r6,r22
	r22.u64 = ctx.r6.u64 + r22.u64;
	// cmplw cr6,r28,r17
	ctx.cr6.compare<uint32_t>(r28.u32, r17.u32, ctx.xer);
	// blt cr6,0x827251b0
	if (ctx.cr6.lt) goto loc_827251B0;
loc_8272524C:
	// mr r28,r19
	r28.u64 = r19.u64;
	// cmplw cr6,r19,r17
	ctx.cr6.compare<uint32_t>(r19.u32, r17.u32, ctx.xer);
	// bge cr6,0x827252f4
	if (!ctx.cr6.lt) goto loc_827252F4;
loc_82725258:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// mr r30,r16
	r30.u64 = r16.u64;
	// bne cr6,0x82725268
	if (!ctx.cr6.eq) goto loc_82725268;
	// mr r30,r18
	r30.u64 = r18.u64;
loc_82725268:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x827252d8
	if (!ctx.cr6.gt) goto loc_827252D8;
	// subf r27,r30,r16
	r27.u64 = r16.u64 - r30.u64;
loc_8272527C:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bne cr6,0x827252a0
	if (!ctx.cr6.eq) goto loc_827252A0;
	// lwz r11,30056(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 30056);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// add r4,r27,r30
	ctx.r4.u64 = r27.u64 + r30.u64;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827252A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827252A0:
	// lwz r11,30060(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 30060);
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r7,248(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827252C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8272527c
	if (ctx.cr6.lt) goto loc_8272527C;
loc_827252D8:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r16,r11,r16
	r16.u64 = ctx.r11.u64 + r16.u64;
	// add r18,r6,r18
	r18.u64 = ctx.r6.u64 + r18.u64;
	// cmplw cr6,r28,r17
	ctx.cr6.compare<uint32_t>(r28.u32, r17.u32, ctx.xer);
	// blt cr6,0x82725258
	if (ctx.cr6.lt) goto loc_82725258;
loc_827252F4:
	// lwz r11,15544(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827253d8
	if (ctx.cr6.eq) goto loc_827253D8;
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// mr r27,r19
	r27.u64 = r19.u64;
	// lwz r8,220(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 220);
	// cmplw cr6,r19,r17
	ctx.cr6.compare<uint32_t>(r19.u32, r17.u32, ctx.xer);
	// lwz r7,3800(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3800);
	// lwz r9,3804(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3804);
	// lwz r10,3808(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3808);
	// add r24,r8,r7
	r24.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r25,r11,r9
	r25.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r23,r11,r10
	r23.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bge cr6,0x827253d8
	if (!ctx.cr6.lt) goto loc_827253D8;
	// lis r22,-32106
	r22.s64 = -2104098816;
loc_82725330:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r29,r24
	r29.u64 = r24.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827253bc
	if (ctx.cr6.eq) goto loc_827253BC;
	// subf r26,r25,r23
	r26.u64 = r23.u64 - r25.u64;
loc_8272534C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x827253a0
	if (ctx.cr6.eq) goto loc_827253A0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827253a0
	if (ctx.cr6.eq) goto loc_827253A0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x827253a0
	if (ctx.cr6.eq) goto loc_827253A0;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827253a0
	if (ctx.cr6.eq) goto loc_827253A0;
	// lwz r11,30028(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 30028);
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// lwz r6,248(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// add r5,r26,r30
	ctx.r5.u64 = r26.u64 + r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827253A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827253A0:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8272534c
	if (ctx.cr6.lt) goto loc_8272534C;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_827253BC:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// add r25,r6,r25
	r25.u64 = ctx.r6.u64 + r25.u64;
	// add r24,r11,r24
	r24.u64 = ctx.r11.u64 + r24.u64;
	// add r23,r6,r23
	r23.u64 = ctx.r6.u64 + r23.u64;
	// cmplw cr6,r27,r17
	ctx.cr6.compare<uint32_t>(r27.u32, r17.u32, ctx.xer);
	// blt cr6,0x82725330
	if (ctx.cr6.lt) goto loc_82725330;
loc_827253D8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82744028) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb4
	ctx.lr = 0x82744030;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v20,-1
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_set1_epi8(char(0xFF)));
	// rlwinm r30,r4,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltish v19,1
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_set1_epi16(short(0x1)));
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// vspltish v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x2)));
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// vspltish v10,3
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x3)));
	// vspltish v7,4
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_set1_epi16(short(0x4)));
	// vspltish v6,15
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0xF)));
	// ble cr6,0x82744310
	if (!ctx.cr6.gt) goto loc_82744310;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r7,r11,-31376
	ctx.r7.s64 = ctx.r11.s64 + -31376;
	// addi r29,r10,4
	r29.s64 = ctx.r10.s64 + 4;
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v1,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r7,r9
	ea = (ctx.r7.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82744084:
	// add r7,r29,r3
	ctx.r7.u64 = r29.u64 + ctx.r3.u64;
loc_82744088:
	// lbz r5,0(r7)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r9,1(r7)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// subf r9,r9,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r9.u64;
	// srawi r5,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 31;
	// xor r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// subf r5,r5,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r5.u64;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bge cr6,0x827440c0
	if (!ctx.cr6.lt) goto loc_827440C0;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r6,r6,-4
	ctx.xer.ca = ctx.r6.u32 > 3;
	ctx.r6.s64 = ctx.r6.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// bgt 0x82744088
	if (ctx.cr0.gt) goto loc_82744088;
	// b 0x826a1d04
	return;
loc_827440C0:
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// ble cr6,0x82744104
	if (!ctx.cr6.gt) goto loc_82744104;
	// add r9,r30,r10
	ctx.r9.u64 = r30.u64 + ctx.r10.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// lbz r5,5(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 5);
	// lbz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// subf r5,r5,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r5.u64;
	// srawi r9,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 31;
	// xor r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// subf r9,r9,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r9.u64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bge cr6,0x82744314
	if (!ctx.cr6.lt) goto loc_82744314;
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
loc_82744104:
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// vpkswss128 v40,v20,v0
	simde_mm_store_si128((simde__m128i*)ctx.v40.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.s32), simde_mm_load_si128((simde__m128i*)v20.s32)));
	// addi r28,r1,36
	r28.s64 = ctx.r1.s64 + 36;
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r31,r9,r8
	r31.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lvlx128 v39,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r27,r1,36
	r27.s64 = ctx.r1.s64 + 36;
	// lvrx128 v38,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// lvlx128 v37,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v29,v39,v38
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// lvrx128 v36,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v35,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v28,v37,v36
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8)));
	// lvrx128 v34,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v33,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v27,v35,v34
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8)));
	// lvrx128 v32,r11,r31
	temp.u32 = ctx.r11.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v26,v33,v32
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)));
	// lvrx128 v63,r11,r28
	temp.u32 = ctx.r11.u32 + r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r27
	temp.u32 = r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v13,v29,v27
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// vor128 v8,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vmrghb v9,v28,v26
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)v28.u8)));
	// vsplth v25,v8,1
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vmrglb v23,v13,v9
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v24,v13,v9
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglw v5,v23,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)v23.u32)));
	// vmrghw v9,v23,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)v23.u32)));
	// vmrghw v8,v24,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)v24.u32)));
	// vmrglw v13,v24,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)v24.u32)));
	// vmrghb v21,v0,v5
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v22,v0,v8
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v17,v0,v8
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v2,v3,v21
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vmrglb v18,v0,v5
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v13,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v5,v22,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsubshs v3,v4,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vslh v15,v2,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v31,v17,v13
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v30,v9,v18
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vsubshs v8,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vslh v16,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v4,v15,v2
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v14,v31,v31
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vaddshs v2,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vslh v30,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v5,v16,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubshs v31,v9,v13
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v23,v2,v4
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v21,v30,v8
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v24,v14,v5
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vmaxsh v22,v8,v31
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vaddshs v18,v3,v3
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v16,v23,v7
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v17,v24,v7
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsrah v4,v22,v19
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v15,v18,v21
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vsrah v5,v8,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v2,v17,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v16,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsplth v14,v4,2
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_set1_epi16(short(0xB0A))));
	// vaddshs v8,v15,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsubshs v3,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubshs v30,v0,v31
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vsrah v8,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand128 v24,v14,v40
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// vmaxsh v23,v2,v3
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vmaxsh v22,v31,v30
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vsrah v17,v8,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v21,v0,v24
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vsubshs v18,v0,v8
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vminsh v3,v23,v22
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vxor128 v61,v17,v5
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vsrah v16,v21,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v8,v8,v18
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vsubshs v2,v8,v3
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vcmpgtsh v15,v25,v8
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vcmpgtsh v14,v8,v3
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vand128 v60,v61,v16
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// vslh v8,v2,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vand128 v63,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// vaddshs v3,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vperm128 v59,v63,v63,v1
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vsrah v2,v3,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand128 v58,v2,v63
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v57,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vand128 v31,v57,v60
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vminsh v30,v4,v31
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vxor v25,v30,v5
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vsubshs v24,v25,v5
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vand128 v8,v24,v40
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// vcmpequh. v23,v0,v8
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)v23.u16), 0xFFFF);
	// mfocrf r7,2
	ctx.r7.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vsubshs v22,v13,v8
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// rlwinm r5,r7,0,24,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80;
	// vaddshs v21,v9,v8
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// cmplwi cr6,r5,128
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// vmrghh v18,v22,v21
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vpkshus v13,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// beq cr6,0x82744308
	if (ctx.cr6.eq) goto loc_82744308;
	// vsplth v9,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xF0E))));
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vsplth v8,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vsplth v4,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xB0A))));
	// vsplth v3,v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0x908))));
	// vsldoi v5,v9,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsldoi v8,v8,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsldoi v9,v4,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsldoi v13,v3,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsel v4,v29,v5,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v29.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8))));
	// vsel v5,v28,v8,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v28.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8))));
	// vsel v8,v27,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v27.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vsel v9,v26,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v26.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// stvlx v4,0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvrx v4,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v4.u8[i]);
	// stvlx v5,r9,r4
	ea = ctx.r9.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvrx v5,r7,r11
	ea = ctx.r7.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v5.u8[i]);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stvlx v8,r9,r10
	ea = ctx.r9.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// stvrx v8,r7,r11
	ea = ctx.r7.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v8.u8[i]);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stvlx v9,r9,r8
	ea = ctx.r9.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvrx v9,r7,r11
	ea = ctx.r7.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v9.u8[i]);
loc_82744308:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt cr6,0x82744084
	if (ctx.cr6.gt) goto loc_82744084;
loc_82744310:
	// b 0x826a1d04
	return;
loc_82744314:
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// addi r7,r7,17
	ctx.r7.s64 = ctx.r7.s64 + 17;
	// add r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 + r30.u64;
	// add r31,r7,r30
	r31.u64 = ctx.r7.u64 + r30.u64;
	// addi r28,r1,36
	r28.s64 = ctx.r1.s64 + 36;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r27,r1,36
	r27.s64 = ctx.r1.s64 + 36;
	// lvrx128 v62,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r6,r6,-8
	ctx.r6.s64 = ctx.r6.s64 + -8;
	// lvrx128 v61,r7,r30
	temp.u32 = ctx.r7.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v2,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lvlx128 v60,r9,r30
	temp.u32 = ctx.r9.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v59,r10,r7
	temp.u32 = ctx.r10.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v31,v60,v61
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvlx128 v58,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v57,r10,r31
	temp.u32 = ctx.r10.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v27,v58,v59
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvlx128 v56,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v30,v56,v57
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vmrghb v13,v2,v31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvrx128 v55,r4,r7
	temp.u32 = ctx.r4.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v54,r4,r9
	temp.u32 = ctx.r4.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r4,r31
	temp.u32 = ctx.r4.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v28,v54,v55
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vmrghb v8,v27,v30
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)v27.u8)));
	// lvlx128 v52,r4,r5
	temp.u32 = ctx.r4.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v51,r8,r7
	temp.u32 = ctx.r8.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v3,v52,v53
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvlx128 v50,r8,r9
	temp.u32 = ctx.r8.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v49,r8,r31
	temp.u32 = ctx.r8.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v29,v50,v51
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvlx128 v48,r8,r5
	temp.u32 = ctx.r8.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v4,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vor128 v26,v48,v49
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// lvrx128 v47,r11,r28
	temp.u32 = ctx.r11.u32 + r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v46,r0,r27
	temp.u32 = r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v13,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vor128 v8,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// vmrghb v9,v28,v3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)v28.u8)));
	// vmrghb v5,v29,v26
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// vsplth v18,v8,1
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vmrghb v8,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vmrglb v9,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vmrglb v5,v4,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrghb v8,v4,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrghb v25,v13,v9
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v4,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v13,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v17,v0,v8
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v16,v0,v8
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v15,v0,v4
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v22,v17,v5
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vmrglb v14,v0,v4
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v25,v0,v25
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v8,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsubshs v4,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsubshs v23,v16,v13
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vslh v16,v22,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v24,v5,v25
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsubshs v25,v25,v15
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vmaxsh v17,v8,v4
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vslh v15,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v21,v9,v14
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vaddshs v5,v16,v22
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vaddshs v14,v23,v23
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vslh v23,v25,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v4,v17,v19
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v24,v24,v24
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vaddshs v17,v15,v8
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsubshs v15,v14,v5
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v14,v23,v25
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vperm v22,v4,v4,v1
	simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vaddshs v16,v21,v21
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vsubshs v25,v24,v17
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vsrah v5,v8,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v23,v0,v22
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vaddshs v24,v15,v7
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsubshs v22,v16,v14
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vaddshs v21,v25,v7
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v17,v22,v7
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsrah v25,v24,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v8,v21,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v23,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v17,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v15,v0,v25
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsubshs v14,v0,v8
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsrah v23,v8,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v22,v0,v24
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vmaxsh v21,v25,v15
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vmaxsh v8,v8,v14
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vxor128 v45,v23,v5
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmaxsh v17,v24,v22
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vcmpgtsh v15,v18,v8
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vand128 v44,v45,v16
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// vminsh v25,v21,v17
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vsubshs v24,v8,v25
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vcmpgtsh v14,v8,v25
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_cmpgt_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vslh v8,v24,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vand128 v63,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// vaddshs v25,v8,v24
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vperm128 v43,v63,v63,v1
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vsrah v24,v25,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vand128 v42,v24,v63
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v41,v42,v43
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8)));
	// vand128 v23,v41,v44
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8)));
	// vminsh v22,v4,v23
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_min_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vxor v21,v22,v5
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vsubshs v18,v21,v5
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vand v8,v18,v20
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)v20.u8)));
	// vcmpequh. v17,v0,v8
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)v17.u16), 0xFFFF);
	// mfocrf r7,2
	ctx.r7.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// vsubshs v13,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// rlwinm r5,r7,0,24,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80;
	// vaddshs v8,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// add r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 + r30.u64;
	// vor v9,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v26.u8));
	// cmplwi cr6,r5,128
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// vmrglh v16,v13,v8
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vmrghh v15,v13,v8
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vpkshus v13,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vsplth v14,v13,0
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xF0E))));
	// vsplth v4,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vsplth v25,v13,3
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0x908))));
	// vsplth v24,v13,4
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0x706))));
	// vsldoi v8,v14,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsplth v23,v13,5
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0x504))));
	// vsplth v22,v13,2
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xB0A))));
	// vsplth v21,v13,6
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0x302))));
	// vsel v5,v2,v8,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8))));
	// vsplth v18,v13,7
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0x100))));
	// vsldoi v13,v4,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsldoi v2,v24,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsldoi v4,v23,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vor128 v63,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vsldoi v8,v21,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vor v5,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)v30.u8));
	// vsldoi v30,v25,v0,1
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsel v24,v28,v13,v12
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v28.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vsldoi v26,v22,v0,1
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsldoi v13,v18,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vsel v28,v29,v30,v12
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v29.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v30.u8))));
	// vsel v30,v31,v2,v12
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v31.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8))));
	// vsel v2,v3,v4,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8))));
	// vsel v4,v5,v8,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8))));
	// vsel v25,v27,v26,v12
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v27.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v26.u8))));
	// vsel v8,v9,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// beq cr6,0x82744308
	if (ctx.cr6.eq) goto loc_82744308;
	// add r5,r9,r4
	ctx.r5.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stvlx128 v63,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// stvlx v24,r9,r4
	ea = ctx.r9.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v24.u8[15 - i]);
	// stvrx v24,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v24.u8[i]);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stvlx v25,r9,r10
	ea = ctx.r9.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v25.u8[15 - i]);
	// stvrx v25,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v25.u8[i]);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stvlx v28,r9,r8
	ea = ctx.r9.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v28.u8[15 - i]);
	// add r9,r7,r4
	ctx.r9.u64 = ctx.r7.u64 + ctx.r4.u64;
	// stvrx v28,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v28.u8[i]);
	// stvlx v30,0,r7
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v30.u8[15 - i]);
	// stvrx v30,r7,r11
	ea = ctx.r7.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v30.u8[i]);
	// stvlx v2,r7,r4
	ea = ctx.r7.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvrx v2,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v2.u8[i]);
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stvlx v4,r7,r10
	ea = ctx.r7.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvrx v4,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v4.u8[i]);
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stvlx v8,r7,r8
	ea = ctx.r7.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// stvrx v8,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v8.u8[i]);
	// b 0x82744308
	goto loc_82744308;
}

DEFINE_REX_FUNC(sub_827AFCD8) {
	REX_FUNC_PROLOGUE();
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
	// vspltish v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x8)));
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// vspltish v13,-1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// vspltisb v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_set1_epi8(char(0x0)));
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltish v9,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x3)));
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// vspltish v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x0)));
	// vslh v8,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// bne cr6,0x827afd5c
	if (!ctx.cr6.eq) goto loc_827AFD5C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x827afdf8
	if (!ctx.cr6.gt) goto loc_827AFDF8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,16
	ctx.r10.s64 = 16;
loc_827AFD14:
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v13,v0,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// vsldoi128 v10,v0,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// vsldoi128 v7,v0,v63,6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 10));
	// vadduhm v13,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v6,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vslh v5,v13,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v4,v11,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vadduhm v3,v13,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v31,v3,v2
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v30,v31,v4
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsrah v29,v30,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v29,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v12,v12,v29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bdnz 0x827afd14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827AFD14;
	// b 0x827afdf8
	goto loc_827AFDF8;
loc_827AFD5C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x827afdf8
	if (!ctx.cr6.gt) goto loc_827AFDF8;
	// li r8,-16
	ctx.r8.s64 = -16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r9,16
	ctx.r9.s64 = 16;
loc_827AFD78:
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v10,v0,v62,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 12));
	// vsldoi128 v7,v0,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 14));
	// vsldoi v6,v13,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// vsldoi v5,v13,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 14));
	// vsldoi128 v4,v0,v62,6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 10));
	// vadduhm v3,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsldoi v31,v13,v0,6
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 10));
	// vadduhm v10,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v30,v0,v4
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vor v0,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vadduhm v29,v13,v31
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vslh v28,v10,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v27,v11,v30
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vslh v26,v0,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v25,v11,v29
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vadduhm v24,v10,v28
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v23,v0,v26
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v22,v24,v2
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v21,v23,v2
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v13,v22,v25
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v20,v21,v27
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vsrah v19,v13,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v20,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v61,v12,v19
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v19.u8)));
	// stvx128 v19,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v18,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// vor128 v12,v61,v18
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)v18.u8)));
	// bdnz 0x827afd78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827AFD78;
loc_827AFDF8:
	// vand v0,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// vcmpgtuh. v13,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// mfocrf r11,2
	ctx.r11.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827B5A28) {
	REX_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x827B5A30;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltish v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x2)));
	// li r11,1120
	ctx.r11.s64 = 1120;
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// vspltish v12,6
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x6)));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r31,1164(r6)
	r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 1164);
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// vslh v11,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v10,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v9,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stvx128 v12,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stvx128 v9,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x827af298
	ctx.lr = 0x827B5A94;
	sub_827AF298(ctx, base);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// vspltish v8,-1
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// vspltisb v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_set1_epi8(char(0x0)));
	// clrlwi r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// li r5,1
	ctx.r5.s64 = 1;
	// vspltish v11,4
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x4)));
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// vspltish v5,5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x5)));
	// lvx128 v4,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// vslh v2,v8,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x0)));
	// slw r9,r5,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r4.u8 & 0x3F));
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x827b5b90
	if (!ctx.cr6.eq) goto loc_827B5B90;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827b5c88
	if (!ctx.cr6.gt) goto loc_827B5C88;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_827B5AF4:
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v9,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// vsldoi128 v12,v0,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v10,v0,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// vsldoi128 v4,v0,v63,6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 10));
	// vsubshs v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// lvx128 v1,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v31,v12,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v30,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v29,v12,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v10,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v29,v31
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v24,v28,v12
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v23,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v26,v27
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v21,v24,v25
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vsubshs v20,v7,v23
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vadduhm v19,v21,v22
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v18,v3,v20
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v17,v19,v1
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v16,v17,v18
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vsrah v15,v16,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v62,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vor v8,v8,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// stvewx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// bdnz 0x827b5af4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B5AF4;
	// vand v0,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d04
	return;
loc_827B5B90:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827b5c88
	if (!ctx.cr6.gt) goto loc_827B5C88;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_827B5BA8:
	// lvx128 v0,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v12,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v10,v12,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// vsldoi128 v9,v0,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsubshs v31,v0,v3
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi v4,v12,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 14));
	// vsldoi128 v3,v0,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// vsubshs v30,v12,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v10,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v28,v12,v0,6
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 10));
	// vslh v27,v9,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v26,v0,v61,6
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 10));
	// vslh v25,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v24,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v25,v29
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v18,v24,v10
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v21,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v4,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v23,v27
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v14,v22,v9
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v17,v3,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v3,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v9,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vadduhm v4,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vslh v12,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v10,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v3,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v1,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vsubshs v29,v7,v12
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsubshs v28,v7,v10
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vadduhm v27,v4,v9
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v26,v1,v3
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v25,v30,v29
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v24,v31,v28
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v23,v27,v0
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vadduhm v22,v26,v0
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// lvx128 v0,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v21,v23,v25
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v20,v22,v24
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vsrah v19,v21,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v20,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v60,v8,v19
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v19.u8)));
	// vpkshus128 v59,v19,v18
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vor128 v8,v60,v18
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)v18.u8)));
	// stvx128 v59,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// bdnz 0x827b5ba8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B5BA8;
loc_827B5C88:
	// vand v0,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_827D1738) {
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
	ctx.lr = 0x827D1740;
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
	// bl 0x82799940
	ctx.lr = 0x827D1760;
	sub_82799940(ctx, base);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r28,r31,22640
	r28.s64 = r31.s64 + 22640;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,30024(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 30024);
	// bl 0x827d1cd0
	ctx.lr = 0x827D1774;
	sub_827D1CD0(ctx, base);
	// lhz r9,52(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 52);
	// addi r29,r30,1408
	r29.s64 = r30.s64 + 1408;
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
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x827a1c68
	ctx.lr = 0x827D1798;
	sub_827A1C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827d18d8
	if (!ctx.cr6.eq) goto loc_827D18D8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cb340
	ctx.lr = 0x827D17B0;
	sub_827CB340(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827d18d8
	if (!ctx.cr6.eq) goto loc_827D18D8;
	// lhz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 52);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827e1ce8
	ctx.lr = 0x827D17D8;
	sub_827E1CE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827d18d8
	if (!ctx.cr6.eq) goto loc_827D18D8;
	// lhz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 52);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827ae300
	ctx.lr = 0x827D1800;
	sub_827AE300(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827d18d8
	if (!ctx.cr6.eq) goto loc_827D18D8;
	// lwz r11,3916(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3916);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827d1890
	if (ctx.cr6.eq) goto loc_827D1890;
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
	ctx.lr = 0x827D1830;
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
	ctx.lr = 0x827D1890;
	sub_82732760(ctx, base);
loc_827D1890:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827d2018
	ctx.lr = 0x827D189C;
	sub_827D2018(ctx, base);
	// lwz r11,3916(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3916);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827d18c4
	if (!ctx.cr6.eq) goto loc_827D18C4;
	// lwz r11,14856(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14856);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827d18c4
	if (!ctx.cr6.eq) goto loc_827D18C4;
	// lwz r11,15228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15228);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x827d18c8
	if (ctx.cr6.eq) goto loc_827D18C8;
loc_827D18C4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_827D18C8:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,15592(r31)
	REX_STORE_U32(r31.u32 + 15592, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,15568(r31)
	REX_STORE_U32(r31.u32 + 15568, ctx.r10.u32);
loc_827D18D8:
	// addi r1,r1,1664
	ctx.r1.s64 = ctx.r1.s64 + 1664;
	// b 0x826a1d04
	return;
}

