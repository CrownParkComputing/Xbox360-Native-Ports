#include "hydrothunder_funcs.30.h"

DEFINE_REX_FUNC(sub_82121928) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82121930;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82121940:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82121940
	if (!ctx.cr6.eq) goto loc_82121940;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rotlwi r30,r11,0
	r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82120f58
	ctx.lr = 0x82121968;
	sub_82120F58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821219a0
	if (ctx.cr0.eq) goto loc_821219A0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82121984
	if (ctx.cr6.lt) goto loc_82121984;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x82121988
	goto loc_82121988;
loc_82121984:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_82121988:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// subf r5,r11,r29
	ctx.r5.u64 = r29.u64 - ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82121dd0
	ctx.lr = 0x8212199C;
	sub_82121DD0(ctx, base);
	// b 0x82121a34
	goto loc_82121A34;
loc_821219A0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subfic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r10.u64 = static_cast<uint64_t>(-1) - ctx.r11.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// bgt cr6,0x821219bc
	if (ctx.cr6.gt) goto loc_821219BC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26932
	ctx.r3.s64 = ctx.r11.s64 + -26932;
	// bl 0x822f6020
	ctx.lr = 0x821219BC;
	sub_822F6020(ctx, base);
loc_821219BC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82121a30
	if (ctx.cr6.eq) goto loc_82121A30;
	// add r28,r11,r30
	r28.u64 = ctx.r11.u64 + r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120ea0
	ctx.lr = 0x821219D8;
	sub_82120EA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82121a30
	if (ctx.cr0.eq) goto loc_82121A30;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821219f4
	if (ctx.cr6.lt) goto loc_821219F4;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x821219f8
	goto loc_821219F8;
loc_821219F4:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_821219F8:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82121A0C;
	sub_826A1E70(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r28,16(r31)
	REX_STORE_U32(r31.u32 + 16, r28.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82121a24
	if (ctx.cr6.lt) goto loc_82121A24;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x82121a28
	goto loc_82121A28;
loc_82121A24:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_82121A28:
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r28
	REX_STORE_U8(ctx.r11.u32 + r28.u32, ctx.r10.u8);
loc_82121A30:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82121A34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8212F470) {
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
	ctx.lr = 0x8212F478;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// li r20,0
	r20.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8212f4b4
	if (ctx.cr6.eq) goto loc_8212F4B4;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r24,4(r4)
	r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r25,396(r4)
	r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 396);
	// lwz r22,788(r4)
	r22.u64 = REX_LOAD_U32(ctx.r4.u32 + 788);
	// lwz r20,1884(r4)
	r20.u64 = REX_LOAD_U32(ctx.r4.u32 + 1884);
loc_8212F4B4:
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r26,-32106
	r26.s64 = -2104098816;
	// lwz r27,4(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r28,396(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 396);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// lwz r23,788(r31)
	r23.u64 = REX_LOAD_U32(r31.u32 + 788);
	// lwz r21,1884(r31)
	r21.u64 = REX_LOAD_U32(r31.u32 + 1884);
	// beq cr6,0x8212f524
	if (ctx.cr6.eq) goto loc_8212F524;
	// lwz r11,168(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 168);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,6092(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6092);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,168(r29)
	REX_STORE_U32(r29.u32 + 168, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212F4F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212F514;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8212f670
	ctx.lr = 0x8212F524;
	sub_8212F670(ctx, base);
loc_8212F524:
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(r28.u32, r25.u32, ctx.xer);
	// beq cr6,0x8212f58c
	if (ctx.cr6.eq) goto loc_8212F58C;
	// lwz r11,172(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 172);
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// li r28,0
	r28.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,172(r29)
	REX_STORE_U32(r29.u32 + 172, ctx.r11.u32);
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8212f58c
	if (!ctx.cr6.gt) goto loc_8212F58C;
loc_8212F54C:
	// lwz r11,1892(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1892);
	// addi r5,r30,8
	ctx.r5.s64 = r30.s64 + 8;
	// lwz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212F578;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212f54c
	if (ctx.cr6.lt) goto loc_8212F54C;
loc_8212F58C:
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(r27.u32, r24.u32, ctx.xer);
	// beq cr6,0x8212f5e0
	if (ctx.cr6.eq) goto loc_8212F5E0;
	// lwz r11,176(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 176);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,6092(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6092);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,176(r29)
	REX_STORE_U32(r29.u32 + 176, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,160(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212F5B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212F5D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8212f778
	ctx.lr = 0x8212F5E0;
	sub_8212F778(ctx, base);
loc_8212F5E0:
	// cmplw cr6,r23,r22
	ctx.cr6.compare<uint32_t>(r23.u32, r22.u32, ctx.xer);
	// beq cr6,0x8212f648
	if (ctx.cr6.eq) goto loc_8212F648;
	// lwz r11,180(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 180);
	// addi r30,r31,400
	r30.s64 = r31.s64 + 400;
	// li r28,0
	r28.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,180(r29)
	REX_STORE_U32(r29.u32 + 180, ctx.r11.u32);
	// lwz r11,784(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8212f648
	if (!ctx.cr6.gt) goto loc_8212F648;
loc_8212F608:
	// lwz r11,1896(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1896);
	// addi r5,r30,8
	ctx.r5.s64 = r30.s64 + 8;
	// lwz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212F634;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,784(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 784);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212f608
	if (ctx.cr6.lt) goto loc_8212F608;
loc_8212F648:
	// cmplw cr6,r21,r20
	ctx.cr6.compare<uint32_t>(r21.u32, r20.u32, ctx.xer);
	// beq cr6,0x8212f664
	if (ctx.cr6.eq) goto loc_8212F664;
	// lwz r11,184(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 184);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,184(r29)
	REX_STORE_U32(r29.u32 + 184, ctx.r11.u32);
	// bl 0x82170a40
	ctx.lr = 0x8212F664;
	sub_82170A40(ctx, base);
loc_8212F664:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_8213E880) {
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
	// addi r11,r11,-17236
	ctx.r11.s64 = ctx.r11.s64 + -17236;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8213e8ac
	if (ctx.cr0.eq) goto loc_8213E8AC;
	// bl 0x8269ce98
	ctx.lr = 0x8213E8AC;
	sub_8269CE98(ctx, base);
loc_8213E8AC:
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

DEFINE_REX_FUNC(sub_82141688) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821416C0) {
	REX_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,68(r3)
	REX_STORE_U8(ctx.r3.u32 + 68, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82141EC0) {
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
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82141EE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_821448A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821448A8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r28,r31
	r28.u64 = r31.u64;
	// lwz r3,6192(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821448D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8214494c
	if (!ctx.cr0.gt) goto loc_8214494C;
loc_821448DC:
	// lwz r3,6192(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6192);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821448F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82144904;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214492c
	if (ctx.cr0.eq) goto loc_8214492C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82144750
	ctx.lr = 0x82144914;
	sub_82144750(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi. r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// bne 0x8214492c
	if (!ctx.cr0.eq) goto loc_8214492C;
	// li r28,1
	r28.s64 = 1;
loc_8214492C:
	// lwz r3,6192(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6192);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82144944;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x821448dc
	if (ctx.cr6.lt) goto loc_821448DC;
loc_8214494C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8214A038) {
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
	ctx.lr = 0x8214A040;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214a094
	if (ctx.cr0.eq) goto loc_8214A094;
	// lfs f0,40(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f12,216(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x8214a184
	if (!ctx.cr6.lt) goto loc_8214A184;
	// lfs f13,232(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8214a0ec
	if (ctx.cr6.gt) goto loc_8214A0EC;
	// b 0x8214a184
	goto loc_8214A184;
loc_8214A094:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f13,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82183888
	ctx.lr = 0x8214A0BC;
	sub_82183888(ctx, base);
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8214a184
	if (!ctx.cr6.lt) goto loc_8214A184;
	// lfs f0,216(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8214a184
	if (!ctx.cr6.lt) goto loc_8214A184;
	// lfs f0,232(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8214a184
	if (!ctx.cr6.gt) goto loc_8214A184;
loc_8214A0EC:
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f13,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r3,252(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 252);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f0,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x82185b10
	ctx.lr = 0x8214A12C;
	sub_82185B10(ctx, base);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// stw r29,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r29.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214a15c
	if (!ctx.cr6.eq) goto loc_8214A15C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-13496
	ctx.r4.s64 = ctx.r11.s64 + -13496;
	// addi r3,r10,-13420
	ctx.r3.s64 = ctx.r10.s64 + -13420;
	// li r5,83
	ctx.r5.s64 = 83;
	// bl 0x821231d0
	ctx.lr = 0x8214A15C;
	sub_821231D0(ctx, base);
loc_8214A15C:
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// stw r9,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// stw r28,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r28.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r10,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r10.u32);
loc_8214A184:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82155030) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82155038;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r11,-8552
	ctx.r9.s64 = ctx.r11.s64 + -8552;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r10,r10,-8472
	ctx.r10.s64 = ctx.r10.s64 + -8472;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r11,r11,-25128
	ctx.r11.s64 = ctx.r11.s64 + -25128;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,3
	r29.s64 = 3;
	// addi r30,r11,10048
	r30.s64 = ctx.r11.s64 + 10048;
loc_8215506C:
	// addi r30,r30,-10100
	r30.s64 = r30.s64 + -10100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120ac0
	ctx.lr = 0x82155080;
	sub_82120AC0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x8215506c
	if (!ctx.cr0.lt) goto loc_8215506C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-8576
	ctx.r11.s64 = ctx.r11.s64 + -8576;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x821550a4
	if (ctx.cr0.eq) goto loc_821550A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821550A4;
	sub_8269CE98(ctx, base);
loc_821550A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82158AE0) {
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
	ctx.lr = 0x82158AE8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r4.u64;
	// stw r6,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r6.u32);
	// addi r29,r5,-4
	r29.s64 = ctx.r5.s64 + -4;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// subf r10,r4,r29
	ctx.r10.u64 = r29.u64 - ctx.r4.u64;
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// add r31,r10,r4
	r31.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// ble cr6,0x82158b90
	if (!ctx.cr6.gt) goto loc_82158B90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r11,3,0,28
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r28,r4
	r27.u64 = r28.u64 + ctx.r4.u64;
	// add r5,r26,r4
	ctx.r5.u64 = r26.u64 + ctx.r4.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82158e50
	ctx.lr = 0x82158B54;
	sub_82158E50(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// add r5,r28,r31
	ctx.r5.u64 = r28.u64 + r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// subf r3,r28,r31
	ctx.r3.u64 = r31.u64 - r28.u64;
	// bl 0x82158e50
	ctx.lr = 0x82158B68;
	sub_82158E50(ctx, base);
	// subf r28,r28,r29
	r28.u64 = r29.u64 - r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// subf r3,r26,r29
	ctx.r3.u64 = r29.u64 - r26.u64;
	// bl 0x82158e50
	ctx.lr = 0x82158B80;
	sub_82158E50(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x82158b94
	goto loc_82158B94;
loc_82158B90:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_82158B94:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82158e50
	ctx.lr = 0x82158B9C;
	sub_82158E50(ctx, base);
	// addi r27,r31,4
	r27.s64 = r31.s64 + 4;
	// cmplw cr6,r25,r31
	ctx.cr6.compare<uint32_t>(r25.u32, r31.u32, ctx.xer);
	// bge cr6,0x82158c20
	if (!ctx.cr6.lt) goto loc_82158C20;
loc_82158BA8:
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,-4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + -4);
	// addi r30,r31,-4
	r30.s64 = r31.s64 + -4;
	// bl 0x82158698
	ctx.lr = 0x82158BBC;
	sub_82158698(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82158c20
	if (!ctx.cr0.eq) goto loc_82158C20;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82158698
	ctx.lr = 0x82158BD4;
	sub_82158698(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82158c20
	if (!ctx.cr0.eq) goto loc_82158C20;
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(r25.u32, r30.u32, ctx.xer);
	// blt cr6,0x82158ba8
	if (ctx.cr6.lt) goto loc_82158BA8;
	// b 0x82158c20
	goto loc_82158C20;
loc_82158BEC:
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// bl 0x82158698
	ctx.lr = 0x82158BFC;
	sub_82158698(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82158c28
	if (!ctx.cr0.eq) goto loc_82158C28;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// lwz r5,0(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82158698
	ctx.lr = 0x82158C14;
	sub_82158698(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82158c28
	if (!ctx.cr0.eq) goto loc_82158C28;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
loc_82158C20:
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(r27.u32, r24.u32, ctx.xer);
	// blt cr6,0x82158bec
	if (ctx.cr6.lt) goto loc_82158BEC;
loc_82158C28:
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r28,r31
	r28.u64 = r31.u64;
	// b 0x82158c80
	goto loc_82158C80;
loc_82158C34:
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82158698
	ctx.lr = 0x82158C44;
	sub_82158698(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82158c7c
	if (!ctx.cr0.eq) goto loc_82158C7C;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82158698
	ctx.lr = 0x82158C5C;
	sub_82158698(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82158c88
	if (!ctx.cr0.eq) goto loc_82158C88;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// lwz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
loc_82158C78:
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
loc_82158C7C:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_82158C80:
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(r30.u32, r24.u32, ctx.xer);
	// blt cr6,0x82158c34
	if (ctx.cr6.lt) goto loc_82158C34;
loc_82158C88:
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(r28.u32, r25.u32, ctx.xer);
	// ble cr6,0x82158ce4
	if (!ctx.cr6.gt) goto loc_82158CE4;
loc_82158C90:
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,-4(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + -4);
	// addi r29,r28,-4
	r29.s64 = r28.s64 + -4;
	// bl 0x82158698
	ctx.lr = 0x82158CA4;
	sub_82158698(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82158cd4
	if (!ctx.cr0.eq) goto loc_82158CD4;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82158698
	ctx.lr = 0x82158CBC;
	sub_82158698(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82158ce0
	if (!ctx.cr0.eq) goto loc_82158CE0;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwzu r11,-4(r31)
	ea = -4 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_82158CD4:
	// mr r28,r29
	r28.u64 = r29.u64;
	// cmplw cr6,r25,r29
	ctx.cr6.compare<uint32_t>(r25.u32, r29.u32, ctx.xer);
	// blt cr6,0x82158c90
	if (ctx.cr6.lt) goto loc_82158C90;
loc_82158CE0:
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(r28.u32, r25.u32, ctx.xer);
loc_82158CE4:
	// bne cr6,0x82158d28
	if (!ctx.cr6.eq) goto loc_82158D28;
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(r30.u32, r24.u32, ctx.xer);
	// beq cr6,0x82158d7c
	if (ctx.cr6.eq) goto loc_82158D7C;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(r27.u32, r30.u32, ctx.xer);
	// beq cr6,0x82158d08
	if (ctx.cr6.eq) goto loc_82158D08;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
loc_82158D08:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// b 0x82158c78
	goto loc_82158C78;
loc_82158D28:
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(r30.u32, r24.u32, ctx.xer);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// bne cr6,0x82158d68
	if (!ctx.cr6.eq) goto loc_82158D68;
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// beq cr6,0x82158d54
	if (ctx.cr6.eq) goto loc_82158D54;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82158D54:
	// lwzu r11,-4(r27)
	ea = -4 + r27.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r27.u32 = ea;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// b 0x82158c80
	goto loc_82158C80;
loc_82158D68:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82158c7c
	goto loc_82158C7C;
loc_82158D7C:
	// stw r31,0(r23)
	REX_STORE_U32(r23.u32 + 0, r31.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r27,4(r23)
	REX_STORE_U32(r23.u32 + 4, r27.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8216FE78) {
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
	ctx.lr = 0x8216FE80;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r28,r3,384
	r28.s64 = ctx.r3.s64 + 384;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821613d8
	ctx.lr = 0x8216FEA4;
	sub_821613D8(ctx, base);
	// lwz r11,384(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 384);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216ff3c
	if (!ctx.cr6.gt) goto loc_8216FF3C;
	// addi r31,r26,4
	r31.s64 = r26.s64 + 4;
loc_8216FEB8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8216FEC8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8216fec8
	if (!ctx.cr6.eq) goto loc_8216FEC8;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216FF04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,-4(r31)
	REX_STORE_U32(r31.u32 + -4, ctx.r3.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821613d8
	ctx.lr = 0x8216FF18;
	sub_821613D8(ctx, base);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x821613d8
	ctx.lr = 0x8216FF28;
	sub_821613D8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8216feb8
	if (ctx.cr6.lt) goto loc_8216FEB8;
loc_8216FF3C:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,388(r26)
	REX_STORE_U32(r26.u32 + 388, ctx.r10.u32);
	// ble cr6,0x8216ffac
	if (!ctx.cr6.gt) goto loc_8216FFAC;
	// addi r31,r26,4
	r31.s64 = r26.s64 + 4;
loc_8216FF58:
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r5,388(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 388);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bl 0x82162a30
	ctx.lr = 0x8216FF68;
	sub_82162A30(ctx, base);
	// stw r3,388(r26)
	REX_STORE_U32(r26.u32 + 388, ctx.r3.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82162a30
	ctx.lr = 0x8216FF7C;
	sub_82162A30(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r11,388(r26)
	REX_STORE_U32(r26.u32 + 388, ctx.r11.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82162a30
	ctx.lr = 0x8216FF94;
	sub_82162A30(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stw r3,388(r26)
	REX_STORE_U32(r26.u32 + 388, ctx.r3.u32);
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8216ff58
	if (ctx.cr6.lt) goto loc_8216FF58;
loc_8216FFAC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82178C38) {
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
	ctx.lr = 0x82178C40;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r10,68(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r31,r3,64
	r31.s64 = ctx.r3.s64 + 64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// li r30,0
	r30.s64 = 0;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82178ca4
	if (!ctx.cr0.gt) goto loc_82178CA4;
	// li r29,0
	r29.s64 = 0;
loc_82178C6C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x8216bce8
	ctx.lr = 0x82178C84;
	sub_8216BCE8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82178c6c
	if (ctx.cr6.lt) goto loc_82178C6C;
loc_82178CA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8217B280) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8217B288;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r31,r3,44
	r31.s64 = ctx.r3.s64 + 44;
	// b 0x8217b2e0
	goto loc_8217B2E0;
loc_8217B2A4:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_8217B2B0:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// beq 0x8217b2d4
	if (ctx.cr0.eq) goto loc_8217B2D4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8217b2b0
	if (ctx.cr6.eq) goto loc_8217B2B0;
loc_8217B2D4:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8217b2ec
	if (ctx.cr0.eq) goto loc_8217B2EC;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
loc_8217B2E0:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8217b2a4
	if (!ctx.cr6.eq) goto loc_8217B2A4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8217B2EC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217b324
	if (ctx.cr6.eq) goto loc_8217B324;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8217B2F8:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8217b2f8
	if (!ctx.cr6.eq) goto loc_8217B2F8;
	// subf r10,r29,r10
	ctx.r10.u64 = ctx.r10.u64 - r29.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8217a390
	ctx.lr = 0x8217B320;
	sub_8217A390(ctx, base);
	// b 0x8217b390
	goto loc_8217B390;
loc_8217B324:
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x822f6280
	ctx.lr = 0x8217B32C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217b344
	if (ctx.cr0.eq) goto loc_8217B344;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8217a528
	ctx.lr = 0x8217B340;
	sub_8217A528(ctx, base);
	// b 0x8217b348
	goto loc_8217B348;
loc_8217B344:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8217B348:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217b36c
	if (ctx.cr6.eq) goto loc_8217B36C;
	// stw r31,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r31.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r3,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// b 0x8217b390
	goto loc_8217B390;
loc_8217B36C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8217a4b8
	ctx.lr = 0x8217B374;
	sub_8217A4B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217b390
	if (ctx.cr0.eq) goto loc_8217B390;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8217daf0
	ctx.lr = 0x8217B390;
	sub_8217DAF0(ctx, base);
loc_8217B390:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821844A8) {
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
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c8c
	ctx.lr = 0x821844B0;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x826a2ca4
	ctx.lr = 0x821844B8;
	// lwz r11,92(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 92);
	// li r23,0
	r23.s64 = 0;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r26,r11,32
	r26.s64 = ctx.r11.s64 + 32;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821847ac
	if (!ctx.cr6.gt) goto loc_821847AC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r24,-32243
	r24.s64 = -2113077248;
	// addi r10,r11,16592
	ctx.r10.s64 = ctx.r11.s64 + 16592;
	// lis r22,-32126
	r22.s64 = -2105409536;
	// addi r7,r3,112
	ctx.r7.s64 = ctx.r3.s64 + 112;
	// addi r6,r3,176
	ctx.r6.s64 = ctx.r3.s64 + 176;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f9,15048(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 15048);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f3,292(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 292);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,288(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 288);
	ctx.f4.f64 = double(temp.f32);
	// addi r30,r3,100
	r30.s64 = ctx.r3.s64 + 100;
	// lfs f2,180(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 180);
	ctx.f2.f64 = double(temp.f32);
	// addi r29,r3,164
	r29.s64 = ctx.r3.s64 + 164;
	// lfs f7,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// addi r28,r7,4
	r28.s64 = ctx.r7.s64 + 4;
	// lfs f1,-16132(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + -16132);
	ctx.f1.f64 = double(temp.f32);
	// addi r27,r6,4
	r27.s64 = ctx.r6.s64 + 4;
	// addi r5,r3,160
	ctx.r5.s64 = ctx.r3.s64 + 160;
	// addi r31,r3,96
	r31.s64 = ctx.r3.s64 + 96;
	// addi r25,r4,96
	r25.s64 = ctx.r4.s64 + 96;
	// addi r24,r11,-27152
	r24.s64 = ctx.r11.s64 + -27152;
	// addi r9,r9,-27136
	ctx.r9.s64 = ctx.r9.s64 + -27136;
loc_82184530:
	// lfs f11,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsubs f13,f11,f8
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// lfs f10,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f31,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	f31.f64 = double(temp.f32);
	// lfs f6,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f6,f10,f6
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// lfs f30,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	f30.f64 = double(temp.f32);
	// fsubs f5,f10,f5
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// lfs f29,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	f29.f64 = double(temp.f32);
	// lfs f28,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	f28.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f31,f30,f13
	f31.f64 = double(float(f30.f64 * ctx.f13.f64));
	// fmadds f13,f29,f6,f0
	ctx.f13.f64 = double(float(std::fma(f29.f64, ctx.f6.f64, ctx.f0.f64)));
	// fmadds f0,f28,f5,f31
	ctx.f0.f64 = double(float(std::fma(f28.f64, ctx.f5.f64, f31.f64)));
	// fmuls f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f6,f9
	ctx.cr6.compare(ctx.f6.f64, ctx.f9.f64);
	// bge cr6,0x82184790
	if (!ctx.cr6.lt) goto loc_82184790;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f6,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f31,132(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 132);
	f31.f64 = double(temp.f32);
	// lfs f30,196(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 196);
	f30.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fsubs f13,f7,f0
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fmuls f29,f12,f0
	f29.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f12,f31,f0
	ctx.f12.f64 = double(float(f31.f64 * ctx.f0.f64));
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmadds f12,f30,f13,f12
	ctx.f12.f64 = double(float(std::fma(f30.f64, ctx.f13.f64, ctx.f12.f64)));
	// fadds f8,f29,f8
	ctx.f8.f64 = double(float(f29.f64 + ctx.f8.f64));
	// fadds f6,f5,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fsubs f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fsubs f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f11,f10,f10,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f11.f64)));
	// fcmpu cr6,f11,f5
	ctx.cr6.compare(ctx.f11.f64, ctx.f5.f64);
	// bge cr6,0x82184790
	if (!ctx.cr6.lt) goto loc_82184790;
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// lfs f11,80(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,136(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f6,144(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f5,200(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f5.f64 = double(temp.f32);
	// lfs f31,208(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 208);
	f31.f64 = double(temp.f32);
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// fnmsubs f30,f11,f12,f10
	f30.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f12.f64, -ctx.f10.f64)));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fneg f29,f30
	f29.u64 = f30.u64 ^ 0x8000000000000000;
	// fmadds f5,f5,f13,f8
	ctx.f5.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f8.f64)));
	// fmadds f8,f31,f13,f6
	ctx.f8.f64 = double(float(std::fma(f31.f64, ctx.f13.f64, ctx.f6.f64)));
	// fcmpu cr6,f29,f9
	ctx.cr6.compare(f29.f64, ctx.f9.f64);
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
	// rlwinm r22,r22,30,29,29
	r22.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 30) & 0x4;
	// or r22,r21,r22
	r22.u64 = r21.u64 | r22.u64;
	// lfsx f6,r11,r22
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsel f6,f6,f9,f30
	ctx.f6.f64 = ctx.f6.f64 >= 0.0 ? ctx.f9.f64 : f30.f64;
	// fdivs f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 / ctx.f5.f64));
	// fsubs f6,f8,f6
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// fcmpu cr6,f6,f9
	ctx.cr6.compare(ctx.f6.f64, ctx.f9.f64);
	// ble cr6,0x82184790
	if (!ctx.cr6.gt) goto loc_82184790;
	// lfs f5,120(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f31,184(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 184);
	f31.f64 = double(temp.f32);
	// fmadds f5,f31,f13,f5
	ctx.f5.f64 = double(float(std::fma(f31.f64, ctx.f13.f64, ctx.f5.f64)));
	// fcmpu cr6,f8,f5
	ctx.cr6.compare(ctx.f8.f64, ctx.f5.f64);
	// bge cr6,0x82184790
	if (!ctx.cr6.lt) goto loc_82184790;
	// lfs f31,128(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	f31.f64 = double(temp.f32);
	// fdivs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 / ctx.f12.f64));
	// fmuls f10,f31,f0
	ctx.f10.f64 = double(float(f31.f64 * ctx.f0.f64));
	// lfs f31,140(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 140);
	f31.f64 = double(temp.f32);
	// lfs f30,124(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 124);
	f30.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	f31.f64 = double(float(f31.f64 * ctx.f0.f64));
	// fmuls f30,f30,f0
	f30.f64 = double(float(f30.f64 * ctx.f0.f64));
	// lfs f29,192(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 192);
	f29.f64 = double(temp.f32);
	// lfs f28,204(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 204);
	f28.f64 = double(temp.f32);
	// lfs f27,188(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 188);
	f27.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// fmadds f0,f29,f13,f10
	ctx.f0.f64 = double(float(std::fma(f29.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f10,f28,f13,f31
	ctx.f10.f64 = double(float(std::fma(f28.f64, ctx.f13.f64, f31.f64)));
	// fmadds f13,f27,f13,f30
	ctx.f13.f64 = double(float(std::fma(f27.f64, ctx.f13.f64, f30.f64)));
	// bge cr6,0x821846a0
	if (!ctx.cr6.lt) goto loc_821846A0;
	// fdivs f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
loc_821846A0:
	// lfs f11,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x821846bc
	if (!ctx.cr6.gt) goto loc_821846BC;
	// fsubs f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fsubs f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fdivs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
loc_821846BC:
	// fmadds f12,f10,f6,f4
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f6.f64, ctx.f4.f64)));
	// addi r11,r10,256
	ctx.r11.s64 = ctx.r10.s64 + 256;
	// fsubs f11,f5,f8
	ctx.f11.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// stfs f7,-192(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// addi r22,r1,-192
	r22.s64 = ctx.r1.s64 + -192;
	// lvx128 v62,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r21,r1,-204
	r21.s64 = ctx.r1.s64 + -204;
	// addi r20,r1,-208
	r20.s64 = ctx.r1.s64 + -208;
	// addi r19,r10,256
	r19.s64 = ctx.r10.s64 + 256;
	// fabs f10,f12
	ctx.f10.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f9
	ctx.cr6.compare(ctx.f12.f64, ctx.f9.f64);
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
	// fmuls f12,f10,f3
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// rlwinm r17,r18,27,29,29
	r17.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 27) & 0x4;
	// rlwinm r18,r18,30,29,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 30) & 0x4;
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// or r18,r17,r18
	r18.u64 = r17.u64 | r18.u64;
	// lfsx f11,r11,r18
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r18.u32);
	ctx.f11.f64 = double(temp.f32);
	// fctidz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// fsubs f8,f7,f13
	ctx.f8.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
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
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// rlwinm r18,r11,27,29,29
	r18.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// rlwinm r11,r11,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// or r11,r18,r11
	ctx.r11.u64 = r18.u64 | ctx.r11.u64;
	// fnmsubs f12,f12,f2,f10
	ctx.f12.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f2.f64, -ctx.f10.f64)));
	// fsubs f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f4.f64));
	// fneg f10,f12
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsel f12,f11,f12,f10
	ctx.f12.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f10.f64;
	// stfs f12,-188(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// stfs f11,-184(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f12,-180(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -180, temp.u32);
	// lvx128 v63,r0,r22
	ea = (r22.u32) & ~0xF;
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
	// stvewx128 v62,r0,r21
	ea = (r21.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v63,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v63,v61,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// stvewx128 v63,r0,r20
	ea = (r20.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,-208(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r19,r11
	temp.u32 = REX_LOAD_U32(r19.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f13,f10,f13,f7
	ctx.f13.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : ctx.f7.f64;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmadds f0,f0,f1,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f1.f64, ctx.f11.f64)));
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r26.u32 + 0, temp.u32);
loc_82184790:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// lwz r22,0(r4)
	r22.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
	// cmpw cr6,r23,r22
	ctx.cr6.compare<int32_t>(r23.s32, r22.s32, ctx.xer);
	// blt cr6,0x82184530
	if (ctx.cr6.lt) goto loc_82184530;
loc_821847AC:
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x826a2cf0
	ctx.lr = 0x821847B4;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_821A6FB8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15360
	ctx.r3.s64 = ctx.r11.s64 + -15360;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A7110) {
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
	// bl 0x821a7420
	ctx.lr = 0x821A7128;
	sub_821A7420(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821a7138
	if (!ctx.cr0.eq) goto loc_821A7138;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821a7184
	goto loc_821A7184;
loc_821A7138:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6180(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a7180
	if (ctx.cr6.eq) goto loc_821A7180;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821a715c
	if (ctx.cr6.lt) goto loc_821A715C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821A715C:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A7174;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x821a7184
	if (ctx.cr0.eq) goto loc_821A7184;
loc_821A7180:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821A7184:
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

DEFINE_REX_FUNC(sub_821AA210) {
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
	ctx.lr = 0x821AA218;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	ctx.lr = 0x821AA234;
	sub_821613D8(ctx, base);
	// addi r30,r28,96
	r30.s64 = r28.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8216fb90
	ctx.lr = 0x821AA248;
	sub_8216FB90(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a8c10
	ctx.lr = 0x821AA254;
	sub_821A8C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r5,r29,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x821613d8
	ctx.lr = 0x821AA264;
	sub_821613D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821613d8
	ctx.lr = 0x821AA274;
	sub_821613D8(ctx, base);
	// addi r30,r28,108
	r30.s64 = r28.s64 + 108;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8212fcf0
	ctx.lr = 0x821AA288;
	sub_8212FCF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8228ca78
	ctx.lr = 0x821AA294;
	sub_8228CA78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821613d8
	ctx.lr = 0x821AA2A4;
	sub_821613D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821613d8
	ctx.lr = 0x821AA2B4;
	sub_821613D8(ctx, base);
	// addi r30,r28,120
	r30.s64 = r28.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82125c20
	ctx.lr = 0x821AA2C8;
	sub_82125C20(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82125c98
	ctx.lr = 0x821AA2D4;
	sub_82125C98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x821613d8
	ctx.lr = 0x821AA2E4;
	sub_821613D8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821613d8
	ctx.lr = 0x821AA2F4;
	sub_821613D8(ctx, base);
	// lwz r11,140(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 140);
	// addi r26,r28,132
	r26.s64 = r28.s64 + 132;
	// lwz r25,80(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821aa358
	if (!ctx.cr6.gt) goto loc_821AA358;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(r30.s32, r25.s32, ctx.xer);
	// bgt cr6,0x821aa320
	if (ctx.cr6.gt) goto loc_821AA320;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_821AA320:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821aa358
	if (!ctx.cr6.gt) goto loc_821AA358;
	// li r4,16
	ctx.r4.s64 = 16;
	// mulli r3,r30,34
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(34));
	// bl 0x8269d1d0
	ctx.lr = 0x821AA334;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r4,0(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mulli r5,r11,34
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(34));
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821AA348;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x821AA350;
	sub_8269D1B8(ctx, base);
	// stw r29,0(r26)
	REX_STORE_U32(r26.u32 + 0, r29.u32);
	// stw r30,8(r26)
	REX_STORE_U32(r26.u32 + 8, r30.u32);
loc_821AA358:
	// stw r25,4(r26)
	REX_STORE_U32(r26.u32 + 4, r25.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821aa988
	ctx.lr = 0x821AA368;
	sub_821AA988(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mulli r5,r25,34
	ctx.r5.s64 = static_cast<int64_t>(r25.u64 * static_cast<uint64_t>(34));
	// bl 0x821613d8
	ctx.lr = 0x821AA378;
	sub_821613D8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821613d8
	ctx.lr = 0x821AA388;
	sub_821613D8(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c1a70
	ctx.lr = 0x821AA394;
	sub_822C1A70(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821613d8
	ctx.lr = 0x821AA3A8;
	sub_821613D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822a1cf8
	ctx.lr = 0x821AA3B4;
	sub_822A1CF8(ctx, base);
	// stw r3,176(r28)
	REX_STORE_U32(r28.u32 + 176, ctx.r3.u32);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821AA3C0;
	sub_822F6280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,16592
	r27.s64 = ctx.r11.s64 + 16592;
	// li r30,0
	r30.s64 = 0;
	// beq 0x821aa458
	if (ctx.cr0.eq) goto loc_821AA458;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stb r11,20(r3)
	REX_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// lfs f0,924(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 924);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,40(r3)
	REX_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// addi r9,r9,-24484
	ctx.r9.s64 = ctx.r9.s64 + -24484;
	// stw r30,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r30.u32);
	// lfs f12,304(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 304);
	ctx.f12.f64 = double(temp.f32);
	// stw r30,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r30.u32);
	// lfs f11,60(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// stw r30,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r30.u32);
	// lfs f13,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,60(r3)
	REX_STORE_U8(ctx.r3.u32 + 60, ctx.r11.u8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r30,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r30.u32);
	// stw r30,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, r30.u32);
	// stw r30,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, r30.u32);
	// stb r11,80(r3)
	REX_STORE_U8(ctx.r3.u32 + 80, ctx.r11.u8);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r30,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, r30.u32);
	// stw r30,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, r30.u32);
	// stw r30,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, r30.u32);
	// stfs f13,84(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f12,88(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f11,96(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// b 0x821aa45c
	goto loc_821AA45C;
loc_821AA458:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_821AA45C:
	// stw r29,180(r28)
	REX_STORE_U32(r28.u32 + 180, r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r29,84
	ctx.r4.s64 = r29.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821613d8
	ctx.lr = 0x821AA470;
	sub_821613D8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r29,88
	ctx.r4.s64 = r29.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821613d8
	ctx.lr = 0x821AA480;
	sub_821613D8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r29,92
	ctx.r4.s64 = r29.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821613d8
	ctx.lr = 0x821AA490;
	sub_821613D8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r29,96
	ctx.r4.s64 = r29.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821613d8
	ctx.lr = 0x821AA4A0;
	sub_821613D8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r29,100
	ctx.r4.s64 = r29.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821613d8
	ctx.lr = 0x821AA4B0;
	sub_821613D8(ctx, base);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821da450
	ctx.lr = 0x821AA4C4;
	sub_821DA450(ctx, base);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r29,24
	ctx.r4.s64 = r29.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821da450
	ctx.lr = 0x821AA4D8;
	sub_821DA450(ctx, base);
	// lfs f0,180(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r29,44
	ctx.r4.s64 = r29.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821da210
	ctx.lr = 0x821AA4FC;
	sub_821DA210(ctx, base);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r29,64
	ctx.r4.s64 = r29.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821da450
	ctx.lr = 0x821AA510;
	sub_821DA450(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r28,144
	ctx.r4.s64 = r28.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821613d8
	ctx.lr = 0x821AA520;
	sub_821613D8(ctx, base);
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x821aa588
	if (!ctx.cr6.gt) goto loc_821AA588;
	// lis r27,-32106
	r27.s64 = -2104098816;
loc_821AA530:
	// lwz r29,6164(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 6164);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x821aa568
	if (ctx.cr6.eq) goto loc_821AA568;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r28,0(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821aa988
	ctx.lr = 0x821AA54C;
	sub_821AA988(ctx, base);
	// lwz r11,76(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 76);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821AA560;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r29,r3,24
	r29.u64 = ctx.r3.u32 & 0xFF;
	// b 0x821aa56c
	goto loc_821AA56C;
loc_821AA568:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_821AA56C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821aa988
	ctx.lr = 0x821AA578;
	sub_821AA988(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stb r29,32(r3)
	REX_STORE_U8(ctx.r3.u32 + 32, r29.u8);
	// cmpw cr6,r31,r25
	ctx.cr6.compare<int32_t>(r31.s32, r25.s32, ctx.xer);
	// blt cr6,0x821aa530
	if (ctx.cr6.lt) goto loc_821AA530;
loc_821AA588:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_821C2768) {
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
	ctx.lr = 0x821C2770;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// mr r28,r26
	r28.u64 = r26.u64;
	// bl 0x82178268
	ctx.lr = 0x821C278C;
	sub_82178268(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,-18396
	ctx.r11.s64 = ctx.r11.s64 + -18396;
	// addi r10,r10,-17828
	ctx.r10.s64 = ctx.r10.s64 + -17828;
	// addi r9,r9,-17788
	ctx.r9.s64 = ctx.r9.s64 + -17788;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r30,r31,136
	r30.s64 = r31.s64 + 136;
	// stw r9,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r25,r31,112
	r25.s64 = r31.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x821C27C8;
	sub_82120AC0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r26,168(r31)
	REX_STORE_U32(r31.u32 + 168, r26.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stb r11,164(r31)
	REX_STORE_U8(r31.u32 + 164, ctx.r11.u8);
	// li r3,100
	ctx.r3.s64 = 100;
	// addi r11,r10,12536
	ctx.r11.s64 = ctx.r10.s64 + 12536;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// addi r27,r31,164
	r27.s64 = r31.s64 + 164;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821C27F0;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821c2820
	if (ctx.cr0.eq) goto loc_821C2820;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-17856
	ctx.r4.s64 = ctx.r11.s64 + -17856;
	// bl 0x82120600
	ctx.lr = 0x821C2808;
	sub_82120600(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x821bf110
	ctx.lr = 0x821C281C;
	sub_821BF110(ctx, base);
	// b 0x821c2824
	goto loc_821C2824;
loc_821C2820:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_821C2824:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r29,r31,80
	r29.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821C2838;
	sub_82145710(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// bl 0x8269ce98
	ctx.lr = 0x821C2844;
	sub_8269CE98(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x821C284C;
	sub_822F6280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r24,r11,-13900
	r24.s64 = ctx.r11.s64 + -13900;
	// beq 0x821c2874
	if (ctx.cr0.eq) goto loc_821C2874;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r24,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r24.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x821c2878
	goto loc_821C2878;
loc_821C2874:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_821C2878:
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
	// stb r26,33(r30)
	REX_STORE_U8(r30.u32 + 33, r26.u8);
	// beq 0x821c289c
	if (ctx.cr0.eq) goto loc_821C289C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r28,r28,0,0,30
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821C289C;
	sub_82120AC0(ctx, base);
loc_821C289C:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821C28A4;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821c28d4
	if (ctx.cr0.eq) goto loc_821C28D4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-24032
	ctx.r4.s64 = ctx.r11.s64 + -24032;
	// bl 0x82120600
	ctx.lr = 0x821C28BC;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r28,r28,2
	r28.u64 = r28.u64 | 2;
	// bl 0x82191600
	ctx.lr = 0x821C28D0;
	sub_82191600(ctx, base);
	// b 0x821c28d8
	goto loc_821C28D8;
loc_821C28D4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_821C28D8:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821C28E8;
	sub_82145710(ctx, base);
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c2900
	if (ctx.cr0.eq) goto loc_821C2900;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x821C2900;
	sub_82120AC0(ctx, base);
loc_821C2900:
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x822f6280
	ctx.lr = 0x821C2908;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c2920
	if (ctx.cr0.eq) goto loc_821C2920;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821a1e80
	ctx.lr = 0x821C2918;
	sub_821A1E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821c2924
	goto loc_821C2924;
loc_821C2920:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_821C2924:
	// stw r4,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821C2934;
	sub_821D3988(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x821C293C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c2958
	if (ctx.cr0.eq) goto loc_821C2958;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821912a0
	ctx.lr = 0x821C2950;
	sub_821912A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821c295c
	goto loc_821C295C;
loc_821C2958:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_821C295C:
	// stw r4,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821C2968;
	sub_821D3988(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x821C2970;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c299c
	if (ctx.cr0.eq) goto loc_821C299C;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,3720
	ctx.r11.s64 = ctx.r11.s64 + 3720;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82233df8
	ctx.lr = 0x821C2994;
	sub_82233DF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821c29a0
	goto loc_821C29A0;
loc_821C299C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_821C29A0:
	// stw r4,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821C29AC;
	sub_821D3988(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x821C29B4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c29d4
	if (ctx.cr0.eq) goto loc_821C29D4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x821C29CC;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821c29d8
	goto loc_821C29D8;
loc_821C29D4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_821C29D8:
	// stw r4,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821C29E4;
	sub_821D3988(ctx, base);
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x821C29EC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c2a08
	if (ctx.cr0.eq) goto loc_821C2A08;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dd570
	ctx.lr = 0x821C2A00;
	sub_821DD570(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821c2a0c
	goto loc_821C2A0C;
loc_821C2A08:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_821C2A0C:
	// stw r4,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821C2A18;
	sub_821D3988(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// addi r11,r11,12456
	ctx.r11.s64 = ctx.r11.s64 + 12456;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r30,120(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 120);
	// bl 0x822f6280
	ctx.lr = 0x821C2A34;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c2a60
	if (ctx.cr0.eq) goto loc_821C2A60;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// ld r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,-12728
	ctx.r9.s64 = ctx.r9.s64 + -12728;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// std r8,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r8.u64);
	// b 0x821c2a64
	goto loc_821C2A64;
loc_821C2A60:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_821C2A64:
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r30,120(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 120);
	// addi r11,r11,12496
	ctx.r11.s64 = ctx.r11.s64 + 12496;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821C2A84;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c2ab0
	if (ctx.cr0.eq) goto loc_821C2AB0;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// ld r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,-12728
	ctx.r9.s64 = ctx.r9.s64 + -12728;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// std r8,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r8.u64);
	// b 0x821c2ab4
	goto loc_821C2AB4;
loc_821C2AB0:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_821C2AB4:
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// addi r11,r11,12736
	ctx.r11.s64 = ctx.r11.s64 + 12736;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r30,116(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 116);
	// bl 0x822f6280
	ctx.lr = 0x821C2AD4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c2af8
	if (ctx.cr0.eq) goto loc_821C2AF8;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ld r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// stw r24,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r24.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// std r9,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// b 0x821c2afc
	goto loc_821C2AFC;
loc_821C2AF8:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_821C2AFC:
	// stw r11,96(r30)
	REX_STORE_U32(r30.u32 + 96, ctx.r11.u32);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821C2B08;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r28,r11,-19528
	r28.s64 = ctx.r11.s64 + -19528;
	// addi r29,r10,-23836
	r29.s64 = ctx.r10.s64 + -23836;
	// beq 0x821c2b88
	if (ctx.cr0.eq) goto loc_821C2B88;
	// stw r26,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r26.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// addi r11,r11,11952
	ctx.r11.s64 = ctx.r11.s64 + 11952;
	// addi r4,r10,-20928
	ctx.r4.s64 = ctx.r10.s64 + -20928;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821C2B4C;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x821C2B58;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c2b78
	if (ctx.cr0.eq) goto loc_821C2B78;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x821c2b7c
	goto loc_821C2B7C;
loc_821C2B78:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_821C2B7C:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x821c2b8c
	goto loc_821C2B8C;
loc_821C2B88:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_821C2B8C:
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821C2BA4;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821C2BAC;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821c2c1c
	if (ctx.cr0.eq) goto loc_821C2C1C;
	// stw r26,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r26.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// addi r11,r11,12040
	ctx.r11.s64 = ctx.r11.s64 + 12040;
	// addi r4,r10,-17844
	ctx.r4.s64 = ctx.r10.s64 + -17844;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821C2BE0;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x821C2BEC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c2c0c
	if (ctx.cr0.eq) goto loc_821C2C0C;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x821c2c10
	goto loc_821C2C10;
loc_821C2C0C:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_821C2C10:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x821c2c20
	goto loc_821C2C20;
loc_821C2C1C:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_821C2C20:
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821C2C38;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821C2C40;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821c2cb0
	if (ctx.cr0.eq) goto loc_821C2CB0;
	// stw r26,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r26.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// addi r11,r11,12128
	ctx.r11.s64 = ctx.r11.s64 + 12128;
	// addi r4,r10,-17836
	ctx.r4.s64 = ctx.r10.s64 + -17836;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821C2C74;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x821C2C80;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c2ca0
	if (ctx.cr0.eq) goto loc_821C2CA0;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x821c2ca4
	goto loc_821C2CA4;
loc_821C2CA0:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_821C2CA4:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x821c2cb4
	goto loc_821C2CB4;
loc_821C2CB0:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_821C2CB4:
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821C2CCC;
	sub_82264568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_821E58C8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,14448
	ctx.r3.s64 = ctx.r11.s64 + 14448;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E5D30) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c94
	ctx.lr = 0x821E5D38;
	// stfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -136, f29.u64);
	// stfd f30,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, f30.u64);
	// stfd f31,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e621c
	if (ctx.cr6.eq) goto loc_821E621C;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r23,r10,16592
	r23.s64 = ctx.r10.s64 + 16592;
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f29,15048(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	f29.f64 = double(temp.f32);
	// mr r29,r30
	r29.u64 = r30.u64;
	// lfs f30,172(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 172);
	f30.f64 = double(temp.f32);
	// addi r20,r10,-25252
	r20.s64 = ctx.r10.s64 + -25252;
	// stfs f30,104(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// lwz r28,132(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r21,144(r11)
	r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r19,r9,-25320
	r19.s64 = ctx.r9.s64 + -25320;
	// ble cr6,0x821e5e54
	if (!ctx.cr6.gt) goto loc_821E5E54;
	// addi r24,r3,72
	r24.s64 = ctx.r3.s64 + 72;
	// mr r26,r30
	r26.u64 = r30.u64;
loc_821E5DA4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x821afa30
	ctx.lr = 0x821E5DB0;
	sub_821AFA30(ctx, base);
	// lwz r25,0(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,132(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821e5dd4
	if (ctx.cr6.gt) goto loc_821E5DD4;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x821231d0
	ctx.lr = 0x821E5DD4;
	sub_821231D0(ctx, base);
loc_821E5DD4:
	// lwz r11,128(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 128);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// add r4,r26,r11
	ctx.r4.u64 = r26.u64 + ctx.r11.u64;
	// bl 0x823fbd18
	ctx.lr = 0x821E5DE8;
	sub_823FBD18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f29,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stfs f29,100(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stfs f29,104(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// ld r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// ld r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r11,8(r27)
	REX_STORE_U64(r27.u32 + 8, ctx.r11.u64);
	// std r10,0(r27)
	REX_STORE_U64(r27.u32 + 0, ctx.r10.u64);
	// bl 0x821afa30
	ctx.lr = 0x821E5E2C;
	sub_821AFA30(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r26,r26,16
	r26.s64 = r26.s64 + 16;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// blt cr6,0x821e5da4
	if (ctx.cr6.lt) goto loc_821E5DA4;
loc_821E5E54:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f31,4(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r23.u32 + 4);
	f31.f64 = double(temp.f32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lfs f13,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f11,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x823fbd18
	ctx.lr = 0x821E5EAC;
	sub_823FBD18(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f0,596(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r23.u32 + 596);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// ld r6,8(r9)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r29,8(r10)
	r29.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// ld r26,0(r3)
	r26.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// ld r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// addi r27,r1,80
	r27.s64 = ctx.r1.s64 + 80;
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// std r10,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r9,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r9.u64);
	// std r29,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, r29.u64);
	// std r6,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r6.u64);
	// stw r30,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, r30.u32);
	// stw r30,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, r30.u32);
	// stw r30,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, r30.u32);
	// stw r30,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, r30.u32);
	// stw r30,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, r30.u32);
	// stw r30,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, r30.u32);
	// stw r28,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r28.u32);
	// std r26,0(r27)
	REX_STORE_U64(r27.u32 + 0, r26.u64);
	// std r11,8(r27)
	REX_STORE_U64(r27.u32 + 8, ctx.r11.u64);
	// bl 0x82183478
	ctx.lr = 0x821E5F3C;
	sub_82183478(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// ld r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// ld r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r6,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// ld r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// std r6,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// ld r6,16(r3)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// std r6,16(r9)
	REX_STORE_U64(ctx.r9.u32 + 16, ctx.r6.u64);
	// ld r6,24(r3)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// std r6,24(r9)
	REX_STORE_U64(ctx.r9.u32 + 24, ctx.r6.u64);
	// std r5,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r5.u64);
	// std r8,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r8.u64);
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lfs f13,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// ble cr6,0x821e5fec
	if (!ctx.cr6.gt) goto loc_821E5FEC;
	// lwz r9,68(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 68);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// lwz r8,64(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 64);
loc_821E5FD0:
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r6,r1,216
	ctx.r6.s64 = ctx.r1.s64 + 216;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// stwx r7,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// blt cr6,0x821e5fd0
	if (ctx.cr6.lt) goto loc_821E5FD0;
loc_821E5FEC:
	// addi r27,r31,72
	r27.s64 = r31.s64 + 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821afa30
	ctx.lr = 0x821E5FFC;
	sub_821AFA30(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// stw r3,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r3.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// stw r11,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,6168(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 6168);
	// bl 0x821495c8
	ctx.lr = 0x821E6018;
	sub_821495C8(ctx, base);
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x821e60a4
	if (!ctx.cr6.gt) goto loc_821E60A4;
loc_821E6024:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821afa30
	ctx.lr = 0x821E6030;
	sub_821AFA30(ctx, base);
	// addi r26,r3,8
	r26.s64 = ctx.r3.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821afa30
	ctx.lr = 0x821E6040;
	sub_821AFA30(ctx, base);
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// li r26,1
	r26.s64 = 1;
	// fsubs f31,f0,f13
	f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(f31.f64, f29.f64);
	// blt cr6,0x821e605c
	if (ctx.cr6.lt) goto loc_821E605C;
	// mr r26,r30
	r26.u64 = r30.u64;
loc_821E605C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821afa30
	ctx.lr = 0x821E6068;
	sub_821AFA30(ctx, base);
	// stw r26,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r26.u32);
	// lfs f0,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, f29.f64);
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
	// addi r9,r23,256
	ctx.r9.s64 = r23.s64 + 256;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// lfsx f13,r9,r11
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f13,f0,f31
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : f31.f64;
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
	// blt cr6,0x821e6024
	if (ctx.cr6.lt) goto loc_821E6024;
loc_821E60A4:
	// mr r25,r30
	r25.u64 = r30.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// ble cr6,0x821e621c
	if (!ctx.cr6.gt) goto loc_821E621C;
	// addi r24,r31,84
	r24.s64 = r31.s64 + 84;
	// mr r26,r30
	r26.u64 = r30.u64;
loc_821E60B8:
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,144(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821e60d8
	if (ctx.cr6.gt) goto loc_821E60D8;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x821231d0
	ctx.lr = 0x821E60D8;
	sub_821231D0(ctx, base);
loc_821E60D8:
	// lwz r11,140(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 140);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// add r28,r26,r11
	r28.u64 = r26.u64 + ctx.r11.u64;
	// bl 0x821afa30
	ctx.lr = 0x821E60EC;
	sub_821AFA30(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x821afa30
	ctx.lr = 0x821E60FC;
	sub_821AFA30(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 4);
	// bl 0x821afa30
	ctx.lr = 0x821E610C;
	sub_821AFA30(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// xor. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r11.u32);
	// beq 0x821e620c
	if (ctx.cr0.eq) goto loc_821E620C;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f13,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r29,16
	ctx.r9.s64 = r29.s64 + 16;
	// lfs f10,32(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f10,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f9,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f8,f10
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// lfs f7,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f7,f7,f9
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fneg f6,f12
	ctx.f6.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fdivs f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 / ctx.f13.f64));
	// fmuls f12,f8,f13
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f8,f7,f13
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f12,f9,f8
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r11.u64);
	// std r9,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.r9.u64);
	// lfs f12,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// fsubs f9,f9,f10
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r10,24(r29)
	REX_STORE_U64(r29.u32 + 24, ctx.r10.u64);
	// std r11,16(r29)
	REX_STORE_U64(r29.u32 + 16, ctx.r11.u64);
	// lfs f0,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,32(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,32(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 32, temp.u32);
loc_821E620C:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// cmpw cr6,r25,r21
	ctx.cr6.compare<int32_t>(r25.s32, r21.s32, ctx.xer);
	// blt cr6,0x821e60b8
	if (ctx.cr6.lt) goto loc_821E60B8;
loc_821E621C:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_82212C20) {
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
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82212C54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// bne cr6,0x82212c68
	if (!ctx.cr6.eq) goto loc_82212C68;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82212C68:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// bl 0x82146418
	ctx.lr = 0x82212C74;
	sub_82146418(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e7428
	ctx.lr = 0x82212C7C;
	sub_822E7428(ctx, base);
	// stw r30,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r30.u32);
	// stb r30,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x82212C98;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// bl 0x8216bc98
	ctx.lr = 0x82212CA8;
	sub_8216BC98(ctx, base);
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

DEFINE_REX_FUNC(sub_82219610) {
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
	ctx.lr = 0x82219618;
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -152, f31.u64);
	// stwu r1,-848(r1)
	ea = -848 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r28,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// mr r29,r28
	r29.u64 = r28.u64;
	// bl 0x82178268
	ctx.lr = 0x82219638;
	sub_82178268(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r9,r10,15048
	ctx.r9.s64 = ctx.r10.s64 + 15048;
	// addi r8,r11,-26136
	ctx.r8.s64 = ctx.r11.s64 + -26136;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// lfs f31,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// li r10,200
	ctx.r10.s64 = 200;
	// lfs f0,-22312(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -22312);
	ctx.f0.f64 = double(temp.f32);
	// addi r19,r31,160
	r19.s64 = r31.s64 + 160;
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// addi r30,r31,120
	r30.s64 = r31.s64 + 120;
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// stfs f31,128(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// addi r22,r31,128
	r22.s64 = r31.s64 + 128;
	// stfs f31,132(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// addi r20,r31,136
	r20.s64 = r31.s64 + 136;
	// stfs f31,136(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// stb r11,143(r31)
	REX_STORE_U8(r31.u32 + 143, ctx.r11.u8);
	// stb r10,142(r31)
	REX_STORE_U8(r31.u32 + 142, ctx.r10.u8);
	// addi r27,r31,140
	r27.s64 = r31.s64 + 140;
	// stb r28,141(r31)
	REX_STORE_U8(r31.u32 + 141, r28.u8);
	// addi r26,r31,144
	r26.s64 = r31.s64 + 144;
	// stb r11,140(r31)
	REX_STORE_U8(r31.u32 + 140, ctx.r11.u8);
	// stfs f31,144(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f31,148(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f31,152(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// stfs f31,156(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// bl 0x822e6df0
	ctx.lr = 0x822196B0;
	sub_822E6DF0(ctx, base);
	// stfs f31,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 252, temp.u32);
	// stfs f31,256(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 256, temp.u32);
	// addi r18,r31,268
	r18.s64 = r31.s64 + 268;
	// stfs f31,260(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 260, temp.u32);
	// addi r25,r31,252
	r25.s64 = r31.s64 + 252;
	// stfs f31,264(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 264, temp.u32);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x822e6df0
	ctx.lr = 0x822196D0;
	sub_822E6DF0(ctx, base);
	// stfs f31,360(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 360, temp.u32);
	// stfs f31,364(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 364, temp.u32);
	// addi r17,r31,376
	r17.s64 = r31.s64 + 376;
	// stfs f31,368(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 368, temp.u32);
	// addi r24,r31,360
	r24.s64 = r31.s64 + 360;
	// stfs f31,372(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 372, temp.u32);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x822e6df0
	ctx.lr = 0x822196F0;
	sub_822E6DF0(ctx, base);
	// stfs f31,468(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 468, temp.u32);
	// stfs f31,472(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 472, temp.u32);
	// addi r16,r31,484
	r16.s64 = r31.s64 + 484;
	// stfs f31,476(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 476, temp.u32);
	// addi r23,r31,468
	r23.s64 = r31.s64 + 468;
	// stfs f31,480(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 480, temp.u32);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x822e6df0
	ctx.lr = 0x82219710;
	sub_822E6DF0(ctx, base);
	// addi r15,r31,576
	r15.s64 = r31.s64 + 576;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x8226b010
	ctx.lr = 0x82219720;
	sub_8226B010(ctx, base);
	// stw r28,800(r31)
	REX_STORE_U32(r31.u32 + 800, r28.u32);
	// std r28,808(r31)
	REX_STORE_U64(r31.u32 + 808, r28.u64);
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r28,816(r31)
	REX_STORE_U32(r31.u32 + 816, r28.u32);
	// stw r28,820(r31)
	REX_STORE_U32(r31.u32 + 820, r28.u32);
	// stw r28,824(r31)
	REX_STORE_U32(r31.u32 + 824, r28.u32);
	// stb r28,832(r31)
	REX_STORE_U8(r31.u32 + 832, r28.u8);
	// stb r28,833(r31)
	REX_STORE_U8(r31.u32 + 833, r28.u8);
	// stw r28,836(r31)
	REX_STORE_U32(r31.u32 + 836, r28.u32);
	// bl 0x822f6280
	ctx.lr = 0x82219748;
	sub_822F6280(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq 0x82219778
	if (ctx.cr0.eq) goto loc_82219778;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// addi r4,r11,32356
	ctx.r4.s64 = ctx.r11.s64 + 32356;
	// bl 0x82120600
	ctx.lr = 0x82219760;
	sub_82120600(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// li r29,1
	r29.s64 = 1;
	// bl 0x821d13f8
	ctx.lr = 0x82219774;
	sub_821D13F8(ctx, base);
	// b 0x8221977c
	goto loc_8221977C;
loc_82219778:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8221977C:
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82145710
	ctx.lr = 0x82219790;
	sub_82145710(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822197ac
	if (ctx.cr0.eq) goto loc_822197AC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// rlwinm r29,r29,0,0,30
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x822197AC;
	sub_82120AC0(ctx, base);
loc_822197AC:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x822197B4;
	sub_822F6280(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq 0x822197e4
	if (ctx.cr0.eq) goto loc_822197E4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// addi r4,r11,32504
	ctx.r4.s64 = ctx.r11.s64 + 32504;
	// bl 0x82120600
	ctx.lr = 0x822197CC;
	sub_82120600(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// ori r29,r29,2
	r29.u64 = r29.u64 | 2;
	// bl 0x82196ba8
	ctx.lr = 0x822197E0;
	sub_82196BA8(ctx, base);
	// b 0x822197e8
	goto loc_822197E8;
loc_822197E4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_822197E8:
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82145710
	ctx.lr = 0x822197F8;
	sub_82145710(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82219814
	if (ctx.cr0.eq) goto loc_82219814;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// rlwinm r29,r29,0,31,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x82219814;
	sub_82120AC0(ctx, base);
loc_82219814:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8221981C;
	sub_822F6280(ctx, base);
	// mr. r22,r3
	r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq 0x8221984c
	if (ctx.cr0.eq) goto loc_8221984C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,32516
	ctx.r4.s64 = ctx.r11.s64 + 32516;
	// bl 0x82120600
	ctx.lr = 0x82219834;
	sub_82120600(ctx, base);
	// addi r5,r31,132
	ctx.r5.s64 = r31.s64 + 132;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// ori r29,r29,4
	r29.u64 = r29.u64 | 4;
	// bl 0x82196ba8
	ctx.lr = 0x82219848;
	sub_82196BA8(ctx, base);
	// b 0x82219850
	goto loc_82219850;
loc_8221984C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82219850:
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82145710
	ctx.lr = 0x82219860;
	sub_82145710(ctx, base);
	// rlwinm. r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221987c
	if (ctx.cr0.eq) goto loc_8221987C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rlwinm r29,r29,0,30,28
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x8221987C;
	sub_82120AC0(ctx, base);
loc_8221987C:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82219884;
	sub_822F6280(ctx, base);
	// mr. r22,r3
	r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq 0x822198b4
	if (ctx.cr0.eq) goto loc_822198B4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// addi r4,r11,-28492
	ctx.r4.s64 = ctx.r11.s64 + -28492;
	// bl 0x82120600
	ctx.lr = 0x8221989C;
	sub_82120600(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// ori r29,r29,8
	r29.u64 = r29.u64 | 8;
	// bl 0x82196ba8
	ctx.lr = 0x822198B0;
	sub_82196BA8(ctx, base);
	// b 0x822198b8
	goto loc_822198B8;
loc_822198B4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_822198B8:
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82145710
	ctx.lr = 0x822198C8;
	sub_82145710(ctx, base);
	// rlwinm. r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822198e4
	if (ctx.cr0.eq) goto loc_822198E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// rlwinm r29,r29,0,29,27
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x822198E4;
	sub_82120AC0(ctx, base);
loc_822198E4:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x822198EC;
	sub_822F6280(ctx, base);
	// mr. r22,r3
	r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq 0x8221991c
	if (ctx.cr0.eq) goto loc_8221991C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,-27220
	ctx.r4.s64 = ctx.r11.s64 + -27220;
	// bl 0x82120600
	ctx.lr = 0x82219904;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// ori r29,r29,16
	r29.u64 = r29.u64 | 16;
	// bl 0x8219d708
	ctx.lr = 0x82219918;
	sub_8219D708(ctx, base);
	// b 0x82219920
	goto loc_82219920;
loc_8221991C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82219920:
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82145710
	ctx.lr = 0x82219930;
	sub_82145710(ctx, base);
	// rlwinm. r11,r29,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82219948
	if (ctx.cr0.eq) goto loc_82219948;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82120ac0
	ctx.lr = 0x82219948;
	sub_82120AC0(ctx, base);
loc_82219948:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// addi r4,r11,-27196
	ctx.r4.s64 = ctx.r11.s64 + -27196;
	// bl 0x82120600
	ctx.lr = 0x82219958;
	sub_82120600(ctx, base);
	// addi r5,r1,496
	ctx.r5.s64 = ctx.r1.s64 + 496;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822e7ad8
	ctx.lr = 0x82219968;
	sub_822E7AD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82120ac0
	ctx.lr = 0x82219978;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,-27184
	ctx.r4.s64 = ctx.r11.s64 + -27184;
	// bl 0x82120600
	ctx.lr = 0x82219988;
	sub_82120600(ctx, base);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x822e7f20
	ctx.lr = 0x82219998;
	sub_822E7F20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82120ac0
	ctx.lr = 0x822199A8;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-27172
	ctx.r4.s64 = ctx.r11.s64 + -27172;
	// bl 0x82120600
	ctx.lr = 0x822199B8;
	sub_82120600(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822e7ad8
	ctx.lr = 0x822199C8;
	sub_822E7AD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x822199D8;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// addi r4,r11,-27160
	ctx.r4.s64 = ctx.r11.s64 + -27160;
	// bl 0x82120600
	ctx.lr = 0x822199E8;
	sub_82120600(ctx, base);
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x822e7f20
	ctx.lr = 0x822199F8;
	sub_822E7F20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82120ac0
	ctx.lr = 0x82219A08;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-28484
	ctx.r4.s64 = ctx.r11.s64 + -28484;
	// bl 0x82120600
	ctx.lr = 0x82219A18;
	sub_82120600(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822e7ad8
	ctx.lr = 0x82219A28;
	sub_822E7AD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x82219A38;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,-28472
	ctx.r4.s64 = ctx.r11.s64 + -28472;
	// bl 0x82120600
	ctx.lr = 0x82219A48;
	sub_82120600(ctx, base);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x822e7f20
	ctx.lr = 0x82219A58;
	sub_822E7F20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82120ac0
	ctx.lr = 0x82219A68;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,-27148
	ctx.r4.s64 = ctx.r11.s64 + -27148;
	// bl 0x82120600
	ctx.lr = 0x82219A78;
	sub_82120600(ctx, base);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x822e7ad8
	ctx.lr = 0x82219A88;
	sub_822E7AD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82120ac0
	ctx.lr = 0x82219A98;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r11,-27136
	ctx.r4.s64 = ctx.r11.s64 + -27136;
	// bl 0x82120600
	ctx.lr = 0x82219AA8;
	sub_82120600(ctx, base);
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x822e7f20
	ctx.lr = 0x82219AB8;
	sub_822E7F20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82120ac0
	ctx.lr = 0x82219AC8;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// bl 0x82120600
	ctx.lr = 0x82219AD8;
	sub_82120600(ctx, base);
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x8226b670
	ctx.lr = 0x82219AE8;
	sub_8226B670(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82120ac0
	ctx.lr = 0x82219AF8;
	sub_82120AC0(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x82219B00;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82219b20
	if (ctx.cr0.eq) goto loc_82219B20;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,200
	ctx.r5.s64 = 200;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x82219B18;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82219b24
	goto loc_82219B24;
loc_82219B20:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_82219B24:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r29,r31,96
	r29.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d3988
	ctx.lr = 0x82219B34;
	sub_821D3988(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822f6280
	ctx.lr = 0x82219B3C;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82219ba4
	if (ctx.cr0.eq) goto loc_82219BA4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,8(r30)
	REX_STORE_U32(r30.u32 + 8, r28.u32);
	// addi r11,r11,32616
	ctx.r11.s64 = ctx.r11.s64 + 32616;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82219B68;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82219b94
	if (ctx.cr0.eq) goto loc_82219B94;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,-22952
	ctx.r10.s64 = ctx.r10.s64 + -22952;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82219b98
	goto loc_82219B98;
loc_82219B94:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_82219B98:
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x82219ba8
	goto loc_82219BA8;
loc_82219BA4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_82219BA8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d3988
	ctx.lr = 0x82219BB0;
	sub_821D3988(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x822f6280
	ctx.lr = 0x82219BB8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82219bd0
	if (ctx.cr0.eq) goto loc_82219BD0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8221c378
	ctx.lr = 0x82219BC8;
	sub_8221C378(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82219bd4
	goto loc_82219BD4;
loc_82219BD0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_82219BD4:
	// stw r4,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d3988
	ctx.lr = 0x82219BE0;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x82219BE8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82219c1c
	if (ctx.cr0.eq) goto loc_82219C1C;
	// stw r28,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r4,r10,-26496
	ctx.r4.s64 = ctx.r10.s64 + -26496;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r11,-23656
	ctx.r6.s64 = ctx.r11.s64 + -23656;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8221c420
	ctx.lr = 0x82219C14;
	sub_8221C420(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82219c20
	goto loc_82219C20;
loc_82219C1C:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_82219C20:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x82219C38;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x82219C40;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82219c74
	if (ctx.cr0.eq) goto loc_82219C74;
	// stw r28,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r4,r10,-26488
	ctx.r4.s64 = ctx.r10.s64 + -26488;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r11,-27240
	ctx.r6.s64 = ctx.r11.s64 + -27240;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8221c420
	ctx.lr = 0x82219C6C;
	sub_8221C420(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82219c78
	goto loc_82219C78;
loc_82219C74:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_82219C78:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x82219C90;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x82219C98;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82219ccc
	if (ctx.cr0.eq) goto loc_82219CCC;
	// stw r28,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r4,r10,-26476
	ctx.r4.s64 = ctx.r10.s64 + -26476;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,-23600
	ctx.r6.s64 = ctx.r11.s64 + -23600;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8221c420
	ctx.lr = 0x82219CC4;
	sub_8221C420(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82219cd0
	goto loc_82219CD0;
loc_82219CCC:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_82219CD0:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x82219CE8;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x82219CF0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82219d24
	if (ctx.cr0.eq) goto loc_82219D24;
	// stw r28,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r4,r10,-26468
	ctx.r4.s64 = ctx.r10.s64 + -26468;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,-23456
	ctx.r6.s64 = ctx.r11.s64 + -23456;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8221c420
	ctx.lr = 0x82219D1C;
	sub_8221C420(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82219d28
	goto loc_82219D28;
loc_82219D24:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_82219D28:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x82219D40;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x82219D48;
	sub_822F6280(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r11,-23824
	r29.s64 = ctx.r11.s64 + -23824;
	// beq 0x82219d8c
	if (ctx.cr0.eq) goto loc_82219D8C;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8216b9a8
	ctx.lr = 0x82219D68;
	sub_8216B9A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-26456
	ctx.r4.s64 = ctx.r11.s64 + -26456;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x82219D80;
	sub_821DBB48(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// b 0x82219d90
	goto loc_82219D90;
loc_82219D8C:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_82219D90:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x82219DA8;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x82219DB0;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82219dec
	if (ctx.cr0.eq) goto loc_82219DEC;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8216b9a8
	ctx.lr = 0x82219DC8;
	sub_8216B9A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-26432
	ctx.r4.s64 = ctx.r11.s64 + -26432;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x82219DE0;
	sub_821DBB48(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// b 0x82219df0
	goto loc_82219DF0;
loc_82219DEC:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_82219DF0:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x82219E08;
	sub_82264568(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x82219E10;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-29688
	r30.s64 = ctx.r11.s64 + -29688;
	// beq 0x82219e3c
	if (ctx.cr0.eq) goto loc_82219E3C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-24200
	ctx.r11.s64 = ctx.r11.s64 + -24200;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82219e40
	goto loc_82219E40;
loc_82219E3C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_82219E40:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r31,12
	r29.s64 = r31.s64 + 12;
	// addi r5,r11,17196
	ctx.r5.s64 = ctx.r11.s64 + 17196;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8216be80
	ctx.lr = 0x82219E54;
	sub_8216BE80(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x82219E5C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82219e80
	if (ctx.cr0.eq) goto loc_82219E80;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-24120
	ctx.r11.s64 = ctx.r11.s64 + -24120;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82219e84
	goto loc_82219E84;
loc_82219E80:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_82219E84:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r11,-26416
	ctx.r5.s64 = ctx.r11.s64 + -26416;
	// bl 0x8216be80
	ctx.lr = 0x82219E94;
	sub_8216BE80(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x82219E9C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82219ec0
	if (ctx.cr0.eq) goto loc_82219EC0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-24088
	ctx.r11.s64 = ctx.r11.s64 + -24088;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82219ec4
	goto loc_82219EC4;
loc_82219EC0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_82219EC4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r11,-28924
	ctx.r5.s64 = ctx.r11.s64 + -28924;
	// bl 0x8216be80
	ctx.lr = 0x82219ED4;
	sub_8216BE80(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x82219EDC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82219f00
	if (ctx.cr0.eq) goto loc_82219F00;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-23776
	ctx.r11.s64 = ctx.r11.s64 + -23776;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82219f04
	goto loc_82219F04;
loc_82219F00:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_82219F04:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r11,-27088
	ctx.r5.s64 = ctx.r11.s64 + -27088;
	// bl 0x8216be80
	ctx.lr = 0x82219F14;
	sub_8216BE80(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// addi r4,r11,16360
	ctx.r4.s64 = ctx.r11.s64 + 16360;
	// bl 0x82120600
	ctx.lr = 0x82219F24;
	sub_82120600(ctx, base);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x82219F34;
	sub_82180E18(ctx, base);
	// stw r3,792(r31)
	REX_STORE_U32(r31.u32 + 792, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82120ac0
	ctx.lr = 0x82219F48;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// addi r4,r11,16348
	ctx.r4.s64 = ctx.r11.s64 + 16348;
	// bl 0x82120600
	ctx.lr = 0x82219F58;
	sub_82120600(ctx, base);
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x82219F64;
	sub_82180E18(ctx, base);
	// stw r3,796(r31)
	REX_STORE_U32(r31.u32 + 796, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82120ac0
	ctx.lr = 0x82219F78;
	sub_82120AC0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82213de8
	ctx.lr = 0x82219F84;
	sub_82213DE8(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,752(r31)
	REX_STORE_U32(r31.u32 + 752, ctx.r11.u32);
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_82258550) {
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
	ctx.lr = 0x82258558;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-21080
	ctx.r4.s64 = ctx.r11.s64 + -21080;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82120c08
	ctx.lr = 0x82258578;
	sub_82120C08(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r4,r11,20320
	ctx.r4.s64 = ctx.r11.s64 + 20320;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x8225858C;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16420
	ctx.r4.s64 = ctx.r11.s64 + 16420;
	// bl 0x8215f338
	ctx.lr = 0x82258598;
	sub_8215F338(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,22808
	r29.s64 = ctx.r11.s64 + 22808;
	// addi r28,r10,32412
	r28.s64 = ctx.r10.s64 + 32412;
	// addi r27,r9,16176
	r27.s64 = ctx.r9.s64 + 16176;
	// addi r26,r8,-17264
	r26.s64 = ctx.r8.s64 + -17264;
loc_822585C0:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822585e4
	if (!ctx.cr6.eq) goto loc_822585E4;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x822585e8
	goto loc_822585E8;
loc_822585E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822585E8:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8225867c
	if (!ctx.cr6.lt) goto loc_8225867C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x822585FC;
	sub_8215F1B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82258674
	if (ctx.cr6.eq) goto loc_82258674;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82258610;
	sub_8215F1B0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8215f338
	ctx.lr = 0x82258618;
	sub_8215F338(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x82258620;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82258624;
	sub_8215FA30(ctx, base);
	// lwz r11,120(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 120);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x82258638;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x82258640;
	sub_8215F2D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x82258648;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8225864C;
	sub_8215FA30(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82120780
	ctx.lr = 0x82258658;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82258674
	if (!ctx.cr0.lt) goto loc_82258674;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82120b20
	ctx.lr = 0x82258674;
	sub_82120B20(ctx, base);
loc_82258674:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x822585c0
	goto loc_822585C0;
loc_8225867C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82263308) {
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
	ctx.lr = 0x82263310;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,252(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r23,1
	r23.s64 = 1;
	// li r27,0
	r27.s64 = 0;
	// addi r24,r11,1624
	r24.s64 = ctx.r11.s64 + 1624;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82263430
	if (!ctx.cr6.gt) goto loc_82263430;
	// addi r25,r3,248
	r25.s64 = ctx.r3.s64 + 248;
	// lis r28,-32106
	r28.s64 = -2104098816;
loc_8226333C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8228ca78
	ctx.lr = 0x82263348;
	sub_8228CA78(ctx, base);
	// lwz r11,6040(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 6040);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r26,0
	r26.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,0(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,104(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82263370;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x822633bc
	if (!ctx.cr0.gt) goto loc_822633BC;
loc_82263378:
	// lwz r3,6040(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6040);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82263390;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8226339c
	if (!ctx.cr6.eq) goto loc_8226339C;
	// mr r26,r23
	r26.u64 = r23.u64;
loc_8226339C:
	// lwz r3,6040(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6040);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822633B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82263378
	if (ctx.cr6.lt) goto loc_82263378;
loc_822633BC:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822633d8
	if (ctx.cr0.eq) goto loc_822633D8;
	// lwz r11,252(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 252);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8226333c
	if (ctx.cr6.lt) goto loc_8226333C;
	// b 0x82263430
	goto loc_82263430;
loc_822633D8:
	// stb r23,1593(r30)
	REX_STORE_U8(r30.u32 + 1593, r23.u8);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822633F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,30288
	ctx.r4.s64 = ctx.r11.s64 + 30288;
	// bl 0x8215f670
	ctx.lr = 0x82263404;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-11524
	ctx.r4.s64 = ctx.r11.s64 + -11524;
	// bl 0x8215f670
	ctx.lr = 0x82263410;
	sub_8215F670(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82263418;
	sub_8215F0F0(ctx, base);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r23,0(r31)
	REX_STORE_U32(r31.u32 + 0, r23.u32);
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8225b1c8
	ctx.lr = 0x82263430;
	sub_8225B1C8(ctx, base);
loc_82263430:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r31,264(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 264);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r28,r11,-31468
	r28.s64 = ctx.r11.s64 + -31468;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f670
	ctx.lr = 0x82263448;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r29,r11,-24184
	r29.s64 = ctx.r11.s64 + -24184;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f670
	ctx.lr = 0x82263458;
	sub_8215F670(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215fc78
	ctx.lr = 0x82263460;
	sub_8215FC78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 8);
	// bl 0x8215dc10
	ctx.lr = 0x8226346C;
	sub_8215DC10(ctx, base);
	// lwz r11,264(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 264);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822634d0
	if (!ctx.cr6.gt) goto loc_822634D0;
	// addi r27,r30,260
	r27.s64 = r30.s64 + 260;
loc_82263480:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8228ca78
	ctx.lr = 0x8226348C;
	sub_8228CA78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r26,0(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8215f670
	ctx.lr = 0x822634A0;
	sub_8215F670(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f670
	ctx.lr = 0x822634A8;
	sub_8215F670(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f200
	ctx.lr = 0x822634B0;
	sub_8215F200(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x822634B8;
	sub_8215F0F0(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stw r26,8(r25)
	REX_STORE_U32(r25.u32 + 8, r26.u32);
	// stw r23,0(r25)
	REX_STORE_U32(r25.u32 + 0, r23.u32);
	// lwz r11,264(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 264);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82263480
	if (ctx.cr6.lt) goto loc_82263480;
loc_822634D0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r31,r30,568
	r31.s64 = r30.s64 + 568;
	// li r26,8
	r26.s64 = 8;
	// addi r29,r11,-25780
	r29.s64 = ctx.r11.s64 + -25780;
	// addi r27,r10,16408
	r27.s64 = ctx.r10.s64 + 16408;
loc_822634E8:
	// lbz r11,-31(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + -31);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8226355c
	if (ctx.cr0.eq) goto loc_8226355C;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82263508;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r4,r30,220
	ctx.r4.s64 = r30.s64 + 220;
	// addi r3,r31,-128
	ctx.r3.s64 = r31.s64 + -128;
	// bl 0x8228c150
	ctx.lr = 0x82263518;
	sub_8228C150(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// rlwinm r23,r11,27,31,31
	r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x8215f670
	ctx.lr = 0x82263530;
	sub_8215F670(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f670
	ctx.lr = 0x82263538;
	sub_8215F670(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8215f670
	ctx.lr = 0x82263540;
	sub_8215F670(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f670
	ctx.lr = 0x82263548;
	sub_8215F670(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82263550;
	sub_8215F0F0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r23,8(r25)
	REX_STORE_U8(r25.u32 + 8, r23.u8);
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
loc_8226355C:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r31,r31,136
	r31.s64 = r31.s64 + 136;
	// bne 0x822634e8
	if (!ctx.cr0.eq) goto loc_822634E8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82272120) {
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
	ctx.lr = 0x82272128;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,6276(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822721e8
	if (ctx.cr6.eq) goto loc_822721E8;
	// lwz r11,648(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// addi r31,r3,648
	r31.s64 = ctx.r3.s64 + 648;
	// lwz r10,652(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 652);
	// li r25,0
	r25.s64 = 0;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x822721e8
	if (!ctx.cr0.gt) goto loc_822721E8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r28,0
	r28.s64 = 0;
	// addi r27,r11,-17296
	r27.s64 = ctx.r11.s64 + -17296;
	// addi r26,r10,-17164
	r26.s64 = ctx.r10.s64 + -17164;
loc_82272170:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r24,r11,r28
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82273438
	ctx.lr = 0x82272184;
	sub_82273438(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8215f338
	ctx.lr = 0x82272190;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82272194;
	sub_8215FA30(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8215f338
	ctx.lr = 0x822721A4;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x822721A8;
	sub_8215FA30(ctx, base);
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 60);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822721C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822721f4
	if (ctx.cr0.eq) goto loc_822721F4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82272170
	if (ctx.cr6.lt) goto loc_82272170;
loc_822721E8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822721EC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_822721F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822721ec
	goto loc_822721EC;
}

DEFINE_REX_FUNC(sub_82278D48) {
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
	ctx.lr = 0x82278D50;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 128);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x821b2d80
	ctx.lr = 0x82278D6C;
	sub_821B2D80(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216b740
	ctx.lr = 0x82278D78;
	sub_8216B740(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216b740
	ctx.lr = 0x82278D84;
	sub_8216B740(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82278DA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r10,r11,16592
	ctx.r10.s64 = ctx.r11.s64 + 16592;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// lfs f0,700(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 700);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 128, temp.u32);
loc_82278DB8:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82278db8
	if (!ctx.cr6.eq) goto loc_82278DB8;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r29,132
	ctx.r3.s64 = r29.s64 + 132;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82120c08
	ctx.lr = 0x82278DE0;
	sub_82120C08(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82278DE4:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82278de4
	if (!ctx.cr6.eq) goto loc_82278DE4;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r29,160
	ctx.r3.s64 = r29.s64 + 160;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82120c08
	ctx.lr = 0x82278E0C;
	sub_82120C08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8227E380) {
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
	ctx.lr = 0x8227E388;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r4,-32758
	ctx.r4.s64 = -32758;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8217f4b0
	ctx.lr = 0x8227E3A4;
	sub_8217F4B0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// addi r29,r10,-540
	r29.s64 = ctx.r10.s64 + -540;
	// lfs f0,1240(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 1240);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// ble cr6,0x8227e3d4
	if (!ctx.cr6.gt) goto loc_8227E3D4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-196
	ctx.r3.s64 = ctx.r11.s64 + -196;
	// li r5,892
	ctx.r5.s64 = 892;
	// bl 0x821231d0
	ctx.lr = 0x8227E3D4;
	sub_821231D0(ctx, base);
loc_8227E3D4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bge cr6,0x8227e3f8
	if (!ctx.cr6.lt) goto loc_8227E3F8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-136
	ctx.r3.s64 = ctx.r11.s64 + -136;
	// li r5,893
	ctx.r5.s64 = 893;
	// bl 0x821231d0
	ctx.lr = 0x8227E3F8;
	sub_821231D0(ctx, base);
loc_8227E3F8:
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,25(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 25);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 * ctx.f0.f64));
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lbz r11,95(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 95);
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// bne 0x8227e434
	if (!ctx.cr0.eq) goto loc_8227E434;
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
	ctx.lr = 0x8227E434;
	sub_821231D0(ctx, base);
loc_8227E434:
	// lwz r30,44(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// addi r4,r30,3
	ctx.r4.s64 = r30.s64 + 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125c20
	ctx.lr = 0x8227E448;
	sub_82125C20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x82125c98
	ctx.lr = 0x8227E458;
	sub_82125C98(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lbz r10,1(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 1);
	// lbz r9,2(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 2);
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r10,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// stb r9,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82286418) {
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
	// lwz r11,548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 548);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x821c3de8
	ctx.lr = 0x82286440;
	sub_821C3DE8(ctx, base);
	// lfs f0,460(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 460);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,464(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 464);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,468(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 468);
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
	ctx.lr = 0x82286470;
	sub_8216D040(ctx, base);
	// addi r30,r31,124
	r30.s64 = r31.s64 + 124;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e5d30
	ctx.lr = 0x82286480;
	sub_821E5D30(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82286498
	if (ctx.cr6.eq) goto loc_82286498;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,548(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 548);
	// bl 0x821e6230
	ctx.lr = 0x82286498;
	sub_821E6230(ctx, base);
loc_82286498:
	// lwz r11,548(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 548);
	// lfs f0,236(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,240(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,244(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 244);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,432
	ctx.r10.s64 = ctx.r11.s64 + 432;
	// lfs f11,368(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 368);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,372(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 372);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f11,376(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 376);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f11,432(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 432);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,436(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 436);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,440(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 440);
	ctx.f9.f64 = double(temp.f32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,432(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 432, temp.u32);
	// fadds f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f0,436(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 436, temp.u32);
	// fadds f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f0,440(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 440, temp.u32);
	// lwz r11,548(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 548);
	// lfs f0,252(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,608(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 608);
	ctx.f6.f64 = double(temp.f32);
	// addi r10,r11,448
	ctx.r10.s64 = ctx.r11.s64 + 448;
	// lfs f13,260(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// lfs f11,616(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 616);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,448(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 448);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,452(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 452);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,456(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 456);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,256(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 256);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,612(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 612);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fadds f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfs f0,448(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 448, temp.u32);
	// fadds f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f0,452(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 452, temp.u32);
	// fadds f0,f13,f7
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// stfs f0,456(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 456, temp.u32);
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

DEFINE_REX_FUNC(sub_8228DDD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8228DDD8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8228ddf8
	if (ctx.cr6.lt) goto loc_8228DDF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8228dea4
	goto loc_8228DEA4;
loc_8228DDF8:
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r28,r29,8
	r28.s64 = r29.s64 + 8;
	// lis r30,-32106
	r30.s64 = -2104098816;
loc_8228DE04:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,20(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 20);
	// bl 0x8228ca78
	ctx.lr = 0x8228DE10;
	sub_8228CA78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8228de40
	if (!ctx.cr6.eq) goto loc_8228DE40;
	// lwz r3,6212(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6212);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228DE3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8228de8c
	goto loc_8228DE8C;
loc_8228DE40:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8228de64
	if (!ctx.cr6.eq) goto loc_8228DE64;
	// lwz r3,6212(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6212);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// b 0x8228de84
	goto loc_8228DE84;
loc_8228DE64:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8228de90
	if (!ctx.cr6.eq) goto loc_8228DE90;
	// lwz r3,6212(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6212);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,100
	ctx.r6.s64 = 100;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
loc_8228DE84:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228DE8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228DE8C:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8228DE90:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// beq cr6,0x8228deb4
	if (ctx.cr6.eq) goto loc_8228DEB4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x8228de04
	if (ctx.cr6.eq) goto loc_8228DE04;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8228DEA4:
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8228DEAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8228DEB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8228deac
	goto loc_8228DEAC;
}

DEFINE_REX_FUNC(sub_82294750) {
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
	// bl 0x822947a0
	ctx.lr = 0x82294770;
	sub_822947A0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82294780
	if (ctx.cr0.eq) goto loc_82294780;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82294780;
	sub_8269CE98(ctx, base);
loc_82294780:
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

DEFINE_REX_FUNC(sub_82296DD8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r11,5148
	ctx.r11.s64 = ctx.r11.s64 + 5148;
	// addi r10,r10,5312
	ctx.r10.s64 = ctx.r10.s64 + 5312;
	// addi r9,r9,5320
	ctx.r9.s64 = ctx.r9.s64 + 5320;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r10,r5,16
	ctx.r10.s64 = ctx.r5.s64 + 16;
	// stw r4,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,8(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r11,12(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// ld r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// ld r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// std r11,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// ld r11,16(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 16);
	// std r11,48(r3)
	REX_STORE_U64(ctx.r3.u32 + 48, ctx.r11.u64);
	// ld r11,24(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 24);
	// std r11,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r11.u64);
	// ld r11,32(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 32);
	// std r11,64(r3)
	REX_STORE_U64(ctx.r3.u32 + 64, ctx.r11.u64);
	// ld r11,40(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 40);
	// std r11,72(r3)
	REX_STORE_U64(ctx.r3.u32 + 72, ctx.r11.u64);
	// lwz r11,48(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 48);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lwz r11,52(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 52);
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// lwz r11,56(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 56);
	// stw r11,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// lwz r11,60(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// stw r11,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229F478) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// addi r11,r11,5868
	ctx.r11.s64 = ctx.r11.s64 + 5868;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x821eced8
	ctx.lr = 0x8229F4A0;
	sub_821ECED8(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x821eced8
	ctx.lr = 0x8229F4A8;
	sub_821ECED8(ctx, base);
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// bl 0x821eced8
	ctx.lr = 0x8229F4B0;
	sub_821ECED8(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821eced8
	ctx.lr = 0x8229F4B8;
	sub_821ECED8(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// bl 0x821eced8
	ctx.lr = 0x8229F4C0;
	sub_821ECED8(ctx, base);
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

DEFINE_REX_FUNC(sub_822A3300) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A3A68) {
	REX_FUNC_PROLOGUE();
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2c84
	ctx.lr = 0x822A3A78;
	// lfs f0,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,68(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,72(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f12,88(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// lfs f0,80(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,64(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r1,-144
	ctx.r9.s64 = ctx.r1.s64 + -144;
	// fsubs f7,f0,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f5,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fadds f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f8,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// fabs f4,f8
	ctx.f4.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// lfs f29,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	f29.f64 = double(temp.f32);
	// lfs f2,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// fabs f5,f5
	ctx.f5.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f6,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f31,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	f31.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f27,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	f27.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f23,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	f23.f64 = double(temp.f32);
	// fmr f28,f29
	f28.f64 = f29.f64;
	// lfs f25,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	f25.f64 = double(temp.f32);
	// fabs f6,f6
	ctx.f6.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// lfs f26,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	f26.f64 = double(temp.f32);
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// lfs f21,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	f21.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f20,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	f20.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f19,56(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	f19.f64 = double(temp.f32);
	// fabs f24,f31
	f24.u64 = f31.u64 & ~0x8000000000000000;
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// stfs f0,-132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fadds f9,f9,f1
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// fabs f29,f29
	f29.u64 = f29.u64 & ~0x8000000000000000;
	// fabs f30,f30
	f30.u64 = f30.u64 & ~0x8000000000000000;
	// fadds f7,f7,f1
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// fabs f1,f23
	ctx.f1.u64 = f23.u64 & ~0x8000000000000000;
	// fabs f2,f25
	ctx.f2.u64 = f25.u64 & ~0x8000000000000000;
	// fmuls f4,f11,f4
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fmadds f8,f31,f12,f8
	ctx.f8.f64 = double(float(std::fma(f31.f64, ctx.f12.f64, ctx.f8.f64)));
	// fmuls f5,f11,f5
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmadds f3,f28,f12,f3
	ctx.f3.f64 = double(float(std::fma(f28.f64, ctx.f12.f64, ctx.f3.f64)));
	// fmadds f13,f27,f12,f13
	ctx.f13.f64 = double(float(std::fma(f27.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmuls f12,f9,f6
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fabs f22,f26
	f22.u64 = f26.u64 & ~0x8000000000000000;
	// fmadds f6,f9,f24,f4
	ctx.f6.f64 = double(float(std::fma(ctx.f9.f64, f24.f64, ctx.f4.f64)));
	// fmadds f8,f23,f10,f8
	ctx.f8.f64 = double(float(std::fma(f23.f64, ctx.f10.f64, ctx.f8.f64)));
	// fmadds f9,f9,f29,f5
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, f29.f64, ctx.f5.f64)));
	// fmadds f5,f25,f10,f3
	ctx.f5.f64 = double(float(std::fma(f25.f64, ctx.f10.f64, ctx.f3.f64)));
	// fmadds f13,f26,f10,f13
	ctx.f13.f64 = double(float(std::fma(f26.f64, ctx.f10.f64, ctx.f13.f64)));
	// fmadds f12,f11,f30,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, f30.f64, ctx.f12.f64)));
	// fmadds f11,f1,f7,f6
	ctx.f11.f64 = double(float(std::fma(ctx.f1.f64, ctx.f7.f64, ctx.f6.f64)));
	// fadds f10,f8,f21
	ctx.f10.f64 = double(float(ctx.f8.f64 + f21.f64));
	// fmadds f9,f2,f7,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f2.f64, ctx.f7.f64, ctx.f9.f64)));
	// fadds f8,f5,f20
	ctx.f8.f64 = double(float(ctx.f5.f64 + f20.f64));
	// fadds f13,f13,f19
	ctx.f13.f64 = double(float(ctx.f13.f64 + f19.f64));
	// fmadds f12,f7,f22,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f7.f64, f22.f64, ctx.f12.f64)));
	// fsubs f7,f10,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// stfs f7,-144(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fsubs f10,f8,f9
	ctx.f10.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// stfs f10,-140(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f10,-136(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// addi r11,r1,-128
	ctx.r11.s64 = ctx.r1.s64 + -128;
	// fadds f10,f9,f8
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f11,-128(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// stfs f10,-124(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// ld r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// stfs f13,-120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// stfs f0,-116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -116, temp.u32);
	// ld r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r10.u64);
	// std r9,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r9.u64);
	// std r8,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r8.u64);
	// std r11,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r11.u64);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2cd0
	ctx.lr = 0x822A3C00;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B6428) {
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
	// bl 0x826a1c98
	ctx.lr = 0x822B6430;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x826a2c80
	ctx.lr = 0x822B6438;
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f13,116(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,80(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// fmuls f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f10,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f5,f12,f10
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f4,120(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f12,f8
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// lfs f6,56(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lfs f13,84(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f6,f6,f4
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// lfs f2,88(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f4,f13,f8
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f30,f13,f11
	f30.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f1,64(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f27,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	f27.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f26,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	f26.f64 = double(temp.f32);
	// fmuls f11,f2,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// lfs f29,96(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 96);
	f29.f64 = double(temp.f32);
	// fmuls f10,f2,f10
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// lfs f31,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	f31.f64 = double(temp.f32);
	// fmuls f8,f2,f8
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f8.f64));
	// lfs f25,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	f25.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f28,68(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 68);
	f28.f64 = double(temp.f32);
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f0,112(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f9,f1,f27,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f1.f64, f27.f64, ctx.f9.f64)));
	// lfs f22,72(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 72);
	f22.f64 = double(temp.f32);
	// fmadds f5,f1,f26,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f1.f64, f26.f64, ctx.f5.f64)));
	// lfs f20,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	f20.f64 = double(temp.f32);
	// fsubs f23,f31,f0
	f23.f64 = double(float(f31.f64 - ctx.f0.f64));
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f3,f1,f25,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f1.f64, f25.f64, ctx.f3.f64)));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f12,f29,f6,f12
	ctx.f12.f64 = double(float(std::fma(f29.f64, ctx.f6.f64, ctx.f12.f64)));
	// lfs f19,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	f19.f64 = double(temp.f32);
	// fmadds f4,f28,f25,f4
	ctx.f4.f64 = double(float(std::fma(f28.f64, f25.f64, ctx.f4.f64)));
	// lfs f18,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	f18.f64 = double(temp.f32);
	// fmadds f7,f28,f26,f7
	ctx.f7.f64 = double(float(std::fma(f28.f64, f26.f64, ctx.f7.f64)));
	// lfs f24,100(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 100);
	f24.f64 = double(temp.f32);
	// fmadds f0,f22,f26,f10
	ctx.f0.f64 = double(float(std::fma(f22.f64, f26.f64, ctx.f10.f64)));
	// lfs f21,104(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 104);
	f21.f64 = double(temp.f32);
	// fmadds f30,f28,f27,f30
	f30.f64 = double(float(std::fma(f28.f64, f27.f64, f30.f64)));
	// lfs f31,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// fmadds f11,f22,f27,f11
	ctx.f11.f64 = double(float(std::fma(f22.f64, f27.f64, ctx.f11.f64)));
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f9,f29,f20,f9
	ctx.f9.f64 = double(float(std::fma(f29.f64, f20.f64, ctx.f9.f64)));
	// stfs f9,200(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fmadds f9,f29,f19,f5
	ctx.f9.f64 = double(float(std::fma(f29.f64, f19.f64, ctx.f5.f64)));
	// stfs f9,196(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fmadds f10,f22,f25,f8
	ctx.f10.f64 = double(float(std::fma(f22.f64, f25.f64, ctx.f8.f64)));
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f9,f29,f18,f3
	ctx.f9.f64 = double(float(std::fma(f29.f64, f18.f64, ctx.f3.f64)));
	// stfs f9,192(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fmadds f12,f1,f23,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f1.f64, f23.f64, ctx.f12.f64)));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f12,f24,f18,f4
	ctx.f12.f64 = double(float(std::fma(f24.f64, f18.f64, ctx.f4.f64)));
	// stfs f12,208(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fmadds f9,f24,f19,f7
	ctx.f9.f64 = double(float(std::fma(f24.f64, f19.f64, ctx.f7.f64)));
	// stfs f31,204(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f9,212(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// addi r31,r4,64
	r31.s64 = ctx.r4.s64 + 64;
	// fmadds f13,f24,f6,f13
	ctx.f13.f64 = double(float(std::fma(f24.f64, ctx.f6.f64, ctx.f13.f64)));
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// fmadds f8,f21,f6,f2
	ctx.f8.f64 = double(float(std::fma(f21.f64, ctx.f6.f64, ctx.f2.f64)));
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// fmadds f12,f24,f20,f30
	ctx.f12.f64 = double(float(std::fma(f24.f64, f20.f64, f30.f64)));
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// fmadds f11,f21,f20,f11
	ctx.f11.f64 = double(float(std::fma(f21.f64, f20.f64, ctx.f11.f64)));
	// fmadds f0,f21,f19,f0
	ctx.f0.f64 = double(float(std::fma(f21.f64, f19.f64, ctx.f0.f64)));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// fmadds f10,f21,f18,f10
	ctx.f10.f64 = double(float(std::fma(f21.f64, f18.f64, ctx.f10.f64)));
	// stfs f12,216(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fmadds f13,f28,f23,f13
	ctx.f13.f64 = double(float(std::fma(f28.f64, f23.f64, ctx.f13.f64)));
	// stfs f10,224(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fmadds f9,f22,f23,f8
	ctx.f9.f64 = double(float(std::fma(f22.f64, f23.f64, ctx.f8.f64)));
	// stfs f0,228(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// addi r28,r1,256
	r28.s64 = ctx.r1.s64 + 256;
	// stfs f11,232(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// addi r27,r1,272
	r27.s64 = ctx.r1.s64 + 272;
	// stfs f31,220(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// addi r26,r1,288
	r26.s64 = ctx.r1.s64 + 288;
	// stfs f31,236(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// ld r24,0(r11)
	r24.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r21,0(r10)
	r21.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r20,0(r9)
	r20.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r23,0(r8)
	r23.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// addi r25,r1,304
	r25.s64 = ctx.r1.s64 + 304;
	// ld r22,8(r8)
	r22.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// std r24,0(r27)
	REX_STORE_U64(r27.u32 + 0, r24.u64);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// std r21,0(r26)
	REX_STORE_U64(r26.u32 + 0, r21.u64);
	// lfs f1,12(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// std r20,0(r28)
	REX_STORE_U64(r28.u32 + 0, r20.u64);
	// std r23,0(r25)
	REX_STORE_U64(r25.u32 + 0, r23.u64);
	// std r22,8(r25)
	REX_STORE_U64(r25.u32 + 8, r22.u64);
	// std r11,8(r27)
	REX_STORE_U64(r27.u32 + 8, ctx.r11.u64);
	// std r10,8(r26)
	REX_STORE_U64(r26.u32 + 8, ctx.r10.u64);
	// std r9,8(r28)
	REX_STORE_U64(r28.u32 + 8, ctx.r9.u64);
	// bl 0x822b6908
	ctx.lr = 0x822B661C;
	sub_822B6908(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b67f4
	if (ctx.cr0.eq) goto loc_822B67F4;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lfs f25,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	f25.f64 = double(temp.f32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x822b6728
	if (ctx.cr0.eq) goto loc_822B6728;
	// lfs f0,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lfs f12,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f8,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f3,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f13,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f29,f3,f12
	f29.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfs f11,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f30,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	f30.f64 = double(temp.f32);
	// fmuls f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f5,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f27,f30,f11
	f27.f64 = double(float(f30.f64 * ctx.f11.f64));
	// lfs f28,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	f28.f64 = double(temp.f32);
	// fmuls f2,f5,f13
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f26,f28,f11
	f26.f64 = double(float(f28.f64 * ctx.f11.f64));
	// lfs f9,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// lfs f23,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	f23.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f13,f3,f13,f6
	ctx.f13.f64 = double(float(std::fma(ctx.f3.f64, ctx.f13.f64, ctx.f6.f64)));
	// lfs f24,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	f24.f64 = double(temp.f32);
	// fmadds f29,f23,f9,f29
	f29.f64 = double(float(std::fma(f23.f64, ctx.f9.f64, f29.f64)));
	// lfs f1,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lfs f22,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f22.f64 = double(temp.f32);
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmadds f6,f25,f10,f4
	ctx.f6.f64 = double(float(std::fma(f25.f64, ctx.f10.f64, ctx.f4.f64)));
	// lfs f4,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f7,f7,f12,f27
	ctx.f7.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, f27.f64)));
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fmadds f3,f24,f10,f2
	ctx.f3.f64 = double(float(std::fma(f24.f64, ctx.f10.f64, ctx.f2.f64)));
	// lfs f2,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f12,f5,f12,f26
	ctx.f12.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, f26.f64)));
	// fmadds f13,f23,f10,f13
	ctx.f13.f64 = double(float(std::fma(f23.f64, ctx.f10.f64, ctx.f13.f64)));
	// fmadds f11,f8,f11,f29
	ctx.f11.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, f29.f64)));
	// fmadds f10,f30,f0,f6
	ctx.f10.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, ctx.f6.f64)));
	// fmadds f8,f25,f9,f7
	ctx.f8.f64 = double(float(std::fma(f25.f64, ctx.f9.f64, ctx.f7.f64)));
	// fmadds f0,f28,f0,f3
	ctx.f0.f64 = double(float(std::fma(f28.f64, ctx.f0.f64, ctx.f3.f64)));
	// fmadds f12,f24,f9,f12
	ctx.f12.f64 = double(float(std::fma(f24.f64, ctx.f9.f64, ctx.f12.f64)));
	// fmuls f9,f13,f1
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fadds f11,f11,f4
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f4.f64));
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f7,f10,f1
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fadds f8,f8,f2
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// fmuls f6,f0,f1
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fadds f12,f12,f22
	ctx.f12.f64 = double(float(ctx.f12.f64 + f22.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fneg f13,f10
	ctx.f13.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fadds f0,f11,f9
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fadds f0,f8,f7
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fadds f0,f12,f6
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// b 0x822b67ec
	goto loc_822B67EC;
loc_822B6728:
	// lfs f0,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lfs f8,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lfs f13,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f7,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f3,f5,f13
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f12,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f2,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f10,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f1,f2,f12
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// lfs f30,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	f30.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f29,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	f29.f64 = double(temp.f32);
	// lfs f28,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	f28.f64 = double(temp.f32);
	// fmuls f27,f29,f11
	f27.f64 = double(float(f29.f64 * ctx.f11.f64));
	// fmadds f6,f30,f10,f6
	ctx.f6.f64 = double(float(std::fma(f30.f64, ctx.f10.f64, ctx.f6.f64)));
	// lfs f9,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f26,f28,f11
	f26.f64 = double(float(f28.f64 * ctx.f11.f64));
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmadds f4,f29,f0,f4
	ctx.f4.f64 = double(float(std::fma(f29.f64, ctx.f0.f64, ctx.f4.f64)));
	// lfs f29,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	f29.f64 = double(temp.f32);
	// fmadds f0,f28,f0,f3
	ctx.f0.f64 = double(float(std::fma(f28.f64, ctx.f0.f64, ctx.f3.f64)));
	// stfs f31,252(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// lfs f3,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f11,f8,f11,f1
	ctx.f11.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f1.f64)));
	// lfs f28,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	f28.f64 = double(temp.f32);
	// lfs f24,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f24.f64 = double(temp.f32);
	// lfs f1,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f8,f25,f9,f27
	ctx.f8.f64 = double(float(std::fma(f25.f64, ctx.f9.f64, f27.f64)));
	// fmadds f13,f2,f13,f6
	ctx.f13.f64 = double(float(std::fma(ctx.f2.f64, ctx.f13.f64, ctx.f6.f64)));
	// fmadds f31,f29,f9,f26
	f31.f64 = double(float(std::fma(f29.f64, ctx.f9.f64, f26.f64)));
	// fmadds f6,f25,f10,f4
	ctx.f6.f64 = double(float(std::fma(f25.f64, ctx.f10.f64, ctx.f4.f64)));
	// fmadds f0,f29,f10,f0
	ctx.f0.f64 = double(float(std::fma(f29.f64, ctx.f10.f64, ctx.f0.f64)));
	// fmadds f11,f30,f9,f11
	ctx.f11.f64 = double(float(std::fma(f30.f64, ctx.f9.f64, ctx.f11.f64)));
	// stfs f11,240(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// fmadds f11,f7,f12,f8
	ctx.f11.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f8.f64)));
	// stfs f11,244(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// fadds f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmadds f12,f5,f12,f31
	ctx.f12.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, f31.f64)));
	// stfs f12,248(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// fadds f13,f6,f28
	ctx.f13.f64 = double(float(ctx.f6.f64 + f28.f64));
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fadds f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 + f24.f64));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
loc_822B67EC:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B67F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B67F4:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x826a2ccc
	ctx.lr = 0x822B6800;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_822D5A50) {
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
	ctx.lr = 0x822D5A58;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,11012(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 11012);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
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
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d5af0
	if (ctx.cr6.eq) goto loc_822D5AF0;
	// addi r24,r3,11016
	r24.s64 = ctx.r3.s64 + 11016;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82793c94
	ctx.lr = 0x822D5A90;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,11012(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11012);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d5adc
	if (ctx.cr6.eq) goto loc_822D5ADC;
	// oris r11,r27,33024
	ctx.r11.u64 = r27.u64 | 2164260864;
	// lwz r10,11012(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 11012);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r28,8(r30)
	REX_STORE_U32(r30.u32 + 8, r28.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r10,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x822d4aa0
	ctx.lr = 0x822D5ACC;
	sub_822D4AA0(ctx, base);
	// lwz r11,11012(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11012);
	// li r29,1
	r29.s64 = 1;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// stw r11,11012(r31)
	REX_STORE_U32(r31.u32 + 11012, ctx.r11.u32);
loc_822D5ADC:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82793ca4
	ctx.lr = 0x822D5AE8;
	__imp__KfReleaseSpinLock(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x822d5b1c
	if (!ctx.cr6.eq) goto loc_822D5B1C;
loc_822D5AF0:
	// lwz r11,11012(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11012);
	// clrlwi r10,r27,8
	ctx.r10.u64 = r27.u32 & 0xFFFFFF;
	// lwz r11,11012(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11012);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// oris r10,r10,33024
	ctx.r10.u64 = ctx.r10.u64 | 2164260864;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,11012(r31)
	REX_STORE_U32(r31.u32 + 11012, ctx.r11.u32);
	// bl 0x822d53d0
	ctx.lr = 0x822D5B1C;
	sub_822D53D0(ctx, base);
loc_822D5B1C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_822DB298) {
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
	ctx.lr = 0x822DB2A0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,56(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822db2c8
	if (!ctx.cr6.gt) goto loc_822DB2C8;
	// bl 0x822d5b28
	ctx.lr = 0x822DB2C4;
	sub_822D5B28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822DB2C8:
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r9,r24,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x100;
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// lis r6,-16383
	ctx.r6.s64 = -1073676288;
	// lis r5,4
	ctx.r5.s64 = 262144;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// ori r21,r8,24832
	r21.u64 = ctx.r8.u64 | 24832;
	// ori r27,r7,24576
	r27.u64 = ctx.r7.u64 | 24576;
	// ori r25,r6,11521
	r25.u64 = ctx.r6.u64 | 11521;
	// ori r22,r5,515
	r22.u64 = ctx.r5.u64 | 515;
	// mr r20,r10
	r20.u64 = ctx.r10.u64;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x822db50c
	if (ctx.cr6.eq) goto loc_822DB50C;
	// lbz r10,10943(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 10943);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822db4cc
	if (ctx.cr0.eq) goto loc_822DB4CC;
	// lbz r10,10940(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 10940);
	// rlwinm. r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822db324
	if (ctx.cr0.eq) goto loc_822DB324;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x822db3b4
	goto loc_822DB3B4;
loc_822DB324:
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822db3ac
	if (ctx.cr0.eq) goto loc_822DB3AC;
	// lwz r10,12616(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12616);
	// lwz r9,12904(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12904);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822db344
	if (ctx.cr6.eq) goto loc_822DB344;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822db3ac
	if (!ctx.cr6.eq) goto loc_822DB3AC;
loc_822DB344:
	// lwz r10,12620(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12620);
	// lwz r9,12908(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12908);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822db35c
	if (ctx.cr6.eq) goto loc_822DB35C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822db3ac
	if (!ctx.cr6.eq) goto loc_822DB3AC;
loc_822DB35C:
	// lwz r10,12624(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12624);
	// lwz r9,12912(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12912);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822db374
	if (ctx.cr6.eq) goto loc_822DB374;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822db3ac
	if (!ctx.cr6.eq) goto loc_822DB3AC;
loc_822DB374:
	// lwz r10,12628(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12628);
	// lwz r9,12916(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12916);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822db38c
	if (ctx.cr6.eq) goto loc_822DB38C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822db3ac
	if (!ctx.cr6.eq) goto loc_822DB3AC;
loc_822DB38C:
	// lwz r10,12632(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12632);
	// lwz r9,12920(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12920);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822db3a4
	if (ctx.cr6.eq) goto loc_822DB3A4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822db3ac
	if (!ctx.cr6.eq) goto loc_822DB3AC;
loc_822DB3A4:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x822db3b0
	goto loc_822DB3B0;
loc_822DB3AC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822DB3B0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_822DB3B4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822db4cc
	if (ctx.cr0.eq) goto loc_822DB4CC;
	// stwu r21,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r21.u32);
	ctx.r11.u32 = ea;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lwz r10,12924(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12924);
	// addic. r30,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	r30.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x822db46c
	if (ctx.cr0.lt) goto loc_822DB46C;
loc_822DB3D8:
	// addi r10,r30,3322
	ctx.r10.s64 = r30.s64 + 3322;
	// lwz r9,12028(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12028);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm. r10,r9,15,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r9,r8,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// rlwimi r28,r9,17,0,14
	r28.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0xFFFE0000) | (r28.u64 & 0xFFFFFFFF0001FFFF);
	// mr r29,r28
	r29.u64 = r28.u64;
	// beq 0x822db414
	if (ctx.cr0.eq) goto loc_822DB414;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x822db418
	if (!ctx.cr6.eq) goto loc_822DB418;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x822db414
	if (!ctx.cr6.eq) goto loc_822DB414;
	// lbz r10,10943(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 10943);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822db418
	if (!ctx.cr0.eq) goto loc_822DB418;
loc_822DB414:
	// rlwinm r29,r28,0,0,30
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
loc_822DB418:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r11.u32 = ea;
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// stwu r25,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r11.u32 = ea;
	// stwu r22,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r22.u32);
	ctx.r11.u32 = ea;
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// ble cr6,0x822db460
	if (!ctx.cr6.gt) goto loc_822DB460;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822DB45C;
	sub_822D5B28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822DB460:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x822db3d8
	if (!ctx.cr0.lt) goto loc_822DB3D8;
	// b 0x822db470
	goto loc_822DB470;
loc_822DB46C:
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_822DB470:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// beq cr6,0x822db4a8
	if (ctx.cr6.eq) goto loc_822DB4A8;
	// lbz r10,10940(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 10940);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822db4a8
	if (ctx.cr0.eq) goto loc_822DB4A8;
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r11.u32 = ea;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r25,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r11.u32 = ea;
	// stwu r22,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r22.u32);
	ctx.r11.u32 = ea;
	// stwu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r11.u32 = ea;
loc_822DB4A8:
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r11.u32 = ea;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// lwz r10,12884(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12884);
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r21,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r21.u32);
	ctx.r11.u32 = ea;
	// lwz r10,12888(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12888);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// b 0x822db504
	goto loc_822DB504;
loc_822DB4CC:
	// lwz r9,12028(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12028);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// rlwinm. r9,r9,0,12,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE0000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822db4e0
	if (!ctx.cr0.eq) goto loc_822DB4E0;
	// rlwinm r10,r28,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
loc_822DB4E0:
	// li r9,8707
	ctx.r9.s64 = 8707;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, ctx.xer);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// beq cr6,0x822db504
	if (ctx.cr6.eq) goto loc_822DB504;
	// lbz r10,10940(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 10940);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822db504
	if (ctx.cr0.eq) goto loc_822DB504;
	// mr r26,r28
	r26.u64 = r28.u64;
loc_822DB504:
	// li r12,-257
	ctx.r12.s64 = -257;
	// and r24,r24,r12
	r24.u64 = r24.u64 & ctx.r12.u64;
loc_822DB50C:
	// ld r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 40);
	// li r12,1
	ctx.r12.s64 = 1;
	// and r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 & r24.u64;
	// rldicr r12,r12,57,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x822db54c
	if (ctx.cr6.eq) goto loc_822DB54C;
	// li r8,8192
	ctx.r8.s64 = 8192;
	// lwz r9,10368(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 10368);
	// li r12,-2
	ctx.r12.s64 = -2;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// rldicr r12,r12,57,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// and r24,r24,r12
	r24.u64 = r24.u64 & ctx.r12.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lwz r23,13352(r31)
	r23.u64 = REX_LOAD_U32(r31.u32 + 13352);
	// rlwimi r23,r9,0,0,17
	r23.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFC000) | (r23.u64 & 0xFFFFFFFF00003FFF);
loc_822DB54C:
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x822db580
	if (ctx.cr6.eq) goto loc_822DB580;
	// li r10,8452
	ctx.r10.s64 = 8452;
	// li r12,-2
	ctx.r12.s64 = -2;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r20,0
	r20.s64 = 0;
	// lwz r10,10460(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10460);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// and r24,r24,r12
	r24.u64 = r24.u64 & ctx.r12.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
loc_822DB580:
	// and r10,r20,r23
	ctx.r10.u64 = r20.u64 & r23.u64;
	// and r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 & r26.u64;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x822db61c
	if (ctx.cr6.eq) goto loc_822DB61C;
	// stwu r21,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r21.u32);
	ctx.r11.u32 = ea;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,5461
	ctx.r8.s64 = 357892096;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// ori r8,r8,21845
	ctx.r8.u64 = ctx.r8.u64 | 21845;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(r26.s32, -1, ctx.xer);
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// beq cr6,0x822db5cc
	if (ctx.cr6.eq) goto loc_822DB5CC;
	// stwu r25,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r11.u32 = ea;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stwu r22,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r22.u32);
	ctx.r11.u32 = ea;
	// stwu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r11.u32 = ea;
loc_822DB5CC:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(r23.s32, -1, ctx.xer);
	// beq cr6,0x822db5e8
	if (ctx.cr6.eq) goto loc_822DB5E8;
	// stwu r25,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r11.u32 = ea;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
loc_822DB5E8:
	// cmpwi cr6,r20,-1
	ctx.cr6.compare<int32_t>(r20.s32, -1, ctx.xer);
	// beq cr6,0x822db604
	if (ctx.cr6.eq) goto loc_822DB604;
	// stwu r25,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r11.u32 = ea;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r10,r10,260
	ctx.r10.u64 = ctx.r10.u64 | 260;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r20,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r20.u32);
	ctx.r11.u32 = ea;
loc_822DB604:
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r11.u32 = ea;
	// lwz r10,12884(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12884);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r21,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r21.u32);
	ctx.r11.u32 = ea;
	// lwz r10,12888(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12888);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
loc_822DB61C:
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_822F6478) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822f6494
	if (!ctx.cr6.eq) goto loc_822F6494;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x822f6498
	if (ctx.cr6.eq) goto loc_822F6498;
loc_822F6494:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822F6498:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F68A8) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f68e0
	if (ctx.cr6.eq) goto loc_822F68E0;
	// bl 0x8215cee0
	ctx.lr = 0x822F68C4;
	sub_8215CEE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822f68e0
	if (ctx.cr0.eq) goto loc_822F68E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F68E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822F68E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F7540) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f7608
	if (ctx.cr6.eq) goto loc_822F7608;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r30.u32);
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r30.u32);
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// stw r30,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r30.u32);
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822f75b0
	if (ctx.cr6.eq) goto loc_822F75B0;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ef5f0
	ctx.lr = 0x822F75B0;
	sub_823EF5F0(ctx, base);
loc_822F75B0:
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// stw r30,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r30.u32);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// stw r30,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r30.u32);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// stw r30,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, r30.u32);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// stw r30,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r30.u32);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// stw r30,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, r30.u32);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// stw r30,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, r30.u32);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// stw r30,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, r30.u32);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// stw r30,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, r30.u32);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// stw r30,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, r30.u32);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// stw r30,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, r30.u32);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// stw r30,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, r30.u32);
loc_822F7608:
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f7640
	if (ctx.cr6.eq) goto loc_822F7640;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// stw r30,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r30.u32);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// stw r30,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r30.u32);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// stw r30,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r30.u32);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// sth r30,28(r11)
	REX_STORE_U16(ctx.r11.u32 + 28, r30.u16);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// stw r30,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, r30.u32);
loc_822F7640:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,108(r31)
	REX_STORE_U32(r31.u32 + 108, r30.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// li r8,128
	ctx.r8.s64 = 128;
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f30,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f30.f64 = double(temp.f32);
	// stw r8,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r8.u32);
	// lfs f31,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	f31.f64 = double(temp.f32);
	// stw r30,68(r31)
	REX_STORE_U32(r31.u32 + 68, r30.u32);
	// lfs f0,3744(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3744);
	ctx.f0.f64 = double(temp.f32);
	// std r30,72(r31)
	REX_STORE_U64(r31.u32 + 72, r30.u64);
	// stfs f30,48(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// std r30,80(r31)
	REX_STORE_U64(r31.u32 + 80, r30.u64);
	// stfs f30,52(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// std r30,88(r31)
	REX_STORE_U64(r31.u32 + 88, r30.u64);
	// stfs f31,56(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stfs f30,212(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 212, temp.u32);
	// addi r4,r7,3052
	ctx.r4.s64 = ctx.r7.s64 + 3052;
	// stfs f0,216(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 216, temp.u32);
	// addi r3,r31,280
	ctx.r3.s64 = r31.s64 + 280;
	// stfs f31,176(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 176, temp.u32);
	// stfs f31,180(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// stfs f31,184(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 184, temp.u32);
	// stfs f31,188(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 188, temp.u32);
	// stfs f31,192(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 192, temp.u32);
	// stfs f31,196(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// stfs f31,200(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
	// stfs f31,204(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 204, temp.u32);
	// stfs f30,208(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 208, temp.u32);
	// bl 0x823ef2f8
	ctx.lr = 0x822F76D0;
	sub_823EF2F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,10000
	ctx.r10.s64 = 10000;
	// stfs f31,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f31,132(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// stfs f30,256(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 256, temp.u32);
	// sth r30,100(r31)
	REX_STORE_U16(r31.u32 + 100, r30.u16);
	// stfs f30,260(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 260, temp.u32);
	// stw r30,104(r31)
	REX_STORE_U32(r31.u32 + 104, r30.u32);
	// lfs f0,3740(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3740);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,112(r31)
	REX_STORE_U32(r31.u32 + 112, r30.u32);
	// stfs f0,248(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 248, temp.u32);
	// stw r30,116(r31)
	REX_STORE_U32(r31.u32 + 116, r30.u32);
	// stfs f0,252(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 252, temp.u32);
	// stw r30,120(r31)
	REX_STORE_U32(r31.u32 + 120, r30.u32);
	// stfs f31,140(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// stw r30,124(r31)
	REX_STORE_U32(r31.u32 + 124, r30.u32);
	// stfs f31,144(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// stw r10,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r10.u32);
	// stfs f31,264(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 264, temp.u32);
	// stw r30,244(r31)
	REX_STORE_U32(r31.u32 + 244, r30.u32);
	// stfs f31,268(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 268, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f31,272(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 272, temp.u32);
	// sth r30,164(r31)
	REX_STORE_U16(r31.u32 + 164, r30.u16);
	// stfs f30,276(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 276, temp.u32);
	// sth r30,166(r31)
	REX_STORE_U16(r31.u32 + 166, r30.u16);
	// stfs f31,148(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f30,152(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// stfs f31,156(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// stfs f30,160(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f31,220(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 220, temp.u32);
	// stfs f31,224(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 224, temp.u32);
	// stfs f31,228(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 228, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
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

DEFINE_REX_FUNC(sub_82308F70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82308F78;
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
	// bne cr6,0x82308fc8
	if (!ctx.cr6.eq) goto loc_82308FC8;
	// lwz r31,52(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// addi r30,r3,52
	r30.s64 = ctx.r3.s64 + 52;
	// b 0x82308fbc
	goto loc_82308FBC;
loc_82308F98:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r4,r31,-8
	ctx.r4.s64 = r31.s64 + -8;
	// bne cr6,0x82308fa8
	if (!ctx.cr6.eq) goto loc_82308FA8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82308FA8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82308f70
	ctx.lr = 0x82308FB0;
	sub_82308F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230904c
	if (!ctx.cr0.eq) goto loc_8230904C;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82308FBC:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x82308f98
	if (!ctx.cr6.eq) goto loc_82308F98;
	// b 0x82309048
	goto loc_82309048;
loc_82308FC8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822f7a88
	ctx.lr = 0x82308FD0;
	sub_822F7A88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82309048
	if (!ctx.cr0.eq) goto loc_82309048;
	// lwz r11,168(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 168);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82309048
	if (!ctx.cr6.gt) goto loc_82309048;
	// li r31,0
	r31.s64 = 0;
loc_82308FF0:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82309030
	if (!ctx.cr6.eq) goto loc_82309030;
	// add r5,r31,r11
	ctx.r5.u64 = r31.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82308dc8
	ctx.lr = 0x82309010;
	sub_82308DC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230904c
	if (!ctx.cr0.eq) goto loc_8230904C;
	// lwz r11,168(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 168);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// bl 0x822fc768
	ctx.lr = 0x82309028;
	sub_822FC768(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230904c
	if (!ctx.cr0.eq) goto loc_8230904C;
loc_82309030:
	// lwz r11,168(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 168);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82308ff0
	if (ctx.cr6.lt) goto loc_82308FF0;
loc_82309048:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230904C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82310740) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82310790
	if (!ctx.cr6.gt) goto loc_82310790;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,12
	ctx.r7.s64 = 12;
	// lfs f0,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// lfs f0,5428(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 5428);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5424(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 5424);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r3,r8
	REX_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.f0.u32);
	// fctiwz f0,f13
	ctx.f0.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,r3,r7
	REX_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.f0.u32);
	// blr 
	return;
loc_82310790:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823133D0) {
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
	ctx.lr = 0x823133D8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r19,r11
	r19.u64 = ctx.r11.u64;
	// bne cr6,0x823133f8
	if (!ctx.cr6.eq) goto loc_823133F8;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
loc_823133F8:
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82313428
	if (!ctx.cr6.eq) goto loc_82313428;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
	// beq cr6,0x82313420
	if (ctx.cr6.eq) goto loc_82313420;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
loc_82313420:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82313968
	goto loc_82313968;
loc_82313428:
	// rlwinm r23,r4,0,25,28
	r23.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x78;
	// li r22,1
	r22.s64 = 1;
	// rlwinm. r11,r23,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r30,-32126
	r30.s64 = -2105409536;
	// beq 0x82313478
	if (ctx.cr0.eq) goto loc_82313478;
	// lwz r11,-10820(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -10820);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8232f810
	ctx.lr = 0x82313454;
	sub_8232F810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82313968
	if (!ctx.cr0.eq) goto loc_82313968;
	// rlwinm. r11,r23,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bne 0x8231346c
	if (!ctx.cr0.eq) goto loc_8231346C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8231346C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82313478
	if (!ctx.cr6.eq) goto loc_82313478;
	// rlwimi r23,r22,6,25,26
	r23.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 6) & 0x60) | (r23.u64 & 0xFFFFFFFFFFFFFF9F);
loc_82313478:
	// lwz r11,60(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 60);
	// addi r20,r19,60
	r20.s64 = r19.s64 + 60;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823134b4
	if (!ctx.cr6.eq) goto loc_823134B4;
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82310878
	ctx.lr = 0x82313498;
	sub_82310878(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x823134e8
	if (!ctx.cr6.eq) goto loc_823134E8;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82311588
	ctx.lr = 0x823134AC;
	sub_82311588(ctx, base);
loc_823134AC:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82313968
	if (!ctx.cr0.eq) goto loc_82313968;
loc_823134B4:
	// lbz r11,44(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 44);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x823134d0
	if (!ctx.cr0.eq) goto loc_823134D0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82312e10
	ctx.lr = 0x823134C8;
	sub_82312E10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82313968
	if (!ctx.cr0.eq) goto loc_82313968;
loc_823134D0:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82313500
	if (!ctx.cr6.eq) goto loc_82313500;
loc_823134DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,64(r19)
	REX_STORE_U32(r19.u32 + 64, ctx.r11.u32);
	// b 0x82313968
	goto loc_82313968;
loc_823134E8:
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823110d8
	ctx.lr = 0x823134FC;
	sub_823110D8(ctx, base);
	// b 0x823134ac
	goto loc_823134AC;
loc_82313500:
	// lwz r9,20(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 20);
	// mulli r10,r11,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// add r25,r11,r10
	r25.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82313524
	if (ctx.cr6.eq) goto loc_82313524;
	// stb r24,0(r31)
	REX_STORE_U8(r31.u32 + 0, r24.u8);
loc_82313524:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// li r21,-1
	r21.s64 = -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823137f4
	if (!ctx.cr6.eq) goto loc_823137F4;
	// lwz r3,8(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82313618
	if (!ctx.cr6.eq) goto loc_82313618;
	// lwz r11,-10820(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -10820);
	// lwz r11,164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82313618
	if (ctx.cr0.eq) goto loc_82313618;
	// lwz r3,32(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 32);
	// addi r30,r26,40
	r30.s64 = r26.s64 + 40;
	// stw r24,40(r26)
	REX_STORE_U32(r26.u32 + 40, r24.u32);
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823135b0
	if (ctx.cr6.eq) goto loc_823135B0;
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r5,20(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 20);
	// bl 0x822f7c10
	ctx.lr = 0x8231357C;
	sub_822F7C10(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823135ac
	if (ctx.cr6.eq) goto loc_823135AC;
	// rlwinm r4,r23,0,27,28
	ctx.r4.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x18;
	// bl 0x8233fa68
	ctx.lr = 0x823135A0;
	sub_8233FA68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82313968
	if (!ctx.cr0.eq) goto loc_82313968;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823135AC:
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_823135B0:
	// lwz r11,36(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 36);
	// rlwinm r10,r23,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x18;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x8233fa68
	ctx.lr = 0x823135D4;
	sub_8233FA68(ctx, base);
loc_823135D4:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82313968
	if (!ctx.cr0.eq) goto loc_82313968;
loc_823135DC:
	// lwz r6,40(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 40);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8231360c
	if (ctx.cr6.eq) goto loc_8231360C;
	// lwz r3,32(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 32);
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231360c
	if (ctx.cr6.eq) goto loc_8231360C;
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x822f7c10
	ctx.lr = 0x8231360C;
	sub_822F7C10(ctx, base);
loc_8231360C:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// stw r21,0(r20)
	REX_STORE_U32(r20.u32 + 0, r21.u32);
	// b 0x823134dc
	goto loc_823134DC;
loc_82313618:
	// lbz r11,44(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 44);
	// addi r30,r26,40
	r30.s64 = r26.s64 + 40;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82313660
	if (ctx.cr0.eq) goto loc_82313660;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,40(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 40);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8233f898
	ctx.lr = 0x8231363C;
	sub_8233F898(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82313968
	if (!ctx.cr0.eq) goto loc_82313968;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82313658
	if (ctx.cr6.eq) goto loc_82313658;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82313420
	if (!ctx.cr6.eq) goto loc_82313420;
loc_82313658:
	// stb r24,44(r26)
	REX_STORE_U8(r26.u32 + 44, r24.u8);
	// b 0x823135b0
	goto loc_823135B0;
loc_82313660:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8230c3a0
	ctx.lr = 0x8231366C;
	sub_8230C3A0(ctx, base);
	// cmpwi cr6,r3,79
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 79, ctx.xer);
	// beq cr6,0x82313968
	if (ctx.cr6.eq) goto loc_82313968;
	// cmpwi cr6,r3,56
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 56, ctx.xer);
	// bne cr6,0x82313684
	if (!ctx.cr6.eq) goto loc_82313684;
loc_8231367C:
	// li r3,56
	ctx.r3.s64 = 56;
	// b 0x82313968
	goto loc_82313968;
loc_82313684:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82313968
	if (!ctx.cr6.eq) goto loc_82313968;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231367c
	if (ctx.cr6.eq) goto loc_8231367C;
	// lwz r10,144(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// lwz r29,12(r25)
	r29.u64 = REX_LOAD_U32(r25.u32 + 12);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82313750
	if (!ctx.cr6.lt) goto loc_82313750;
	// rlwinm r27,r29,2,0,29
	r27.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_823136B0:
	// lwz r11,136(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 136);
	// lwzx r31,r11,r27
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8231367c
	if (ctx.cr6.eq) goto loc_8231367C;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x823136ec
	if (!ctx.cr6.gt) goto loc_823136EC;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82343450
	ctx.lr = 0x823136D8;
	sub_82343450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82313968
	if (!ctx.cr0.eq) goto loc_82313968;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82313750
	if (!ctx.cr6.eq) goto loc_82313750;
loc_823136EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,160(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82313704;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82313968
	if (!ctx.cr0.eq) goto loc_82313968;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,0,25,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x78;
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq 0x82313728
	if (ctx.cr0.eq) goto loc_82313728;
	// rlwinm. r10,r23,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82313758
	if (!ctx.cr0.eq) goto loc_82313758;
loc_82313728:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82313738
	if (ctx.cr0.eq) goto loc_82313738;
	// rlwinm. r11,r23,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82313758
	if (!ctx.cr0.eq) goto loc_82313758;
loc_82313738:
	// lwz r28,0(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// lwz r11,144(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 144);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823136b0
	if (ctx.cr6.lt) goto loc_823136B0;
loc_82313750:
	// li r3,89
	ctx.r3.s64 = 89;
	// b 0x82313968
	goto loc_82313968;
loc_82313758:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231376C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823137a0
	if (ctx.cr0.eq) goto loc_823137A0;
	// lwz r11,36(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 36);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8233fa68
	ctx.lr = 0x82313790;
	sub_8233FA68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823137a0
	if (ctx.cr0.eq) goto loc_823137A0;
	// cmpwi cr6,r3,56
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 56, ctx.xer);
	// bne cr6,0x82313968
	if (!ctx.cr6.eq) goto loc_82313968;
loc_823137A0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8233f688
	ctx.lr = 0x823137B0;
	sub_8233F688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82313968
	if (!ctx.cr0.eq) goto loc_82313968;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8233f898
	ctx.lr = 0x823137CC;
	sub_8233F898(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82313968
	if (!ctx.cr0.eq) goto loc_82313968;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823135b0
	if (ctx.cr6.eq) goto loc_823135B0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x823135b0
	if (ctx.cr6.eq) goto loc_823135B0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_823137EC:
	// stb r22,44(r26)
	REX_STORE_U8(r26.u32 + 44, r22.u8);
	// b 0x82313968
	goto loc_82313968;
loc_823137F4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82313858
	if (!ctx.cr6.eq) goto loc_82313858;
	// lwz r11,-10820(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -10820);
	// addi r31,r26,48
	r31.s64 = r26.s64 + 48;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8232f8f8
	ctx.lr = 0x82313814;
	sub_8232F8F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82313968
	if (!ctx.cr0.eq) goto loc_82313968;
	// lwa r11,8(r25)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r25.u32 + 8));
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x8232fe48
	ctx.lr = 0x8231383C;
	sub_8232FE48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82313968
	if (!ctx.cr0.eq) goto loc_82313968;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f1,12(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8232fe48
	ctx.lr = 0x82313854;
	sub_8232FE48(ctx, base);
	// b 0x823135d4
	goto loc_823135D4;
loc_82313858:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82313874
	if (!ctx.cr6.eq) goto loc_82313874;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// stw r24,40(r26)
	REX_STORE_U32(r26.u32 + 40, r24.u32);
	// beq cr6,0x823135dc
	if (ctx.cr6.eq) goto loc_823135DC;
	// stb r22,0(r31)
	REX_STORE_U8(r31.u32 + 0, r22.u8);
	// b 0x823135dc
	goto loc_823135DC;
loc_82313874:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82313964
	if (!ctx.cr6.eq) goto loc_82313964;
	// lbz r11,44(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 44);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823138c0
	if (ctx.cr0.eq) goto loc_823138C0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,40(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 40);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8233f898
	ctx.lr = 0x8231389C;
	sub_8233F898(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82313968
	if (!ctx.cr0.eq) goto loc_82313968;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823138b8
	if (ctx.cr6.eq) goto loc_823138B8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8231367c
	if (!ctx.cr6.eq) goto loc_8231367C;
loc_823138B8:
	// stb r24,44(r26)
	REX_STORE_U8(r26.u32 + 44, r24.u8);
	// b 0x823135dc
	goto loc_823135DC;
loc_823138C0:
	// lwz r3,32(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 32);
	// stw r24,40(r26)
	REX_STORE_U32(r26.u32 + 40, r24.u32);
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823135dc
	if (ctx.cr6.eq) goto loc_823135DC;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 20);
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x822f7c10
	ctx.lr = 0x823138F4;
	sub_822F7C10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82313910
	if (ctx.cr0.eq) goto loc_82313910;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// cmpwi cr6,r3,56
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 56, ctx.xer);
	// beq cr6,0x82313914
	if (ctx.cr6.eq) goto loc_82313914;
	// b 0x82313968
	goto loc_82313968;
loc_82313910:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82313914:
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823135dc
	if (ctx.cr6.eq) goto loc_823135DC;
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 512;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r10,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lwz r3,40(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 40);
	// bl 0x8233f898
	ctx.lr = 0x82313940;
	sub_8233F898(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82313968
	if (!ctx.cr0.eq) goto loc_82313968;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823135dc
	if (ctx.cr6.eq) goto loc_823135DC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x823135dc
	if (ctx.cr6.eq) goto loc_823135DC;
	// li r3,56
	ctx.r3.s64 = 56;
	// b 0x823137ec
	goto loc_823137EC;
loc_82313964:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82313968:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_82342C08) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82342c18
	if (!ctx.cr6.eq) goto loc_82342C18;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82342C18:
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82342c34
	if (ctx.cr6.eq) goto loc_82342C34;
	// lwz r3,252(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82342c34
	if (ctx.cr6.eq) goto loc_82342C34;
	// b 0x8239d988
	sub_8239D988(ctx, base);
	return;
loc_82342C34:
	// li r3,78
	ctx.r3.s64 = 78;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82344BD0) {
	REX_FUNC_PROLOGUE();
	// stw r4,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823471C0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_823492A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,172(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823492bc
	if (!ctx.cr6.eq) goto loc_823492BC;
	// li r3,82
	ctx.r3.s64 = 82;
	// blr 
	return;
loc_823492BC:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82349314
	if (ctx.cr6.lt) goto loc_82349314;
	// lwz r11,164(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82349314
	if (ctx.cr6.gt) goto loc_82349314;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x823492f4
	if (!ctx.cr6.lt) goto loc_823492F4;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_823492F4:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82349304
	if (!ctx.cr6.gt) goto loc_82349304;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82349304:
	// stw r3,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r3.u32);
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82349314:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8234BE00) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb0
	ctx.lr = 0x8234BE08;
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f29.u64);
	// stfd f30,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r27,r3,76
	r27.s64 = ctx.r3.s64 + 76;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234be4c
	if (!ctx.cr6.eq) goto loc_8234BE4C;
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-80(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
loc_8234BE4C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f29,3788(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3788);
	f29.f64 = double(temp.f32);
	// lfs f30,3704(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(f31.f64, f29.f64);
	// bge cr6,0x8234be6c
	if (!ctx.cr6.lt) goto loc_8234BE6C;
	// fmr f31,f29
	f31.f64 = f29.f64;
	// b 0x8234be78
	goto loc_8234BE78;
loc_8234BE6C:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f30.f64);
	// ble cr6,0x8234be78
	if (!ctx.cr6.gt) goto loc_8234BE78;
	// fmr f31,f30
	f31.f64 = f30.f64;
loc_8234BE78:
	// stfs f31,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 184, temp.u32);
	// stw r28,88(r31)
	REX_STORE_U32(r31.u32 + 88, r28.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234bea8
	if (ctx.cr6.eq) goto loc_8234BEA8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-80(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
loc_8234BEA8:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234bf50
	if (ctx.cr6.eq) goto loc_8234BF50;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8234bf50
	if (!ctx.cr6.gt) goto loc_8234BF50;
	// mr r30,r27
	r30.u64 = r27.u64;
	// lis r26,8192
	r26.s64 = 536870912;
loc_8234BECC:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8234bf14
	if (!ctx.cr6.gt) goto loc_8234BF14;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8234befc
	if (ctx.cr6.eq) goto loc_8234BEFC;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234bf14
	if (ctx.cr6.eq) goto loc_8234BF14;
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x8234bf14
	if (!ctx.cr6.eq) goto loc_8234BF14;
loc_8234BEFC:
	// clrlwi r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234bf10
	if (!ctx.cr6.eq) goto loc_8234BF10;
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	f31.f64 = f29.f64;
	// b 0x8234bf14
	goto loc_8234BF14;
loc_8234BF10:
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
loc_8234BF14:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234BF30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x8234bf3c
	if (!ctx.cr6.eq) goto loc_8234BF3C;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_8234BF3C:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8234becc
	if (ctx.cr6.lt) goto loc_8234BECC;
loc_8234BF50:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82354248) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c8c
	ctx.lr = 0x82354250;
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -144, f30.u64);
	// stfd f31,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r19,0
	r19.s64 = 0;
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// lwz r11,1212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1212);
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// mr r17,r19
	r17.u64 = r19.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82354298
	if (!ctx.cr6.gt) goto loc_82354298;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_82354298:
	// lwz r11,284(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 284);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,284(r29)
	REX_STORE_U32(r29.u32 + 284, ctx.r10.u32);
	// stw r19,0(r18)
	REX_STORE_U32(r18.u32 + 0, r19.u32);
	// stw r19,0(r26)
	REX_STORE_U32(r26.u32 + 0, r19.u32);
	// lwz r9,280(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 280);
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r27.u32, ctx.xer);
	// beq cr6,0x823548b4
	if (ctx.cr6.eq) goto loc_823548B4;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// mr r23,r19
	r23.u64 = r19.u64;
	// stw r19,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r19.u32);
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r19.u32);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823542e0
	if (ctx.cr6.eq) goto loc_823542E0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e2b0
	ctx.lr = 0x823542E0;
	sub_8233E2B0(ctx, base);
loc_823542E0:
	// lwz r25,44(r29)
	r25.u64 = REX_LOAD_U32(r29.u32 + 44);
	// addi r20,r29,44
	r20.s64 = r29.s64 + 44;
	// cmplw cr6,r25,r20
	ctx.cr6.compare<uint32_t>(r25.u32, r20.u32, ctx.xer);
	// beq cr6,0x823545ec
	if (ctx.cr6.eq) goto loc_823545EC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r22,1
	r22.s64 = 1;
	// lfs f30,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f30.f64 = double(temp.f32);
	// lfs f31,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	f31.f64 = double(temp.f32);
loc_82354304:
	// lwz r31,8(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 8);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r11,284(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 284);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823545cc
	if (ctx.cr6.eq) goto loc_823545CC;
	// rlwinm r11,r11,0,23,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F8;
	// rlwinm r11,r11,0,28,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823545cc
	if (!ctx.cr6.eq) goto loc_823545CC;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82354360
	if (ctx.cr6.eq) goto loc_82354360;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8233e2b0
	ctx.lr = 0x82354348;
	sub_8233E2B0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r11,88(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 88);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r8,88(r29)
	REX_STORE_U16(r29.u32 + 88, ctx.r8.u16);
loc_82354360:
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8235438C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823545ec
	if (!ctx.cr6.eq) goto loc_823545EC;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823543b4
	if (ctx.cr6.eq) goto loc_823543B4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233e2b0
	ctx.lr = 0x823543B4;
	sub_8233E2B0(ctx, base);
loc_823543B4:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r30,r22
	r30.u64 = r22.u64;
	// lwz r10,284(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823543d4
	if (ctx.cr6.eq) goto loc_823543D4;
	// mr r30,r19
	r30.u64 = r19.u64;
	// b 0x82354460
	goto loc_82354460;
loc_823543D4:
	// lwz r11,284(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 284);
	// lwz r10,68(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 68);
	// rlwinm r9,r11,0,28,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r9,284(r29)
	REX_STORE_U32(r29.u32 + 284, ctx.r9.u32);
	// bgt cr6,0x82354460
	if (ctx.cr6.gt) goto loc_82354460;
	// lfs f0,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x82354460
	if (!ctx.cr6.eq) goto loc_82354460;
	// lwz r11,220(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 220);
	// mr r30,r19
	r30.u64 = r19.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82354414
	if (!ctx.cr6.eq) goto loc_82354414;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// bne cr6,0x8235445c
	if (!ctx.cr6.eq) goto loc_8235445C;
loc_82354414:
	// lhz r11,146(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 146);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82354438
	if (ctx.cr6.eq) goto loc_82354438;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a55f8
	ctx.lr = 0x82354430;
	sub_823A55F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235445c
	if (!ctx.cr6.eq) goto loc_8235445C;
loc_82354438:
	// lwz r11,156(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82354460
	if (ctx.cr6.eq) goto loc_82354460;
	// lwz r11,140(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82354460
	if (ctx.cr6.eq) goto loc_82354460;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82354460
	if (ctx.cr6.eq) goto loc_82354460;
loc_8235445C:
	// mr r30,r22
	r30.u64 = r22.u64;
loc_82354460:
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823544fc
	if (ctx.cr6.eq) goto loc_823544FC;
	// lhz r11,146(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 146);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823544b4
	if (!ctx.cr6.eq) goto loc_823544B4;
	// lwz r6,0(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpw cr6,r28,r6
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8235449c
	if (!ctx.cr6.eq) goto loc_8235449C;
	// lfs f0,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x8235449c
	if (!ctx.cr6.eq) goto loc_8235449C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a49a8
	ctx.lr = 0x82354498;
	sub_823A49A8(ctx, base);
	// b 0x823544b0
	goto loc_823544B0;
loc_8235449C:
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a5720
	ctx.lr = 0x823544B0;
	sub_823A5720(ctx, base);
loc_823544B0:
	// sth r22,146(r31)
	REX_STORE_U16(r31.u32 + 146, r22.u16);
loc_823544B4:
	// clrlwi r11,r23,24
	ctx.r11.u64 = r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823544d8
	if (!ctx.cr6.eq) goto loc_823544D8;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,272(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 272);
	// mullw r10,r11,r28
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823ef5f0
	ctx.lr = 0x823544D8;
	sub_823EF5F0(ctx, base);
loc_823544D8:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r8,0(r21)
	ctx.r8.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,0(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r5,0(r18)
	ctx.r5.u64 = REX_LOAD_U32(r18.u32 + 0);
	// lwz r4,272(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 272);
	// bl 0x823a6b80
	ctx.lr = 0x823544F4;
	sub_823A6B80(ctx, base);
	// mr r23,r22
	r23.u64 = r22.u64;
	// b 0x823545d8
	goto loc_823545D8;
loc_823544FC:
	// lhz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823545d8
	if (ctx.cr6.eq) goto loc_823545D8;
	// lhz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 36);
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823545c4
	if (!ctx.cr6.gt) goto loc_823545C4;
	// addi r10,r31,72
	ctx.r10.s64 = r31.s64 + 72;
loc_82354520:
	// lhz r11,38(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 38);
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x823545ac
	if (!ctx.cr6.gt) goto loc_823545AC;
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_82354538:
	// lwz r7,-32(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + -32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f0,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r30,r1,144
	r30.s64 = ctx.r1.s64 + 144;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lhzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkd3d128 v62,v63,20
	temp.u32 = ctx.v63.u16[3];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v62.u32[3] = vTemp.u32[0];
	temp.u32 = ctx.v63.u16[2];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v62.u32[2] = vTemp.u32[0];
	temp.u32 = ctx.v63.u16[1];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v62.u32[1] = vTemp.u32[0];
	temp.u32 = ctx.v63.u16[0];
	vTemp.u32[0] = ((temp.u32 & 0x8000) << 16) | (((temp.u32 & 0x7C00) + 0x1C000) << 13) | ((temp.u32 & 0x03FF) << 13);
	if ((temp.u32 & 0x7C00) == 0) vTemp.u32[0] = (temp.u32 & 0x8000) << 16;
	ctx.v62.u32[0] = vTemp.u32[0];
	// stvx128 v62,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,124(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lvx128 v63,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v61,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vpkd3d128 v61,v63,5,2,0
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v61.u16[3] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v61.u16[3] |= ((ctx.v63.u32[3]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v61.u16[2] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v61.u16[2] |= ((ctx.v63.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v61.u16[1] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v61.u16[1] |= ((ctx.v63.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v61.u16[0] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v61.u16[0] |= ((ctx.v63.u32[0]&0x80000000)>>16);
	// stvx128 v61,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,152(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// sthx r6,r3,r11
	REX_STORE_U16(ctx.r3.u32 + ctx.r11.u32, ctx.r6.u16);
	// lwz r4,32(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// sthx r19,r4,r11
	REX_STORE_U16(ctx.r4.u32 + ctx.r11.u32, r19.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhz r3,38(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 38);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82354538
	if (ctx.cr6.lt) goto loc_82354538;
loc_823545AC:
	// lhz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 36);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82354520
	if (ctx.cr6.lt) goto loc_82354520;
loc_823545C4:
	// sth r19,144(r31)
	REX_STORE_U16(r31.u32 + 144, r19.u16);
	// b 0x823545d8
	goto loc_823545D8;
loc_823545CC:
	// lwz r11,284(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 284);
	// ori r9,r11,16
	ctx.r9.u64 = ctx.r11.u64 | 16;
	// stw r9,284(r10)
	REX_STORE_U32(ctx.r10.u32 + 284, ctx.r9.u32);
loc_823545D8:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// stw r27,280(r11)
	REX_STORE_U32(ctx.r11.u32 + 280, r27.u32);
	// lwz r25,0(r25)
	r25.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r25,r20
	ctx.cr6.compare<uint32_t>(r25.u32, r20.u32, ctx.xer);
	// bne cr6,0x82354304
	if (!ctx.cr6.eq) goto loc_82354304;
loc_823545EC:
	// clrlwi r30,r23,24
	r30.u64 = r23.u32 & 0xFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82354604
	if (ctx.cr6.eq) goto loc_82354604;
	// lwz r11,272(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 272);
	// stw r11,0(r18)
	REX_STORE_U32(r18.u32 + 0, ctx.r11.u32);
	// stw r28,0(r26)
	REX_STORE_U32(r26.u32 + 0, r28.u32);
loc_82354604:
	// lwz r11,156(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82354714
	if (ctx.cr6.eq) goto loc_82354714;
	// lwz r11,284(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 284);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82354714
	if (!ctx.cr6.eq) goto loc_82354714;
	// lwz r31,0(r18)
	r31.u64 = REX_LOAD_U32(r18.u32 + 0);
	// lwz r11,272(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 272);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8235463c
	if (ctx.cr6.eq) goto loc_8235463C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8235466c
	if (!ctx.cr6.eq) goto loc_8235466C;
	// b 0x82354664
	goto loc_82354664;
loc_8235463C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82354664
	if (ctx.cr6.eq) goto loc_82354664;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 0);
	// lwz r9,20(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 20);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r3,1220(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 1220);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823ef2f8
	ctx.lr = 0x82354664;
	sub_823EF2F8(ctx, base);
loc_82354664:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r31,1220(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 1220);
loc_8235466C:
	// lwz r11,140(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235469c
	if (ctx.cr6.eq) goto loc_8235469C;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// lwz r10,140(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 140);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823ef5f0
	ctx.lr = 0x82354698;
	sub_823EF5F0(ctx, base);
	// b 0x823546ac
	goto loc_823546AC;
loc_8235469C:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823546ac
	if (!ctx.cr6.eq) goto loc_823546AC;
	// stw r28,0(r26)
	REX_STORE_U32(r26.u32 + 0, r28.u32);
loc_823546AC:
	// lwz r11,284(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 284);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823546d8
	if (ctx.cr6.eq) goto loc_823546D8;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823ef5f0
	ctx.lr = 0x823546D8;
	sub_823EF5F0(ctx, base);
loc_823546D8:
	// stw r29,28(r29)
	REX_STORE_U32(r29.u32 + 28, r29.u32);
	// addi r3,r29,28
	ctx.r3.s64 = r29.s64 + 28;
	// lwz r11,156(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 156);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,272(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r7,0(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r6,0(r21)
	ctx.r6.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82354700;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,272(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 272);
	// stw r10,0(r18)
	REX_STORE_U32(r18.u32 + 0, ctx.r10.u32);
	// lwz r9,284(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 284);
	// rlwinm r8,r9,0,28,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r8,284(r29)
	REX_STORE_U32(r29.u32 + 284, ctx.r8.u32);
loc_82354714:
	// lwz r11,72(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 72);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82354788
	if (!ctx.cr6.gt) goto loc_82354788;
	// lwz r11,220(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 220);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82354788
	if (ctx.cr6.eq) goto loc_82354788;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82354774
	if (!ctx.cr6.eq) goto loc_82354774;
	// lwz r4,0(r18)
	ctx.r4.u64 = REX_LOAD_U32(r18.u32 + 0);
	// lwz r3,272(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 272);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82354774
	if (ctx.cr6.eq) goto loc_82354774;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x82354764
	if (ctx.cr6.eq) goto loc_82354764;
	// bl 0x823ef2f8
	ctx.lr = 0x82354760;
	sub_823EF2F8(ctx, base);
	// b 0x8235476c
	goto loc_8235476C;
loc_82354764:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ef5f0
	ctx.lr = 0x8235476C;
	sub_823EF5F0(ctx, base);
loc_8235476C:
	// lwz r11,272(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 272);
	// stw r11,0(r18)
	REX_STORE_U32(r18.u32 + 0, ctx.r11.u32);
loc_82354774:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r10,284(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 284);
	// rlwinm r9,r10,0,28,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r11,304(r29)
	REX_STORE_U32(r29.u32 + 304, ctx.r11.u32);
	// stw r9,284(r29)
	REX_STORE_U32(r29.u32 + 284, ctx.r9.u32);
loc_82354788:
	// lwz r27,296(r29)
	r27.u64 = REX_LOAD_U32(r29.u32 + 296);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82354828
	if (ctx.cr6.eq) goto loc_82354828;
	// lwz r30,0(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 0);
	// lwz r28,0(r18)
	r28.u64 = REX_LOAD_U32(r18.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82354828
	if (ctx.cr6.eq) goto loc_82354828;
loc_823547A4:
	// lwz r11,300(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 300);
	// mr r31,r30
	r31.u64 = r30.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// ble cr6,0x823547bc
	if (!ctx.cr6.gt) goto loc_823547BC;
	// subfic r31,r11,16384
	ctx.xer.ca = ctx.r11.u32 <= 16384;
	r31.u64 = static_cast<uint64_t>(16384) - ctx.r11.u64;
loc_823547BC:
	// lwz r10,0(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw r8,r10,r31
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bne cr6,0x823547ec
	if (!ctx.cr6.eq) goto loc_823547EC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ef5f0
	ctx.lr = 0x823547E8;
	sub_823EF5F0(ctx, base);
	// b 0x823547f4
	goto loc_823547F4;
loc_823547EC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x823547F4;
	sub_823EF2F8(ctx, base);
loc_823547F4:
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// subf r30,r31,r30
	r30.u64 = r30.u64 - r31.u64;
	// lwz r11,300(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 300);
	// mullw r9,r10,r31
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,300(r29)
	REX_STORE_U32(r29.u32 + 300, ctx.r11.u32);
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// add r28,r10,r28
	r28.u64 = ctx.r10.u64 + r28.u64;
	// blt cr6,0x82354820
	if (ctx.cr6.lt) goto loc_82354820;
	// stw r19,300(r29)
	REX_STORE_U32(r29.u32 + 300, r19.u32);
loc_82354820:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x823547a4
	if (!ctx.cr6.eq) goto loc_823547A4;
loc_82354828:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823548d0
	if (ctx.cr6.eq) goto loc_823548D0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8233e2b0
	ctx.lr = 0x82354844;
	sub_8233E2B0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r11,88(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 88);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// lwz r8,220(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 220);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// sth r7,88(r29)
	REX_STORE_U16(r29.u32 + 88, ctx.r7.u16);
	// beq cr6,0x82354880
	if (ctx.cr6.eq) goto loc_82354880;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,0(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,0(r21)
	ctx.r5.u64 = REX_LOAD_U32(r21.u32 + 0);
	// lwz r4,0(r18)
	ctx.r4.u64 = REX_LOAD_U32(r18.u32 + 0);
	// bl 0x823496f8
	ctx.lr = 0x82354880;
	sub_823496F8(ctx, base);
loc_82354880:
	// lwz r11,220(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 220);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x823548d0
	if (ctx.cr6.eq) goto loc_823548D0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// beq cr6,0x823548d4
	if (ctx.cr6.eq) goto loc_823548D4;
	// lhz r11,88(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 88);
	// sth r19,88(r29)
	REX_STORE_U16(r29.u32 + 88, r19.u16);
	// sth r11,86(r29)
	REX_STORE_U16(r29.u32 + 86, ctx.r11.u16);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826a1cdc
	return;
loc_823548B4:
	// lwz r11,272(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 272);
	// stw r11,0(r18)
	REX_STORE_U32(r18.u32 + 0, ctx.r11.u32);
	// lwz r10,304(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 304);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// lwz r9,284(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 284);
	// rlwinm r8,r9,0,28,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r8,284(r29)
	REX_STORE_U32(r29.u32 + 284, ctx.r8.u32);
loc_823548D0:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
loc_823548D4:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_8239D550) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lhz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239d56c
	if (ctx.cr6.eq) goto loc_8239D56C;
loc_8239D560:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8239d560
	if (!ctx.cr6.eq) goto loc_8239D560;
loc_8239D56C:
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// srawi r3,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8239DFD8) {
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
	ctx.lr = 0x8239DFE0;
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// addi r27,r3,28
	r27.s64 = ctx.r3.s64 + 28;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239e014
	if (ctx.cr6.eq) goto loc_8239E014;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8239e014
	if (ctx.cr6.lt) goto loc_8239E014;
	// li r3,38
	ctx.r3.s64 = 38;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x826a1d04
	return;
loc_8239E014:
	// lwz r10,104(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 104);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8239e02c
	if (!ctx.cr6.eq) goto loc_8239E02C;
	// li r3,82
	ctx.r3.s64 = 82;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x826a1d04
	return;
loc_8239E02C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x8239e038
	if (!ctx.cr6.lt) goto loc_8239E038;
	// lwz r4,200(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 200);
loc_8239E038:
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lwz r9,116(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 116);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// and r28,r8,r4
	r28.u64 = ctx.r8.u64 & ctx.r4.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bctrl 
	ctx.lr = 0x8239E05C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239e6a8
	if (!ctx.cr6.eq) goto loc_8239E6A8;
	// lwz r9,84(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 84);
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239e228
	if (ctx.cr6.eq) goto loc_8239E228;
	// rlwinm r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239e1cc
	if (ctx.cr6.eq) goto loc_8239E1CC;
	// lwz r10,356(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8239e1c4
	if (ctx.cr6.eq) goto loc_8239E1C4;
	// lwz r11,352(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x8239e1c4
	if (ctx.cr6.gt) goto loc_8239E1C4;
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-8016
	ctx.r12.s64 = ctx.r12.s64 + -8016;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8239E124;
	case 1:
		goto loc_8239E0E0;
	case 2:
		goto loc_8239E0E8;
	case 3:
		goto loc_8239E0F0;
	case 4:
		goto loc_8239E0F8;
	case 5:
		goto loc_8239E0F8;
	case 6:
		goto loc_8239E124;
	case 7:
		goto loc_8239E124;
	case 8:
		goto loc_8239E124;
	case 9:
		goto loc_8239E124;
	case 10:
		goto loc_8239E124;
	case 11:
		goto loc_8239E124;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8239E0E0:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8239e0fc
	goto loc_8239E0FC;
loc_8239E0E8:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x8239e0fc
	goto loc_8239E0FC;
loc_8239E0F0:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x8239e0fc
	goto loc_8239E0FC;
loc_8239E0F8:
	// li r11,32
	ctx.r11.s64 = 32;
loc_8239E0FC:
	// li r8,0
	ctx.r8.s64 = 0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldimi r8,r31,3,29
	ctx.r8.u64 = (__builtin_rotateleft64(r31.u64, 3) & 0x7FFFFFFF8) | (ctx.r8.u64 & 0xFFFFFFF800000007);
	// tdllei r11,0
	if (ctx.r11.s64 == 0ll || ctx.r11.u64 < 0ull) ppc_trap(ctx, base, 0);
	// divdu r7,r8,r11
	ctx.r7.u64 = ctx.r11.u64 ? ctx.r8.u64 / ctx.r11.u64 : 0;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// li r30,2
	r30.s64 = 2;
	// divwu r31,r11,r10
	r31.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// b 0x8239e654
	goto loc_8239E654;
loc_8239E124:
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-7876
	ctx.r12.s64 = ctx.r12.s64 + -7876;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8239E1B8;
	case 1:
		goto loc_8239E1C4;
	case 2:
		goto loc_8239E1C4;
	case 3:
		goto loc_8239E1C4;
	case 4:
		goto loc_8239E1C4;
	case 5:
		goto loc_8239E1C4;
	case 6:
		goto loc_8239E16C;
	case 7:
		goto loc_8239E184;
	case 8:
		goto loc_8239E1A0;
	case 9:
		goto loc_8239E1C4;
	case 10:
		goto loc_8239E1C4;
	case 11:
		goto loc_8239E1C4;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8239E16C:
	// mulli r11,r31,14
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(14));
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r31,r11,r10
	r31.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// li r30,2
	r30.s64 = 2;
	// b 0x8239e654
	goto loc_8239E654;
loc_8239E184:
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 6) & 0xFFFFFFC0;
	// li r8,36
	ctx.r8.s64 = 36;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r11,r8
	ctx.r11.u64 = uint32_t(ctx.r8.u32 ? ctx.r11.u32 / ctx.r8.u32 : 0);
	// li r30,2
	r30.s64 = 2;
	// divwu r31,r11,r10
	r31.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// b 0x8239e654
	goto loc_8239E654;
loc_8239E1A0:
	// mulli r11,r31,28
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(28));
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r31,r11,r10
	r31.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// li r30,2
	r30.s64 = 2;
	// b 0x8239e654
	goto loc_8239E654;
loc_8239E1B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r31,r11,r10
	r31.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
loc_8239E1C4:
	// li r30,2
	r30.s64 = 2;
	// b 0x8239e654
	goto loc_8239E654;
loc_8239E1CC:
	// clrlwi r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239e654
	if (ctx.cr6.eq) goto loc_8239E654;
	// lwz r11,360(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// clrldi r10,r31,32
	ctx.r10.u64 = r31.u64 & 0xFFFFFFFF;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f0,4104(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4104);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// li r30,2
	r30.s64 = 2;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fctidz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f6.u64);
	// lwz r31,92(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x8239e654
	goto loc_8239E654;
loc_8239E228:
	// rlwinm r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239e484
	if (ctx.cr6.eq) goto loc_8239E484;
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239e308
	if (ctx.cr6.eq) goto loc_8239E308;
	// lwz r11,352(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x8239e47c
	if (ctx.cr6.gt) goto loc_8239E47C;
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-7580
	ctx.r12.s64 = ctx.r12.s64 + -7580;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8239E29C;
	case 1:
		goto loc_8239E3B0;
	case 2:
		goto loc_8239E294;
	case 3:
		goto loc_8239E3B8;
	case 4:
		goto loc_8239E3C0;
	case 5:
		goto loc_8239E3C0;
	case 6:
		goto loc_8239E29C;
	case 7:
		goto loc_8239E29C;
	case 8:
		goto loc_8239E29C;
	case 9:
		goto loc_8239E29C;
	case 10:
		goto loc_8239E29C;
	case 11:
		goto loc_8239E29C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8239E294:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x8239e3c4
	goto loc_8239E3C4;
loc_8239E29C:
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-7500
	ctx.r12.s64 = ctx.r12.s64 + -7500;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8239E470;
	case 1:
		goto loc_8239E47C;
	case 2:
		goto loc_8239E47C;
	case 3:
		goto loc_8239E47C;
	case 4:
		goto loc_8239E47C;
	case 5:
		goto loc_8239E47C;
	case 6:
		goto loc_8239E430;
	case 7:
		goto loc_8239E2E4;
	case 8:
		goto loc_8239E450;
	case 9:
		goto loc_8239E47C;
	case 10:
		goto loc_8239E47C;
	case 11:
		goto loc_8239E47C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8239E2E4:
	// addi r11,r31,63
	ctx.r11.s64 = r31.s64 + 63;
	// li r30,4
	r30.s64 = 4;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,356(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// mullw r31,r10,r11
	r31.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x8239e654
	goto loc_8239E654;
loc_8239E308:
	// clrlwi r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239e654
	if (ctx.cr6.eq) goto loc_8239E654;
	// lwz r8,360(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// clrldi r10,r31,32
	ctx.r10.u64 = r31.u64 & 0xFFFFFFFF;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r11,352(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// std r6,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,4104(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4104);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fctidz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bgt cr6,0x8239e47c
	if (ctx.cr6.gt) goto loc_8239E47C;
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-7296
	ctx.r12.s64 = ctx.r12.s64 + -7296;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8239E3E8;
	case 1:
		goto loc_8239E3B0;
	case 2:
		goto loc_8239E294;
	case 3:
		goto loc_8239E3B8;
	case 4:
		goto loc_8239E3C0;
	case 5:
		goto loc_8239E3C0;
	case 6:
		goto loc_8239E3E8;
	case 7:
		goto loc_8239E3E8;
	case 8:
		goto loc_8239E3E8;
	case 9:
		goto loc_8239E3E8;
	case 10:
		goto loc_8239E3E8;
	case 11:
		goto loc_8239E3E8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8239E3B0:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8239e3c4
	goto loc_8239E3C4;
loc_8239E3B8:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x8239e3c4
	goto loc_8239E3C4;
loc_8239E3C0:
	// li r11,32
	ctx.r11.s64 = 32;
loc_8239E3C4:
	// clrldi r10,r31,32
	ctx.r10.u64 = r31.u64 & 0xFFFFFFFF;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// li r30,4
	r30.s64 = 4;
	// mulld r8,r11,r10
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r10.u64);
	// lwz r10,356(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// rldicl r7,r8,61,3
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// mullw r31,r10,r11
	r31.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x8239e654
	goto loc_8239E654;
loc_8239E3E8:
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-7168
	ctx.r12.s64 = ctx.r12.s64 + -7168;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8239E470;
	case 1:
		goto loc_8239E47C;
	case 2:
		goto loc_8239E47C;
	case 3:
		goto loc_8239E47C;
	case 4:
		goto loc_8239E47C;
	case 5:
		goto loc_8239E47C;
	case 6:
		goto loc_8239E430;
	case 7:
		goto loc_8239E2E4;
	case 8:
		goto loc_8239E450;
	case 9:
		goto loc_8239E47C;
	case 10:
		goto loc_8239E47C;
	case 11:
		goto loc_8239E47C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8239E430:
	// addi r11,r31,13
	ctx.r11.s64 = r31.s64 + 13;
	// li r10,14
	ctx.r10.s64 = 14;
	// li r30,4
	r30.s64 = 4;
	// divwu r8,r11,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// lwz r10,356(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r31,r10,r11
	r31.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x8239e654
	goto loc_8239E654;
loc_8239E450:
	// addi r11,r31,27
	ctx.r11.s64 = r31.s64 + 27;
	// li r10,28
	ctx.r10.s64 = 28;
	// li r30,4
	r30.s64 = 4;
	// divwu r8,r11,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// lwz r10,356(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r31,r10,r11
	r31.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x8239e654
	goto loc_8239E654;
loc_8239E470:
	// lwz r10,356(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw r31,r10,r11
	r31.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
loc_8239E47C:
	// li r30,4
	r30.s64 = 4;
	// b 0x8239e654
	goto loc_8239E654;
loc_8239E484:
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239e654
	if (ctx.cr6.eq) goto loc_8239E654;
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239e4e8
	if (ctx.cr6.eq) goto loc_8239E4E8;
	// lwz r10,360(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// clrldi r11,r31,32
	ctx.r11.u64 = r31.u64 & 0xFFFFFFFF;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,3992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3992);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fdivs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f11.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fctidz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8239e650
	goto loc_8239E650;
loc_8239E4E8:
	// rlwinm r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239e654
	if (ctx.cr6.eq) goto loc_8239E654;
	// lwz r10,356(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8239e608
	if (ctx.cr6.eq) goto loc_8239E608;
	// lwz r11,352(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x8239e608
	if (ctx.cr6.gt) goto loc_8239E608;
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-6876
	ctx.r12.s64 = ctx.r12.s64 + -6876;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8239E58C;
	case 1:
		goto loc_8239E554;
	case 2:
		goto loc_8239E55C;
	case 3:
		goto loc_8239E564;
	case 4:
		goto loc_8239E56C;
	case 5:
		goto loc_8239E56C;
	case 6:
		goto loc_8239E58C;
	case 7:
		goto loc_8239E58C;
	case 8:
		goto loc_8239E58C;
	case 9:
		goto loc_8239E58C;
	case 10:
		goto loc_8239E58C;
	case 11:
		goto loc_8239E58C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8239E554:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8239e570
	goto loc_8239E570;
loc_8239E55C:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x8239e570
	goto loc_8239E570;
loc_8239E564:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x8239e570
	goto loc_8239E570;
loc_8239E56C:
	// li r11,32
	ctx.r11.s64 = 32;
loc_8239E570:
	// li r8,0
	ctx.r8.s64 = 0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldimi r8,r31,3,29
	ctx.r8.u64 = (__builtin_rotateleft64(r31.u64, 3) & 0x7FFFFFFF8) | (ctx.r8.u64 & 0xFFFFFFF800000007);
	// tdllei r11,0
	if (ctx.r11.s64 == 0ll || ctx.r11.u64 < 0ull) ppc_trap(ctx, base, 0);
	// divdu r7,r8,r11
	ctx.r7.u64 = ctx.r11.u64 ? ctx.r8.u64 / ctx.r11.u64 : 0;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// b 0x8239e600
	goto loc_8239E600;
loc_8239E58C:
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-6748
	ctx.r12.s64 = ctx.r12.s64 + -6748;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8239E5FC;
	case 1:
		goto loc_8239E608;
	case 2:
		goto loc_8239E608;
	case 3:
		goto loc_8239E608;
	case 4:
		goto loc_8239E608;
	case 5:
		goto loc_8239E608;
	case 6:
		goto loc_8239E5D4;
	case 7:
		goto loc_8239E5E0;
	case 8:
		goto loc_8239E5F0;
	case 9:
		goto loc_8239E608;
	case 10:
		goto loc_8239E608;
	case 11:
		goto loc_8239E608;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8239E5D4:
	// mulli r11,r31,14
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(14));
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x8239e600
	goto loc_8239E600;
loc_8239E5E0:
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 6) & 0xFFFFFFC0;
	// li r8,36
	ctx.r8.s64 = 36;
	// divwu r11,r11,r8
	ctx.r11.u64 = uint32_t(ctx.r8.u32 ? ctx.r11.u32 / ctx.r8.u32 : 0);
	// b 0x8239e600
	goto loc_8239E600;
loc_8239E5F0:
	// mulli r11,r31,28
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(28));
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// b 0x8239e600
	goto loc_8239E600;
loc_8239E5FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8239E600:
	// divwu r31,r11,r10
	r31.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
loc_8239E608:
	// lwz r10,360(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// clrldi r11,r31,32
	ctx.r11.u64 = r31.u64 & 0xFFFFFFFF;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,3992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3992);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fdivs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f11.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fctidz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8239E650:
	// li r30,1
	r30.s64 = 1;
loc_8239E654:
	// and r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 & r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239e66c
	if (!ctx.cr6.eq) goto loc_8239E66C;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x826a1d04
	return;
loc_8239E66C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,104(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 104);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r11,236(r29)
	REX_STORE_U32(r29.u32 + 236, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239E690;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239e6a0
	if (ctx.cr6.eq) goto loc_8239E6A0;
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// bne cr6,0x8239e6a8
	if (!ctx.cr6.eq) goto loc_8239E6A8;
loc_8239E6A0:
	// stw r28,200(r29)
	REX_STORE_U32(r29.u32 + 200, r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8239E6A8:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823CEA38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823CEA40;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x823ceac8
	if (ctx.cr6.lt) goto loc_823CEAC8;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823ceac8
	if (ctx.cr6.eq) goto loc_823CEAC8;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823ceac8
	if (!ctx.cr6.lt) goto loc_823CEAC8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x823ceab0
	if (!ctx.cr6.lt) goto loc_823CEAB0;
	// li r29,0
	r29.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823ceaa4
	if (!ctx.cr6.gt) goto loc_823CEAA4;
loc_823CEA84:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823cea38
	ctx.lr = 0x823CEA90;
	sub_823CEA38(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// add r29,r3,r29
	r29.u64 = ctx.r3.u64 + r29.u64;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823cea84
	if (ctx.cr6.lt) goto loc_823CEA84;
loc_823CEAA4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823CEAB0:
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ld r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823CEAC8:
	// li r3,-131
	ctx.r3.s64 = -131;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823D1930) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823d1940
	if (!ctx.cr6.eq) goto loc_823D1940;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_823D1940:
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r10,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D2558) {
	REX_FUNC_PROLOGUE();
	// li r3,51
	ctx.r3.s64 = 51;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D2938) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823D2940;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823d2954
	if (!ctx.cr6.eq) goto loc_823D2954;
loc_823D294C:
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x826a1d08
	return;
loc_823D2954:
	// lwz r28,24(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x823d294c
	if (ctx.cr6.eq) goto loc_823D294C;
	// rlwinm r5,r5,0,4,2
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r30,8
	r30.s64 = 524288;
	// lis r29,16
	r29.s64 = 1048576;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823d2980
	if (!ctx.cr6.eq) goto loc_823D2980;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x823d29b8
	goto loc_823D29B8;
loc_823D2980:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823d2994
	if (!ctx.cr6.eq) goto loc_823D2994;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x823d29b8
	goto loc_823D29B8;
loc_823D2994:
	// lis r10,4
	ctx.r10.s64 = 262144;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823d29a8
	if (!ctx.cr6.eq) goto loc_823D29A8;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x823d29b8
	goto loc_823D29B8;
loc_823D29A8:
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r30.u32, ctx.xer);
	// beq cr6,0x823d29b8
	if (ctx.cr6.eq) goto loc_823D29B8;
	// cmplw cr6,r5,r29
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r29.u32, ctx.xer);
	// bne cr6,0x823d29bc
	if (!ctx.cr6.eq) goto loc_823D29BC;
loc_823D29B8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823D29BC:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823d29d4
	if (ctx.cr6.eq) goto loc_823D29D4;
	// lwz r11,160(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d294c
	if (ctx.cr6.eq) goto loc_823D294C;
loc_823D29D4:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// beq cr6,0x823d2a04
	if (ctx.cr6.eq) goto loc_823D2A04;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// beq cr6,0x823d2a04
	if (ctx.cr6.eq) goto loc_823D2A04;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// beq cr6,0x823d2a04
	if (ctx.cr6.eq) goto loc_823D2A04;
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r30.u32, ctx.xer);
	// beq cr6,0x823d2a04
	if (ctx.cr6.eq) goto loc_823D2A04;
	// cmplw cr6,r5,r29
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r29.u32, ctx.xer);
	// beq cr6,0x823d2a04
	if (ctx.cr6.eq) goto loc_823D2A04;
	// li r3,25
	ctx.r3.s64 = 25;
	// b 0x826a1d08
	return;
loc_823D2A04:
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823d2a68
	if (ctx.cr6.eq) goto loc_823D2A68;
	// lwz r6,164(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 164);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x823d2a68
	if (!ctx.cr6.gt) goto loc_823D2A68;
	// lwz r9,24(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r31,136(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 136);
	// lwz r9,160(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 160);
loc_823D2A30:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823d2a68
	if (ctx.cr6.eq) goto loc_823D2A68;
	// lwz r8,44(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823d2a68
	if (ctx.cr6.lt) goto loc_823D2A68;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x823d2a30
	if (ctx.cr6.lt) goto loc_823D2A30;
loc_823D2A68:
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r30.u32, ctx.xer);
	// bne cr6,0x823d2a7c
	if (!ctx.cr6.eq) goto loc_823D2A7C;
	// stw r7,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1d08
	return;
loc_823D2A7C:
	// cmplw cr6,r5,r29
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r29.u32, ctx.xer);
	// bne cr6,0x823d2a90
	if (!ctx.cr6.eq) goto loc_823D2A90;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1d08
	return;
loc_823D2A90:
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// beq cr6,0x823d2c14
	if (ctx.cr6.eq) goto loc_823D2C14;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bne cr6,0x823d2c20
	if (!ctx.cr6.eq) goto loc_823D2C20;
	// lwz r9,24(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,28(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// lwz r9,72(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x823d2c58
	if (ctx.cr6.gt) goto loc_823D2C58;
	// lis r12,-32195
	ctx.r12.s64 = -2109931520;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,10956
	ctx.r12.s64 = ctx.r12.s64 + 10956;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823D2B40;
	case 1:
		goto loc_823D2AFC;
	case 2:
		goto loc_823D2B04;
	case 3:
		goto loc_823D2B0C;
	case 4:
		goto loc_823D2B14;
	case 5:
		goto loc_823D2B14;
	case 6:
		goto loc_823D2B40;
	case 7:
		goto loc_823D2B40;
	case 8:
		goto loc_823D2B40;
	case 9:
		goto loc_823D2B40;
	case 10:
		goto loc_823D2B40;
	case 11:
		goto loc_823D2B40;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823D2AFC:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x823d2b18
	goto loc_823D2B18;
loc_823D2B04:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x823d2b18
	goto loc_823D2B18;
loc_823D2B0C:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x823d2b18
	goto loc_823D2B18;
loc_823D2B14:
	// li r11,32
	ctx.r11.s64 = 32;
loc_823D2B18:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// mulld r8,r11,r10
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r10.u64);
	// rldicl r7,r8,61,3
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// b 0x826a1d08
	return;
loc_823D2B40:
	// lis r12,-32195
	ctx.r12.s64 = -2109931520;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,11096
	ctx.r12.s64 = ctx.r12.s64 + 11096;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823D2C04;
	case 1:
		goto loc_823D2C58;
	case 2:
		goto loc_823D2C58;
	case 3:
		goto loc_823D2C58;
	case 4:
		goto loc_823D2C58;
	case 5:
		goto loc_823D2C58;
	case 6:
		goto loc_823D2B88;
	case 7:
		goto loc_823D2BB0;
	case 8:
		goto loc_823D2BDC;
	case 9:
		goto loc_823D2C14;
	case 10:
		goto loc_823D2C14;
	case 11:
		goto loc_823D2C14;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823D2B88:
	// addi r11,r10,13
	ctx.r11.s64 = ctx.r10.s64 + 13;
	// li r10,14
	ctx.r10.s64 = 14;
	// li r3,0
	ctx.r3.s64 = 0;
	// divwu r8,r11,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// b 0x826a1d08
	return;
loc_823D2BB0:
	// addi r11,r10,63
	ctx.r11.s64 = ctx.r10.s64 + 63;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// b 0x826a1d08
	return;
loc_823D2BDC:
	// addi r11,r10,27
	ctx.r11.s64 = ctx.r10.s64 + 27;
	// li r10,28
	ctx.r10.s64 = 28;
	// li r3,0
	ctx.r3.s64 = 0;
	// divwu r8,r11,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// b 0x826a1d08
	return;
loc_823D2C04:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
loc_823D2C14:
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1d08
	return;
loc_823D2C20:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x823d2c58
	if (!ctx.cr6.eq) goto loc_823D2C58;
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lfs f13,80(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.r11.u64);
	// lfd f12,-48(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,3992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3992);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fctidz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f7,0,r4
	REX_STORE_U32(ctx.r4.u32, ctx.f7.u32);
loc_823D2C58:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823E5230) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfs f0,4288(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4288);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x823e529c
	if (ctx.cr6.lt) goto loc_823E529C;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf r7,r4,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r4.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823E5264:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,-4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f11,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f9,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfsu f13,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmuls f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x823e5264
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E5264;
loc_823E529C:
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x823e52cc
	if (!ctx.cr6.lt) goto loc_823E52CC;
	// subf r9,r8,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r8.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823E52B8:
	// lfsx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823e52b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E52B8;
loc_823E52CC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x823e4f40
	sub_823E4F40(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823E9178) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// rlwinm r10,r3,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF0000;
	// subfe r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r8,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r6,r3,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwinm r5,r6,0,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF00;
	// or r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 | ctx.r11.u64;
	// addic r3,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r3.s64 = ctx.r5.s64 + -1;
	// subfe r11,r3,r5
	temp.u8 = (~ctx.r3.u32 + ctx.r5.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// srw r9,r6,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwinm r8,r9,0,24,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF0;
	// or r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 | ctx.r4.u64;
	// addic r6,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// subfe r5,r6,r8
	temp.u8 = (~ctx.r6.u32 + ctx.r8.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// srw r3,r9,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r4.u8 & 0x3F));
	// rlwinm r11,r3,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC;
	// or r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 | ctx.r7.u64;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r5,r3,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwinm r10,r5,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x1;
	// or r11,r6,r9
	ctx.r11.u64 = ctx.r6.u64 | ctx.r9.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EBA18) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r3,r8,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EC648) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ec6d0
	if (ctx.cr6.eq) goto loc_823EC6D0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,9436
	ctx.r10.s64 = ctx.r10.s64 + 9436;
loc_823EC65C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x823ec680
	if (ctx.cr0.eq) goto loc_823EC680;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823ec65c
	if (ctx.cr6.eq) goto loc_823EC65C;
loc_823EC680:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ec690
	if (!ctx.cr0.eq) goto loc_823EC690;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// b 0x823ec6cc
	goto loc_823EC6CC;
loc_823EC690:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-26980
	ctx.r10.s64 = ctx.r10.s64 + -26980;
loc_823EC69C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x823ec6c0
	if (ctx.cr0.eq) goto loc_823EC6C0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823ec69c
	if (ctx.cr6.eq) goto loc_823EC69C;
loc_823EC6C0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ec6d0
	if (!ctx.cr0.eq) goto loc_823EC6D0;
	// ori r4,r4,256
	ctx.r4.u64 = ctx.r4.u64 | 256;
loc_823EC6CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EC6D0:
	// b 0x82793644
	__imp__XamLoaderLaunchTitle(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823EDB88) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EDC50) {
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
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,4114
	ctx.r4.u64 = ctx.r4.u64 | 4114;
	// li r3,254
	ctx.r3.s64 = 254;
	// bl 0x82793744
	ctx.lr = 0x823EDC78;
	__imp__XMsgInProcessCall(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EE988) {
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
	ctx.lr = 0x823EE990;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// bl 0x823f0480
	ctx.lr = 0x823EE9B8;
	sub_823F0480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x823eea04
	if (!ctx.cr0.eq) goto loc_823EEA04;
	// rldicl r11,r30,16,48
	ctx.r11.u64 = __builtin_rotateleft64(r30.u64, 16) & 0xFFFF;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bne cr6,0x823ee9e0
	if (!ctx.cr6.eq) goto loc_823EE9E0;
	// rlwinm. r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823ee9e0
	if (ctx.cr0.eq) goto loc_823EE9E0;
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x823eea04
	goto loc_823EEA04;
loc_823EE9E0:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82793854
	ctx.lr = 0x823EEA04;
	__imp__XamUserCreateAchievementEnumerator(ctx, base);
loc_823EEA04:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_823F0078) {
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82793934
	ctx.lr = 0x823F0094;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	ctx.r11.s64 = -3;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// li r8,16448
	ctx.r8.s64 = 16448;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x827939e4
	ctx.lr = 0x823F00C8;
	__imp__NtOpenFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823f0110
	if (ctx.cr0.lt) goto loc_823F0110;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,13
	ctx.r7.s64 = 13;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x827939d4
	ctx.lr = 0x823F00F0;
	__imp__NtSetInformationFile(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x827938d4
	ctx.lr = 0x823F00FC;
	__imp__NtClose(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x823f010c
	if (ctx.cr6.lt) goto loc_823F010C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823f0118
	goto loc_823F0118;
loc_823F010C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823F0110:
	// bl 0x823f0020
	ctx.lr = 0x823F0114;
	sub_823F0020(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F0118:
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

DEFINE_REX_FUNC(sub_823F5798) {
	REX_FUNC_PROLOGUE();
	// b 0x823f5848
	sub_823F5848(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823F5848) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823F5850;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r5,4
	ctx.r5.s64 = 262144;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x826a2e60
	ctx.lr = 0x823F5868;
	sub_826A2E60(ctx, base);
	// lwz r11,2152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2152);
	// li r10,32
	ctx.r10.s64 = 32;
	// lwz r9,17188(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 17188);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lwz r7,17192(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 17192);
	// stb r10,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r10.u8);
	// li r30,1
	r30.s64 = 1;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r29,0
	r29.s64 = 0;
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// addi r3,r31,14672
	ctx.r3.s64 = r31.s64 + 14672;
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,68(r31)
	REX_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// stb r30,2418(r31)
	REX_STORE_U8(r31.u32 + 2418, r30.u8);
	// stb r30,2419(r31)
	REX_STORE_U8(r31.u32 + 2419, r30.u8);
	// stw r29,20(r31)
	REX_STORE_U32(r31.u32 + 20, r29.u32);
	// stb r29,25(r31)
	REX_STORE_U8(r31.u32 + 25, r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,17184(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 17184);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// stw r11,1104(r31)
	REX_STORE_U32(r31.u32 + 1104, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r8,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// stw r11,2148(r31)
	REX_STORE_U32(r31.u32 + 2148, ctx.r11.u32);
	// bl 0x826a2e60
	ctx.lr = 0x823F58EC;
	sub_826A2E60(ctx, base);
	// addi r3,r31,16868
	ctx.r3.s64 = r31.s64 + 16868;
	// li r5,249
	ctx.r5.s64 = 249;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x823F58FC;
	sub_826A2E60(ctx, base);
	// addi r3,r31,9520
	ctx.r3.s64 = r31.s64 + 9520;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x826a2e60
	ctx.lr = 0x823F590C;
	sub_826A2E60(ctx, base);
	// lwz r11,2152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2152);
	// addi r3,r31,9776
	ctx.r3.s64 = r31.s64 + 9776;
	// li r4,9
	ctx.r4.s64 = 9;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x826a2e60
	ctx.lr = 0x823F5920;
	sub_826A2E60(ctx, base);
	// addi r3,r31,10221
	ctx.r3.s64 = r31.s64 + 10221;
	// li r5,249
	ctx.r5.s64 = 249;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x826a2e60
	ctx.lr = 0x823F5930;
	sub_826A2E60(ctx, base);
	// li r11,771
	ctx.r11.s64 = 771;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r11,17166(r31)
	REX_STORE_U16(r31.u32 + 17166, ctx.r11.u16);
	// sth r11,17168(r31)
	REX_STORE_U16(r31.u32 + 17168, ctx.r11.u16);
	// sth r11,17170(r31)
	REX_STORE_U16(r31.u32 + 17170, ctx.r11.u16);
	// sth r11,17172(r31)
	REX_STORE_U16(r31.u32 + 17172, ctx.r11.u16);
	// bl 0x823f7ba8
	ctx.lr = 0x823F594C;
	sub_823F7BA8(ctx, base);
	// lwz r11,1104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1104);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,2144(r31)
	REX_STORE_U32(r31.u32 + 2144, r29.u32);
	// stb r30,2420(r31)
	REX_STORE_U8(r31.u32 + 2420, r30.u8);
	// stw r11,2432(r31)
	REX_STORE_U32(r31.u32 + 2432, ctx.r11.u32);
	// stw r11,2428(r31)
	REX_STORE_U32(r31.u32 + 2428, ctx.r11.u32);
	// bl 0x826a2e60
	ctx.lr = 0x823F5970;
	sub_826A2E60(ctx, base);
	// stw r29,28(r31)
	REX_STORE_U32(r31.u32 + 28, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
	// stb r29,2161(r31)
	REX_STORE_U8(r31.u32 + 2161, r29.u8);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// bl 0x823f7098
	ctx.lr = 0x823F5990;
	sub_823F7098(ctx, base);
	// li r5,2800
	ctx.r5.s64 = 2800;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,17196(r31)
	REX_STORE_U32(r31.u32 + 17196, r29.u32);
	// addi r3,r31,10472
	ctx.r3.s64 = r31.s64 + 10472;
	// stw r29,17212(r31)
	REX_STORE_U32(r31.u32 + 17212, r29.u32);
	// bl 0x826a2e60
	ctx.lr = 0x823F59A8;
	sub_826A2E60(ctx, base);
	// li r5,996
	ctx.r5.s64 = 996;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,15374
	ctx.r3.s64 = r31.s64 + 15374;
	// bl 0x826a2e60
	ctx.lr = 0x823F59B8;
	sub_826A2E60(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,17118
	ctx.r3.s64 = r31.s64 + 17118;
	// bl 0x826a2e60
	ctx.lr = 0x823F59C8;
	sub_826A2E60(ctx, base);
	// lwz r10,2424(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2424);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,17184(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 17184);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r11,4353
	ctx.r5.s64 = ctx.r11.s64 + 4353;
	// bl 0x826a2e60
	ctx.lr = 0x823F59E4;
	sub_826A2E60(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823FFDD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823FFDD8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823ffdf4
	if (ctx.cr6.eq) goto loc_823FFDF4;
	// stw r31,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r31.u32);
loc_823FFDF4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823ffe08
	if (!ctx.cr6.eq) goto loc_823FFE08;
loc_823FFDFC:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x823ffeb0
	goto loc_823FFEB0;
loc_823FFE08:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823ffdfc
	if (ctx.cr6.eq) goto loc_823FFDFC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,4138
	ctx.r10.s64 = 271187968;
	// ori r10,r10,4352
	ctx.r10.u64 = ctx.r10.u64 | 4352;
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823ffe44
	if (ctx.cr6.eq) goto loc_823FFE44;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823ffe44
	if (ctx.cr6.eq) goto loc_823FFE44;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823ffea8
	if (!ctx.cr6.eq) goto loc_823FFEA8;
loc_823FFE44:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x823f02b8
	ctx.lr = 0x823FFE50;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ffe60
	if (ctx.cr0.eq) goto loc_823FFE60;
	// bl 0x8243b9c0
	ctx.lr = 0x823FFE5C;
	sub_8243B9C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_823FFE60:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x823ffe74
	if (!ctx.cr6.eq) goto loc_823FFE74;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823ffeb0
	goto loc_823FFEB0;
loc_823FFE74:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243bee0
	ctx.lr = 0x823FFE84;
	sub_8243BEE0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x823ffea8
	if (!ctx.cr0.lt) goto loc_823FFEA8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243aba0
	ctx.lr = 0x823FFE94;
	sub_8243ABA0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x823FFEA0;
	sub_823F0350(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x823ffeb0
	goto loc_823FFEB0;
loc_823FFEA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
loc_823FFEB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82405438) {
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
	ctx.lr = 0x82405440;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,11(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 11);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82405460
	if (ctx.cr6.eq) goto loc_82405460;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8240564c
	goto loc_8240564C;
loc_82405460:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x823f02b8
	ctx.lr = 0x82405474;
	sub_823F02B8(ctx, base);
	// mr. r20,r3
	r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne 0x82405488
	if (!ctx.cr0.eq) goto loc_82405488;
loc_8240547C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8240564c
	goto loc_8240564C;
loc_82405488:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x823f02b8
	ctx.lr = 0x8240549C;
	sub_823F02B8(ctx, base);
	// mr. r18,r3
	r18.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bne 0x824054b4
	if (!ctx.cr0.eq) goto loc_824054B4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x823f0350
	ctx.lr = 0x824054B0;
	sub_823F0350(ctx, base);
	// b 0x8240547c
	goto loc_8240547C;
loc_824054B4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r19,0
	r19.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824054e4
	if (ctx.cr6.eq) goto loc_824054E4;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824054e4
	if (ctx.cr6.eq) goto loc_824054E4;
	// stw r19,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r19.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r19,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r19.u32);
loc_824054E4:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r24,r19
	r24.u64 = r19.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r26,r19
	r26.u64 = r19.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r8,104(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// lwz r7,108(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// lwz r6,104(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// rlwinm r8,r8,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// lwz r10,112(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// lwz r5,108(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 108);
	// divwu r23,r8,r6
	r23.u64 = uint32_t(ctx.r6.u32 ? ctx.r8.u32 / ctx.r6.u32 : 0);
	// lwz r9,112(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 112);
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lwz r8,112(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r22,r7,r5
	r22.u64 = uint32_t(ctx.r5.u32 ? ctx.r7.u32 / ctx.r5.u32 : 0);
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r21,r10,r9
	r21.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x82405630
	if (!ctx.cr6.gt) goto loc_82405630;
loc_82405540:
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mr r30,r19
	r30.u64 = r19.u64;
	// mr r27,r19
	r27.u64 = r19.u64;
	// li r25,-1
	r25.s64 = -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8240561c
	if (!ctx.cr6.gt) goto loc_8240561C;
loc_82405558:
	// xor r11,r25,r30
	ctx.r11.u64 = r25.u64 ^ r30.u64;
	// mr r28,r19
	r28.u64 = r19.u64;
	// rlwinm. r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r19
	r29.u64 = r19.u64;
	// beq 0x82405590
	if (ctx.cr0.eq) goto loc_82405590;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// rlwinm r5,r24,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 16) & 0xFFFF;
	// rlwinm r4,r30,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 16) & 0xFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240558C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r30
	r25.u64 = r30.u64;
loc_82405590:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824055e4
	if (!ctx.cr6.gt) goto loc_824055E4;
	// addi r11,r18,-4
	ctx.r11.s64 = r18.s64 + -4;
loc_824055A4:
	// rlwinm r10,r28,20,12,27
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 20) & 0xFFFF0;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r10,r10,r20
	ctx.r10.u64 = ctx.r10.u64 + r20.u64;
	// add r28,r28,r23
	r28.u64 = r28.u64 + r23.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,104(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824055a4
	if (ctx.cr6.lt) goto loc_824055A4;
loc_824055E4:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82405604;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// add r30,r30,r22
	r30.u64 = r30.u64 + r22.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82405558
	if (ctx.cr6.lt) goto loc_82405558;
loc_8240561C:
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// add r24,r24,r21
	r24.u64 = r24.u64 + r21.u64;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82405540
	if (ctx.cr6.lt) goto loc_82405540;
loc_82405630:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x823f0350
	ctx.lr = 0x8240563C;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x823f0350
	ctx.lr = 0x82405648;
	sub_823F0350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240564C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_824114F8) {
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
	// bge cr6,0x824115f8
	if (!ctx.cr6.lt) goto loc_824115F8;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f13,3704(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,19656(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 19656);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,20328(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20328);
	ctx.f12.f64 = double(temp.f32);
loc_82411564:
	// lwz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3);
	// stfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// rlwinm r9,r10,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r8,r5,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
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
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,0(r6)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lbzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
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
	// bdnz 0x82411564
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82411564;
loc_824115F8:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82411614
	if (ctx.cr6.eq) goto loc_82411614;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c73b8
	ctx.lr = 0x82411614;
	sub_825C73B8(ctx, base);
loc_82411614:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82411630
	if (ctx.cr6.eq) goto loc_82411630;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82409820
	ctx.lr = 0x82411630;
	sub_82409820(ctx, base);
loc_82411630:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82416CF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82416CF8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82415480
	ctx.lr = 0x82416D10;
	sub_82415480(ctx, base);
	// addi r11,r3,30
	ctx.r11.s64 = ctx.r3.s64 + 30;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r30
	r31.u64 = ctx.r11.u64 + r30.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// b 0x82416d6c
	goto loc_82416D6C;
loc_82416D24:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
loc_82416D30:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82416d54
	if (ctx.cr0.eq) goto loc_82416D54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82416d30
	if (ctx.cr6.eq) goto loc_82416D30;
loc_82416D54:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x82416dc4
	if (ctx.cr0.lt) goto loc_82416DC4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82416d78
	if (ctx.cr6.eq) goto loc_82416D78;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r31,r4,12
	r31.s64 = ctx.r4.s64 + 12;
loc_82416D6C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82416d24
	if (!ctx.cr6.eq) goto loc_82416D24;
	// b 0x82416dc4
	goto loc_82416DC4;
loc_82416D78:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824154d0
	ctx.lr = 0x82416D84;
	sub_824154D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82416da8
	if (!ctx.cr0.eq) goto loc_82416DA8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r6,r11,23696
	ctx.r6.s64 = ctx.r11.s64 + 23696;
	// li r5,1519
	ctx.r5.s64 = 1519;
	// addi r4,r30,640
	ctx.r4.s64 = r30.s64 + 640;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x8241a718
	ctx.lr = 0x82416DA8;
	sub_8241A718(ctx, base);
loc_82416DA8:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bl 0x82415a50
	ctx.lr = 0x82416DC4;
	sub_82415A50(ctx, base);
loc_82416DC4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,12(r28)
	REX_STORE_U32(r28.u32 + 12, ctx.r11.u32);
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8241C3F0) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241c46c
	if (ctx.cr6.eq) goto loc_8241C46C;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8241c46c
	if (!ctx.cr6.lt) goto loc_8241C46C;
	// stw r4,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r4.u32);
	// subf r7,r11,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,12(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lwz r5,20(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8241C44C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8241c460
	if (!ctx.cr0.lt) goto loc_8241C460;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
loc_8241C460:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x8241c470
	goto loc_8241C470;
loc_8241C46C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241C470:
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

DEFINE_REX_FUNC(sub_82423870) {
	REX_FUNC_PROLOGUE();
	// b 0x82423788
	sub_82423788(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824239B8) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824239ec
	if (ctx.cr6.eq) goto loc_824239EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824239EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824239EC:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x823f0350
	ctx.lr = 0x824239F8;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,144(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 144);
	// bl 0x823f0350
	ctx.lr = 0x82423A04;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,152(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 152);
	// bl 0x823f0350
	ctx.lr = 0x82423A10;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,160(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 160);
	// bl 0x823f0350
	ctx.lr = 0x82423A1C;
	sub_823F0350(ctx, base);
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

DEFINE_REX_FUNC(sub_82427E48) {
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
	ctx.lr = 0x82427E50;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82427f20
	if (ctx.cr6.eq) goto loc_82427F20;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_82427E78:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// b 0x82427ee0
	goto loc_82427EE0;
loc_82427E94:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82427ee8
	if (!ctx.cr6.eq) goto loc_82427EE8;
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r7,52(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwzx r10,r7,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r7,96(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 96);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82427ed0
	if (!ctx.cr6.eq) goto loc_82427ED0;
	// lwz r7,96(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// stw r7,96(r10)
	REX_STORE_U32(ctx.r10.u32 + 96, ctx.r7.u32);
	// lwz r7,100(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// stw r7,100(r10)
	REX_STORE_U32(ctx.r10.u32 + 100, ctx.r7.u32);
loc_82427ED0:
	// lwz r7,52(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r10,52(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
loc_82427EE0:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82427e94
	if (!ctx.cr6.eq) goto loc_82427E94;
loc_82427EE8:
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwzx r10,r7,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82427f14
	if (ctx.cr0.eq) goto loc_82427F14;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82427f18
	if (ctx.cr6.eq) goto loc_82427F18;
loc_82427F14:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82427F18:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82427e78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82427E78;
loc_82427F20:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82427fd4
	if (ctx.cr6.eq) goto loc_82427FD4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82427fd4
	if (ctx.cr6.eq) goto loc_82427FD4;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82427fa4
	if (ctx.cr6.eq) goto loc_82427FA4;
	// mr r31,r26
	r31.u64 = r26.u64;
loc_82427F40:
	// lwz r3,8(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r4,120(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lwzx r30,r11,r10
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lfd f1,32(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r30.u32 + 32);
	// bl 0x82478758
	ctx.lr = 0x82427F68;
	sub_82478758(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82427fe0
	if (ctx.cr6.eq) goto loc_82427FE0;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,96(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 96);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// lwz r10,100(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 100);
	// stw r10,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// blt cr6,0x82427f40
	if (ctx.cr6.lt) goto loc_82427F40;
loc_82427FA4:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r6,120(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82427cf8
	ctx.lr = 0x82427FCC;
	sub_82427CF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82427fd8
	if (ctx.cr0.lt) goto loc_82427FD8;
loc_82427FD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82427FD8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_82427FE0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82427fd8
	goto loc_82427FD8;
}

DEFINE_REX_FUNC(sub_8243F5C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8243f5dc
	if (ctx.cr6.eq) goto loc_8243F5DC;
	// stw r5,48(r4)
	REX_STORE_U32(ctx.r4.u32 + 48, ctx.r5.u32);
loc_8243F5DC:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8243f610
	if (ctx.cr6.eq) goto loc_8243F610;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r4,52
	ctx.r10.s64 = ctx.r4.s64 + 52;
	// addi r9,r7,-2
	ctx.r9.s64 = ctx.r7.s64 + -2;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8243F5F8:
	// lhzu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8243f5f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243F5F8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8243f610
	if (!ctx.cr6.eq) goto loc_8243F610;
	// li r6,1
	ctx.r6.s64 = 1;
loc_8243F610:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// sth r6,22(r4)
	REX_STORE_U16(ctx.r4.u32 + 22, ctx.r6.u16);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82440B90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r11,9(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,10(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 10);
	// mullw. r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82440bc4
	if (ctx.cr0.eq) goto loc_82440BC4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
loc_82440BB8:
	// lbzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82440bb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82440BB8;
loc_82440BC4:
	// lbz r11,10(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 10);
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r8,r11,3,24,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xF8;
	// stb r10,9(r3)
	REX_STORE_U8(ctx.r3.u32 + 9, ctx.r10.u8);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stb r8,11(r3)
	REX_STORE_U8(ctx.r3.u32 + 11, ctx.r8.u8);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82444540) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r11,-30784(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -30784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82444554
	if (ctx.cr6.eq) goto loc_82444554;
	// b 0x82444380
	sub_82444380(ctx, base);
	return;
loc_82444554:
	// b 0x82443c58
	sub_82443C58(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824445B8) {
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
	// b 0x824445e4
	goto loc_824445E4;
loc_824445D0:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x823f0350
	ctx.lr = 0x824445E4;
	sub_823F0350(ctx, base);
loc_824445E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824445d0
	if (!ctx.cr6.eq) goto loc_824445D0;
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

DEFINE_REX_FUNC(sub_82444B28) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r5,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// addi r11,r11,-8092
	ctx.r11.s64 = ctx.r11.s64 + -8092;
	// stw r6,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r7,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824453A8) {
	REX_FUNC_PROLOGUE();
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
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824461C0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r5,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r6,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// addi r10,r10,-7960
	ctx.r10.s64 = ctx.r10.s64 + -7960;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r7,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// stw r8,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// stw r9,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824474C0) {
	REX_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r5.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r6,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r6.u32);
	// addi r6,r3,-7900
	ctx.r6.s64 = ctx.r3.s64 + -7900;
	// stw r4,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r4.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r5,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// stw r7,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r7.u32);
	// stw r8,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r8.u32);
	// ld r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r11,48(r10)
	REX_STORE_U64(ctx.r10.u32 + 48, ctx.r11.u64);
	// ld r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r11,56(r10)
	REX_STORE_U64(ctx.r10.u32 + 56, ctx.r11.u64);
	// ld r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 16);
	// std r11,64(r10)
	REX_STORE_U64(ctx.r10.u32 + 64, ctx.r11.u64);
	// ld r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 24);
	// std r11,72(r10)
	REX_STORE_U64(ctx.r10.u32 + 72, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824482B0) {
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
	ctx.lr = 0x824482CC;
	sub_82448598(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x82444608
	ctx.lr = 0x824482DC;
	sub_82444608(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82448318
	if (ctx.cr0.eq) goto loc_82448318;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,26
	ctx.r9.s64 = 26;
	// addi r10,r10,-7840
	ctx.r10.s64 = ctx.r10.s64 + -7840;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// b 0x8244831c
	goto loc_8244831C;
loc_82448318:
	// li r31,0
	r31.s64 = 0;
loc_8244831C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8244832c
	if (!ctx.cr6.eq) goto loc_8244832C;
loc_82448324:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824483b4
	goto loc_824483B4;
loc_8244832C:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82448358
	if (ctx.cr6.eq) goto loc_82448358;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244834C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82448324
	if (ctx.cr0.eq) goto loc_82448324;
loc_82448358:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82448384
	if (ctx.cr6.eq) goto loc_82448384;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82448378;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82448324
	if (ctx.cr0.eq) goto loc_82448324;
loc_82448384:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824483b0
	if (ctx.cr6.eq) goto loc_824483B0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824483A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82448324
	if (ctx.cr0.eq) goto loc_82448324;
loc_824483B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824483B4:
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

DEFINE_REX_FUNC(sub_82453DB8) {
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
	ctx.lr = 0x82453DC0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,336
	ctx.r3.s64 = 336;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x823f02b8
	ctx.lr = 0x82453DE4;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82453e20
	if (ctx.cr0.eq) goto loc_82453E20;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,312(r3)
	REX_STORE_U32(ctx.r3.u32 + 312, ctx.r11.u32);
	// stw r11,316(r3)
	REX_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r10,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// b 0x82453e24
	goto loc_82453E24;
loc_82453E20:
	// li r31,0
	r31.s64 = 0;
loc_82453E24:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82453e38
	if (!ctx.cr6.eq) goto loc_82453E38;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x82453ea4
	goto loc_82453EA4;
loc_82453E38:
	// stw r28,80(r31)
	REX_STORE_U32(r31.u32 + 80, r28.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82415dc8
	ctx.lr = 0x82453E4C;
	sub_82415DC8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82453e90
	if (ctx.cr0.lt) goto loc_82453E90;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82453a28
	ctx.lr = 0x82453E70;
	sub_82453A28(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82453e88
	if (ctx.cr0.lt) goto loc_82453E88;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8244a670
	ctx.lr = 0x82453E84;
	sub_8244A670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82453E88:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82418e98
	ctx.lr = 0x82453E90;
	sub_82418E98(ctx, base);
loc_82453E90:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8244b648
	ctx.lr = 0x82453E98;
	sub_8244B648(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x82453EA4;
	sub_823F0350(ctx, base);
loc_82453EA4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82458470) {
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
	// addi r4,r10,14672
	ctx.r4.s64 = ctx.r10.s64 + 14672;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x824555b8
	ctx.lr = 0x82458494;
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

DEFINE_REX_FUNC(sub_82458998) {
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
	// addi r4,r11,15340
	ctx.r4.s64 = ctx.r11.s64 + 15340;
	// bl 0x824555b8
	ctx.lr = 0x824589B4;
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

DEFINE_REX_FUNC(sub_8245A1B8) {
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
	// addi r4,r11,16152
	ctx.r4.s64 = ctx.r11.s64 + 16152;
	// bl 0x824555b8
	ctx.lr = 0x8245A1D0;
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

DEFINE_REX_FUNC(sub_8245A7D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8245A7E0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82455688
	ctx.lr = 0x8245A7F4;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245a814
	if (ctx.cr0.lt) goto loc_8245A814;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r4,r11,16780
	ctx.r4.s64 = ctx.r11.s64 + 16780;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245A814;
	sub_824555B8(ctx, base);
loc_8245A814:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8245E618) {
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
	// addi r5,r11,18532
	ctx.r5.s64 = ctx.r11.s64 + 18532;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8245dfc0
	ctx.lr = 0x8245E644;
	sub_8245DFC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82474780
	ctx.lr = 0x8245E64C;
	sub_82474780(ctx, base);
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

DEFINE_REX_FUNC(sub_8245ED18) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r11,18544
	ctx.r5.s64 = ctx.r11.s64 + 18544;
	// addi r4,r10,18532
	ctx.r4.s64 = ctx.r10.s64 + 18532;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8245e0f0
	ctx.lr = 0x8245ED40;
	sub_8245E0F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245ed50
	if (ctx.cr0.lt) goto loc_8245ED50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473bc0
	ctx.lr = 0x8245ED50;
	sub_82473BC0(ctx, base);
loc_8245ED50:
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

DEFINE_REX_FUNC(sub_82462A68) {
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
	ctx.lr = 0x82462A70;
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
	// addi r30,r11,23480
	r30.s64 = ctx.r11.s64 + 23480;
	// li r31,0
	r31.s64 = 0;
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// li r26,1
	r26.s64 = 1;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r5,r30,-96
	ctx.r5.s64 = r30.s64 + -96;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// clrlwi r29,r10,12
	r29.u64 = ctx.r10.u32 & 0xFFFFF;
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r26,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r26.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8245f158
	ctx.lr = 0x82462AD0;
	sub_8245F158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82462b8c
	if (!ctx.cr0.eq) goto loc_82462B8C;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x82462AE0;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82462af0
	if (ctx.cr0.eq) goto loc_82462AF0;
	// bl 0x824773d0
	ctx.lr = 0x82462AEC;
	sub_824773D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82462AF0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82462b04
	if (!ctx.cr6.eq) goto loc_82462B04;
loc_82462AF8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82462f14
	goto loc_82462F14;
loc_82462B04:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r11,931
	ctx.r11.s64 = 931;
	// rlwimi r4,r11,21,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x82462be8
	goto loc_82462BE8;
loc_82462B14:
	// lwz r4,260(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 260);
	// bl 0x82477420
	ctx.lr = 0x82462B1C;
	sub_82477420(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x82462b3c
	if (!ctx.cr0.lt) goto loc_82462B3C;
loc_82462B24:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82462B28:
	// bl 0x82130e88
	ctx.lr = 0x82462B2C;
	sub_82130E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477b20
	ctx.lr = 0x82462B34;
	sub_82477B20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82462f14
	goto loc_82462F14;
loc_82462B3C:
	// lwz r11,260(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 260);
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x826a1e70
	ctx.lr = 0x82462B54;
	sub_826A1E70(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x826a1e70
	ctx.lr = 0x82462B64;
	sub_826A1E70(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_82462B68:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82462B78;
	sub_826A1E70(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,260(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 260);
	// bl 0x82477e80
	ctx.lr = 0x82462B84;
	sub_82477E80(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82462b24
	goto loc_82462B24;
loc_82462B8C:
	// addi r5,r30,-192
	ctx.r5.s64 = r30.s64 + -192;
	// lwz r4,260(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 260);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8245f158
	ctx.lr = 0x82462BB4;
	sub_8245F158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82462c0c
	if (!ctx.cr0.eq) goto loc_82462C0C;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x82462BC4;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82462bd4
	if (ctx.cr0.eq) goto loc_82462BD4;
	// bl 0x824773d0
	ctx.lr = 0x82462BD0;
	sub_824773D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82462BD4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82462af8
	if (ctx.cr6.eq) goto loc_82462AF8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r11,1863
	ctx.r11.s64 = 1863;
	// rlwimi r4,r11,20,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
loc_82462BE8:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477b60
	ctx.lr = 0x82462BFC;
	sub_82477B60(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// blt 0x82462b28
	if (ctx.cr0.lt) goto loc_82462B28;
	// b 0x82462b14
	goto loc_82462B14;
loc_82462C0C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,260(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 260);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8245f158
	ctx.lr = 0x82462C34;
	sub_8245F158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82462f14
	if (!ctx.cr0.eq) goto loc_82462F14;
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// lwz r27,20(r28)
	r27.u64 = REX_LOAD_U32(r28.u32 + 20);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// lwz r7,60(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82462ca8
	if (!ctx.cr6.eq) goto loc_82462CA8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82462da8
	if (ctx.cr6.eq) goto loc_82462DA8;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r29
	r30.u64 = r29.u64;
	// bl 0x826a22f8
	ctx.lr = 0x82462C78;
	sub_826A22F8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_82462C7C:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// lwz r10,56(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82462c7c
	if (!ctx.cr0.eq) goto loc_82462C7C;
	// b 0x82462da8
	goto loc_82462DA8;
loc_82462CA8:
	// lwz r6,192(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r27.u32);
	// lwz r5,60(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 60);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82462d0c
	if (!ctx.cr6.eq) goto loc_82462D0C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82462da8
	if (ctx.cr6.eq) goto loc_82462DA8;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r29
	r30.u64 = r29.u64;
	// bl 0x826a22f8
	ctx.lr = 0x82462CDC;
	sub_826A22F8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_82462CE0:
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// lwz r10,56(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82462ce0
	if (!ctx.cr0.eq) goto loc_82462CE0;
	// b 0x82462da8
	goto loc_82462DA8;
loc_82462D0C:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(r29.u32, 1, ctx.xer);
	// bne cr6,0x82462f10
	if (!ctx.cr6.eq) goto loc_82462F10;
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// lis r9,4112
	ctx.r9.s64 = 269484032;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82462d5c
	if (ctx.cr6.eq) goto loc_82462D5C;
	// lwz r10,24(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r3,r11,0,0,11
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82462d5c
	if (!ctx.cr6.eq) goto loc_82462D5C;
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82462d5c
	if (!ctx.cr6.eq) goto loc_82462D5C;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82462d5c
	if (!ctx.cr6.eq) goto loc_82462D5C;
	// stw r6,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// b 0x82462d9c
	goto loc_82462D9C;
loc_82462D5C:
	// lwz r11,72(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82462f10
	if (ctx.cr6.eq) goto loc_82462F10;
	// lwz r10,24(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r11,0,0,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82462f10
	if (!ctx.cr6.eq) goto loc_82462F10;
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82462f10
	if (!ctx.cr6.eq) goto loc_82462F10;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82462f10
	if (!ctx.cr6.eq) goto loc_82462F10;
	// stw r4,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
loc_82462D9C:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_82462DA8:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r30,r26
	r30.u64 = r26.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82462e7c
	if (ctx.cr6.eq) goto loc_82462E7C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r8,16(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 16);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lfd f12,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// lfd f13,3728(r7)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r7.u32 + 3728);
loc_82462DD4:
	// lwz r11,-16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm. r7,r7,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82462e00
	if (!ctx.cr0.eq) goto loc_82462E00;
	// mr r30,r31
	r30.u64 = r31.u64;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_82462E00:
	// lfd f0,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82462e10
	if (ctx.cr6.eq) goto loc_82462E10;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_82462E10:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x82462e1c
	if (ctx.cr6.eq) goto loc_82462E1C;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_82462E1C:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm. r7,r7,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82462e48
	if (!ctx.cr0.eq) goto loc_82462E48;
	// mr r30,r31
	r30.u64 = r31.u64;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_82462E48:
	// lfd f0,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x82462e58
	if (ctx.cr6.eq) goto loc_82462E58;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_82462E58:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82462e64
	if (ctx.cr6.eq) goto loc_82462E64;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_82462E64:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82462dd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82462DD4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x82462e7c
	if (!ctx.cr6.eq) goto loc_82462E7C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82462f10
	if (ctx.cr6.eq) goto loc_82462F10;
loc_82462E7C:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x82462E84;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82462e94
	if (ctx.cr0.eq) goto loc_82462E94;
	// bl 0x824773d0
	ctx.lr = 0x82462E90;
	sub_824773D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82462E94:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82462af8
	if (ctx.cr6.eq) goto loc_82462AF8;
	// clrlwi r11,r29,12
	ctx.r11.u64 = r29.u32 & 0xFFFFF;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// oris r4,r11,29792
	ctx.r4.u64 = ctx.r11.u64 | 1952448512;
	// bne cr6,0x82462eb0
	if (!ctx.cr6.eq) goto loc_82462EB0;
	// oris r4,r11,29808
	ctx.r4.u64 = ctx.r11.u64 | 1953497088;
loc_82462EB0:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477b60
	ctx.lr = 0x82462EC4;
	sub_82477B60(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// blt 0x82462b28
	if (ctx.cr0.lt) goto loc_82462B28;
	// lwz r4,260(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 260);
	// bl 0x82477420
	ctx.lr = 0x82462ED8;
	sub_82477420(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82462b24
	if (ctx.cr0.lt) goto loc_82462B24;
	// lwz r11,260(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 260);
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x826a1e70
	ctx.lr = 0x82462EF8;
	sub_826A1E70(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x826a1e70
	ctx.lr = 0x82462F08;
	sub_826A1E70(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// b 0x82462b68
	goto loc_82462B68;
loc_82462F10:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82462F14:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824821F0) {
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
	ctx.lr = 0x824821F8;
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r19,0
	r19.s64 = 0;
	// bl 0x82481098
	ctx.lr = 0x8248220C;
	sub_82481098(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r28,0
	r28.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8248253c
	if (!ctx.cr6.gt) goto loc_8248253C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r27,0
	r27.s64 = 0;
	// lfd f31,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_8248222C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r30,r27,r11
	r30.u64 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824822a8
	if (ctx.cr0.eq) goto loc_824822A8;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 136);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82478758
	ctx.lr = 0x82482268;
	sub_82478758(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// beq cr6,0x8248255c
	if (ctx.cr6.eq) goto loc_8248255C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r9,48(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 48);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// b 0x824822ac
	goto loc_824822AC;
loc_824822A8:
	// stw r29,48(r30)
	REX_STORE_U32(r30.u32 + 48, r29.u32);
loc_824822AC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8248222c
	if (ctx.cr6.lt) goto loc_8248222C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8248253c
	if (ctx.cr6.eq) goto loc_8248253C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82481920
	ctx.lr = 0x824822D0;
	sub_82481920(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x824822DC;
	sub_823F02B8(ctx, base);
	// mr. r19,r3
	r19.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq 0x8248255c
	if (ctx.cr0.eq) goto loc_8248255C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r21,0
	r21.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82482340
	if (!ctx.cr6.gt) goto loc_82482340;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r19,-4
	ctx.r9.s64 = r19.s64 + -4;
loc_82482300:
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r8,r10,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm. r8,r8,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8248232c
	if (ctx.cr0.eq) goto loc_8248232C;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
loc_8248232C:
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82482300
	if (ctx.cr6.lt) goto loc_82482300;
loc_82482340:
	// lis r11,-32184
	ctx.r11.s64 = -2109210624;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r3,r11,-29080
	ctx.r3.s64 = ctx.r11.s64 + -29080;
	// bl 0x824793b0
	ctx.lr = 0x82482358;
	sub_824793B0(ctx, base);
	// li r22,0
	r22.s64 = 0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x8248253c
	if (ctx.cr6.eq) goto loc_8248253C;
	// li r20,-1
	r20.s64 = -1;
loc_82482368:
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r22,1
	ctx.r11.s64 = r22.s64 + 1;
	// add r23,r10,r19
	r23.u64 = ctx.r10.u64 + r19.u64;
	// li r27,1
	r27.s64 = 1;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// lwzx r10,r10,r19
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r19.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// bge cr6,0x824823e4
	if (!ctx.cr6.lt) goto loc_824823E4;
	// lwz r6,4(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addi r10,r23,4
	ctx.r10.s64 = r23.s64 + 4;
loc_82482398:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r5,4(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x824823e4
	if (!ctx.cr6.eq) goto loc_824823E4;
	// lwz r5,8(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r4,8(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x824823e4
	if (!ctx.cr6.eq) goto loc_824823E4;
	// lwz r5,12(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824823e4
	if (!ctx.cr6.eq) goto loc_824823E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// blt cr6,0x82482398
	if (ctx.cr6.lt) goto loc_82482398;
loc_824823E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// rlwimi r4,r11,28,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824787f8
	ctx.lr = 0x82482400;
	sub_824787F8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8248255c
	if (ctx.cr6.eq) goto loc_8248255C;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// lwzx r25,r10,r11
	r25.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// beq cr6,0x82482530
	if (ctx.cr6.eq) goto loc_82482530;
	// mr r26,r23
	r26.u64 = r23.u64;
loc_82482424:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r28,48(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// b 0x824824d0
	goto loc_824824D0;
loc_82482440:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8248246c
	if (ctx.cr6.eq) goto loc_8248246C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82477420
	ctx.lr = 0x82482464;
	sub_82477420(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x82482540
	if (ctx.cr0.lt) goto loc_82482540;
loc_8248246C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824824d8
	if (!ctx.cr6.eq) goto loc_824824D8;
	// lwz r8,12(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824824b4
	if (ctx.cr6.eq) goto loc_824824B4;
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82482498:
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r28,r7
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x824824b4
	if (ctx.cr6.eq) goto loc_824824B4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82482498
	if (ctx.cr6.lt) goto loc_82482498;
loc_824824B4:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r28,r10,r11
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
loc_824824D0:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82482440
	if (!ctx.cr6.eq) goto loc_82482440;
loc_824824D8:
	// lwz r11,60(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824824f4
	if (!ctx.cr6.eq) goto loc_824824F4;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r24,r27
	ctx.cr6.compare<uint32_t>(r24.u32, r27.u32, ctx.xer);
	// blt cr6,0x82482424
	if (ctx.cr6.lt) goto loc_82482424;
loc_824824F4:
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r23,-4
	ctx.r10.s64 = r23.s64 + -4;
loc_82482500:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,8(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 8);
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r9,48(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// stwx r9,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r8,16(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 16);
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82482500
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82482500;
loc_82482530:
	// add r22,r27,r22
	r22.u64 = r27.u64 + r22.u64;
	// cmplw cr6,r22,r21
	ctx.cr6.compare<uint32_t>(r22.u32, r21.u32, ctx.xer);
	// blt cr6,0x82482368
	if (ctx.cr6.lt) goto loc_82482368;
loc_8248253C:
	// li r29,0
	r29.s64 = 0;
loc_82482540:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x823f0350
	ctx.lr = 0x8248254C;
	sub_823F0350(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x826a1ce4
	return;
loc_8248255C:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x82482540
	goto loc_82482540;
}

DEFINE_REX_FUNC(sub_824A8AD8) {
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
	ctx.lr = 0x824A8AE0;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,260(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r17,0
	r17.s64 = 0;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r14,r17
	r14.u64 = r17.u64;
	// stw r17,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r17.u32);
	// mr r15,r17
	r15.u64 = r17.u64;
	// stw r17,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r17.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824a8b18
	if (!ctx.cr0.eq) goto loc_824A8B18;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824a99b4
	goto loc_824A99B4;
loc_824A8B18:
	// lwz r10,260(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 260);
	// lis r7,20480
	ctx.r7.s64 = 1342177280;
	// lis r9,20512
	ctx.r9.s64 = 1344274432;
	// lis r8,28800
	ctx.r8.s64 = 1887436800;
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r16,r6,12
	r16.u64 = ctx.r6.u32 & 0xFFFFF;
	// rlwinm r6,r6,0,0,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFF00000;
	// divwu r18,r10,r16
	r18.u64 = uint32_t(r16.u32 ? ctx.r10.u32 / r16.u32 : 0);
	// twllei r16,0
	if (r16.s32 == 0 || r16.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x824a8b5c
	if (ctx.cr6.eq) goto loc_824A8B5C;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824a8b5c
	if (ctx.cr6.eq) goto loc_824A8B5C;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// bne cr6,0x824a8b60
	if (!ctx.cr6.eq) goto loc_824A8B60;
loc_824A8B5C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_824A8B60:
	// lis r7,24656
	ctx.r7.s64 = 1615855616;
	// mr r28,r17
	r28.u64 = r17.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x824a9968
	if (ctx.cr6.eq) goto loc_824A9968;
	// lis r7,24736
	ctx.r7.s64 = 1621098496;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x824a9968
	if (ctx.cr6.eq) goto loc_824A9968;
	// lis r7,24816
	ctx.r7.s64 = 1626341376;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x824a9968
	if (ctx.cr6.eq) goto loc_824A9968;
	// lis r7,4352
	ctx.r7.s64 = 285212672;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x824a9968
	if (ctx.cr6.eq) goto loc_824A9968;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x824a9544
	if (!ctx.cr6.eq) goto loc_824A9544;
	// mr r31,r17
	r31.u64 = r17.u64;
	// li r19,-1
	r19.s64 = -1;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x824a8c44
	if (ctx.cr6.eq) goto loc_824A8C44;
	// mr r30,r17
	r30.u64 = r17.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
loc_824A8BB4:
	// stw r19,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r19.u32);
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// stw r19,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, r19.u32);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// stw r19,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, r19.u32);
	// stw r19,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, r19.u32);
	// beq cr6,0x824a8c30
	if (ctx.cr6.eq) goto loc_824A8C30;
	// lwz r10,260(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 260);
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 20);
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// mtctr r16
	ctx.ctr.u64 = r16.u64;
	// lwz r6,16(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
loc_824A8BE8:
	// add r3,r30,r8
	ctx.r3.u64 = r30.u64 + ctx.r8.u64;
	// lwzx r29,r6,r11
	r29.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwz r27,8(r10)
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r26,r1,176
	r26.s64 = ctx.r1.s64 + 176;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r3,r3,r27
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + r27.u32);
	// lwzx r29,r29,r9
	r29.u64 = REX_LOAD_U32(r29.u32 + ctx.r9.u32);
	// rlwinm r27,r3,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwzx r29,r27,r9
	r29.u64 = REX_LOAD_U32(r27.u32 + ctx.r9.u32);
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,16(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 16);
	// stwx r29,r3,r26
	REX_STORE_U32(ctx.r3.u32 + r26.u32, r29.u32);
	// bdnz 0x824a8be8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824A8BE8;
loc_824A8C30:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// add r30,r30,r16
	r30.u64 = r30.u64 + r16.u64;
	// cmplw cr6,r31,r18
	ctx.cr6.compare<uint32_t>(r31.u32, r18.u32, ctx.xer);
	// blt cr6,0x824a8bb4
	if (ctx.cr6.lt) goto loc_824A8BB4;
loc_824A8C44:
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,20(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 20);
	// lwz r9,16(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824a8e28
	if (ctx.cr0.eq) goto loc_824A8E28;
	// lwz r11,260(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 260);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,0(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,112(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 112);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r8,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r31,r11,r10
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r4,108(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 108);
	// bctrl 
	ctx.lr = 0x824A8CB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// beq cr6,0x824a8ea0
	if (ctx.cr6.eq) goto loc_824A8EA0;
	// cmplwi cr6,r3,11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 11, ctx.xer);
	// bne cr6,0x824a8d14
	if (!ctx.cr6.eq) goto loc_824A8D14;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// addi r9,r10,-24168
	ctx.r9.s64 = ctx.r10.s64 + -24168;
loc_824A8CD4:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x824a8cf4
	if (ctx.cr6.eq) goto loc_824A8CF4;
	// addi r8,r9,64
	ctx.r8.s64 = ctx.r9.s64 + 64;
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824a8d0c
	if (!ctx.cr6.eq) goto loc_824A8D0C;
loc_824A8CF4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x824a8cd4
	if (ctx.cr6.lt) goto loc_824A8CD4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_824A8D04:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// b 0x824a8d6c
	goto loc_824A8D6C;
loc_824A8D0C:
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// b 0x824a8d04
	goto loc_824A8D04;
loc_824A8D14:
	// cmplwi cr6,r30,13
	ctx.cr6.compare<uint32_t>(r30.u32, 13, ctx.xer);
	// bne cr6,0x824a8d78
	if (!ctx.cr6.eq) goto loc_824A8D78;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// addi r7,r11,-24168
	ctx.r7.s64 = ctx.r11.s64 + -24168;
loc_824A8D2C:
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
loc_824A8D34:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x824a8d54
	if (ctx.cr6.eq) goto loc_824A8D54;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x824a8e18
	if (!ctx.cr6.eq) goto loc_824A8E18;
loc_824A8D54:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x824a8d34
	if (ctx.cr6.lt) goto loc_824A8D34;
	// li r6,1
	ctx.r6.s64 = 1;
loc_824A8D68:
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
loc_824A8D6C:
	// rlwinm r28,r11,27,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x824a8d84
	if (!ctx.cr6.eq) goto loc_824A8D84;
loc_824A8D78:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// rlwinm. r11,r11,0,11,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824a8da0
	if (ctx.cr0.eq) goto loc_824A8DA0;
loc_824A8D84:
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824a8938
	ctx.lr = 0x824A8D94;
	sub_824A8938(ctx, base);
	// lwz r14,80(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824a9980
	if (ctx.cr0.lt) goto loc_824A9980;
loc_824A8DA0:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// std r17,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r17.u64);
	// std r17,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r17.u64);
	// bl 0x824a8650
	ctx.lr = 0x824A8DB8;
	sub_824A8650(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824a8dd4
	if (!ctx.cr0.eq) goto loc_824A8DD4;
	// cmplwi cr6,r30,13
	ctx.cr6.compare<uint32_t>(r30.u32, 13, ctx.xer);
	// bne cr6,0x824a8ea0
	if (!ctx.cr6.eq) goto loc_824A8EA0;
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a8ea0
	if (!ctx.cr6.eq) goto loc_824A8EA0;
loc_824A8DD4:
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82467e50
	ctx.lr = 0x824A8DE8;
	sub_82467E50(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824a9980
	if (ctx.cr0.lt) goto loc_824A9980;
	// lwz r11,260(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 260);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// stw r17,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r17.u32);
	// beq cr6,0x824a99b0
	if (ctx.cr6.eq) goto loc_824A99B0;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824785e8
	ctx.lr = 0x824A8E0C;
	sub_824785E8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824a9980
	if (ctx.cr0.lt) goto loc_824A9980;
	// b 0x824a99b0
	goto loc_824A99B0;
loc_824A8E18:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r8,16
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16, ctx.xer);
	// blt cr6,0x824a8d2c
	if (ctx.cr6.lt) goto loc_824A8D2C;
	// b 0x824a8d68
	goto loc_824A8D68;
loc_824A8E28:
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x824a8ea0
	if (ctx.cr6.eq) goto loc_824A8EA0;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// addi r5,r11,-24168
	ctx.r5.s64 = ctx.r11.s64 + -24168;
loc_824A8E40:
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
loc_824A8E44:
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_824A8E4C:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x824a8e6c
	if (ctx.cr6.eq) goto loc_824A8E6C;
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r4,r5
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x824a8e90
	if (!ctx.cr6.eq) goto loc_824A8E90;
loc_824A8E6C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x824a8e4c
	if (ctx.cr6.lt) goto loc_824A8E4C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// cmplw cr6,r6,r18
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r18.u32, ctx.xer);
	// blt cr6,0x824a8e40
	if (ctx.cr6.lt) goto loc_824A8E40;
	// b 0x824a8ea0
	goto loc_824A8EA0;
loc_824A8E90:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r8,32
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 32, ctx.xer);
	// blt cr6,0x824a8e44
	if (ctx.cr6.lt) goto loc_824A8E44;
	// li r28,1
	r28.s64 = 1;
loc_824A8EA0:
	// lwz r8,260(r21)
	ctx.r8.u64 = REX_LOAD_U32(r21.u32 + 260);
	// lis r10,4304
	ctx.r10.s64 = 282066944;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824a8ec4
	if (ctx.cr6.eq) goto loc_824A8EC4;
	// lis r10,4320
	ctx.r10.s64 = 283115520;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824a907c
	if (!ctx.cr6.eq) goto loc_824A907C;
loc_824A8EC4:
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824a907c
	if (ctx.cr6.eq) goto loc_824A907C;
	// lwz r6,20(r21)
	ctx.r6.u64 = REX_LOAD_U32(r21.u32 + 20);
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_824A8EE0:
	// lwz r5,8(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwzx r5,r5,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r6
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// lwz r5,60(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// rlwinm. r5,r5,0,11,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x1F0000;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x824a8f00
	if (ctx.cr0.eq) goto loc_824A8F00;
	// li r7,1
	ctx.r7.s64 = 1;
loc_824A8F00:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824a8ee0
	if (ctx.cr6.lt) goto loc_824A8EE0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x824a907c
	if (ctx.cr6.eq) goto loc_824A907C;
	// lwz r7,8(r21)
	ctx.r7.u64 = REX_LOAD_U32(r21.u32 + 8);
	// mr r29,r17
	r29.u64 = r17.u64;
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824a8f64
	if (ctx.cr6.eq) goto loc_824A8F64;
	// lwz r8,136(r21)
	ctx.r8.u64 = REX_LOAD_U32(r21.u32 + 136);
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
loc_824A8F34:
	// lwzx r11,r6,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x824a8f54
	if (!ctx.cr6.eq) goto loc_824A8F54;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// blt cr6,0x824a8f54
	if (ctx.cr6.lt) goto loc_824A8F54;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
loc_824A8F54:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x824a8f34
	if (ctx.cr6.lt) goto loc_824A8F34;
loc_824A8F64:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r17
	r31.u64 = r17.u64;
	// addi r30,r1,240
	r30.s64 = ctx.r1.s64 + 240;
	// lfd f31,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_824A8F74:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,136(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 136);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82478758
	ctx.lr = 0x824A8F8C;
	sub_82478758(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824a8fd0
	if (ctx.cr6.eq) goto loc_824A8FD0;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// blt cr6,0x824a8f74
	if (ctx.cr6.lt) goto loc_824A8F74;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x824A8FB0;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a8fc4
	if (ctx.cr0.eq) goto loc_824A8FC4;
	// bl 0x824773d0
	ctx.lr = 0x824A8FBC;
	sub_824773D0(ctx, base);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// b 0x824a8fc8
	goto loc_824A8FC8;
loc_824A8FC4:
	// mr r15,r17
	r15.u64 = r17.u64;
loc_824A8FC8:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// bne cr6,0x824a8fdc
	if (!ctx.cr6.eq) goto loc_824A8FDC;
loc_824A8FD0:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x824a9980
	goto loc_824A9980;
loc_824A8FDC:
	// lwz r11,260(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 260);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwimi r4,r10,28,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// bl 0x82477b60
	ctx.lr = 0x824A9000;
	sub_82477B60(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824a9980
	if (ctx.cr0.lt) goto loc_824A9980;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r4,260(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 260);
	// bl 0x82477420
	ctx.lr = 0x824A9014;
	sub_82477420(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824a9980
	if (ctx.cr0.lt) goto loc_824A9980;
	// lwz r11,260(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 260);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r3,16(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 16);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x824A9034;
	sub_826A1E70(ctx, base);
	// lwz r11,260(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 260);
	// lwz r3,8(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x824A904C;
	sub_826A1E70(ctx, base);
	// lwz r11,260(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 260);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x824A9064;
	sub_826A1E70(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824785e8
	ctx.lr = 0x824A9070;
	sub_824785E8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824a9980
	if (ctx.cr0.lt) goto loc_824A9980;
	// mr r15,r17
	r15.u64 = r17.u64;
loc_824A907C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x824a952c
	if (ctx.cr6.eq) goto loc_824A952C;
	// lwz r11,108(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 108);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824a952c
	if (ctx.cr0.eq) goto loc_824A952C;
	// mr r20,r17
	r20.u64 = r17.u64;
	// mr r22,r17
	r22.u64 = r17.u64;
	// cmplwi cr6,r16,4
	ctx.cr6.compare<uint32_t>(r16.u32, 4, ctx.xer);
	// bne cr6,0x824a9330
	if (!ctx.cr6.eq) goto loc_824A9330;
	// li r27,1
	r27.s64 = 1;
	// mr r26,r17
	r26.u64 = r17.u64;
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// li r31,-1
	r31.s64 = -1;
loc_824A90B0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x824a9130
	if (ctx.cr6.eq) goto loc_824A9130;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r27,r17
	r27.u64 = r17.u64;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// std r17,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r17.u64);
	// std r17,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r17.u64);
	// stw r19,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r19.u32);
	// stw r19,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r19.u32);
	// stw r19,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r19.u32);
	// stw r19,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, r19.u32);
	// stw r31,-16(r30)
	REX_STORE_U32(r30.u32 + -16, r31.u32);
	// stw r17,0(r30)
	REX_STORE_U32(r30.u32 + 0, r17.u32);
	// beq cr6,0x824a91c8
	if (ctx.cr6.eq) goto loc_824A91C8;
	// addi r28,r1,176
	r28.s64 = ctx.r1.s64 + 176;
	// mr r29,r18
	r29.u64 = r18.u64;
loc_824A90F4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a8650
	ctx.lr = 0x824A9100;
	sub_824A8650(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824a910c
	if (!ctx.cr0.eq) goto loc_824A910C;
	// li r27,1
	r27.s64 = 1;
loc_824A910C:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// bne 0x824a90f4
	if (!ctx.cr0.eq) goto loc_824A90F4;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x824a91c8
	if (ctx.cr6.eq) goto loc_824A91C8;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(r26.u32, 4, ctx.xer);
	// blt cr6,0x824a90b0
	if (ctx.cr6.lt) goto loc_824A90B0;
loc_824A9130:
	// li r25,1
	r25.s64 = 1;
	// mr r23,r17
	r23.u64 = r17.u64;
	// addi r29,r1,112
	r29.s64 = ctx.r1.s64 + 112;
loc_824A913C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x824a92b4
	if (ctx.cr6.eq) goto loc_824A92B4;
	// mr r24,r17
	r24.u64 = r17.u64;
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
loc_824A914C:
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(r24.u32, r23.u32, ctx.xer);
	// beq cr6,0x824a928c
	if (ctx.cr6.eq) goto loc_824A928C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r25,r17
	r25.u64 = r17.u64;
	// mr r26,r17
	r26.u64 = r17.u64;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// std r17,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r17.u64);
	// std r17,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r17.u64);
	// stw r19,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r19.u32);
	// stw r19,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r19.u32);
	// stw r19,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r19.u32);
	// stw r19,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, r19.u32);
	// stw r31,-16(r29)
	REX_STORE_U32(r29.u32 + -16, r31.u32);
	// stw r31,-16(r30)
	REX_STORE_U32(r30.u32 + -16, r31.u32);
	// stw r17,0(r29)
	REX_STORE_U32(r29.u32 + 0, r17.u32);
	// stw r17,0(r30)
	REX_STORE_U32(r30.u32 + 0, r17.u32);
	// beq cr6,0x824a92a0
	if (ctx.cr6.eq) goto loc_824A92A0;
	// addi r28,r1,176
	r28.s64 = ctx.r1.s64 + 176;
	// mr r27,r18
	r27.u64 = r18.u64;
loc_824A919C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a8650
	ctx.lr = 0x824A91A8;
	sub_824A8650(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a8650
	ctx.lr = 0x824A91B8;
	sub_824A8650(ctx, base);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bne cr6,0x824a9204
	if (!ctx.cr6.eq) goto loc_824A9204;
	// li r26,1
	r26.s64 = 1;
	// b 0x824a920c
	goto loc_824A920C;
loc_824A91C8:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82467e50
	ctx.lr = 0x824A91DC;
	sub_82467E50(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824a9980
	if (ctx.cr0.lt) goto loc_824A9980;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82467e50
	ctx.lr = 0x824A91F8;
	sub_82467E50(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824a9980
	if (ctx.cr0.lt) goto loc_824A9980;
	// b 0x824a9508
	goto loc_824A9508;
loc_824A9204:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x824a9210
	if (!ctx.cr6.eq) goto loc_824A9210;
loc_824A920C:
	// li r25,1
	r25.s64 = 1;
loc_824A9210:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// bne 0x824a919c
	if (!ctx.cr0.eq) goto loc_824A919C;
	// lwz r14,80(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x824a92a0
	if (ctx.cr6.eq) goto loc_824A92A0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x824a928c
	if (!ctx.cr6.eq) goto loc_824A928C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// li r22,1
	r22.s64 = 1;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r5,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r19,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r19.u32);
	// stw r19,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, r19.u32);
	// stw r19,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, r19.u32);
	// stw r19,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, r19.u32);
	// stw r19,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, r19.u32);
	// stw r19,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, r19.u32);
	// stw r19,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, r19.u32);
	// stw r19,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, r19.u32);
	// stw r17,32(r29)
	REX_STORE_U32(r29.u32 + 32, r17.u32);
	// stw r17,48(r30)
	REX_STORE_U32(r30.u32 + 48, r17.u32);
loc_824A928C:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r24,4
	ctx.cr6.compare<uint32_t>(r24.u32, 4, ctx.xer);
	// blt cr6,0x824a914c
	if (ctx.cr6.lt) goto loc_824A914C;
	// b 0x824a92a4
	goto loc_824A92A4;
loc_824A92A0:
	// li r20,1
	r20.s64 = 1;
loc_824A92A4:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r23,4
	ctx.cr6.compare<uint32_t>(r23.u32, 4, ctx.xer);
	// blt cr6,0x824a913c
	if (ctx.cr6.lt) goto loc_824A913C;
loc_824A92B4:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq cr6,0x824a92e0
	if (ctx.cr6.eq) goto loc_824A92E0;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82467e50
	ctx.lr = 0x824A92D0;
	sub_82467E50(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824a9980
	if (ctx.cr0.lt) goto loc_824A9980;
	// li r6,4
	ctx.r6.s64 = 4;
	// b 0x824a9478
	goto loc_824A9478;
loc_824A92E0:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x824a9498
	if (ctx.cr6.eq) goto loc_824A9498;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// li r20,1
	r20.s64 = 1;
	// bl 0x82467e50
	ctx.lr = 0x824A9300;
	sub_82467E50(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824a9980
	if (ctx.cr0.lt) goto loc_824A9980;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82467e50
	ctx.lr = 0x824A931C;
	sub_82467E50(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824a9980
	if (ctx.cr0.lt) goto loc_824A9980;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// b 0x824a947c
	goto loc_824A947C;
loc_824A9330:
	// cmplwi cr6,r16,3
	ctx.cr6.compare<uint32_t>(r16.u32, 3, ctx.xer);
	// bne cr6,0x824a9498
	if (!ctx.cr6.eq) goto loc_824A9498;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r31,-1
	r31.s64 = -1;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// mr r25,r31
	r25.u64 = r31.u64;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824A9350:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x824a9360
	if (!ctx.cr6.eq) goto loc_824A9360;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
loc_824A9360:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x824a9350
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824A9350;
	// mr r23,r17
	r23.u64 = r17.u64;
	// addi r26,r1,112
	r26.s64 = ctx.r1.s64 + 112;
loc_824A9374:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x824a9458
	if (!ctx.cr6.eq) goto loc_824A9458;
	// mr r24,r17
	r24.u64 = r17.u64;
	// addi r28,r1,112
	r28.s64 = ctx.r1.s64 + 112;
loc_824A9384:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x824a9440
	if (!ctx.cr6.eq) goto loc_824A9440;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(r24.u32, r23.u32, ctx.xer);
	// beq cr6,0x824a9430
	if (ctx.cr6.eq) goto loc_824A9430;
	// cmplw cr6,r24,r25
	ctx.cr6.compare<uint32_t>(r24.u32, r25.u32, ctx.xer);
	// beq cr6,0x824a9430
	if (ctx.cr6.eq) goto loc_824A9430;
	// cmplw cr6,r23,r25
	ctx.cr6.compare<uint32_t>(r23.u32, r25.u32, ctx.xer);
	// beq cr6,0x824a9430
	if (ctx.cr6.eq) goto loc_824A9430;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// rlwinm r9,r25,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mr r29,r17
	r29.u64 = r17.u64;
	// std r19,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r19.u64);
	// mr r30,r17
	r30.u64 = r17.u64;
	// std r19,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r19.u64);
	// stw r17,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r17.u32);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// stw r17,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r17.u32);
	// stw r17,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r17.u32);
	// stw r17,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, r17.u32);
	// stw r17,-16(r26)
	REX_STORE_U32(r26.u32 + -16, r17.u32);
	// stw r17,-16(r28)
	REX_STORE_U32(r28.u32 + -16, r17.u32);
	// stw r31,0(r26)
	REX_STORE_U32(r26.u32 + 0, r31.u32);
	// stw r31,0(r28)
	REX_STORE_U32(r28.u32 + 0, r31.u32);
	// stwx r31,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, r31.u32);
	// beq cr6,0x824a942c
	if (ctx.cr6.eq) goto loc_824A942C;
	// addi r27,r1,176
	r27.s64 = ctx.r1.s64 + 176;
loc_824A93F4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x824a9430
	if (!ctx.cr6.eq) goto loc_824A9430;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a8650
	ctx.lr = 0x824A9408;
	sub_824A8650(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824a9414
	if (!ctx.cr0.eq) goto loc_824A9414;
	// li r29,1
	r29.s64 = 1;
loc_824A9414:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// cmplw cr6,r30,r18
	ctx.cr6.compare<uint32_t>(r30.u32, r18.u32, ctx.xer);
	// blt cr6,0x824a93f4
	if (ctx.cr6.lt) goto loc_824A93F4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x824a9430
	if (!ctx.cr6.eq) goto loc_824A9430;
loc_824A942C:
	// li r20,1
	r20.s64 = 1;
loc_824A9430:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplwi cr6,r24,4
	ctx.cr6.compare<uint32_t>(r24.u32, 4, ctx.xer);
	// blt cr6,0x824a9384
	if (ctx.cr6.lt) goto loc_824A9384;
loc_824A9440:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplwi cr6,r23,4
	ctx.cr6.compare<uint32_t>(r23.u32, 4, ctx.xer);
	// blt cr6,0x824a9374
	if (ctx.cr6.lt) goto loc_824A9374;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq cr6,0x824a9498
	if (ctx.cr6.eq) goto loc_824A9498;
loc_824A9458:
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82467e50
	ctx.lr = 0x824A946C;
	sub_82467E50(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824a9980
	if (ctx.cr0.lt) goto loc_824A9980;
	// li r6,3
	ctx.r6.s64 = 3;
loc_824A9478:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_824A947C:
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82467e50
	ctx.lr = 0x824A9488;
	sub_82467E50(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824a9980
	if (ctx.cr0.lt) goto loc_824A9980;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x824a9508
	if (!ctx.cr6.eq) goto loc_824A9508;
loc_824A9498:
	// mr r29,r17
	r29.u64 = r17.u64;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x824a9508
	if (ctx.cr6.eq) goto loc_824A9508;
	// mr r30,r17
	r30.u64 = r17.u64;
loc_824A94A8:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,260(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 260);
	// lwz r9,20(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 20);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// std r19,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r19.u64);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// std r19,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r19.u64);
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r17,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, r17.u32);
	// bl 0x82467e50
	ctx.lr = 0x824A94F0;
	sub_82467E50(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824a9980
	if (ctx.cr0.lt) goto loc_824A9980;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r16
	ctx.cr6.compare<uint32_t>(r29.u32, r16.u32, ctx.xer);
	// blt cr6,0x824a94a8
	if (ctx.cr6.lt) goto loc_824A94A8;
loc_824A9508:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x824a9674
	if (ctx.cr6.eq) goto loc_824A9674;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824785e8
	ctx.lr = 0x824A951C;
	sub_824785E8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824a9980
	if (ctx.cr0.lt) goto loc_824A9980;
	// mr r14,r17
	r14.u64 = r17.u64;
	// b 0x824a9674
	goto loc_824A9674;
loc_824A952C:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r4,260(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 260);
	// bl 0x82478998
	ctx.lr = 0x824A9538;
	sub_82478998(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824a9980
	if (ctx.cr0.lt) goto loc_824A9980;
	// b 0x824a9674
	goto loc_824A9674;
loc_824A9544:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824a994c
	if (ctx.cr6.eq) goto loc_824A994C;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x824a994c
	if (ctx.cr6.eq) goto loc_824A994C;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r31,20(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 20);
	// lwz r10,132(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 132);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824a959c
	if (!ctx.cr6.eq) goto loc_824A959C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,60(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// li r5,4817
	ctx.r5.s64 = 4817;
	// addi r6,r11,-4736
	ctx.r6.s64 = ctx.r11.s64 + -4736;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82489c30
	ctx.lr = 0x824A9590;
	sub_82489C30(ctx, base);
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
	// b 0x824a99b0
	goto loc_824A99B0;
loc_824A959C:
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x824a9664
	if (ctx.cr6.eq) goto loc_824A9664;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// li r19,-1
	r19.s64 = -1;
	// addi r3,r11,-24168
	ctx.r3.s64 = ctx.r11.s64 + -24168;
loc_824A95BC:
	// stw r19,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r19.u32);
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// stw r19,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r19.u32);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// stw r19,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r19.u32);
	// stw r19,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, r19.u32);
	// beq cr6,0x824a9614
	if (ctx.cr6.eq) goto loc_824A9614;
	// lwz r9,8(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r16
	ctx.ctr.u64 = r16.u64;
loc_824A95E4:
	// add r7,r5,r11
	ctx.r7.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r30,r8,r11
	r30.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r1,176
	r29.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r7,r7,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + r31.u32);
	// lwz r7,16(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// stwx r7,r30,r29
	REX_STORE_U32(r30.u32 + r29.u32, ctx.r7.u32);
	// bdnz 0x824a95e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824A95E4;
loc_824A9614:
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
loc_824A9618:
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_824A9620:
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x824a9640
	if (ctx.cr6.eq) goto loc_824A9640;
	// add r30,r7,r11
	r30.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r3
	r30.u64 = REX_LOAD_U32(r30.u32 + ctx.r3.u32);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, ctx.xer);
	// bne cr6,0x824a9684
	if (!ctx.cr6.eq) goto loc_824A9684;
loc_824A9640:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x824a9620
	if (ctx.cr6.lt) goto loc_824A9620;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// add r5,r5,r16
	ctx.r5.u64 = ctx.r5.u64 + r16.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r6,r18
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r18.u32, ctx.xer);
	// blt cr6,0x824a95bc
	if (ctx.cr6.lt) goto loc_824A95BC;
loc_824A9664:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82478998
	ctx.lr = 0x824A966C;
	sub_82478998(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824a99b0
	if (ctx.cr0.lt) goto loc_824A99B0;
loc_824A9674:
	// lwz r11,260(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 260);
	// mr r31,r17
	r31.u64 = r17.u64;
	// stw r17,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r17.u32);
	// b 0x824a9980
	goto loc_824A9980;
loc_824A9684:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplwi cr6,r7,32
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32, ctx.xer);
	// blt cr6,0x824a9618
	if (ctx.cr6.lt) goto loc_824A9618;
	// lwz r11,108(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 108);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824a9664
	if (ctx.cr0.eq) goto loc_824A9664;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824a86d8
	ctx.lr = 0x824A96B0;
	sub_824A86D8(ctx, base);
	// lwz r15,84(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824a9998
	if (ctx.cr0.lt) goto loc_824A9998;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x824a96dc
	if (ctx.cr6.eq) goto loc_824A96DC;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824785e8
	ctx.lr = 0x824A96D0;
	sub_824785E8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824a9998
	if (ctx.cr0.lt) goto loc_824A9998;
	// mr r15,r17
	r15.u64 = r17.u64;
loc_824A96DC:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x824A96E4;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a96f8
	if (ctx.cr0.eq) goto loc_824A96F8;
	// bl 0x824773d0
	ctx.lr = 0x824A96F0;
	sub_824773D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x824a96fc
	goto loc_824A96FC;
loc_824A96F8:
	// mr r29,r17
	r29.u64 = r17.u64;
loc_824A96FC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x824a9710
	if (!ctx.cr6.eq) goto loc_824A9710;
loc_824A9704:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x824a9998
	goto loc_824A9998;
loc_824A9710:
	// lwz r5,8(r21)
	ctx.r5.u64 = REX_LOAD_U32(r21.u32 + 8);
	// mr r30,r17
	r30.u64 = r17.u64;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824a9778
	if (ctx.cr6.eq) goto loc_824A9778;
	// lwz r8,20(r21)
	ctx.r8.u64 = REX_LOAD_U32(r21.u32 + 20);
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// lwz r7,16(r21)
	ctx.r7.u64 = REX_LOAD_U32(r21.u32 + 16);
loc_824A9730:
	// lwzx r11,r9,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r4,r10,31
	ctx.r4.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x824a9768
	if (ctx.cr0.eq) goto loc_824A9768;
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824a9768
	if (ctx.cr0.eq) goto loc_824A9768;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824a9768
	if (!ctx.cr6.lt) goto loc_824A9768;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_824A9768:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x824a9730
	if (ctx.cr6.lt) goto loc_824A9730;
loc_824A9778:
	// lis r4,8272
	ctx.r4.s64 = 542113792;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82477b60
	ctx.lr = 0x824A9794;
	sub_82477B60(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824a9998
	if (ctx.cr0.lt) goto loc_824A9998;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,260(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 260);
	// bl 0x82477420
	ctx.lr = 0x824A97A8;
	sub_82477420(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824a9998
	if (ctx.cr0.lt) goto loc_824A9998;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r4,136(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 136);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lfd f31,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82478758
	ctx.lr = 0x824A97D0;
	sub_82478758(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r25,r30,1
	r25.s64 = r30.s64 + 1;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824a9704
	if (ctx.cr6.eq) goto loc_824A9704;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// rlwinm r30,r16,2,0,29
	r30.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// lwz r11,260(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 260);
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,260(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bl 0x824785e8
	ctx.lr = 0x824A9820;
	sub_824785E8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824a9998
	if (ctx.cr0.lt) goto loc_824A9998;
	// li r29,1
	r29.s64 = 1;
	// cmplwi cr6,r16,1
	ctx.cr6.compare<uint32_t>(r16.u32, 1, ctx.xer);
	// ble cr6,0x824a9674
	if (!ctx.cr6.gt) goto loc_824A9674;
	// li r27,4
	r27.s64 = 4;
	// addi r26,r30,4
	r26.s64 = r30.s64 + 4;
loc_824A983C:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x824A9844;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a9858
	if (ctx.cr0.eq) goto loc_824A9858;
	// bl 0x824773d0
	ctx.lr = 0x824A9850;
	sub_824773D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x824a985c
	goto loc_824A985C;
loc_824A9858:
	// mr r30,r17
	r30.u64 = r17.u64;
loc_824A985C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824a9704
	if (ctx.cr6.eq) goto loc_824A9704;
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82477b60
	ctx.lr = 0x824A9880;
	sub_82477B60(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824a9998
	if (ctx.cr0.lt) goto loc_824A9998;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,260(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 260);
	// bl 0x82477420
	ctx.lr = 0x824A9894;
	sub_82477420(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824a9998
	if (ctx.cr0.lt) goto loc_824A9998;
	// lwz r11,260(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 260);
	// addi r10,r16,-1
	ctx.r10.s64 = r16.s64 + -1;
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r10,260(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 260);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r10,r10,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r26.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r28.u32);
	// beq cr6,0x824a990c
	if (ctx.cr6.eq) goto loc_824A990C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,136(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 136);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82478758
	ctx.lr = 0x824A98F0;
	sub_82478758(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824a9704
	if (ctx.cr6.eq) goto loc_824A9704;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// b 0x824a9920
	goto loc_824A9920;
loc_824A990C:
	// lwz r11,260(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 260);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_824A9920:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824785e8
	ctx.lr = 0x824A992C;
	sub_824785E8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824a9998
	if (ctx.cr0.lt) goto loc_824A9998;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r29,r16
	ctx.cr6.compare<uint32_t>(r29.u32, r16.u32, ctx.xer);
	// blt cr6,0x824a983c
	if (ctx.cr6.lt) goto loc_824A983C;
	// b 0x824a9674
	goto loc_824A9674;
loc_824A994C:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82478998
	ctx.lr = 0x824A9954;
	sub_82478998(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824a99b0
	if (ctx.cr0.lt) goto loc_824A99B0;
	// lwz r11,260(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 260);
	// stw r17,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r17.u32);
	// b 0x824a99b0
	goto loc_824A99B0;
loc_824A9968:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82478998
	ctx.lr = 0x824A9970;
	sub_82478998(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824a99b0
	if (ctx.cr0.lt) goto loc_824A99B0;
	// lwz r11,260(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 260);
	// stw r17,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r17.u32);
loc_824A9980:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x824a9998
	if (ctx.cr6.eq) goto loc_824A9998;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82130e88
	ctx.lr = 0x824A9990;
	sub_82130E88(ctx, base);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82477b20
	ctx.lr = 0x824A9998;
	sub_82477B20(ctx, base);
loc_824A9998:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x824a99b0
	if (ctx.cr6.eq) goto loc_824A99B0;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82130e88
	ctx.lr = 0x824A99A8;
	sub_82130E88(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82477b20
	ctx.lr = 0x824A99B0;
	sub_82477B20(ctx, base);
loc_824A99B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824A99B4:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82504298) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825042A0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// clrlwi r8,r11,27
	ctx.r8.u64 = ctx.r11.u32 & 0x1F;
	// li r3,-1
	ctx.r3.s64 = -1;
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// slw r7,r3,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r8.u8 & 0x3F));
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// bne 0x825042d4
	if (!ctx.cr0.eq) goto loc_825042D4;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_825042D4:
	// rlwinm r11,r11,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// beq cr6,0x825042f8
	if (ctx.cr6.eq) goto loc_825042F8;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x825042fc
	goto loc_825042FC;
loc_825042F8:
	// addi r9,r6,4
	ctx.r9.s64 = ctx.r6.s64 + 4;
loc_825042FC:
	// rlwinm r10,r4,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// b 0x8250431c
	goto loc_8250431C;
loc_82504304:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// andc. r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82504328
	if (!ctx.cr0.eq) goto loc_82504328;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8250431C:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82504304
	if (ctx.cr6.lt) goto loc_82504304;
	// b 0x82504384
	goto loc_82504384;
loc_82504328:
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// andc r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// subfic r8,r8,31
	ctx.xer.ca = ctx.r8.u32 <= 31;
	ctx.r8.u64 = static_cast<uint64_t>(31) - ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82504348
	if (!ctx.cr6.eq) goto loc_82504348;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r8,32
	ctx.r8.s64 = 32;
loc_82504348:
	// addi r31,r8,-1
	r31.s64 = ctx.r8.s64 + -1;
	// rlwinm r30,r10,5,0,26
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r31,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + r30.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82504370
	if (!ctx.cr6.eq) goto loc_82504370;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bgt cr6,0x82504384
	if (ctx.cr6.gt) goto loc_82504384;
loc_82504370:
	// addi r5,r4,3
	ctx.r5.s64 = ctx.r4.s64 + 3;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82504128
	ctx.lr = 0x8250437C;
	sub_82504128(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// add r3,r30,r31
	ctx.r3.u64 = r30.u64 + r31.u64;
loc_82504384:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8250DDA0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c84
	ctx.lr = 0x8250DDA8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r17,r10
	r17.u64 = ctx.r10.u64;
	// lwz r11,76(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 76);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r16,r5
	r16.u64 = ctx.r5.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// li r20,0
	r20.s64 = 0;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// clrlwi. r10,r31,31
	ctx.r10.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r15,r11,10,31,31
	r15.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	// li r21,0
	r21.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// bne 0x8250e184
	if (!ctx.cr0.eq) goto loc_8250E184;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x8250e184
	if (ctx.cr0.eq) goto loc_8250E184;
	// li r25,1
	r25.s64 = 1;
loc_8250DDFC:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// beq cr6,0x8250e154
	if (ctx.cr6.eq) goto loc_8250E154;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// clrlwi r10,r11,13
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFF;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r7,r10,27
	ctx.r7.u64 = ctx.r10.u32 & 0x1F;
	// clrlwi r10,r8,13
	ctx.r10.u64 = ctx.r8.u32 & 0x7FFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// slw r8,r25,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r7.u8 & 0x3F));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// and. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250e154
	if (ctx.cr0.eq) goto loc_8250E154;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r29,r31,32
	r29.s64 = r31.s64 + 32;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250deb4
	if (!ctx.cr0.eq) goto loc_8250DEB4;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250deb4
	if (ctx.cr0.eq) goto loc_8250DEB4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x8250dea4
	if (ctx.cr6.eq) goto loc_8250DEA4;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x8250dea4
	if (ctx.cr6.eq) goto loc_8250DEA4;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x8250dea4
	if (ctx.cr6.eq) goto loc_8250DEA4;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x8250dea4
	if (ctx.cr6.eq) goto loc_8250DEA4;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x8250dea4
	if (ctx.cr6.eq) goto loc_8250DEA4;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8250dea8
	if (!ctx.cr6.eq) goto loc_8250DEA8;
loc_8250DEA4:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_8250DEA8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250deb4
	if (ctx.cr0.eq) goto loc_8250DEB4;
	// mr r20,r25
	r20.u64 = r25.u64;
loc_8250DEB4:
	// lwz r30,12(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_8250DEB8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8250df44
	if (ctx.cr6.eq) goto loc_8250DF44;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// clrlwi r10,r11,13
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFF;
	// lwz r9,40(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r8,r25,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r7,13
	ctx.r11.u64 = ctx.r7.u32 & 0x7FFFF;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r11,r11,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// and. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250df3c
	if (!ctx.cr0.eq) goto loc_8250DF3C;
	// lwz r11,48(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 48);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// clrlwi r9,r11,13
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r9,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r9,r25,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250df3c
	if (!ctx.cr0.eq) goto loc_8250DF3C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8250ba30
	ctx.lr = 0x8250DF3C;
	sub_8250BA30(ctx, base);
loc_8250DF3C:
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// b 0x8250deb8
	goto loc_8250DEB8;
loc_8250DF44:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6c90
	ctx.lr = 0x8250DF50;
	sub_825C6C90(ctx, base);
	// clrlwi. r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8250dfbc
	if (ctx.cr0.eq) goto loc_8250DFBC;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r27,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(r27.u32, r26.u32, ctx.xer);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r5,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r5,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r6.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x8250dfb0
	if (!ctx.cr6.eq) goto loc_8250DFB0;
	// mr r26,r31
	r26.u64 = r31.u64;
loc_8250DFB0:
	// mr r27,r31
	r27.u64 = r31.u64;
	// stw r19,44(r31)
	REX_STORE_U32(r31.u32 + 44, r19.u32);
	// b 0x8250e018
	goto loc_8250E018;
loc_8250DFBC:
	// clrlwi. r11,r15,24
	ctx.r11.u64 = r15.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250e018
	if (!ctx.cr0.eq) goto loc_8250E018;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r26,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// mr r26,r31
	r26.u64 = r31.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r5,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r5,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r6.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r22,44(r31)
	REX_STORE_U32(r31.u32 + 44, r22.u32);
loc_8250E018:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8250e02c
	if (!ctx.cr6.eq) goto loc_8250E02C;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250e13c
	if (!ctx.cr0.eq) goto loc_8250E13C;
loc_8250E02C:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250e054
	if (!ctx.cr0.eq) goto loc_8250E054;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r3.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8250e054
	if (ctx.cr0.eq) goto loc_8250E054;
	// bl 0x824f6ec8
	ctx.lr = 0x8250E04C;
	sub_824F6EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250e13c
	if (!ctx.cr0.eq) goto loc_8250E13C;
loc_8250E054:
	// lwz r8,40(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// li r6,-1
	ctx.r6.s64 = -1;
	// clrlwi r5,r11,13
	ctx.r5.u64 = ctx.r11.u32 & 0x7FFFF;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r5,28,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0x7FFFFFF;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r10,r9,27
	ctx.r10.u64 = ctx.r9.u32 & 0x1F;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r11,r7,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r10,r9,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r5,1,27,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1E;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// slw r8,r6,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8250e0cc
	if (ctx.cr6.eq) goto loc_8250E0CC;
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r16.u32, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x8250e0d0
	if (!ctx.cr6.eq) goto loc_8250E0D0;
loc_8250E0CC:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_8250E0D0:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// clrlwi r29,r10,24
	r29.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250e118
	if (!ctx.cr0.eq) goto loc_8250E118;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8250e118
	if (ctx.cr0.eq) goto loc_8250E118;
loc_8250E0EC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250a580
	ctx.lr = 0x8250E0F4;
	sub_8250A580(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250e1fc
	if (ctx.cr0.eq) goto loc_8250E1FC;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250e118
	if (!ctx.cr0.eq) goto loc_8250E118;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8250e0ec
	if (!ctx.cr6.eq) goto loc_8250E0EC;
loc_8250E118:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwimi r11,r10,23,8,8
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x800000) | (ctx.r11.u64 & 0xFFFFFFFFFF7FFFFF);
	// stw r28,112(r31)
	REX_STORE_U32(r31.u32 + 112, r28.u32);
	// oris r10,r9,128
	ctx.r10.u64 = ctx.r9.u64 | 8388608;
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
loc_8250E13C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x8250e150
	if (ctx.cr6.eq) goto loc_8250E150;
	// lwz r11,48(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 48);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// stw r11,48(r21)
	REX_STORE_U32(r21.u32 + 48, ctx.r11.u32);
loc_8250E150:
	// mr r21,r31
	r21.u64 = r31.u64;
loc_8250E154:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8250e1b0
	if (ctx.cr6.eq) goto loc_8250E1B0;
	// rlwinm r11,r23,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFE;
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
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8250e1cc
	if (ctx.cr6.eq) goto loc_8250E1CC;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250e1ec
	if (ctx.cr0.eq) goto loc_8250E1EC;
loc_8250E184:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r26,0(r18)
	REX_STORE_U32(r18.u32 + 0, r26.u32);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
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
	// stw r11,0(r17)
	REX_STORE_U32(r17.u32 + 0, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd4
	return;
loc_8250E1B0:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8250e1e4
	if (!ctx.cr6.eq) goto loc_8250E1E4;
loc_8250E1CC:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r23,r31
	r23.u64 = r31.u64;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250e184
	if (!ctx.cr0.eq) goto loc_8250E184;
	// b 0x8250e1f0
	goto loc_8250E1F0;
loc_8250E1E4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8250e184
	if (!ctx.cr6.eq) goto loc_8250E184;
loc_8250E1EC:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_8250E1F0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8250ddfc
	if (!ctx.cr6.eq) goto loc_8250DDFC;
	// b 0x8250e184
	goto loc_8250E184;
loc_8250E1FC:
	// li r4,3541
	ctx.r4.s64 = 3541;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824e4368
	ctx.lr = 0x8250E208;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_8254FB90) {
	REX_FUNC_PROLOGUE();
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r7,15
	ctx.r7.s64 = 15;
	// slw r9,r5,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r8.u8 & 0x3F));
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// and r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 & ctx.r8.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8254fbc0
	if (!ctx.cr6.eq) goto loc_8254FBC0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8254FBC0:
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// sth r10,14(r11)
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825501A0) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825501b0
	if (ctx.cr6.eq) goto loc_825501B0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_825501B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82550488) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,103
	ctx.r4.s64 = 103;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// bl 0x824f71b8
	ctx.lr = 0x825504B4;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x825504d0
	if (ctx.cr6.lt) goto loc_825504D0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x825504d4
	if (!ctx.cr6.gt) goto loc_825504D4;
loc_825504D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825504D4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

DEFINE_REX_FUNC(sub_82551C00) {
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
	// lwz r31,64(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82551c84
	goto loc_82551C84;
loc_82551C20:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82551c34
	if (ctx.cr0.eq) goto loc_82551C34;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82551c40
	goto loc_82551C40;
loc_82551C34:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-40
	ctx.r3.s64 = ctx.r11.s64 + -40;
loc_82551C40:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,11520
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11520, ctx.xer);
	// bne cr6,0x82551c80
	if (!ctx.cr6.eq) goto loc_82551C80;
	// rlwinm. r11,r11,5,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82551ca8
	if (!ctx.cr0.eq) goto loc_82551CA8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824f7510
	ctx.lr = 0x82551C60;
	sub_824F7510(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82551ca8
	if (ctx.cr6.eq) goto loc_82551CA8;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82551ca8
	if (ctx.cr6.eq) goto loc_82551CA8;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x82551c8c
	if (ctx.cr6.eq) goto loc_82551C8C;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// beq cr6,0x82551c8c
	if (ctx.cr6.eq) goto loc_82551C8C;
loc_82551C80:
	// lwz r31,64(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 64);
loc_82551C84:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82551c20
	if (!ctx.cr6.eq) goto loc_82551C20;
loc_82551C8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82551C90:
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
loc_82551CA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82551c90
	goto loc_82551C90;
}

DEFINE_REX_FUNC(sub_82554A30) {
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
	ctx.lr = 0x82554A38;
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
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,13
	ctx.r6.s64 = 13;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82554A6C;
	sub_825BB860(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82554A7C;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82554A88;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// beq cr6,0x82554aac
	if (ctx.cr6.eq) goto loc_82554AAC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82554AA8;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82554AAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82554AB4;
	sub_8250AD28(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// beq cr6,0x82554ad8
	if (ctx.cr6.eq) goto loc_82554AD8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82554AD4;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82554AD8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82554AE0;
	sub_8250AD28(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r3,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwimi r10,r11,14,15,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bl 0x824ffc30
	ctx.lr = 0x82554B10;
	sub_824FFC30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8255DD10) {
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
	ctx.lr = 0x8255DD18;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,11
	ctx.r11.s64 = ctx.r5.s64 + 11;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// bl 0x825ba3a0
	ctx.lr = 0x8255DD5C;
	sub_825BA3A0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8255de1c
	if (!ctx.cr6.eq) goto loc_8255DE1C;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,256
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 256, ctx.xer);
	// bne cr6,0x8255de1c
	if (!ctx.cr6.eq) goto loc_8255DE1C;
	// li r5,51
	ctx.r5.s64 = 51;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f7678
	ctx.lr = 0x8255DD8C;
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
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255ddd4
	if (!ctx.cr0.eq) goto loc_8255DDD4;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255ddd4
	if (ctx.cr0.eq) goto loc_8255DDD4;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8255dde4
	if (!ctx.cr6.gt) goto loc_8255DDE4;
loc_8255DDD4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8251fe00
	ctx.lr = 0x8255DDE0;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8255DDE4:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stwx r31,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r31.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8255dc78
	ctx.lr = 0x8255DE18;
	sub_8255DC78(ctx, base);
	// b 0x8255de88
	goto loc_8255DE88;
loc_8255DE1C:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// clrlwi. r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255de58
	if (!ctx.cr0.eq) goto loc_8255DE58;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8255de58
	if (ctx.cr0.eq) goto loc_8255DE58;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8255de64
	if (!ctx.cr6.gt) goto loc_8255DE64;
loc_8255DE58:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82584838
	ctx.lr = 0x8255DE64;
	sub_82584838(ctx, base);
loc_8255DE64:
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
	// stw r30,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r30.u32);
	// stw r29,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r29.u32);
	// stw r28,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r28.u32);
loc_8255DE88:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8257CEC8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8257ceec
	if (!ctx.cr0.eq) goto loc_8257CEEC;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_8257CEEC:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8257cf30
	if (!ctx.cr6.lt) goto loc_8257CF30;
	// subf r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r10.u64;
loc_8257CF14:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8257cf38
	if (!ctx.cr6.eq) goto loc_8257CF38;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8257cf14
	if (ctx.cr6.lt) goto loc_8257CF14;
loc_8257CF30:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8257CF38:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8257E880) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// and r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 & ctx.r11.u64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8257e8b8
	if (!ctx.cr6.eq) goto loc_8257E8B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8257E8B8:
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r11,14(r10)
	REX_STORE_U16(ctx.r10.u32 + 14, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8257EEA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8257ef58
	if (ctx.cr6.eq) goto loc_8257EF58;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x8257eec0
	if (ctx.cr6.eq) goto loc_8257EEC0;
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8257ef58
	if (!ctx.cr6.eq) goto loc_8257EF58;
loc_8257EEC0:
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8257ef58
	if (!ctx.cr6.eq) goto loc_8257EF58;
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8257ef58
	if (!ctx.cr6.eq) goto loc_8257EF58;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257ef50
	if (ctx.cr6.eq) goto loc_8257EF50;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x8257ef50
	if (!ctx.cr6.eq) goto loc_8257EF50;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8257ef58
	if (!ctx.cr6.eq) goto loc_8257EF58;
	// lwz r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8257ef58
	if (!ctx.cr6.eq) goto loc_8257EF58;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8257ef58
	if (!ctx.cr6.eq) goto loc_8257EF58;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// bne cr6,0x8257ef58
	if (!ctx.cr6.eq) goto loc_8257EF58;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8257ef58
	if (!ctx.cr6.eq) goto loc_8257EF58;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_8257EF50:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// b 0x824e4368
	sub_824E4368(ctx, base);
	return;
loc_8257EF58:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82580B20) {
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
	// addi r10,r4,3
	ctx.r10.s64 = ctx.r4.s64 + 3;
	// addi r11,r3,812
	ctx.r11.s64 = ctx.r3.s64 + 812;
	// rlwinm r4,r10,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplwi cr6,r4,132
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 132, ctx.xer);
	// ble cr6,0x82580b50
	if (!ctx.cr6.gt) goto loc_82580B50;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824f7c98
	ctx.lr = 0x82580B4C;
	sub_824F7C98(ctx, base);
	// b 0x82580bbc
	goto loc_82580BBC;
loc_82580B50:
	// lwz r9,140(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r10,144(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82580b74
	if (ctx.cr6.lt) goto loc_82580B74;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r9,144(r11)
	REX_STORE_U32(ctx.r11.u32 + 144, ctx.r9.u32);
	// b 0x82580bb8
	goto loc_82580BB8;
loc_82580B74:
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82580bac
	if (ctx.cr6.eq) goto loc_82580BAC;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x826a2e60
	ctx.lr = 0x82580BA4;
	sub_826A2E60(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x82580bb8
	goto loc_82580BB8;
loc_82580BAC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824f7378
	ctx.lr = 0x82580BB4;
	sub_824F7378(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82580BB8:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_82580BBC:
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

DEFINE_REX_FUNC(sub_825829F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82582A00;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82582A24;
	sub_825BB860(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82582A34;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82582A40;
	sub_8250AD28(ctx, base);
	// stw r3,44(r29)
	REX_STORE_U32(r29.u32 + 44, ctx.r3.u32);
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r10,r29,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
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
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82584A68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82584A70;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82584ab8
	if (ctx.cr6.eq) goto loc_82584AB8;
loc_82584A8C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82553828
	ctx.lr = 0x82584A94;
	sub_82553828(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// rlwimi r10,r31,2,16,29
	ctx.r10.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFC) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0003);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// rlwimi r10,r11,0,30,14
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFE0003) | (ctx.r10.u64 & 0x1FFFC);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blt cr6,0x82584a8c
	if (ctx.cr6.lt) goto loc_82584A8C;
loc_82584AB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825868F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825868F8;
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
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82586920;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82586944
	if (ctx.cr6.eq) goto loc_82586944;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82586940;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82586944:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8258694C;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82584ed0
	ctx.lr = 0x8258695C;
	sub_82584ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82586968;
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

DEFINE_REX_FUNC(sub_8258D740) {
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
	ctx.lr = 0x8258D748;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r20,4(r4)
	r20.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// lwz r11,44(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258db10
	if (ctx.cr6.eq) goto loc_8258DB10;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8258db10
	if (ctx.cr6.eq) goto loc_8258DB10;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// bl 0x824e4368
	ctx.lr = 0x8258D780;
	sub_824E4368(ctx, base);
loc_8258D780:
	// lwz r5,8(r22)
	ctx.r5.u64 = REX_LOAD_U32(r22.u32 + 8);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8258daf8
	if (!ctx.cr6.eq) goto loc_8258DAF8;
	// lwz r11,16(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8258dbfc
	if (!ctx.cr6.eq) goto loc_8258DBFC;
	// lwz r24,24(r5)
	r24.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8258dc2c
	if (ctx.cr6.eq) goto loc_8258DC2C;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x8258dc2c
	if (!ctx.cr6.eq) goto loc_8258DC2C;
	// lwz r27,16(r24)
	r27.u64 = REX_LOAD_U32(r24.u32 + 16);
	// lwz r11,16(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 16);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8258daf8
	if (ctx.cr6.eq) goto loc_8258DAF8;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8258daf8
	if (ctx.cr6.eq) goto loc_8258DAF8;
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258daf8
	if (ctx.cr6.eq) goto loc_8258DAF8;
	// clrlwi. r30,r19,24
	r30.u64 = r19.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8258d800
	if (!ctx.cr0.eq) goto loc_8258D800;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mulli r10,r27,40
	ctx.r10.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(40));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8258D800:
	// lwz r11,44(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8258d838
	if (ctx.cr0.eq) goto loc_8258D838;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8258dc08
	if (!ctx.cr0.eq) goto loc_8258DC08;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8258d5e0
	ctx.lr = 0x8258D820;
	sub_8258D5E0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mulli r10,r27,40
	ctx.r10.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(40));
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// oris r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 2147483648;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// b 0x8258daf8
	goto loc_8258DAF8;
loc_8258D838:
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8258dc10
	if (!ctx.cr0.eq) goto loc_8258DC10;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8258d470
	ctx.lr = 0x8258D854;
	sub_8258D470(ctx, base);
	// lwz r11,44(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 44);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// beq 0x8258d918
	if (ctx.cr0.eq) goto loc_8258D918;
	// mulli r28,r27,40
	r28.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(40));
	// add r11,r28,r11
	ctx.r11.u64 = r28.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x8258dc20
	if (ctx.cr6.eq) goto loc_8258DC20;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lwzx r9,r28,r11
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// rlwimi r9,r10,1,29,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x7) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF8);
	// stwx r9,r28,r11
	REX_STORE_U32(r28.u32 + ctx.r11.u32, ctx.r9.u32);
	// beq cr6,0x8258daf8
	if (ctx.cr6.eq) goto loc_8258DAF8;
	// lwz r11,44(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 44);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258daf8
	if (ctx.cr0.eq) goto loc_8258DAF8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,564(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 564);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82583608
	ctx.lr = 0x8258D8B4;
	sub_82583608(ctx, base);
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 20);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8258d8fc
	if (!ctx.cr6.gt) goto loc_8258D8FC;
	// addi r29,r3,-8
	r29.s64 = ctx.r3.s64 + -8;
loc_8258D8C8:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825c1318
	ctx.lr = 0x8258D8DC;
	sub_825C1318(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stwu r11,8(r29)
	ea = 8 + r29.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r29.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 20);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8258d8c8
	if (ctx.cr6.lt) goto loc_8258D8C8;
loc_8258D8FC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r11,r28,r11
	ctx.r11.u64 = r28.u64 + ctx.r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x8258daf8
	goto loc_8258DAF8;
loc_8258D918:
	// mulli r25,r27,40
	r25.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(40));
	// lwzx r10,r25,r11
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + ctx.r11.u32);
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// rlwimi r9,r10,0,0,28
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8) | (ctx.r9.u64 & 0xFFFFFFFF00000007);
	// stwx r9,r25,r11
	REX_STORE_U32(r25.u32 + ctx.r11.u32, ctx.r9.u32);
	// beq cr6,0x8258daf8
	if (ctx.cr6.eq) goto loc_8258DAF8;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8258daf8
	if (!ctx.cr0.eq) goto loc_8258DAF8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,564(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 564);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82583608
	ctx.lr = 0x8258D950;
	sub_82583608(ctx, base);
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 20);
	// li r30,0
	r30.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8258daf8
	if (!ctx.cr6.gt) goto loc_8258DAF8;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_8258D968:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825c1318
	ctx.lr = 0x8258D97C;
	sub_825C1318(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,0(r26)
	REX_STORE_U64(r26.u32 + 0, ctx.r11.u64);
	// bl 0x82584dd0
	ctx.lr = 0x8258D990;
	sub_82584DD0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 384, ctx.xer);
	// bne cr6,0x8258d9ac
	if (!ctx.cr6.eq) goto loc_8258D9AC;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r29,12(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_8258D9AC:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14464
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14464, ctx.xer);
	// bne cr6,0x8258da88
	if (!ctx.cr6.eq) goto loc_8258DA88;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8258da3c
	if (!ctx.cr6.eq) goto loc_8258DA3C;
	// lwz r8,536(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 536);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8258da1c
	if (ctx.cr6.eq) goto loc_8258DA1C;
	// addi r10,r31,348
	ctx.r10.s64 = r31.s64 + 348;
loc_8258D9E4:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8258da0c
	if (!ctx.cr6.eq) goto loc_8258DA0C;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r7,r9,0,23,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1E0;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8258da0c
	if (!ctx.cr0.eq) goto loc_8258DA0C;
	// clrlwi. r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8258da1c
	if (ctx.cr0.eq) goto loc_8258DA1C;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// beq cr6,0x8258da1c
	if (ctx.cr6.eq) goto loc_8258DA1C;
loc_8258DA0C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8258d9e4
	if (ctx.cr6.lt) goto loc_8258D9E4;
loc_8258DA1C:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8258da3c
	if (!ctx.cr6.lt) goto loc_8258DA3C;
	// addi r11,r11,29
	ctx.r11.s64 = ctx.r11.s64 + 29;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// ori r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 8192;
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r10.u32);
	// b 0x8258da88
	goto loc_8258DA88;
loc_8258DA3C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8258da70
	if (!ctx.cr6.eq) goto loc_8258DA70;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb860
	ctx.lr = 0x8258DA60;
	sub_825BB860(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_8258DA70:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8258DA7C;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8258DA88;
	sub_8250AD28(ctx, base);
loc_8258DA88:
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 20);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8258d968
	if (ctx.cr6.lt) goto loc_8258D968;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8258daf8
	if (ctx.cr6.eq) goto loc_8258DAF8;
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// rlwinm r10,r30,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
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
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r11,r25,r11
	ctx.r11.u64 = r25.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_8258DAF8:
	// lwz r11,12(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258db10
	if (ctx.cr6.eq) goto loc_8258DB10;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8258dc38
	if (!ctx.cr6.eq) goto loc_8258DC38;
loc_8258DB10:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// bne cr6,0x8258d780
	if (!ctx.cr6.eq) goto loc_8258D780;
	// clrlwi. r11,r19,24
	ctx.r11.u64 = r19.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258dbf4
	if (ctx.cr0.eq) goto loc_8258DBF4;
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// li r29,0
	r29.s64 = 0;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8258dbf4
	if (!ctx.cr0.eq) goto loc_8258DBF4;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8258dbf4
	if (ctx.cr0.eq) goto loc_8258DBF4;
loc_8258DB44:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,12288
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12288, ctx.xer);
	// bne cr6,0x8258db74
	if (!ctx.cr6.eq) goto loc_8258DB74;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8258db70
	if (ctx.cr6.eq) goto loc_8258DB70;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250b4d8
	ctx.lr = 0x8258DB70;
	sub_8250B4D8(ctx, base);
loc_8258DB70:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8258DB74:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r30,40(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8258db8c
	if (!ctx.cr0.eq) goto loc_8258DB8C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8258db44
	if (!ctx.cr6.eq) goto loc_8258DB44;
loc_8258DB8C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8258dbf4
	if (ctx.cr6.eq) goto loc_8258DBF4;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// li r6,117
	ctx.r6.s64 = 117;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb860
	ctx.lr = 0x8258DBB0;
	sub_825BB860(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8250b4d8
	ctx.lr = 0x8258DBC4;
	sub_8250B4D8(ctx, base);
	// lwz r29,564(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 564);
	// lwz r5,104(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 104);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8258dbe4
	if (ctx.cr6.eq) goto loc_8258DBE4;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250b4d8
	ctx.lr = 0x8258DBE4;
	sub_8250B4D8(ctx, base);
loc_8258DBE4:
	// stw r30,104(r29)
	REX_STORE_U32(r29.u32 + 104, r30.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_8258DBF4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce4
	return;
loc_8258DBFC:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258DC08;
	sub_824E4368(ctx, base);
loc_8258DC08:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// bl 0x824e4368
	ctx.lr = 0x8258DC10;
	sub_824E4368(ctx, base);
loc_8258DC10:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,-18320
	ctx.r5.s64 = ctx.r11.s64 + -18320;
	// bl 0x824e4368
	ctx.lr = 0x8258DC20;
	sub_824E4368(ctx, base);
loc_8258DC20:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258DC2C;
	sub_824E4368(ctx, base);
loc_8258DC2C:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258DC38;
	sub_824E4368(ctx, base);
loc_8258DC38:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258DC44;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_825B7F28) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x825b7f5c
	if (!ctx.cr6.eq) goto loc_825B7F5C;
	// lwz r10,56(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825b7f5c
	if (ctx.cr6.eq) goto loc_825B7F5C;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
loc_825B7F5C:
	// clrlwi. r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825b7f94
	if (ctx.cr0.eq) goto loc_825B7F94;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b7f94
	if (ctx.cr6.eq) goto loc_825B7F94;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b7e00
	ctx.lr = 0x825B7F84;
	sub_825B7E00(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3628
	ctx.r4.s64 = 3628;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x825B7F94;
	sub_824E4368(ctx, base);
loc_825B7F94:
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r11,r5,14,16,17
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0xC000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF3FFF);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_825B9C48) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x825B9C7C;
	sub_824F71B8(ctx, base);
	// addi r11,r30,-20
	ctx.r11.s64 = r30.s64 + -20;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_825B9CA0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b9e5c
	if (ctx.cr6.eq) goto loc_825B9E5C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825b9cc0
	if (ctx.cr6.eq) goto loc_825B9CC0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r8,r10,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x825b9cc8
	if (!ctx.cr0.eq) goto loc_825B9CC8;
loc_825B9CC0:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825b9ca0
	goto loc_825B9CA0;
loc_825B9CC8:
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r8,r10,27,14,19
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3F000) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0FFF);
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b9cec
	if (ctx.cr0.eq) goto loc_825B9CEC;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_825B9CEC:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm r10,r11,31,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// rlwinm r11,r8,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 15) & 0xFF;
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// beq 0x825b9d18
	if (ctx.cr0.eq) goto loc_825B9D18;
	// clrlwi r7,r11,30
	ctx.r7.u64 = ctx.r11.u32 & 0x3;
	// rlwinm r8,r8,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// b 0x825b9d1c
	goto loc_825B9D1C;
loc_825B9D18:
	// ori r8,r8,7
	ctx.r8.u64 = ctx.r8.u64 | 7;
loc_825B9D1C:
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// rlwinm. r8,r10,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// beq 0x825b9d38
	if (ctx.cr0.eq) goto loc_825B9D38;
	// rlwimi r8,r11,1,27,28
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x18) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE7);
	// rlwinm r8,r8,0,27,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// b 0x825b9d3c
	goto loc_825B9D3C;
loc_825B9D38:
	// ori r8,r8,56
	ctx.r8.u64 = ctx.r8.u64 | 56;
loc_825B9D3C:
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// rlwinm. r8,r10,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// beq 0x825b9d58
	if (ctx.cr0.eq) goto loc_825B9D58;
	// rlwimi r8,r11,2,24,25
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF3F);
	// rlwinm r8,r8,0,24,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// b 0x825b9d5c
	goto loc_825B9D5C;
loc_825B9D58:
	// ori r8,r8,448
	ctx.r8.u64 = ctx.r8.u64 | 448;
loc_825B9D5C:
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825b9d78
	if (ctx.cr0.eq) goto loc_825B9D78;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwimi r10,r11,3,21,22
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x600) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF9FF);
	// rlwinm r11,r10,0,21,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// b 0x825b9d80
	goto loc_825B9D80;
loc_825B9D78:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ori r11,r11,3584
	ctx.r11.u64 = ctx.r11.u64 | 3584;
loc_825B9D80:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm. r11,r11,24,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b9df0
	if (ctx.cr0.eq) goto loc_825B9DF0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825b9de0
	if (ctx.cr6.lt) goto loc_825B9DE0;
	// beq cr6,0x825b9dd0
	if (ctx.cr6.eq) goto loc_825B9DD0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x825b9dc0
	if (ctx.cr6.lt) goto loc_825B9DC0;
	// bne cr6,0x825b9df0
	if (!ctx.cr6.eq) goto loc_825B9DF0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,11,20,22
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xE00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF1FF);
	// b 0x825b9dec
	goto loc_825B9DEC;
loc_825B9DC0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,8,23,25
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1C0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFE3F);
	// b 0x825b9dec
	goto loc_825B9DEC;
loc_825B9DD0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,5,26,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x38) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC7);
	// b 0x825b9dec
	goto loc_825B9DEC;
loc_825B9DE0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,2,29,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x7) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF8);
loc_825B9DEC:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_825B9DF0:
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm. r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b9e68
	if (ctx.cr0.eq) goto loc_825B9E68;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825b9e4c
	if (ctx.cr6.lt) goto loc_825B9E4C;
	// beq cr6,0x825b9e3c
	if (ctx.cr6.eq) goto loc_825B9E3C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x825b9e2c
	if (ctx.cr6.lt) goto loc_825B9E2C;
	// bne cr6,0x825b9e68
	if (!ctx.cr6.eq) goto loc_825B9E68;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwimi r11,r10,9,20,22
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xE00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF1FF);
	// b 0x825b9e64
	goto loc_825B9E64;
loc_825B9E2C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwimi r11,r10,6,23,25
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1C0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFE3F);
	// b 0x825b9e64
	goto loc_825B9E64;
loc_825B9E3C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwimi r11,r10,3,26,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x38) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC7);
	// b 0x825b9e64
	goto loc_825B9E64;
loc_825B9E4C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwimi r11,r10,0,29,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF8);
	// b 0x825b9e64
	goto loc_825B9E64;
loc_825B9E5C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ori r11,r11,4095
	ctx.r11.u64 = ctx.r11.u64 | 4095;
loc_825B9E64:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_825B9E68:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm. r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b9eb0
	if (ctx.cr0.eq) goto loc_825B9EB0;
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r9,20,21,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x7E0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF81F);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r9,r10,25,0,1
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0xC0000000) | (ctx.r9.u64 & 0xFFFFFFFF3FFFFFFF);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b9eb0
	if (ctx.cr0.eq) goto loc_825B9EB0;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_825B9EB0:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// rlwinm r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825b9efc
	if (!ctx.cr6.gt) goto loc_825B9EFC;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// subfic r11,r11,95
	ctx.xer.ca = ctx.r11.u32 <= 95;
	ctx.r11.u64 = static_cast<uint64_t>(95) - ctx.r11.u64;
	// divwu r8,r11,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// divwu r10,r11,r10
	ctx.r10.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// mulli r8,r8,3
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(3));
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// rlwimi r10,r11,5,25,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x60) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF9F);
	// rlwimi r9,r10,20,5,11
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x7F00000) | (ctx.r9.u64 & 0xFFFFFFFFF80FFFFF);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// b 0x825b9f0c
	goto loc_825B9F0C;
loc_825B9EFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,95
	ctx.r10.s64 = 95;
	// rlwimi r11,r10,20,5,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x7F00000) | (ctx.r11.u64 & 0xFFFFFFFFF80FFFFF);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_825B9F0C:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b9f44
	if (ctx.cr0.eq) goto loc_825B9F44;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm r11,r11,9,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFF;
	// rlwimi r10,r11,31,0,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// b 0x825b9f60
	goto loc_825B9F60;
loc_825B9F44:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r10,r11,13,0,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwimi r9,r11,14,0,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
loc_825B9F60:
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

DEFINE_REX_FUNC(sub_825CF840) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825CF848;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x825c6e00
	ctx.lr = 0x825CF860;
	sub_825C6E00(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lis r9,4095
	ctx.r9.s64 = 268369920;
	// addi r10,r10,1080
	ctx.r10.s64 = ctx.r10.s64 + 1080;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// li r30,0
	r30.s64 = 0;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,136(r31)
	REX_STORE_U32(r31.u32 + 136, r30.u32);
	// stw r11,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r11.u32);
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// stw r30,148(r31)
	REX_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r30,144(r31)
	REX_STORE_U32(r31.u32 + 144, r30.u32);
	// stw r30,152(r31)
	REX_STORE_U32(r31.u32 + 152, r30.u32);
	// stw r30,160(r31)
	REX_STORE_U32(r31.u32 + 160, r30.u32);
	// stw r8,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r8.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r10,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r10.u32);
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x825cf8c8
	if (!ctx.cr6.gt) goto loc_825CF8C8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_825CF8C8:
	// bl 0x822f6280
	ctx.lr = 0x825CF8CC;
	sub_822F6280(ctx, base);
	// stw r3,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825cf8dc
	if (!ctx.cr6.eq) goto loc_825CF8DC;
	// stw r30,164(r31)
	REX_STORE_U32(r31.u32 + 164, r30.u32);
loc_825CF8DC:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addis r11,r11,-6184
	ctx.r11.s64 = ctx.r11.s64 + -405274624;
	// addic. r11,r11,-75
	ctx.xer.ca = ctx.r11.u32 > 74;
	ctx.r11.s64 = ctx.r11.s64 + -75;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825cf918
	if (ctx.cr0.eq) goto loc_825CF918;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x825cf908
	if (ctx.cr6.eq) goto loc_825CF908;
	// addis r11,r11,-504
	ctx.r11.s64 = ctx.r11.s64 + -33030144;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825cf918
	if (ctx.cr0.eq) goto loc_825CF918;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x825cf924
	if (!ctx.cr6.eq) goto loc_825CF924;
loc_825CF908:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r30,172(r31)
	REX_STORE_U32(r31.u32 + 172, r30.u32);
	// stw r11,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r11.u32);
	// b 0x825cf924
	goto loc_825CF924;
loc_825CF918:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r30,168(r31)
	REX_STORE_U32(r31.u32 + 168, r30.u32);
	// stw r11,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r11.u32);
loc_825CF924:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825D4140) {
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
	ctx.lr = 0x825D4148;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825d4188
	if (!ctx.cr6.eq) goto loc_825D4188;
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
	// li r7,2690
	ctx.r7.s64 = 2690;
	// bl 0x824ea978
	ctx.lr = 0x825D4188;
	sub_824EA978(ctx, base);
loc_825D4188:
	// li r4,157
	ctx.r4.s64 = 157;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825D4194;
	sub_824F02C0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x825d41fc
	if (!ctx.cr6.eq) goto loc_825D41FC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825d41b8
	if (ctx.cr6.eq) goto loc_825D41B8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D41B8;
	sub_824F0950(ctx, base);
loc_825D41B8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d41f4
	if (ctx.cr6.eq) goto loc_825D41F4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d41f4
	if (ctx.cr6.eq) goto loc_825D41F4;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5728
	ctx.r4.s64 = ctx.r10.s64 + 5728;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,91
	ctx.r6.s64 = 91;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,364(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 364);
	// bctrl 
	ctx.lr = 0x825D41F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D41F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825d4258
	goto loc_825D4258;
loc_825D41FC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825d4218
	if (ctx.cr6.eq) goto loc_825D4218;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D4218;
	sub_824F0950(ctx, base);
loc_825D4218:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d4254
	if (ctx.cr6.eq) goto loc_825D4254;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d4254
	if (ctx.cr6.eq) goto loc_825D4254;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5728
	ctx.r4.s64 = ctx.r10.s64 + 5728;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,91
	ctx.r6.s64 = 91;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,364(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 364);
	// bctrl 
	ctx.lr = 0x825D4254;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D4254:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825D4258:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825D7D58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825D7D60;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,2068(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 2068);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825d7dd4
	if (!ctx.cr6.gt) goto loc_825D7DD4;
	// li r30,0
	r30.s64 = 0;
loc_825D7D84:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825d7d9c
	if (!ctx.cr6.lt) goto loc_825D7D9C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// b 0x825d7da4
	goto loc_825D7DA4;
loc_825D7D9C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825f7718
	ctx.lr = 0x825D7DA4;
	sub_825F7718(ctx, base);
loc_825D7DA4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x825d7dbc
	if (!ctx.cr6.eq) goto loc_825D7DBC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,2068(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 2068);
	// bl 0x825f7658
	ctx.lr = 0x825D7DBC;
	sub_825F7658(ctx, base);
loc_825D7DBC:
	// lwz r3,2068(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 2068);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825d7d84
	if (ctx.cr6.lt) goto loc_825D7D84;
loc_825D7DD4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825DE7B0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825de7f0
	if (ctx.cr6.eq) goto loc_825DE7F0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x825de7e0
	goto loc_825DE7E0;
loc_825DE7D8:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_825DE7E0:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825de7d8
	if (!ctx.cr6.eq) goto loc_825DE7D8;
	// blr 
	return;
loc_825DE7F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825DF110) {
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
	// lwz r3,68(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825df138
	if (ctx.cr6.eq) goto loc_825DF138;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825e18c0
	ctx.lr = 0x825DF138;
	sub_825E18C0(ctx, base);
loc_825DF138:
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825df14c
	if (ctx.cr6.eq) goto loc_825DF14C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825e18c0
	ctx.lr = 0x825DF14C;
	sub_825E18C0(ctx, base);
loc_825DF14C:
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825df160
	if (ctx.cr6.eq) goto loc_825DF160;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825e18c0
	ctx.lr = 0x825DF160;
	sub_825E18C0(ctx, base);
loc_825DF160:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,52(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,11100
	ctx.r4.s64 = ctx.r11.s64 + 11100;
	// bl 0x82130e88
	ctx.lr = 0x825DF174;
	sub_82130E88(ctx, base);
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

DEFINE_REX_FUNC(sub_825E4E00) {
	REX_FUNC_PROLOGUE();
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825e4e30
	if (ctx.cr6.eq) goto loc_825E4E30;
	// lwz r10,228(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825e4e30
	if (ctx.cr0.eq) goto loc_825E4E30;
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// stw r10,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// stw r10,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// b 0x825e4e44
	goto loc_825E4E44;
loc_825E4E30:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lwz r11,11192(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 11192);
loc_825E4E44:
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// b 0x825e4118
	sub_825E4118(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825E6B68) {
	REX_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,32(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825e6b8c
	if (!ctx.cr6.eq) goto loc_825E6B8C;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_825E6B8C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825E9170) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r8,28928(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 28928);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// b 0x825e75f0
	sub_825E75F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825E9430) {
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
	// bl 0x825e9278
	ctx.lr = 0x825E9448;
	sub_825E9278(ctx, base);
	// rlwinm r10,r3,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// clrlwi r8,r3,27
	ctx.r8.u64 = ctx.r3.u32 & 0x1F;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_825ED5D8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r10,r10,-16784
	ctx.r10.s64 = ctx.r10.s64 + -16784;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825EDCF0) {
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
	ctx.lr = 0x825EDCF8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2136);
	// rlwinm. r11,r11,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825edd5c
	if (!ctx.cr0.eq) goto loc_825EDD5C;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r9,136(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// b 0x825edd4c
	goto loc_825EDD4C;
loc_825EDD1C:
	// lwz r11,28(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// b 0x825edd3c
	goto loc_825EDD3C;
loc_825EDD24:
	// lwz r10,228(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x825edd38
	if (ctx.cr0.eq) goto loc_825EDD38;
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r10,228(r11)
	REX_STORE_U32(ctx.r11.u32 + 228, ctx.r10.u32);
loc_825EDD38:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_825EDD3C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825edd24
	if (!ctx.cr6.eq) goto loc_825EDD24;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_825EDD4C:
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825edd1c
	if (!ctx.cr6.eq) goto loc_825EDD1C;
	// b 0x825ee018
	goto loc_825EE018;
loc_825EDD5C:
	// lwz r11,1376(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// addi r31,r11,1
	r31.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r31,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x825b3ab0
	ctx.lr = 0x825EDD6C;
	sub_825B3AB0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x825edd90
	if (!ctx.cr6.gt) goto loc_825EDD90;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_825EDD84:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x825edd84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825EDD84;
loc_825EDD90:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r27,136(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// b 0x825edf60
	goto loc_825EDF60;
loc_825EDD9C:
	// lwz r31,28(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 28);
	// b 0x825edf50
	goto loc_825EDF50;
loc_825EDDA4:
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825edf4c
	if (ctx.cr0.eq) goto loc_825EDF4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EDDC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825ede44
	if (ctx.cr0.eq) goto loc_825EDE44;
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x8260a968
	ctx.lr = 0x825EDDDC;
	sub_8260A968(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x8260a9c8
	ctx.lr = 0x825EDDEC;
	sub_8260A9C8(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r30,1
	r30.s64 = 1;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r11,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r11.u32);
	// blt cr6,0x825eded0
	if (ctx.cr6.lt) goto loc_825EDED0;
	// addi r28,r31,232
	r28.s64 = r31.s64 + 232;
loc_825EDE0C:
	// lwzu r11,4(r28)
	ea = 4 + r28.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r28.u32 = ea;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,224(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x8260a968
	ctx.lr = 0x825EDE20;
	sub_8260A968(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x8260a9c8
	ctx.lr = 0x825EDE30;
	sub_8260A9C8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x825ede0c
	if (!ctx.cr6.gt) goto loc_825EDE0C;
	// b 0x825eded0
	goto loc_825EDED0;
loc_825EDE44:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// bne cr6,0x825ede74
	if (!ctx.cr6.eq) goto loc_825EDE74;
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x8260a968
	ctx.lr = 0x825EDE60;
	sub_8260A968(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x8260a9c8
	ctx.lr = 0x825EDE70;
	sub_8260A9C8(ctx, base);
	// b 0x825eded0
	goto loc_825EDED0;
loc_825EDE74:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r28,1
	r28.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x825eded0
	if (ctx.cr6.lt) goto loc_825EDED0;
	// addi r30,r31,236
	r30.s64 = r31.s64 + 236;
loc_825EDE88:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,948(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 948);
	// lwz r9,948(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 948);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825edebc
	if (ctx.cr6.eq) goto loc_825EDEBC;
	// lwz r11,224(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x8260a968
	ctx.lr = 0x825EDEAC;
	sub_8260A968(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x8260a9c8
	ctx.lr = 0x825EDEBC;
	sub_8260A9C8(ctx, base);
loc_825EDEBC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x825ede88
	if (!ctx.cr6.gt) goto loc_825EDE88;
loc_825EDED0:
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825edef8
	if (ctx.cr0.eq) goto loc_825EDEF8;
	// lwz r30,224(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 224);
	// bl 0x825d7ae0
	ctx.lr = 0x825EDEE8;
	sub_825D7AE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r30,1
	ctx.r3.s64 = r30.s64 + 1;
	// lwz r28,224(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// b 0x825edf14
	goto loc_825EDF14;
loc_825EDEF8:
	// bl 0x825e3420
	ctx.lr = 0x825EDEFC;
	sub_825E3420(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825edf4c
	if (ctx.cr0.eq) goto loc_825EDF4C;
	// lwz r10,236(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 236);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lwz r28,224(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 224);
loc_825EDF14:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8260a968
	ctx.lr = 0x825EDF1C;
	sub_8260A968(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r28,1
	ctx.r3.s64 = r28.s64 + 1;
	// bl 0x8260a968
	ctx.lr = 0x825EDF2C;
	sub_8260A968(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x825edf40
	if (ctx.cr6.lt) goto loc_825EDF40;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bge cr6,0x825edf44
	if (!ctx.cr6.lt) goto loc_825EDF44;
loc_825EDF40:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_825EDF44:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x8260a9c8
	ctx.lr = 0x825EDF4C;
	sub_8260A9C8(ctx, base);
loc_825EDF4C:
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_825EDF50:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825edda4
	if (!ctx.cr6.eq) goto loc_825EDDA4;
	// lwz r27,8(r27)
	r27.u64 = REX_LOAD_U32(r27.u32 + 8);
loc_825EDF60:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825edd9c
	if (!ctx.cr6.eq) goto loc_825EDD9C;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// li r27,0
	r27.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// lwz r30,136(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// b 0x825edfdc
	goto loc_825EDFDC;
loc_825EDF80:
	// lwz r31,28(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 28);
	// b 0x825edfcc
	goto loc_825EDFCC;
loc_825EDF88:
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825edfc8
	if (ctx.cr0.eq) goto loc_825EDFC8;
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x8260a968
	ctx.lr = 0x825EDFA4;
	sub_8260A968(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825edfbc
	if (!ctx.cr0.eq) goto loc_825EDFBC;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// b 0x825edfc0
	goto loc_825EDFC0;
loc_825EDFBC:
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
loc_825EDFC0:
	// stw r11,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r11.u32);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_825EDFC8:
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_825EDFCC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825edf88
	if (!ctx.cr6.eq) goto loc_825EDF88;
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
loc_825EDFDC:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825edf80
	if (!ctx.cr6.eq) goto loc_825EDF80;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r4,r11,16196
	ctx.r4.s64 = ctx.r11.s64 + 16196;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x82130e88
	ctx.lr = 0x825EE000;
	sub_82130E88(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r10,1436(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1436);
	// lwz r3,1444(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1444);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825EE018;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825EE018:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825FC7B8) {
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
	ctx.lr = 0x825FC7C0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r22,164(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// lwz r10,72(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825fc7fc
	if (!ctx.cr6.eq) goto loc_825FC7FC;
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// b 0x825fc7f0
	goto loc_825FC7F0;
loc_825FC7E4:
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// stw r10,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_825FC7F0:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825fc7e4
	if (!ctx.cr6.eq) goto loc_825FC7E4;
loc_825FC7FC:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825fc660
	ctx.lr = 0x825FC808;
	sub_825FC660(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r5,28(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x825d7f88
	ctx.lr = 0x825FC818;
	sub_825D7F88(ctx, base);
	// li r23,0
	r23.s64 = 0;
	// lwz r24,28(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(r24.u32, 1, ctx.xer);
	// ble cr6,0x825fc98c
	if (!ctx.cr6.gt) goto loc_825FC98C;
	// rlwinm r29,r24,2,0,29
	r29.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
loc_825FC82C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r28,r23
	r28.u64 = r23.u64;
	// mr r27,r23
	r27.u64 = r23.u64;
	// li r26,1
	r26.s64 = 1;
	// lwzx r25,r29,r11
	r25.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
loc_825FC840:
	// lwz r11,60(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 60);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825fc858
	if (!ctx.cr6.gt) goto loc_825FC858;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// b 0x825fc864
	goto loc_825FC864;
loc_825FC858:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r28,r10,r27
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
loc_825FC864:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825fc8a0
	if (ctx.cr0.eq) goto loc_825FC8A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,4(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,72(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 72);
	// bl 0x825fc610
	ctx.lr = 0x825FC87C;
	sub_825FC610(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r29,r30
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + r30.u32);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825fc894
	if (!ctx.cr6.lt) goto loc_825FC894;
	// stwx r11,r29,r30
	REX_STORE_U32(r29.u32 + r30.u32, ctx.r11.u32);
loc_825FC894:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// b 0x825fc840
	goto loc_825FC840;
loc_825FC8A0:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r30,1456(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825FC8B4;
	sub_825B33A0(ctx, base);
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// beq 0x825fc8cc
	if (ctx.cr0.eq) goto loc_825FC8CC;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r23.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r23.u32);
	// b 0x825fc8d0
	goto loc_825FC8D0;
loc_825FC8CC:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_825FC8D0:
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r24.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r10,r29,r10
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r10,r29,r10
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stwx r11,r29,r10
	REX_STORE_U32(r29.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x825fc974
	goto loc_825FC974;
loc_825FC928:
	// lwz r28,0(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x825fc610
	ctx.lr = 0x825FC938;
	sub_825FC610(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825fc968
	if (!ctx.cr6.eq) goto loc_825FC968;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// b 0x825fc970
	goto loc_825FC970;
loc_825FC968:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stwx r3,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_825FC970:
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_825FC974:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x825fc928
	if (!ctx.cr6.eq) goto loc_825FC928;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(r24.u32, 1, ctx.xer);
	// bgt cr6,0x825fc82c
	if (ctx.cr6.gt) goto loc_825FC82C;
loc_825FC98C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r23.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x825fc9e8
	if (ctx.cr6.lt) goto loc_825FC9E8;
	// li r10,8
	ctx.r10.s64 = 8;
loc_825FC9A8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825fc9d4
	if (ctx.cr6.eq) goto loc_825FC9D4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stwx r8,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
loc_825FC9D4:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x825fc9a8
	if (!ctx.cr6.gt) goto loc_825FC9A8;
loc_825FC9E8:
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825fca48
	if (ctx.cr6.lt) goto loc_825FCA48;
loc_825FC9F4:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x825fca04
	if (!ctx.cr6.eq) goto loc_825FCA04;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// b 0x825fca1c
	goto loc_825FCA1C;
loc_825FCA04:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
loc_825FCA1C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r3,84(r4)
	REX_STORE_U32(ctx.r4.u32 + 84, ctx.r3.u32);
	// beq cr6,0x825fca38
	if (ctx.cr6.eq) goto loc_825FCA38;
	// bl 0x825fd0e0
	ctx.lr = 0x825FCA38;
	sub_825FD0E0(ctx, base);
loc_825FCA38:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x825fc9f4
	if (!ctx.cr6.gt) goto loc_825FC9F4;
loc_825FCA48:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825fc3a8
	ctx.lr = 0x825FCA50;
	sub_825FC3A8(ctx, base);
	// lwz r11,76(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825fca80
	if (!ctx.cr6.eq) goto loc_825FCA80;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// b 0x825fca74
	goto loc_825FCA74;
loc_825FCA68:
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// stw r10,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_825FCA74:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825fca68
	if (!ctx.cr6.eq) goto loc_825FCA68;
loc_825FCA80:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_826150B8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82615020
	ctx.lr = 0x826150D4;
	sub_82615020(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82615100
	if (ctx.cr6.eq) goto loc_82615100;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82615020
	ctx.lr = 0x826150E8;
	sub_82615020(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82615100
	if (ctx.cr6.eq) goto loc_82615100;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8261511c
	goto loc_8261511C;
loc_82615100:
	// lhz r11,14(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 14);
	// li r10,128
	ctx.r10.s64 = 128;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_8261511C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82615124;
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

DEFINE_REX_FUNC(sub_82617A98) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82617FE8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-36
	ctx.r3.s64 = ctx.r3.s64 + -36;
	// b 0x82617fc0
	sub_82617FC0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826184D0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-36
	ctx.r3.s64 = ctx.r3.s64 + -36;
	// b 0x8261aff0
	sub_8261AFF0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82618818) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82618898
	if (!ctx.cr6.eq) goto loc_82618898;
	// addi r9,r3,64
	ctx.r9.s64 = ctx.r3.s64 + 64;
loc_82618828:
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// xori r6,r11,1
	ctx.r6.u64 = ctx.r11.u64 ^ 1;
	// mulli r10,r11,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// mulli r11,r6,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(12));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
loc_82618848:
	// mfmsr r7
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r7.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r8,0,r9
	ea = ctx.r9.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8261886c
	if (!ctx.cr6.eq) goto loc_8261886C;
	// stwcx. r11,0,r9
	ea = ctx.r9.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82618848
	if (!ctx.cr0.eq) goto loc_82618848;
	// b 0x82618874
	goto loc_82618874;
loc_8261886C:
	// stwcx. r8,0,r9
	ea = ctx.r9.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_82618874:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwsync 
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x8261888c
	if (!ctx.cr6.eq) goto loc_8261888C;
	// db16cyc 
	std::this_thread::yield();
	// b 0x82618828
	goto loc_82618828;
loc_8261888C:
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
loc_82618898:
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// stw r10,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r9,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82624420) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addic r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r11,1
	ctx.r11.s64 = 1;
	// subfe r31,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	r31.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r10,0
	ctx.r10.s64 = 0;
	// and r11,r31,r11
	ctx.r11.u64 = r31.u64 & ctx.r11.u64;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bge cr6,0x826244ec
	if (!ctx.cr6.lt) goto loc_826244EC;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82624450
	if (ctx.cr6.eq) goto loc_82624450;
	// li r3,32
	ctx.r3.s64 = 32;
loc_82624450:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82624460
	if (ctx.cr6.eq) goto loc_82624460;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// ori r3,r11,2
	ctx.r3.u64 = ctx.r11.u64 | 2;
loc_82624460:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82624580
	if (ctx.cr6.eq) goto loc_82624580;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x826244b4
	if (!ctx.cr6.eq) goto loc_826244B4;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// ble cr6,0x82624494
	if (!ctx.cr6.gt) goto loc_82624494;
loc_82624484:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r6,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82624484
	if (ctx.cr6.gt) goto loc_82624484;
loc_82624494:
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi r3,r8,16
	ctx.r3.u64 = ctx.r8.u32 & 0xFFFF;
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_826244B4:
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// ble cr6,0x826244cc
	if (!ctx.cr6.gt) goto loc_826244CC;
loc_826244BC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r6,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x826244bc
	if (ctx.cr6.gt) goto loc_826244BC;
loc_826244CC:
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi r3,r8,16
	ctx.r3.u64 = ctx.r8.u32 & 0xFFFF;
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_826244EC:
	// bne cr6,0x8262457c
	if (!ctx.cr6.eq) goto loc_8262457C;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82624510
	if (ctx.cr6.eq) goto loc_82624510;
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r9,100
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 100, ctx.xer);
	// bne cr6,0x82624510
	if (!ctx.cr6.eq) goto loc_82624510;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82624530
	goto loc_82624530;
loc_82624510:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8262451c
	if (ctx.cr6.eq) goto loc_8262451C;
	// li r10,64
	ctx.r10.s64 = 64;
loc_8262451C:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82624530
	if (ctx.cr6.eq) goto loc_82624530;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
loc_82624530:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// ble cr6,0x8262454c
	if (!ctx.cr6.gt) goto loc_8262454C;
loc_8262453C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r6,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8262453c
	if (ctx.cr6.gt) goto loc_8262453C;
loc_8262454C:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi r3,r8,16
	ctx.r3.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r7,r3,31
	ctx.r7.u64 = ctx.r3.u32 & 0x1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82624580
	if (ctx.cr6.eq) goto loc_82624580;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// ori r3,r11,256
	ctx.r3.u64 = ctx.r11.u64 | 256;
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8262457C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_82624580:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8262B390) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r9,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8262FB70) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// srawi r9,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 12;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lfs f0,2768(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2768);
	ctx.f0.f64 = double(temp.f32);
	// std r8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
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

DEFINE_REX_FUNC(sub_82633C80) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfs f11,10520(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 10520);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,2784(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2784);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,3788(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3788);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x82633d90
	if (ctx.cr6.lt) goto loc_82633D90;
	// addi r8,r5,-3
	ctx.r8.s64 = ctx.r5.s64 + -3;
	// addi r9,r3,-2
	ctx.r9.s64 = ctx.r3.s64 + -2;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
loc_82633CB0:
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82633cc4
	if (!ctx.cr6.lt) goto loc_82633CC4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82633cd0
	goto loc_82633CD0;
loc_82633CC4:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82633cd0
	if (!ctx.cr6.gt) goto loc_82633CD0;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82633CD0:
	// fmuls f10,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f0,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lhz r7,-10(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + -10);
	// sth r7,2(r9)
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r7.u16);
	// bge cr6,0x82633cf8
	if (!ctx.cr6.lt) goto loc_82633CF8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82633d04
	goto loc_82633D04;
loc_82633CF8:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82633d04
	if (!ctx.cr6.gt) goto loc_82633D04;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82633D04:
	// fmuls f10,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lhz r7,-10(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + -10);
	// sth r7,4(r9)
	REX_STORE_U16(ctx.r9.u32 + 4, ctx.r7.u16);
	// bge cr6,0x82633d2c
	if (!ctx.cr6.lt) goto loc_82633D2C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82633d38
	goto loc_82633D38;
loc_82633D2C:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82633d38
	if (!ctx.cr6.gt) goto loc_82633D38;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82633D38:
	// fmuls f10,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lhz r7,-10(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + -10);
	// sth r7,6(r9)
	REX_STORE_U16(ctx.r9.u32 + 6, ctx.r7.u16);
	// bge cr6,0x82633d60
	if (!ctx.cr6.lt) goto loc_82633D60;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82633d6c
	goto loc_82633D6C;
loc_82633D60:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82633d6c
	if (!ctx.cr6.gt) goto loc_82633D6C;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82633D6C:
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// fctiwz f10,f0
	ctx.f10.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f10.u64);
	// lhz r7,-10(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + -10);
	// sthu r7,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r9.u32 = ea;
	// blt cr6,0x82633cb0
	if (ctx.cr6.lt) goto loc_82633CB0;
loc_82633D90:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82633DB4:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82633dc8
	if (!ctx.cr6.lt) goto loc_82633DC8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82633dd4
	goto loc_82633DD4;
loc_82633DC8:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82633dd4
	if (!ctx.cr6.gt) goto loc_82633DD4;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82633DD4:
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fctiwz f10,f0
	ctx.f10.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f10.u64);
	// lhz r9,-10(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + -10);
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x82633db4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82633DB4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8263C3F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,64(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// subf r11,r8,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r8.u64;
	// cmpwi cr6,r11,72
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 72, ctx.xer);
	// blt cr6,0x8263c418
	if (ctx.cr6.lt) goto loc_8263C418;
	// li r11,71
	ctx.r11.s64 = 71;
loc_8263C418:
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// slw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// addi r5,r8,-32192
	ctx.r5.s64 = ctx.r8.s64 + -32192;
	// std r6,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfsx f10,r4,r5
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fmuls f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8263FC70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8263FC78;
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
	// bne cr6,0x8263fd0c
	if (!ctx.cr6.eq) goto loc_8263FD0C;
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
	// bl 0x82638d80
	ctx.lr = 0x8263FCB4;
	sub_82638D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263fd9c
	if (ctx.cr6.lt) goto loc_8263FD9C;
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
	// bne cr6,0x8263fce8
	if (!ctx.cr6.eq) goto loc_8263FCE8;
	// li r11,-64
	ctx.r11.s64 = -64;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_8263FCE8:
	// lwz r11,296(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 296);
	// cmpwi cr6,r10,-32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,296(r30)
	REX_STORE_U32(r30.u32 + 296, ctx.r11.u32);
	// ble cr6,0x8263fd04
	if (!ctx.cr6.gt) goto loc_8263FD04;
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// blt cr6,0x8263fd0c
	if (ctx.cr6.lt) goto loc_8263FD0C;
loc_8263FD04:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r11.u32);
loc_8263FD0C:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263fd9c
	if (ctx.cr6.eq) goto loc_8263FD9C;
	// addi r29,r31,224
	r29.s64 = r31.s64 + 224;
loc_8263FD1C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82638d80
	ctx.lr = 0x8263FD2C;
	sub_82638D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263fd9c
	if (ctx.cr6.lt) goto loc_8263FD9C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,296(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 296);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bne cr6,0x8263fd74
	if (!ctx.cr6.eq) goto loc_8263FD74;
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
	// blt cr6,0x8263fd8c
	if (ctx.cr6.lt) goto loc_8263FD8C;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263fd1c
	if (!ctx.cr6.eq) goto loc_8263FD1C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_8263FD74:
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
loc_8263FD8C:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// li r11,62
	ctx.r11.s64 = 62;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// stw r11,296(r30)
	REX_STORE_U32(r30.u32 + 296, ctx.r11.u32);
loc_8263FD9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82643948) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82643950;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82643984
	if (ctx.cr6.eq) goto loc_82643984;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c468
	ctx.lr = 0x8264397C;
	sub_8264C468(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x826439f4
	if (ctx.cr0.lt) goto loc_826439F4;
loc_82643984:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82643998
	if (ctx.cr6.eq) goto loc_82643998;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826429c8
	ctx.lr = 0x82643998;
	sub_826429C8(ctx, base);
loc_82643998:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826439f4
	if (ctx.cr6.lt) goto loc_826439F4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82615138
	ctx.lr = 0x826439A8;
	sub_82615138(ctx, base);
	// stw r3,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826439d8
	if (ctx.cr0.eq) goto loc_826439D8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82625828
	ctx.lr = 0x826439C0;
	sub_82625828(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82625a70
	ctx.lr = 0x826439D0;
	sub_82625A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x826439e4
	if (!ctx.cr0.eq) goto loc_826439E4;
loc_826439D8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x826439f4
	goto loc_826439F4;
loc_826439E4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826417e8
	ctx.lr = 0x826439EC;
	sub_826417E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82642e68
	ctx.lr = 0x826439F4;
	sub_82642E68(ctx, base);
loc_826439F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8264C008) {
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
	ctx.lr = 0x8264C010;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8264c0c8
	if (ctx.cr6.lt) goto loc_8264C0C8;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,34464
	ctx.r10.u64 = ctx.r11.u64 | 34464;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8264c0c8
	if (ctx.cr6.gt) goto loc_8264C0C8;
	// bl 0x826fadf0
	ctx.lr = 0x8264C044;
	sub_826FADF0(ctx, base);
	// frsp f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x8264C058;
	sub_826E07E0(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8264c078
	if (!ctx.cr6.eq) goto loc_8264C078;
loc_8264C064:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
loc_8264C078:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x8264C088;
	sub_826A2E60(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x8264C094;
	sub_826E07E0(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264c064
	if (ctx.cr6.eq) goto loc_8264C064;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x8264C0B0;
	sub_826A2E60(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
loc_8264C0C8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8264DF40) {
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
	ctx.lr = 0x8264DF48;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82794164
	ctx.lr = 0x8264DF60;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8264dfdc
	if (!ctx.cr0.eq) goto loc_8264DFDC;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r28,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ori r4,r4,19
	ctx.r4.u64 = ctx.r4.u64 | 19;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x827937c4
	ctx.lr = 0x8264DFA0;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8264dfb0
	if (!ctx.cr0.lt) goto loc_8264DFB0;
	// li r31,1627
	r31.s64 = 1627;
	// b 0x8264dfd4
	goto loc_8264DFD4;
loc_8264DFB0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8264dfd0
	if (!ctx.cr6.eq) goto loc_8264DFD0;
	// bl 0x823f0058
	ctx.lr = 0x8264DFBC;
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
	// b 0x8264dfd4
	goto loc_8264DFD4;
loc_8264DFD0:
	// li r31,997
	r31.s64 = 997;
loc_8264DFD4:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82793974
	ctx.lr = 0x8264DFDC;
	__imp__ObDereferenceObject(ctx, base);
loc_8264DFDC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8264FEA0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,396(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 396);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8264FEA8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,180(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8264FF28) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32646
	ctx.r11.s64 = -2139488256;
	// ori r11,r11,4101
	ctx.r11.u64 = ctx.r11.u64 | 4101;
	// subf. r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8264ffac
	if (ctx.cr0.eq) goto loc_8264FFAC;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8264ffa0
	if (ctx.cr6.eq) goto loc_8264FFA0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8264ff94
	if (ctx.cr6.eq) goto loc_8264FF94;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x8264ffa0
	if (ctx.cr6.eq) goto loc_8264FFA0;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// beq cr6,0x8264ff88
	if (ctx.cr6.eq) goto loc_8264FF88;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// beq cr6,0x8264ff7c
	if (ctx.cr6.eq) goto loc_8264FF7C;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// beq cr6,0x8264ff70
	if (ctx.cr6.eq) goto loc_8264FF70;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
loc_8264FF70:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,5051
	ctx.r3.u64 = ctx.r3.u64 | 5051;
	// blr 
	return;
loc_8264FF7C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,5005
	ctx.r3.u64 = ctx.r3.u64 | 5005;
	// blr 
	return;
loc_8264FF88:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1617
	ctx.r3.u64 = ctx.r3.u64 | 1617;
	// blr 
	return;
loc_8264FF94:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,4320
	ctx.r3.u64 = ctx.r3.u64 | 4320;
	// blr 
	return;
loc_8264FFA0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1232
	ctx.r3.u64 = ctx.r3.u64 | 1232;
	// blr 
	return;
loc_8264FFAC:
	// lis r3,-32747
	ctx.r3.s64 = -2146107392;
	// ori r3,r3,20994
	ctx.r3.u64 = ctx.r3.u64 | 20994;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82654278) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
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
	// lwz r7,396(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 396);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x826542a4
	if (!ctx.cr6.eq) goto loc_826542A4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1609
	ctx.r3.u64 = ctx.r3.u64 | 1609;
	// b 0x8265434c
	goto loc_8265434C;
loc_826542A4:
	// lwz r11,396(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 396);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x826542c4
	if (ctx.cr0.eq) goto loc_826542C4;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x82654304
	goto loc_82654304;
loc_826542C4:
	// addi r8,r3,380
	ctx.r8.s64 = ctx.r3.s64 + 380;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_826542D0:
	// lwz r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x826542f0
	if (!ctx.cr6.eq) goto loc_826542F0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x826542d0
	if (ctx.cr6.lt) goto loc_826542D0;
	// b 0x826542fc
	goto loc_826542FC;
loc_826542F0:
	// addi r10,r9,95
	ctx.r10.s64 = ctx.r9.s64 + 95;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
loc_826542FC:
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// li r9,1
	ctx.r9.s64 = 1;
loc_82654304:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r5,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// stw r6,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// stw r7,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// sth r11,144(r1)
	REX_STORE_U16(ctx.r1.u32 + 144, ctx.r11.u16);
	// stb r31,146(r1)
	REX_STORE_U8(ctx.r1.u32 + 146, r31.u8);
	// bl 0x82652bb8
	ctx.lr = 0x8265434C;
	sub_82652BB8(ctx, base);
loc_8265434C:
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

DEFINE_REX_FUNC(sub_8265BB58) {
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
	ctx.lr = 0x8265BB60;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// li r18,0
	r18.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// mr r26,r18
	r26.u64 = r18.u64;
	// cmplwi cr6,r11,169
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 169, ctx.xer);
	// blt cr6,0x8265c130
	if (ctx.cr6.lt) goto loc_8265C130;
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r20,24(r4)
	r20.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// addi r11,r20,-42
	ctx.r11.s64 = r20.s64 + -42;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8265BB94:
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
	// bdnz 0x8265bb94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265BB94;
	// lwz r21,20(r19)
	r21.u64 = REX_LOAD_U32(r19.u32 + 20);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// bne cr6,0x8265bcf0
	if (!ctx.cr6.eq) goto loc_8265BCF0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,400(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 400);
	// bl 0x8265d740
	ctx.lr = 0x8265BBBC;
	sub_8265D740(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8265c130
	if (ctx.cr0.lt) goto loc_8265C130;
	// lwz r11,16(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 16);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8265c130
	if (!ctx.cr6.eq) goto loc_8265C130;
	// mr r30,r18
	r30.u64 = r18.u64;
	// addi r29,r1,128
	r29.s64 = ctx.r1.s64 + 128;
	// addi r31,r28,380
	r31.s64 = r28.s64 + 380;
loc_8265BBE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265bcd8
	if (ctx.cr6.eq) goto loc_8265BCD8;
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm. r10,r10,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8265bc8c
	if (ctx.cr0.eq) goto loc_8265BC8C;
	// ld r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U64(r29.u32 + 0);
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8265bc8c
	if (ctx.cr6.eq) goto loc_8265BC8C;
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm r10,r10,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r10,396(r11)
	REX_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x8264c918
	ctx.lr = 0x8265BC1C;
	sub_8264C918(ctx, base);
	// addi r3,r28,424
	ctx.r3.s64 = r28.s64 + 424;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8265d9a0
	ctx.lr = 0x8265BC28;
	sub_8265D9A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8265c130
	if (ctx.cr0.lt) goto loc_8265C130;
	// li r5,255
	ctx.r5.s64 = 255;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r3,r28,256
	ctx.r3.s64 = r28.s64 + 256;
	// bl 0x8265dd20
	ctx.lr = 0x8265BC40;
	sub_8265DD20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8265c130
	if (ctx.cr0.lt) goto loc_8265C130;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82654388
	ctx.lr = 0x8265BC50;
	sub_82654388(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8265c130
	if (ctx.cr0.lt) goto loc_8265C130;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
	// stw r10,396(r11)
	REX_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwz r3,12(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 12);
	// lwz r11,180(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 180);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,180(r28)
	REX_STORE_U32(r28.u32 + 180, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265BC8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265BC8C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,396(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265bcd8
	if (ctx.cr0.eq) goto loc_8265BCD8;
	// ld r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x8265bcd8
	if (!ctx.cr6.eq) goto loc_8265BCD8;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// slw r4,r11,r30
	ctx.r4.u64 = r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r30.u8 & 0x3F));
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826537e0
	ctx.lr = 0x8265BCBC;
	sub_826537E0(ctx, base);
	// lwz r11,740(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 740);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265bcd8
	if (ctx.cr0.eq) goto loc_8265BCD8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82656c50
	ctx.lr = 0x8265BCD8;
	sub_82656C50(ctx, base);
loc_8265BCD8:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// blt cr6,0x8265bbe0
	if (ctx.cr6.lt) goto loc_8265BBE0;
	// b 0x8265c130
	goto loc_8265C130;
loc_8265BCF0:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r31,r21
	r31.u64 = r21.u64;
	// addi r25,r1,112
	r25.s64 = ctx.r1.s64 + 112;
	// addi r23,r11,-8
	r23.s64 = ctx.r11.s64 + -8;
	// addi r24,r10,-4
	r24.s64 = ctx.r10.s64 + -4;
loc_8265BD08:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r29,r1,128
	r29.s64 = ctx.r1.s64 + 128;
	// ld r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 16);
	// rlwinm r27,r11,3,0,28
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r22,88(r31)
	r22.u64 = REX_LOAD_U32(r31.u32 + 88);
	// ldx r9,r27,r29
	ctx.r9.u64 = REX_LOAD_U64(r27.u32 + r29.u32);
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x8265be44
	if (ctx.cr6.eq) goto loc_8265BE44;
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265bfc8
	if (ctx.cr0.eq) goto loc_8265BFC8;
	// stwu r31,4(r24)
	ea = 4 + r24.u32;
	REX_STORE_U32(ea, r31.u32);
	r24.u32 = ea;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stdu r10,8(r23)
	ea = 8 + r23.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	r23.u32 = ea;
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r11.u32);
	// lwz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 28);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8265bd90
	if (!ctx.cr6.eq) goto loc_8265BD90;
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8265bd90
	if (ctx.cr6.lt) goto loc_8265BD90;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x8265bd90
	if (!ctx.cr6.lt) goto loc_8265BD90;
	// lwz r3,12(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265BD84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r11.u32);
loc_8265BD90:
	// cmplw cr6,r31,r21
	ctx.cr6.compare<uint32_t>(r31.u32, r21.u32, ctx.xer);
	// bne cr6,0x8265bd9c
	if (!ctx.cr6.eq) goto loc_8265BD9C;
	// mr r21,r22
	r21.u64 = r22.u64;
loc_8265BD9C:
	// lwz r11,396(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 396);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8265bdb4
	if (!ctx.cr6.eq) goto loc_8265BDB4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8265b4f8
	ctx.lr = 0x8265BDB4;
	sub_8265B4F8(ctx, base);
loc_8265BDB4:
	// lwz r3,12(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265BDCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,396(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 396);
	// addi r11,r28,424
	ctx.r11.s64 = r28.s64 + 424;
	// rlwinm r10,r10,0,5,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r10,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r10.u32);
	// lwz r10,180(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 180);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,180(r28)
	REX_STORE_U32(r28.u32 + 180, ctx.r10.u32);
	// lwz r10,428(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 428);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ld r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 16);
	// beq cr6,0x8265be0c
	if (ctx.cr6.eq) goto loc_8265BE0C;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265BE0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265BE0C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r28,256
	ctx.r3.s64 = r28.s64 + 256;
	// bl 0x8265ddd0
	ctx.lr = 0x8265BE18;
	sub_8265DDD0(ctx, base);
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265be34
	if (ctx.cr0.eq) goto loc_8265BE34;
	// lbz r11,171(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 171);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,171(r28)
	REX_STORE_U8(r28.u32 + 171, ctx.r11.u8);
	// b 0x8265bfc8
	goto loc_8265BFC8;
loc_8265BE34:
	// lbz r11,170(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 170);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,170(r28)
	REX_STORE_U8(r28.u32 + 170, ctx.r11.u8);
	// b 0x8265bfc8
	goto loc_8265BFC8;
loc_8265BE44:
	// mulli r10,r11,42
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(42));
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// stw r31,0(r25)
	REX_STORE_U32(r25.u32 + 0, r31.u32);
	// add r30,r10,r20
	r30.u64 = ctx.r10.u64 + r20.u64;
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 24);
	// beq 0x8265be74
	if (ctx.cr0.eq) goto loc_8265BE74;
	// rlwinm. r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// bne 0x8265be88
	if (!ctx.cr0.eq) goto loc_8265BE88;
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// b 0x8265be84
	goto loc_8265BE84;
loc_8265BE74:
	// rlwinm. r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// beq 0x8265be88
	if (ctx.cr0.eq) goto loc_8265BE88;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
loc_8265BE84:
	// stw r11,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r11.u32);
loc_8265BE88:
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// rlwinm. r9,r11,0,7,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lbz r9,168(r20)
	ctx.r9.u64 = REX_LOAD_U8(r20.u32 + 168);
	// beq 0x8265bea8
	if (ctx.cr0.eq) goto loc_8265BEA8;
	// rlwinm. r9,r9,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8265beb8
	if (!ctx.cr0.eq) goto loc_8265BEB8;
	// rlwinm r11,r11,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// b 0x8265beb4
	goto loc_8265BEB4;
loc_8265BEA8:
	// rlwinm. r9,r9,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8265beb8
	if (ctx.cr0.eq) goto loc_8265BEB8;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
loc_8265BEB4:
	// stw r11,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r11.u32);
loc_8265BEB8:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8265bed8
	if (ctx.cr6.eq) goto loc_8265BED8;
	// lwz r9,396(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 396);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// ori r11,r9,1024
	ctx.r11.u64 = ctx.r9.u64 | 1024;
	// stw r11,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r11.u32);
loc_8265BED8:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8265bef8
	if (ctx.cr6.eq) goto loc_8265BEF8;
	// lwz r9,396(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 396);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// ori r11,r9,1024
	ctx.r11.u64 = ctx.r9.u64 | 1024;
	// stw r11,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r11.u32);
loc_8265BEF8:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8265bf18
	if (ctx.cr6.eq) goto loc_8265BF18;
	// lwz r9,396(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 396);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// ori r11,r9,1024
	ctx.r11.u64 = ctx.r9.u64 | 1024;
	// stw r11,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r11.u32);
loc_8265BF18:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8265bf38
	if (ctx.cr6.eq) goto loc_8265BF38;
	// lwz r9,396(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 396);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// ori r11,r9,1024
	ctx.r11.u64 = ctx.r9.u64 | 1024;
	// stw r11,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r11.u32);
loc_8265BF38:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r9,396(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 396);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwimi r11,r10,2,26,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x20) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFDF);
	// rlwinm r7,r10,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// rlwimi r8,r11,2,24,25
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF3F);
	// rlwinm r11,r10,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// rlwinm r10,r8,2,22,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x380;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// subfe r5,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r10,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFFFFC000;
	// rlwinm r9,r9,0,12,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r10,r11,18,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// stw r11,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r11.u32);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x8265bfa8
	if (ctx.cr6.eq) goto loc_8265BFA8;
	// rlwimi r11,r5,14,17,17
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0x4000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFBFFF);
	// rlwinm. r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r11.u32);
	// beq 0x8265bfa8
	if (ctx.cr0.eq) goto loc_8265BFA8;
	// lwz r3,12(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265BFA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265BFA8:
	// lbz r10,394(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 394);
	// lbz r11,26(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 26);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8265bfc0
	if (ctx.cr6.eq) goto loc_8265BFC0;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8265c0ac
	if (!ctx.cr6.eq) goto loc_8265C0AC;
loc_8265BFC0:
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// stdx r18,r27,r29
	REX_STORE_U64(r27.u32 + r29.u32, r18.u64);
loc_8265BFC8:
	// mr r31,r22
	r31.u64 = r22.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// bne cr6,0x8265bd08
	if (!ctx.cr6.eq) goto loc_8265BD08;
	// lwz r11,20(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 20);
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8265bff0
	if (ctx.cr6.eq) goto loc_8265BFF0;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// lwz r4,16(r19)
	ctx.r4.u64 = REX_LOAD_U32(r19.u32 + 16);
	// lwz r3,400(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 400);
	// bl 0x8265d768
	ctx.lr = 0x8265BFF0;
	sub_8265D768(ctx, base);
loc_8265BFF0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8265c084
	if (ctx.cr6.eq) goto loc_8265C084;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,32(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8264df40
	ctx.lr = 0x8265C00C;
	sub_8264DF40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265c020
	if (ctx.cr0.eq) goto loc_8265C020;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823ede70
	ctx.lr = 0x8265C01C;
	sub_823EDE70(ctx, base);
	// b 0x8265c0ac
	goto loc_8265C0AC;
loc_8265C020:
	// lwz r3,420(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265c04c
	if (ctx.cr6.eq) goto loc_8265C04C;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82660120
	ctx.lr = 0x8265C04C;
	sub_82660120(ctx, base);
loc_8265C04C:
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r31,r26
	r31.u64 = r26.u64;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8265C05C:
	// lwzu r29,-4(r30)
	ea = -4 + r30.u32;
	r29.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bl 0x826522e8
	ctx.lr = 0x8265C074;
	sub_826522E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8265ecf8
	ctx.lr = 0x8265C07C;
	sub_8265ECF8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8265c05c
	if (!ctx.cr6.eq) goto loc_8265C05C;
loc_8265C084:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// lwz r4,16(r19)
	ctx.r4.u64 = REX_LOAD_U32(r19.u32 + 16);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82656d70
	ctx.lr = 0x8265C0A4;
	sub_82656D70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8265c0fc
	if (!ctx.cr0.lt) goto loc_8265C0FC;
loc_8265C0AC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8265c0d8
	if (ctx.cr6.eq) goto loc_8265C0D8;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8265C0C0:
	// lwzu r3,-4(r31)
	ea = -4 + r31.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// addi r26,r26,-1
	r26.s64 = r26.s64 + -1;
	// bl 0x8265f6a8
	ctx.lr = 0x8265C0CC;
	sub_8265F6A8(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// stw r18,0(r31)
	REX_STORE_U32(r31.u32 + 0, r18.u32);
	// bne cr6,0x8265c0c0
	if (!ctx.cr6.eq) goto loc_8265C0C0;
loc_8265C0D8:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x8265c130
	if (ctx.cr6.eq) goto loc_8265C130;
	// lwz r11,740(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 740);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8265c130
	if (!ctx.cr0.eq) goto loc_8265C130;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8265bac0
	ctx.lr = 0x8265C0F8;
	sub_8265BAC0(ctx, base);
	// b 0x8265c130
	goto loc_8265C130;
loc_8265C0FC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8265c130
	if (ctx.cr6.eq) goto loc_8265C130;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8265C110:
	// lwzu r11,-4(r31)
	ea = -4 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// addi r26,r26,-1
	r26.s64 = r26.s64 + -1;
	// stw r18,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, r18.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8265f6a8
	ctx.lr = 0x8265C124;
	sub_8265F6A8(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// stw r18,0(r31)
	REX_STORE_U32(r31.u32 + 0, r18.u32);
	// bne cr6,0x8265c110
	if (!ctx.cr6.eq) goto loc_8265C110;
loc_8265C130:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_8267D530) {
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
	ctx.lr = 0x8267D538;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8267d65c
	if (!ctx.cr6.eq) goto loc_8267D65C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,44(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r4,40(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// bl 0x82680e30
	ctx.lr = 0x8267D560;
	sub_82680E30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8267d65c
	if (ctx.cr0.eq) goto loc_8267D65C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r30,1080(r31)
	r30.u64 = REX_LOAD_U16(r31.u32 + 1080);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r11,5(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm r10,r10,8,22,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x300;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82678af8
	ctx.lr = 0x8267D58C;
	sub_82678AF8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// subf r10,r30,r11
	ctx.r10.u64 = ctx.r11.u64 - r30.u64;
	// extsh r27,r10
	r27.s64 = ctx.r10.s16;
	// cmpwi cr6,r27,-256
	ctx.cr6.compare<int32_t>(r27.s32, -256, ctx.xer);
	// blt cr6,0x8267d65c
	if (ctx.cr6.lt) goto loc_8267D65C;
	// cmpwi cr6,r27,256
	ctx.cr6.compare<int32_t>(r27.s32, 256, ctx.xer);
	// bgt cr6,0x8267d65c
	if (ctx.cr6.gt) goto loc_8267D65C;
	// ld r10,1056(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 1056);
	// extsh r30,r10
	r30.s64 = ctx.r10.s16;
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8267d65c
	if (ctx.cr0.lt) goto loc_8267D65C;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8267d5f4
	if (ctx.cr6.eq) goto loc_8267D5F4;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82686890
	ctx.lr = 0x8267D5DC;
	sub_82686890(ctx, base);
	// lhz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8267d65c
	if (!ctx.cr0.gt) goto loc_8267D65C;
	// addi r26,r1,96
	r26.s64 = ctx.r1.s64 + 96;
	// b 0x8267d5f8
	goto loc_8267D5F8;
loc_8267D5F4:
	// li r26,0
	r26.s64 = 0;
loc_8267D5F8:
	// lwz r29,824(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 824);
	// stw r29,468(r31)
	REX_STORE_U32(r31.u32 + 468, r29.u32);
	// bl 0x823ef900
	ctx.lr = 0x8267D604;
	sub_823EF900(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt cr6,0x8267d650
	if (ctx.cr6.lt) goto loc_8267D650;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267d208
	ctx.lr = 0x8267D628;
	sub_8267D208(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x8267cd38
	ctx.lr = 0x8267D648;
	sub_8267CD38(ctx, base);
	// or. r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 | r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267d65c
	if (!ctx.cr0.eq) goto loc_8267D65C;
loc_8267D650:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,688
	ctx.r3.s64 = r31.s64 + 688;
	// bl 0x82684320
	ctx.lr = 0x8267D65C;
	sub_82684320(ctx, base);
loc_8267D65C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82683B90) {
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
	ctx.lr = 0x82683B98;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82683bc8
	if (ctx.cr0.eq) goto loc_82683BC8;
loc_82683BB8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x82681598
	ctx.lr = 0x82683BC4;
	sub_82681598(ctx, base);
	// b 0x82683c44
	goto loc_82683C44;
loc_82683BC8:
	// lbz r11,15(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 15);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82683d34
	if (ctx.cr6.eq) goto loc_82683D34;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r11,14(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 14);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82683bf0
	if (ctx.cr6.eq) goto loc_82683BF0;
	// beq 0x82683bf4
	if (ctx.cr0.eq) goto loc_82683BF4;
	// b 0x82683d34
	goto loc_82683D34;
loc_82683BF0:
	// beq 0x82683d34
	if (ctx.cr0.eq) goto loc_82683D34;
loc_82683BF4:
	// subf r10,r3,r30
	ctx.r10.u64 = r30.u64 - ctx.r3.u64;
	// ld r9,816(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 816);
	// li r8,24
	ctx.r8.s64 = 24;
	// addi r7,r10,-48
	ctx.r7.s64 = ctx.r10.s64 + -48;
	// rldicr r10,r9,5,58
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 5) & 0xFFFFFFFFFFFFFFE0;
	// divw r9,r7,r8
	ctx.r9.u64 = uint32_t((ctx.r8.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r7.s32 / ctx.r8.s32 : 0);
	// rlwinm. r8,r11,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bne 0x82683c50
	if (!ctx.cr0.eq) goto loc_82683C50;
	// addi r11,r31,60
	ctx.r11.s64 = r31.s64 + 60;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x826872e8
	ctx.lr = 0x82683C30;
	sub_826872E8(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x82683c44
	if (!ctx.cr6.eq) goto loc_82683C44;
loc_82683C3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826836c8
	ctx.lr = 0x82683C44;
	sub_826836C8(ctx, base);
loc_82683C44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82683C48:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_82683C50:
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82683c78
	if (!ctx.cr0.eq) goto loc_82683C78;
	// ld r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 72);
	// li r9,1
	ctx.r9.s64 = 1;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// bge cr6,0x82683bb8
	if (!ctx.cr6.lt) goto loc_82683BB8;
	// lhz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 80);
	// b 0x82683c84
	goto loc_82683C84;
loc_82683C78:
	// lhz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_82683C84:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// clrlwi r27,r11,16
	r27.u64 = ctx.r11.u32 & 0xFFFF;
	// lhz r11,10(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 10);
	// subf r11,r27,r11
	ctx.r11.u64 = ctx.r11.u64 - r27.u64;
	// lhz r10,1074(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 1074);
	// rotlwi r10,r10,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 5);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82683d34
	if (ctx.cr6.gt) goto loc_82683D34;
	// addi r29,r31,48
	r29.s64 = r31.s64 + 48;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826872e8
	ctx.lr = 0x82683CB8;
	sub_826872E8(ctx, base);
	// lbz r11,15(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 15);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82683cd4
	if (!ctx.cr6.eq) goto loc_82683CD4;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x82683ce8
	goto loc_82683CE8;
loc_82683CD4:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82683ce8
	if (!ctx.cr6.eq) goto loc_82683CE8;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
loc_82683CE8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x82683c44
	if (!ctx.cr6.eq) goto loc_82683C44;
	// lhz r11,10(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 10);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bne cr6,0x82683c44
	if (!ctx.cr6.eq) goto loc_82683C44;
	// lwz r6,100(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82683d18
	if (!ctx.cr6.eq) goto loc_82683D18;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82683c3c
	if (!ctx.cr6.gt) goto loc_82683C3C;
loc_82683D18:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lhz r7,80(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,96(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 96);
	// bl 0x82682f88
	ctx.lr = 0x82683D2C;
	sub_82682F88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82683c3c
	if (!ctx.cr0.eq) goto loc_82683C3C;
loc_82683D34:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4109
	ctx.r3.u64 = ctx.r3.u64 | 4109;
	// b 0x82683c48
	goto loc_82683C48;
}

DEFINE_REX_FUNC(sub_8268EEA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8268EEA8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8268ef1c
	if (ctx.cr6.eq) goto loc_8268EF1C;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8268eed4
	if (!ctx.cr6.eq) goto loc_8268EED4;
	// stw r28,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r28.u32);
loc_8268EED4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// bl 0x823ef5f0
	ctx.lr = 0x8268EEF0;
	sub_823EF5F0(ctx, base);
	// li r10,259
	ctx.r10.s64 = 259;
	// stw r28,4(r29)
	REX_STORE_U32(r29.u32 + 4, r28.u32);
	// addi r11,r30,8
	ctx.r11.s64 = r30.s64 + 8;
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8268ef28
	if (ctx.cr6.eq) goto loc_8268EF28;
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// b 0x8268ef2c
	goto loc_8268EF2C;
loc_8268EF1C:
	// lis r28,-32761
	r28.s64 = -2147024896;
	// ori r28,r28,122
	r28.u64 = r28.u64 | 122;
	// b 0x8268ef30
	goto loc_8268EF30;
loc_8268EF28:
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
loc_8268EF2C:
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
loc_8268EF30:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826948E0) {
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
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82694934
	if (ctx.cr6.eq) goto loc_82694934;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r30,-32119
	r30.s64 = -2104950784;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82694924
	if (ctx.cr6.eq) goto loc_82694924;
	// lwz r11,-5956(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -5956);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269491C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_82694924:
	// lwz r11,-5956(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -5956);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82694934;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82694934:
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

DEFINE_REX_FUNC(sub_82697970) {
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
	// bl 0x826a1c8c
	ctx.lr = 0x82697978;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x826a2c9c
	ctx.lr = 0x82697980;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// fmr f26,f3
	f26.f64 = ctx.f3.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f25,f4
	f25.f64 = ctx.f4.f64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// fmr f28,f5
	f28.f64 = ctx.f5.f64;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// lfs f30,3720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	f30.f64 = double(temp.f32);
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// fmuls f13,f1,f30
	ctx.f13.f64 = double(float(ctx.f1.f64 * f30.f64));
	// mr r17,r6
	r17.u64 = ctx.r6.u64;
	// lfs f0,19288(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 19288);
	ctx.f0.f64 = double(temp.f32);
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// fdivs f31,f0,f1
	f31.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// fctiwz f0,f13
	ctx.f0.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r31,116(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f0,f0,f31,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, f30.f64)));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// blt cr6,0x82697a00
	if (ctx.cr6.lt) goto loc_82697A00;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_82697A00:
	// cmpwi cr6,r31,100
	ctx.cr6.compare<int32_t>(r31.s32, 100, ctx.xer);
	// ble cr6,0x82697a0c
	if (!ctx.cr6.gt) goto loc_82697A0C;
	// li r31,100
	r31.s64 = 100;
loc_82697A0C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4112);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f2,f13
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82697a30
	if (!ctx.cr6.lt) goto loc_82697A30;
	// li r11,100
	ctx.r11.s64 = 100;
	// twllei r31,0
	if (r31.s32 == 0 || r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r28,r11,r31
	r28.u64 = uint32_t((r31.s32 && !(ctx.r11.s32 == INT32_MIN && r31.s32 == -1)) ? ctx.r11.s32 / r31.s32 : 0);
	// b 0x82697a34
	goto loc_82697A34;
loc_82697A30:
	// li r28,1
	r28.s64 = 1;
loc_82697A34:
	// extsw r11,r28
	ctx.r11.s64 = r28.s32;
	// fmuls f13,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * f29.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mullw r21,r28,r31
	r21.s64 = int64_t(r28.s32) * int64_t(r31.s32);
	// lfs f0,-15428(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -15428);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r22,r11,3196
	r22.s64 = ctx.r11.s64 + 3196;
	// li r27,0
	r27.s64 = 0;
	// addi r11,r22,28
	ctx.r11.s64 = r22.s64 + 28;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r29,116(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mullw r20,r29,r28
	r20.s64 = int64_t(r29.s32) * int64_t(r28.s32);
	// fcfid f0,f12
	ctx.f0.f64 = double(ctx.f12.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f27,f31,f0
	f27.f64 = double(float(f31.f64 / ctx.f0.f64));
loc_82697A80:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(f29.f64, ctx.f0.f64);
	// bgt cr6,0x82697aa4
	if (ctx.cr6.gt) goto loc_82697AA4;
	// addi r10,r22,28
	ctx.r10.s64 = r22.s64 + 28;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82697a80
	if (ctx.cr6.lt) goto loc_82697A80;
loc_82697AA4:
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// bl 0x82695b58
	ctx.lr = 0x82697AAC;
	sub_82695B58(ctx, base);
	// addi r11,r22,4
	ctx.r11.s64 = r22.s64 + 4;
	// lwz r30,388(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// rlwinm r7,r27,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r25,396(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f28.f64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// fmr f3,f27
	ctx.f3.f64 = f27.f64;
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// lfsx f0,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// fmadds f13,f1,f30,f0
	ctx.f13.f64 = double(float(std::fma(ctx.f1.f64, f30.f64, ctx.f0.f64)));
	// lfs f0,3244(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3244);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bl 0x826995e0
	ctx.lr = 0x82697AFC;
	sub_826995E0(ctx, base);
	// lfs f13,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// lfs f11,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,3252(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3252);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,13956(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 13956);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,3716(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f13,f13,f0,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f11.f64)));
	// fmuls f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x82697b44
	if (!ctx.cr6.gt) goto loc_82697B44;
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x82697b54
	goto loc_82697B54;
loc_82697B44:
	// fsubs f0,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - f30.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
loc_82697B54:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// stfs f31,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r26.u32 + 8, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,11196(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 11196);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f1,f12,f0,f13
	ctx.f1.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f13.f64)));
	// stfs f1,0(r26)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r26.u32 + 0, temp.u32);
	// bl 0x826978c8
	ctx.lr = 0x82697B90;
	sub_826978C8(ctx, base);
	// addi r10,r31,-1
	ctx.r10.s64 = r31.s64 + -1;
	// addi r11,r21,-1
	ctx.r11.s64 = r21.s64 + -1;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// blt cr6,0x82697bfc
	if (ctx.cr6.lt) goto loc_82697BFC;
	// subf r9,r29,r10
	ctx.r9.u64 = ctx.r10.u64 - r29.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r28,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
loc_82697BBC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x82697bf0
	if (!ctx.cr6.gt) goto loc_82697BF0;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// subf r5,r30,r25
	ctx.r5.u64 = r25.u64 - r30.u64;
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - r28.u64;
	// subf r8,r4,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r4.u64;
loc_82697BD8:
	// lfsx f0,r7,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r5,r9
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r9.u32, temp.u32);
	// lfsx f0,r7,r30
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bdnz 0x82697bd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82697BD8;
loc_82697BF0:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// bne 0x82697bbc
	if (!ctx.cr0.eq) goto loc_82697BBC;
loc_82697BFC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82697c60
	if (ctx.cr6.lt) goto loc_82697C60;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r30,r25
	ctx.r6.u64 = r25.u64 - r30.u64;
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + r30.u64;
loc_82697C10:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// stfsx f0,r9,r25
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + r25.u32, temp.u32);
	// lfs f0,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r30
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + r30.u32, temp.u32);
	// ble cr6,0x82697c54
	if (!ctx.cr6.gt) goto loc_82697C54;
	// addi r9,r28,-1
	ctx.r9.s64 = r28.s64 + -1;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82697C44:
	// stfsx f10,r7,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r6.u32, temp.u32);
	// stfs f10,0(r7)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// bdnz 0x82697c44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82697C44;
loc_82697C54:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// bge 0x82697c10
	if (!ctx.cr0.lt) goto loc_82697C10;
loc_82697C60:
	// cmpw cr6,r20,r21
	ctx.cr6.compare<int32_t>(r20.s32, r21.s32, ctx.xer);
	// bge cr6,0x82697ce4
	if (!ctx.cr6.lt) goto loc_82697CE4;
	// subf r9,r20,r21
	ctx.r9.u64 = r21.u64 - r20.u64;
	// lfs f0,0(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r22.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r20,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r9,428(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
loc_82697C84:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// srawi r11,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 16;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// mulli r7,r11,16807
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(16807));
	// mulli r8,r8,16807
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(16807));
	// rlwinm r11,r7,16,1,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0x7FFF0000;
	// rlwinm r7,r7,17,15,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 17) & 0x1FFFF;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// std r8,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f13,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82697c84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82697C84;
loc_82697CE4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// lfs f13,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// ble cr6,0x82697d3c
	if (!ctx.cr6.gt) goto loc_82697D3C;
	// addi r11,r25,-4
	ctx.r11.s64 = r25.s64 + -4;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_82697CFC:
	// lfsu f0,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fadds f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// bdnz 0x82697cfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82697CFC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,13256(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 13256);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x82697d1c
	if (!ctx.cr6.gt) goto loc_82697D1C;
	// fdivs f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
loc_82697D1C:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// ble cr6,0x82697d3c
	if (!ctx.cr6.gt) goto loc_82697D3C;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
	// addi r11,r25,-4
	ctx.r11.s64 = r25.s64 + -4;
loc_82697D2C:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82697d2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82697D2C;
loc_82697D3C:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// fmr f3,f25
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f25.f64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// fmr f2,f26
	ctx.f2.f64 = f26.f64;
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// li r5,160
	ctx.r5.s64 = 160;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82693a38
	ctx.lr = 0x82697D68;
	sub_82693A38(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x826a2ce8
	ctx.lr = 0x82697D74;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(__restvmx_126) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
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

DEFINE_REX_FUNC(sub_826A4760) {
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
	PPCVRegister v64{};
	PPCVRegister v65{};
	PPCVRegister v66{};
	PPCVRegister v67{};
	PPCVRegister v68{};
	PPCVRegister v69{};
	PPCVRegister v70{};
	PPCVRegister v71{};
	PPCVRegister v72{};
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
	// lis r4,-32106
	ctx.r4.s64 = -2104098816;
	// lwz r0,31524(r4)
	ctx.r0.u64 = REX_LOAD_U32(ctx.r4.u32 + 31524);
	// cmpwi r0,0
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bnectr 
	if (!ctx.cr0.eq) {
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
		return;
	}
	// mflr r0
	ctx.r0.u64 = ctx.lr;
	// mfcr r4
	ctx.r4.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r4.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r4.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r4.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r4.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r4.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r4.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r4.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r4.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r4.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r4.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r4.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r4.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r4.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r4.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r4.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r4.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r4.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r4.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r4.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r4.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r4.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r4.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r4.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r4.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r4.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r4.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r4.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r4.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r4.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r4.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r4.u64 |= ctx.cr7.so ? 0x1 : 0;
	// stfd f14,0(r3)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r3.u32 + 0, f14.u64);
	// stfd f15,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, f15.u64);
	// stfd f16,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, f16.u64);
	// stfd f17,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, f17.u64);
	// stfd f18,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, f18.u64);
	// stfd f19,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, f19.u64);
	// stfd f20,48(r3)
	REX_STORE_U64(ctx.r3.u32 + 48, f20.u64);
	// stfd f21,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, f21.u64);
	// stfd f22,64(r3)
	REX_STORE_U64(ctx.r3.u32 + 64, f22.u64);
	// stfd f23,72(r3)
	REX_STORE_U64(ctx.r3.u32 + 72, f23.u64);
	// stfd f24,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, f24.u64);
	// stfd f25,88(r3)
	REX_STORE_U64(ctx.r3.u32 + 88, f25.u64);
	// stfd f26,96(r3)
	REX_STORE_U64(ctx.r3.u32 + 96, f26.u64);
	// stfd f27,104(r3)
	REX_STORE_U64(ctx.r3.u32 + 104, f27.u64);
	// stfd f28,112(r3)
	REX_STORE_U64(ctx.r3.u32 + 112, f28.u64);
	// stfd f29,120(r3)
	REX_STORE_U64(ctx.r3.u32 + 120, f29.u64);
	// stfd f30,128(r3)
	REX_STORE_U64(ctx.r3.u32 + 128, f30.u64);
	// stfd f31,136(r3)
	REX_STORE_U64(ctx.r3.u32 + 136, f31.u64);
	// std r13,152(r3)
	REX_STORE_U64(ctx.r3.u32 + 152, ctx.r13.u64);
	// std r14,160(r3)
	REX_STORE_U64(ctx.r3.u32 + 160, r14.u64);
	// std r15,168(r3)
	REX_STORE_U64(ctx.r3.u32 + 168, r15.u64);
	// std r16,176(r3)
	REX_STORE_U64(ctx.r3.u32 + 176, r16.u64);
	// std r17,184(r3)
	REX_STORE_U64(ctx.r3.u32 + 184, r17.u64);
	// std r18,192(r3)
	REX_STORE_U64(ctx.r3.u32 + 192, r18.u64);
	// std r19,200(r3)
	REX_STORE_U64(ctx.r3.u32 + 200, r19.u64);
	// std r20,208(r3)
	REX_STORE_U64(ctx.r3.u32 + 208, r20.u64);
	// std r21,216(r3)
	REX_STORE_U64(ctx.r3.u32 + 216, r21.u64);
	// std r22,224(r3)
	REX_STORE_U64(ctx.r3.u32 + 224, r22.u64);
	// std r23,232(r3)
	REX_STORE_U64(ctx.r3.u32 + 232, r23.u64);
	// std r24,240(r3)
	REX_STORE_U64(ctx.r3.u32 + 240, r24.u64);
	// std r25,248(r3)
	REX_STORE_U64(ctx.r3.u32 + 248, r25.u64);
	// std r26,256(r3)
	REX_STORE_U64(ctx.r3.u32 + 256, r26.u64);
	// std r27,264(r3)
	REX_STORE_U64(ctx.r3.u32 + 264, r27.u64);
	// std r28,272(r3)
	REX_STORE_U64(ctx.r3.u32 + 272, r28.u64);
	// std r29,280(r3)
	REX_STORE_U64(ctx.r3.u32 + 280, r29.u64);
	// std r30,288(r3)
	REX_STORE_U64(ctx.r3.u32 + 288, r30.u64);
	// std r31,296(r3)
	REX_STORE_U64(ctx.r3.u32 + 296, r31.u64);
	// li r5,320
	ctx.r5.s64 = 320;
	// stvlx128 v64,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v64.u8[15 - i]);
	// li r5,336
	ctx.r5.s64 = 336;
	// stvlx128 v65,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v65.u8[15 - i]);
	// li r5,352
	ctx.r5.s64 = 352;
	// stvlx128 v66,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v66.u8[15 - i]);
	// li r5,368
	ctx.r5.s64 = 368;
	// stvlx128 v67,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v67.u8[15 - i]);
	// li r5,384
	ctx.r5.s64 = 384;
	// stvlx128 v68,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v68.u8[15 - i]);
	// li r5,400
	ctx.r5.s64 = 400;
	// stvlx128 v69,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v69.u8[15 - i]);
	// li r5,416
	ctx.r5.s64 = 416;
	// stvlx128 v70,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v70.u8[15 - i]);
	// li r5,432
	ctx.r5.s64 = 432;
	// stvlx128 v71,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v71.u8[15 - i]);
	// li r5,448
	ctx.r5.s64 = 448;
	// stvlx128 v72,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v72.u8[15 - i]);
	// li r5,464
	ctx.r5.s64 = 464;
	// stvlx128 v73,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v73.u8[15 - i]);
	// li r5,480
	ctx.r5.s64 = 480;
	// stvlx128 v74,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v74.u8[15 - i]);
	// li r5,496
	ctx.r5.s64 = 496;
	// stvlx128 v75,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v75.u8[15 - i]);
	// li r5,512
	ctx.r5.s64 = 512;
	// stvlx128 v76,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v76.u8[15 - i]);
	// li r5,528
	ctx.r5.s64 = 528;
	// stvlx128 v77,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v77.u8[15 - i]);
	// li r5,544
	ctx.r5.s64 = 544;
	// stvlx128 v78,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v78.u8[15 - i]);
	// li r5,560
	ctx.r5.s64 = 560;
	// stvlx128 v79,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v79.u8[15 - i]);
	// li r5,576
	ctx.r5.s64 = 576;
	// stvlx128 v80,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v80.u8[15 - i]);
	// li r5,592
	ctx.r5.s64 = 592;
	// stvlx128 v81,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v81.u8[15 - i]);
	// li r5,608
	ctx.r5.s64 = 608;
	// stvlx128 v82,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v82.u8[15 - i]);
	// li r5,624
	ctx.r5.s64 = 624;
	// stvlx128 v83,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v83.u8[15 - i]);
	// li r5,640
	ctx.r5.s64 = 640;
	// stvlx128 v84,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v84.u8[15 - i]);
	// li r5,656
	ctx.r5.s64 = 656;
	// stvlx128 v85,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v85.u8[15 - i]);
	// li r5,672
	ctx.r5.s64 = 672;
	// stvlx128 v86,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v86.u8[15 - i]);
	// li r5,688
	ctx.r5.s64 = 688;
	// stvlx128 v87,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v87.u8[15 - i]);
	// li r5,704
	ctx.r5.s64 = 704;
	// stvlx128 v88,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v88.u8[15 - i]);
	// li r5,720
	ctx.r5.s64 = 720;
	// stvlx128 v89,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v89.u8[15 - i]);
	// li r5,736
	ctx.r5.s64 = 736;
	// stvlx128 v90,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v90.u8[15 - i]);
	// li r5,752
	ctx.r5.s64 = 752;
	// stvlx128 v91,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v91.u8[15 - i]);
	// li r5,768
	ctx.r5.s64 = 768;
	// stvlx128 v92,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v92.u8[15 - i]);
	// li r5,784
	ctx.r5.s64 = 784;
	// stvlx128 v93,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v93.u8[15 - i]);
	// li r5,800
	ctx.r5.s64 = 800;
	// stvlx128 v94,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v94.u8[15 - i]);
	// li r5,816
	ctx.r5.s64 = 816;
	// stvlx128 v95,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v95.u8[15 - i]);
	// li r5,832
	ctx.r5.s64 = 832;
	// stvlx128 v96,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v96.u8[15 - i]);
	// li r5,848
	ctx.r5.s64 = 848;
	// stvlx128 v97,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v97.u8[15 - i]);
	// li r5,864
	ctx.r5.s64 = 864;
	// stvlx128 v98,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v98.u8[15 - i]);
	// li r5,880
	ctx.r5.s64 = 880;
	// stvlx128 v99,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v99.u8[15 - i]);
	// li r5,896
	ctx.r5.s64 = 896;
	// stvlx128 v100,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v100.u8[15 - i]);
	// li r5,912
	ctx.r5.s64 = 912;
	// stvlx128 v101,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v101.u8[15 - i]);
	// li r5,928
	ctx.r5.s64 = 928;
	// stvlx128 v102,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v102.u8[15 - i]);
	// li r5,944
	ctx.r5.s64 = 944;
	// stvlx128 v103,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v103.u8[15 - i]);
	// li r5,960
	ctx.r5.s64 = 960;
	// stvlx128 v104,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v104.u8[15 - i]);
	// li r5,976
	ctx.r5.s64 = 976;
	// stvlx128 v105,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v105.u8[15 - i]);
	// li r5,992
	ctx.r5.s64 = 992;
	// stvlx128 v106,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v106.u8[15 - i]);
	// li r5,1008
	ctx.r5.s64 = 1008;
	// stvlx128 v107,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v107.u8[15 - i]);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// stvlx128 v108,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v108.u8[15 - i]);
	// li r5,1040
	ctx.r5.s64 = 1040;
	// stvlx128 v109,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v109.u8[15 - i]);
	// li r5,1056
	ctx.r5.s64 = 1056;
	// stvlx128 v110,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v110.u8[15 - i]);
	// li r5,1072
	ctx.r5.s64 = 1072;
	// stvlx128 v111,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v111.u8[15 - i]);
	// li r5,1088
	ctx.r5.s64 = 1088;
	// stvlx128 v112,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v112.u8[15 - i]);
	// li r5,1104
	ctx.r5.s64 = 1104;
	// stvlx128 v113,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v113.u8[15 - i]);
	// li r5,1120
	ctx.r5.s64 = 1120;
	// stvlx128 v114,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v114.u8[15 - i]);
	// li r5,1136
	ctx.r5.s64 = 1136;
	// stvlx128 v115,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v115.u8[15 - i]);
	// li r5,1152
	ctx.r5.s64 = 1152;
	// stvlx128 v116,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v116.u8[15 - i]);
	// li r5,1168
	ctx.r5.s64 = 1168;
	// stvlx128 v117,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v117.u8[15 - i]);
	// li r5,1184
	ctx.r5.s64 = 1184;
	// stvlx128 v118,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v118.u8[15 - i]);
	// li r5,1200
	ctx.r5.s64 = 1200;
	// stvlx128 v119,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v119.u8[15 - i]);
	// li r5,1216
	ctx.r5.s64 = 1216;
	// stvlx128 v120,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v120.u8[15 - i]);
	// li r5,1232
	ctx.r5.s64 = 1232;
	// stvlx128 v121,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v121.u8[15 - i]);
	// li r5,1248
	ctx.r5.s64 = 1248;
	// stvlx128 v122,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v122.u8[15 - i]);
	// li r5,1264
	ctx.r5.s64 = 1264;
	// stvlx128 v123,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v123.u8[15 - i]);
	// li r5,1280
	ctx.r5.s64 = 1280;
	// stvlx128 v124,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v124.u8[15 - i]);
	// li r5,1296
	ctx.r5.s64 = 1296;
	// stvlx128 v125,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v125.u8[15 - i]);
	// li r5,1312
	ctx.r5.s64 = 1312;
	// stvlx128 v126,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v126.u8[15 - i]);
	// li r5,1328
	ctx.r5.s64 = 1328;
	// stvlx128 v127,r5,r3
	ea = ctx.r5.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v127.u8[15 - i]);
	// stw r0,308(r3)
	REX_STORE_U32(ctx.r3.u32 + 308, ctx.r0.u32);
	// stw r4,304(r3)
	REX_STORE_U32(ctx.r3.u32 + 304, ctx.r4.u32);
	// std r1,144(r3)
	REX_STORE_U64(ctx.r3.u32 + 144, ctx.r1.u64);
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,312(r3)
	REX_STORE_U32(ctx.r3.u32 + 312, ctx.r0.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C2EF0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c2f2c
	if (ctx.cr6.eq) goto loc_826C2F2C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C2F2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826C2F2C:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r3,0
	ctx.r3.s64 = 0;
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

DEFINE_REX_FUNC(sub_826C6160) {
	REX_FUNC_PROLOGUE();
	// ld r3,64(r3)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r3.u32 + 64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C64C0) {
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
	ctx.lr = 0x826C64C8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x826c6594
	if (ctx.cr6.lt) goto loc_826C6594;
	// cmpwi cr6,r30,127
	ctx.cr6.compare<int32_t>(r30.s32, 127, ctx.xer);
	// bge cr6,0x826c6594
	if (!ctx.cr6.lt) goto loc_826C6594;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826c6520
	if (!ctx.cr6.eq) goto loc_826C6520;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,182
	ctx.r3.u64 = ctx.r3.u64 | 182;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_826C6520:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C6538;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x826c6588
	if (ctx.cr6.eq) goto loc_826C6588;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x826c6568
	if (ctx.cr6.eq) goto loc_826C6568;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x826c6588
	if (!ctx.cr6.eq) goto loc_826C6588;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,189
	ctx.r3.u64 = ctx.r3.u64 | 189;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_826C6568:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x826c6658
	ctx.lr = 0x826C6588;
	sub_826C6658(ctx, base);
loc_826C6588:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_826C6594:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826CF338) {
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
	ctx.lr = 0x826CF340;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,118(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 118);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r28,56(r5)
	r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 56);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826cf4d8
	if (!ctx.cr6.gt) goto loc_826CF4D8;
	// lwz r9,456(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// lwz r10,268(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// addi r26,r10,-1
	r26.s64 = ctx.r10.s64 + -1;
	// sraw r30,r11,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	r30.s64 = ctx.r11.s32 >> temp.u32;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(r30.s32, r26.s32, ctx.xer);
	// blt cr6,0x826cf388
	if (ctx.cr6.lt) goto loc_826CF388;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_826CF388:
	// lwz r11,484(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 484);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CF39C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826cf4e0
	if (ctx.cr6.lt) goto loc_826CF4E0;
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sth r11,202(r31)
	REX_STORE_U16(r31.u32 + 202, ctx.r11.u16);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bge cr6,0x826cf464
	if (!ctx.cr6.lt) goto loc_826CF464;
loc_826CF3CC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
loc_826CF3DC:
	// fcfid f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// beq cr6,0x826cf3f4
	if (ctx.cr6.eq) goto loc_826CF3F4;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_826CF3F4:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stfsx f0,r11,r28
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + r28.u32, temp.u32);
	// lwz r10,484(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 484);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826CF410;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826cf4e0
	if (ctx.cr6.lt) goto loc_826CF4E0;
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sth r11,202(r31)
	REX_STORE_U16(r31.u32 + 202, ctx.r11.u16);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bge cr6,0x826cf454
	if (!ctx.cr6.lt) goto loc_826CF454;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x826cf3dc
	goto loc_826CF3DC;
loc_826CF454:
	// lhz r9,202(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 202);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r30.s32, ctx.xer);
	// blt cr6,0x826cf3cc
	if (ctx.cr6.lt) goto loc_826CF3CC;
loc_826CF464:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// bge cr6,0x826cf4c4
	if (!ctx.cr6.lt) goto loc_826CF4C4;
loc_826CF470:
	// lwz r11,484(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 484);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CF484;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826cf4e0
	if (ctx.cr6.lt) goto loc_826CF4E0;
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// sth r9,202(r31)
	REX_STORE_U16(r31.u32 + 202, ctx.r9.u16);
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r26.s32, ctx.xer);
	// blt cr6,0x826cf470
	if (ctx.cr6.lt) goto loc_826CF470;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r26.s32, ctx.xer);
	// blt cr6,0x826cf470
	if (ctx.cr6.lt) goto loc_826CF470;
loc_826CF4C4:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// lwz r10,268(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 268);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x826cf4e0
	if (!ctx.cr6.gt) goto loc_826CF4E0;
loc_826CF4D8:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_826CF4E0:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r26.s32, ctx.xer);
	// bne cr6,0x826cf500
	if (!ctx.cr6.eq) goto loc_826CF500;
	// addi r11,r26,1
	ctx.r11.s64 = r26.s64 + 1;
	// sth r11,490(r29)
	REX_STORE_U16(r29.u32 + 490, ctx.r11.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
loc_826CF500:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// sth r9,490(r29)
	REX_STORE_U16(r29.u32 + 490, ctx.r9.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826DDE18) {
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
	ctx.lr = 0x826DDE20;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 32);
	// ld r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 40);
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x826dde80
	if (ctx.cr6.eq) goto loc_826DDE80;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826DDE78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ddfbc
	if (ctx.cr6.lt) goto loc_826DDFBC;
loc_826DDE80:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826ddce8
	ctx.lr = 0x826DDE8C;
	sub_826DDCE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ddfbc
	if (ctx.cr6.lt) goto loc_826DDFBC;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ddec8
	if (ctx.cr6.eq) goto loc_826DDEC8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ld r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 80);
	// bl 0x826dd6a8
	ctx.lr = 0x826DDEAC;
	sub_826DD6A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ddfbc
	if (ctx.cr6.lt) goto loc_826DDFBC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826ddce8
	ctx.lr = 0x826DDEC0;
	sub_826DDCE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ddfbc
	if (ctx.cr6.lt) goto loc_826DDFBC;
loc_826DDEC8:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// ld r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826deb30
	ctx.lr = 0x826DDEDC;
	sub_826DEB30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ddfbc
	if (ctx.cr6.lt) goto loc_826DDFBC;
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// cmpld cr6,r4,r10
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x826ddf08
	if (!ctx.cr6.eq) goto loc_826DDF08;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826dce38
	ctx.lr = 0x826DDF00;
	sub_826DCE38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ddfbc
	if (ctx.cr6.lt) goto loc_826DDFBC;
loc_826DDF08:
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrldi r11,r28,32
	ctx.r11.u64 = r28.u64 & 0xFFFFFFFF;
	// ld r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 64);
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// subf r7,r10,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r10.u64;
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpld cr6,r6,r11
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x826ddf60
	if (ctx.cr6.lt) goto loc_826DDF60;
	// stw r28,0(r27)
	REX_STORE_U32(r27.u32 + 0, r28.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// ld r8,64(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 64);
	// ld r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// cmpld cr6,r6,r11
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x826ddf80
	if (!ctx.cr6.eq) goto loc_826DDF80;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// b 0x826ddf80
	goto loc_826DDF80;
loc_826DDF60:
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r8.u32);
loc_826DDF80:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// ld r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 64);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// ld r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// subf r11,r7,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r7.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r6.u32);
	// ld r5,64(r31)
	ctx.r5.u64 = REX_LOAD_U64(r31.u32 + 64);
	// std r5,0(r25)
	REX_STORE_U64(r25.u32 + 0, ctx.r5.u64);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// ld r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 64);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r4,64(r31)
	REX_STORE_U64(r31.u32 + 64, ctx.r4.u64);
loc_826DDFBC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_826E6A68) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826e6a88
	if (ctx.cr6.lt) goto loc_826E6A88;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r11.u16);
	// sth r6,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r6.u16);
	// b 0x826e6aa8
	goto loc_826E6AA8;
loc_826E6A88:
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r5,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 1;
	// addze r11,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 1;
	// sth r11,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r11.u16);
	// addze r6,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r6.s64 = temp.s64;
	// sth r6,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r6.u16);
loc_826E6AA8:
	// lwz r11,140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x826e6af4
	if (!ctx.cr6.eq) goto loc_826E6AF4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lhz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// lhz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// sth r3,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r3.u16);
	// sth r3,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r3.u16);
	// blr 
	return;
loc_826E6AF4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,156(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lhz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// lhz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r6,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sth r4,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r4.u16);
	// sth r4,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r4.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826F0EE8) {
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
	ctx.lr = 0x826F0EF0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// li r25,1
	r25.s64 = 1;
	// li r26,2
	r26.s64 = 2;
	// li r27,3
	r27.s64 = 3;
	// li r28,4
	r28.s64 = 4;
loc_826F0F14:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x826f0f14
	if (ctx.cr6.gt) goto loc_826F0F14;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x826f0fe0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826F0FE0;
	// bdzf 4*cr6+eq,0x826f0ffc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826F0FFC;
	// bdzf 4*cr6+eq,0x826f1018
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826F1018;
	// bdzf 4*cr6+eq,0x826f1034
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826F1034;
	// bne cr6,0x826f1054
	if (!ctx.cr6.eq) goto loc_826F1054;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826f1e00
	ctx.lr = 0x826F0F4C;
	sub_826F1E00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f1094
	if (ctx.cr6.lt) goto loc_826F1094;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,3,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826f0f88
	if (!ctx.cr6.eq) goto loc_826F0F88;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82638ef0
	ctx.lr = 0x826F0F78;
	sub_82638EF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f1094
	if (ctx.cr6.lt) goto loc_826F1094;
	// stw r25,4(r30)
	REX_STORE_U32(r30.u32 + 4, r25.u32);
	// b 0x826f0f14
	goto loc_826F0F14;
loc_826F0F88:
	// rlwinm r10,r11,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x826f0fac
	if (!ctx.cr6.eq) goto loc_826F0FAC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82638ef0
	ctx.lr = 0x826F0F9C;
	sub_82638EF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f1094
	if (ctx.cr6.lt) goto loc_826F1094;
	// stw r26,4(r30)
	REX_STORE_U32(r30.u32 + 4, r26.u32);
	// b 0x826f0f14
	goto loc_826F0F14;
loc_826F0FAC:
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// li r4,3
	ctx.r4.s64 = 3;
	// bne cr6,0x826f0fcc
	if (!ctx.cr6.eq) goto loc_826F0FCC;
	// bl 0x82638ef0
	ctx.lr = 0x826F0FBC;
	sub_82638EF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f1094
	if (ctx.cr6.lt) goto loc_826F1094;
	// stw r27,4(r30)
	REX_STORE_U32(r30.u32 + 4, r27.u32);
	// b 0x826f0f14
	goto loc_826F0F14;
loc_826F0FCC:
	// bl 0x82638ef0
	ctx.lr = 0x826F0FD0;
	sub_82638EF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f1094
	if (ctx.cr6.lt) goto loc_826F1094;
	// stw r28,4(r30)
	REX_STORE_U32(r30.u32 + 4, r28.u32);
	// b 0x826f0f14
	goto loc_826F0F14;
loc_826F0FE0:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826F0FF0;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f1094
	if (ctx.cr6.lt) goto loc_826F1094;
	// b 0x826f1080
	goto loc_826F1080;
loc_826F0FFC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826F100C;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f1094
	if (ctx.cr6.lt) goto loc_826F1094;
	// b 0x826f1080
	goto loc_826F1080;
loc_826F1018:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826F1028;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f1094
	if (ctx.cr6.lt) goto loc_826F1094;
	// b 0x826f1080
	goto loc_826F1080;
loc_826F1034:
	// addi r5,r30,52
	ctx.r5.s64 = r30.s64 + 52;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826F1044;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f1094
	if (ctx.cr6.lt) goto loc_826F1094;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
loc_826F1054:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826F1064;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f1094
	if (ctx.cr6.lt) goto loc_826F1094;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r9,r11,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r8.u32);
loc_826F1080:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + r24.u64;
	// stw r9,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
loc_826F1094:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_826FC0D8) {
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
	ctx.lr = 0x826FC0E0;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r29,-1
	r29.s64 = -1;
	// std r30,20672(r3)
	REX_STORE_U64(ctx.r3.u32 + 20672, r30.u64);
	// std r30,20680(r3)
	REX_STORE_U64(ctx.r3.u32 + 20680, r30.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,20652(r3)
	REX_STORE_U32(ctx.r3.u32 + 20652, ctx.r11.u32);
	// stw r30,20696(r3)
	REX_STORE_U32(ctx.r3.u32 + 20696, r30.u32);
	// stw r30,20700(r3)
	REX_STORE_U32(ctx.r3.u32 + 20700, r30.u32);
	// stw r30,20752(r3)
	REX_STORE_U32(ctx.r3.u32 + 20752, r30.u32);
	// stw r30,3444(r3)
	REX_STORE_U32(ctx.r3.u32 + 3444, r30.u32);
	// stw r30,20756(r3)
	REX_STORE_U32(ctx.r3.u32 + 20756, r30.u32);
	// std r30,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, r30.u64);
	// stw r29,20852(r3)
	REX_STORE_U32(ctx.r3.u32 + 20852, r29.u32);
	// bl 0x823ef900
	ctx.lr = 0x826FC124;
	sub_823EF900(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-150
	ctx.r10.s64 = ctx.r11.s64 + -150;
	// stw r11,20864(r31)
	REX_STORE_U32(r31.u32 + 20864, ctx.r11.u32);
	// stw r10,20860(r31)
	REX_STORE_U32(r31.u32 + 20860, ctx.r10.u32);
	// bl 0x823ecc18
	ctx.lr = 0x826FC13C;
	sub_823ECC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826fc148
	if (!ctx.cr6.eq) goto loc_826FC148;
	// stw r30,20652(r31)
	REX_STORE_U32(r31.u32 + 20652, r30.u32);
loc_826FC148:
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// li r8,1000
	ctx.r8.s64 = 1000;
	// lwz r11,3680(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3680);
	// divd r9,r10,r8
	ctx.r9.s64 = (ctx.r8.s64 && !(ctx.r10.s64 == INT64_MIN && ctx.r8.s64 == -1)) ? ctx.r10.s64 / ctx.r8.s64 : 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,20856(r31)
	REX_STORE_U32(r31.u32 + 20856, ctx.r9.u32);
	// bgt cr6,0x826fc168
	if (ctx.cr6.gt) goto loc_826FC168;
	// li r11,30
	ctx.r11.s64 = 30;
loc_826FC168:
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rotldi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 1);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// divw. r3,r8,r11
	ctx.r3.u64 = uint32_t((ctx.r11.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r8.s32 / ctx.r11.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r3,20748(r31)
	REX_STORE_U32(r31.u32 + 20748, ctx.r3.u32);
	// divd r4,r10,r6
	ctx.r4.s64 = (ctx.r6.s64 && !(ctx.r10.s64 == INT64_MIN && ctx.r6.s64 == -1)) ? ctx.r10.s64 / ctx.r6.s64 : 0;
	// andc r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 & ~ctx.r5.u64;
	// tdllei r6,0
	if (ctx.r6.s64 == 0ll || ctx.r6.u64 < 0ull) ppc_trap(ctx, base, 0);
	// stw r4,20760(r31)
	REX_STORE_U32(r31.u32 + 20760, ctx.r4.u32);
	// tdlgei r11,-1
	if (ctx.r11.s64 == -1ll || ctx.r11.u64 > 18446744073709551615ull) ppc_trap(ctx, base, 0);
	// bgt 0x826fc1a4
	if (ctx.cr0.gt) goto loc_826FC1A4;
	// li r11,33
	ctx.r11.s64 = 33;
	// stw r11,20748(r31)
	REX_STORE_U32(r31.u32 + 20748, ctx.r11.u32);
loc_826FC1A4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,114
	ctx.r4.s64 = 114;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82725628
	ctx.lr = 0x826FC1B4;
	sub_82725628(ctx, base);
	// cmpwi cr6,r3,100
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 100, ctx.xer);
	// blt cr6,0x826fc1c4
	if (ctx.cr6.lt) goto loc_826FC1C4;
	// cmpwi cr6,r3,32000
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32000, ctx.xer);
	// ble cr6,0x826fc1c8
	if (!ctx.cr6.gt) goto loc_826FC1C8;
loc_826FC1C4:
	// li r3,100
	ctx.r3.s64 = 100;
loc_826FC1C8:
	// lwz r11,20856(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20856);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r9,180(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 180);
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r6,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lwz r5,188(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 188);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// lis r4,-32247
	ctx.r4.s64 = -2113339392;
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// lfs f0,25100(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 25100);
	ctx.f0.f64 = double(temp.f32);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// std r3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f7,88(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// frsp f5,f10
	ctx.f5.f64 = double(float(ctx.f10.f64));
	// lfs f13,25096(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 25096);
	ctx.f13.f64 = double(temp.f32);
	// frsp f4,f9
	ctx.f4.f64 = double(float(ctx.f9.f64));
	// lfs f12,25092(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 25092);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f3,f12,f8
	ctx.f3.f64 = double(float(ctx.f12.f64 / ctx.f8.f64));
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,114
	ctx.r4.s64 = 114;
	// li r3,5
	ctx.r3.s64 = 5;
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f0,25088(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 25088);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f4,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f11,f13,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f10,f11,f3
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fmuls f31,f10,f12
	f31.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// bl 0x82725628
	ctx.lr = 0x826FC270;
	sub_82725628(ctx, base);
	// stw r29,20664(r31)
	REX_STORE_U32(r31.u32 + 20664, r29.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,20660(r31)
	REX_STORE_U32(r31.u32 + 20660, ctx.r3.u32);
	// bne cr6,0x826fc288
	if (!ctx.cr6.eq) goto loc_826FC288;
	// stw r30,20652(r31)
	REX_STORE_U32(r31.u32 + 20652, r30.u32);
	// b 0x826fc2d4
	goto loc_826FC2D4;
loc_826FC288:
	// cmpwi cr6,r3,15
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 15, ctx.xer);
	// ble cr6,0x826fc2d4
	if (!ctx.cr6.gt) goto loc_826FC2D4;
	// lwz r10,20760(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20760);
	// srawi r11,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 4;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r6,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f0,-15224(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + -15224);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// fmul f9,f10,f0
	ctx.f9.f64 = ctx.f10.f64 * ctx.f0.f64;
	// fmul f8,f9,f11
	ctx.f8.f64 = ctx.f9.f64 * ctx.f11.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// li r12,20760
	ctx.r12.s64 = 20760;
	// stfiwx f7,r31,r12
	REX_STORE_U32(r31.u32 + ctx.r12.u32, ctx.f7.u32);
loc_826FC2D4:
	// lwz r11,20760(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20760);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r9,20764
	ctx.r9.s64 = 20764;
	// stw r30,20740(r31)
	REX_STORE_U32(r31.u32 + 20740, r30.u32);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,-29880(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -29880);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r31,r9
	REX_STORE_U32(r31.u32 + ctx.r9.u32, ctx.f11.u32);
loc_826FC304:
	// lwz r11,20740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20740);
	// lwz r10,20760(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20760);
	// addi r9,r11,5176
	ctx.r9.s64 = ctx.r11.s64 + 5176;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r31
	REX_STORE_U32(ctx.r8.u32 + r31.u32, ctx.r10.u32);
	// lwz r11,20740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20740);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,20740(r31)
	REX_STORE_U32(r31.u32 + 20740, ctx.r7.u32);
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// blt cr6,0x826fc304
	if (ctx.cr6.lt) goto loc_826FC304;
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r9,20760(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20760);
	// stw r30,20740(r31)
	REX_STORE_U32(r31.u32 + 20740, r30.u32);
	// addi r11,r31,20832
	ctx.r11.s64 = r31.s64 + 20832;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,20784
	ctx.r9.s64 = r31.s64 + 20784;
	// stw r8,20736(r31)
	REX_STORE_U32(r31.u32 + 20736, ctx.r8.u32);
	// subfic r8,r31,-20832
	ctx.xer.ca = r31.u32 <= 4294946464;
	ctx.r8.u64 = static_cast<uint64_t>(-20832) - r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r7,-64
	ctx.r7.s64 = -64;
	// addi r6,r10,25008
	ctx.r6.s64 = ctx.r10.s64 + 25008;
loc_826FC360:
	// lwz r10,3948(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3948);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r10,r6,20
	ctx.r10.s64 = ctx.r6.s64 + 20;
	// bne cr6,0x826fc374
	if (!ctx.cr6.eq) goto loc_826FC374;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_826FC374:
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwzx r4,r5,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfiwx f10,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.f10.u32);
	// stdu r30,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, r30.u64);
	ctx.r9.u32 = ea;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x826fc360
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826FC360;
	// lwz r11,20784(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20784);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,188(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 188);
	// lwz r4,180(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 180);
	// stw r11,20788(r31)
	REX_STORE_U32(r31.u32 + 20788, ctx.r11.u32);
	// bl 0x82725630
	ctx.lr = 0x826FC3C4;
	sub_82725630(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_827217D8) {
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
	ctx.lr = 0x827217E0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,356(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// stw r4,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r5,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// stw r7,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
	// stw r8,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// ble cr6,0x827219a4
	if (!ctx.cr6.gt) goto loc_827219A4;
	// addi r23,r9,-2
	r23.s64 = ctx.r9.s64 + -2;
	// lwz r14,340(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// rlwinm r18,r23,2,0,29
	r18.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 1;
	// subf r7,r3,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r3.u64;
	// addi r22,r9,-4
	r22.s64 = ctx.r9.s64 + -4;
	// addi r21,r9,-2
	r21.s64 = ctx.r9.s64 + -2;
	// addi r20,r9,-5
	r20.s64 = ctx.r9.s64 + -5;
	// addi r19,r23,-1
	r19.s64 = r23.s64 + -1;
	// mr r15,r10
	r15.u64 = ctx.r10.u64;
	// li r17,0
	r17.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
loc_82721838:
	// lbz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// addi r29,r8,-1
	r29.s64 = ctx.r8.s64 + -1;
	// lbz r6,-1(r8)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + -1);
	// addi r28,r8,1
	r28.s64 = ctx.r8.s64 + 1;
	// lbz r5,1(r8)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// addi r27,r8,2
	r27.s64 = ctx.r8.s64 + 2;
	// add r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lbz r31,2(r8)
	r31.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// li r11,2
	ctx.r11.s64 = 2;
	// mulli r3,r3,14
	ctx.r3.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(14));
	// add r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r3,r31,r10
	ctx.r3.u64 = r31.u64 + ctx.r10.u64;
	// add r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mulli r5,r3,11
	ctx.r5.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(11));
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(r23.s32, 2, ctx.xer);
	// add r3,r10,r6
	ctx.r3.u64 = ctx.r10.u64 + ctx.r6.u64;
	// subf r10,r5,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r5.u64;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// srawi r6,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 7;
	// stw r6,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r6.u32);
	// ble cr6,0x827218fc
	if (!ctx.cr6.gt) goto loc_827218FC;
	// addi r10,r23,-3
	ctx.r10.s64 = r23.s64 + -3;
	// addi r26,r8,-2
	r26.s64 = ctx.r8.s64 + -2;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r25,r8,-3
	r25.s64 = ctx.r8.s64 + -3;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_827218AC:
	// lbzx r5,r8,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lbzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// lbzx r30,r28,r11
	r30.u64 = REX_LOAD_U8(r28.u32 + ctx.r11.u32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lbzx r5,r26,r11
	ctx.r5.u64 = REX_LOAD_U8(r26.u32 + ctx.r11.u32);
	// lbzx r3,r27,r11
	ctx.r3.u64 = REX_LOAD_U8(r27.u32 + ctx.r11.u32);
	// mulli r10,r10,14
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(14));
	// lbzx r31,r25,r11
	r31.u64 = REX_LOAD_U8(r25.u32 + ctx.r11.u32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + r31.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mulli r3,r3,11
	ctx.r3.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(11));
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// subf r10,r3,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// addi r5,r10,64
	ctx.r5.s64 = ctx.r10.s64 + 64;
	// srawi r10,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 7;
	// stwu r10,8(r6)
	ea = 8 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r6.u32 = ea;
	// bdnz 0x827218ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827218AC;
loc_827218FC:
	// lbzx r10,r19,r8
	ctx.r10.u64 = REX_LOAD_U8(r19.u32 + ctx.r8.u32);
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// lbzx r11,r21,r8
	ctx.r11.u64 = REX_LOAD_U8(r21.u32 + ctx.r8.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lbzx r5,r22,r8
	ctx.r5.u64 = REX_LOAD_U8(r22.u32 + ctx.r8.u32);
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r3,r20,r8
	ctx.r3.u64 = REX_LOAD_U8(r20.u32 + ctx.r8.u32);
	// mulli r31,r31,14
	r31.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(14));
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// mulli r5,r10,11
	ctx.r5.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(11));
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r5,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r5.u64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// stwx r10,r18,r24
	REX_STORE_U32(r18.u32 + r24.u32, ctx.r10.u32);
	// ble cr6,0x8272198c
	if (!ctx.cr6.gt) goto loc_8272198C;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82721960:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// ble cr6,0x82721978
	if (!ctx.cr6.gt) goto loc_82721978;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
loc_82721978:
	// stbx r17,r5,r6
	REX_STORE_U8(ctx.r5.u32 + ctx.r6.u32, r17.u8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stbx r10,r16,r6
	REX_STORE_U8(r16.u32 + ctx.r6.u32, ctx.r10.u8);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// bdnz 0x82721960
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82721960;
loc_8272198C:
	// addic. r15,r15,-1
	ctx.xer.ca = r15.u32 > 0;
	r15.s64 = r15.s64 + -1;
	ctx.cr0.compare<int32_t>(r15.s32, 0, ctx.xer);
	// add r8,r8,r14
	ctx.r8.u64 = ctx.r8.u64 + r14.u64;
	// add r16,r16,r14
	r16.u64 = r16.u64 + r14.u64;
	// bne 0x82721838
	if (!ctx.cr0.eq) goto loc_82721838;
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r26,276(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
loc_827219A4:
	// lwz r30,332(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r27,348(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r6,324(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x827219e4
	if (!ctx.cr6.gt) goto loc_827219E4;
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mr r29,r30
	r29.u64 = r30.u64;
	// subf r28,r4,r11
	r28.u64 = ctx.r11.u64 - ctx.r4.u64;
loc_827219C8:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r28,r31
	ctx.r3.u64 = r28.u64 + r31.u64;
	// bl 0x82721668
	ctx.lr = 0x827219D8;
	sub_82721668(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// bne 0x827219c8
	if (!ctx.cr0.eq) goto loc_827219C8;
loc_827219E4:
	// mr r31,r26
	r31.u64 = r26.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x82721a14
	if (!ctx.cr6.gt) goto loc_82721A14;
	// lwz r11,300(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// subf r29,r26,r11
	r29.u64 = ctx.r11.u64 - r26.u64;
loc_827219F8:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r29,r31
	ctx.r3.u64 = r29.u64 + r31.u64;
	// bl 0x82721668
	ctx.lr = 0x82721A08;
	sub_82721668(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// bne 0x827219f8
	if (!ctx.cr0.eq) goto loc_827219F8;
loc_82721A14:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_827307E0) {
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
	ctx.lr = 0x827307E8;
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f30.u64);
	// stfd f31,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8273082c
	if (!ctx.cr6.eq) goto loc_8273082C;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-112(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826a1cec
	return;
loc_8273082C:
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// li r30,32
	r30.s64 = 32;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x827308a0
	if (!ctx.cr6.lt) goto loc_827308A0;
loc_82730848:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827308a0
	if (ctx.cr6.eq) goto loc_827308A0;
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
	// bge 0x82730890
	if (!ctx.cr0.lt) goto loc_82730890;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82730890;
	sub_82725E38(ctx, base);
loc_82730890:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82730848
	if (ctx.cr6.gt) goto loc_82730848;
loc_827308A0:
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
	// bge 0x827308d8
	if (!ctx.cr0.lt) goto loc_827308D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827308D8;
	sub_82725E38(ctx, base);
loc_827308D8:
	// stw r30,0(r27)
	REX_STORE_U32(r27.u32 + 0, r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82730e84
	if (ctx.cr6.eq) goto loc_82730E84;
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// li r30,4
	r30.s64 = 4;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x82730958
	if (!ctx.cr6.lt) goto loc_82730958;
loc_82730900:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82730958
	if (ctx.cr6.eq) goto loc_82730958;
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
	// bge 0x82730948
	if (!ctx.cr0.lt) goto loc_82730948;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82730948;
	sub_82725E38(ctx, base);
loc_82730948:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82730900
	if (ctx.cr6.gt) goto loc_82730900;
loc_82730958:
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
	// bge 0x82730990
	if (!ctx.cr0.lt) goto loc_82730990;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82730990;
	sub_82725E38(ctx, base);
loc_82730990:
	// stw r30,0(r25)
	REX_STORE_U32(r25.u32 + 0, r30.u32);
	// cmplwi cr6,r30,14
	ctx.cr6.compare<uint32_t>(r30.u32, 14, ctx.xer);
	// ble cr6,0x827309b0
	if (!ctx.cr6.gt) goto loc_827309B0;
loc_8273099C:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826a1cec
	return;
loc_827309B0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r30,7
	ctx.cr6.compare<uint32_t>(r30.u32, 7, ctx.xer);
	// lfs f30,19520(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 19520);
	f30.f64 = double(temp.f32);
	// lfs f31,15504(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15504);
	f31.f64 = double(temp.f32);
	// bne cr6,0x82730a00
	if (!ctx.cr6.eq) goto loc_82730A00;
	// addi r10,r28,24
	ctx.r10.s64 = r28.s64 + 24;
	// addi r9,r28,20
	ctx.r9.s64 = r28.s64 + 20;
	// addi r8,r28,16
	ctx.r8.s64 = r28.s64 + 16;
	// addi r7,r28,12
	ctx.r7.s64 = r28.s64 + 12;
	// addi r6,r28,8
	ctx.r6.s64 = r28.s64 + 8;
	// addi r5,r28,4
	ctx.r5.s64 = r28.s64 + 4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826fd178
	ctx.lr = 0x827309EC;
	sub_826FD178(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82730f40
	if (!ctx.cr6.eq) goto loc_82730F40;
	// lwz r11,15396(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 15396);
	// stw r11,15432(r24)
	REX_STORE_U32(r24.u32 + 15432, ctx.r11.u32);
	// b 0x82730c20
	goto loc_82730C20;
loc_82730A00:
	// cmplwi cr6,r30,14
	ctx.cr6.compare<uint32_t>(r30.u32, 14, ctx.xer);
	// bne cr6,0x82730a74
	if (!ctx.cr6.eq) goto loc_82730A74;
	// addi r10,r28,24
	ctx.r10.s64 = r28.s64 + 24;
	// addi r9,r28,20
	ctx.r9.s64 = r28.s64 + 20;
	// addi r8,r28,16
	ctx.r8.s64 = r28.s64 + 16;
	// addi r7,r28,12
	ctx.r7.s64 = r28.s64 + 12;
	// addi r6,r28,8
	ctx.r6.s64 = r28.s64 + 8;
	// addi r5,r28,4
	ctx.r5.s64 = r28.s64 + 4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826fd178
	ctx.lr = 0x82730A2C;
	sub_826FD178(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82730f40
	if (!ctx.cr6.eq) goto loc_82730F40;
	// lwz r11,15396(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 15396);
	// addi r10,r28,52
	ctx.r10.s64 = r28.s64 + 52;
	// addi r9,r28,48
	ctx.r9.s64 = r28.s64 + 48;
	// addi r8,r28,44
	ctx.r8.s64 = r28.s64 + 44;
	// addi r7,r28,40
	ctx.r7.s64 = r28.s64 + 40;
	// addi r6,r28,36
	ctx.r6.s64 = r28.s64 + 36;
	// stw r11,15432(r24)
	REX_STORE_U32(r24.u32 + 15432, ctx.r11.u32);
	// addi r5,r28,32
	ctx.r5.s64 = r28.s64 + 32;
	// addi r4,r28,28
	ctx.r4.s64 = r28.s64 + 28;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826fd178
	ctx.lr = 0x82730A60;
	sub_826FD178(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82730f40
	if (!ctx.cr6.eq) goto loc_82730F40;
	// lwz r11,15396(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 15396);
	// stw r11,15436(r24)
	REX_STORE_U32(r24.u32 + 15436, ctx.r11.u32);
	// b 0x82730c20
	goto loc_82730C20;
loc_82730A74:
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82730c20
	if (ctx.cr6.eq) goto loc_82730C20;
	// addi r26,r28,-4
	r26.s64 = r28.s64 + -4;
loc_82730A84:
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x82730af8
	if (!ctx.cr6.lt) goto loc_82730AF8;
loc_82730AA0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82730af8
	if (ctx.cr6.eq) goto loc_82730AF8;
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
	// bge 0x82730ae8
	if (!ctx.cr0.lt) goto loc_82730AE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82730AE8;
	sub_82725E38(ctx, base);
loc_82730AE8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82730aa0
	if (ctx.cr6.gt) goto loc_82730AA0;
loc_82730AF8:
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
	// bge 0x82730b30
	if (!ctx.cr0.lt) goto loc_82730B30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82730B30;
	sub_82725E38(ctx, base);
loc_82730B30:
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x82730ba4
	if (!ctx.cr6.lt) goto loc_82730BA4;
loc_82730B4C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82730ba4
	if (ctx.cr6.eq) goto loc_82730BA4;
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
	// bge 0x82730b94
	if (!ctx.cr0.lt) goto loc_82730B94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82730B94;
	sub_82725E38(ctx, base);
loc_82730B94:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82730b4c
	if (ctx.cr6.gt) goto loc_82730B4C;
loc_82730BA4:
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
	// bge 0x82730bdc
	if (!ctx.cr0.lt) goto loc_82730BDC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82730BDC;
	sub_82725E38(ctx, base);
loc_82730BDC:
	// lwz r11,84(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8273099c
	if (!ctx.cr6.eq) goto loc_8273099C;
	// rlwinm r11,r28,15,0,16
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 15) & 0xFFFF8000;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmsubs f11,f12,f31,f30
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, -f30.f64)));
	// stfsu f11,4(r26)
	ea = 4 + r26.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	r26.u32 = ea;
	// lwz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82730a84
	if (ctx.cr6.lt) goto loc_82730A84;
loc_82730C20:
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// li r30,16
	r30.s64 = 16;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82730c94
	if (!ctx.cr6.lt) goto loc_82730C94;
loc_82730C3C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82730c94
	if (ctx.cr6.eq) goto loc_82730C94;
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
	// bge 0x82730c84
	if (!ctx.cr0.lt) goto loc_82730C84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82730C84;
	sub_82725E38(ctx, base);
loc_82730C84:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82730c3c
	if (ctx.cr6.gt) goto loc_82730C3C;
loc_82730C94:
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
	// bge 0x82730ccc
	if (!ctx.cr0.lt) goto loc_82730CCC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82730CCC;
	sub_82725E38(ctx, base);
loc_82730CCC:
	// stw r30,0(r22)
	REX_STORE_U32(r22.u32 + 0, r30.u32);
	// cmplwi cr6,r30,100
	ctx.cr6.compare<uint32_t>(r30.u32, 100, ctx.xer);
	// bgt cr6,0x8273099c
	if (ctx.cr6.gt) goto loc_8273099C;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82730e84
	if (ctx.cr6.eq) goto loc_82730E84;
	// addi r26,r23,-4
	r26.s64 = r23.s64 + -4;
loc_82730CE8:
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x82730d5c
	if (!ctx.cr6.lt) goto loc_82730D5C;
loc_82730D04:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82730d5c
	if (ctx.cr6.eq) goto loc_82730D5C;
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
	// bge 0x82730d4c
	if (!ctx.cr0.lt) goto loc_82730D4C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82730D4C;
	sub_82725E38(ctx, base);
loc_82730D4C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82730d04
	if (ctx.cr6.gt) goto loc_82730D04;
loc_82730D5C:
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
	// bge 0x82730d94
	if (!ctx.cr0.lt) goto loc_82730D94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82730D94;
	sub_82725E38(ctx, base);
loc_82730D94:
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// li r30,15
	r30.s64 = 15;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x82730e08
	if (!ctx.cr6.lt) goto loc_82730E08;
loc_82730DB0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82730e08
	if (ctx.cr6.eq) goto loc_82730E08;
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
	// bge 0x82730df8
	if (!ctx.cr0.lt) goto loc_82730DF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82730DF8;
	sub_82725E38(ctx, base);
loc_82730DF8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82730db0
	if (ctx.cr6.gt) goto loc_82730DB0;
loc_82730E08:
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
	// bge 0x82730e40
	if (!ctx.cr0.lt) goto loc_82730E40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82730E40;
	sub_82725E38(ctx, base);
loc_82730E40:
	// lwz r11,84(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8273099c
	if (!ctx.cr6.eq) goto loc_8273099C;
	// rlwinm r11,r28,15,0,16
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 15) & 0xFFFF8000;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmsubs f11,f12,f31,f30
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, -f30.f64)));
	// stfsu f11,4(r26)
	ea = 4 + r26.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	r26.u32 = ea;
	// lwz r9,0(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 0);
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82730ce8
	if (ctx.cr6.lt) goto loc_82730CE8;
loc_82730E84:
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// li r30,1
	r30.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82730ef8
	if (!ctx.cr6.lt) goto loc_82730EF8;
loc_82730EA0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82730ef8
	if (ctx.cr6.eq) goto loc_82730EF8;
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
	// bge 0x82730ee8
	if (!ctx.cr0.lt) goto loc_82730EE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82730EE8;
	sub_82725E38(ctx, base);
loc_82730EE8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82730ea0
	if (ctx.cr6.gt) goto loc_82730EA0;
loc_82730EF8:
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
	// bge 0x82730f30
	if (!ctx.cr0.lt) goto loc_82730F30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82730F30;
	sub_82725E38(ctx, base);
loc_82730F30:
	// addic r11,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r11.s64 = r30.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfe r10,r11,r30
	temp.u8 = (~ctx.r11.u32 + r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,0(r21)
	REX_STORE_U32(r21.u32 + 0, ctx.r10.u32);
loc_82730F40:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82760F08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r9,r6,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r11,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// srawi r10,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 2;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpwi cr6,r11,-16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -16, ctx.xer);
	// bge cr6,0x82760f48
	if (!ctx.cr6.lt) goto loc_82760F48;
	// li r11,-16
	ctx.r11.s64 = -16;
	// b 0x82760f5c
	goto loc_82760F5C;
loc_82760F48:
	// lwz r30,136(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r30,r30,4,0,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// ble cr6,0x82760f60
	if (!ctx.cr6.gt) goto loc_82760F60;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82760F5C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82760F60:
	// cmpwi cr6,r10,-16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -16, ctx.xer);
	// bge cr6,0x82760f74
	if (!ctx.cr6.lt) goto loc_82760F74;
	// li r10,-16
	ctx.r10.s64 = -16;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82760f98
	goto loc_82760F98;
loc_82760F74:
	// lwz r31,140(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 140);
	// rlwinm r31,r31,4,0,27
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r31.s32, ctx.xer);
	// ble cr6,0x82760f90
	if (!ctx.cr6.gt) goto loc_82760F90;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82760f98
	goto loc_82760F98;
loc_82760F90:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82760fc0
	if (ctx.cr6.eq) goto loc_82760FC0;
loc_82760F98:
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r6,30
	ctx.r10.u64 = ctx.r6.u32 & 0x3;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r8,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
loc_82760FC0:
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82764940) {
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
	ctx.lr = 0x82764948;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,492(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r9,468(r1)
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r9.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r10,476(r1)
	REX_STORE_U32(ctx.r1.u32 + 476, ctx.r10.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r25,1760(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 1760);
	// li r20,0
	r20.s64 = 0;
	// lwz r15,1832(r3)
	r15.u64 = REX_LOAD_U32(ctx.r3.u32 + 1832);
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r26,16(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r7,452(r1)
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r7.u32);
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// stw r8,460(r1)
	REX_STORE_U32(ctx.r1.u32 + 460, ctx.r8.u32);
	// sth r20,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r20.u16);
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r26,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r26.u32);
	// bl 0x826a2e60
	ctx.lr = 0x827649B0;
	sub_826A2E60(ctx, base);
	// lwz r8,20984(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 20984);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82764a00
	if (ctx.cr6.eq) goto loc_82764A00;
	// lwz r11,284(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827649d0
	if (ctx.cr6.eq) goto loc_827649D0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82764a00
	if (!ctx.cr6.eq) goto loc_82764A00;
loc_827649D0:
	// lwz r11,484(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827649fc
	if (ctx.cr6.eq) goto loc_827649FC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x827649f4
	if (ctx.cr6.eq) goto loc_827649F4;
	// lwz r15,1816(r27)
	r15.u64 = REX_LOAD_U32(r27.u32 + 1816);
	// b 0x82764a00
	goto loc_82764A00;
loc_827649F4:
	// lwz r15,1820(r27)
	r15.u64 = REX_LOAD_U32(r27.u32 + 1820);
	// b 0x82764a00
	goto loc_82764A00;
loc_827649FC:
	// lwz r15,1812(r27)
	r15.u64 = REX_LOAD_U32(r27.u32 + 1812);
loc_82764A00:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,119
	ctx.r6.s64 = 119;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bge cr6,0x82764a1c
	if (!ctx.cr6.lt) goto loc_82764A1C;
	// lwz r5,2116(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 2116);
	// b 0x82764a20
	goto loc_82764A20;
loc_82764A1C:
	// lwz r5,2120(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 2120);
loc_82764A20:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82769308
	ctx.lr = 0x82764A28;
	sub_82769308(ctx, base);
	// lwz r11,1760(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1760);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// sth r20,2(r25)
	REX_STORE_U16(r25.u32 + 2, r20.u16);
	// sth r10,0(r25)
	REX_STORE_U16(r25.u32 + 0, ctx.r10.u16);
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827656c4
	if (!ctx.cr6.eq) goto loc_827656C4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x827654b4
	if (ctx.cr6.eq) goto loc_827654B4;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r24,r20
	r24.u64 = r20.u64;
	// li r18,1
	r18.s64 = 1;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,16(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// addi r21,r11,1
	r21.s64 = ctx.r11.s64 + 1;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r23,0(r10)
	r23.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r19,28(r10)
	r19.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r22,32(r10)
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// ori r26,r11,32768
	r26.u64 = ctx.r11.u64 | 32768;
	// lwz r14,20(r10)
	r14.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r16,24(r10)
	r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r17,4(r10)
	r17.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
loc_82764A90:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lbz r4,8(r23)
	ctx.r4.u64 = REX_LOAD_U8(r23.u32 + 8);
	// lwz r29,0(r23)
	r29.u64 = REX_LOAD_U32(r23.u32 + 0);
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
	// blt cr6,0x82764b80
	if (ctx.cr6.lt) goto loc_82764B80;
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
	// bge cr6,0x82764b78
	if (!ctx.cr6.lt) goto loc_82764B78;
loc_82764AE0:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82764b0c
	if (ctx.cr6.lt) goto loc_82764B0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x82764AFC;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82764ae0
	if (ctx.cr6.eq) goto loc_82764AE0;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82764bb8
	goto loc_82764BB8;
loc_82764B0C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
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
loc_82764B78:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82764bb8
	goto loc_82764BB8;
loc_82764B80:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x82764B88;
	sub_82725F80(ctx, base);
loc_82764B88:
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
	ctx.lr = 0x82764BA0;
	sub_82725F80(ctx, base);
	// add r10,r30,r26
	ctx.r10.u64 = r30.u64 + r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82764b88
	if (ctx.cr6.lt) goto loc_82764B88;
loc_82764BB8:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827654d4
	if (!ctx.cr6.eq) goto loc_827654D4;
	// clrlwi r31,r11,24
	r31.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r31,r17
	ctx.cr6.compare<int32_t>(r31.s32, r17.s32, ctx.xer);
	// bgt cr6,0x827654d4
	if (ctx.cr6.gt) goto loc_827654D4;
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// beq cr6,0x82764c30
	if (ctx.cr6.eq) goto loc_82764C30;
	// subfc r11,r21,r31
	ctx.xer.ca = r31.u32 >= r21.u32;
	ctx.r11.u64 = r31.u64 - r21.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lbzx r28,r31,r22
	r28.u64 = REX_LOAD_U8(r31.u32 + r22.u32);
	// rldicr r7,r10,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// subfze r24,r9
	temp.u8 = ~ctx.r9.u32 + ctx.xer.ca < ~ctx.r9.u32;
	r24.u64 = ~ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r7,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82764c10
	if (!ctx.cr0.lt) goto loc_82764C10;
	// bl 0x82725e38
	ctx.lr = 0x82764C10;
	sub_82725E38(ctx, base);
loc_82764C10:
	// lbzx r11,r31,r19
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + r19.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82764c28
	if (ctx.cr6.eq) goto loc_82764C28;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// neg r31,r10
	r31.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// b 0x82765444
	goto loc_82765444;
loc_82764C28:
	// extsb r31,r11
	r31.s64 = ctx.r11.s8;
	// b 0x82765444
	goto loc_82765444;
loc_82764C30:
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// rldicl r31,r10,1,63
	r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82764c50
	if (!ctx.cr0.lt) goto loc_82764C50;
	// bl 0x82725e38
	ctx.lr = 0x82764C50;
	sub_82725E38(ctx, base);
loc_82764C50:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82764e10
	if (ctx.cr6.eq) goto loc_82764E10;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827654d4
	if (!ctx.cr6.eq) goto loc_827654D4;
	// lbz r4,8(r23)
	ctx.r4.u64 = REX_LOAD_U8(r23.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r23)
	r29.u64 = REX_LOAD_U32(r23.u32 + 0);
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
	// blt cr6,0x82764d54
	if (ctx.cr6.lt) goto loc_82764D54;
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
	// bge cr6,0x82764d4c
	if (!ctx.cr6.lt) goto loc_82764D4C;
loc_82764CB4:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82764ce0
	if (ctx.cr6.lt) goto loc_82764CE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x82764CD0;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82764cb4
	if (ctx.cr6.eq) goto loc_82764CB4;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82764d8c
	goto loc_82764D8C;
loc_82764CE0:
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
loc_82764D4C:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82764d8c
	goto loc_82764D8C;
loc_82764D54:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x82764D5C;
	sub_82725F80(ctx, base);
loc_82764D5C:
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
	ctx.lr = 0x82764D74;
	sub_82725F80(ctx, base);
	// add r10,r30,r26
	ctx.r10.u64 = r30.u64 + r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82764d5c
	if (ctx.cr6.lt) goto loc_82764D5C;
loc_82764D8C:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827654d4
	if (!ctx.cr6.eq) goto loc_827654D4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r17.s32, ctx.xer);
	// beq cr6,0x827654d4
	if (ctx.cr6.eq) goto loc_827654D4;
	// lbzx r10,r11,r19
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r19.u32);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// lbzx r28,r11,r22
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + r22.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// blt cr6,0x82764dcc
	if (ctx.cr6.lt) goto loc_82764DCC;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r24,1
	r24.s64 = 1;
	// b 0x82764dd0
	goto loc_82764DD0;
loc_82764DCC:
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_82764DD0:
	// lbzx r9,r28,r10
	ctx.r9.u64 = REX_LOAD_U8(r28.u32 + ctx.r10.u32);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// bge 0x82764e00
	if (!ctx.cr0.lt) goto loc_82764E00;
	// bl 0x82725e38
	ctx.lr = 0x82764E00;
	sub_82725E38(ctx, base);
loc_82764E00:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82765444
	if (ctx.cr6.eq) goto loc_82765444;
	// neg r31,r31
	r31.s64 = static_cast<int64_t>(-r31.u64);
	// b 0x82765444
	goto loc_82765444;
loc_82764E10:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
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
	// bge 0x82764e38
	if (!ctx.cr0.lt) goto loc_82764E38;
	// bl 0x82725e38
	ctx.lr = 0x82764E38;
	sub_82725E38(ctx, base);
loc_82764E38:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82764ff8
	if (ctx.cr6.eq) goto loc_82764FF8;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827654d4
	if (!ctx.cr6.eq) goto loc_827654D4;
	// lbz r4,8(r23)
	ctx.r4.u64 = REX_LOAD_U8(r23.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r23)
	r29.u64 = REX_LOAD_U32(r23.u32 + 0);
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
	// blt cr6,0x82764f3c
	if (ctx.cr6.lt) goto loc_82764F3C;
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
	// bge cr6,0x82764f34
	if (!ctx.cr6.lt) goto loc_82764F34;
loc_82764E9C:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82764ec8
	if (ctx.cr6.lt) goto loc_82764EC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x82764EB8;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82764e9c
	if (ctx.cr6.eq) goto loc_82764E9C;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82764f74
	goto loc_82764F74;
loc_82764EC8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
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
loc_82764F34:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82764f74
	goto loc_82764F74;
loc_82764F3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x82764F44;
	sub_82725F80(ctx, base);
loc_82764F44:
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
	ctx.lr = 0x82764F5C;
	sub_82725F80(ctx, base);
	// add r10,r30,r26
	ctx.r10.u64 = r30.u64 + r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82764f44
	if (ctx.cr6.lt) goto loc_82764F44;
loc_82764F74:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827654d4
	if (!ctx.cr6.eq) goto loc_827654D4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r17.s32, ctx.xer);
	// beq cr6,0x827654d4
	if (ctx.cr6.eq) goto loc_827654D4;
	// lbzx r10,r11,r19
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r19.u32);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// lbzx r11,r11,r22
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r22.u32);
	// lwz r9,1932(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 1932);
	// extsb r31,r10
	r31.s64 = ctx.r10.s8;
	// blt cr6,0x82764fb8
	if (ctx.cr6.lt) goto loc_82764FB8;
	// lbzx r10,r31,r16
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + r16.u32);
	// li r24,1
	r24.s64 = 1;
	// b 0x82764fbc
	goto loc_82764FBC;
loc_82764FB8:
	// lbzx r10,r31,r14
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + r14.u32);
loc_82764FBC:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// bge 0x82764fe8
	if (!ctx.cr0.lt) goto loc_82764FE8;
	// bl 0x82725e38
	ctx.lr = 0x82764FE8;
	sub_82725E38(ctx, base);
loc_82764FE8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82765444
	if (ctx.cr6.eq) goto loc_82765444;
	// neg r31,r31
	r31.s64 = static_cast<int64_t>(-r31.u64);
	// b 0x82765444
	goto loc_82765444;
loc_82764FF8:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
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
	// bge 0x82765020
	if (!ctx.cr0.lt) goto loc_82765020;
	// bl 0x82725e38
	ctx.lr = 0x82765020;
	sub_82725E38(ctx, base);
loc_82765020:
	// lwz r11,15504(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15504);
	// mr r24,r31
	r24.u64 = r31.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x827652e4
	if (ctx.cr6.lt) goto loc_827652E4;
	// lwz r11,1968(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1968);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82765048
	if (ctx.cr6.eq) goto loc_82765048;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82762ce0
	ctx.lr = 0x82765044;
	sub_82762CE0(ctx, base);
	// stw r20,1968(r27)
	REX_STORE_U32(r27.u32 + 1968, r20.u32);
loc_82765048:
	// lwz r30,84(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r29,r20
	r29.u64 = r20.u64;
	// lwz r31,1976(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 1976);
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(r31.u32, 32, ctx.xer);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x8276506c
	if (!ctx.cr6.gt) goto loc_8276506C;
	// mr r28,r20
	r28.u64 = r20.u64;
	// b 0x82765118
	goto loc_82765118;
loc_8276506C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8276507c
	if (!ctx.cr6.eq) goto loc_8276507C;
	// mr r28,r20
	r28.u64 = r20.u64;
	// b 0x82765118
	goto loc_82765118;
loc_8276507C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827650dc
	if (!ctx.cr6.gt) goto loc_827650DC;
loc_82765084:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827650dc
	if (ctx.cr6.eq) goto loc_827650DC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r31,r11,r31
	r31.u64 = r31.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r31.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// bge 0x827650cc
	if (!ctx.cr0.lt) goto loc_827650CC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x827650CC;
	sub_82725E38(ctx, base);
loc_827650CC:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82765084
	if (ctx.cr6.gt) goto loc_82765084;
loc_827650DC:
	// subfic r11,r31,64
	ctx.xer.ca = r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r31.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r8,r31,32
	ctx.r8.u64 = r31.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r31,r10
	ctx.r6.u64 = ctx.r10.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r4.u64);
	// bge 0x82765114
	if (!ctx.cr0.lt) goto loc_82765114;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x82765114;
	sub_82725E38(ctx, base);
loc_82765114:
	// mr r28,r31
	r28.u64 = r31.u64;
loc_82765118:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
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
	// bge 0x82765140
	if (!ctx.cr0.lt) goto loc_82765140;
	// bl 0x82725e38
	ctx.lr = 0x82765140;
	sub_82725E38(ctx, base);
loc_82765140:
	// lwz r30,84(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lwz r31,1972(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 1972);
	// mr r29,r20
	r29.u64 = r20.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x82765228
	if (ctx.cr6.eq) goto loc_82765228;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(r31.u32, 32, ctx.xer);
	// ble cr6,0x82765170
	if (!ctx.cr6.gt) goto loc_82765170;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// neg r31,r20
	r31.s64 = static_cast<int64_t>(-r20.u64);
	// b 0x82765444
	goto loc_82765444;
loc_82765170:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82765184
	if (!ctx.cr6.eq) goto loc_82765184;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// neg r31,r20
	r31.s64 = static_cast<int64_t>(-r20.u64);
	// b 0x82765444
	goto loc_82765444;
loc_82765184:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827651e4
	if (!ctx.cr6.gt) goto loc_827651E4;
loc_8276518C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827651e4
	if (ctx.cr6.eq) goto loc_827651E4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r31,r11,r31
	r31.u64 = r31.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r31.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// bge 0x827651d4
	if (!ctx.cr0.lt) goto loc_827651D4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x827651D4;
	sub_82725E38(ctx, base);
loc_827651D4:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8276518c
	if (ctx.cr6.gt) goto loc_8276518C;
loc_827651E4:
	// subfic r11,r31,64
	ctx.xer.ca = r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r31.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r8,r31,32
	ctx.r8.u64 = r31.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r31,r10
	ctx.r6.u64 = ctx.r10.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r4.u64);
	// bge 0x8276521c
	if (!ctx.cr0.lt) goto loc_8276521C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x8276521C;
	sub_82725E38(ctx, base);
loc_8276521C:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// neg r31,r31
	r31.s64 = static_cast<int64_t>(-r31.u64);
	// b 0x82765444
	goto loc_82765444;
loc_82765228:
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(r31.u32, 32, ctx.xer);
	// ble cr6,0x82765238
	if (!ctx.cr6.gt) goto loc_82765238;
	// mr r31,r20
	r31.u64 = r20.u64;
	// b 0x82765444
	goto loc_82765444;
loc_82765238:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82765248
	if (!ctx.cr6.eq) goto loc_82765248;
	// mr r31,r20
	r31.u64 = r20.u64;
	// b 0x82765444
	goto loc_82765444;
loc_82765248:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827652a8
	if (!ctx.cr6.gt) goto loc_827652A8;
loc_82765250:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827652a8
	if (ctx.cr6.eq) goto loc_827652A8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r31,r11,r31
	r31.u64 = r31.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r31.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// bge 0x82765298
	if (!ctx.cr0.lt) goto loc_82765298;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x82765298;
	sub_82725E38(ctx, base);
loc_82765298:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82765250
	if (ctx.cr6.gt) goto loc_82765250;
loc_827652A8:
	// subfic r11,r31,64
	ctx.xer.ca = r31.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r31.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r8,r31,32
	ctx.r8.u64 = r31.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r31,r10
	ctx.r6.u64 = ctx.r10.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r4.u64);
	// bge 0x82765444
	if (!ctx.cr0.lt) goto loc_82765444;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x827652E0;
	sub_82725E38(ctx, base);
	// b 0x82765444
	goto loc_82765444;
loc_827652E4:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,6
	r30.s64 = 6;
	// mr r29,r20
	r29.u64 = r20.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x82765358
	if (!ctx.cr6.lt) goto loc_82765358;
loc_82765300:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82765358
	if (ctx.cr6.eq) goto loc_82765358;
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
	// bge 0x82765348
	if (!ctx.cr0.lt) goto loc_82765348;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82765348;
	sub_82725E38(ctx, base);
loc_82765348:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82765300
	if (ctx.cr6.gt) goto loc_82765300;
loc_82765358:
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
	// bge 0x82765390
	if (!ctx.cr0.lt) goto loc_82765390;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82765390;
	sub_82725E38(ctx, base);
loc_82765390:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r28,r30
	r28.u64 = r30.u64;
	// li r30,8
	r30.s64 = 8;
	// mr r29,r20
	r29.u64 = r20.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82765408
	if (!ctx.cr6.lt) goto loc_82765408;
loc_827653B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82765408
	if (ctx.cr6.eq) goto loc_82765408;
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
	// bge 0x827653f8
	if (!ctx.cr0.lt) goto loc_827653F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827653F8;
	sub_82725E38(ctx, base);
loc_827653F8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827653b0
	if (ctx.cr6.gt) goto loc_827653B0;
loc_82765408:
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
	// bge 0x82765440
	if (!ctx.cr0.lt) goto loc_82765440;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82765440;
	sub_82725E38(ctx, base);
loc_82765440:
	// extsb r31,r30
	r31.s64 = r30.s8;
loc_82765444:
	// lwz r11,84(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827654d4
	if (!ctx.cr6.eq) goto loc_827654D4;
	// add r11,r28,r18
	ctx.r11.u64 = r28.u64 + r18.u64;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x827654d4
	if (!ctx.cr6.lt) goto loc_827654D4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x827654d4
	if (ctx.cr6.eq) goto loc_827654D4;
	// lbzx r9,r11,r15
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + r15.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lhz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// addi r18,r11,1
	r18.s64 = ctx.r11.s64 + 1;
	// rotlwi r3,r9,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r31,r3,r25
	REX_STORE_U16(ctx.r3.u32 + r25.u32, r31.u16);
	// lbzx r8,r11,r15
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + r15.u32);
	// rlwinm r5,r8,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// or r3,r5,r8
	ctx.r3.u64 = ctx.r5.u64 | ctx.r8.u64;
	// sth r10,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// sthx r9,r7,r6
	REX_STORE_U16(ctx.r7.u32 + ctx.r6.u32, ctx.r9.u16);
	// or r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 | ctx.r4.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82764a90
	if (ctx.cr6.eq) goto loc_82764A90;
loc_827654B4:
	// lwz r10,452(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82765590
	if (ctx.cr6.eq) goto loc_82765590;
	// lwz r11,460(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827654e0
	if (ctx.cr6.eq) goto loc_827654E0;
	// lwz r11,1920(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1920);
	// b 0x827654e4
	goto loc_827654E4;
loc_827654D4:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826a1cd0
	return;
loc_827654E0:
	// lwz r11,1916(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1916);
loc_827654E4:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,468(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 0);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r8,0(r25)
	REX_STORE_U16(r25.u32 + 0, ctx.r8.u16);
	// beq cr6,0x82765590
	if (ctx.cr6.eq) goto loc_82765590;
	// li r10,7
	ctx.r10.s64 = 7;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82765520:
	// slw r11,r7,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r9,r25
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + r25.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82765544
	if (ctx.cr6.eq) goto loc_82765544;
	// lhz r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// sthx r11,r9,r25
	REX_STORE_U16(ctx.r9.u32 + r25.u32, ctx.r11.u16);
	// b 0x82765580
	goto loc_82765580;
loc_82765544:
	// lhz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8276555c
	if (ctx.cr6.eq) goto loc_8276555C;
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// or r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 | ctx.r11.u64;
	// or r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 | ctx.r3.u64;
loc_8276555C:
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r9,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// sthx r9,r4,r31
	REX_STORE_U16(ctx.r4.u32 + r31.u32, ctx.r9.u16);
	// sthx r10,r30,r25
	REX_STORE_U16(r30.u32 + r25.u32, ctx.r10.u16);
loc_82765580:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// bdnz 0x82765520
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82765520;
	// b 0x82765598
	goto loc_82765598;
loc_82765590:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
loc_82765598:
	// lhz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U16(r25.u32 + 0);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// lwz r10,476(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r9,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// lhz r7,0(r25)
	ctx.r7.u64 = REX_LOAD_U16(r25.u32 + 0);
	// sth r7,16(r10)
	REX_STORE_U16(ctx.r10.u32 + 16, ctx.r7.u16);
	// lhz r6,2(r25)
	ctx.r6.u64 = REX_LOAD_U16(r25.u32 + 2);
	// sth r6,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r6.u16);
	// lhz r5,16(r25)
	ctx.r5.u64 = REX_LOAD_U16(r25.u32 + 16);
	// sth r5,18(r10)
	REX_STORE_U16(ctx.r10.u32 + 18, ctx.r5.u16);
	// lhz r4,4(r25)
	ctx.r4.u64 = REX_LOAD_U16(r25.u32 + 4);
	// sth r4,4(r10)
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r4.u16);
	// lhz r9,32(r25)
	ctx.r9.u64 = REX_LOAD_U16(r25.u32 + 32);
	// sth r9,20(r10)
	REX_STORE_U16(ctx.r10.u32 + 20, ctx.r9.u16);
	// lhz r7,6(r25)
	ctx.r7.u64 = REX_LOAD_U16(r25.u32 + 6);
	// sth r7,6(r10)
	REX_STORE_U16(ctx.r10.u32 + 6, ctx.r7.u16);
	// lhz r6,48(r25)
	ctx.r6.u64 = REX_LOAD_U16(r25.u32 + 48);
	// sth r6,22(r10)
	REX_STORE_U16(ctx.r10.u32 + 22, ctx.r6.u16);
	// lhz r5,8(r25)
	ctx.r5.u64 = REX_LOAD_U16(r25.u32 + 8);
	// sth r5,8(r10)
	REX_STORE_U16(ctx.r10.u32 + 8, ctx.r5.u16);
	// lhz r4,64(r25)
	ctx.r4.u64 = REX_LOAD_U16(r25.u32 + 64);
	// sth r4,24(r10)
	REX_STORE_U16(ctx.r10.u32 + 24, ctx.r4.u16);
	// lhz r9,10(r25)
	ctx.r9.u64 = REX_LOAD_U16(r25.u32 + 10);
	// sth r9,10(r10)
	REX_STORE_U16(ctx.r10.u32 + 10, ctx.r9.u16);
	// lhz r7,80(r25)
	ctx.r7.u64 = REX_LOAD_U16(r25.u32 + 80);
	// sth r7,26(r10)
	REX_STORE_U16(ctx.r10.u32 + 26, ctx.r7.u16);
	// lhz r6,12(r25)
	ctx.r6.u64 = REX_LOAD_U16(r25.u32 + 12);
	// sth r6,12(r10)
	REX_STORE_U16(ctx.r10.u32 + 12, ctx.r6.u16);
	// lhz r5,96(r25)
	ctx.r5.u64 = REX_LOAD_U16(r25.u32 + 96);
	// sth r5,28(r10)
	REX_STORE_U16(ctx.r10.u32 + 28, ctx.r5.u16);
	// lhz r4,14(r25)
	ctx.r4.u64 = REX_LOAD_U16(r25.u32 + 14);
	// sth r4,14(r10)
	REX_STORE_U16(ctx.r10.u32 + 14, ctx.r4.u16);
	// lhz r9,112(r25)
	ctx.r9.u64 = REX_LOAD_U16(r25.u32 + 112);
	// sth r9,30(r10)
	REX_STORE_U16(ctx.r10.u32 + 30, ctx.r9.u16);
	// lhz r7,0(r25)
	ctx.r7.u64 = REX_LOAD_U16(r25.u32 + 0);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mullw r5,r6,r8
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// sth r5,0(r25)
	REX_STORE_U16(r25.u32 + 0, ctx.r5.u16);
	// ble cr6,0x8276569c
	if (!ctx.cr6.gt) goto loc_8276569C;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
loc_82765654:
	// lhzu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r10,r25
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + r25.u32);
	// extsh r31,r4
	r31.s64 = ctx.r4.s16;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// srawi r11,r31,15
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FFF) != 0);
	ctx.r11.s64 = r31.s32 >> 15;
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// xor r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r5.u64;
	// subfic r4,r31,0
	ctx.xer.ca = r31.u32 <= 0;
	ctx.r4.u64 = static_cast<uint64_t>(0) - r31.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subfe r7,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subf r4,r11,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r11.u64;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// and r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 & ctx.r7.u64;
	// sthx r8,r10,r25
	REX_STORE_U16(ctx.r10.u32 + r25.u32, ctx.r8.u16);
	// bdnz 0x82765654
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82765654;
loc_8276569C:
	// li r11,255
	ctx.r11.s64 = 255;
	// lwz r10,3204(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 3204);
	// lwz r4,500(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r11,1940(r27)
	REX_STORE_U32(r27.u32 + 1940, ctx.r11.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r5,508(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827656C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_827656C4:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_827B9AE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// li r9,1104
	ctx.r9.s64 = 1104;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lvx128 v1,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x827b83c0
	sub_827B83C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_827B9B40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// li r9,1104
	ctx.r9.s64 = 1104;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lvx128 v1,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x827b8b68
	sub_827B8B68(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_827BA5C8) {
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
	// bl 0x826a1c80
	ctx.lr = 0x827BA5D0;
	// stwu r1,-1024(r1)
	ea = -1024 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// stw r5,1060(r1)
	REX_STORE_U32(ctx.r1.u32 + 1060, ctx.r5.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r6,1068(r1)
	REX_STORE_U32(ctx.r1.u32 + 1068, ctx.r6.u32);
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// beq cr6,0x827baa68
	if (ctx.cr6.eq) goto loc_827BAA68;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// beq cr6,0x827ba8ac
	if (ctx.cr6.eq) goto loc_827BA8AC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x827ba840
	if (!ctx.cr6.gt) goto loc_827BA840;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r14,-96
	r14.s64 = -96;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// li r5,-48
	ctx.r5.s64 = -48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r7,96
	ctx.r7.s64 = 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r15,144
	r15.s64 = 144;
	// li r16,192
	r16.s64 = 192;
	// li r17,240
	r17.s64 = 240;
	// li r18,-80
	r18.s64 = -80;
	// li r19,-32
	r19.s64 = -32;
	// li r20,64
	r20.s64 = 64;
	// li r21,112
	r21.s64 = 112;
	// li r22,160
	r22.s64 = 160;
	// li r23,208
	r23.s64 = 208;
	// li r24,256
	r24.s64 = 256;
loc_827BA668:
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r31,r4,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v61,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r31,r9
	r31.u64 = r31.u64 + ctx.r9.u64;
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r30,r8,r4
	r30.u64 = ctx.r8.u64 + ctx.r4.u64;
	// vperm128 v5,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// add r26,r9,r4
	r26.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v62,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r27,r31,r4
	r27.u64 = r31.u64 + ctx.r4.u64;
	// add r29,r30,r4
	r29.u64 = r30.u64 + ctx.r4.u64;
	// lvx128 v60,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v28,v0,v5
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r28,r28,r9
	r28.u64 = r28.u64 + ctx.r9.u64;
	// vmrglb v27,v0,v5
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r25,r29,r4
	r25.u64 = r29.u64 + ctx.r4.u64;
	// lvx128 v56,r26,r10
	ea = (r26.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r26
	temp.u32 = r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v59,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v62,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v57,r31,r4
	ea = (r31.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r27,r10
	ea = (r27.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r27
	temp.u32 = r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v4,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v11,v59,v55,v6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v3,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v10,v57,v54,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v9,v60,v53,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v51,r30,r4
	ea = (r30.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v58,v52,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvx128 v50,r29,r4
	ea = (r29.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r29,r10
	ea = (r29.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v3,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v48,r25,r10
	ea = (r25.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v2,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v47,r28,r10
	ea = (r28.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v1,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v46,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v31,v0,v9
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v5,r0,r28
	temp.u32 = r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v30,v0,v8
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v7,r0,r29
	temp.u32 = r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v6,r0,r25
	temp.u32 = r25.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v46,v47,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v7,v51,v49,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vadduhm v23,v3,v28
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vperm128 v6,v50,v48,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vadduhm v26,v2,v3
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vmrglb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v25,v1,v2
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrghb v20,v0,v4
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v24,v31,v1
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vmrghb v29,v0,v7
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v22,v30,v31
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vmrghb v28,v0,v6
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v21,v12,v27
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v19,v11,v12
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrglb v14,v0,v4
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v18,v29,v30
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v17,v28,v29
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v15,v20,v28
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v12,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v5,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v2,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v1,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v16,r11,r14
	ea = (ctx.r11.u32 + r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v31,v8,v9
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v12,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v30,v7,v8
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v5,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v29,v6,v7
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// stvx128 v4,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v28,v14,v6
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// stvx128 v3,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v27,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// vslh v26,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v27,r11,r15
	ea = (ctx.r11.u32 + r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v22,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v26,r11,r16
	ea = (ctx.r11.u32 + r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v21,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v24,r11,r18
	ea = (ctx.r11.u32 + r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v20,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v23,r11,r19
	ea = (ctx.r11.u32 + r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v19,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r11,r17
	ea = (ctx.r11.u32 + r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v18,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v22,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v17,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v21,r11,r20
	ea = (ctx.r11.u32 + r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r11,r21
	ea = (ctx.r11.u32 + r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r11,r22
	ea = (ctx.r11.u32 + r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v18,r11,r23
	ea = (ctx.r11.u32 + r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r11,r24
	ea = (ctx.r11.u32 + r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,384
	ctx.r11.s64 = ctx.r11.s64 + 384;
	// bdnz 0x827ba668
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BA668;
	// lwz r28,1068(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1068);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_827BA840:
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x827bab28
	if (!ctx.cr6.gt) goto loc_827BAB28;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r29,r10,r4
	r29.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r9,r3,-48
	ctx.r9.s64 = ctx.r3.s64 + -48;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_827BA874:
	// lbzx r6,r29,r11
	ctx.r6.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// lbzux r3,r8,r10
	ea = ctx.r8.u32 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lbz r30,0(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// add r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r3,r30,r6
	ctx.r3.u64 = r30.u64 + ctx.r6.u64;
	// rlwinm r6,r5,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r6,48(r9)
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r6.u16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sthu r5,96(r9)
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x827ba874
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BA874;
	// b 0x827bab28
	goto loc_827BAB28;
loc_827BA8AC:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v45,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v44,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r30,r3,r4
	r30.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r31,r11,r4
	r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v43,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lvsl v2,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v45,v43,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v42,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvx128 v41,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v30,v44,v38,v2
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvx128 v40,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,192
	r29.s64 = ctx.r1.s64 + 192;
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v39,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v31,v0,v6
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v4,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r11,r4
	r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vperm128 v3,v42,v41,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v35,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v40,v39,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v34,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v12,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v37,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v36,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,240
	r30.s64 = ctx.r1.s64 + 240;
	// lvx128 v62,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v33,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v10,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v32,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v5,v12,v31
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// lvx128 v63,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,288
	r27.s64 = ctx.r1.s64 + 288;
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lvsl v2,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v30,v11,v12
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v3,v63,v37,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v4,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v28,v36,v62,v2
	simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vperm128 v1,v35,v33,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// vperm128 v31,v34,v32,v4
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vadduhm v29,v10,v11
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghb v7,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v26,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v6,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v27,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v9,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r31,r1,336
	r31.s64 = ctx.r1.s64 + 336;
	// vmrghb v8,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,384
	r26.s64 = ctx.r1.s64 + 384;
	// vadduhm v3,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v25,v9,v10
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// addi r25,r1,432
	r25.s64 = ctx.r1.s64 + 432;
	// vadduhm v24,v8,v9
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v26,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v4,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v27,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v2,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v1,v61,v60,v5
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vslh v31,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r5,4
	ctx.r5.s64 = 4;
	// vslh v30,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v27,v0,v1
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r9,r1,64
	ctx.r9.s64 = ctx.r1.s64 + 64;
	// stvx128 v2,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stvx128 v31,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v26,v27,v6
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// stvx128 v30,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v29,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r5,r11,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r11.u64;
	// stvx128 v28,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// vslh v25,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_827BAA30:
	// lbzx r6,r10,r5
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// lbzux r30,r8,r11
	ea = ctx.r8.u32 + ctx.r11.u32;
	r30.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// lbz r31,0(r10)
	r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// add r6,r30,r6
	ctx.r6.u64 = r30.u64 + ctx.r6.u64;
	// add r3,r31,r3
	ctx.r3.u64 = r31.u64 + ctx.r3.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r6,48(r9)
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r6.u16);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sthu r3,96(r9)
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x827baa30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BAA30;
	// b 0x827bab28
	goto loc_827BAB28;
loc_827BAA68:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v59,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v58,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r10,16
	ctx.r10.s64 = 16;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v57,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvx128 v56,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,144
	r31.s64 = ctx.r1.s64 + 144;
	// lvx128 v55,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,192
	r30.s64 = ctx.r1.s64 + 192;
	// lvx128 v54,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,240
	r29.s64 = ctx.r1.s64 + 240;
	// lvx128 v53,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v6,v59,v52,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v3,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v2,v58,v54,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvsl v1,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v31,v57,v55,v4
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vperm128 v30,v56,v53,v3
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vperm128 v29,v50,v51,v1
	simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v12,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v28,v0,v6
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v27,v0,v29
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v26,v11,v12
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v25,v10,v11
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v24,v12,v28
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v23,v27,v10
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v22,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v22,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_827BAB28:
	// li r11,1104
	ctx.r11.s64 = 1104;
	// lwz r5,1060(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1060);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v1,r28,r11
	ea = (r28.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x827b9620
	ctx.lr = 0x827BAB40;
	sub_827B9620(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x826a1cd0
	return;
}

